// Lean compiler output
// Module: Lean.Meta.Hint
// Imports: public import Lean.Meta.TryThis public import Lean.Util.Diff import Init.Data.String.Csimp
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
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Subarray_take___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_split___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Diff_instBEqAction_beq(uint8_t, uint8_t);
uint64_t lean_uint32_to_uint64(uint32_t);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* l_Lean_MessageData_nestD(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Lsp_instToJsonRange_toJson(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
extern lean_object* l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_;
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
static const lean_string_object l_Lean_Meta_Hint_textInsertionWidget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1770, .m_capacity = 1770, .m_length = 1769, .m_data = "\nimport * as React from 'react';\nimport { EditorContext, EnvPosContext } from '@leanprover/infoview';\n\nconst e = React.createElement;\nexport default function ({ range, suggestion, acceptSuggestionProps }) {\n  const pos = React.useContext(EnvPosContext)\n  const editorConnection = React.useContext(EditorContext)\n  function onClick() {\n    editorConnection.api.applyEdit({\n      changes: { [pos.uri]: [{ range, newText: suggestion }] }\n    })\n  }\n\n  if (acceptSuggestionProps.kind === 'text') {\n    return e('span', {\n        onClick,\n        title: acceptSuggestionProps.hoverText,\n        className: 'link pointer dim font-code',\n        style: { color: 'var(--vscode-textLink-foreground)' }\n      },\n      acceptSuggestionProps.linkText)\n  } else if (acceptSuggestionProps.kind === 'icon') {\n    if (acceptSuggestionProps.gaps) {\n      const icon = e('span', {\n        className: `codicon codicon-${acceptSuggestionProps.codiconName}`,\n        style: {\n          verticalAlign: 'sub',\n          fontSize: 'var(--vscode-editor-font-size)'\n        }\n      })\n      return e('span', {\n        onClick,\n        title: acceptSuggestionProps.hoverText,\n        className: `link pointer dim font-code`,\n        style: { color: 'var(--vscode-textLink-foreground)' }\n      }, ' ', icon, ' ')\n    } else {\n      return e('span', {\n        onClick,\n        title: acceptSuggestionProps.hoverText,\n        className: `link pointer dim font-code codicon codicon-${acceptSuggestionProps.codiconName}`,\n        style: {\n          color: 'var(--vscode-textLink-foreground)',\n          verticalAlign: 'sub',\n          fontSize: 'var(--vscode-editor-font-size)'\n        }\n      })\n    }\n\n  }\n  throw new Error('Unexpected `acceptSuggestionProps` kind: ' + acceptSuggestionProps.kind)\n}"};
static const lean_object* l_Lean_Meta_Hint_textInsertionWidget___closed__0 = (const lean_object*)&l_Lean_Meta_Hint_textInsertionWidget___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Hint_textInsertionWidget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Hint_textInsertionWidget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 128, 13, 188, 175, 182, 195)}};
static const lean_object* l_Lean_Meta_Hint_textInsertionWidget___closed__1 = (const lean_object*)&l_Lean_Meta_Hint_textInsertionWidget___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Hint_textInsertionWidget = (const lean_object*)&l_Lean_Meta_Hint_textInsertionWidget___closed__1_value;
static const lean_string_object l_Lean_Meta_Hint_tryThisDiffWidget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1142, .m_capacity = 1142, .m_length = 1141, .m_data = "\nimport * as React from 'react';\nimport { EditorContext, EnvPosContext } from '@leanprover/infoview';\n\nconst e = React.createElement;\nexport default function ({ diff, range, suggestion }) {\n  const pos = React.useContext(EnvPosContext)\n  const editorConnection = React.useContext(EditorContext)\n  const insStyle = {\n    style: { color: 'var(--vscode-textLink-foreground)' }\n  }\n  const delStyle = {\n    style: { color: 'var(--vscode-editorError-foreground)', textDecoration: 'line-through' }\n  }\n  const defStyle = {\n    style: { color: 'var(--vscode-editor-foreground)' }\n  }\n  function onClick() {\n    editorConnection.api.applyEdit({\n      changes: { [pos.uri]: [{ range, newText: suggestion }] }\n    })\n  }\n\n  const spans = diff.map (comp =>\n    comp.type === 'deletion' \? e('span', delStyle, comp.text) :\n    comp.type === 'insertion' \? e('span', insStyle, comp.text) :\n      e('span', defStyle, comp.text)\n  )\n  const fullDiff = e('span',\n    { onClick,\n      title: 'Apply suggestion',\n      className: 'link pointer dim font-code',\n      style: { display: 'inline-block', verticalAlign: 'text-top' } },\n    spans)\n  return fullDiff\n}"};
static const lean_object* l_Lean_Meta_Hint_tryThisDiffWidget___closed__0 = (const lean_object*)&l_Lean_Meta_Hint_tryThisDiffWidget___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Hint_tryThisDiffWidget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Hint_tryThisDiffWidget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 197, 103, 127, 237, 67, 160, 93)}};
static const lean_object* l_Lean_Meta_Hint_tryThisDiffWidget___closed__1 = (const lean_object*)&l_Lean_Meta_Hint_tryThisDiffWidget___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Hint_tryThisDiffWidget = (const lean_object*)&l_Lean_Meta_Hint_tryThisDiffWidget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "insertion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__1_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__2_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "deletion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__5_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__6_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "unchanged"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__8_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__0_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__9_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion = (const lean_object*)&l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_instToMessageDataSuggestion___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Hint_instToMessageDataSuggestion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Hint_instToMessageDataSuggestion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Hint_instToMessageDataSuggestion___closed__0 = (const lean_object*)&l_Lean_Meta_Hint_instToMessageDataSuggestion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Hint_instToMessageDataSuggestion = (const lean_object*)&l_Lean_Meta_Hint_instToMessageDataSuggestion___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0;
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0_value),((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1_value)}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__2 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24(lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0;
static lean_once_cell_t l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0_value),((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__1_value)}};
static const lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__1 = (const lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__0 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__1 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__0_value),((lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__2 = (const lean_object*)&l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_charDiff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_maxDiff(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_readableDiff(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_readableDiff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___lam__0(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Hint"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tryThisDiffWidget"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(141, 179, 88, 64, 208, 112, 210, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__7_value),LEAN_SCALAR_PTR_LITERAL(174, 189, 209, 40, 106, 230, 251, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "diff"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "suggestion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linkText"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[apply]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__14_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__12_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__14_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "textInsertionWidget"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(141, 179, 88, 64, 208, 112, 210, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(137, 84, 167, 88, 42, 220, 7, 88)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "acceptSuggestionProps"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__20_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__21_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__20_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__21_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "hoverText"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Apply suggestion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__24_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__24_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__25_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__23_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__25_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__26_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__26_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__16_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__27_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__22_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__27_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__28_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__13_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__32_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__34_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Try this: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__36_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_hint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hint"};
static const lean_object* l_Lean_MessageData_hint___closed__0 = (const lean_object*)&l_Lean_MessageData_hint___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_hint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_hint___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 129, 8, 98, 135, 223, 96, 106)}};
static const lean_object* l_Lean_MessageData_hint___closed__1 = (const lean_object*)&l_Lean_MessageData_hint___closed__1_value;
static const lean_string_object l_Lean_MessageData_hint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n\nHint: "};
static const lean_object* l_Lean_MessageData_hint___closed__2 = (const lean_object*)&l_Lean_MessageData_hint___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_hint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_hint___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_hint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1(size_t v_sz_11_, size_t v_i_12_, lean_object* v_bs_13_){
_start:
{
uint8_t v___x_14_; 
v___x_14_ = lean_usize_dec_lt(v_i_12_, v_sz_11_);
if (v___x_14_ == 0)
{
return v_bs_13_;
}
else
{
lean_object* v_v_15_; lean_object* v___x_16_; lean_object* v_bs_x27_17_; size_t v___x_18_; size_t v___x_19_; lean_object* v___x_20_; 
v_v_15_ = lean_array_uget(v_bs_13_, v_i_12_);
v___x_16_ = lean_unsigned_to_nat(0u);
v_bs_x27_17_ = lean_array_uset(v_bs_13_, v_i_12_, v___x_16_);
v___x_18_ = ((size_t)1ULL);
v___x_19_ = lean_usize_add(v_i_12_, v___x_18_);
v___x_20_ = lean_array_uset(v_bs_x27_17_, v_i_12_, v_v_15_);
v_i_12_ = v___x_19_;
v_bs_13_ = v___x_20_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1___boxed(lean_object* v_sz_22_, lean_object* v_i_23_, lean_object* v_bs_24_){
_start:
{
size_t v_sz_boxed_25_; size_t v_i_boxed_26_; lean_object* v_res_27_; 
v_sz_boxed_25_ = lean_unbox_usize(v_sz_22_);
lean_dec(v_sz_22_);
v_i_boxed_26_ = lean_unbox_usize(v_i_23_);
lean_dec(v_i_23_);
v_res_27_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1(v_sz_boxed_25_, v_i_boxed_26_, v_bs_24_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1(lean_object* v_a_28_){
_start:
{
size_t v_sz_29_; size_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v_sz_29_ = lean_array_size(v_a_28_);
v___x_30_ = ((size_t)0ULL);
v___x_31_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1_spec__1(v_sz_29_, v___x_30_, v_a_28_);
v___x_32_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0(size_t v_sz_53_, size_t v_i_54_, lean_object* v_bs_55_){
_start:
{
uint8_t v___x_56_; 
v___x_56_ = lean_usize_dec_lt(v_i_54_, v_sz_53_);
if (v___x_56_ == 0)
{
return v_bs_55_;
}
else
{
lean_object* v_v_57_; lean_object* v_fst_58_; lean_object* v_snd_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_102_; 
v_v_57_ = lean_array_uget(v_bs_55_, v_i_54_);
v_fst_58_ = lean_ctor_get(v_v_57_, 0);
v_snd_59_ = lean_ctor_get(v_v_57_, 1);
v_isSharedCheck_102_ = !lean_is_exclusive(v_v_57_);
if (v_isSharedCheck_102_ == 0)
{
v___x_61_ = v_v_57_;
v_isShared_62_ = v_isSharedCheck_102_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_snd_59_);
lean_inc(v_fst_58_);
lean_dec(v_v_57_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_102_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v___x_63_; lean_object* v_bs_x27_64_; lean_object* v___y_66_; uint8_t v___x_71_; 
v___x_63_ = lean_unsigned_to_nat(0u);
v_bs_x27_64_ = lean_array_uset(v_bs_55_, v_i_54_, v___x_63_);
v___x_71_ = lean_unbox(v_fst_58_);
lean_dec(v_fst_58_);
switch(v___x_71_)
{
case 0:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_76_; 
v___x_72_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__3));
v___x_73_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4));
v___x_74_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_74_, 0, v_snd_59_);
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 1, v___x_74_);
lean_ctor_set(v___x_61_, 0, v___x_73_);
v___x_76_ = v___x_61_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_73_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v___x_74_);
v___x_76_ = v_reuseFailAlloc_81_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_77_ = lean_box(0);
v___x_78_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_76_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_72_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = l_Lean_Json_mkObj(v___x_79_);
lean_dec_ref_known(v___x_79_, 2);
v___y_66_ = v___x_80_;
goto v___jp_65_;
}
}
case 1:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_86_; 
v___x_82_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__7));
v___x_83_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4));
v___x_84_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_84_, 0, v_snd_59_);
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 1, v___x_84_);
lean_ctor_set(v___x_61_, 0, v___x_83_);
v___x_86_ = v___x_61_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_83_);
lean_ctor_set(v_reuseFailAlloc_91_, 1, v___x_84_);
v___x_86_ = v_reuseFailAlloc_91_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_87_ = lean_box(0);
v___x_88_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_86_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_82_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = l_Lean_Json_mkObj(v___x_89_);
lean_dec_ref_known(v___x_89_, 2);
v___y_66_ = v___x_90_;
goto v___jp_65_;
}
}
default: 
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_96_; 
v___x_92_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__10));
v___x_93_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___closed__4));
v___x_94_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_94_, 0, v_snd_59_);
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 1, v___x_94_);
lean_ctor_set(v___x_61_, 0, v___x_93_);
v___x_96_ = v___x_61_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v___x_94_);
v___x_96_ = v_reuseFailAlloc_101_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_97_ = lean_box(0);
v___x_98_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_96_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
v___x_99_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_92_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = l_Lean_Json_mkObj(v___x_99_);
lean_dec_ref_known(v___x_99_, 2);
v___y_66_ = v___x_100_;
goto v___jp_65_;
}
}
}
v___jp_65_:
{
size_t v___x_67_; size_t v___x_68_; lean_object* v___x_69_; 
v___x_67_ = ((size_t)1ULL);
v___x_68_ = lean_usize_add(v_i_54_, v___x_67_);
v___x_69_ = lean_array_uset(v_bs_x27_64_, v_i_54_, v___y_66_);
v_i_54_ = v___x_68_;
v_bs_55_ = v___x_69_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0___boxed(lean_object* v_sz_103_, lean_object* v_i_104_, lean_object* v_bs_105_){
_start:
{
size_t v_sz_boxed_106_; size_t v_i_boxed_107_; lean_object* v_res_108_; 
v_sz_boxed_106_ = lean_unbox_usize(v_sz_103_);
lean_dec(v_sz_103_);
v_i_boxed_107_ = lean_unbox_usize(v_i_104_);
lean_dec(v_i_104_);
v_res_108_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0(v_sz_boxed_106_, v_i_boxed_107_, v_bs_105_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson(lean_object* v_ds_109_){
_start:
{
size_t v_sz_110_; size_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_sz_110_ = lean_array_size(v_ds_109_);
v___x_111_ = ((size_t)0ULL);
v___x_112_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__0(v_sz_110_, v___x_111_, v_ds_109_);
v___x_113_ = l_Lean_Array_toJson___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson_spec__1(v___x_112_);
return v___x_113_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_114_; lean_object* v___x_115_; 
v___x_114_ = 821;
v___x_115_ = lean_box_uint32(v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = lean_box(0);
v___x_117_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1;
v___x_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set(v___x_118_, 1, v___x_116_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1(lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
if (lean_obj_tag(v_a_119_) == 0)
{
lean_object* v___x_121_; 
v___x_121_ = lean_array_to_list(v_a_120_);
return v___x_121_;
}
else
{
lean_object* v_head_122_; lean_object* v_tail_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_133_; 
v_head_122_ = lean_ctor_get(v_a_119_, 0);
v_tail_123_ = lean_ctor_get(v_a_119_, 1);
v_isSharedCheck_133_ = !lean_is_exclusive(v_a_119_);
if (v_isSharedCheck_133_ == 0)
{
v___x_125_ = v_a_119_;
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_tail_123_);
lean_inc(v_head_122_);
lean_dec(v_a_119_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = lean_obj_once(&l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0, &l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0_once, _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___x_127_);
v___x_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_head_122_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v___x_127_);
v___x_129_ = v_reuseFailAlloc_132_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_130_; 
v___x_130_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_120_, v___x_129_);
v_a_119_ = v_tail_123_;
v_a_120_ = v___x_130_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_134_; lean_object* v___x_135_; 
v___x_134_ = 818;
v___x_135_ = lean_box_uint32(v___x_134_);
return v___x_135_;
}
}
static lean_object* _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = lean_box(0);
v___x_137_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1;
v___x_138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___x_136_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0(lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
if (lean_obj_tag(v_a_139_) == 0)
{
lean_object* v___x_141_; 
v___x_141_ = lean_array_to_list(v_a_140_);
return v___x_141_;
}
else
{
lean_object* v_head_142_; lean_object* v_tail_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_153_; 
v_head_142_ = lean_ctor_get(v_a_139_, 0);
v_tail_143_ = lean_ctor_get(v_a_139_, 1);
v_isSharedCheck_153_ = !lean_is_exclusive(v_a_139_);
if (v_isSharedCheck_153_ == 0)
{
v___x_145_ = v_a_139_;
v_isShared_146_ = v_isSharedCheck_153_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_tail_143_);
lean_inc(v_head_142_);
lean_dec(v_a_139_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_153_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_147_ = lean_obj_once(&l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0, &l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0_once, _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 1, v___x_147_);
v___x_149_ = v___x_145_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_head_142_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v___x_147_);
v___x_149_ = v_reuseFailAlloc_152_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v___x_150_; 
v___x_150_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_140_, v___x_149_);
v_a_139_ = v_tail_143_;
v_a_140_ = v___x_150_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2(size_t v_sz_156_, size_t v_i_157_, lean_object* v_bs_158_){
_start:
{
uint8_t v___x_159_; 
v___x_159_ = lean_usize_dec_lt(v_i_157_, v_sz_156_);
if (v___x_159_ == 0)
{
return v_bs_158_;
}
else
{
lean_object* v_v_160_; lean_object* v_fst_161_; lean_object* v_snd_162_; lean_object* v___x_163_; lean_object* v_bs_x27_164_; lean_object* v___y_166_; uint8_t v___x_171_; 
v_v_160_ = lean_array_uget_borrowed(v_bs_158_, v_i_157_);
v_fst_161_ = lean_ctor_get(v_v_160_, 0);
lean_inc(v_fst_161_);
v_snd_162_ = lean_ctor_get(v_v_160_, 1);
lean_inc(v_snd_162_);
v___x_163_ = lean_unsigned_to_nat(0u);
v_bs_x27_164_ = lean_array_uset(v_bs_158_, v_i_157_, v___x_163_);
v___x_171_ = lean_unbox(v_fst_161_);
lean_dec(v_fst_161_);
switch(v___x_171_)
{
case 0:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_172_ = l_String_toListImpl(v_snd_162_);
v___x_173_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_174_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0(v___x_172_, v___x_173_);
v___x_175_ = lean_string_mk(v___x_174_);
v___y_166_ = v___x_175_;
goto v___jp_165_;
}
case 1:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_176_ = l_String_toListImpl(v_snd_162_);
v___x_177_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_178_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1(v___x_176_, v___x_177_);
v___x_179_ = lean_string_mk(v___x_178_);
v___y_166_ = v___x_179_;
goto v___jp_165_;
}
default: 
{
v___y_166_ = v_snd_162_;
goto v___jp_165_;
}
}
v___jp_165_:
{
size_t v___x_167_; size_t v___x_168_; lean_object* v___x_169_; 
v___x_167_ = ((size_t)1ULL);
v___x_168_ = lean_usize_add(v_i_157_, v___x_167_);
v___x_169_ = lean_array_uset(v_bs_x27_164_, v_i_157_, v___y_166_);
v_i_157_ = v___x_168_;
v_bs_158_ = v___x_169_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___boxed(lean_object* v_sz_180_, lean_object* v_i_181_, lean_object* v_bs_182_){
_start:
{
size_t v_sz_boxed_183_; size_t v_i_boxed_184_; lean_object* v_res_185_; 
v_sz_boxed_183_ = lean_unbox_usize(v_sz_180_);
lean_dec(v_sz_180_);
v_i_boxed_184_ = lean_unbox_usize(v_i_181_);
lean_dec(v_i_181_);
v_res_185_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2(v_sz_boxed_183_, v_i_boxed_184_, v_bs_182_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(lean_object* v_as_186_, size_t v_i_187_, size_t v_stop_188_, lean_object* v_b_189_){
_start:
{
uint8_t v___x_190_; 
v___x_190_ = lean_usize_dec_eq(v_i_187_, v_stop_188_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; lean_object* v___x_192_; size_t v___x_193_; size_t v___x_194_; 
v___x_191_ = lean_array_uget_borrowed(v_as_186_, v_i_187_);
v___x_192_ = lean_string_append(v_b_189_, v___x_191_);
v___x_193_ = ((size_t)1ULL);
v___x_194_ = lean_usize_add(v_i_187_, v___x_193_);
v_i_187_ = v___x_194_;
v_b_189_ = v___x_192_;
goto _start;
}
else
{
return v_b_189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3___boxed(lean_object* v_as_196_, lean_object* v_i_197_, lean_object* v_stop_198_, lean_object* v_b_199_){
_start:
{
size_t v_i_boxed_200_; size_t v_stop_boxed_201_; lean_object* v_res_202_; 
v_i_boxed_200_ = lean_unbox_usize(v_i_197_);
lean_dec(v_i_197_);
v_stop_boxed_201_ = lean_unbox_usize(v_stop_198_);
lean_dec(v_stop_198_);
v_res_202_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(v_as_196_, v_i_boxed_200_, v_stop_boxed_201_, v_b_199_);
lean_dec_ref(v_as_196_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString(lean_object* v_ds_204_){
_start:
{
size_t v_sz_205_; size_t v___x_206_; lean_object* v_rangeStrs_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_sz_205_ = lean_array_size(v_ds_204_);
v___x_206_ = ((size_t)0ULL);
v_rangeStrs_207_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2(v_sz_205_, v___x_206_, v_ds_204_);
v___x_208_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_209_ = lean_unsigned_to_nat(0u);
v___x_210_ = lean_array_get_size(v_rangeStrs_207_);
v___x_211_ = lean_nat_dec_lt(v___x_209_, v___x_210_);
if (v___x_211_ == 0)
{
lean_dec_ref(v_rangeStrs_207_);
return v___x_208_;
}
else
{
size_t v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_usize_of_nat(v___x_210_);
v___x_213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(v_rangeStrs_207_, v___x_206_, v___x_212_, v___x_208_);
lean_dec_ref(v_rangeStrs_207_);
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorIdx___impl(uint8_t v_x_214_){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_box(v_x_214_);
v___x_216_ = lean_obj_tag_nat(v___x_215_);
lean_dec(v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorIdx___impl___boxed(lean_object* v_x_217_){
_start:
{
uint8_t v_x_4__boxed_218_; lean_object* v_res_219_; 
v_x_4__boxed_218_ = lean_unbox(v_x_217_);
v_res_219_ = l_Lean_Meta_Hint_DiffGranularity_ctorIdx___impl(v_x_4__boxed_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg(lean_object* v_k_220_){
_start:
{
lean_inc(v_k_220_);
return v_k_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg___boxed(lean_object* v_k_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lean_Meta_Hint_DiffGranularity_ctorElim___redArg(v_k_221_);
lean_dec(v_k_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim(lean_object* v_motive_223_, lean_object* v_ctorIdx_224_, uint8_t v_t_225_, lean_object* v_h_226_, lean_object* v_k_227_){
_start:
{
lean_inc(v_k_227_);
return v_k_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_ctorElim___boxed(lean_object* v_motive_228_, lean_object* v_ctorIdx_229_, lean_object* v_t_230_, lean_object* v_h_231_, lean_object* v_k_232_){
_start:
{
uint8_t v_t_boxed_233_; lean_object* v_res_234_; 
v_t_boxed_233_ = lean_unbox(v_t_230_);
v_res_234_ = l_Lean_Meta_Hint_DiffGranularity_ctorElim(v_motive_228_, v_ctorIdx_229_, v_t_boxed_233_, v_h_231_, v_k_232_);
lean_dec(v_k_232_);
lean_dec(v_ctorIdx_229_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg(lean_object* v_auto_235_){
_start:
{
lean_inc(v_auto_235_);
return v_auto_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg___boxed(lean_object* v_auto_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_Meta_Hint_DiffGranularity_auto_elim___redArg(v_auto_236_);
lean_dec(v_auto_236_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim(lean_object* v_motive_238_, uint8_t v_t_239_, lean_object* v_h_240_, lean_object* v_auto_241_){
_start:
{
lean_inc(v_auto_241_);
return v_auto_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_auto_elim___boxed(lean_object* v_motive_242_, lean_object* v_t_243_, lean_object* v_h_244_, lean_object* v_auto_245_){
_start:
{
uint8_t v_t_boxed_246_; lean_object* v_res_247_; 
v_t_boxed_246_ = lean_unbox(v_t_243_);
v_res_247_ = l_Lean_Meta_Hint_DiffGranularity_auto_elim(v_motive_242_, v_t_boxed_246_, v_h_244_, v_auto_245_);
lean_dec(v_auto_245_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg(lean_object* v_char_248_){
_start:
{
lean_inc(v_char_248_);
return v_char_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg___boxed(lean_object* v_char_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_Meta_Hint_DiffGranularity_char_elim___redArg(v_char_249_);
lean_dec(v_char_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim(lean_object* v_motive_251_, uint8_t v_t_252_, lean_object* v_h_253_, lean_object* v_char_254_){
_start:
{
lean_inc(v_char_254_);
return v_char_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_char_elim___boxed(lean_object* v_motive_255_, lean_object* v_t_256_, lean_object* v_h_257_, lean_object* v_char_258_){
_start:
{
uint8_t v_t_boxed_259_; lean_object* v_res_260_; 
v_t_boxed_259_ = lean_unbox(v_t_256_);
v_res_260_ = l_Lean_Meta_Hint_DiffGranularity_char_elim(v_motive_255_, v_t_boxed_259_, v_h_257_, v_char_258_);
lean_dec(v_char_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg(lean_object* v_word_261_){
_start:
{
lean_inc(v_word_261_);
return v_word_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg___boxed(lean_object* v_word_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_Meta_Hint_DiffGranularity_word_elim___redArg(v_word_262_);
lean_dec(v_word_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim(lean_object* v_motive_264_, uint8_t v_t_265_, lean_object* v_h_266_, lean_object* v_word_267_){
_start:
{
lean_inc(v_word_267_);
return v_word_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_word_elim___boxed(lean_object* v_motive_268_, lean_object* v_t_269_, lean_object* v_h_270_, lean_object* v_word_271_){
_start:
{
uint8_t v_t_boxed_272_; lean_object* v_res_273_; 
v_t_boxed_272_ = lean_unbox(v_t_269_);
v_res_273_ = l_Lean_Meta_Hint_DiffGranularity_word_elim(v_motive_268_, v_t_boxed_272_, v_h_270_, v_word_271_);
lean_dec(v_word_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg(lean_object* v_all_274_){
_start:
{
lean_inc(v_all_274_);
return v_all_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg___boxed(lean_object* v_all_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_Meta_Hint_DiffGranularity_all_elim___redArg(v_all_275_);
lean_dec(v_all_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim(lean_object* v_motive_277_, uint8_t v_t_278_, lean_object* v_h_279_, lean_object* v_all_280_){
_start:
{
lean_inc(v_all_280_);
return v_all_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_all_elim___boxed(lean_object* v_motive_281_, lean_object* v_t_282_, lean_object* v_h_283_, lean_object* v_all_284_){
_start:
{
uint8_t v_t_boxed_285_; lean_object* v_res_286_; 
v_t_boxed_285_ = lean_unbox(v_t_282_);
v_res_286_ = l_Lean_Meta_Hint_DiffGranularity_all_elim(v_motive_281_, v_t_boxed_285_, v_h_283_, v_all_284_);
lean_dec(v_all_284_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg(lean_object* v_none_287_){
_start:
{
lean_inc(v_none_287_);
return v_none_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg___boxed(lean_object* v_none_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_Meta_Hint_DiffGranularity_none_elim___redArg(v_none_288_);
lean_dec(v_none_288_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim(lean_object* v_motive_290_, uint8_t v_t_291_, lean_object* v_h_292_, lean_object* v_none_293_){
_start:
{
lean_inc(v_none_293_);
return v_none_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_DiffGranularity_none_elim___boxed(lean_object* v_motive_294_, lean_object* v_t_295_, lean_object* v_h_296_, lean_object* v_none_297_){
_start:
{
uint8_t v_t_boxed_298_; lean_object* v_res_299_; 
v_t_boxed_298_ = lean_unbox(v_t_295_);
v_res_299_ = l_Lean_Meta_Hint_DiffGranularity_none_elim(v_motive_294_, v_t_boxed_298_, v_h_296_, v_none_297_);
lean_dec(v_none_297_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_instCoeSuggestionTextSuggestion___lam__0(lean_object* v_t_300_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v___x_303_; lean_object* v___x_304_; 
v___x_301_ = lean_box(0);
v___x_302_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_302_, 0, v_t_300_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
lean_ctor_set(v___x_302_, 2, v___x_301_);
lean_ctor_set(v___x_302_, 3, v___x_301_);
lean_ctor_set(v___x_302_, 4, v___x_301_);
lean_ctor_set(v___x_302_, 5, v___x_301_);
v___x_303_ = 0;
v___x_304_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_304_, 0, v___x_302_);
lean_ctor_set(v___x_304_, 1, v___x_301_);
lean_ctor_set(v___x_304_, 2, v___x_301_);
lean_ctor_set_uint8(v___x_304_, sizeof(void*)*3, v___x_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_instToMessageDataSuggestion___lam__0(lean_object* v_s_307_){
_start:
{
lean_object* v_toTryThisSuggestion_308_; lean_object* v_messageData_x3f_309_; 
v_toTryThisSuggestion_308_ = lean_ctor_get(v_s_307_, 0);
lean_inc_ref(v_toTryThisSuggestion_308_);
lean_dec_ref(v_s_307_);
v_messageData_x3f_309_ = lean_ctor_get(v_toTryThisSuggestion_308_, 4);
if (lean_obj_tag(v_messageData_x3f_309_) == 0)
{
lean_object* v_suggestion_310_; 
v_suggestion_310_ = lean_ctor_get(v_toTryThisSuggestion_308_, 0);
lean_inc_ref(v_suggestion_310_);
lean_dec_ref(v_toTryThisSuggestion_308_);
if (lean_obj_tag(v_suggestion_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_312_; 
v_a_311_ = lean_ctor_get(v_suggestion_310_, 1);
lean_inc(v_a_311_);
lean_dec_ref_known(v_suggestion_310_, 2);
v___x_312_ = l_Lean_MessageData_ofSyntax(v_a_311_);
return v___x_312_;
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_321_; 
v_a_313_ = lean_ctor_get(v_suggestion_310_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v_suggestion_310_);
if (v_isSharedCheck_321_ == 0)
{
v___x_315_ = v_suggestion_310_;
v_isShared_316_ = v_isSharedCheck_321_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v_suggestion_310_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_321_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set_tag(v___x_315_, 3);
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_320_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; 
v___x_319_ = l_Lean_MessageData_ofFormat(v___x_318_);
return v___x_319_;
}
}
}
}
else
{
lean_object* v_val_322_; 
lean_inc_ref(v_messageData_x3f_309_);
lean_dec_ref(v_toTryThisSuggestion_308_);
v_val_322_ = lean_ctor_get(v_messageData_x3f_309_, 0);
lean_inc(v_val_322_);
lean_dec_ref_known(v_messageData_x3f_309_, 1);
return v_val_322_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(lean_object* v_as_325_, size_t v_i_326_, size_t v_stop_327_, lean_object* v_b_328_){
_start:
{
lean_object* v___y_330_; uint8_t v___x_334_; 
v___x_334_ = lean_usize_dec_eq(v_i_326_, v_stop_327_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; lean_object* v_fst_336_; lean_object* v_snd_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_374_; 
v___x_335_ = lean_array_uget(v_as_325_, v_i_326_);
v_fst_336_ = lean_ctor_get(v___x_335_, 0);
v_snd_337_ = lean_ctor_get(v___x_335_, 1);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_374_ == 0)
{
v___x_339_ = v___x_335_;
v_isShared_340_ = v_isSharedCheck_374_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_snd_337_);
lean_inc(v_fst_336_);
lean_dec(v___x_335_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_374_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_341_ = lean_array_get_size(v_b_328_);
v___x_342_ = lean_unsigned_to_nat(0u);
v___x_343_ = lean_nat_dec_eq(v___x_341_, v___x_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v_fst_347_; lean_object* v_snd_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_366_; 
lean_del_object(v___x_339_);
v___x_344_ = lean_unsigned_to_nat(1u);
v___x_345_ = lean_nat_sub(v___x_341_, v___x_344_);
v___x_346_ = lean_array_fget(v_b_328_, v___x_345_);
v_fst_347_ = lean_ctor_get(v___x_346_, 0);
v_snd_348_ = lean_ctor_get(v___x_346_, 1);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_366_ == 0)
{
v___x_350_ = v___x_346_;
v_isShared_351_ = v_isSharedCheck_366_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_snd_348_);
lean_inc(v_fst_347_);
lean_dec(v___x_346_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_366_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
uint8_t v___x_352_; uint8_t v___x_353_; uint8_t v___x_354_; 
v___x_352_ = lean_unbox(v_fst_336_);
v___x_353_ = lean_unbox(v_fst_347_);
lean_dec(v_fst_347_);
v___x_354_ = l_Lean_Diff_instBEqAction_beq(v___x_352_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_358_; 
lean_dec(v_snd_348_);
lean_dec(v___x_345_);
v___x_355_ = lean_mk_empty_array_with_capacity(v___x_344_);
v___x_356_ = lean_array_push(v___x_355_, v_snd_337_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v___x_356_);
lean_ctor_set(v___x_350_, 0, v_fst_336_);
v___x_358_ = v___x_350_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_fst_336_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v___x_356_);
v___x_358_ = v_reuseFailAlloc_360_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
lean_object* v___x_359_; 
v___x_359_ = lean_array_push(v_b_328_, v___x_358_);
v___y_330_ = v___x_359_;
goto v___jp_329_;
}
}
else
{
lean_object* v___x_361_; lean_object* v___x_363_; 
v___x_361_ = lean_array_push(v_snd_348_, v_snd_337_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v___x_361_);
lean_ctor_set(v___x_350_, 0, v_fst_336_);
v___x_363_ = v___x_350_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_fst_336_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v___x_361_);
v___x_363_ = v_reuseFailAlloc_365_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_364_; 
v___x_364_ = lean_array_fset(v_b_328_, v___x_345_, v___x_363_);
lean_dec(v___x_345_);
v___y_330_ = v___x_364_;
goto v___jp_329_;
}
}
}
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; 
lean_dec_ref(v_b_328_);
v___x_367_ = lean_unsigned_to_nat(1u);
v___x_368_ = lean_mk_empty_array_with_capacity(v___x_367_);
lean_inc_ref(v___x_368_);
v___x_369_ = lean_array_push(v___x_368_, v_snd_337_);
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 1, v___x_369_);
v___x_371_ = v___x_339_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_fst_336_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v___x_369_);
v___x_371_ = v_reuseFailAlloc_373_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
lean_object* v___x_372_; 
v___x_372_ = lean_array_push(v___x_368_, v___x_371_);
v___y_330_ = v___x_372_;
goto v___jp_329_;
}
}
}
}
else
{
return v_b_328_;
}
v___jp_329_:
{
size_t v___x_331_; size_t v___x_332_; 
v___x_331_ = ((size_t)1ULL);
v___x_332_ = lean_usize_add(v_i_326_, v___x_331_);
v_i_326_ = v___x_332_;
v_b_328_ = v___y_330_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg___boxed(lean_object* v_as_375_, lean_object* v_i_376_, lean_object* v_stop_377_, lean_object* v_b_378_){
_start:
{
size_t v_i_boxed_379_; size_t v_stop_boxed_380_; lean_object* v_res_381_; 
v_i_boxed_379_ = lean_unbox_usize(v_i_376_);
lean_dec(v_i_376_);
v_stop_boxed_380_ = lean_unbox_usize(v_stop_377_);
lean_dec(v_stop_377_);
v_res_381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(v_as_375_, v_i_boxed_379_, v_stop_boxed_380_, v_b_378_);
lean_dec_ref(v_as_375_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(lean_object* v_ds_384_){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_385_ = lean_unsigned_to_nat(0u);
v___x_386_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___closed__0));
v___x_387_ = lean_array_get_size(v_ds_384_);
v___x_388_ = lean_nat_dec_lt(v___x_385_, v___x_387_);
if (v___x_388_ == 0)
{
return v___x_386_;
}
else
{
size_t v___x_389_; size_t v___x_390_; lean_object* v___x_391_; 
v___x_389_ = ((size_t)0ULL);
v___x_390_ = lean_usize_of_nat(v___x_387_);
v___x_391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(v_ds_384_, v___x_389_, v___x_390_, v___x_386_);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg___boxed(lean_object* v_ds_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v_ds_392_);
lean_dec_ref(v_ds_392_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits(lean_object* v_00_u03b1_394_, lean_object* v_ds_395_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v_ds_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___boxed(lean_object* v_00_u03b1_397_, lean_object* v_ds_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits(v_00_u03b1_397_, v_ds_398_);
lean_dec_ref(v_ds_398_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0(lean_object* v_00_u03b1_400_, lean_object* v_as_401_, size_t v_i_402_, size_t v_stop_403_, lean_object* v_b_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___redArg(v_as_401_, v_i_402_, v_stop_403_, v_b_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0___boxed(lean_object* v_00_u03b1_406_, lean_object* v_as_407_, lean_object* v_i_408_, lean_object* v_stop_409_, lean_object* v_b_410_){
_start:
{
size_t v_i_boxed_411_; size_t v_stop_boxed_412_; lean_object* v_res_413_; 
v_i_boxed_411_ = lean_unbox_usize(v_i_408_);
lean_dec(v_i_408_);
v_stop_boxed_412_ = lean_unbox_usize(v_stop_409_);
lean_dec(v_stop_409_);
v_res_413_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits_spec__0(v_00_u03b1_406_, v_as_407_, v_i_boxed_411_, v_stop_boxed_412_, v_b_410_);
lean_dec_ref(v_as_407_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(size_t v_sz_414_, size_t v_i_415_, lean_object* v_bs_416_){
_start:
{
uint8_t v___x_417_; 
v___x_417_ = lean_usize_dec_lt(v_i_415_, v_sz_414_);
if (v___x_417_ == 0)
{
return v_bs_416_;
}
else
{
lean_object* v_v_418_; lean_object* v_fst_419_; lean_object* v_snd_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_435_; 
v_v_418_ = lean_array_uget(v_bs_416_, v_i_415_);
v_fst_419_ = lean_ctor_get(v_v_418_, 0);
v_snd_420_ = lean_ctor_get(v_v_418_, 1);
v_isSharedCheck_435_ = !lean_is_exclusive(v_v_418_);
if (v_isSharedCheck_435_ == 0)
{
v___x_422_ = v_v_418_;
v_isShared_423_ = v_isSharedCheck_435_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_snd_420_);
lean_inc(v_fst_419_);
lean_dec(v_v_418_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_435_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v_bs_x27_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_424_ = lean_unsigned_to_nat(0u);
v_bs_x27_425_ = lean_array_uset(v_bs_416_, v_i_415_, v___x_424_);
v___x_426_ = lean_array_to_list(v_snd_420_);
v___x_427_ = lean_string_mk(v___x_426_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 1, v___x_427_);
v___x_429_ = v___x_422_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_fst_419_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v___x_427_);
v___x_429_ = v_reuseFailAlloc_434_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
size_t v___x_430_; size_t v___x_431_; lean_object* v___x_432_; 
v___x_430_ = ((size_t)1ULL);
v___x_431_ = lean_usize_add(v_i_415_, v___x_430_);
v___x_432_ = lean_array_uset(v_bs_x27_425_, v_i_415_, v___x_429_);
v_i_415_ = v___x_431_;
v_bs_416_ = v___x_432_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0___boxed(lean_object* v_sz_436_, lean_object* v_i_437_, lean_object* v_bs_438_){
_start:
{
size_t v_sz_boxed_439_; size_t v_i_boxed_440_; lean_object* v_res_441_; 
v_sz_boxed_439_ = lean_unbox_usize(v_sz_436_);
lean_dec(v_sz_436_);
v_i_boxed_440_ = lean_unbox_usize(v_i_437_);
lean_dec(v_i_437_);
v_res_441_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(v_sz_boxed_439_, v_i_boxed_440_, v_bs_438_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(lean_object* v_d_442_){
_start:
{
lean_object* v___x_443_; size_t v_sz_444_; size_t v___x_445_; lean_object* v___x_446_; 
v___x_443_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v_d_442_);
v_sz_444_ = lean_array_size(v___x_443_);
v___x_445_ = ((size_t)0ULL);
v___x_446_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(v_sz_444_, v___x_445_, v___x_443_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff___boxed(lean_object* v_d_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(v_d_447_);
lean_dec_ref(v_d_447_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9(size_t v_sz_449_, size_t v_i_450_, lean_object* v_bs_451_){
_start:
{
uint8_t v___x_452_; 
v___x_452_ = lean_usize_dec_lt(v_i_450_, v_sz_449_);
if (v___x_452_ == 0)
{
return v_bs_451_;
}
else
{
lean_object* v_v_453_; lean_object* v___x_454_; lean_object* v_bs_x27_455_; uint8_t v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; size_t v___x_459_; size_t v___x_460_; lean_object* v___x_461_; 
v_v_453_ = lean_array_uget(v_bs_451_, v_i_450_);
v___x_454_ = lean_unsigned_to_nat(0u);
v_bs_x27_455_ = lean_array_uset(v_bs_451_, v_i_450_, v___x_454_);
v___x_456_ = 0;
v___x_457_ = lean_box(v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v_v_453_);
v___x_459_ = ((size_t)1ULL);
v___x_460_ = lean_usize_add(v_i_450_, v___x_459_);
v___x_461_ = lean_array_uset(v_bs_x27_455_, v_i_450_, v___x_458_);
v_i_450_ = v___x_460_;
v_bs_451_ = v___x_461_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9___boxed(lean_object* v_sz_463_, lean_object* v_i_464_, lean_object* v_bs_465_){
_start:
{
size_t v_sz_boxed_466_; size_t v_i_boxed_467_; lean_object* v_res_468_; 
v_sz_boxed_466_ = lean_unbox_usize(v_sz_463_);
lean_dec(v_sz_463_);
v_i_boxed_467_ = lean_unbox_usize(v_i_464_);
lean_dec(v_i_464_);
v_res_468_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9(v_sz_boxed_466_, v_i_boxed_467_, v_bs_465_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(lean_object* v___x_469_, lean_object* v_original_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_fst_472_; lean_object* v_snd_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_492_; 
v_fst_472_ = lean_ctor_get(v_a_471_, 0);
v_snd_473_ = lean_ctor_get(v_a_471_, 1);
v_isSharedCheck_492_ = !lean_is_exclusive(v_a_471_);
if (v_isSharedCheck_492_ == 0)
{
v___x_475_ = v_a_471_;
v_isShared_476_ = v_isSharedCheck_492_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_snd_473_);
lean_inc(v_fst_472_);
lean_dec(v_a_471_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_492_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
uint8_t v___x_477_; 
v___x_477_ = lean_nat_dec_lt(v_snd_473_, v___x_469_);
if (v___x_477_ == 0)
{
lean_object* v___x_479_; 
if (v_isShared_476_ == 0)
{
v___x_479_ = v___x_475_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_fst_472_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_snd_473_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
else
{
uint8_t v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_481_ = 1;
v___x_482_ = lean_array_fget_borrowed(v_original_470_, v_snd_473_);
v___x_483_ = lean_box(v___x_481_);
lean_inc(v___x_482_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v___x_482_);
lean_ctor_set(v___x_475_, 0, v___x_483_);
v___x_485_ = v___x_475_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v___x_482_);
v___x_485_ = v_reuseFailAlloc_491_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_486_ = lean_array_push(v_fst_472_, v___x_485_);
v___x_487_ = lean_unsigned_to_nat(1u);
v___x_488_ = lean_nat_add(v_snd_473_, v___x_487_);
lean_dec(v_snd_473_);
v___x_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_486_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v_a_471_ = v___x_489_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg___boxed(lean_object* v___x_493_, lean_object* v_original_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(v___x_493_, v_original_494_, v_a_495_);
lean_dec_ref(v_original_494_);
lean_dec(v___x_493_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(uint32_t v_a_497_, lean_object* v_x_498_){
_start:
{
if (lean_obj_tag(v_x_498_) == 0)
{
lean_object* v___x_499_; 
v___x_499_ = lean_box(0);
return v___x_499_;
}
else
{
lean_object* v_key_500_; lean_object* v_value_501_; lean_object* v_tail_502_; uint32_t v___x_503_; uint8_t v___x_504_; 
v_key_500_ = lean_ctor_get(v_x_498_, 0);
v_value_501_ = lean_ctor_get(v_x_498_, 1);
v_tail_502_ = lean_ctor_get(v_x_498_, 2);
v___x_503_ = lean_unbox_uint32(v_key_500_);
v___x_504_ = lean_uint32_dec_eq(v___x_503_, v_a_497_);
if (v___x_504_ == 0)
{
v_x_498_ = v_tail_502_;
goto _start;
}
else
{
lean_object* v___x_506_; 
lean_inc(v_value_501_);
v___x_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_506_, 0, v_value_501_);
return v___x_506_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg___boxed(lean_object* v_a_507_, lean_object* v_x_508_){
_start:
{
uint32_t v_a_boxed_509_; lean_object* v_res_510_; 
v_a_boxed_509_ = lean_unbox_uint32(v_a_507_);
lean_dec(v_a_507_);
v_res_510_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(v_a_boxed_509_, v_x_508_);
lean_dec(v_x_508_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(lean_object* v_m_511_, uint32_t v_a_512_){
_start:
{
lean_object* v_buckets_513_; lean_object* v___x_514_; uint64_t v___x_515_; uint64_t v___x_516_; uint64_t v___x_517_; uint64_t v_fold_518_; uint64_t v___x_519_; uint64_t v___x_520_; uint64_t v___x_521_; size_t v___x_522_; size_t v___x_523_; size_t v___x_524_; size_t v___x_525_; size_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_buckets_513_ = lean_ctor_get(v_m_511_, 1);
v___x_514_ = lean_array_get_size(v_buckets_513_);
v___x_515_ = lean_uint32_to_uint64(v_a_512_);
v___x_516_ = 32ULL;
v___x_517_ = lean_uint64_shift_right(v___x_515_, v___x_516_);
v_fold_518_ = lean_uint64_xor(v___x_515_, v___x_517_);
v___x_519_ = 16ULL;
v___x_520_ = lean_uint64_shift_right(v_fold_518_, v___x_519_);
v___x_521_ = lean_uint64_xor(v_fold_518_, v___x_520_);
v___x_522_ = lean_uint64_to_usize(v___x_521_);
v___x_523_ = lean_usize_of_nat(v___x_514_);
v___x_524_ = ((size_t)1ULL);
v___x_525_ = lean_usize_sub(v___x_523_, v___x_524_);
v___x_526_ = lean_usize_land(v___x_522_, v___x_525_);
v___x_527_ = lean_array_uget_borrowed(v_buckets_513_, v___x_526_);
v___x_528_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(v_a_512_, v___x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg___boxed(lean_object* v_m_529_, lean_object* v_a_530_){
_start:
{
uint32_t v_a_boxed_531_; lean_object* v_res_532_; 
v_a_boxed_531_ = lean_unbox_uint32(v_a_530_);
lean_dec(v_a_530_);
v_res_532_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(v_m_529_, v_a_boxed_531_);
lean_dec_ref(v_m_529_);
return v_res_532_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(uint32_t v_a_533_, lean_object* v_x_534_){
_start:
{
if (lean_obj_tag(v_x_534_) == 0)
{
uint8_t v___x_535_; 
v___x_535_ = 0;
return v___x_535_;
}
else
{
lean_object* v_key_536_; lean_object* v_tail_537_; uint32_t v___x_538_; uint8_t v___x_539_; 
v_key_536_ = lean_ctor_get(v_x_534_, 0);
v_tail_537_ = lean_ctor_get(v_x_534_, 2);
v___x_538_ = lean_unbox_uint32(v_key_536_);
v___x_539_ = lean_uint32_dec_eq(v___x_538_, v_a_533_);
if (v___x_539_ == 0)
{
v_x_534_ = v_tail_537_;
goto _start;
}
else
{
return v___x_539_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg___boxed(lean_object* v_a_541_, lean_object* v_x_542_){
_start:
{
uint32_t v_a_boxed_543_; uint8_t v_res_544_; lean_object* v_r_545_; 
v_a_boxed_543_ = lean_unbox_uint32(v_a_541_);
lean_dec(v_a_541_);
v_res_544_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(v_a_boxed_543_, v_x_542_);
lean_dec(v_x_542_);
v_r_545_ = lean_box(v_res_544_);
return v_r_545_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(uint32_t v_a_546_, lean_object* v_b_547_, lean_object* v_x_548_){
_start:
{
if (lean_obj_tag(v_x_548_) == 0)
{
lean_dec(v_b_547_);
return v_x_548_;
}
else
{
lean_object* v_key_549_; lean_object* v_value_550_; lean_object* v_tail_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_565_; 
v_key_549_ = lean_ctor_get(v_x_548_, 0);
v_value_550_ = lean_ctor_get(v_x_548_, 1);
v_tail_551_ = lean_ctor_get(v_x_548_, 2);
v_isSharedCheck_565_ = !lean_is_exclusive(v_x_548_);
if (v_isSharedCheck_565_ == 0)
{
v___x_553_ = v_x_548_;
v_isShared_554_ = v_isSharedCheck_565_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_tail_551_);
lean_inc(v_value_550_);
lean_inc(v_key_549_);
lean_dec(v_x_548_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_565_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
uint32_t v___x_555_; uint8_t v___x_556_; 
v___x_555_ = lean_unbox_uint32(v_key_549_);
v___x_556_ = lean_uint32_dec_eq(v___x_555_, v_a_546_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; lean_object* v___x_559_; 
v___x_557_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(v_a_546_, v_b_547_, v_tail_551_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 2, v___x_557_);
v___x_559_ = v___x_553_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_key_549_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_value_550_);
lean_ctor_set(v_reuseFailAlloc_560_, 2, v___x_557_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
else
{
lean_object* v___x_561_; lean_object* v___x_563_; 
lean_dec(v_value_550_);
lean_dec(v_key_549_);
v___x_561_ = lean_box_uint32(v_a_546_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 1, v_b_547_);
lean_ctor_set(v___x_553_, 0, v___x_561_);
v___x_563_ = v___x_553_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v___x_561_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_b_547_);
lean_ctor_set(v_reuseFailAlloc_564_, 2, v_tail_551_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg___boxed(lean_object* v_a_566_, lean_object* v_b_567_, lean_object* v_x_568_){
_start:
{
uint32_t v_a_boxed_569_; lean_object* v_res_570_; 
v_a_boxed_569_ = lean_unbox_uint32(v_a_566_);
lean_dec(v_a_566_);
v_res_570_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(v_a_boxed_569_, v_b_567_, v_x_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29___redArg(lean_object* v_x_571_, lean_object* v_x_572_){
_start:
{
if (lean_obj_tag(v_x_572_) == 0)
{
return v_x_571_;
}
else
{
lean_object* v_key_573_; lean_object* v_value_574_; lean_object* v_tail_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_599_; 
v_key_573_ = lean_ctor_get(v_x_572_, 0);
v_value_574_ = lean_ctor_get(v_x_572_, 1);
v_tail_575_ = lean_ctor_get(v_x_572_, 2);
v_isSharedCheck_599_ = !lean_is_exclusive(v_x_572_);
if (v_isSharedCheck_599_ == 0)
{
v___x_577_ = v_x_572_;
v_isShared_578_ = v_isSharedCheck_599_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_tail_575_);
lean_inc(v_value_574_);
lean_inc(v_key_573_);
lean_dec(v_x_572_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_599_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_579_; uint32_t v___x_580_; uint64_t v___x_581_; uint64_t v___x_582_; uint64_t v___x_583_; uint64_t v_fold_584_; uint64_t v___x_585_; uint64_t v___x_586_; uint64_t v___x_587_; size_t v___x_588_; size_t v___x_589_; size_t v___x_590_; size_t v___x_591_; size_t v___x_592_; lean_object* v___x_593_; lean_object* v___x_595_; 
v___x_579_ = lean_array_get_size(v_x_571_);
v___x_580_ = lean_unbox_uint32(v_key_573_);
v___x_581_ = lean_uint32_to_uint64(v___x_580_);
v___x_582_ = 32ULL;
v___x_583_ = lean_uint64_shift_right(v___x_581_, v___x_582_);
v_fold_584_ = lean_uint64_xor(v___x_581_, v___x_583_);
v___x_585_ = 16ULL;
v___x_586_ = lean_uint64_shift_right(v_fold_584_, v___x_585_);
v___x_587_ = lean_uint64_xor(v_fold_584_, v___x_586_);
v___x_588_ = lean_uint64_to_usize(v___x_587_);
v___x_589_ = lean_usize_of_nat(v___x_579_);
v___x_590_ = ((size_t)1ULL);
v___x_591_ = lean_usize_sub(v___x_589_, v___x_590_);
v___x_592_ = lean_usize_land(v___x_588_, v___x_591_);
v___x_593_ = lean_array_uget_borrowed(v_x_571_, v___x_592_);
lean_inc(v___x_593_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 2, v___x_593_);
v___x_595_ = v___x_577_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_key_573_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_value_574_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v___x_593_);
v___x_595_ = v_reuseFailAlloc_598_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_596_; 
v___x_596_ = lean_array_uset(v_x_571_, v___x_592_, v___x_595_);
v_x_571_ = v___x_596_;
v_x_572_ = v_tail_575_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28___redArg(lean_object* v_i_600_, lean_object* v_source_601_, lean_object* v_target_602_){
_start:
{
lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = lean_array_get_size(v_source_601_);
v___x_604_ = lean_nat_dec_lt(v_i_600_, v___x_603_);
if (v___x_604_ == 0)
{
lean_dec_ref(v_source_601_);
lean_dec(v_i_600_);
return v_target_602_;
}
else
{
lean_object* v_es_605_; lean_object* v___x_606_; lean_object* v_source_607_; lean_object* v_target_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v_es_605_ = lean_array_fget(v_source_601_, v_i_600_);
v___x_606_ = lean_box(0);
v_source_607_ = lean_array_fset(v_source_601_, v_i_600_, v___x_606_);
v_target_608_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29___redArg(v_target_602_, v_es_605_);
v___x_609_ = lean_unsigned_to_nat(1u);
v___x_610_ = lean_nat_add(v_i_600_, v___x_609_);
lean_dec(v_i_600_);
v_i_600_ = v___x_610_;
v_source_601_ = v_source_607_;
v_target_602_ = v_target_608_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23___redArg(lean_object* v_data_612_){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v_nbuckets_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_613_ = lean_array_get_size(v_data_612_);
v___x_614_ = lean_unsigned_to_nat(2u);
v_nbuckets_615_ = lean_nat_mul(v___x_613_, v___x_614_);
v___x_616_ = lean_unsigned_to_nat(0u);
v___x_617_ = lean_box(0);
v___x_618_ = lean_mk_array(v_nbuckets_615_, v___x_617_);
v___x_619_ = lean_array_propagate_mark(v_data_612_, v___x_618_);
v___x_620_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28___redArg(v___x_616_, v_data_612_, v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(lean_object* v_m_621_, uint32_t v_a_622_, lean_object* v_b_623_){
_start:
{
lean_object* v_size_624_; lean_object* v_buckets_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_669_; 
v_size_624_ = lean_ctor_get(v_m_621_, 0);
v_buckets_625_ = lean_ctor_get(v_m_621_, 1);
v_isSharedCheck_669_ = !lean_is_exclusive(v_m_621_);
if (v_isSharedCheck_669_ == 0)
{
v___x_627_ = v_m_621_;
v_isShared_628_ = v_isSharedCheck_669_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_buckets_625_);
lean_inc(v_size_624_);
lean_dec(v_m_621_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_669_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_629_; uint64_t v___x_630_; uint64_t v___x_631_; uint64_t v___x_632_; uint64_t v_fold_633_; uint64_t v___x_634_; uint64_t v___x_635_; uint64_t v___x_636_; size_t v___x_637_; size_t v___x_638_; size_t v___x_639_; size_t v___x_640_; size_t v___x_641_; lean_object* v_bkt_642_; uint8_t v___x_643_; 
v___x_629_ = lean_array_get_size(v_buckets_625_);
v___x_630_ = lean_uint32_to_uint64(v_a_622_);
v___x_631_ = 32ULL;
v___x_632_ = lean_uint64_shift_right(v___x_630_, v___x_631_);
v_fold_633_ = lean_uint64_xor(v___x_630_, v___x_632_);
v___x_634_ = 16ULL;
v___x_635_ = lean_uint64_shift_right(v_fold_633_, v___x_634_);
v___x_636_ = lean_uint64_xor(v_fold_633_, v___x_635_);
v___x_637_ = lean_uint64_to_usize(v___x_636_);
v___x_638_ = lean_usize_of_nat(v___x_629_);
v___x_639_ = ((size_t)1ULL);
v___x_640_ = lean_usize_sub(v___x_638_, v___x_639_);
v___x_641_ = lean_usize_land(v___x_637_, v___x_640_);
v_bkt_642_ = lean_array_uget_borrowed(v_buckets_625_, v___x_641_);
v___x_643_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(v_a_622_, v_bkt_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v_size_x27_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v_buckets_x27_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; uint8_t v___x_654_; 
v___x_644_ = lean_unsigned_to_nat(1u);
v_size_x27_645_ = lean_nat_add(v_size_624_, v___x_644_);
lean_dec(v_size_624_);
v___x_646_ = lean_box_uint32(v_a_622_);
lean_inc(v_bkt_642_);
v___x_647_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
lean_ctor_set(v___x_647_, 1, v_b_623_);
lean_ctor_set(v___x_647_, 2, v_bkt_642_);
v_buckets_x27_648_ = lean_array_uset(v_buckets_625_, v___x_641_, v___x_647_);
v___x_649_ = lean_unsigned_to_nat(4u);
v___x_650_ = lean_nat_mul(v_size_x27_645_, v___x_649_);
v___x_651_ = lean_unsigned_to_nat(3u);
v___x_652_ = lean_nat_div(v___x_650_, v___x_651_);
lean_dec(v___x_650_);
v___x_653_ = lean_array_get_size(v_buckets_x27_648_);
v___x_654_ = lean_nat_dec_le(v___x_652_, v___x_653_);
lean_dec(v___x_652_);
if (v___x_654_ == 0)
{
lean_object* v_val_655_; lean_object* v___x_657_; 
v_val_655_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23___redArg(v_buckets_x27_648_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 1, v_val_655_);
lean_ctor_set(v___x_627_, 0, v_size_x27_645_);
v___x_657_ = v___x_627_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_size_x27_645_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v_val_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
else
{
lean_object* v___x_660_; 
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 1, v_buckets_x27_648_);
lean_ctor_set(v___x_627_, 0, v_size_x27_645_);
v___x_660_ = v___x_627_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_size_x27_645_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v_buckets_x27_648_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
else
{
lean_object* v___x_662_; lean_object* v_buckets_x27_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
lean_inc(v_bkt_642_);
v___x_662_ = lean_box(0);
v_buckets_x27_663_ = lean_array_uset(v_buckets_625_, v___x_641_, v___x_662_);
v___x_664_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(v_a_622_, v_b_623_, v_bkt_642_);
v___x_665_ = lean_array_uset(v_buckets_x27_663_, v___x_641_, v___x_664_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 1, v___x_665_);
v___x_667_ = v___x_627_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_size_624_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg___boxed(lean_object* v_m_670_, lean_object* v_a_671_, lean_object* v_b_672_){
_start:
{
uint32_t v_a_boxed_673_; lean_object* v_res_674_; 
v_a_boxed_673_ = lean_unbox_uint32(v_a_671_);
lean_dec(v_a_671_);
v_res_674_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_m_670_, v_a_boxed_673_, v_b_672_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(lean_object* v_histogram_675_, lean_object* v_index_676_, uint32_t v_val_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(v_histogram_675_, v_val_677_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_679_ = lean_unsigned_to_nat(0u);
v___x_680_ = lean_box(0);
v___x_681_ = lean_unsigned_to_nat(1u);
v___x_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_682_, 0, v_index_676_);
v___x_683_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_683_, 0, v___x_679_);
lean_ctor_set(v___x_683_, 1, v___x_680_);
lean_ctor_set(v___x_683_, 2, v___x_681_);
lean_ctor_set(v___x_683_, 3, v___x_682_);
v___x_684_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_histogram_675_, v_val_677_, v___x_683_);
return v___x_684_;
}
else
{
lean_object* v_val_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_706_; 
v_val_685_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_706_ == 0)
{
v___x_687_ = v___x_678_;
v_isShared_688_ = v_isSharedCheck_706_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_val_685_);
lean_dec(v___x_678_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_706_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v_leftCount_689_; lean_object* v_leftIndex_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_703_; 
v_leftCount_689_ = lean_ctor_get(v_val_685_, 0);
v_leftIndex_690_ = lean_ctor_get(v_val_685_, 1);
v_isSharedCheck_703_ = !lean_is_exclusive(v_val_685_);
if (v_isSharedCheck_703_ == 0)
{
lean_object* v_unused_704_; lean_object* v_unused_705_; 
v_unused_704_ = lean_ctor_get(v_val_685_, 3);
lean_dec(v_unused_704_);
v_unused_705_ = lean_ctor_get(v_val_685_, 2);
lean_dec(v_unused_705_);
v___x_692_ = v_val_685_;
v_isShared_693_ = v_isSharedCheck_703_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_leftIndex_690_);
lean_inc(v_leftCount_689_);
lean_dec(v_val_685_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_703_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_697_; 
v___x_694_ = lean_unsigned_to_nat(1u);
v___x_695_ = lean_nat_add(v_leftCount_689_, v___x_694_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v_index_676_);
v___x_697_ = v___x_687_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_index_676_);
v___x_697_ = v_reuseFailAlloc_702_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v___x_699_; 
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 3, v___x_697_);
lean_ctor_set(v___x_692_, 2, v___x_695_);
v___x_699_ = v___x_692_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_leftCount_689_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_leftIndex_690_);
lean_ctor_set(v_reuseFailAlloc_701_, 2, v___x_695_);
lean_ctor_set(v_reuseFailAlloc_701_, 3, v___x_697_);
v___x_699_ = v_reuseFailAlloc_701_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_700_; 
v___x_700_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_histogram_675_, v_val_677_, v___x_699_);
return v___x_700_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg___boxed(lean_object* v_histogram_707_, lean_object* v_index_708_, lean_object* v_val_709_){
_start:
{
uint32_t v_val_boxed_710_; lean_object* v_res_711_; 
v_val_boxed_710_ = lean_unbox_uint32(v_val_709_);
lean_dec(v_val_709_);
v_res_711_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(v_histogram_707_, v_index_708_, v_val_boxed_710_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(lean_object* v_upperBound_712_, lean_object* v___x_713_, lean_object* v_fst_714_, lean_object* v___x_715_, lean_object* v_a_716_, lean_object* v_b_717_){
_start:
{
uint8_t v___x_718_; 
v___x_718_ = lean_nat_dec_lt(v_a_716_, v_upperBound_712_);
if (v___x_718_ == 0)
{
lean_dec(v_a_716_);
return v_b_717_;
}
else
{
lean_object* v___x_719_; uint32_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_719_ = l_Subarray_get___redArg(v_fst_714_, v_a_716_);
v___x_720_ = lean_unbox_uint32(v___x_719_);
lean_dec(v___x_719_);
lean_inc(v_a_716_);
v___x_721_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(v_b_717_, v_a_716_, v___x_720_);
v___x_722_ = lean_unsigned_to_nat(1u);
v___x_723_ = lean_nat_add(v_a_716_, v___x_722_);
lean_dec(v_a_716_);
v_a_716_ = v___x_723_;
v_b_717_ = v___x_721_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg___boxed(lean_object* v_upperBound_725_, lean_object* v___x_726_, lean_object* v_fst_727_, lean_object* v___x_728_, lean_object* v_a_729_, lean_object* v_b_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(v_upperBound_725_, v___x_726_, v_fst_727_, v___x_728_, v_a_729_, v_b_730_);
lean_dec(v___x_728_);
lean_dec_ref(v_fst_727_);
lean_dec(v___x_726_);
lean_dec(v_upperBound_725_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(lean_object* v_as_x27_732_, lean_object* v_b_733_){
_start:
{
if (lean_obj_tag(v_as_x27_732_) == 0)
{
return v_b_733_;
}
else
{
lean_object* v_head_734_; lean_object* v_snd_735_; lean_object* v_leftIndex_736_; 
v_head_734_ = lean_ctor_get(v_as_x27_732_, 0);
v_snd_735_ = lean_ctor_get(v_head_734_, 1);
v_leftIndex_736_ = lean_ctor_get(v_snd_735_, 1);
if (lean_obj_tag(v_leftIndex_736_) == 1)
{
lean_object* v_rightIndex_737_; 
v_rightIndex_737_ = lean_ctor_get(v_snd_735_, 3);
if (lean_obj_tag(v_rightIndex_737_) == 1)
{
lean_object* v_tail_738_; lean_object* v_fst_739_; lean_object* v_leftCount_740_; lean_object* v_rightCount_741_; lean_object* v_val_742_; lean_object* v_val_743_; 
v_tail_738_ = lean_ctor_get(v_as_x27_732_, 1);
v_fst_739_ = lean_ctor_get(v_head_734_, 0);
v_leftCount_740_ = lean_ctor_get(v_snd_735_, 0);
v_rightCount_741_ = lean_ctor_get(v_snd_735_, 2);
v_val_742_ = lean_ctor_get(v_leftIndex_736_, 0);
v_val_743_ = lean_ctor_get(v_rightIndex_737_, 0);
if (lean_obj_tag(v_b_733_) == 0)
{
goto v___jp_744_;
}
else
{
lean_object* v_val_751_; lean_object* v_fst_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v_val_751_ = lean_ctor_get(v_b_733_, 0);
v_fst_752_ = lean_ctor_get(v_val_751_, 0);
v___x_753_ = lean_nat_add(v_leftCount_740_, v_rightCount_741_);
v___x_754_ = lean_nat_dec_lt(v___x_753_, v_fst_752_);
lean_dec(v___x_753_);
if (v___x_754_ == 0)
{
v_as_x27_732_ = v_tail_738_;
goto _start;
}
else
{
lean_dec_ref_known(v_b_733_, 1);
goto v___jp_744_;
}
}
v___jp_744_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_745_ = lean_nat_add(v_leftCount_740_, v_rightCount_741_);
lean_inc(v_val_743_);
lean_inc(v_val_742_);
v___x_746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_746_, 0, v_val_742_);
lean_ctor_set(v___x_746_, 1, v_val_743_);
lean_inc(v_fst_739_);
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v_fst_739_);
lean_ctor_set(v___x_747_, 1, v___x_746_);
v___x_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_745_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
v_as_x27_732_ = v_tail_738_;
v_b_733_ = v___x_749_;
goto _start;
}
}
else
{
lean_object* v_tail_756_; 
v_tail_756_ = lean_ctor_get(v_as_x27_732_, 1);
v_as_x27_732_ = v_tail_756_;
goto _start;
}
}
else
{
lean_object* v_tail_758_; 
v_tail_758_ = lean_ctor_get(v_as_x27_732_, 1);
v_as_x27_732_ = v_tail_758_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg___boxed(lean_object* v_as_x27_760_, lean_object* v_b_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(v_as_x27_760_, v_b_761_);
lean_dec(v_as_x27_760_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(lean_object* v_a_763_, lean_object* v_b_764_){
_start:
{
lean_object* v_array_765_; lean_object* v_start_766_; lean_object* v_stop_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_780_; 
v_array_765_ = lean_ctor_get(v_a_763_, 0);
v_start_766_ = lean_ctor_get(v_a_763_, 1);
v_stop_767_ = lean_ctor_get(v_a_763_, 2);
v_isSharedCheck_780_ = !lean_is_exclusive(v_a_763_);
if (v_isSharedCheck_780_ == 0)
{
v___x_769_ = v_a_763_;
v_isShared_770_ = v_isSharedCheck_780_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_stop_767_);
lean_inc(v_start_766_);
lean_inc(v_array_765_);
lean_dec(v_a_763_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_780_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
uint8_t v___x_771_; 
v___x_771_ = lean_nat_dec_lt(v_start_766_, v_stop_767_);
if (v___x_771_ == 0)
{
lean_del_object(v___x_769_);
lean_dec(v_stop_767_);
lean_dec(v_start_766_);
lean_dec_ref(v_array_765_);
return v_b_764_;
}
else
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_775_; 
v___x_772_ = lean_unsigned_to_nat(1u);
v___x_773_ = lean_nat_add(v_start_766_, v___x_772_);
lean_inc_ref(v_array_765_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v___x_773_);
v___x_775_ = v___x_769_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_array_765_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v___x_773_);
lean_ctor_set(v_reuseFailAlloc_779_, 2, v_stop_767_);
v___x_775_ = v_reuseFailAlloc_779_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = lean_array_fget(v_array_765_, v_start_766_);
lean_dec(v_start_766_);
lean_dec_ref(v_array_765_);
v___x_777_ = lean_array_push(v_b_764_, v___x_776_);
v_a_763_ = v___x_775_;
v_b_764_ = v___x_777_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8(lean_object* v_left_781_, lean_object* v_right_782_, lean_object* v_i_783_){
_start:
{
lean_object* v_start_784_; lean_object* v_stop_785_; lean_object* v___x_786_; uint8_t v___x_800_; 
v_start_784_ = lean_ctor_get(v_left_781_, 1);
v_stop_785_ = lean_ctor_get(v_left_781_, 2);
v___x_786_ = lean_nat_sub(v_stop_785_, v_start_784_);
v___x_800_ = lean_nat_dec_lt(v_i_783_, v___x_786_);
if (v___x_800_ == 0)
{
goto v___jp_787_;
}
else
{
lean_object* v_start_801_; lean_object* v_stop_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v_start_801_ = lean_ctor_get(v_right_782_, 1);
v_stop_802_ = lean_ctor_get(v_right_782_, 2);
v___x_803_ = lean_nat_sub(v_stop_802_, v_start_801_);
v___x_804_ = lean_nat_dec_lt(v_i_783_, v___x_803_);
if (v___x_804_ == 0)
{
lean_dec(v___x_803_);
goto v___jp_787_;
}
else
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; uint32_t v___x_812_; uint32_t v___x_813_; uint8_t v___x_814_; 
v___x_805_ = lean_nat_sub(v___x_786_, v_i_783_);
lean_dec(v___x_786_);
v___x_806_ = lean_unsigned_to_nat(1u);
v___x_807_ = lean_nat_sub(v___x_805_, v___x_806_);
v___x_808_ = l_Subarray_get___redArg(v_left_781_, v___x_807_);
lean_dec(v___x_807_);
v___x_809_ = lean_nat_sub(v___x_803_, v_i_783_);
lean_dec(v___x_803_);
v___x_810_ = lean_nat_sub(v___x_809_, v___x_806_);
v___x_811_ = l_Subarray_get___redArg(v_right_782_, v___x_810_);
lean_dec(v___x_810_);
v___x_812_ = lean_unbox_uint32(v___x_808_);
lean_dec(v___x_808_);
v___x_813_ = lean_unbox_uint32(v___x_811_);
lean_dec(v___x_811_);
v___x_814_ = lean_uint32_dec_eq(v___x_812_, v___x_813_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
lean_dec(v_i_783_);
lean_inc_ref(v_left_781_);
v___x_815_ = l_Subarray_take___redArg(v_left_781_, v___x_805_);
v___x_816_ = l_Subarray_take___redArg(v_right_782_, v___x_809_);
lean_dec(v___x_809_);
v___x_817_ = l_Subarray_drop___redArg(v_left_781_, v___x_805_);
lean_dec(v___x_805_);
v___x_818_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_819_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(v___x_817_, v___x_818_);
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_816_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v___x_815_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
return v___x_821_;
}
else
{
lean_object* v___x_822_; 
lean_dec(v___x_809_);
lean_dec(v___x_805_);
v___x_822_ = lean_nat_add(v_i_783_, v___x_806_);
lean_dec(v_i_783_);
v_i_783_ = v___x_822_;
goto _start;
}
}
}
v___jp_787_:
{
lean_object* v_start_788_; lean_object* v_stop_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_start_788_ = lean_ctor_get(v_right_782_, 1);
v_stop_789_ = lean_ctor_get(v_right_782_, 2);
v___x_790_ = lean_nat_sub(v___x_786_, v_i_783_);
lean_dec(v___x_786_);
lean_inc_ref(v_left_781_);
v___x_791_ = l_Subarray_take___redArg(v_left_781_, v___x_790_);
v___x_792_ = lean_nat_sub(v_stop_789_, v_start_788_);
v___x_793_ = lean_nat_sub(v___x_792_, v_i_783_);
lean_dec(v_i_783_);
lean_dec(v___x_792_);
v___x_794_ = l_Subarray_take___redArg(v_right_782_, v___x_793_);
lean_dec(v___x_793_);
v___x_795_ = l_Subarray_drop___redArg(v_left_781_, v___x_790_);
lean_dec(v___x_790_);
v___x_796_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_797_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(v___x_795_, v___x_796_);
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_794_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_791_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
return v___x_799_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6(lean_object* v_left_824_, lean_object* v_right_825_){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_unsigned_to_nat(0u);
v___x_827_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8(v_left_824_, v_right_825_, v___x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(lean_object* v_x_828_, lean_object* v_x_829_){
_start:
{
if (lean_obj_tag(v_x_829_) == 0)
{
lean_inc(v_x_828_);
return v_x_828_;
}
else
{
lean_object* v_key_830_; lean_object* v_value_831_; lean_object* v_tail_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_key_830_ = lean_ctor_get(v_x_829_, 0);
v_value_831_ = lean_ctor_get(v_x_829_, 1);
v_tail_832_ = lean_ctor_get(v_x_829_, 2);
v___x_833_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(v_x_828_, v_tail_832_);
lean_inc(v_value_831_);
lean_inc(v_key_830_);
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v_key_830_);
lean_ctor_set(v___x_834_, 1, v_value_831_);
v___x_835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
lean_ctor_set(v___x_835_, 1, v___x_833_);
return v___x_835_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8___boxed(lean_object* v_x_836_, lean_object* v_x_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(v_x_836_, v_x_837_);
lean_dec(v_x_837_);
lean_dec(v_x_836_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9(lean_object* v_as_839_, size_t v_i_840_, size_t v_stop_841_, lean_object* v_b_842_){
_start:
{
uint8_t v___x_843_; 
v___x_843_ = lean_usize_dec_eq(v_i_840_, v_stop_841_);
if (v___x_843_ == 0)
{
size_t v___x_844_; size_t v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_844_ = ((size_t)1ULL);
v___x_845_ = lean_usize_sub(v_i_840_, v___x_844_);
v___x_846_ = lean_array_uget_borrowed(v_as_839_, v___x_845_);
v___x_847_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__8(v_b_842_, v___x_846_);
lean_dec(v_b_842_);
v_i_840_ = v___x_845_;
v_b_842_ = v___x_847_;
goto _start;
}
else
{
return v_b_842_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9___boxed(lean_object* v_as_849_, lean_object* v_i_850_, lean_object* v_stop_851_, lean_object* v_b_852_){
_start:
{
size_t v_i_boxed_853_; size_t v_stop_boxed_854_; lean_object* v_res_855_; 
v_i_boxed_853_ = lean_unbox_usize(v_i_850_);
lean_dec(v_i_850_);
v_stop_boxed_854_ = lean_unbox_usize(v_stop_851_);
lean_dec(v_stop_851_);
v_res_855_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9(v_as_849_, v_i_boxed_853_, v_stop_boxed_854_, v_b_852_);
lean_dec_ref(v_as_849_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5_spec__6(lean_object* v_left_856_, lean_object* v_right_857_, lean_object* v_pref_858_){
_start:
{
lean_object* v_start_859_; lean_object* v_stop_860_; lean_object* v_i_861_; lean_object* v___x_867_; uint8_t v___x_868_; 
v_start_859_ = lean_ctor_get(v_left_856_, 1);
v_stop_860_ = lean_ctor_get(v_left_856_, 2);
v_i_861_ = lean_array_get_size(v_pref_858_);
v___x_867_ = lean_nat_sub(v_stop_860_, v_start_859_);
v___x_868_ = lean_nat_dec_lt(v_i_861_, v___x_867_);
lean_dec(v___x_867_);
if (v___x_868_ == 0)
{
goto v___jp_862_;
}
else
{
lean_object* v_start_869_; lean_object* v_stop_870_; lean_object* v___x_871_; uint8_t v___x_872_; 
v_start_869_ = lean_ctor_get(v_right_857_, 1);
v_stop_870_ = lean_ctor_get(v_right_857_, 2);
v___x_871_ = lean_nat_sub(v_stop_870_, v_start_869_);
v___x_872_ = lean_nat_dec_lt(v_i_861_, v___x_871_);
lean_dec(v___x_871_);
if (v___x_872_ == 0)
{
goto v___jp_862_;
}
else
{
lean_object* v___x_873_; lean_object* v___x_874_; uint32_t v___x_875_; uint32_t v___x_876_; uint8_t v___x_877_; 
v___x_873_ = l_Subarray_get___redArg(v_left_856_, v_i_861_);
v___x_874_ = l_Subarray_get___redArg(v_right_857_, v_i_861_);
v___x_875_ = lean_unbox_uint32(v___x_873_);
v___x_876_ = lean_unbox_uint32(v___x_874_);
lean_dec(v___x_874_);
v___x_877_ = lean_uint32_dec_eq(v___x_875_, v___x_876_);
if (v___x_877_ == 0)
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
lean_dec(v___x_873_);
v___x_878_ = l_Subarray_drop___redArg(v_left_856_, v_i_861_);
v___x_879_ = l_Subarray_drop___redArg(v_right_857_, v_i_861_);
v___x_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_878_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
v___x_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_881_, 0, v_pref_858_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
return v___x_881_;
}
else
{
lean_object* v___x_882_; 
v___x_882_ = lean_array_push(v_pref_858_, v___x_873_);
v_pref_858_ = v___x_882_;
goto _start;
}
}
}
v___jp_862_:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_863_ = l_Subarray_drop___redArg(v_left_856_, v_i_861_);
v___x_864_ = l_Subarray_drop___redArg(v_right_857_, v_i_861_);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v_pref_858_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
return v___x_866_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5(lean_object* v_left_884_, lean_object* v_right_885_){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__2___closed__0));
v___x_887_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5_spec__6(v_left_884_, v_right_885_, v___x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(lean_object* v_histogram_888_, lean_object* v_index_889_, uint32_t v_val_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(v_histogram_888_, v_val_890_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_892_ = lean_unsigned_to_nat(1u);
v___x_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_893_, 0, v_index_889_);
v___x_894_ = lean_unsigned_to_nat(0u);
v___x_895_ = lean_box(0);
v___x_896_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_896_, 0, v___x_892_);
lean_ctor_set(v___x_896_, 1, v___x_893_);
lean_ctor_set(v___x_896_, 2, v___x_894_);
lean_ctor_set(v___x_896_, 3, v___x_895_);
v___x_897_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_histogram_888_, v_val_890_, v___x_896_);
return v___x_897_;
}
else
{
lean_object* v_val_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_919_; 
v_val_898_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_919_ == 0)
{
v___x_900_ = v___x_891_;
v_isShared_901_ = v_isSharedCheck_919_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_val_898_);
lean_dec(v___x_891_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_919_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v_leftCount_902_; lean_object* v_rightCount_903_; lean_object* v_rightIndex_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_917_; 
v_leftCount_902_ = lean_ctor_get(v_val_898_, 0);
v_rightCount_903_ = lean_ctor_get(v_val_898_, 2);
v_rightIndex_904_ = lean_ctor_get(v_val_898_, 3);
v_isSharedCheck_917_ = !lean_is_exclusive(v_val_898_);
if (v_isSharedCheck_917_ == 0)
{
lean_object* v_unused_918_; 
v_unused_918_ = lean_ctor_get(v_val_898_, 1);
lean_dec(v_unused_918_);
v___x_906_ = v_val_898_;
v_isShared_907_ = v_isSharedCheck_917_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_rightIndex_904_);
lean_inc(v_rightCount_903_);
lean_inc(v_leftCount_902_);
lean_dec(v_val_898_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_917_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_911_; 
v___x_908_ = lean_unsigned_to_nat(1u);
v___x_909_ = lean_nat_add(v_leftCount_902_, v___x_908_);
lean_dec(v_leftCount_902_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v_index_889_);
v___x_911_ = v___x_900_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_index_889_);
v___x_911_ = v_reuseFailAlloc_916_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
lean_object* v___x_913_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 1, v___x_911_);
lean_ctor_set(v___x_906_, 0, v___x_909_);
v___x_913_ = v___x_906_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_909_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v___x_911_);
lean_ctor_set(v_reuseFailAlloc_915_, 2, v_rightCount_903_);
lean_ctor_set(v_reuseFailAlloc_915_, 3, v_rightIndex_904_);
v___x_913_ = v_reuseFailAlloc_915_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
lean_object* v___x_914_; 
v___x_914_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_histogram_888_, v_val_890_, v___x_913_);
return v___x_914_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg___boxed(lean_object* v_histogram_920_, lean_object* v_index_921_, lean_object* v_val_922_){
_start:
{
uint32_t v_val_boxed_923_; lean_object* v_res_924_; 
v_val_boxed_923_ = lean_unbox_uint32(v_val_922_);
lean_dec(v_val_922_);
v_res_924_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(v_histogram_920_, v_index_921_, v_val_boxed_923_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(lean_object* v_upperBound_925_, lean_object* v_fst_926_, lean_object* v___x_927_, lean_object* v_fst_928_, lean_object* v_a_929_, lean_object* v_b_930_){
_start:
{
uint8_t v___x_931_; 
v___x_931_ = lean_nat_dec_lt(v_a_929_, v_upperBound_925_);
if (v___x_931_ == 0)
{
lean_dec(v_a_929_);
return v_b_930_;
}
else
{
lean_object* v___x_932_; uint32_t v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_932_ = l_Subarray_get___redArg(v_fst_928_, v_a_929_);
v___x_933_ = lean_unbox_uint32(v___x_932_);
lean_dec(v___x_932_);
lean_inc(v_a_929_);
v___x_934_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(v_b_930_, v_a_929_, v___x_933_);
v___x_935_ = lean_unsigned_to_nat(1u);
v___x_936_ = lean_nat_add(v_a_929_, v___x_935_);
lean_dec(v_a_929_);
v_a_929_ = v___x_936_;
v_b_930_ = v___x_934_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg___boxed(lean_object* v_upperBound_938_, lean_object* v_fst_939_, lean_object* v___x_940_, lean_object* v_fst_941_, lean_object* v_a_942_, lean_object* v_b_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(v_upperBound_938_, v_fst_939_, v___x_940_, v_fst_941_, v_a_942_, v_b_943_);
lean_dec_ref(v_fst_941_);
lean_dec(v___x_940_);
lean_dec_ref(v_fst_939_);
lean_dec(v_upperBound_938_);
return v_res_944_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_945_ = lean_box(0);
v___x_946_ = lean_unsigned_to_nat(16u);
v___x_947_ = lean_mk_array(v___x_946_, v___x_945_);
return v___x_947_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v_hist_950_; 
v___x_948_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__0);
v___x_949_ = lean_unsigned_to_nat(0u);
v_hist_950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_hist_950_, 0, v___x_949_);
lean_ctor_set(v_hist_950_, 1, v___x_948_);
return v_hist_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(lean_object* v_left_951_, lean_object* v_right_952_){
_start:
{
lean_object* v___x_953_; lean_object* v_snd_954_; lean_object* v_fst_955_; lean_object* v_fst_956_; lean_object* v_snd_957_; lean_object* v___x_958_; lean_object* v_snd_959_; lean_object* v_fst_960_; lean_object* v_fst_961_; lean_object* v_snd_962_; lean_object* v_start_963_; lean_object* v_stop_964_; lean_object* v___x_965_; lean_object* v_hist_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v_start_969_; lean_object* v_stop_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v_buckets_973_; lean_object* v___x_974_; lean_object* v___y_976_; lean_object* v___x_1002_; lean_object* v___x_1003_; uint8_t v___x_1004_; 
v___x_953_ = l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__5(v_left_951_, v_right_952_);
v_snd_954_ = lean_ctor_get(v___x_953_, 1);
lean_inc(v_snd_954_);
v_fst_955_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_fst_955_);
lean_dec_ref(v___x_953_);
v_fst_956_ = lean_ctor_get(v_snd_954_, 0);
lean_inc(v_fst_956_);
v_snd_957_ = lean_ctor_get(v_snd_954_, 1);
lean_inc(v_snd_957_);
lean_dec(v_snd_954_);
v___x_958_ = l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6(v_fst_956_, v_snd_957_);
v_snd_959_ = lean_ctor_get(v___x_958_, 1);
lean_inc(v_snd_959_);
v_fst_960_ = lean_ctor_get(v___x_958_, 0);
lean_inc(v_fst_960_);
lean_dec_ref(v___x_958_);
v_fst_961_ = lean_ctor_get(v_snd_959_, 0);
lean_inc(v_fst_961_);
v_snd_962_ = lean_ctor_get(v_snd_959_, 1);
lean_inc(v_snd_962_);
lean_dec(v_snd_959_);
v_start_963_ = lean_ctor_get(v_fst_960_, 1);
v_stop_964_ = lean_ctor_get(v_fst_960_, 2);
v___x_965_ = lean_unsigned_to_nat(0u);
v_hist_966_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4___closed__1);
v___x_967_ = lean_nat_sub(v_stop_964_, v_start_963_);
v___x_968_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(v___x_967_, v_fst_961_, v___x_967_, v_fst_960_, v___x_965_, v_hist_966_);
v_start_969_ = lean_ctor_get(v_fst_961_, 1);
v_stop_970_ = lean_ctor_get(v_fst_961_, 2);
v___x_971_ = lean_nat_sub(v_stop_970_, v_start_969_);
v___x_972_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(v___x_971_, v___x_971_, v_fst_961_, v___x_967_, v___x_965_, v___x_968_);
lean_dec(v___x_967_);
lean_dec(v___x_971_);
v_buckets_973_ = lean_ctor_get(v___x_972_, 1);
lean_inc_ref(v_buckets_973_);
lean_dec_ref(v___x_972_);
v___x_974_ = lean_box(0);
v___x_1002_ = lean_box(0);
v___x_1003_ = lean_array_get_size(v_buckets_973_);
v___x_1004_ = lean_nat_dec_lt(v___x_965_, v___x_1003_);
if (v___x_1004_ == 0)
{
lean_dec_ref(v_buckets_973_);
v___y_976_ = v___x_1002_;
goto v___jp_975_;
}
else
{
size_t v___x_1005_; size_t v___x_1006_; lean_object* v___x_1007_; 
v___x_1005_ = lean_usize_of_nat(v___x_1003_);
v___x_1006_ = ((size_t)0ULL);
v___x_1007_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__9(v_buckets_973_, v___x_1005_, v___x_1006_, v___x_1002_);
lean_dec_ref(v_buckets_973_);
v___y_976_ = v___x_1007_;
goto v___jp_975_;
}
v___jp_975_:
{
lean_object* v___x_977_; 
v___x_977_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(v___y_976_, v___x_974_);
lean_dec(v___y_976_);
if (lean_obj_tag(v___x_977_) == 1)
{
lean_object* v_val_978_; lean_object* v_snd_979_; lean_object* v_snd_980_; lean_object* v_fst_981_; lean_object* v_fst_982_; lean_object* v_snd_983_; lean_object* v___x_984_; lean_object* v_fst_985_; lean_object* v_snd_986_; lean_object* v___x_987_; lean_object* v_fst_988_; lean_object* v_snd_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v_val_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_val_978_);
lean_dec_ref_known(v___x_977_, 1);
v_snd_979_ = lean_ctor_get(v_val_978_, 1);
lean_inc(v_snd_979_);
lean_dec(v_val_978_);
v_snd_980_ = lean_ctor_get(v_snd_979_, 1);
lean_inc(v_snd_980_);
v_fst_981_ = lean_ctor_get(v_snd_979_, 0);
lean_inc(v_fst_981_);
lean_dec(v_snd_979_);
v_fst_982_ = lean_ctor_get(v_snd_980_, 0);
lean_inc(v_fst_982_);
v_snd_983_ = lean_ctor_get(v_snd_980_, 1);
lean_inc(v_snd_983_);
lean_dec(v_snd_980_);
v___x_984_ = l_Subarray_split___redArg(v_fst_960_, v_fst_982_);
lean_dec(v_fst_982_);
v_fst_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_fst_985_);
v_snd_986_ = lean_ctor_get(v___x_984_, 1);
lean_inc(v_snd_986_);
lean_dec_ref(v___x_984_);
v___x_987_ = l_Subarray_split___redArg(v_fst_961_, v_snd_983_);
lean_dec(v_snd_983_);
v_fst_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_fst_988_);
v_snd_989_ = lean_ctor_get(v___x_987_, 1);
lean_inc(v_snd_989_);
lean_dec_ref(v___x_987_);
v___x_990_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(v_fst_985_, v_fst_988_);
v___x_991_ = l_Array_append___redArg(v_fst_955_, v___x_990_);
lean_dec_ref(v___x_990_);
v___x_992_ = lean_unsigned_to_nat(1u);
v___x_993_ = lean_mk_empty_array_with_capacity(v___x_992_);
v___x_994_ = lean_array_push(v___x_993_, v_fst_981_);
v___x_995_ = l_Array_append___redArg(v___x_991_, v___x_994_);
lean_dec_ref(v___x_994_);
v___x_996_ = l_Subarray_drop___redArg(v_snd_986_, v___x_992_);
v___x_997_ = l_Subarray_drop___redArg(v_snd_989_, v___x_992_);
v___x_998_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(v___x_996_, v___x_997_);
v___x_999_ = l_Array_append___redArg(v___x_995_, v___x_998_);
lean_dec_ref(v___x_998_);
v___x_1000_ = l_Array_append___redArg(v___x_999_, v_snd_962_);
lean_dec(v_snd_962_);
return v___x_1000_;
}
else
{
lean_object* v___x_1001_; 
lean_dec(v___x_977_);
lean_dec(v_fst_961_);
lean_dec(v_fst_960_);
v___x_1001_ = l_Array_append___redArg(v_fst_955_, v_snd_962_);
lean_dec(v_snd_962_);
return v___x_1001_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(lean_object* v___x_1008_, lean_object* v_edited_1009_, lean_object* v_a_1010_){
_start:
{
lean_object* v_fst_1011_; lean_object* v_snd_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1031_; 
v_fst_1011_ = lean_ctor_get(v_a_1010_, 0);
v_snd_1012_ = lean_ctor_get(v_a_1010_, 1);
v_isSharedCheck_1031_ = !lean_is_exclusive(v_a_1010_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1014_ = v_a_1010_;
v_isShared_1015_ = v_isSharedCheck_1031_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_snd_1012_);
lean_inc(v_fst_1011_);
lean_dec(v_a_1010_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1031_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
uint8_t v___x_1016_; 
v___x_1016_ = lean_nat_dec_lt(v_snd_1012_, v___x_1008_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1018_; 
if (v_isShared_1015_ == 0)
{
v___x_1018_ = v___x_1014_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_fst_1011_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v_snd_1012_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
else
{
uint8_t v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1024_; 
v___x_1020_ = 0;
v___x_1021_ = lean_array_fget_borrowed(v_edited_1009_, v_snd_1012_);
v___x_1022_ = lean_box(v___x_1020_);
lean_inc(v___x_1021_);
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 1, v___x_1021_);
lean_ctor_set(v___x_1014_, 0, v___x_1022_);
v___x_1024_ = v___x_1014_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1022_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v___x_1021_);
v___x_1024_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1025_ = lean_array_push(v_fst_1011_, v___x_1024_);
v___x_1026_ = lean_unsigned_to_nat(1u);
v___x_1027_ = lean_nat_add(v_snd_1012_, v___x_1026_);
lean_dec(v_snd_1012_);
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1025_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v_a_1010_ = v___x_1028_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg___boxed(lean_object* v___x_1032_, lean_object* v_edited_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(v___x_1032_, v_edited_1033_, v_a_1034_);
lean_dec_ref(v_edited_1033_);
lean_dec(v___x_1032_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8(size_t v_sz_1036_, size_t v_i_1037_, lean_object* v_bs_1038_){
_start:
{
uint8_t v___x_1039_; 
v___x_1039_ = lean_usize_dec_lt(v_i_1037_, v_sz_1036_);
if (v___x_1039_ == 0)
{
return v_bs_1038_;
}
else
{
lean_object* v_v_1040_; lean_object* v___x_1041_; lean_object* v_bs_x27_1042_; uint8_t v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; size_t v___x_1046_; size_t v___x_1047_; lean_object* v___x_1048_; 
v_v_1040_ = lean_array_uget(v_bs_1038_, v_i_1037_);
v___x_1041_ = lean_unsigned_to_nat(0u);
v_bs_x27_1042_ = lean_array_uset(v_bs_1038_, v_i_1037_, v___x_1041_);
v___x_1043_ = 1;
v___x_1044_ = lean_box(v___x_1043_);
v___x_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
lean_ctor_set(v___x_1045_, 1, v_v_1040_);
v___x_1046_ = ((size_t)1ULL);
v___x_1047_ = lean_usize_add(v_i_1037_, v___x_1046_);
v___x_1048_ = lean_array_uset(v_bs_x27_1042_, v_i_1037_, v___x_1045_);
v_i_1037_ = v___x_1047_;
v_bs_1038_ = v___x_1048_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8___boxed(lean_object* v_sz_1050_, lean_object* v_i_1051_, lean_object* v_bs_1052_){
_start:
{
size_t v_sz_boxed_1053_; size_t v_i_boxed_1054_; lean_object* v_res_1055_; 
v_sz_boxed_1053_ = lean_unbox_usize(v_sz_1050_);
lean_dec(v_sz_1050_);
v_i_boxed_1054_ = lean_unbox_usize(v_i_1051_);
lean_dec(v_i_1051_);
v_res_1055_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8(v_sz_boxed_1053_, v_i_boxed_1054_, v_bs_1052_);
return v_res_1055_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = 65;
v___x_1057_ = lean_box_uint32(v___x_1056_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(lean_object* v___x_1058_, lean_object* v_original_1059_, uint32_t v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_fst_1062_; lean_object* v_snd_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1088_; 
v_fst_1062_ = lean_ctor_get(v_a_1061_, 0);
v_snd_1063_ = lean_ctor_get(v_a_1061_, 1);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_a_1061_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1065_ = v_a_1061_;
v_isShared_1066_ = v_isSharedCheck_1088_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_snd_1063_);
lean_inc(v_fst_1062_);
lean_dec(v_a_1061_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1088_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
uint8_t v___x_1067_; 
v___x_1067_ = lean_nat_dec_lt(v_snd_1063_, v___x_1058_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1069_; 
if (v_isShared_1066_ == 0)
{
v___x_1069_ = v___x_1065_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_fst_1062_);
lean_ctor_set(v_reuseFailAlloc_1070_, 1, v_snd_1063_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
else
{
lean_object* v___x_1071_; lean_object* v___x_1072_; uint32_t v___x_1073_; uint8_t v___x_1074_; 
v___x_1071_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1;
v___x_1072_ = lean_array_get_borrowed(v___x_1071_, v_original_1059_, v_snd_1063_);
v___x_1073_ = lean_unbox_uint32(v___x_1072_);
v___x_1074_ = lean_uint32_dec_eq(v___x_1073_, v_a_1060_);
if (v___x_1074_ == 0)
{
uint8_t v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1075_ = 1;
v___x_1076_ = lean_box(v___x_1075_);
lean_inc(v___x_1072_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 1, v___x_1072_);
lean_ctor_set(v___x_1065_, 0, v___x_1076_);
v___x_1078_ = v___x_1065_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v___x_1072_);
v___x_1078_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1079_ = lean_array_push(v_fst_1062_, v___x_1078_);
v___x_1080_ = lean_unsigned_to_nat(1u);
v___x_1081_ = lean_nat_add(v_snd_1063_, v___x_1080_);
lean_dec(v_snd_1063_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1079_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v_a_1061_ = v___x_1082_;
goto _start;
}
}
else
{
lean_object* v___x_1086_; 
if (v_isShared_1066_ == 0)
{
v___x_1086_ = v___x_1065_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_fst_1062_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v_snd_1063_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed(lean_object* v___x_1089_, lean_object* v_original_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_){
_start:
{
uint32_t v_a_boxed_1093_; lean_object* v_res_1094_; 
v_a_boxed_1093_ = lean_unbox_uint32(v_a_1091_);
lean_dec(v_a_1091_);
v_res_1094_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(v___x_1089_, v_original_1090_, v_a_boxed_1093_, v_a_1092_);
lean_dec_ref(v_original_1090_);
lean_dec(v___x_1089_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(lean_object* v___x_1095_, lean_object* v_edited_1096_, uint32_t v_a_1097_, lean_object* v_a_1098_){
_start:
{
lean_object* v_fst_1099_; lean_object* v_snd_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1125_; 
v_fst_1099_ = lean_ctor_get(v_a_1098_, 0);
v_snd_1100_ = lean_ctor_get(v_a_1098_, 1);
v_isSharedCheck_1125_ = !lean_is_exclusive(v_a_1098_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1102_ = v_a_1098_;
v_isShared_1103_ = v_isSharedCheck_1125_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_snd_1100_);
lean_inc(v_fst_1099_);
lean_dec(v_a_1098_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1125_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
uint8_t v___x_1104_; 
v___x_1104_ = lean_nat_dec_lt(v_snd_1100_, v___x_1095_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1106_; 
if (v_isShared_1103_ == 0)
{
v___x_1106_ = v___x_1102_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_fst_1099_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_snd_1100_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
else
{
lean_object* v___x_1108_; lean_object* v___x_1109_; uint32_t v___x_1110_; uint8_t v___x_1111_; 
v___x_1108_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1;
v___x_1109_ = lean_array_get_borrowed(v___x_1108_, v_edited_1096_, v_snd_1100_);
v___x_1110_ = lean_unbox_uint32(v___x_1109_);
v___x_1111_ = lean_uint32_dec_eq(v___x_1110_, v_a_1097_);
if (v___x_1111_ == 0)
{
uint8_t v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1115_; 
v___x_1112_ = 0;
v___x_1113_ = lean_box(v___x_1112_);
lean_inc(v___x_1109_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 1, v___x_1109_);
lean_ctor_set(v___x_1102_, 0, v___x_1113_);
v___x_1115_ = v___x_1102_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v___x_1113_);
lean_ctor_set(v_reuseFailAlloc_1121_, 1, v___x_1109_);
v___x_1115_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1116_ = lean_array_push(v_fst_1099_, v___x_1115_);
v___x_1117_ = lean_unsigned_to_nat(1u);
v___x_1118_ = lean_nat_add(v_snd_1100_, v___x_1117_);
lean_dec(v_snd_1100_);
v___x_1119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1116_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v_a_1098_ = v___x_1119_;
goto _start;
}
}
else
{
lean_object* v___x_1123_; 
if (v_isShared_1103_ == 0)
{
v___x_1123_ = v___x_1102_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_fst_1099_);
lean_ctor_set(v_reuseFailAlloc_1124_, 1, v_snd_1100_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg___boxed(lean_object* v___x_1126_, lean_object* v_edited_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_){
_start:
{
uint32_t v_a_boxed_1130_; lean_object* v_res_1131_; 
v_a_boxed_1130_ = lean_unbox_uint32(v_a_1128_);
lean_dec(v_a_1128_);
v_res_1131_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(v___x_1126_, v_edited_1127_, v_a_boxed_1130_, v_a_1129_);
lean_dec_ref(v_edited_1127_);
lean_dec(v___x_1126_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15(lean_object* v___x_1132_, lean_object* v_original_1133_, lean_object* v___x_1134_, lean_object* v_edited_1135_, lean_object* v_as_1136_, size_t v_sz_1137_, size_t v_i_1138_, lean_object* v_b_1139_){
_start:
{
uint8_t v___x_1140_; 
v___x_1140_ = lean_usize_dec_lt(v_i_1138_, v_sz_1137_);
if (v___x_1140_ == 0)
{
return v_b_1139_;
}
else
{
lean_object* v_snd_1141_; lean_object* v_fst_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1191_; 
v_snd_1141_ = lean_ctor_get(v_b_1139_, 1);
v_fst_1142_ = lean_ctor_get(v_b_1139_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_b_1139_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1144_ = v_b_1139_;
v_isShared_1145_ = v_isSharedCheck_1191_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_snd_1141_);
lean_inc(v_fst_1142_);
lean_dec(v_b_1139_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1191_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v_fst_1146_; lean_object* v_snd_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1190_; 
v_fst_1146_ = lean_ctor_get(v_snd_1141_, 0);
v_snd_1147_ = lean_ctor_get(v_snd_1141_, 1);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_snd_1141_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1149_ = v_snd_1141_;
v_isShared_1150_ = v_isSharedCheck_1190_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_snd_1147_);
lean_inc(v_fst_1146_);
lean_dec(v_snd_1141_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1190_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v_a_1151_; lean_object* v___x_1153_; 
v_a_1151_ = lean_array_uget_borrowed(v_as_1136_, v_i_1138_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 1, v_fst_1146_);
lean_ctor_set(v___x_1149_, 0, v_fst_1142_);
v___x_1153_ = v___x_1149_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_fst_1142_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_fst_1146_);
v___x_1153_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
uint32_t v___x_1154_; lean_object* v___x_1155_; lean_object* v_fst_1156_; lean_object* v_snd_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1188_; 
v___x_1154_ = lean_unbox_uint32(v_a_1151_);
v___x_1155_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(v___x_1132_, v_original_1133_, v___x_1154_, v___x_1153_);
v_fst_1156_ = lean_ctor_get(v___x_1155_, 0);
v_snd_1157_ = lean_ctor_get(v___x_1155_, 1);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1159_ = v___x_1155_;
v_isShared_1160_ = v_isSharedCheck_1188_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_snd_1157_);
lean_inc(v_fst_1156_);
lean_dec(v___x_1155_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1188_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v_snd_1147_);
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_fst_1156_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v_snd_1147_);
v___x_1162_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
uint32_t v___x_1163_; lean_object* v___x_1164_; lean_object* v_fst_1165_; lean_object* v_snd_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1186_; 
v___x_1163_ = lean_unbox_uint32(v_a_1151_);
v___x_1164_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(v___x_1134_, v_edited_1135_, v___x_1163_, v___x_1162_);
v_fst_1165_ = lean_ctor_get(v___x_1164_, 0);
v_snd_1166_ = lean_ctor_get(v___x_1164_, 1);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1168_ = v___x_1164_;
v_isShared_1169_ = v_isSharedCheck_1186_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_snd_1166_);
lean_inc(v_fst_1165_);
lean_dec(v___x_1164_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1186_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
uint8_t v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1173_; 
v___x_1170_ = 2;
v___x_1171_ = lean_box(v___x_1170_);
lean_inc(v_a_1151_);
if (v_isShared_1169_ == 0)
{
lean_ctor_set(v___x_1168_, 1, v_a_1151_);
lean_ctor_set(v___x_1168_, 0, v___x_1171_);
v___x_1173_ = v___x_1168_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1171_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v_a_1151_);
v___x_1173_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1179_; 
v___x_1174_ = lean_array_push(v_fst_1165_, v___x_1173_);
v___x_1175_ = lean_unsigned_to_nat(1u);
v___x_1176_ = lean_nat_add(v_snd_1157_, v___x_1175_);
lean_dec(v_snd_1157_);
v___x_1177_ = lean_nat_add(v_snd_1166_, v___x_1175_);
lean_dec(v_snd_1166_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 1, v___x_1177_);
lean_ctor_set(v___x_1144_, 0, v___x_1176_);
v___x_1179_ = v___x_1144_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1176_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
lean_object* v___x_1180_; size_t v___x_1181_; size_t v___x_1182_; 
v___x_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1174_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
v___x_1181_ = ((size_t)1ULL);
v___x_1182_ = lean_usize_add(v_i_1138_, v___x_1181_);
v_i_1138_ = v___x_1182_;
v_b_1139_ = v___x_1180_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15___boxed(lean_object* v___x_1192_, lean_object* v_original_1193_, lean_object* v___x_1194_, lean_object* v_edited_1195_, lean_object* v_as_1196_, lean_object* v_sz_1197_, lean_object* v_i_1198_, lean_object* v_b_1199_){
_start:
{
size_t v_sz_boxed_1200_; size_t v_i_boxed_1201_; lean_object* v_res_1202_; 
v_sz_boxed_1200_ = lean_unbox_usize(v_sz_1197_);
lean_dec(v_sz_1197_);
v_i_boxed_1201_ = lean_unbox_usize(v_i_1198_);
lean_dec(v_i_1198_);
v_res_1202_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15(v___x_1192_, v_original_1193_, v___x_1194_, v_edited_1195_, v_as_1196_, v_sz_boxed_1200_, v_i_boxed_1201_, v_b_1199_);
lean_dec_ref(v_as_1196_);
lean_dec_ref(v_edited_1195_);
lean_dec(v___x_1194_);
lean_dec_ref(v_original_1193_);
lean_dec(v___x_1192_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5(lean_object* v___x_1203_, lean_object* v_edited_1204_, lean_object* v___x_1205_, lean_object* v_original_1206_, lean_object* v_as_1207_, size_t v_sz_1208_, size_t v_i_1209_, lean_object* v_b_1210_){
_start:
{
uint8_t v___x_1211_; 
v___x_1211_ = lean_usize_dec_lt(v_i_1209_, v_sz_1208_);
if (v___x_1211_ == 0)
{
return v_b_1210_;
}
else
{
lean_object* v_snd_1212_; lean_object* v_fst_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1262_; 
v_snd_1212_ = lean_ctor_get(v_b_1210_, 1);
v_fst_1213_ = lean_ctor_get(v_b_1210_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_b_1210_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1215_ = v_b_1210_;
v_isShared_1216_ = v_isSharedCheck_1262_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_snd_1212_);
lean_inc(v_fst_1213_);
lean_dec(v_b_1210_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1262_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v_fst_1217_; lean_object* v_snd_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1261_; 
v_fst_1217_ = lean_ctor_get(v_snd_1212_, 0);
v_snd_1218_ = lean_ctor_get(v_snd_1212_, 1);
v_isSharedCheck_1261_ = !lean_is_exclusive(v_snd_1212_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1220_ = v_snd_1212_;
v_isShared_1221_ = v_isSharedCheck_1261_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_snd_1218_);
lean_inc(v_fst_1217_);
lean_dec(v_snd_1212_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1261_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v_a_1222_; lean_object* v___x_1224_; 
v_a_1222_ = lean_array_uget_borrowed(v_as_1207_, v_i_1209_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 1, v_fst_1217_);
lean_ctor_set(v___x_1220_, 0, v_fst_1213_);
v___x_1224_ = v___x_1220_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_fst_1213_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v_fst_1217_);
v___x_1224_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
uint32_t v___x_1225_; lean_object* v___x_1226_; lean_object* v_fst_1227_; lean_object* v_snd_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1259_; 
v___x_1225_ = lean_unbox_uint32(v_a_1222_);
v___x_1226_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(v___x_1205_, v_original_1206_, v___x_1225_, v___x_1224_);
v_fst_1227_ = lean_ctor_get(v___x_1226_, 0);
v_snd_1228_ = lean_ctor_get(v___x_1226_, 1);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1230_ = v___x_1226_;
v_isShared_1231_ = v_isSharedCheck_1259_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_snd_1228_);
lean_inc(v_fst_1227_);
lean_dec(v___x_1226_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1259_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 1, v_snd_1218_);
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_fst_1227_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_snd_1218_);
v___x_1233_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
uint32_t v___x_1234_; lean_object* v___x_1235_; lean_object* v_fst_1236_; lean_object* v_snd_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1257_; 
v___x_1234_ = lean_unbox_uint32(v_a_1222_);
v___x_1235_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(v___x_1203_, v_edited_1204_, v___x_1234_, v___x_1233_);
v_fst_1236_ = lean_ctor_get(v___x_1235_, 0);
v_snd_1237_ = lean_ctor_get(v___x_1235_, 1);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1239_ = v___x_1235_;
v_isShared_1240_ = v_isSharedCheck_1257_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_snd_1237_);
lean_inc(v_fst_1236_);
lean_dec(v___x_1235_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1257_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
uint8_t v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1241_ = 2;
v___x_1242_ = lean_box(v___x_1241_);
lean_inc(v_a_1222_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 1, v_a_1222_);
lean_ctor_set(v___x_1239_, 0, v___x_1242_);
v___x_1244_ = v___x_1239_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1242_);
lean_ctor_set(v_reuseFailAlloc_1256_, 1, v_a_1222_);
v___x_1244_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1250_; 
v___x_1245_ = lean_array_push(v_fst_1236_, v___x_1244_);
v___x_1246_ = lean_unsigned_to_nat(1u);
v___x_1247_ = lean_nat_add(v_snd_1228_, v___x_1246_);
lean_dec(v_snd_1228_);
v___x_1248_ = lean_nat_add(v_snd_1237_, v___x_1246_);
lean_dec(v_snd_1237_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 1, v___x_1248_);
lean_ctor_set(v___x_1215_, 0, v___x_1247_);
v___x_1250_ = v___x_1215_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1247_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v___x_1248_);
v___x_1250_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1251_; size_t v___x_1252_; size_t v___x_1253_; lean_object* v___x_1254_; 
v___x_1251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1245_);
lean_ctor_set(v___x_1251_, 1, v___x_1250_);
v___x_1252_ = ((size_t)1ULL);
v___x_1253_ = lean_usize_add(v_i_1209_, v___x_1252_);
v___x_1254_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5_spec__15(v___x_1205_, v_original_1206_, v___x_1203_, v_edited_1204_, v_as_1207_, v_sz_1208_, v___x_1253_, v___x_1251_);
return v___x_1254_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5___boxed(lean_object* v___x_1263_, lean_object* v_edited_1264_, lean_object* v___x_1265_, lean_object* v_original_1266_, lean_object* v_as_1267_, lean_object* v_sz_1268_, lean_object* v_i_1269_, lean_object* v_b_1270_){
_start:
{
size_t v_sz_boxed_1271_; size_t v_i_boxed_1272_; lean_object* v_res_1273_; 
v_sz_boxed_1271_ = lean_unbox_usize(v_sz_1268_);
lean_dec(v_sz_1268_);
v_i_boxed_1272_ = lean_unbox_usize(v_i_1269_);
lean_dec(v_i_1269_);
v_res_1273_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5(v___x_1263_, v_edited_1264_, v___x_1265_, v_original_1266_, v_as_1267_, v_sz_boxed_1271_, v_i_boxed_1272_, v_b_1270_);
lean_dec_ref(v_as_1267_);
lean_dec_ref(v_original_1266_);
lean_dec(v___x_1265_);
lean_dec_ref(v_edited_1264_);
lean_dec(v___x_1263_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(lean_object* v_original_1281_, lean_object* v_edited_1282_){
_start:
{
lean_object* v_i_1283_; lean_object* v___x_1284_; uint8_t v___x_1285_; 
v_i_1283_ = lean_unsigned_to_nat(0u);
v___x_1284_ = lean_array_get_size(v_original_1281_);
v___x_1285_ = lean_nat_dec_lt(v_i_1283_, v___x_1284_);
if (v___x_1285_ == 0)
{
size_t v_sz_1286_; size_t v___x_1287_; lean_object* v___x_1288_; 
lean_dec_ref(v_original_1281_);
v_sz_1286_ = lean_array_size(v_edited_1282_);
v___x_1287_ = ((size_t)0ULL);
v___x_1288_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__9(v_sz_1286_, v___x_1287_, v_edited_1282_);
return v___x_1288_;
}
else
{
lean_object* v___x_1289_; uint8_t v___x_1290_; 
v___x_1289_ = lean_array_get_size(v_edited_1282_);
v___x_1290_ = lean_nat_dec_lt(v_i_1283_, v___x_1289_);
if (v___x_1290_ == 0)
{
size_t v_sz_1291_; size_t v___x_1292_; lean_object* v___x_1293_; 
lean_dec_ref(v_edited_1282_);
v_sz_1291_ = lean_array_size(v_original_1281_);
v___x_1292_ = ((size_t)0ULL);
v___x_1293_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__8(v_sz_1291_, v___x_1292_, v_original_1281_);
return v___x_1293_;
}
else
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v_ds_1296_; lean_object* v___x_1297_; size_t v_sz_1298_; size_t v___x_1299_; lean_object* v___x_1300_; lean_object* v_snd_1301_; lean_object* v_fst_1302_; lean_object* v_fst_1303_; lean_object* v_snd_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1323_; 
lean_inc_ref(v_original_1281_);
v___x_1294_ = l_Array_toSubarray___redArg(v_original_1281_, v_i_1283_, v___x_1284_);
lean_inc_ref(v_edited_1282_);
v___x_1295_ = l_Array_toSubarray___redArg(v_edited_1282_, v_i_1283_, v___x_1289_);
v_ds_1296_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4(v___x_1294_, v___x_1295_);
v___x_1297_ = ((lean_object*)(l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__2));
v_sz_1298_ = lean_array_size(v_ds_1296_);
v___x_1299_ = ((size_t)0ULL);
v___x_1300_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__5(v___x_1289_, v_edited_1282_, v___x_1284_, v_original_1281_, v_ds_1296_, v_sz_1298_, v___x_1299_, v___x_1297_);
lean_dec_ref(v_ds_1296_);
v_snd_1301_ = lean_ctor_get(v___x_1300_, 1);
lean_inc(v_snd_1301_);
v_fst_1302_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_fst_1302_);
lean_dec_ref(v___x_1300_);
v_fst_1303_ = lean_ctor_get(v_snd_1301_, 0);
v_snd_1304_ = lean_ctor_get(v_snd_1301_, 1);
v_isSharedCheck_1323_ = !lean_is_exclusive(v_snd_1301_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1306_ = v_snd_1301_;
v_isShared_1307_ = v_isSharedCheck_1323_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_snd_1304_);
lean_inc(v_fst_1303_);
lean_dec(v_snd_1301_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1323_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 1, v_fst_1303_);
lean_ctor_set(v___x_1306_, 0, v_fst_1302_);
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_fst_1302_);
lean_ctor_set(v_reuseFailAlloc_1322_, 1, v_fst_1303_);
v___x_1309_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
lean_object* v___x_1310_; lean_object* v_fst_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1320_; 
v___x_1310_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(v___x_1284_, v_original_1281_, v___x_1309_);
lean_dec_ref(v_original_1281_);
v_fst_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1320_ == 0)
{
lean_object* v_unused_1321_; 
v_unused_1321_ = lean_ctor_get(v___x_1310_, 1);
lean_dec(v_unused_1321_);
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1320_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_fst_1311_);
lean_dec(v___x_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1320_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1316_; 
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 1, v_snd_1304_);
v___x_1316_ = v___x_1313_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_fst_1311_);
lean_ctor_set(v_reuseFailAlloc_1319_, 1, v_snd_1304_);
v___x_1316_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
lean_object* v___x_1317_; lean_object* v_fst_1318_; 
v___x_1317_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(v___x_1289_, v_edited_1282_, v___x_1316_);
lean_dec_ref(v_edited_1282_);
v_fst_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_fst_1318_);
lean_dec_ref(v___x_1317_);
return v_fst_1318_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(lean_object* v_s_1324_, lean_object* v_a_1325_, uint8_t v_b_1326_){
_start:
{
lean_object* v_str_1327_; lean_object* v_startInclusive_1328_; lean_object* v_endExclusive_1329_; lean_object* v___x_1330_; uint8_t v_decide_1331_; 
v_str_1327_ = lean_ctor_get(v_s_1324_, 0);
v_startInclusive_1328_ = lean_ctor_get(v_s_1324_, 1);
v_endExclusive_1329_ = lean_ctor_get(v_s_1324_, 2);
v___x_1330_ = lean_nat_sub(v_endExclusive_1329_, v_startInclusive_1328_);
v_decide_1331_ = lean_nat_dec_eq(v_a_1325_, v___x_1330_);
lean_dec(v___x_1330_);
if (v_decide_1331_ == 0)
{
lean_object* v___x_1332_; uint32_t v___x_1333_; uint32_t v___x_1334_; uint8_t v___x_1335_; 
v___x_1332_ = lean_nat_add(v_startInclusive_1328_, v_a_1325_);
lean_dec(v_a_1325_);
v___x_1333_ = lean_string_utf8_get_fast(v_str_1327_, v___x_1332_);
v___x_1334_ = 10;
v___x_1335_ = lean_uint32_dec_eq(v___x_1333_, v___x_1334_);
if (v___x_1335_ == 0)
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_string_utf8_next_fast(v_str_1327_, v___x_1332_);
lean_dec(v___x_1332_);
v___x_1337_ = lean_nat_sub(v___x_1336_, v_startInclusive_1328_);
v_a_1325_ = v___x_1337_;
v_b_1326_ = v___x_1335_;
goto _start;
}
else
{
lean_dec(v___x_1332_);
return v___x_1335_;
}
}
else
{
lean_dec(v_a_1325_);
return v_b_1326_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg___boxed(lean_object* v_s_1339_, lean_object* v_a_1340_, lean_object* v_b_1341_){
_start:
{
uint8_t v_b_boxed_1342_; uint8_t v_res_1343_; lean_object* v_r_1344_; 
v_b_boxed_1342_ = lean_unbox(v_b_1341_);
v_res_1343_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(v_s_1339_, v_a_1340_, v_b_boxed_1342_);
lean_dec_ref(v_s_1339_);
v_r_1344_ = lean_box(v_res_1343_);
return v_r_1344_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(lean_object* v_s_1345_){
_start:
{
lean_object* v_searcher_1346_; uint8_t v___x_1347_; uint8_t v___x_1348_; 
v_searcher_1346_ = lean_unsigned_to_nat(0u);
v___x_1347_ = 0;
v___x_1348_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(v_s_1345_, v_searcher_1346_, v___x_1347_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0___boxed(lean_object* v_s_1349_){
_start:
{
uint8_t v_res_1350_; lean_object* v_r_1351_; 
v_res_1350_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v_s_1349_);
lean_dec_ref(v_s_1349_);
v_r_1351_ = lean_box(v_res_1350_);
return v_r_1351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(lean_object* v_oldWs_1352_, lean_object* v_newWs_1353_){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v___x_1354_ = lean_unsigned_to_nat(0u);
v___x_1355_ = lean_string_utf8_byte_size(v_oldWs_1352_);
lean_inc_ref(v_oldWs_1352_);
v___x_1356_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1356_, 0, v_oldWs_1352_);
lean_ctor_set(v___x_1356_, 1, v___x_1354_);
lean_ctor_set(v___x_1356_, 2, v___x_1355_);
v___x_1357_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_1356_);
lean_dec_ref_known(v___x_1356_, 3);
if (v___x_1357_ == 0)
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1358_ = l_String_toListImpl(v_oldWs_1352_);
v___x_1359_ = lean_array_mk(v___x_1358_);
v___x_1360_ = l_String_toListImpl(v_newWs_1353_);
v___x_1361_ = lean_array_mk(v___x_1360_);
v___x_1362_ = l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(v___x_1359_, v___x_1361_);
v___x_1363_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(v___x_1362_);
lean_dec_ref(v___x_1362_);
return v___x_1363_;
}
else
{
uint8_t v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec_ref(v_oldWs_1352_);
v___x_1364_ = 2;
v___x_1365_ = lean_box(v___x_1364_);
v___x_1366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
lean_ctor_set(v___x_1366_, 1, v_newWs_1353_);
v___x_1367_ = lean_unsigned_to_nat(1u);
v___x_1368_ = lean_mk_empty_array_with_capacity(v___x_1367_);
v___x_1369_ = lean_array_push(v___x_1368_, v___x_1366_);
return v___x_1369_;
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0(lean_object* v_s_1370_, lean_object* v_inst_1371_, lean_object* v_R_1372_, lean_object* v_a_1373_, uint8_t v_b_1374_, lean_object* v_c_1375_){
_start:
{
uint8_t v___x_1376_; 
v___x_1376_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___redArg(v_s_1370_, v_a_1373_, v_b_1374_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0___boxed(lean_object* v_s_1377_, lean_object* v_inst_1378_, lean_object* v_R_1379_, lean_object* v_a_1380_, lean_object* v_b_1381_, lean_object* v_c_1382_){
_start:
{
uint8_t v_b_boxed_1383_; uint8_t v_res_1384_; lean_object* v_r_1385_; 
v_b_boxed_1383_ = lean_unbox(v_b_1381_);
v_res_1384_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0_spec__0(v_s_1377_, v_inst_1378_, v_R_1379_, v_a_1380_, v_b_boxed_1383_, v_c_1382_);
lean_dec_ref(v_s_1377_);
v_r_1385_ = lean_box(v_res_1384_);
return v_r_1385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2(lean_object* v___x_1386_, lean_object* v_original_1387_, uint32_t v_a_1388_, lean_object* v_inst_1389_, lean_object* v_a_1390_){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg(v___x_1386_, v_original_1387_, v_a_1388_, v_a_1390_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___boxed(lean_object* v___x_1392_, lean_object* v_original_1393_, lean_object* v_a_1394_, lean_object* v_inst_1395_, lean_object* v_a_1396_){
_start:
{
uint32_t v_a_boxed_1397_; lean_object* v_res_1398_; 
v_a_boxed_1397_ = lean_unbox_uint32(v_a_1394_);
lean_dec(v_a_1394_);
v_res_1398_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2(v___x_1392_, v_original_1393_, v_a_boxed_1397_, v_inst_1395_, v_a_1396_);
lean_dec_ref(v_original_1393_);
lean_dec(v___x_1392_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3(lean_object* v___x_1399_, lean_object* v_edited_1400_, uint32_t v_a_1401_, lean_object* v_inst_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___redArg(v___x_1399_, v_edited_1400_, v_a_1401_, v_a_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3___boxed(lean_object* v___x_1405_, lean_object* v_edited_1406_, lean_object* v_a_1407_, lean_object* v_inst_1408_, lean_object* v_a_1409_){
_start:
{
uint32_t v_a_boxed_1410_; lean_object* v_res_1411_; 
v_a_boxed_1410_ = lean_unbox_uint32(v_a_1407_);
lean_dec(v_a_1407_);
v_res_1411_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__3(v___x_1405_, v_edited_1406_, v_a_boxed_1410_, v_inst_1408_, v_a_1409_);
lean_dec_ref(v_edited_1406_);
lean_dec(v___x_1405_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6(lean_object* v___x_1412_, lean_object* v_original_1413_, lean_object* v_inst_1414_, lean_object* v_a_1415_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___redArg(v___x_1412_, v_original_1413_, v_a_1415_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6___boxed(lean_object* v___x_1417_, lean_object* v_original_1418_, lean_object* v_inst_1419_, lean_object* v_a_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__6(v___x_1417_, v_original_1418_, v_inst_1419_, v_a_1420_);
lean_dec_ref(v_original_1418_);
lean_dec(v___x_1417_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7(lean_object* v___x_1422_, lean_object* v_edited_1423_, lean_object* v_inst_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___redArg(v___x_1422_, v_edited_1423_, v_a_1425_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7___boxed(lean_object* v___x_1427_, lean_object* v_edited_1428_, lean_object* v_inst_1429_, lean_object* v_a_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__7(v___x_1427_, v_edited_1428_, v_inst_1429_, v_a_1430_);
lean_dec_ref(v_edited_1428_);
lean_dec(v___x_1427_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7(lean_object* v_as_1432_, lean_object* v_as_x27_1433_, lean_object* v_b_1434_, lean_object* v_a_1435_){
_start:
{
lean_object* v___x_1436_; 
v___x_1436_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___redArg(v_as_x27_1433_, v_b_1434_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7___boxed(lean_object* v_as_1437_, lean_object* v_as_x27_1438_, lean_object* v_b_1439_, lean_object* v_a_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__7(v_as_1437_, v_as_x27_1438_, v_b_1439_, v_a_1440_);
lean_dec(v_as_x27_1438_);
lean_dec(v_as_1437_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10(lean_object* v_lsize_1442_, lean_object* v_rsize_1443_, lean_object* v_histogram_1444_, lean_object* v_index_1445_, uint32_t v_val_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___redArg(v_histogram_1444_, v_index_1445_, v_val_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10___boxed(lean_object* v_lsize_1448_, lean_object* v_rsize_1449_, lean_object* v_histogram_1450_, lean_object* v_index_1451_, lean_object* v_val_1452_){
_start:
{
uint32_t v_val_boxed_1453_; lean_object* v_res_1454_; 
v_val_boxed_1453_ = lean_unbox_uint32(v_val_1452_);
lean_dec(v_val_1452_);
v_res_1454_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10(v_lsize_1448_, v_rsize_1449_, v_histogram_1450_, v_index_1451_, v_val_boxed_1453_);
lean_dec(v_rsize_1449_);
lean_dec(v_lsize_1448_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11(lean_object* v_upperBound_1455_, lean_object* v___x_1456_, lean_object* v_fst_1457_, lean_object* v___x_1458_, lean_object* v_inst_1459_, lean_object* v_R_1460_, lean_object* v_a_1461_, lean_object* v_b_1462_, lean_object* v_c_1463_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___redArg(v_upperBound_1455_, v___x_1456_, v_fst_1457_, v___x_1458_, v_a_1461_, v_b_1462_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11___boxed(lean_object* v_upperBound_1465_, lean_object* v___x_1466_, lean_object* v_fst_1467_, lean_object* v___x_1468_, lean_object* v_inst_1469_, lean_object* v_R_1470_, lean_object* v_a_1471_, lean_object* v_b_1472_, lean_object* v_c_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__11(v_upperBound_1465_, v___x_1466_, v_fst_1467_, v___x_1468_, v_inst_1469_, v_R_1470_, v_a_1471_, v_b_1472_, v_c_1473_);
lean_dec(v___x_1468_);
lean_dec_ref(v_fst_1467_);
lean_dec(v___x_1466_);
lean_dec(v_upperBound_1465_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12(lean_object* v_lsize_1475_, lean_object* v_rsize_1476_, lean_object* v_histogram_1477_, lean_object* v_index_1478_, uint32_t v_val_1479_){
_start:
{
lean_object* v___x_1480_; 
v___x_1480_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___redArg(v_histogram_1477_, v_index_1478_, v_val_1479_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12___boxed(lean_object* v_lsize_1481_, lean_object* v_rsize_1482_, lean_object* v_histogram_1483_, lean_object* v_index_1484_, lean_object* v_val_1485_){
_start:
{
uint32_t v_val_boxed_1486_; lean_object* v_res_1487_; 
v_val_boxed_1486_ = lean_unbox_uint32(v_val_1485_);
lean_dec(v_val_1485_);
v_res_1487_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__12(v_lsize_1481_, v_rsize_1482_, v_histogram_1483_, v_index_1484_, v_val_boxed_1486_);
lean_dec(v_rsize_1482_);
lean_dec(v_lsize_1481_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13(lean_object* v_upperBound_1488_, lean_object* v_fst_1489_, lean_object* v___x_1490_, lean_object* v_fst_1491_, lean_object* v_inst_1492_, lean_object* v_R_1493_, lean_object* v_a_1494_, lean_object* v_b_1495_, lean_object* v_c_1496_){
_start:
{
lean_object* v___x_1497_; 
v___x_1497_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___redArg(v_upperBound_1488_, v_fst_1489_, v___x_1490_, v_fst_1491_, v_a_1494_, v_b_1495_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13___boxed(lean_object* v_upperBound_1498_, lean_object* v_fst_1499_, lean_object* v___x_1500_, lean_object* v_fst_1501_, lean_object* v_inst_1502_, lean_object* v_R_1503_, lean_object* v_a_1504_, lean_object* v_b_1505_, lean_object* v_c_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__13(v_upperBound_1498_, v_fst_1499_, v___x_1500_, v_fst_1501_, v_inst_1502_, v_R_1503_, v_a_1504_, v_b_1505_, v_c_1506_);
lean_dec_ref(v_fst_1501_);
lean_dec(v___x_1500_);
lean_dec_ref(v_fst_1499_);
lean_dec(v_upperBound_1498_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13(lean_object* v_00_u03b2_1508_, lean_object* v_m_1509_, uint32_t v_a_1510_){
_start:
{
lean_object* v___x_1511_; 
v___x_1511_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___redArg(v_m_1509_, v_a_1510_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13___boxed(lean_object* v_00_u03b2_1512_, lean_object* v_m_1513_, lean_object* v_a_1514_){
_start:
{
uint32_t v_a_boxed_1515_; lean_object* v_res_1516_; 
v_a_boxed_1515_ = lean_unbox_uint32(v_a_1514_);
lean_dec(v_a_1514_);
v_res_1516_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13(v_00_u03b2_1512_, v_m_1513_, v_a_boxed_1515_);
lean_dec_ref(v_m_1513_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14(lean_object* v_00_u03b2_1517_, lean_object* v_m_1518_, uint32_t v_a_1519_, lean_object* v_b_1520_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___redArg(v_m_1518_, v_a_1519_, v_b_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14___boxed(lean_object* v_00_u03b2_1522_, lean_object* v_m_1523_, lean_object* v_a_1524_, lean_object* v_b_1525_){
_start:
{
uint32_t v_a_boxed_1526_; lean_object* v_res_1527_; 
v_a_boxed_1526_ = lean_unbox_uint32(v_a_1524_);
lean_dec(v_a_1524_);
v_res_1527_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14(v_00_u03b2_1522_, v_m_1523_, v_a_boxed_1526_, v_b_1525_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14(lean_object* v_inst_1528_, lean_object* v_R_1529_, lean_object* v_a_1530_, lean_object* v_b_1531_){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__6_spec__8_spec__14___redArg(v_a_1530_, v_b_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20(lean_object* v_00_u03b2_1533_, uint32_t v_a_1534_, lean_object* v_x_1535_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___redArg(v_a_1534_, v_x_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20___boxed(lean_object* v_00_u03b2_1537_, lean_object* v_a_1538_, lean_object* v_x_1539_){
_start:
{
uint32_t v_a_boxed_1540_; lean_object* v_res_1541_; 
v_a_boxed_1540_ = lean_unbox_uint32(v_a_1538_);
lean_dec(v_a_1538_);
v_res_1541_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__13_spec__20(v_00_u03b2_1537_, v_a_boxed_1540_, v_x_1539_);
lean_dec(v_x_1539_);
return v_res_1541_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22(lean_object* v_00_u03b2_1542_, uint32_t v_a_1543_, lean_object* v_x_1544_){
_start:
{
uint8_t v___x_1545_; 
v___x_1545_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___redArg(v_a_1543_, v_x_1544_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22___boxed(lean_object* v_00_u03b2_1546_, lean_object* v_a_1547_, lean_object* v_x_1548_){
_start:
{
uint32_t v_a_boxed_1549_; uint8_t v_res_1550_; lean_object* v_r_1551_; 
v_a_boxed_1549_ = lean_unbox_uint32(v_a_1547_);
lean_dec(v_a_1547_);
v_res_1550_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__22(v_00_u03b2_1546_, v_a_boxed_1549_, v_x_1548_);
lean_dec(v_x_1548_);
v_r_1551_ = lean_box(v_res_1550_);
return v_r_1551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23(lean_object* v_00_u03b2_1552_, lean_object* v_data_1553_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23___redArg(v_data_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24(lean_object* v_00_u03b2_1555_, uint32_t v_a_1556_, lean_object* v_b_1557_, lean_object* v_x_1558_){
_start:
{
lean_object* v___x_1559_; 
v___x_1559_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___redArg(v_a_1556_, v_b_1557_, v_x_1558_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24___boxed(lean_object* v_00_u03b2_1560_, lean_object* v_a_1561_, lean_object* v_b_1562_, lean_object* v_x_1563_){
_start:
{
uint32_t v_a_boxed_1564_; lean_object* v_res_1565_; 
v_a_boxed_1564_ = lean_unbox_uint32(v_a_1561_);
lean_dec(v_a_1561_);
v_res_1565_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__24(v_00_u03b2_1560_, v_a_boxed_1564_, v_b_1562_, v_x_1563_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28(lean_object* v_00_u03b2_1566_, lean_object* v_i_1567_, lean_object* v_source_1568_, lean_object* v_target_1569_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28___redArg(v_i_1567_, v_source_1568_, v_target_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29(lean_object* v_00_u03b2_1571_, lean_object* v_x_1572_, lean_object* v_x_1573_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__4_spec__10_spec__14_spec__23_spec__28_spec__29___redArg(v_x_1572_, v_x_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0(lean_object* v_s_1575_, lean_object* v_stopPos_1576_, lean_object* v_i_1577_){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; 
v___x_1581_ = lean_unsigned_to_nat(1u);
v___x_1582_ = lean_nat_add(v_i_1577_, v___x_1581_);
v___x_1583_ = lean_nat_dec_le(v___x_1582_, v_stopPos_1576_);
lean_dec(v___x_1582_);
if (v___x_1583_ == 0)
{
return v_i_1577_;
}
else
{
uint32_t v___x_1584_; uint32_t v___x_1585_; uint8_t v___x_1586_; 
v___x_1584_ = lean_string_utf8_get(v_s_1575_, v_i_1577_);
v___x_1585_ = 32;
v___x_1586_ = lean_uint32_dec_eq(v___x_1584_, v___x_1585_);
if (v___x_1586_ == 0)
{
uint32_t v___x_1587_; uint8_t v___x_1588_; 
v___x_1587_ = 9;
v___x_1588_ = lean_uint32_dec_eq(v___x_1584_, v___x_1587_);
if (v___x_1588_ == 0)
{
uint32_t v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = 13;
v___x_1590_ = lean_uint32_dec_eq(v___x_1584_, v___x_1589_);
if (v___x_1590_ == 0)
{
uint32_t v___x_1591_; uint8_t v___x_1592_; 
v___x_1591_ = 10;
v___x_1592_ = lean_uint32_dec_eq(v___x_1584_, v___x_1591_);
if (v___x_1592_ == 0)
{
return v_i_1577_;
}
else
{
goto v___jp_1578_;
}
}
else
{
goto v___jp_1578_;
}
}
else
{
goto v___jp_1578_;
}
}
else
{
goto v___jp_1578_;
}
}
v___jp_1578_:
{
lean_object* v___x_1579_; 
v___x_1579_ = lean_string_utf8_next(v_s_1575_, v_i_1577_);
lean_dec(v_i_1577_);
v_i_1577_ = v___x_1579_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0___boxed(lean_object* v_s_1593_, lean_object* v_stopPos_1594_, lean_object* v_i_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0(v_s_1593_, v_stopPos_1594_, v_i_1595_);
lean_dec(v_stopPos_1594_);
lean_dec_ref(v_s_1593_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux(lean_object* v_s_1597_, lean_object* v_b_1598_, lean_object* v_i_1599_, lean_object* v_r_1600_, lean_object* v_ws_1601_){
_start:
{
uint8_t v___x_1610_; 
v___x_1610_ = lean_string_utf8_at_end(v_s_1597_, v_i_1599_);
if (v___x_1610_ == 0)
{
uint32_t v___x_1611_; uint32_t v___x_1612_; uint8_t v___x_1613_; 
v___x_1611_ = lean_string_utf8_get(v_s_1597_, v_i_1599_);
v___x_1612_ = 32;
v___x_1613_ = lean_uint32_dec_eq(v___x_1611_, v___x_1612_);
if (v___x_1613_ == 0)
{
uint32_t v___x_1614_; uint8_t v___x_1615_; 
v___x_1614_ = 9;
v___x_1615_ = lean_uint32_dec_eq(v___x_1611_, v___x_1614_);
if (v___x_1615_ == 0)
{
uint32_t v___x_1616_; uint8_t v___x_1617_; 
v___x_1616_ = 13;
v___x_1617_ = lean_uint32_dec_eq(v___x_1611_, v___x_1616_);
if (v___x_1617_ == 0)
{
uint32_t v___x_1618_; uint8_t v___x_1619_; 
v___x_1618_ = 10;
v___x_1619_ = lean_uint32_dec_eq(v___x_1611_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; 
v___x_1620_ = lean_string_utf8_next(v_s_1597_, v_i_1599_);
lean_dec(v_i_1599_);
v_i_1599_ = v___x_1620_;
goto _start;
}
else
{
goto v___jp_1602_;
}
}
else
{
goto v___jp_1602_;
}
}
else
{
goto v___jp_1602_;
}
}
else
{
goto v___jp_1602_;
}
}
else
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1622_ = lean_string_utf8_extract(v_s_1597_, v_b_1598_, v_i_1599_);
lean_dec(v_i_1599_);
lean_dec(v_b_1598_);
v___x_1623_ = lean_array_push(v_r_1600_, v___x_1622_);
v___x_1624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
lean_ctor_set(v___x_1624_, 1, v_ws_1601_);
return v___x_1624_;
}
v___jp_1602_:
{
lean_object* v___x_1603_; lean_object* v_e_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1603_ = lean_string_utf8_byte_size(v_s_1597_);
lean_inc(v_i_1599_);
v_e_1604_ = l_Substring_Raw_takeWhileAux___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux_spec__0(v_s_1597_, v___x_1603_, v_i_1599_);
v___x_1605_ = lean_string_utf8_extract(v_s_1597_, v_b_1598_, v_i_1599_);
lean_dec(v_b_1598_);
v___x_1606_ = lean_array_push(v_r_1600_, v___x_1605_);
v___x_1607_ = lean_string_utf8_extract(v_s_1597_, v_i_1599_, v_e_1604_);
lean_dec(v_i_1599_);
v___x_1608_ = lean_array_push(v_ws_1601_, v___x_1607_);
lean_inc(v_e_1604_);
v_b_1598_ = v_e_1604_;
v_i_1599_ = v_e_1604_;
v_r_1600_ = v___x_1606_;
v_ws_1601_ = v___x_1608_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux___boxed(lean_object* v_s_1625_, lean_object* v_b_1626_, lean_object* v_i_1627_, lean_object* v_r_1628_, lean_object* v_ws_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux(v_s_1625_, v_b_1626_, v_i_1627_, v_r_1628_, v_ws_1629_);
lean_dec_ref(v_s_1625_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(lean_object* v_s_1633_){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1634_ = lean_unsigned_to_nat(0u);
v___x_1635_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0));
v___x_1636_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWordsAux(v_s_1633_, v___x_1634_, v___x_1634_, v___x_1635_, v___x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___boxed(lean_object* v_s_1637_){
_start:
{
lean_object* v_res_1638_; 
v_res_1638_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(v_s_1637_);
lean_dec_ref(v_s_1637_);
return v_res_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0(size_t v_sz_1639_, size_t v_i_1640_, lean_object* v_bs_1641_){
_start:
{
uint8_t v___x_1642_; 
v___x_1642_ = lean_usize_dec_lt(v_i_1640_, v_sz_1639_);
if (v___x_1642_ == 0)
{
return v_bs_1641_;
}
else
{
lean_object* v_v_1643_; lean_object* v_fst_1644_; lean_object* v_snd_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1669_; 
v_v_1643_ = lean_array_uget(v_bs_1641_, v_i_1640_);
v_fst_1644_ = lean_ctor_get(v_v_1643_, 0);
v_snd_1645_ = lean_ctor_get(v_v_1643_, 1);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_v_1643_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1647_ = v_v_1643_;
v_isShared_1648_ = v_isSharedCheck_1669_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_snd_1645_);
lean_inc(v_fst_1644_);
lean_dec(v_v_1643_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1669_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1649_; lean_object* v_bs_x27_1650_; lean_object* v___y_1652_; lean_object* v___x_1657_; lean_object* v___x_1658_; uint8_t v___x_1659_; 
v___x_1649_ = lean_unsigned_to_nat(0u);
v_bs_x27_1650_ = lean_array_uset(v_bs_1641_, v_i_1640_, v___x_1649_);
v___x_1657_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_1658_ = lean_array_get_size(v_snd_1645_);
v___x_1659_ = lean_nat_dec_lt(v___x_1649_, v___x_1658_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1661_; 
lean_dec(v_snd_1645_);
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 1, v___x_1657_);
v___x_1661_ = v___x_1647_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_fst_1644_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v___x_1657_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
v___y_1652_ = v___x_1661_;
goto v___jp_1651_;
}
}
else
{
size_t v___x_1663_; size_t v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1667_; 
v___x_1663_ = ((size_t)0ULL);
v___x_1664_ = lean_usize_of_nat(v___x_1658_);
v___x_1665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__3(v_snd_1645_, v___x_1663_, v___x_1664_, v___x_1657_);
lean_dec(v_snd_1645_);
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 1, v___x_1665_);
v___x_1667_ = v___x_1647_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_fst_1644_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v___x_1665_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
v___y_1652_ = v___x_1667_;
goto v___jp_1651_;
}
}
v___jp_1651_:
{
size_t v___x_1653_; size_t v___x_1654_; lean_object* v___x_1655_; 
v___x_1653_ = ((size_t)1ULL);
v___x_1654_ = lean_usize_add(v_i_1640_, v___x_1653_);
v___x_1655_ = lean_array_uset(v_bs_x27_1650_, v_i_1640_, v___y_1652_);
v_i_1640_ = v___x_1654_;
v_bs_1641_ = v___x_1655_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0___boxed(lean_object* v_sz_1670_, lean_object* v_i_1671_, lean_object* v_bs_1672_){
_start:
{
size_t v_sz_boxed_1673_; size_t v_i_boxed_1674_; lean_object* v_res_1675_; 
v_sz_boxed_1673_ = lean_unbox_usize(v_sz_1670_);
lean_dec(v_sz_1670_);
v_i_boxed_1674_ = lean_unbox_usize(v_i_1671_);
lean_dec(v_i_1671_);
v_res_1675_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0(v_sz_boxed_1673_, v_i_boxed_1674_, v_bs_1672_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8(size_t v_sz_1676_, size_t v_i_1677_, lean_object* v_bs_1678_){
_start:
{
uint8_t v___x_1679_; 
v___x_1679_ = lean_usize_dec_lt(v_i_1677_, v_sz_1676_);
if (v___x_1679_ == 0)
{
return v_bs_1678_;
}
else
{
lean_object* v_v_1680_; lean_object* v___x_1681_; lean_object* v_bs_x27_1682_; uint8_t v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; size_t v___x_1686_; size_t v___x_1687_; lean_object* v___x_1688_; 
v_v_1680_ = lean_array_uget(v_bs_1678_, v_i_1677_);
v___x_1681_ = lean_unsigned_to_nat(0u);
v_bs_x27_1682_ = lean_array_uset(v_bs_1678_, v_i_1677_, v___x_1681_);
v___x_1683_ = 0;
v___x_1684_ = lean_box(v___x_1683_);
v___x_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
lean_ctor_set(v___x_1685_, 1, v_v_1680_);
v___x_1686_ = ((size_t)1ULL);
v___x_1687_ = lean_usize_add(v_i_1677_, v___x_1686_);
v___x_1688_ = lean_array_uset(v_bs_x27_1682_, v_i_1677_, v___x_1685_);
v_i_1677_ = v___x_1687_;
v_bs_1678_ = v___x_1688_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8___boxed(lean_object* v_sz_1690_, lean_object* v_i_1691_, lean_object* v_bs_1692_){
_start:
{
size_t v_sz_boxed_1693_; size_t v_i_boxed_1694_; lean_object* v_res_1695_; 
v_sz_boxed_1693_ = lean_unbox_usize(v_sz_1690_);
lean_dec(v_sz_1690_);
v_i_boxed_1694_ = lean_unbox_usize(v_i_1691_);
lean_dec(v_i_1691_);
v_res_1695_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8(v_sz_boxed_1693_, v_i_boxed_1694_, v_bs_1692_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(lean_object* v_x_1696_, lean_object* v_x_1697_){
_start:
{
if (lean_obj_tag(v_x_1697_) == 0)
{
lean_inc(v_x_1696_);
return v_x_1696_;
}
else
{
lean_object* v_key_1698_; lean_object* v_value_1699_; lean_object* v_tail_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v_key_1698_ = lean_ctor_get(v_x_1697_, 0);
v_value_1699_ = lean_ctor_get(v_x_1697_, 1);
v_tail_1700_ = lean_ctor_get(v_x_1697_, 2);
v___x_1701_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(v_x_1696_, v_tail_1700_);
lean_inc(v_value_1699_);
lean_inc(v_key_1698_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v_key_1698_);
lean_ctor_set(v___x_1702_, 1, v_value_1699_);
v___x_1703_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
lean_ctor_set(v___x_1703_, 1, v___x_1701_);
return v___x_1703_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7___boxed(lean_object* v_x_1704_, lean_object* v_x_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(v_x_1704_, v_x_1705_);
lean_dec(v_x_1705_);
lean_dec(v_x_1704_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8(lean_object* v_as_1707_, size_t v_i_1708_, size_t v_stop_1709_, lean_object* v_b_1710_){
_start:
{
uint8_t v___x_1711_; 
v___x_1711_ = lean_usize_dec_eq(v_i_1708_, v_stop_1709_);
if (v___x_1711_ == 0)
{
size_t v___x_1712_; size_t v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1712_ = ((size_t)1ULL);
v___x_1713_ = lean_usize_sub(v_i_1708_, v___x_1712_);
v___x_1714_ = lean_array_uget_borrowed(v_as_1707_, v___x_1713_);
v___x_1715_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__7(v_b_1710_, v___x_1714_);
lean_dec(v_b_1710_);
v_i_1708_ = v___x_1713_;
v_b_1710_ = v___x_1715_;
goto _start;
}
else
{
return v_b_1710_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8___boxed(lean_object* v_as_1717_, lean_object* v_i_1718_, lean_object* v_stop_1719_, lean_object* v_b_1720_){
_start:
{
size_t v_i_boxed_1721_; size_t v_stop_boxed_1722_; lean_object* v_res_1723_; 
v_i_boxed_1721_ = lean_unbox_usize(v_i_1718_);
lean_dec(v_i_1718_);
v_stop_boxed_1722_ = lean_unbox_usize(v_stop_1719_);
lean_dec(v_stop_1719_);
v_res_1723_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8(v_as_1717_, v_i_boxed_1721_, v_stop_boxed_1722_, v_b_1720_);
lean_dec_ref(v_as_1717_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4_spec__6(lean_object* v_left_1724_, lean_object* v_right_1725_, lean_object* v_pref_1726_){
_start:
{
lean_object* v_start_1727_; lean_object* v_stop_1728_; lean_object* v_i_1729_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v_start_1727_ = lean_ctor_get(v_left_1724_, 1);
v_stop_1728_ = lean_ctor_get(v_left_1724_, 2);
v_i_1729_ = lean_array_get_size(v_pref_1726_);
v___x_1735_ = lean_nat_sub(v_stop_1728_, v_start_1727_);
v___x_1736_ = lean_nat_dec_lt(v_i_1729_, v___x_1735_);
lean_dec(v___x_1735_);
if (v___x_1736_ == 0)
{
goto v___jp_1730_;
}
else
{
lean_object* v_start_1737_; lean_object* v_stop_1738_; lean_object* v___x_1739_; uint8_t v___x_1740_; 
v_start_1737_ = lean_ctor_get(v_right_1725_, 1);
v_stop_1738_ = lean_ctor_get(v_right_1725_, 2);
v___x_1739_ = lean_nat_sub(v_stop_1738_, v_start_1737_);
v___x_1740_ = lean_nat_dec_lt(v_i_1729_, v___x_1739_);
lean_dec(v___x_1739_);
if (v___x_1740_ == 0)
{
goto v___jp_1730_;
}
else
{
lean_object* v___x_1741_; lean_object* v___x_1742_; uint8_t v___x_1743_; 
v___x_1741_ = l_Subarray_get___redArg(v_left_1724_, v_i_1729_);
v___x_1742_ = l_Subarray_get___redArg(v_right_1725_, v_i_1729_);
v___x_1743_ = lean_string_dec_eq(v___x_1741_, v___x_1742_);
lean_dec(v___x_1742_);
if (v___x_1743_ == 0)
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
lean_dec(v___x_1741_);
v___x_1744_ = l_Subarray_drop___redArg(v_left_1724_, v_i_1729_);
v___x_1745_ = l_Subarray_drop___redArg(v_right_1725_, v_i_1729_);
v___x_1746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1746_, 0, v___x_1744_);
lean_ctor_set(v___x_1746_, 1, v___x_1745_);
v___x_1747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1747_, 0, v_pref_1726_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
return v___x_1747_;
}
else
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_array_push(v_pref_1726_, v___x_1741_);
v_pref_1726_ = v___x_1748_;
goto _start;
}
}
}
v___jp_1730_:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1731_ = l_Subarray_drop___redArg(v_left_1724_, v_i_1729_);
v___x_1732_ = l_Subarray_drop___redArg(v_right_1725_, v_i_1729_);
v___x_1733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1731_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
v___x_1734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1734_, 0, v_pref_1726_);
lean_ctor_set(v___x_1734_, 1, v___x_1733_);
return v___x_1734_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4(lean_object* v_left_1750_, lean_object* v_right_1751_){
_start:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0));
v___x_1753_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchPrefix_go___at___00Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4_spec__6(v_left_1750_, v_right_1751_, v___x_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(lean_object* v_a_1754_, lean_object* v_x_1755_){
_start:
{
if (lean_obj_tag(v_x_1755_) == 0)
{
lean_object* v___x_1756_; 
v___x_1756_ = lean_box(0);
return v___x_1756_;
}
else
{
lean_object* v_key_1757_; lean_object* v_value_1758_; lean_object* v_tail_1759_; uint8_t v___x_1760_; 
v_key_1757_ = lean_ctor_get(v_x_1755_, 0);
v_value_1758_ = lean_ctor_get(v_x_1755_, 1);
v_tail_1759_ = lean_ctor_get(v_x_1755_, 2);
v___x_1760_ = lean_string_dec_eq(v_key_1757_, v_a_1754_);
if (v___x_1760_ == 0)
{
v_x_1755_ = v_tail_1759_;
goto _start;
}
else
{
lean_object* v___x_1762_; 
lean_inc(v_value_1758_);
v___x_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1762_, 0, v_value_1758_);
return v___x_1762_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg___boxed(lean_object* v_a_1763_, lean_object* v_x_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(v_a_1763_, v_x_1764_);
lean_dec(v_x_1764_);
lean_dec_ref(v_a_1763_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(lean_object* v_m_1766_, lean_object* v_a_1767_){
_start:
{
lean_object* v_buckets_1768_; lean_object* v___x_1769_; uint64_t v___x_1770_; uint64_t v___x_1771_; uint64_t v___x_1772_; uint64_t v_fold_1773_; uint64_t v___x_1774_; uint64_t v___x_1775_; uint64_t v___x_1776_; size_t v___x_1777_; size_t v___x_1778_; size_t v___x_1779_; size_t v___x_1780_; size_t v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v_buckets_1768_ = lean_ctor_get(v_m_1766_, 1);
v___x_1769_ = lean_array_get_size(v_buckets_1768_);
v___x_1770_ = lean_string_hash(v_a_1767_);
v___x_1771_ = 32ULL;
v___x_1772_ = lean_uint64_shift_right(v___x_1770_, v___x_1771_);
v_fold_1773_ = lean_uint64_xor(v___x_1770_, v___x_1772_);
v___x_1774_ = 16ULL;
v___x_1775_ = lean_uint64_shift_right(v_fold_1773_, v___x_1774_);
v___x_1776_ = lean_uint64_xor(v_fold_1773_, v___x_1775_);
v___x_1777_ = lean_uint64_to_usize(v___x_1776_);
v___x_1778_ = lean_usize_of_nat(v___x_1769_);
v___x_1779_ = ((size_t)1ULL);
v___x_1780_ = lean_usize_sub(v___x_1778_, v___x_1779_);
v___x_1781_ = lean_usize_land(v___x_1777_, v___x_1780_);
v___x_1782_ = lean_array_uget_borrowed(v_buckets_1768_, v___x_1781_);
v___x_1783_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(v_a_1767_, v___x_1782_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg___boxed(lean_object* v_m_1784_, lean_object* v_a_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(v_m_1784_, v_a_1785_);
lean_dec_ref(v_a_1785_);
lean_dec_ref(v_m_1784_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29___redArg(lean_object* v_x_1787_, lean_object* v_x_1788_){
_start:
{
if (lean_obj_tag(v_x_1788_) == 0)
{
return v_x_1787_;
}
else
{
lean_object* v_key_1789_; lean_object* v_value_1790_; lean_object* v_tail_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1814_; 
v_key_1789_ = lean_ctor_get(v_x_1788_, 0);
v_value_1790_ = lean_ctor_get(v_x_1788_, 1);
v_tail_1791_ = lean_ctor_get(v_x_1788_, 2);
v_isSharedCheck_1814_ = !lean_is_exclusive(v_x_1788_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1793_ = v_x_1788_;
v_isShared_1794_ = v_isSharedCheck_1814_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_tail_1791_);
lean_inc(v_value_1790_);
lean_inc(v_key_1789_);
lean_dec(v_x_1788_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1814_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1795_; uint64_t v___x_1796_; uint64_t v___x_1797_; uint64_t v___x_1798_; uint64_t v_fold_1799_; uint64_t v___x_1800_; uint64_t v___x_1801_; uint64_t v___x_1802_; size_t v___x_1803_; size_t v___x_1804_; size_t v___x_1805_; size_t v___x_1806_; size_t v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1810_; 
v___x_1795_ = lean_array_get_size(v_x_1787_);
v___x_1796_ = lean_string_hash(v_key_1789_);
v___x_1797_ = 32ULL;
v___x_1798_ = lean_uint64_shift_right(v___x_1796_, v___x_1797_);
v_fold_1799_ = lean_uint64_xor(v___x_1796_, v___x_1798_);
v___x_1800_ = 16ULL;
v___x_1801_ = lean_uint64_shift_right(v_fold_1799_, v___x_1800_);
v___x_1802_ = lean_uint64_xor(v_fold_1799_, v___x_1801_);
v___x_1803_ = lean_uint64_to_usize(v___x_1802_);
v___x_1804_ = lean_usize_of_nat(v___x_1795_);
v___x_1805_ = ((size_t)1ULL);
v___x_1806_ = lean_usize_sub(v___x_1804_, v___x_1805_);
v___x_1807_ = lean_usize_land(v___x_1803_, v___x_1806_);
v___x_1808_ = lean_array_uget_borrowed(v_x_1787_, v___x_1807_);
lean_inc(v___x_1808_);
if (v_isShared_1794_ == 0)
{
lean_ctor_set(v___x_1793_, 2, v___x_1808_);
v___x_1810_ = v___x_1793_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_key_1789_);
lean_ctor_set(v_reuseFailAlloc_1813_, 1, v_value_1790_);
lean_ctor_set(v_reuseFailAlloc_1813_, 2, v___x_1808_);
v___x_1810_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
lean_object* v___x_1811_; 
v___x_1811_ = lean_array_uset(v_x_1787_, v___x_1807_, v___x_1810_);
v_x_1787_ = v___x_1811_;
v_x_1788_ = v_tail_1791_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28___redArg(lean_object* v_i_1815_, lean_object* v_source_1816_, lean_object* v_target_1817_){
_start:
{
lean_object* v___x_1818_; uint8_t v___x_1819_; 
v___x_1818_ = lean_array_get_size(v_source_1816_);
v___x_1819_ = lean_nat_dec_lt(v_i_1815_, v___x_1818_);
if (v___x_1819_ == 0)
{
lean_dec_ref(v_source_1816_);
lean_dec(v_i_1815_);
return v_target_1817_;
}
else
{
lean_object* v_es_1820_; lean_object* v___x_1821_; lean_object* v_source_1822_; lean_object* v_target_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v_es_1820_ = lean_array_fget(v_source_1816_, v_i_1815_);
v___x_1821_ = lean_box(0);
v_source_1822_ = lean_array_fset(v_source_1816_, v_i_1815_, v___x_1821_);
v_target_1823_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29___redArg(v_target_1817_, v_es_1820_);
v___x_1824_ = lean_unsigned_to_nat(1u);
v___x_1825_ = lean_nat_add(v_i_1815_, v___x_1824_);
lean_dec(v_i_1815_);
v_i_1815_ = v___x_1825_;
v_source_1816_ = v_source_1822_;
v_target_1817_ = v_target_1823_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23___redArg(lean_object* v_data_1827_){
_start:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v_nbuckets_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1828_ = lean_array_get_size(v_data_1827_);
v___x_1829_ = lean_unsigned_to_nat(2u);
v_nbuckets_1830_ = lean_nat_mul(v___x_1828_, v___x_1829_);
v___x_1831_ = lean_unsigned_to_nat(0u);
v___x_1832_ = lean_box(0);
v___x_1833_ = lean_mk_array(v_nbuckets_1830_, v___x_1832_);
v___x_1834_ = lean_array_propagate_mark(v_data_1827_, v___x_1833_);
v___x_1835_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28___redArg(v___x_1831_, v_data_1827_, v___x_1834_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(lean_object* v_a_1836_, lean_object* v_b_1837_, lean_object* v_x_1838_){
_start:
{
if (lean_obj_tag(v_x_1838_) == 0)
{
lean_dec(v_b_1837_);
lean_dec_ref(v_a_1836_);
return v_x_1838_;
}
else
{
lean_object* v_key_1839_; lean_object* v_value_1840_; lean_object* v_tail_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1853_; 
v_key_1839_ = lean_ctor_get(v_x_1838_, 0);
v_value_1840_ = lean_ctor_get(v_x_1838_, 1);
v_tail_1841_ = lean_ctor_get(v_x_1838_, 2);
v_isSharedCheck_1853_ = !lean_is_exclusive(v_x_1838_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1843_ = v_x_1838_;
v_isShared_1844_ = v_isSharedCheck_1853_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_tail_1841_);
lean_inc(v_value_1840_);
lean_inc(v_key_1839_);
lean_dec(v_x_1838_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1853_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
uint8_t v___x_1845_; 
v___x_1845_ = lean_string_dec_eq(v_key_1839_, v_a_1836_);
if (v___x_1845_ == 0)
{
lean_object* v___x_1846_; lean_object* v___x_1848_; 
v___x_1846_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(v_a_1836_, v_b_1837_, v_tail_1841_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 2, v___x_1846_);
v___x_1848_ = v___x_1843_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_key_1839_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v_value_1840_);
lean_ctor_set(v_reuseFailAlloc_1849_, 2, v___x_1846_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
else
{
lean_object* v___x_1851_; 
lean_dec(v_value_1840_);
lean_dec(v_key_1839_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 1, v_b_1837_);
lean_ctor_set(v___x_1843_, 0, v_a_1836_);
v___x_1851_ = v___x_1843_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1836_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v_b_1837_);
lean_ctor_set(v_reuseFailAlloc_1852_, 2, v_tail_1841_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(lean_object* v_a_1854_, lean_object* v_x_1855_){
_start:
{
if (lean_obj_tag(v_x_1855_) == 0)
{
uint8_t v___x_1856_; 
v___x_1856_ = 0;
return v___x_1856_;
}
else
{
lean_object* v_key_1857_; lean_object* v_tail_1858_; uint8_t v___x_1859_; 
v_key_1857_ = lean_ctor_get(v_x_1855_, 0);
v_tail_1858_ = lean_ctor_get(v_x_1855_, 2);
v___x_1859_ = lean_string_dec_eq(v_key_1857_, v_a_1854_);
if (v___x_1859_ == 0)
{
v_x_1855_ = v_tail_1858_;
goto _start;
}
else
{
return v___x_1859_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg___boxed(lean_object* v_a_1861_, lean_object* v_x_1862_){
_start:
{
uint8_t v_res_1863_; lean_object* v_r_1864_; 
v_res_1863_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(v_a_1861_, v_x_1862_);
lean_dec(v_x_1862_);
lean_dec_ref(v_a_1861_);
v_r_1864_ = lean_box(v_res_1863_);
return v_r_1864_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(lean_object* v_m_1865_, lean_object* v_a_1866_, lean_object* v_b_1867_){
_start:
{
lean_object* v_size_1868_; lean_object* v_buckets_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1912_; 
v_size_1868_ = lean_ctor_get(v_m_1865_, 0);
v_buckets_1869_ = lean_ctor_get(v_m_1865_, 1);
v_isSharedCheck_1912_ = !lean_is_exclusive(v_m_1865_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1871_ = v_m_1865_;
v_isShared_1872_ = v_isSharedCheck_1912_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_buckets_1869_);
lean_inc(v_size_1868_);
lean_dec(v_m_1865_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1912_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1873_; uint64_t v___x_1874_; uint64_t v___x_1875_; uint64_t v___x_1876_; uint64_t v_fold_1877_; uint64_t v___x_1878_; uint64_t v___x_1879_; uint64_t v___x_1880_; size_t v___x_1881_; size_t v___x_1882_; size_t v___x_1883_; size_t v___x_1884_; size_t v___x_1885_; lean_object* v_bkt_1886_; uint8_t v___x_1887_; 
v___x_1873_ = lean_array_get_size(v_buckets_1869_);
v___x_1874_ = lean_string_hash(v_a_1866_);
v___x_1875_ = 32ULL;
v___x_1876_ = lean_uint64_shift_right(v___x_1874_, v___x_1875_);
v_fold_1877_ = lean_uint64_xor(v___x_1874_, v___x_1876_);
v___x_1878_ = 16ULL;
v___x_1879_ = lean_uint64_shift_right(v_fold_1877_, v___x_1878_);
v___x_1880_ = lean_uint64_xor(v_fold_1877_, v___x_1879_);
v___x_1881_ = lean_uint64_to_usize(v___x_1880_);
v___x_1882_ = lean_usize_of_nat(v___x_1873_);
v___x_1883_ = ((size_t)1ULL);
v___x_1884_ = lean_usize_sub(v___x_1882_, v___x_1883_);
v___x_1885_ = lean_usize_land(v___x_1881_, v___x_1884_);
v_bkt_1886_ = lean_array_uget_borrowed(v_buckets_1869_, v___x_1885_);
v___x_1887_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(v_a_1866_, v_bkt_1886_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1888_; lean_object* v_size_x27_1889_; lean_object* v___x_1890_; lean_object* v_buckets_x27_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; uint8_t v___x_1897_; 
v___x_1888_ = lean_unsigned_to_nat(1u);
v_size_x27_1889_ = lean_nat_add(v_size_1868_, v___x_1888_);
lean_dec(v_size_1868_);
lean_inc(v_bkt_1886_);
v___x_1890_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1890_, 0, v_a_1866_);
lean_ctor_set(v___x_1890_, 1, v_b_1867_);
lean_ctor_set(v___x_1890_, 2, v_bkt_1886_);
v_buckets_x27_1891_ = lean_array_uset(v_buckets_1869_, v___x_1885_, v___x_1890_);
v___x_1892_ = lean_unsigned_to_nat(4u);
v___x_1893_ = lean_nat_mul(v_size_x27_1889_, v___x_1892_);
v___x_1894_ = lean_unsigned_to_nat(3u);
v___x_1895_ = lean_nat_div(v___x_1893_, v___x_1894_);
lean_dec(v___x_1893_);
v___x_1896_ = lean_array_get_size(v_buckets_x27_1891_);
v___x_1897_ = lean_nat_dec_le(v___x_1895_, v___x_1896_);
lean_dec(v___x_1895_);
if (v___x_1897_ == 0)
{
lean_object* v_val_1898_; lean_object* v___x_1900_; 
v_val_1898_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23___redArg(v_buckets_x27_1891_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 1, v_val_1898_);
lean_ctor_set(v___x_1871_, 0, v_size_x27_1889_);
v___x_1900_ = v___x_1871_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_size_x27_1889_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v_val_1898_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
else
{
lean_object* v___x_1903_; 
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 1, v_buckets_x27_1891_);
lean_ctor_set(v___x_1871_, 0, v_size_x27_1889_);
v___x_1903_ = v___x_1871_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_size_x27_1889_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v_buckets_x27_1891_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
else
{
lean_object* v___x_1905_; lean_object* v_buckets_x27_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1910_; 
lean_inc(v_bkt_1886_);
v___x_1905_ = lean_box(0);
v_buckets_x27_1906_ = lean_array_uset(v_buckets_1869_, v___x_1885_, v___x_1905_);
v___x_1907_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(v_a_1866_, v_b_1867_, v_bkt_1886_);
v___x_1908_ = lean_array_uset(v_buckets_x27_1906_, v___x_1885_, v___x_1907_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 1, v___x_1908_);
v___x_1910_ = v___x_1871_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_size_1868_);
lean_ctor_set(v_reuseFailAlloc_1911_, 1, v___x_1908_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___redArg(lean_object* v_histogram_1913_, lean_object* v_index_1914_, lean_object* v_val_1915_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(v_histogram_1913_, v_val_1915_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1917_ = lean_unsigned_to_nat(0u);
v___x_1918_ = lean_box(0);
v___x_1919_ = lean_unsigned_to_nat(1u);
v___x_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1920_, 0, v_index_1914_);
v___x_1921_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1917_);
lean_ctor_set(v___x_1921_, 1, v___x_1918_);
lean_ctor_set(v___x_1921_, 2, v___x_1919_);
lean_ctor_set(v___x_1921_, 3, v___x_1920_);
v___x_1922_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_histogram_1913_, v_val_1915_, v___x_1921_);
return v___x_1922_;
}
else
{
lean_object* v_val_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1944_; 
v_val_1923_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1925_ = v___x_1916_;
v_isShared_1926_ = v_isSharedCheck_1944_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_val_1923_);
lean_dec(v___x_1916_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1944_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v_leftCount_1927_; lean_object* v_leftIndex_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1941_; 
v_leftCount_1927_ = lean_ctor_get(v_val_1923_, 0);
v_leftIndex_1928_ = lean_ctor_get(v_val_1923_, 1);
v_isSharedCheck_1941_ = !lean_is_exclusive(v_val_1923_);
if (v_isSharedCheck_1941_ == 0)
{
lean_object* v_unused_1942_; lean_object* v_unused_1943_; 
v_unused_1942_ = lean_ctor_get(v_val_1923_, 3);
lean_dec(v_unused_1942_);
v_unused_1943_ = lean_ctor_get(v_val_1923_, 2);
lean_dec(v_unused_1943_);
v___x_1930_ = v_val_1923_;
v_isShared_1931_ = v_isSharedCheck_1941_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_leftIndex_1928_);
lean_inc(v_leftCount_1927_);
lean_dec(v_val_1923_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1941_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1935_; 
v___x_1932_ = lean_unsigned_to_nat(1u);
v___x_1933_ = lean_nat_add(v_leftCount_1927_, v___x_1932_);
if (v_isShared_1926_ == 0)
{
lean_ctor_set(v___x_1925_, 0, v_index_1914_);
v___x_1935_ = v___x_1925_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_index_1914_);
v___x_1935_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
lean_object* v___x_1937_; 
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 3, v___x_1935_);
lean_ctor_set(v___x_1930_, 2, v___x_1933_);
v___x_1937_ = v___x_1930_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_leftCount_1927_);
lean_ctor_set(v_reuseFailAlloc_1939_, 1, v_leftIndex_1928_);
lean_ctor_set(v_reuseFailAlloc_1939_, 2, v___x_1933_);
lean_ctor_set(v_reuseFailAlloc_1939_, 3, v___x_1935_);
v___x_1937_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
lean_object* v___x_1938_; 
v___x_1938_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_histogram_1913_, v_val_1915_, v___x_1937_);
return v___x_1938_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(lean_object* v_upperBound_1945_, lean_object* v___x_1946_, lean_object* v_fst_1947_, lean_object* v___x_1948_, lean_object* v_a_1949_, lean_object* v_b_1950_){
_start:
{
uint8_t v___x_1951_; 
v___x_1951_ = lean_nat_dec_lt(v_a_1949_, v_upperBound_1945_);
if (v___x_1951_ == 0)
{
lean_dec(v_a_1949_);
return v_b_1950_;
}
else
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1952_ = l_Subarray_get___redArg(v_fst_1947_, v_a_1949_);
lean_inc(v_a_1949_);
v___x_1953_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___redArg(v_b_1950_, v_a_1949_, v___x_1952_);
v___x_1954_ = lean_unsigned_to_nat(1u);
v___x_1955_ = lean_nat_add(v_a_1949_, v___x_1954_);
lean_dec(v_a_1949_);
v_a_1949_ = v___x_1955_;
v_b_1950_ = v___x_1953_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg___boxed(lean_object* v_upperBound_1957_, lean_object* v___x_1958_, lean_object* v_fst_1959_, lean_object* v___x_1960_, lean_object* v_a_1961_, lean_object* v_b_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(v_upperBound_1957_, v___x_1958_, v_fst_1959_, v___x_1960_, v_a_1961_, v_b_1962_);
lean_dec(v___x_1960_);
lean_dec_ref(v_fst_1959_);
lean_dec(v___x_1958_);
lean_dec(v_upperBound_1957_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(lean_object* v_as_x27_1964_, lean_object* v_b_1965_){
_start:
{
if (lean_obj_tag(v_as_x27_1964_) == 0)
{
return v_b_1965_;
}
else
{
lean_object* v_head_1966_; lean_object* v_snd_1967_; lean_object* v_leftIndex_1968_; 
v_head_1966_ = lean_ctor_get(v_as_x27_1964_, 0);
v_snd_1967_ = lean_ctor_get(v_head_1966_, 1);
v_leftIndex_1968_ = lean_ctor_get(v_snd_1967_, 1);
if (lean_obj_tag(v_leftIndex_1968_) == 1)
{
lean_object* v_rightIndex_1969_; 
v_rightIndex_1969_ = lean_ctor_get(v_snd_1967_, 3);
if (lean_obj_tag(v_rightIndex_1969_) == 1)
{
lean_object* v_tail_1970_; lean_object* v_fst_1971_; lean_object* v_leftCount_1972_; lean_object* v_rightCount_1973_; lean_object* v_val_1974_; lean_object* v_val_1975_; 
v_tail_1970_ = lean_ctor_get(v_as_x27_1964_, 1);
v_fst_1971_ = lean_ctor_get(v_head_1966_, 0);
v_leftCount_1972_ = lean_ctor_get(v_snd_1967_, 0);
v_rightCount_1973_ = lean_ctor_get(v_snd_1967_, 2);
v_val_1974_ = lean_ctor_get(v_leftIndex_1968_, 0);
v_val_1975_ = lean_ctor_get(v_rightIndex_1969_, 0);
if (lean_obj_tag(v_b_1965_) == 0)
{
goto v___jp_1976_;
}
else
{
lean_object* v_val_1983_; lean_object* v_fst_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; 
v_val_1983_ = lean_ctor_get(v_b_1965_, 0);
v_fst_1984_ = lean_ctor_get(v_val_1983_, 0);
v___x_1985_ = lean_nat_add(v_leftCount_1972_, v_rightCount_1973_);
v___x_1986_ = lean_nat_dec_lt(v___x_1985_, v_fst_1984_);
lean_dec(v___x_1985_);
if (v___x_1986_ == 0)
{
v_as_x27_1964_ = v_tail_1970_;
goto _start;
}
else
{
lean_dec_ref_known(v_b_1965_, 1);
goto v___jp_1976_;
}
}
v___jp_1976_:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1977_ = lean_nat_add(v_leftCount_1972_, v_rightCount_1973_);
lean_inc(v_val_1975_);
lean_inc(v_val_1974_);
v___x_1978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1978_, 0, v_val_1974_);
lean_ctor_set(v___x_1978_, 1, v_val_1975_);
lean_inc(v_fst_1971_);
v___x_1979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1979_, 0, v_fst_1971_);
lean_ctor_set(v___x_1979_, 1, v___x_1978_);
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1977_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1980_);
v_as_x27_1964_ = v_tail_1970_;
v_b_1965_ = v___x_1981_;
goto _start;
}
}
else
{
lean_object* v_tail_1988_; 
v_tail_1988_ = lean_ctor_get(v_as_x27_1964_, 1);
v_as_x27_1964_ = v_tail_1988_;
goto _start;
}
}
else
{
lean_object* v_tail_1990_; 
v_tail_1990_ = lean_ctor_get(v_as_x27_1964_, 1);
v_as_x27_1964_ = v_tail_1990_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_as_x27_1992_, lean_object* v_b_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(v_as_x27_1992_, v_b_1993_);
lean_dec(v_as_x27_1992_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(lean_object* v_a_1995_, lean_object* v_b_1996_){
_start:
{
lean_object* v_array_1997_; lean_object* v_start_1998_; lean_object* v_stop_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2012_; 
v_array_1997_ = lean_ctor_get(v_a_1995_, 0);
v_start_1998_ = lean_ctor_get(v_a_1995_, 1);
v_stop_1999_ = lean_ctor_get(v_a_1995_, 2);
v_isSharedCheck_2012_ = !lean_is_exclusive(v_a_1995_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_2001_ = v_a_1995_;
v_isShared_2002_ = v_isSharedCheck_2012_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_stop_1999_);
lean_inc(v_start_1998_);
lean_inc(v_array_1997_);
lean_dec(v_a_1995_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2012_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
uint8_t v___x_2003_; 
v___x_2003_ = lean_nat_dec_lt(v_start_1998_, v_stop_1999_);
if (v___x_2003_ == 0)
{
lean_del_object(v___x_2001_);
lean_dec(v_stop_1999_);
lean_dec(v_start_1998_);
lean_dec_ref(v_array_1997_);
return v_b_1996_;
}
else
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2004_ = lean_unsigned_to_nat(1u);
v___x_2005_ = lean_nat_add(v_start_1998_, v___x_2004_);
lean_inc_ref(v_array_1997_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 1, v___x_2005_);
v___x_2007_ = v___x_2001_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_array_1997_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v___x_2005_);
lean_ctor_set(v_reuseFailAlloc_2011_, 2, v_stop_1999_);
v___x_2007_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = lean_array_fget(v_array_1997_, v_start_1998_);
lean_dec(v_start_1998_);
lean_dec_ref(v_array_1997_);
v___x_2009_ = lean_array_push(v_b_1996_, v___x_2008_);
v_a_1995_ = v___x_2007_;
v_b_1996_ = v___x_2009_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8(lean_object* v_left_2013_, lean_object* v_right_2014_, lean_object* v_i_2015_){
_start:
{
lean_object* v_start_2016_; lean_object* v_stop_2017_; lean_object* v___x_2018_; uint8_t v___x_2032_; 
v_start_2016_ = lean_ctor_get(v_left_2013_, 1);
v_stop_2017_ = lean_ctor_get(v_left_2013_, 2);
v___x_2018_ = lean_nat_sub(v_stop_2017_, v_start_2016_);
v___x_2032_ = lean_nat_dec_lt(v_i_2015_, v___x_2018_);
if (v___x_2032_ == 0)
{
goto v___jp_2019_;
}
else
{
lean_object* v_start_2033_; lean_object* v_stop_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v_start_2033_ = lean_ctor_get(v_right_2014_, 1);
v_stop_2034_ = lean_ctor_get(v_right_2014_, 2);
v___x_2035_ = lean_nat_sub(v_stop_2034_, v_start_2033_);
v___x_2036_ = lean_nat_dec_lt(v_i_2015_, v___x_2035_);
if (v___x_2036_ == 0)
{
lean_dec(v___x_2035_);
goto v___jp_2019_;
}
else
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; uint8_t v___x_2044_; 
v___x_2037_ = lean_nat_sub(v___x_2018_, v_i_2015_);
lean_dec(v___x_2018_);
v___x_2038_ = lean_unsigned_to_nat(1u);
v___x_2039_ = lean_nat_sub(v___x_2037_, v___x_2038_);
v___x_2040_ = l_Subarray_get___redArg(v_left_2013_, v___x_2039_);
lean_dec(v___x_2039_);
v___x_2041_ = lean_nat_sub(v___x_2035_, v_i_2015_);
lean_dec(v___x_2035_);
v___x_2042_ = lean_nat_sub(v___x_2041_, v___x_2038_);
v___x_2043_ = l_Subarray_get___redArg(v_right_2014_, v___x_2042_);
lean_dec(v___x_2042_);
v___x_2044_ = lean_string_dec_eq(v___x_2040_, v___x_2043_);
lean_dec(v___x_2043_);
lean_dec(v___x_2040_);
if (v___x_2044_ == 0)
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
lean_dec(v_i_2015_);
lean_inc_ref(v_left_2013_);
v___x_2045_ = l_Subarray_take___redArg(v_left_2013_, v___x_2037_);
v___x_2046_ = l_Subarray_take___redArg(v_right_2014_, v___x_2041_);
lean_dec(v___x_2041_);
v___x_2047_ = l_Subarray_drop___redArg(v_left_2013_, v___x_2037_);
lean_dec(v___x_2037_);
v___x_2048_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0));
v___x_2049_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(v___x_2047_, v___x_2048_);
v___x_2050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2046_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2045_);
lean_ctor_set(v___x_2051_, 1, v___x_2050_);
return v___x_2051_;
}
else
{
lean_object* v___x_2052_; 
lean_dec(v___x_2041_);
lean_dec(v___x_2037_);
v___x_2052_ = lean_nat_add(v_i_2015_, v___x_2038_);
lean_dec(v_i_2015_);
v_i_2015_ = v___x_2052_;
goto _start;
}
}
}
v___jp_2019_:
{
lean_object* v_start_2020_; lean_object* v_stop_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v_start_2020_ = lean_ctor_get(v_right_2014_, 1);
v_stop_2021_ = lean_ctor_get(v_right_2014_, 2);
v___x_2022_ = lean_nat_sub(v___x_2018_, v_i_2015_);
lean_dec(v___x_2018_);
lean_inc_ref(v_left_2013_);
v___x_2023_ = l_Subarray_take___redArg(v_left_2013_, v___x_2022_);
v___x_2024_ = lean_nat_sub(v_stop_2021_, v_start_2020_);
v___x_2025_ = lean_nat_sub(v___x_2024_, v_i_2015_);
lean_dec(v_i_2015_);
lean_dec(v___x_2024_);
v___x_2026_ = l_Subarray_take___redArg(v_right_2014_, v___x_2025_);
lean_dec(v___x_2025_);
v___x_2027_ = l_Subarray_drop___redArg(v_left_2013_, v___x_2022_);
lean_dec(v___x_2022_);
v___x_2028_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords___closed__0));
v___x_2029_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(v___x_2027_, v___x_2028_);
v___x_2030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2026_);
lean_ctor_set(v___x_2030_, 1, v___x_2029_);
v___x_2031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2023_);
lean_ctor_set(v___x_2031_, 1, v___x_2030_);
return v___x_2031_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5(lean_object* v_left_2054_, lean_object* v_right_2055_){
_start:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = lean_unsigned_to_nat(0u);
v___x_2057_ = l___private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8(v_left_2054_, v_right_2055_, v___x_2056_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___redArg(lean_object* v_histogram_2058_, lean_object* v_index_2059_, lean_object* v_val_2060_){
_start:
{
lean_object* v___x_2061_; 
v___x_2061_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(v_histogram_2058_, v_val_2060_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2062_ = lean_unsigned_to_nat(1u);
v___x_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2063_, 0, v_index_2059_);
v___x_2064_ = lean_unsigned_to_nat(0u);
v___x_2065_ = lean_box(0);
v___x_2066_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2062_);
lean_ctor_set(v___x_2066_, 1, v___x_2063_);
lean_ctor_set(v___x_2066_, 2, v___x_2064_);
lean_ctor_set(v___x_2066_, 3, v___x_2065_);
v___x_2067_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_histogram_2058_, v_val_2060_, v___x_2066_);
return v___x_2067_;
}
else
{
lean_object* v_val_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2089_; 
v_val_2068_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2070_ = v___x_2061_;
v_isShared_2071_ = v_isSharedCheck_2089_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_val_2068_);
lean_dec(v___x_2061_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2089_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v_leftCount_2072_; lean_object* v_rightCount_2073_; lean_object* v_rightIndex_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2087_; 
v_leftCount_2072_ = lean_ctor_get(v_val_2068_, 0);
v_rightCount_2073_ = lean_ctor_get(v_val_2068_, 2);
v_rightIndex_2074_ = lean_ctor_get(v_val_2068_, 3);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_val_2068_);
if (v_isSharedCheck_2087_ == 0)
{
lean_object* v_unused_2088_; 
v_unused_2088_ = lean_ctor_get(v_val_2068_, 1);
lean_dec(v_unused_2088_);
v___x_2076_ = v_val_2068_;
v_isShared_2077_ = v_isSharedCheck_2087_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_rightIndex_2074_);
lean_inc(v_rightCount_2073_);
lean_inc(v_leftCount_2072_);
lean_dec(v_val_2068_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2087_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2081_; 
v___x_2078_ = lean_unsigned_to_nat(1u);
v___x_2079_ = lean_nat_add(v_leftCount_2072_, v___x_2078_);
lean_dec(v_leftCount_2072_);
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 0, v_index_2059_);
v___x_2081_ = v___x_2070_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_index_2059_);
v___x_2081_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
lean_object* v___x_2083_; 
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 1, v___x_2081_);
lean_ctor_set(v___x_2076_, 0, v___x_2079_);
v___x_2083_ = v___x_2076_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v___x_2079_);
lean_ctor_set(v_reuseFailAlloc_2085_, 1, v___x_2081_);
lean_ctor_set(v_reuseFailAlloc_2085_, 2, v_rightCount_2073_);
lean_ctor_set(v_reuseFailAlloc_2085_, 3, v_rightIndex_2074_);
v___x_2083_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
lean_object* v___x_2084_; 
v___x_2084_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_histogram_2058_, v_val_2060_, v___x_2083_);
return v___x_2084_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(lean_object* v_upperBound_2090_, lean_object* v_fst_2091_, lean_object* v___x_2092_, lean_object* v_fst_2093_, lean_object* v_a_2094_, lean_object* v_b_2095_){
_start:
{
uint8_t v___x_2096_; 
v___x_2096_ = lean_nat_dec_lt(v_a_2094_, v_upperBound_2090_);
if (v___x_2096_ == 0)
{
lean_dec(v_a_2094_);
return v_b_2095_;
}
else
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2097_ = l_Subarray_get___redArg(v_fst_2093_, v_a_2094_);
lean_inc(v_a_2094_);
v___x_2098_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___redArg(v_b_2095_, v_a_2094_, v___x_2097_);
v___x_2099_ = lean_unsigned_to_nat(1u);
v___x_2100_ = lean_nat_add(v_a_2094_, v___x_2099_);
lean_dec(v_a_2094_);
v_a_2094_ = v___x_2100_;
v_b_2095_ = v___x_2098_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg___boxed(lean_object* v_upperBound_2102_, lean_object* v_fst_2103_, lean_object* v___x_2104_, lean_object* v_fst_2105_, lean_object* v_a_2106_, lean_object* v_b_2107_){
_start:
{
lean_object* v_res_2108_; 
v_res_2108_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(v_upperBound_2102_, v_fst_2103_, v___x_2104_, v_fst_2105_, v_a_2106_, v_b_2107_);
lean_dec_ref(v_fst_2105_);
lean_dec(v___x_2104_);
lean_dec_ref(v_fst_2103_);
lean_dec(v_upperBound_2102_);
return v_res_2108_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2109_ = lean_box(0);
v___x_2110_ = lean_unsigned_to_nat(16u);
v___x_2111_ = lean_mk_array(v___x_2110_, v___x_2109_);
return v___x_2111_;
}
}
static lean_object* _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v_hist_2114_; 
v___x_2112_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__0);
v___x_2113_ = lean_unsigned_to_nat(0u);
v_hist_2114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_hist_2114_, 0, v___x_2113_);
lean_ctor_set(v_hist_2114_, 1, v___x_2112_);
return v_hist_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(lean_object* v_left_2115_, lean_object* v_right_2116_){
_start:
{
lean_object* v___x_2117_; lean_object* v_snd_2118_; lean_object* v_fst_2119_; lean_object* v_fst_2120_; lean_object* v_snd_2121_; lean_object* v___x_2122_; lean_object* v_snd_2123_; lean_object* v_fst_2124_; lean_object* v_fst_2125_; lean_object* v_snd_2126_; lean_object* v_start_2127_; lean_object* v_stop_2128_; lean_object* v___x_2129_; lean_object* v_hist_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v_start_2133_; lean_object* v_stop_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v_buckets_2137_; lean_object* v___x_2138_; lean_object* v___y_2140_; lean_object* v___x_2166_; lean_object* v___x_2167_; uint8_t v___x_2168_; 
v___x_2117_ = l_Lean_Diff_matchPrefix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__4(v_left_2115_, v_right_2116_);
v_snd_2118_ = lean_ctor_get(v___x_2117_, 1);
lean_inc(v_snd_2118_);
v_fst_2119_ = lean_ctor_get(v___x_2117_, 0);
lean_inc(v_fst_2119_);
lean_dec_ref(v___x_2117_);
v_fst_2120_ = lean_ctor_get(v_snd_2118_, 0);
lean_inc(v_fst_2120_);
v_snd_2121_ = lean_ctor_get(v_snd_2118_, 1);
lean_inc(v_snd_2121_);
lean_dec(v_snd_2118_);
v___x_2122_ = l_Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5(v_fst_2120_, v_snd_2121_);
v_snd_2123_ = lean_ctor_get(v___x_2122_, 1);
lean_inc(v_snd_2123_);
v_fst_2124_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_fst_2124_);
lean_dec_ref(v___x_2122_);
v_fst_2125_ = lean_ctor_get(v_snd_2123_, 0);
lean_inc(v_fst_2125_);
v_snd_2126_ = lean_ctor_get(v_snd_2123_, 1);
lean_inc(v_snd_2126_);
lean_dec(v_snd_2123_);
v_start_2127_ = lean_ctor_get(v_fst_2124_, 1);
v_stop_2128_ = lean_ctor_get(v_fst_2124_, 2);
v___x_2129_ = lean_unsigned_to_nat(0u);
v_hist_2130_ = lean_obj_once(&l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1, &l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1_once, _init_l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3___closed__1);
v___x_2131_ = lean_nat_sub(v_stop_2128_, v_start_2127_);
v___x_2132_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(v___x_2131_, v_fst_2125_, v___x_2131_, v_fst_2124_, v___x_2129_, v_hist_2130_);
v_start_2133_ = lean_ctor_get(v_fst_2125_, 1);
v_stop_2134_ = lean_ctor_get(v_fst_2125_, 2);
v___x_2135_ = lean_nat_sub(v_stop_2134_, v_start_2133_);
v___x_2136_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(v___x_2135_, v___x_2135_, v_fst_2125_, v___x_2131_, v___x_2129_, v___x_2132_);
lean_dec(v___x_2131_);
lean_dec(v___x_2135_);
v_buckets_2137_ = lean_ctor_get(v___x_2136_, 1);
lean_inc_ref(v_buckets_2137_);
lean_dec_ref(v___x_2136_);
v___x_2138_ = lean_box(0);
v___x_2166_ = lean_box(0);
v___x_2167_ = lean_array_get_size(v_buckets_2137_);
v___x_2168_ = lean_nat_dec_lt(v___x_2129_, v___x_2167_);
if (v___x_2168_ == 0)
{
lean_dec_ref(v_buckets_2137_);
v___y_2140_ = v___x_2166_;
goto v___jp_2139_;
}
else
{
size_t v___x_2169_; size_t v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = lean_usize_of_nat(v___x_2167_);
v___x_2170_ = ((size_t)0ULL);
v___x_2171_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__8(v_buckets_2137_, v___x_2169_, v___x_2170_, v___x_2166_);
lean_dec_ref(v_buckets_2137_);
v___y_2140_ = v___x_2171_;
goto v___jp_2139_;
}
v___jp_2139_:
{
lean_object* v___x_2141_; 
v___x_2141_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(v___y_2140_, v___x_2138_);
lean_dec(v___y_2140_);
if (lean_obj_tag(v___x_2141_) == 1)
{
lean_object* v_val_2142_; lean_object* v_snd_2143_; lean_object* v_snd_2144_; lean_object* v_fst_2145_; lean_object* v_fst_2146_; lean_object* v_snd_2147_; lean_object* v___x_2148_; lean_object* v_fst_2149_; lean_object* v_snd_2150_; lean_object* v___x_2151_; lean_object* v_fst_2152_; lean_object* v_snd_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v_val_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_val_2142_);
lean_dec_ref_known(v___x_2141_, 1);
v_snd_2143_ = lean_ctor_get(v_val_2142_, 1);
lean_inc(v_snd_2143_);
lean_dec(v_val_2142_);
v_snd_2144_ = lean_ctor_get(v_snd_2143_, 1);
lean_inc(v_snd_2144_);
v_fst_2145_ = lean_ctor_get(v_snd_2143_, 0);
lean_inc(v_fst_2145_);
lean_dec(v_snd_2143_);
v_fst_2146_ = lean_ctor_get(v_snd_2144_, 0);
lean_inc(v_fst_2146_);
v_snd_2147_ = lean_ctor_get(v_snd_2144_, 1);
lean_inc(v_snd_2147_);
lean_dec(v_snd_2144_);
v___x_2148_ = l_Subarray_split___redArg(v_fst_2124_, v_fst_2146_);
lean_dec(v_fst_2146_);
v_fst_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_fst_2149_);
v_snd_2150_ = lean_ctor_get(v___x_2148_, 1);
lean_inc(v_snd_2150_);
lean_dec_ref(v___x_2148_);
v___x_2151_ = l_Subarray_split___redArg(v_fst_2125_, v_snd_2147_);
lean_dec(v_snd_2147_);
v_fst_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_fst_2152_);
v_snd_2153_ = lean_ctor_get(v___x_2151_, 1);
lean_inc(v_snd_2153_);
lean_dec_ref(v___x_2151_);
v___x_2154_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(v_fst_2149_, v_fst_2152_);
v___x_2155_ = l_Array_append___redArg(v_fst_2119_, v___x_2154_);
lean_dec_ref(v___x_2154_);
v___x_2156_ = lean_unsigned_to_nat(1u);
v___x_2157_ = lean_mk_empty_array_with_capacity(v___x_2156_);
v___x_2158_ = lean_array_push(v___x_2157_, v_fst_2145_);
v___x_2159_ = l_Array_append___redArg(v___x_2155_, v___x_2158_);
lean_dec_ref(v___x_2158_);
v___x_2160_ = l_Subarray_drop___redArg(v_snd_2150_, v___x_2156_);
v___x_2161_ = l_Subarray_drop___redArg(v_snd_2153_, v___x_2156_);
v___x_2162_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(v___x_2160_, v___x_2161_);
v___x_2163_ = l_Array_append___redArg(v___x_2159_, v___x_2162_);
lean_dec_ref(v___x_2162_);
v___x_2164_ = l_Array_append___redArg(v___x_2163_, v_snd_2126_);
lean_dec(v_snd_2126_);
return v___x_2164_;
}
else
{
lean_object* v___x_2165_; 
lean_dec(v___x_2141_);
lean_dec(v_fst_2125_);
lean_dec(v_fst_2124_);
v___x_2165_ = l_Array_append___redArg(v_fst_2119_, v_snd_2126_);
lean_dec(v_snd_2126_);
return v___x_2165_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(lean_object* v___x_2172_, lean_object* v_original_2173_, lean_object* v_a_2174_){
_start:
{
lean_object* v_fst_2175_; lean_object* v_snd_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2195_; 
v_fst_2175_ = lean_ctor_get(v_a_2174_, 0);
v_snd_2176_ = lean_ctor_get(v_a_2174_, 1);
v_isSharedCheck_2195_ = !lean_is_exclusive(v_a_2174_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2178_ = v_a_2174_;
v_isShared_2179_ = v_isSharedCheck_2195_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_snd_2176_);
lean_inc(v_fst_2175_);
lean_dec(v_a_2174_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2195_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
uint8_t v___x_2180_; 
v___x_2180_ = lean_nat_dec_lt(v_snd_2176_, v___x_2172_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2182_; 
if (v_isShared_2179_ == 0)
{
v___x_2182_ = v___x_2178_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_fst_2175_);
lean_ctor_set(v_reuseFailAlloc_2183_, 1, v_snd_2176_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
else
{
uint8_t v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2188_; 
v___x_2184_ = 1;
v___x_2185_ = lean_array_fget_borrowed(v_original_2173_, v_snd_2176_);
v___x_2186_ = lean_box(v___x_2184_);
lean_inc(v___x_2185_);
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 1, v___x_2185_);
lean_ctor_set(v___x_2178_, 0, v___x_2186_);
v___x_2188_ = v___x_2178_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v___x_2186_);
lean_ctor_set(v_reuseFailAlloc_2194_, 1, v___x_2185_);
v___x_2188_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2189_ = lean_array_push(v_fst_2175_, v___x_2188_);
v___x_2190_ = lean_unsigned_to_nat(1u);
v___x_2191_ = lean_nat_add(v_snd_2176_, v___x_2190_);
lean_dec(v_snd_2176_);
v___x_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2189_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
v_a_2174_ = v___x_2192_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg___boxed(lean_object* v___x_2196_, lean_object* v_original_2197_, lean_object* v_a_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(v___x_2196_, v_original_2197_, v_a_2198_);
lean_dec_ref(v_original_2197_);
lean_dec(v___x_2196_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(lean_object* v___x_2200_, lean_object* v_edited_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v_fst_2203_; lean_object* v_snd_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2223_; 
v_fst_2203_ = lean_ctor_get(v_a_2202_, 0);
v_snd_2204_ = lean_ctor_get(v_a_2202_, 1);
v_isSharedCheck_2223_ = !lean_is_exclusive(v_a_2202_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2206_ = v_a_2202_;
v_isShared_2207_ = v_isSharedCheck_2223_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_snd_2204_);
lean_inc(v_fst_2203_);
lean_dec(v_a_2202_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2223_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
uint8_t v___x_2208_; 
v___x_2208_ = lean_nat_dec_lt(v_snd_2204_, v___x_2200_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2210_; 
if (v_isShared_2207_ == 0)
{
v___x_2210_ = v___x_2206_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_fst_2203_);
lean_ctor_set(v_reuseFailAlloc_2211_, 1, v_snd_2204_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
else
{
uint8_t v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2216_; 
v___x_2212_ = 0;
v___x_2213_ = lean_array_fget_borrowed(v_edited_2201_, v_snd_2204_);
v___x_2214_ = lean_box(v___x_2212_);
lean_inc(v___x_2213_);
if (v_isShared_2207_ == 0)
{
lean_ctor_set(v___x_2206_, 1, v___x_2213_);
lean_ctor_set(v___x_2206_, 0, v___x_2214_);
v___x_2216_ = v___x_2206_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2214_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v___x_2213_);
v___x_2216_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2217_ = lean_array_push(v_fst_2203_, v___x_2216_);
v___x_2218_ = lean_unsigned_to_nat(1u);
v___x_2219_ = lean_nat_add(v_snd_2204_, v___x_2218_);
lean_dec(v_snd_2204_);
v___x_2220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2217_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v_a_2202_ = v___x_2220_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg___boxed(lean_object* v___x_2224_, lean_object* v_edited_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(v___x_2224_, v_edited_2225_, v_a_2226_);
lean_dec_ref(v_edited_2225_);
lean_dec(v___x_2224_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(lean_object* v___x_2228_, lean_object* v_original_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v_fst_2232_; lean_object* v_snd_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2257_; 
v_fst_2232_ = lean_ctor_get(v_a_2231_, 0);
v_snd_2233_ = lean_ctor_get(v_a_2231_, 1);
v_isSharedCheck_2257_ = !lean_is_exclusive(v_a_2231_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2235_ = v_a_2231_;
v_isShared_2236_ = v_isSharedCheck_2257_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_snd_2233_);
lean_inc(v_fst_2232_);
lean_dec(v_a_2231_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2257_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
uint8_t v___x_2237_; 
v___x_2237_ = lean_nat_dec_lt(v_snd_2233_, v___x_2228_);
if (v___x_2237_ == 0)
{
lean_object* v___x_2239_; 
if (v_isShared_2236_ == 0)
{
v___x_2239_ = v___x_2235_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_fst_2232_);
lean_ctor_set(v_reuseFailAlloc_2240_, 1, v_snd_2233_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
else
{
lean_object* v___x_2241_; lean_object* v___x_2242_; uint8_t v___x_2243_; 
v___x_2241_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_2242_ = lean_array_get_borrowed(v___x_2241_, v_original_2229_, v_snd_2233_);
v___x_2243_ = lean_string_dec_eq(v___x_2242_, v_a_2230_);
if (v___x_2243_ == 0)
{
uint8_t v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2247_; 
v___x_2244_ = 1;
v___x_2245_ = lean_box(v___x_2244_);
lean_inc(v___x_2242_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 1, v___x_2242_);
lean_ctor_set(v___x_2235_, 0, v___x_2245_);
v___x_2247_ = v___x_2235_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v___x_2245_);
lean_ctor_set(v_reuseFailAlloc_2253_, 1, v___x_2242_);
v___x_2247_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2248_ = lean_array_push(v_fst_2232_, v___x_2247_);
v___x_2249_ = lean_unsigned_to_nat(1u);
v___x_2250_ = lean_nat_add(v_snd_2233_, v___x_2249_);
lean_dec(v_snd_2233_);
v___x_2251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2248_);
lean_ctor_set(v___x_2251_, 1, v___x_2250_);
v_a_2231_ = v___x_2251_;
goto _start;
}
}
else
{
lean_object* v___x_2255_; 
if (v_isShared_2236_ == 0)
{
v___x_2255_ = v___x_2235_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v_fst_2232_);
lean_ctor_set(v_reuseFailAlloc_2256_, 1, v_snd_2233_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg___boxed(lean_object* v___x_2258_, lean_object* v_original_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(v___x_2258_, v_original_2259_, v_a_2260_, v_a_2261_);
lean_dec_ref(v_a_2260_);
lean_dec_ref(v_original_2259_);
lean_dec(v___x_2258_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(lean_object* v___x_2263_, lean_object* v_edited_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_){
_start:
{
lean_object* v_fst_2267_; lean_object* v_snd_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2292_; 
v_fst_2267_ = lean_ctor_get(v_a_2266_, 0);
v_snd_2268_ = lean_ctor_get(v_a_2266_, 1);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_a_2266_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2270_ = v_a_2266_;
v_isShared_2271_ = v_isSharedCheck_2292_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_snd_2268_);
lean_inc(v_fst_2267_);
lean_dec(v_a_2266_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2292_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
uint8_t v___x_2272_; 
v___x_2272_ = lean_nat_dec_lt(v_snd_2268_, v___x_2263_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2274_; 
if (v_isShared_2271_ == 0)
{
v___x_2274_ = v___x_2270_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_fst_2267_);
lean_ctor_set(v_reuseFailAlloc_2275_, 1, v_snd_2268_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
else
{
lean_object* v___x_2276_; lean_object* v___x_2277_; uint8_t v___x_2278_; 
v___x_2276_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_2277_ = lean_array_get_borrowed(v___x_2276_, v_edited_2264_, v_snd_2268_);
v___x_2278_ = lean_string_dec_eq(v___x_2277_, v_a_2265_);
if (v___x_2278_ == 0)
{
uint8_t v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2282_; 
v___x_2279_ = 0;
v___x_2280_ = lean_box(v___x_2279_);
lean_inc(v___x_2277_);
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 1, v___x_2277_);
lean_ctor_set(v___x_2270_, 0, v___x_2280_);
v___x_2282_ = v___x_2270_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v___x_2280_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v___x_2277_);
v___x_2282_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2283_ = lean_array_push(v_fst_2267_, v___x_2282_);
v___x_2284_ = lean_unsigned_to_nat(1u);
v___x_2285_ = lean_nat_add(v_snd_2268_, v___x_2284_);
lean_dec(v_snd_2268_);
v___x_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2283_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v_a_2266_ = v___x_2286_;
goto _start;
}
}
else
{
lean_object* v___x_2290_; 
if (v_isShared_2271_ == 0)
{
v___x_2290_ = v___x_2270_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_fst_2267_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_snd_2268_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg___boxed(lean_object* v___x_2293_, lean_object* v_edited_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(v___x_2293_, v_edited_2294_, v_a_2295_, v_a_2296_);
lean_dec_ref(v_a_2295_);
lean_dec_ref(v_edited_2294_);
lean_dec(v___x_2293_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14(lean_object* v___x_2298_, lean_object* v_original_2299_, lean_object* v___x_2300_, lean_object* v_edited_2301_, lean_object* v_as_2302_, size_t v_sz_2303_, size_t v_i_2304_, lean_object* v_b_2305_){
_start:
{
uint8_t v___x_2306_; 
v___x_2306_ = lean_usize_dec_lt(v_i_2304_, v_sz_2303_);
if (v___x_2306_ == 0)
{
return v_b_2305_;
}
else
{
lean_object* v_snd_2307_; lean_object* v_fst_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2355_; 
v_snd_2307_ = lean_ctor_get(v_b_2305_, 1);
v_fst_2308_ = lean_ctor_get(v_b_2305_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_b_2305_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2310_ = v_b_2305_;
v_isShared_2311_ = v_isSharedCheck_2355_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_snd_2307_);
lean_inc(v_fst_2308_);
lean_dec(v_b_2305_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2355_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v_fst_2312_; lean_object* v_snd_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2354_; 
v_fst_2312_ = lean_ctor_get(v_snd_2307_, 0);
v_snd_2313_ = lean_ctor_get(v_snd_2307_, 1);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_snd_2307_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2315_ = v_snd_2307_;
v_isShared_2316_ = v_isSharedCheck_2354_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_snd_2313_);
lean_inc(v_fst_2312_);
lean_dec(v_snd_2307_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2354_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v_a_2317_; lean_object* v___x_2319_; 
v_a_2317_ = lean_array_uget_borrowed(v_as_2302_, v_i_2304_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 1, v_fst_2312_);
lean_ctor_set(v___x_2315_, 0, v_fst_2308_);
v___x_2319_ = v___x_2315_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_fst_2308_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v_fst_2312_);
v___x_2319_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
lean_object* v___x_2320_; lean_object* v_fst_2321_; lean_object* v_snd_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2352_; 
v___x_2320_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(v___x_2298_, v_original_2299_, v_a_2317_, v___x_2319_);
v_fst_2321_ = lean_ctor_get(v___x_2320_, 0);
v_snd_2322_ = lean_ctor_get(v___x_2320_, 1);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2320_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2324_ = v___x_2320_;
v_isShared_2325_ = v_isSharedCheck_2352_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_snd_2322_);
lean_inc(v_fst_2321_);
lean_dec(v___x_2320_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2352_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
lean_ctor_set(v___x_2324_, 1, v_snd_2313_);
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_fst_2321_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v_snd_2313_);
v___x_2327_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
lean_object* v___x_2328_; lean_object* v_fst_2329_; lean_object* v_snd_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2350_; 
v___x_2328_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(v___x_2300_, v_edited_2301_, v_a_2317_, v___x_2327_);
v_fst_2329_ = lean_ctor_get(v___x_2328_, 0);
v_snd_2330_ = lean_ctor_get(v___x_2328_, 1);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2332_ = v___x_2328_;
v_isShared_2333_ = v_isSharedCheck_2350_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_snd_2330_);
lean_inc(v_fst_2329_);
lean_dec(v___x_2328_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2350_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
uint8_t v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2337_; 
v___x_2334_ = 2;
v___x_2335_ = lean_box(v___x_2334_);
lean_inc(v_a_2317_);
if (v_isShared_2333_ == 0)
{
lean_ctor_set(v___x_2332_, 1, v_a_2317_);
lean_ctor_set(v___x_2332_, 0, v___x_2335_);
v___x_2337_ = v___x_2332_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v___x_2335_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v_a_2317_);
v___x_2337_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2343_; 
v___x_2338_ = lean_array_push(v_fst_2329_, v___x_2337_);
v___x_2339_ = lean_unsigned_to_nat(1u);
v___x_2340_ = lean_nat_add(v_snd_2322_, v___x_2339_);
lean_dec(v_snd_2322_);
v___x_2341_ = lean_nat_add(v_snd_2330_, v___x_2339_);
lean_dec(v_snd_2330_);
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 1, v___x_2341_);
lean_ctor_set(v___x_2310_, 0, v___x_2340_);
v___x_2343_ = v___x_2310_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v___x_2340_);
lean_ctor_set(v_reuseFailAlloc_2348_, 1, v___x_2341_);
v___x_2343_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
lean_object* v___x_2344_; size_t v___x_2345_; size_t v___x_2346_; 
v___x_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2338_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
v___x_2345_ = ((size_t)1ULL);
v___x_2346_ = lean_usize_add(v_i_2304_, v___x_2345_);
v_i_2304_ = v___x_2346_;
v_b_2305_ = v___x_2344_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14___boxed(lean_object* v___x_2356_, lean_object* v_original_2357_, lean_object* v___x_2358_, lean_object* v_edited_2359_, lean_object* v_as_2360_, lean_object* v_sz_2361_, lean_object* v_i_2362_, lean_object* v_b_2363_){
_start:
{
size_t v_sz_boxed_2364_; size_t v_i_boxed_2365_; lean_object* v_res_2366_; 
v_sz_boxed_2364_ = lean_unbox_usize(v_sz_2361_);
lean_dec(v_sz_2361_);
v_i_boxed_2365_ = lean_unbox_usize(v_i_2362_);
lean_dec(v_i_2362_);
v_res_2366_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14(v___x_2356_, v_original_2357_, v___x_2358_, v_edited_2359_, v_as_2360_, v_sz_boxed_2364_, v_i_boxed_2365_, v_b_2363_);
lean_dec_ref(v_as_2360_);
lean_dec_ref(v_edited_2359_);
lean_dec(v___x_2358_);
lean_dec_ref(v_original_2357_);
lean_dec(v___x_2356_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4(lean_object* v___x_2367_, lean_object* v_edited_2368_, lean_object* v___x_2369_, lean_object* v_original_2370_, lean_object* v_as_2371_, size_t v_sz_2372_, size_t v_i_2373_, lean_object* v_b_2374_){
_start:
{
uint8_t v___x_2375_; 
v___x_2375_ = lean_usize_dec_lt(v_i_2373_, v_sz_2372_);
if (v___x_2375_ == 0)
{
return v_b_2374_;
}
else
{
lean_object* v_snd_2376_; lean_object* v_fst_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2424_; 
v_snd_2376_ = lean_ctor_get(v_b_2374_, 1);
v_fst_2377_ = lean_ctor_get(v_b_2374_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v_b_2374_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2379_ = v_b_2374_;
v_isShared_2380_ = v_isSharedCheck_2424_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_snd_2376_);
lean_inc(v_fst_2377_);
lean_dec(v_b_2374_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2424_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v_fst_2381_; lean_object* v_snd_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2423_; 
v_fst_2381_ = lean_ctor_get(v_snd_2376_, 0);
v_snd_2382_ = lean_ctor_get(v_snd_2376_, 1);
v_isSharedCheck_2423_ = !lean_is_exclusive(v_snd_2376_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2384_ = v_snd_2376_;
v_isShared_2385_ = v_isSharedCheck_2423_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_snd_2382_);
lean_inc(v_fst_2381_);
lean_dec(v_snd_2376_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2423_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v_a_2386_; lean_object* v___x_2388_; 
v_a_2386_ = lean_array_uget_borrowed(v_as_2371_, v_i_2373_);
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 1, v_fst_2381_);
lean_ctor_set(v___x_2384_, 0, v_fst_2377_);
v___x_2388_ = v___x_2384_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v_fst_2377_);
lean_ctor_set(v_reuseFailAlloc_2422_, 1, v_fst_2381_);
v___x_2388_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
lean_object* v___x_2389_; lean_object* v_fst_2390_; lean_object* v_snd_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2421_; 
v___x_2389_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(v___x_2369_, v_original_2370_, v_a_2386_, v___x_2388_);
v_fst_2390_ = lean_ctor_get(v___x_2389_, 0);
v_snd_2391_ = lean_ctor_get(v___x_2389_, 1);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2393_ = v___x_2389_;
v_isShared_2394_ = v_isSharedCheck_2421_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_snd_2391_);
lean_inc(v_fst_2390_);
lean_dec(v___x_2389_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2421_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2396_; 
if (v_isShared_2394_ == 0)
{
lean_ctor_set(v___x_2393_, 1, v_snd_2382_);
v___x_2396_ = v___x_2393_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_fst_2390_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_snd_2382_);
v___x_2396_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
lean_object* v___x_2397_; lean_object* v_fst_2398_; lean_object* v_snd_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2419_; 
v___x_2397_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(v___x_2367_, v_edited_2368_, v_a_2386_, v___x_2396_);
v_fst_2398_ = lean_ctor_get(v___x_2397_, 0);
v_snd_2399_ = lean_ctor_get(v___x_2397_, 1);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2401_ = v___x_2397_;
v_isShared_2402_ = v_isSharedCheck_2419_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_snd_2399_);
lean_inc(v_fst_2398_);
lean_dec(v___x_2397_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2419_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
uint8_t v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2406_; 
v___x_2403_ = 2;
v___x_2404_ = lean_box(v___x_2403_);
lean_inc(v_a_2386_);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 1, v_a_2386_);
lean_ctor_set(v___x_2401_, 0, v___x_2404_);
v___x_2406_ = v___x_2401_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2418_, 1, v_a_2386_);
v___x_2406_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2412_; 
v___x_2407_ = lean_array_push(v_fst_2398_, v___x_2406_);
v___x_2408_ = lean_unsigned_to_nat(1u);
v___x_2409_ = lean_nat_add(v_snd_2391_, v___x_2408_);
lean_dec(v_snd_2391_);
v___x_2410_ = lean_nat_add(v_snd_2399_, v___x_2408_);
lean_dec(v_snd_2399_);
if (v_isShared_2380_ == 0)
{
lean_ctor_set(v___x_2379_, 1, v___x_2410_);
lean_ctor_set(v___x_2379_, 0, v___x_2409_);
v___x_2412_ = v___x_2379_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v___x_2409_);
lean_ctor_set(v_reuseFailAlloc_2417_, 1, v___x_2410_);
v___x_2412_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
lean_object* v___x_2413_; size_t v___x_2414_; size_t v___x_2415_; lean_object* v___x_2416_; 
v___x_2413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2407_);
lean_ctor_set(v___x_2413_, 1, v___x_2412_);
v___x_2414_ = ((size_t)1ULL);
v___x_2415_ = lean_usize_add(v_i_2373_, v___x_2414_);
v___x_2416_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4_spec__14(v___x_2369_, v_original_2370_, v___x_2367_, v_edited_2368_, v_as_2371_, v_sz_2372_, v___x_2415_, v___x_2413_);
return v___x_2416_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4___boxed(lean_object* v___x_2425_, lean_object* v_edited_2426_, lean_object* v___x_2427_, lean_object* v_original_2428_, lean_object* v_as_2429_, lean_object* v_sz_2430_, lean_object* v_i_2431_, lean_object* v_b_2432_){
_start:
{
size_t v_sz_boxed_2433_; size_t v_i_boxed_2434_; lean_object* v_res_2435_; 
v_sz_boxed_2433_ = lean_unbox_usize(v_sz_2430_);
lean_dec(v_sz_2430_);
v_i_boxed_2434_ = lean_unbox_usize(v_i_2431_);
lean_dec(v_i_2431_);
v_res_2435_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4(v___x_2425_, v_edited_2426_, v___x_2427_, v_original_2428_, v_as_2429_, v_sz_boxed_2433_, v_i_boxed_2434_, v_b_2432_);
lean_dec_ref(v_as_2429_);
lean_dec_ref(v_original_2428_);
lean_dec(v___x_2427_);
lean_dec_ref(v_edited_2426_);
lean_dec(v___x_2425_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7(size_t v_sz_2436_, size_t v_i_2437_, lean_object* v_bs_2438_){
_start:
{
uint8_t v___x_2439_; 
v___x_2439_ = lean_usize_dec_lt(v_i_2437_, v_sz_2436_);
if (v___x_2439_ == 0)
{
return v_bs_2438_;
}
else
{
lean_object* v_v_2440_; lean_object* v___x_2441_; lean_object* v_bs_x27_2442_; uint8_t v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; size_t v___x_2446_; size_t v___x_2447_; lean_object* v___x_2448_; 
v_v_2440_ = lean_array_uget(v_bs_2438_, v_i_2437_);
v___x_2441_ = lean_unsigned_to_nat(0u);
v_bs_x27_2442_ = lean_array_uset(v_bs_2438_, v_i_2437_, v___x_2441_);
v___x_2443_ = 1;
v___x_2444_ = lean_box(v___x_2443_);
v___x_2445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
lean_ctor_set(v___x_2445_, 1, v_v_2440_);
v___x_2446_ = ((size_t)1ULL);
v___x_2447_ = lean_usize_add(v_i_2437_, v___x_2446_);
v___x_2448_ = lean_array_uset(v_bs_x27_2442_, v_i_2437_, v___x_2445_);
v_i_2437_ = v___x_2447_;
v_bs_2438_ = v___x_2448_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7___boxed(lean_object* v_sz_2450_, lean_object* v_i_2451_, lean_object* v_bs_2452_){
_start:
{
size_t v_sz_boxed_2453_; size_t v_i_boxed_2454_; lean_object* v_res_2455_; 
v_sz_boxed_2453_ = lean_unbox_usize(v_sz_2450_);
lean_dec(v_sz_2450_);
v_i_boxed_2454_ = lean_unbox_usize(v_i_2451_);
lean_dec(v_i_2451_);
v_res_2455_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7(v_sz_boxed_2453_, v_i_boxed_2454_, v_bs_2452_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1(lean_object* v_original_2461_, lean_object* v_edited_2462_){
_start:
{
lean_object* v_i_2463_; lean_object* v___x_2464_; uint8_t v___x_2465_; 
v_i_2463_ = lean_unsigned_to_nat(0u);
v___x_2464_ = lean_array_get_size(v_original_2461_);
v___x_2465_ = lean_nat_dec_lt(v_i_2463_, v___x_2464_);
if (v___x_2465_ == 0)
{
size_t v_sz_2466_; size_t v___x_2467_; lean_object* v___x_2468_; 
lean_dec_ref(v_original_2461_);
v_sz_2466_ = lean_array_size(v_edited_2462_);
v___x_2467_ = ((size_t)0ULL);
v___x_2468_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__8(v_sz_2466_, v___x_2467_, v_edited_2462_);
return v___x_2468_;
}
else
{
lean_object* v___x_2469_; uint8_t v___x_2470_; 
v___x_2469_ = lean_array_get_size(v_edited_2462_);
v___x_2470_ = lean_nat_dec_lt(v_i_2463_, v___x_2469_);
if (v___x_2470_ == 0)
{
size_t v_sz_2471_; size_t v___x_2472_; lean_object* v___x_2473_; 
lean_dec_ref(v_edited_2462_);
v_sz_2471_ = lean_array_size(v_original_2461_);
v___x_2472_ = ((size_t)0ULL);
v___x_2473_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__7(v_sz_2471_, v___x_2472_, v_original_2461_);
return v___x_2473_;
}
else
{
lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v_ds_2476_; lean_object* v___x_2477_; size_t v_sz_2478_; size_t v___x_2479_; lean_object* v___x_2480_; lean_object* v_snd_2481_; lean_object* v_fst_2482_; lean_object* v_fst_2483_; lean_object* v_snd_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2503_; 
lean_inc_ref(v_original_2461_);
v___x_2474_ = l_Array_toSubarray___redArg(v_original_2461_, v_i_2463_, v___x_2464_);
lean_inc_ref(v_edited_2462_);
v___x_2475_ = l_Array_toSubarray___redArg(v_edited_2462_, v_i_2463_, v___x_2469_);
v_ds_2476_ = l_Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3(v___x_2474_, v___x_2475_);
v___x_2477_ = ((lean_object*)(l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1___closed__1));
v_sz_2478_ = lean_array_size(v_ds_2476_);
v___x_2479_ = ((size_t)0ULL);
v___x_2480_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__4(v___x_2469_, v_edited_2462_, v___x_2464_, v_original_2461_, v_ds_2476_, v_sz_2478_, v___x_2479_, v___x_2477_);
lean_dec_ref(v_ds_2476_);
v_snd_2481_ = lean_ctor_get(v___x_2480_, 1);
lean_inc(v_snd_2481_);
v_fst_2482_ = lean_ctor_get(v___x_2480_, 0);
lean_inc(v_fst_2482_);
lean_dec_ref(v___x_2480_);
v_fst_2483_ = lean_ctor_get(v_snd_2481_, 0);
v_snd_2484_ = lean_ctor_get(v_snd_2481_, 1);
v_isSharedCheck_2503_ = !lean_is_exclusive(v_snd_2481_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2486_ = v_snd_2481_;
v_isShared_2487_ = v_isSharedCheck_2503_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_snd_2484_);
lean_inc(v_fst_2483_);
lean_dec(v_snd_2481_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2503_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 1, v_fst_2483_);
lean_ctor_set(v___x_2486_, 0, v_fst_2482_);
v___x_2489_ = v___x_2486_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v_fst_2482_);
lean_ctor_set(v_reuseFailAlloc_2502_, 1, v_fst_2483_);
v___x_2489_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
lean_object* v___x_2490_; lean_object* v_fst_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2500_; 
v___x_2490_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(v___x_2464_, v_original_2461_, v___x_2489_);
lean_dec_ref(v_original_2461_);
v_fst_2491_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2500_ == 0)
{
lean_object* v_unused_2501_; 
v_unused_2501_ = lean_ctor_get(v___x_2490_, 1);
lean_dec(v_unused_2501_);
v___x_2493_ = v___x_2490_;
v_isShared_2494_ = v_isSharedCheck_2500_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_fst_2491_);
lean_dec(v___x_2490_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2500_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
lean_ctor_set(v___x_2493_, 1, v_snd_2484_);
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_fst_2491_);
lean_ctor_set(v_reuseFailAlloc_2499_, 1, v_snd_2484_);
v___x_2496_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
lean_object* v___x_2497_; lean_object* v_fst_2498_; 
v___x_2497_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(v___x_2469_, v_edited_2462_, v___x_2496_);
lean_dec_ref(v_edited_2462_);
v_fst_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_fst_2498_);
lean_dec_ref(v___x_2497_);
return v_fst_2498_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(lean_object* v___x_2504_, uint8_t v_inSubst_2505_, lean_object* v___x_2506_, lean_object* v_____r_2507_, lean_object* v_wssIdx_2508_){
_start:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2509_ = lean_box(v_inSubst_2505_);
v___x_2510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2504_);
lean_ctor_set(v___x_2510_, 1, v___x_2509_);
v___x_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2511_, 0, v_wssIdx_2508_);
lean_ctor_set(v___x_2511_, 1, v___x_2510_);
v___x_2512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2506_);
lean_ctor_set(v___x_2512_, 1, v___x_2511_);
v___x_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2512_);
return v___x_2513_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1___boxed(lean_object* v___x_2514_, lean_object* v_inSubst_2515_, lean_object* v___x_2516_, lean_object* v_____r_2517_, lean_object* v_wssIdx_2518_){
_start:
{
uint8_t v_inSubst_boxed_2519_; lean_object* v_res_2520_; 
v_inSubst_boxed_2519_ = lean_unbox(v_inSubst_2515_);
v_res_2520_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(v___x_2514_, v_inSubst_boxed_2519_, v___x_2516_, v_____r_2517_, v_wssIdx_2518_);
return v_res_2520_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(lean_object* v_fst_2521_, uint8_t v___x_2522_, lean_object* v_fst_2523_, lean_object* v___x_2524_, lean_object* v_00___2525_){
_start:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2526_ = lean_box(v___x_2522_);
v___x_2527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2527_, 0, v_fst_2521_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2528_, 0, v_fst_2523_);
lean_ctor_set(v___x_2528_, 1, v___x_2527_);
v___x_2529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2524_);
lean_ctor_set(v___x_2529_, 1, v___x_2528_);
v___x_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
return v___x_2530_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0___boxed(lean_object* v_fst_2531_, lean_object* v___x_2532_, lean_object* v_fst_2533_, lean_object* v___x_2534_, lean_object* v_00___2535_){
_start:
{
uint8_t v___x_9422__boxed_2536_; lean_object* v_res_2537_; 
v___x_9422__boxed_2536_ = lean_unbox(v___x_2532_);
v_res_2537_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(v_fst_2531_, v___x_9422__boxed_2536_, v_fst_2533_, v___x_2534_, v_00___2535_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(uint8_t v_inSubst_2538_, lean_object* v_snd_2539_, lean_object* v_fst_2540_, lean_object* v_____r_2541_, lean_object* v_withWs_2542_, lean_object* v_wssIdx_2543_){
_start:
{
lean_object* v_wss_x27Idx_2545_; uint8_t v___x_2551_; 
v___x_2551_ = lean_unbox(v_snd_2539_);
if (v___x_2551_ == 0)
{
v_wss_x27Idx_2545_ = v_fst_2540_;
goto v___jp_2544_;
}
else
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = lean_unsigned_to_nat(1u);
v___x_2553_ = lean_nat_add(v_fst_2540_, v___x_2552_);
lean_dec(v_fst_2540_);
v_wss_x27Idx_2545_ = v___x_2553_;
goto v___jp_2544_;
}
v___jp_2544_:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2546_ = lean_box(v_inSubst_2538_);
v___x_2547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2547_, 0, v_wss_x27Idx_2545_);
lean_ctor_set(v___x_2547_, 1, v___x_2546_);
v___x_2548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2548_, 0, v_wssIdx_2543_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
v___x_2549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2549_, 0, v_withWs_2542_);
lean_ctor_set(v___x_2549_, 1, v___x_2548_);
v___x_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
return v___x_2550_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2___boxed(lean_object* v_inSubst_2554_, lean_object* v_snd_2555_, lean_object* v_fst_2556_, lean_object* v_____r_2557_, lean_object* v_withWs_2558_, lean_object* v_wssIdx_2559_){
_start:
{
uint8_t v_inSubst_boxed_2560_; lean_object* v_res_2561_; 
v_inSubst_boxed_2560_ = lean_unbox(v_inSubst_2554_);
v_res_2561_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(v_inSubst_boxed_2560_, v_snd_2555_, v_fst_2556_, v_____r_2557_, v_withWs_2558_, v_wssIdx_2559_);
lean_dec(v_snd_2555_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(lean_object* v_upperBound_2562_, lean_object* v_diff_2563_, lean_object* v_snd_2564_, lean_object* v_snd_2565_, lean_object* v_a_2566_, lean_object* v_b_2567_){
_start:
{
lean_object* v_a_2569_; lean_object* v___y_2574_; uint8_t v___x_2577_; 
v___x_2577_ = lean_nat_dec_lt(v_a_2566_, v_upperBound_2562_);
if (v___x_2577_ == 0)
{
lean_dec(v_a_2566_);
return v_b_2567_;
}
else
{
lean_object* v___x_2578_; lean_object* v_snd_2579_; lean_object* v_snd_2580_; lean_object* v_fst_2581_; lean_object* v_fst_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2722_; 
v___x_2578_ = lean_array_fget_borrowed(v_diff_2563_, v_a_2566_);
v_snd_2579_ = lean_ctor_get(v_b_2567_, 1);
lean_inc(v_snd_2579_);
v_snd_2580_ = lean_ctor_get(v_snd_2579_, 1);
lean_inc(v_snd_2580_);
v_fst_2581_ = lean_ctor_get(v___x_2578_, 0);
v_fst_2582_ = lean_ctor_get(v_b_2567_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v_b_2567_);
if (v_isSharedCheck_2722_ == 0)
{
lean_object* v_unused_2723_; 
v_unused_2723_ = lean_ctor_get(v_b_2567_, 1);
lean_dec(v_unused_2723_);
v___x_2584_ = v_b_2567_;
v_isShared_2585_ = v_isSharedCheck_2722_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_fst_2582_);
lean_dec(v_b_2567_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2722_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v_fst_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2720_; 
v_fst_2586_ = lean_ctor_get(v_snd_2579_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v_snd_2579_);
if (v_isSharedCheck_2720_ == 0)
{
lean_object* v_unused_2721_; 
v_unused_2721_ = lean_ctor_get(v_snd_2579_, 1);
lean_dec(v_unused_2721_);
v___x_2588_ = v_snd_2579_;
v_isShared_2589_ = v_isSharedCheck_2720_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_fst_2586_);
lean_dec(v_snd_2579_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2720_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v_fst_2590_; lean_object* v_snd_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2719_; 
v_fst_2590_ = lean_ctor_get(v_snd_2580_, 0);
v_snd_2591_ = lean_ctor_get(v_snd_2580_, 1);
v_isSharedCheck_2719_ = !lean_is_exclusive(v_snd_2580_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2593_ = v_snd_2580_;
v_isShared_2594_ = v_isSharedCheck_2719_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_snd_2591_);
lean_inc(v_fst_2590_);
lean_dec(v_snd_2580_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2719_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2595_; lean_object* v___y_2597_; lean_object* v___y_2612_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; uint8_t v___x_2623_; 
lean_inc(v___x_2578_);
v___x_2595_ = lean_array_push(v_fst_2582_, v___x_2578_);
v___x_2620_ = lean_unsigned_to_nat(1u);
v___x_2621_ = lean_nat_add(v_a_2566_, v___x_2620_);
v___x_2622_ = lean_array_get_size(v_diff_2563_);
v___x_2623_ = lean_nat_dec_lt(v___x_2621_, v___x_2622_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; 
lean_dec(v___x_2621_);
lean_del_object(v___x_2593_);
lean_del_object(v___x_2588_);
lean_del_object(v___x_2584_);
v___x_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2624_, 0, v_fst_2590_);
lean_ctor_set(v___x_2624_, 1, v_snd_2591_);
v___x_2625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2625_, 0, v_fst_2586_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2595_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v_a_2569_ = v___x_2626_;
goto v___jp_2568_;
}
else
{
lean_object* v___x_2627_; lean_object* v_fst_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2717_; 
v___x_2627_ = lean_array_fget(v_diff_2563_, v___x_2621_);
lean_dec(v___x_2621_);
v_fst_2628_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2717_ == 0)
{
lean_object* v_unused_2718_; 
v_unused_2718_ = lean_ctor_get(v___x_2627_, 1);
lean_dec(v_unused_2718_);
v___x_2630_ = v___x_2627_;
v_isShared_2631_ = v_isSharedCheck_2717_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_fst_2628_);
lean_dec(v___x_2627_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2717_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
uint8_t v_inSubst_2632_; lean_object* v___y_2634_; lean_object* v___x_2643_; uint8_t v___x_2644_; 
v_inSubst_2632_ = 0;
v___x_2643_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_2644_ = lean_unbox(v_fst_2581_);
switch(v___x_2644_)
{
case 0:
{
uint8_t v___x_2645_; 
lean_del_object(v___x_2593_);
lean_del_object(v___x_2588_);
lean_del_object(v___x_2584_);
v___x_2645_ = lean_unbox(v_fst_2628_);
switch(v___x_2645_)
{
case 0:
{
lean_object* v___x_2646_; lean_object* v___x_2648_; 
v___x_2646_ = lean_array_get_borrowed(v___x_2643_, v_snd_2564_, v_fst_2590_);
lean_inc(v___x_2646_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 1, v___x_2646_);
v___x_2648_ = v___x_2630_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_fst_2628_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v___x_2646_);
v___x_2648_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2649_ = lean_array_push(v___x_2595_, v___x_2648_);
v___x_2650_ = lean_nat_add(v_fst_2590_, v___x_2620_);
lean_dec(v_fst_2590_);
v___x_2651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
lean_ctor_set(v___x_2651_, 1, v_snd_2591_);
v___x_2652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2652_, 0, v_fst_2586_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2649_);
lean_ctor_set(v___x_2653_, 1, v___x_2652_);
v_a_2569_ = v___x_2653_;
goto v___jp_2568_;
}
}
case 1:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; 
lean_del_object(v___x_2630_);
lean_dec(v_fst_2628_);
lean_dec(v_snd_2591_);
v___x_2655_ = lean_box(0);
v___x_2656_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(v_fst_2590_, v___x_2577_, v_fst_2586_, v___x_2595_, v___x_2655_);
v___y_2574_ = v___x_2656_;
goto v___jp_2573_;
}
default: 
{
lean_object* v___x_2657_; uint8_t v___x_2658_; 
lean_dec(v_fst_2628_);
v___x_2657_ = lean_array_get_borrowed(v___x_2643_, v_snd_2564_, v_fst_2590_);
v___x_2658_ = lean_unbox(v_snd_2591_);
if (v___x_2658_ == 0)
{
lean_object* v___x_2660_; 
lean_inc(v___x_2657_);
lean_inc(v_fst_2581_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 1, v___x_2657_);
lean_ctor_set(v___x_2630_, 0, v_fst_2581_);
v___x_2660_ = v___x_2630_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_fst_2581_);
lean_ctor_set(v_reuseFailAlloc_2663_, 1, v___x_2657_);
v___x_2660_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2661_ = lean_mk_empty_array_with_capacity(v___x_2620_);
v___x_2662_ = lean_array_push(v___x_2661_, v___x_2660_);
v___y_2634_ = v___x_2662_;
goto v___jp_2633_;
}
}
else
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
lean_del_object(v___x_2630_);
v___x_2664_ = lean_array_get_borrowed(v___x_2643_, v_snd_2565_, v_fst_2586_);
lean_inc(v___x_2657_);
lean_inc(v___x_2664_);
v___x_2665_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(v___x_2664_, v___x_2657_);
v___y_2634_ = v___x_2665_;
goto v___jp_2633_;
}
}
}
}
case 1:
{
uint8_t v___x_2666_; 
lean_del_object(v___x_2593_);
lean_del_object(v___x_2588_);
lean_del_object(v___x_2584_);
v___x_2666_ = lean_unbox(v_fst_2628_);
switch(v___x_2666_)
{
case 0:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; 
lean_del_object(v___x_2630_);
lean_dec(v_fst_2628_);
lean_dec(v_snd_2591_);
v___x_2667_ = lean_box(0);
v___x_2668_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__0(v_fst_2590_, v___x_2577_, v_fst_2586_, v___x_2595_, v___x_2667_);
v___y_2574_ = v___x_2668_;
goto v___jp_2573_;
}
case 1:
{
lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2669_ = lean_array_get_borrowed(v___x_2643_, v_snd_2565_, v_fst_2586_);
lean_inc(v___x_2669_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 1, v___x_2669_);
v___x_2671_ = v___x_2630_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_fst_2628_);
lean_ctor_set(v_reuseFailAlloc_2677_, 1, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2672_ = lean_array_push(v___x_2595_, v___x_2671_);
v___x_2673_ = lean_nat_add(v_fst_2586_, v___x_2620_);
lean_dec(v_fst_2586_);
v___x_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2674_, 0, v_fst_2590_);
lean_ctor_set(v___x_2674_, 1, v_snd_2591_);
v___x_2675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2673_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
v___x_2676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2672_);
lean_ctor_set(v___x_2676_, 1, v___x_2675_);
v_a_2569_ = v___x_2676_;
goto v___jp_2568_;
}
}
default: 
{
uint8_t v___x_2681_; 
lean_dec(v_fst_2628_);
v___x_2681_ = lean_unbox(v_snd_2591_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; uint8_t v___x_2686_; 
v___x_2682_ = lean_array_get_borrowed(v___x_2643_, v_snd_2565_, v_fst_2586_);
v___x_2683_ = lean_unsigned_to_nat(0u);
v___x_2684_ = lean_string_utf8_byte_size(v___x_2682_);
lean_inc(v___x_2682_);
v___x_2685_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2682_);
lean_ctor_set(v___x_2685_, 1, v___x_2683_);
lean_ctor_set(v___x_2685_, 2, v___x_2684_);
v___x_2686_ = l_String_Slice_contains___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__0(v___x_2685_);
lean_dec_ref_known(v___x_2685_, 3);
if (v___x_2686_ == 0)
{
lean_object* v___x_2688_; 
lean_inc(v___x_2682_);
lean_inc(v_fst_2581_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 1, v___x_2682_);
lean_ctor_set(v___x_2630_, 0, v_fst_2581_);
v___x_2688_ = v___x_2630_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v_fst_2581_);
lean_ctor_set(v_reuseFailAlloc_2693_, 1, v___x_2682_);
v___x_2688_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2689_ = lean_array_push(v___x_2595_, v___x_2688_);
v___x_2690_ = lean_nat_add(v_fst_2586_, v___x_2620_);
lean_dec(v_fst_2586_);
v___x_2691_ = lean_box(0);
v___x_2692_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(v_inSubst_2632_, v_snd_2591_, v_fst_2590_, v___x_2691_, v___x_2689_, v___x_2690_);
lean_dec(v_snd_2591_);
v___y_2574_ = v___x_2692_;
goto v___jp_2573_;
}
}
else
{
lean_del_object(v___x_2630_);
goto v___jp_2678_;
}
}
else
{
lean_del_object(v___x_2630_);
goto v___jp_2678_;
}
v___jp_2678_:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2679_ = lean_box(0);
v___x_2680_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__2(v_inSubst_2632_, v_snd_2591_, v_fst_2590_, v___x_2679_, v___x_2595_, v_fst_2586_);
lean_dec(v_snd_2591_);
v___y_2574_ = v___x_2680_;
goto v___jp_2573_;
}
}
}
}
default: 
{
uint8_t v___x_2694_; 
v___x_2694_ = lean_unbox(v_fst_2628_);
if (v___x_2694_ == 1)
{
lean_object* v___x_2695_; lean_object* v___x_2696_; uint8_t v___x_2697_; 
v___x_2695_ = lean_array_get_borrowed(v___x_2643_, v_snd_2565_, v_fst_2586_);
v___x_2696_ = lean_array_get_size(v_snd_2564_);
v___x_2697_ = lean_nat_dec_lt(v_fst_2590_, v___x_2696_);
if (v___x_2697_ == 0)
{
lean_object* v___x_2699_; 
lean_inc(v___x_2695_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 1, v___x_2695_);
v___x_2699_ = v___x_2630_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_fst_2628_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v___x_2695_);
v___x_2699_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2700_ = lean_mk_empty_array_with_capacity(v___x_2620_);
v___x_2701_ = lean_array_push(v___x_2700_, v___x_2699_);
v___y_2597_ = v___x_2701_;
goto v___jp_2596_;
}
}
else
{
lean_object* v___x_2703_; lean_object* v___x_2704_; 
lean_del_object(v___x_2630_);
lean_dec(v_fst_2628_);
v___x_2703_ = lean_array_fget_borrowed(v_snd_2564_, v_fst_2590_);
lean_inc(v___x_2703_);
lean_inc(v___x_2695_);
v___x_2704_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(v___x_2695_, v___x_2703_);
v___y_2597_ = v___x_2704_;
goto v___jp_2596_;
}
}
else
{
lean_object* v___x_2705_; lean_object* v___x_2706_; uint8_t v___x_2707_; 
lean_dec(v_fst_2628_);
lean_del_object(v___x_2593_);
lean_del_object(v___x_2588_);
lean_del_object(v___x_2584_);
v___x_2705_ = lean_array_get_borrowed(v___x_2643_, v_snd_2564_, v_fst_2590_);
v___x_2706_ = lean_array_get_size(v_snd_2565_);
v___x_2707_ = lean_nat_dec_lt(v_fst_2586_, v___x_2706_);
if (v___x_2707_ == 0)
{
uint8_t v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2711_; 
v___x_2708_ = 0;
v___x_2709_ = lean_box(v___x_2708_);
lean_inc(v___x_2705_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 1, v___x_2705_);
lean_ctor_set(v___x_2630_, 0, v___x_2709_);
v___x_2711_ = v___x_2630_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v___x_2709_);
lean_ctor_set(v_reuseFailAlloc_2714_, 1, v___x_2705_);
v___x_2711_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2712_ = lean_mk_empty_array_with_capacity(v___x_2620_);
v___x_2713_ = lean_array_push(v___x_2712_, v___x_2711_);
v___y_2612_ = v___x_2713_;
goto v___jp_2611_;
}
}
else
{
lean_object* v___x_2715_; lean_object* v___x_2716_; 
lean_del_object(v___x_2630_);
v___x_2715_ = lean_array_fget_borrowed(v_snd_2565_, v_fst_2586_);
lean_inc(v___x_2705_);
lean_inc(v___x_2715_);
v___x_2716_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff(v___x_2715_, v___x_2705_);
v___y_2612_ = v___x_2716_;
goto v___jp_2611_;
}
}
}
}
v___jp_2633_:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; uint8_t v___x_2637_; 
v___x_2635_ = l_Array_append___redArg(v___x_2595_, v___y_2634_);
lean_dec_ref(v___y_2634_);
v___x_2636_ = lean_nat_add(v_fst_2590_, v___x_2620_);
lean_dec(v_fst_2590_);
v___x_2637_ = lean_unbox(v_snd_2591_);
lean_dec(v_snd_2591_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2638_ = lean_box(0);
v___x_2639_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(v___x_2636_, v_inSubst_2632_, v___x_2635_, v___x_2638_, v_fst_2586_);
v___y_2574_ = v___x_2639_;
goto v___jp_2573_;
}
else
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2640_ = lean_nat_add(v_fst_2586_, v___x_2620_);
lean_dec(v_fst_2586_);
v___x_2641_ = lean_box(0);
v___x_2642_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___lam__1(v___x_2636_, v_inSubst_2632_, v___x_2635_, v___x_2641_, v___x_2640_);
v___y_2574_ = v___x_2642_;
goto v___jp_2573_;
}
}
}
}
v___jp_2596_:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2603_; 
v___x_2598_ = l_Array_append___redArg(v___x_2595_, v___y_2597_);
lean_dec_ref(v___y_2597_);
v___x_2599_ = lean_unsigned_to_nat(1u);
v___x_2600_ = lean_nat_add(v_fst_2586_, v___x_2599_);
lean_dec(v_fst_2586_);
v___x_2601_ = lean_nat_add(v_fst_2590_, v___x_2599_);
lean_dec(v_fst_2590_);
if (v_isShared_2594_ == 0)
{
lean_ctor_set(v___x_2593_, 0, v___x_2601_);
v___x_2603_ = v___x_2593_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v___x_2601_);
lean_ctor_set(v_reuseFailAlloc_2610_, 1, v_snd_2591_);
v___x_2603_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
lean_object* v___x_2605_; 
if (v_isShared_2589_ == 0)
{
lean_ctor_set(v___x_2588_, 1, v___x_2603_);
lean_ctor_set(v___x_2588_, 0, v___x_2600_);
v___x_2605_ = v___x_2588_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v___x_2600_);
lean_ctor_set(v_reuseFailAlloc_2609_, 1, v___x_2603_);
v___x_2605_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
lean_object* v___x_2607_; 
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 1, v___x_2605_);
lean_ctor_set(v___x_2584_, 0, v___x_2598_);
v___x_2607_ = v___x_2584_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v___x_2598_);
lean_ctor_set(v_reuseFailAlloc_2608_, 1, v___x_2605_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
v_a_2569_ = v___x_2607_;
goto v___jp_2568_;
}
}
}
}
v___jp_2611_:
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2613_ = l_Array_append___redArg(v___x_2595_, v___y_2612_);
lean_dec_ref(v___y_2612_);
v___x_2614_ = lean_unsigned_to_nat(1u);
v___x_2615_ = lean_nat_add(v_fst_2586_, v___x_2614_);
lean_dec(v_fst_2586_);
v___x_2616_ = lean_nat_add(v_fst_2590_, v___x_2614_);
lean_dec(v_fst_2590_);
v___x_2617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2616_);
lean_ctor_set(v___x_2617_, 1, v_snd_2591_);
v___x_2618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2615_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
v___x_2619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2613_);
lean_ctor_set(v___x_2619_, 1, v___x_2618_);
v_a_2569_ = v___x_2619_;
goto v___jp_2568_;
}
}
}
}
}
v___jp_2568_:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2570_ = lean_unsigned_to_nat(1u);
v___x_2571_ = lean_nat_add(v_a_2566_, v___x_2570_);
lean_dec(v_a_2566_);
v_a_2566_ = v___x_2571_;
v_b_2567_ = v_a_2569_;
goto _start;
}
v___jp_2573_:
{
if (lean_obj_tag(v___y_2574_) == 0)
{
lean_object* v_a_2575_; 
lean_dec(v_a_2566_);
v_a_2575_ = lean_ctor_get(v___y_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v___y_2574_, 1);
return v_a_2575_;
}
else
{
lean_object* v_a_2576_; 
v_a_2576_ = lean_ctor_get(v___y_2574_, 0);
lean_inc(v_a_2576_);
lean_dec_ref_known(v___y_2574_, 1);
v_a_2569_ = v_a_2576_;
goto v___jp_2568_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg___boxed(lean_object* v_upperBound_2724_, lean_object* v_diff_2725_, lean_object* v_snd_2726_, lean_object* v_snd_2727_, lean_object* v_a_2728_, lean_object* v_b_2729_){
_start:
{
lean_object* v_res_2730_; 
v_res_2730_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(v_upperBound_2724_, v_diff_2725_, v_snd_2726_, v_snd_2727_, v_a_2728_, v_b_2729_);
lean_dec_ref(v_snd_2727_);
lean_dec_ref(v_snd_2726_);
lean_dec_ref(v_diff_2725_);
lean_dec(v_upperBound_2724_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(lean_object* v_s_2741_, lean_object* v_s_x27_2742_){
_start:
{
lean_object* v___x_2743_; lean_object* v_fst_2744_; lean_object* v_snd_2745_; lean_object* v___x_2746_; lean_object* v_fst_2747_; lean_object* v_snd_2748_; lean_object* v_diff_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v_fst_2754_; lean_object* v___x_2755_; size_t v_sz_2756_; size_t v___x_2757_; lean_object* v___x_2758_; 
v___x_2743_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(v_s_2741_);
v_fst_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_fst_2744_);
v_snd_2745_ = lean_ctor_get(v___x_2743_, 1);
lean_inc(v_snd_2745_);
lean_dec_ref(v___x_2743_);
v___x_2746_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitWords(v_s_x27_2742_);
v_fst_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_fst_2747_);
v_snd_2748_ = lean_ctor_get(v___x_2746_, 1);
lean_inc(v_snd_2748_);
lean_dec_ref(v___x_2746_);
v_diff_2749_ = l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1(v_fst_2744_, v_fst_2747_);
v___x_2750_ = lean_unsigned_to_nat(0u);
v___x_2751_ = lean_array_get_size(v_diff_2749_);
v___x_2752_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___closed__2));
v___x_2753_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(v___x_2751_, v_diff_2749_, v_snd_2748_, v_snd_2745_, v___x_2750_, v___x_2752_);
lean_dec(v_snd_2745_);
lean_dec(v_snd_2748_);
lean_dec_ref(v_diff_2749_);
v_fst_2754_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_fst_2754_);
lean_dec_ref(v___x_2753_);
v___x_2755_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v_fst_2754_);
lean_dec(v_fst_2754_);
v_sz_2756_ = lean_array_size(v___x_2755_);
v___x_2757_ = ((size_t)0ULL);
v___x_2758_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__0(v_sz_2756_, v___x_2757_, v___x_2755_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff___boxed(lean_object* v_s_2759_, lean_object* v_s_x27_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(v_s_2759_, v_s_x27_2760_);
lean_dec_ref(v_s_x27_2760_);
lean_dec_ref(v_s_2759_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2(lean_object* v_upperBound_2762_, lean_object* v_diff_2763_, lean_object* v_snd_2764_, lean_object* v_snd_2765_, lean_object* v_inst_2766_, lean_object* v_R_2767_, lean_object* v_a_2768_, lean_object* v_b_2769_, lean_object* v_c_2770_){
_start:
{
lean_object* v___x_2771_; 
v___x_2771_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___redArg(v_upperBound_2762_, v_diff_2763_, v_snd_2764_, v_snd_2765_, v_a_2768_, v_b_2769_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2___boxed(lean_object* v_upperBound_2772_, lean_object* v_diff_2773_, lean_object* v_snd_2774_, lean_object* v_snd_2775_, lean_object* v_inst_2776_, lean_object* v_R_2777_, lean_object* v_a_2778_, lean_object* v_b_2779_, lean_object* v_c_2780_){
_start:
{
lean_object* v_res_2781_; 
v_res_2781_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__2(v_upperBound_2772_, v_diff_2773_, v_snd_2774_, v_snd_2775_, v_inst_2776_, v_R_2777_, v_a_2778_, v_b_2779_, v_c_2780_);
lean_dec_ref(v_snd_2775_);
lean_dec_ref(v_snd_2774_);
lean_dec_ref(v_diff_2773_);
lean_dec(v_upperBound_2772_);
return v_res_2781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1(lean_object* v___x_2782_, lean_object* v_original_2783_, lean_object* v_a_2784_, lean_object* v_inst_2785_, lean_object* v_a_2786_){
_start:
{
lean_object* v___x_2787_; 
v___x_2787_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___redArg(v___x_2782_, v_original_2783_, v_a_2784_, v_a_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1___boxed(lean_object* v___x_2788_, lean_object* v_original_2789_, lean_object* v_a_2790_, lean_object* v_inst_2791_, lean_object* v_a_2792_){
_start:
{
lean_object* v_res_2793_; 
v_res_2793_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__1(v___x_2788_, v_original_2789_, v_a_2790_, v_inst_2791_, v_a_2792_);
lean_dec_ref(v_a_2790_);
lean_dec_ref(v_original_2789_);
lean_dec(v___x_2788_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2(lean_object* v___x_2794_, lean_object* v_edited_2795_, lean_object* v_a_2796_, lean_object* v_inst_2797_, lean_object* v_a_2798_){
_start:
{
lean_object* v___x_2799_; 
v___x_2799_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___redArg(v___x_2794_, v_edited_2795_, v_a_2796_, v_a_2798_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2___boxed(lean_object* v___x_2800_, lean_object* v_edited_2801_, lean_object* v_a_2802_, lean_object* v_inst_2803_, lean_object* v_a_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__2(v___x_2800_, v_edited_2801_, v_a_2802_, v_inst_2803_, v_a_2804_);
lean_dec_ref(v_a_2802_);
lean_dec_ref(v_edited_2801_);
lean_dec(v___x_2800_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5(lean_object* v___x_2806_, lean_object* v_original_2807_, lean_object* v_inst_2808_, lean_object* v_a_2809_){
_start:
{
lean_object* v___x_2810_; 
v___x_2810_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___redArg(v___x_2806_, v_original_2807_, v_a_2809_);
return v___x_2810_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5___boxed(lean_object* v___x_2811_, lean_object* v_original_2812_, lean_object* v_inst_2813_, lean_object* v_a_2814_){
_start:
{
lean_object* v_res_2815_; 
v_res_2815_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__5(v___x_2811_, v_original_2812_, v_inst_2813_, v_a_2814_);
lean_dec_ref(v_original_2812_);
lean_dec(v___x_2811_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6(lean_object* v___x_2816_, lean_object* v_edited_2817_, lean_object* v_inst_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v___x_2820_; 
v___x_2820_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___redArg(v___x_2816_, v_edited_2817_, v_a_2819_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6___boxed(lean_object* v___x_2821_, lean_object* v_edited_2822_, lean_object* v_inst_2823_, lean_object* v_a_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__6(v___x_2821_, v_edited_2822_, v_inst_2823_, v_a_2824_);
lean_dec_ref(v_edited_2822_);
lean_dec(v___x_2821_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6(lean_object* v_as_2826_, lean_object* v_as_x27_2827_, lean_object* v_b_2828_, lean_object* v_a_2829_){
_start:
{
lean_object* v___x_2830_; 
v___x_2830_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___redArg(v_as_x27_2827_, v_b_2828_);
return v___x_2830_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6___boxed(lean_object* v_as_2831_, lean_object* v_as_x27_2832_, lean_object* v_b_2833_, lean_object* v_a_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l_List_forIn_x27_loop___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__6(v_as_2831_, v_as_x27_2832_, v_b_2833_, v_a_2834_);
lean_dec(v_as_x27_2832_);
lean_dec(v_as_2831_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9(lean_object* v_lsize_2836_, lean_object* v_rsize_2837_, lean_object* v_histogram_2838_, lean_object* v_index_2839_, lean_object* v_val_2840_){
_start:
{
lean_object* v___x_2841_; 
v___x_2841_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___redArg(v_histogram_2838_, v_index_2839_, v_val_2840_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9___boxed(lean_object* v_lsize_2842_, lean_object* v_rsize_2843_, lean_object* v_histogram_2844_, lean_object* v_index_2845_, lean_object* v_val_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9(v_lsize_2842_, v_rsize_2843_, v_histogram_2844_, v_index_2845_, v_val_2846_);
lean_dec(v_rsize_2843_);
lean_dec(v_lsize_2842_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10(lean_object* v_upperBound_2848_, lean_object* v___x_2849_, lean_object* v_fst_2850_, lean_object* v___x_2851_, lean_object* v_inst_2852_, lean_object* v_R_2853_, lean_object* v_a_2854_, lean_object* v_b_2855_, lean_object* v_c_2856_){
_start:
{
lean_object* v___x_2857_; 
v___x_2857_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___redArg(v_upperBound_2848_, v___x_2849_, v_fst_2850_, v___x_2851_, v_a_2854_, v_b_2855_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10___boxed(lean_object* v_upperBound_2858_, lean_object* v___x_2859_, lean_object* v_fst_2860_, lean_object* v___x_2861_, lean_object* v_inst_2862_, lean_object* v_R_2863_, lean_object* v_a_2864_, lean_object* v_b_2865_, lean_object* v_c_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__10(v_upperBound_2858_, v___x_2859_, v_fst_2860_, v___x_2861_, v_inst_2862_, v_R_2863_, v_a_2864_, v_b_2865_, v_c_2866_);
lean_dec(v___x_2861_);
lean_dec_ref(v_fst_2860_);
lean_dec(v___x_2859_);
lean_dec(v_upperBound_2858_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11(lean_object* v_lsize_2868_, lean_object* v_rsize_2869_, lean_object* v_histogram_2870_, lean_object* v_index_2871_, lean_object* v_val_2872_){
_start:
{
lean_object* v___x_2873_; 
v___x_2873_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___redArg(v_histogram_2870_, v_index_2871_, v_val_2872_);
return v___x_2873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11___boxed(lean_object* v_lsize_2874_, lean_object* v_rsize_2875_, lean_object* v_histogram_2876_, lean_object* v_index_2877_, lean_object* v_val_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_Lean_Diff_Histogram_addLeft___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__11(v_lsize_2874_, v_rsize_2875_, v_histogram_2876_, v_index_2877_, v_val_2878_);
lean_dec(v_rsize_2875_);
lean_dec(v_lsize_2874_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12(lean_object* v_upperBound_2880_, lean_object* v_fst_2881_, lean_object* v___x_2882_, lean_object* v_fst_2883_, lean_object* v_inst_2884_, lean_object* v_R_2885_, lean_object* v_a_2886_, lean_object* v_b_2887_, lean_object* v_c_2888_){
_start:
{
lean_object* v___x_2889_; 
v___x_2889_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___redArg(v_upperBound_2880_, v_fst_2881_, v___x_2882_, v_fst_2883_, v_a_2886_, v_b_2887_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12___boxed(lean_object* v_upperBound_2890_, lean_object* v_fst_2891_, lean_object* v___x_2892_, lean_object* v_fst_2893_, lean_object* v_inst_2894_, lean_object* v_R_2895_, lean_object* v_a_2896_, lean_object* v_b_2897_, lean_object* v_c_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__12(v_upperBound_2890_, v_fst_2891_, v___x_2892_, v_fst_2893_, v_inst_2894_, v_R_2895_, v_a_2896_, v_b_2897_, v_c_2898_);
lean_dec_ref(v_fst_2893_);
lean_dec(v___x_2892_);
lean_dec_ref(v_fst_2891_);
lean_dec(v_upperBound_2890_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13(lean_object* v_00_u03b2_2900_, lean_object* v_m_2901_, lean_object* v_a_2902_){
_start:
{
lean_object* v___x_2903_; 
v___x_2903_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___redArg(v_m_2901_, v_a_2902_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13___boxed(lean_object* v_00_u03b2_2904_, lean_object* v_m_2905_, lean_object* v_a_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13(v_00_u03b2_2904_, v_m_2905_, v_a_2906_);
lean_dec_ref(v_a_2906_);
lean_dec_ref(v_m_2905_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_2908_, lean_object* v_m_2909_, lean_object* v_a_2910_, lean_object* v_b_2911_){
_start:
{
lean_object* v___x_2912_; 
v___x_2912_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14___redArg(v_m_2909_, v_a_2910_, v_b_2911_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14(lean_object* v_inst_2913_, lean_object* v_R_2914_, lean_object* v_a_2915_, lean_object* v_b_2916_){
_start:
{
lean_object* v___x_2917_; 
v___x_2917_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Util_Diff_0__Lean_Diff_matchSuffix_go___at___00Lean_Diff_matchSuffix___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__5_spec__8_spec__14___redArg(v_a_2915_, v_b_2916_);
return v___x_2917_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20(lean_object* v_00_u03b2_2918_, lean_object* v_a_2919_, lean_object* v_x_2920_){
_start:
{
lean_object* v___x_2921_; 
v___x_2921_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___redArg(v_a_2919_, v_x_2920_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20___boxed(lean_object* v_00_u03b2_2922_, lean_object* v_a_2923_, lean_object* v_x_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__13_spec__20(v_00_u03b2_2922_, v_a_2923_, v_x_2924_);
lean_dec(v_x_2924_);
lean_dec_ref(v_a_2923_);
return v_res_2925_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22(lean_object* v_00_u03b2_2926_, lean_object* v_a_2927_, lean_object* v_x_2928_){
_start:
{
uint8_t v___x_2929_; 
v___x_2929_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___redArg(v_a_2927_, v_x_2928_);
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22___boxed(lean_object* v_00_u03b2_2930_, lean_object* v_a_2931_, lean_object* v_x_2932_){
_start:
{
uint8_t v_res_2933_; lean_object* v_r_2934_; 
v_res_2933_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__22(v_00_u03b2_2930_, v_a_2931_, v_x_2932_);
lean_dec(v_x_2932_);
lean_dec_ref(v_a_2931_);
v_r_2934_ = lean_box(v_res_2933_);
return v_r_2934_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23(lean_object* v_00_u03b2_2935_, lean_object* v_data_2936_){
_start:
{
lean_object* v___x_2937_; 
v___x_2937_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23___redArg(v_data_2936_);
return v___x_2937_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24(lean_object* v_00_u03b2_2938_, lean_object* v_a_2939_, lean_object* v_b_2940_, lean_object* v_x_2941_){
_start:
{
lean_object* v___x_2942_; 
v___x_2942_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__24___redArg(v_a_2939_, v_b_2940_, v_x_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28(lean_object* v_00_u03b2_2943_, lean_object* v_i_2944_, lean_object* v_source_2945_, lean_object* v_target_2946_){
_start:
{
lean_object* v___x_2947_; 
v___x_2947_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28___redArg(v_i_2944_, v_source_2945_, v_target_2946_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29(lean_object* v_00_u03b2_2948_, lean_object* v_x_2949_, lean_object* v_x_2950_){
_start:
{
lean_object* v___x_2951_; 
v___x_2951_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Diff_Histogram_addRight___at___00Lean_Diff_lcs___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff_spec__1_spec__3_spec__9_spec__14_spec__23_spec__28_spec__29___redArg(v_x_2949_, v_x_2950_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(lean_object* v_s_2952_){
_start:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2953_ = l_String_toListImpl(v_s_2952_);
v___x_2954_ = lean_array_mk(v___x_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_charDiff(lean_object* v_s_2955_, lean_object* v_s_x27_2956_){
_start:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2957_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(v_s_2955_);
v___x_2958_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(v_s_x27_2956_);
v___x_2959_ = l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(v___x_2957_, v___x_2958_);
v___x_2960_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff(v___x_2959_);
lean_dec_ref(v___x_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_maxDiff(lean_object* v_s_2961_, lean_object* v_s_x27_2962_){
_start:
{
uint8_t v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; uint8_t v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2963_ = 1;
v___x_2964_ = lean_box(v___x_2963_);
v___x_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
lean_ctor_set(v___x_2965_, 1, v_s_2961_);
v___x_2966_ = 0;
v___x_2967_ = lean_box(v___x_2966_);
v___x_2968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
lean_ctor_set(v___x_2968_, 1, v_s_x27_2962_);
v___x_2969_ = lean_unsigned_to_nat(2u);
v___x_2970_ = lean_mk_empty_array_with_capacity(v___x_2969_);
v___x_2971_ = lean_array_push(v___x_2970_, v___x_2965_);
v___x_2972_ = lean_array_push(v___x_2971_, v___x_2968_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0(lean_object* v_as_2973_, size_t v_i_2974_, size_t v_stop_2975_, lean_object* v_b_2976_){
_start:
{
lean_object* v___y_2978_; uint8_t v___x_2982_; 
v___x_2982_ = lean_usize_dec_eq(v_i_2974_, v_stop_2975_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; lean_object* v_fst_2984_; uint8_t v___x_2985_; uint8_t v___x_2986_; uint8_t v___x_2987_; 
v___x_2983_ = lean_array_uget_borrowed(v_as_2973_, v_i_2974_);
v_fst_2984_ = lean_ctor_get(v___x_2983_, 0);
v___x_2985_ = 2;
v___x_2986_ = lean_unbox(v_fst_2984_);
v___x_2987_ = l_Lean_Diff_instBEqAction_beq(v___x_2986_, v___x_2985_);
if (v___x_2987_ == 0)
{
lean_object* v___x_2988_; 
lean_inc(v___x_2983_);
v___x_2988_ = lean_array_push(v_b_2976_, v___x_2983_);
v___y_2978_ = v___x_2988_;
goto v___jp_2977_;
}
else
{
v___y_2978_ = v_b_2976_;
goto v___jp_2977_;
}
}
else
{
return v_b_2976_;
}
v___jp_2977_:
{
size_t v___x_2979_; size_t v___x_2980_; 
v___x_2979_ = ((size_t)1ULL);
v___x_2980_ = lean_usize_add(v_i_2974_, v___x_2979_);
v_i_2974_ = v___x_2980_;
v_b_2976_ = v___y_2978_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0___boxed(lean_object* v_as_2989_, lean_object* v_i_2990_, lean_object* v_stop_2991_, lean_object* v_b_2992_){
_start:
{
size_t v_i_boxed_2993_; size_t v_stop_boxed_2994_; lean_object* v_res_2995_; 
v_i_boxed_2993_ = lean_unbox_usize(v_i_2990_);
lean_dec(v_i_2990_);
v_stop_boxed_2994_ = lean_unbox_usize(v_stop_2991_);
lean_dec(v_stop_2991_);
v_res_2995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0(v_as_2989_, v_i_boxed_2993_, v_stop_boxed_2994_, v_b_2992_);
lean_dec_ref(v_as_2989_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_readableDiff(lean_object* v_s_2996_, lean_object* v_s_x27_2997_, uint8_t v_granularity_2998_){
_start:
{
lean_object* v___y_3000_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v___y_3008_; lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3022_; 
switch(v_granularity_2998_)
{
case 0:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___y_3038_; uint8_t v___x_3044_; 
v___x_3035_ = lean_string_length(v_s_2996_);
v___x_3036_ = lean_string_length(v_s_x27_2997_);
v___x_3044_ = lean_nat_dec_le(v___x_3035_, v___x_3036_);
if (v___x_3044_ == 0)
{
v___y_3038_ = v___x_3036_;
goto v___jp_3037_;
}
else
{
v___y_3038_ = v___x_3035_;
goto v___jp_3037_;
}
v___jp_3037_:
{
lean_object* v___x_3039_; lean_object* v_maxCharDiffDistance_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; uint8_t v___x_3043_; 
v___x_3039_ = lean_unsigned_to_nat(5u);
v_maxCharDiffDistance_3040_ = lean_nat_div(v___y_3038_, v___x_3039_);
v___x_3041_ = lean_unsigned_to_nat(1u);
v___x_3042_ = lean_nat_shiftr(v___y_3038_, v___x_3041_);
lean_dec(v___y_3038_);
v___x_3043_ = lean_nat_dec_le(v___x_3035_, v___x_3036_);
if (v___x_3043_ == 0)
{
v___y_3019_ = v___x_3042_;
v___y_3020_ = v___x_3041_;
v___y_3021_ = v_maxCharDiffDistance_3040_;
v___y_3022_ = v___x_3035_;
goto v___jp_3018_;
}
else
{
v___y_3019_ = v___x_3042_;
v___y_3020_ = v___x_3041_;
v___y_3021_ = v_maxCharDiffDistance_3040_;
v___y_3022_ = v___x_3036_;
goto v___jp_3018_;
}
}
}
case 1:
{
lean_object* v___x_3045_; 
v___x_3045_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_charDiff(v_s_2996_, v_s_x27_2997_);
return v___x_3045_;
}
case 2:
{
lean_object* v___x_3046_; 
v___x_3046_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(v_s_2996_, v_s_x27_2997_);
lean_dec_ref(v_s_x27_2997_);
lean_dec_ref(v_s_2996_);
return v___x_3046_;
}
case 3:
{
lean_object* v___x_3047_; 
v___x_3047_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_maxDiff(v_s_2996_, v_s_x27_2997_);
return v___x_3047_;
}
default: 
{
uint8_t v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
lean_dec_ref(v_s_2996_);
v___x_3048_ = 0;
v___x_3049_ = lean_box(v___x_3048_);
v___x_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3049_);
lean_ctor_set(v___x_3050_, 1, v_s_x27_2997_);
v___x_3051_ = lean_unsigned_to_nat(1u);
v___x_3052_ = lean_mk_empty_array_with_capacity(v___x_3051_);
v___x_3053_ = lean_array_push(v___x_3052_, v___x_3050_);
return v___x_3053_;
}
}
v___jp_2999_:
{
size_t v_sz_3001_; size_t v___x_3002_; lean_object* v___x_3003_; 
v_sz_3001_ = lean_array_size(v___y_3000_);
v___x_3002_ = ((size_t)0ULL);
v___x_3003_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinCharDiff_spec__0(v_sz_3001_, v___x_3002_, v___y_3000_);
return v___x_3003_;
}
v___jp_3004_:
{
lean_object* v_charArrDiff_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; 
v_charArrDiff_3009_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_joinEdits___redArg(v___y_3007_);
lean_dec_ref(v___y_3007_);
v___x_3010_ = lean_array_get_size(v_charArrDiff_3009_);
v___x_3011_ = lean_unsigned_to_nat(3u);
v___x_3012_ = lean_nat_dec_le(v___x_3010_, v___x_3011_);
if (v___x_3012_ == 0)
{
lean_object* v_approxEditDistance_3013_; uint8_t v___x_3014_; 
v_approxEditDistance_3013_ = lean_array_get_size(v___y_3008_);
lean_dec_ref(v___y_3008_);
v___x_3014_ = lean_nat_dec_le(v_approxEditDistance_3013_, v___y_3006_);
lean_dec(v___y_3006_);
if (v___x_3014_ == 0)
{
uint8_t v___x_3015_; 
lean_dec_ref(v_charArrDiff_3009_);
v___x_3015_ = lean_nat_dec_le(v_approxEditDistance_3013_, v___y_3005_);
lean_dec(v___y_3005_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; 
v___x_3016_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_maxDiff(v_s_2996_, v_s_x27_2997_);
return v___x_3016_;
}
else
{
lean_object* v___x_3017_; 
v___x_3017_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_wordDiff(v_s_2996_, v_s_x27_2997_);
lean_dec_ref(v_s_x27_2997_);
lean_dec_ref(v_s_2996_);
return v___x_3017_;
}
}
else
{
lean_dec(v___y_3005_);
lean_dec_ref(v_s_x27_2997_);
lean_dec_ref(v_s_2996_);
v___y_3000_ = v_charArrDiff_3009_;
goto v___jp_2999_;
}
}
else
{
lean_dec_ref(v___y_3008_);
lean_dec(v___y_3006_);
lean_dec(v___y_3005_);
lean_dec_ref(v_s_x27_2997_);
lean_dec_ref(v_s_2996_);
v___y_3000_ = v_charArrDiff_3009_;
goto v___jp_2999_;
}
}
v___jp_3018_:
{
lean_object* v___x_3023_; lean_object* v_maxWordDiffDistance_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v_charDiffRaw_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; uint8_t v___x_3031_; 
v___x_3023_ = lean_nat_shiftr(v___y_3022_, v___y_3020_);
lean_dec(v___y_3022_);
v_maxWordDiffDistance_3024_ = lean_nat_add(v___y_3019_, v___x_3023_);
lean_dec(v___x_3023_);
lean_dec(v___y_3019_);
lean_inc_ref(v_s_2996_);
v___x_3025_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(v_s_2996_);
lean_inc_ref(v_s_x27_2997_);
v___x_3026_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_splitChars(v_s_x27_2997_);
v_charDiffRaw_3027_ = l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1(v___x_3025_, v___x_3026_);
v___x_3028_ = lean_unsigned_to_nat(0u);
v___x_3029_ = lean_array_get_size(v_charDiffRaw_3027_);
v___x_3030_ = ((lean_object*)(l_Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1___closed__0));
v___x_3031_ = lean_nat_dec_lt(v___x_3028_, v___x_3029_);
if (v___x_3031_ == 0)
{
v___y_3005_ = v_maxWordDiffDistance_3024_;
v___y_3006_ = v___y_3021_;
v___y_3007_ = v_charDiffRaw_3027_;
v___y_3008_ = v___x_3030_;
goto v___jp_3004_;
}
else
{
size_t v___x_3032_; size_t v___x_3033_; lean_object* v___x_3034_; 
v___x_3032_ = ((size_t)0ULL);
v___x_3033_ = lean_usize_of_nat(v___x_3029_);
v___x_3034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_readableDiff_spec__0(v_charDiffRaw_3027_, v___x_3032_, v___x_3033_, v___x_3030_);
v___y_3005_ = v_maxWordDiffDistance_3024_;
v___y_3006_ = v___y_3021_;
v___y_3007_ = v_charDiffRaw_3027_;
v___y_3008_ = v___x_3034_;
goto v___jp_3004_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_readableDiff___boxed(lean_object* v_s_3054_, lean_object* v_s_x27_3055_, lean_object* v_granularity_3056_){
_start:
{
uint8_t v_granularity_boxed_3057_; lean_object* v_res_3058_; 
v_granularity_boxed_3057_ = lean_unbox(v_granularity_3056_);
v_res_3058_ = l_Lean_Meta_Hint_readableDiff(v_s_3054_, v_s_x27_3055_, v_granularity_boxed_3057_);
return v_res_3058_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0(lean_object* v_as_3059_, size_t v_i_3060_, size_t v_stop_3061_, lean_object* v_b_3062_){
_start:
{
uint8_t v___x_3063_; 
v___x_3063_ = lean_usize_dec_eq(v_i_3060_, v_stop_3061_);
if (v___x_3063_ == 0)
{
lean_object* v___x_3064_; lean_object* v_snd_3065_; lean_object* v___x_3066_; size_t v___x_3067_; size_t v___x_3068_; 
v___x_3064_ = lean_array_uget_borrowed(v_as_3059_, v_i_3060_);
v_snd_3065_ = lean_ctor_get(v___x_3064_, 1);
v___x_3066_ = lean_string_append(v_b_3062_, v_snd_3065_);
v___x_3067_ = ((size_t)1ULL);
v___x_3068_ = lean_usize_add(v_i_3060_, v___x_3067_);
v_i_3060_ = v___x_3068_;
v_b_3062_ = v___x_3066_;
goto _start;
}
else
{
return v_b_3062_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0___boxed(lean_object* v_as_3070_, lean_object* v_i_3071_, lean_object* v_stop_3072_, lean_object* v_b_3073_){
_start:
{
size_t v_i_boxed_3074_; size_t v_stop_boxed_3075_; lean_object* v_res_3076_; 
v_i_boxed_3074_ = lean_unbox_usize(v_i_3071_);
lean_dec(v_i_3071_);
v_stop_boxed_3075_ = lean_unbox_usize(v_stop_3072_);
lean_dec(v_stop_3072_);
v_res_3076_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0(v_as_3070_, v_i_boxed_3074_, v_stop_boxed_3075_, v_b_3073_);
lean_dec_ref(v_as_3070_);
return v_res_3076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(lean_object* v_t_3077_, lean_object* v___y_3078_){
_start:
{
lean_object* v___x_3080_; lean_object* v_infoState_3081_; uint8_t v_enabled_3082_; 
v___x_3080_ = lean_st_ref_get(v___y_3078_);
v_infoState_3081_ = lean_ctor_get(v___x_3080_, 8);
lean_inc_ref(v_infoState_3081_);
lean_dec(v___x_3080_);
v_enabled_3082_ = lean_ctor_get_uint8(v_infoState_3081_, sizeof(void*)*3);
lean_dec_ref(v_infoState_3081_);
if (v_enabled_3082_ == 0)
{
lean_object* v___x_3083_; lean_object* v___x_3084_; 
lean_dec_ref(v_t_3077_);
v___x_3083_ = lean_box(0);
v___x_3084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3083_);
return v___x_3084_;
}
else
{
lean_object* v___x_3085_; lean_object* v_infoState_3086_; lean_object* v_env_3087_; lean_object* v_nextMacroScope_3088_; lean_object* v_ngen_3089_; lean_object* v_auxDeclNGen_3090_; lean_object* v_traceState_3091_; lean_object* v_cache_3092_; lean_object* v_recordedDeps_3093_; lean_object* v_messages_3094_; lean_object* v_snapshotTasks_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3117_; 
v___x_3085_ = lean_st_ref_take(v___y_3078_);
v_infoState_3086_ = lean_ctor_get(v___x_3085_, 8);
v_env_3087_ = lean_ctor_get(v___x_3085_, 0);
v_nextMacroScope_3088_ = lean_ctor_get(v___x_3085_, 1);
v_ngen_3089_ = lean_ctor_get(v___x_3085_, 2);
v_auxDeclNGen_3090_ = lean_ctor_get(v___x_3085_, 3);
v_traceState_3091_ = lean_ctor_get(v___x_3085_, 4);
v_cache_3092_ = lean_ctor_get(v___x_3085_, 5);
v_recordedDeps_3093_ = lean_ctor_get(v___x_3085_, 6);
v_messages_3094_ = lean_ctor_get(v___x_3085_, 7);
v_snapshotTasks_3095_ = lean_ctor_get(v___x_3085_, 9);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3097_ = v___x_3085_;
v_isShared_3098_ = v_isSharedCheck_3117_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_snapshotTasks_3095_);
lean_inc(v_infoState_3086_);
lean_inc(v_messages_3094_);
lean_inc(v_recordedDeps_3093_);
lean_inc(v_cache_3092_);
lean_inc(v_traceState_3091_);
lean_inc(v_auxDeclNGen_3090_);
lean_inc(v_ngen_3089_);
lean_inc(v_nextMacroScope_3088_);
lean_inc(v_env_3087_);
lean_dec(v___x_3085_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3117_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
uint8_t v_enabled_3099_; lean_object* v_assignment_3100_; lean_object* v_lazyAssignment_3101_; lean_object* v_trees_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3116_; 
v_enabled_3099_ = lean_ctor_get_uint8(v_infoState_3086_, sizeof(void*)*3);
v_assignment_3100_ = lean_ctor_get(v_infoState_3086_, 0);
v_lazyAssignment_3101_ = lean_ctor_get(v_infoState_3086_, 1);
v_trees_3102_ = lean_ctor_get(v_infoState_3086_, 2);
v_isSharedCheck_3116_ = !lean_is_exclusive(v_infoState_3086_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3104_ = v_infoState_3086_;
v_isShared_3105_ = v_isSharedCheck_3116_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_trees_3102_);
lean_inc(v_lazyAssignment_3101_);
lean_inc(v_assignment_3100_);
lean_dec(v_infoState_3086_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3116_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3109_; 
v___x_3106_ = lean_box(0);
v___x_3107_ = l_Lean_PersistentArray_push___redArg(v_trees_3102_, v_t_3077_);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 2, v___x_3107_);
v___x_3109_ = v___x_3104_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_assignment_3100_);
lean_ctor_set(v_reuseFailAlloc_3115_, 1, v_lazyAssignment_3101_);
lean_ctor_set(v_reuseFailAlloc_3115_, 2, v___x_3107_);
lean_ctor_set_uint8(v_reuseFailAlloc_3115_, sizeof(void*)*3, v_enabled_3099_);
v___x_3109_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
lean_object* v___x_3111_; 
if (v_isShared_3098_ == 0)
{
lean_ctor_set(v___x_3097_, 8, v___x_3109_);
v___x_3111_ = v___x_3097_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_env_3087_);
lean_ctor_set(v_reuseFailAlloc_3114_, 1, v_nextMacroScope_3088_);
lean_ctor_set(v_reuseFailAlloc_3114_, 2, v_ngen_3089_);
lean_ctor_set(v_reuseFailAlloc_3114_, 3, v_auxDeclNGen_3090_);
lean_ctor_set(v_reuseFailAlloc_3114_, 4, v_traceState_3091_);
lean_ctor_set(v_reuseFailAlloc_3114_, 5, v_cache_3092_);
lean_ctor_set(v_reuseFailAlloc_3114_, 6, v_recordedDeps_3093_);
lean_ctor_set(v_reuseFailAlloc_3114_, 7, v_messages_3094_);
lean_ctor_set(v_reuseFailAlloc_3114_, 8, v___x_3109_);
lean_ctor_set(v_reuseFailAlloc_3114_, 9, v_snapshotTasks_3095_);
v___x_3111_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3112_ = lean_st_ref_put(v___y_3078_, v___x_3111_);
v___x_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3106_);
return v___x_3113_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg___boxed(lean_object* v_t_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(v_t_3118_, v___y_3119_);
lean_dec(v___y_3119_);
return v_res_3121_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3122_ = lean_unsigned_to_nat(32u);
v___x_3123_ = lean_mk_empty_array_with_capacity(v___x_3122_);
v___x_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
return v___x_3124_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1(void){
_start:
{
size_t v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3125_ = ((size_t)5ULL);
v___x_3126_ = lean_unsigned_to_nat(0u);
v___x_3127_ = lean_unsigned_to_nat(32u);
v___x_3128_ = lean_mk_empty_array_with_capacity(v___x_3127_);
v___x_3129_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__0);
v___x_3130_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3130_, 0, v___x_3129_);
lean_ctor_set(v___x_3130_, 1, v___x_3128_);
lean_ctor_set(v___x_3130_, 2, v___x_3126_);
lean_ctor_set(v___x_3130_, 3, v___x_3126_);
lean_ctor_set_usize(v___x_3130_, 4, v___x_3125_);
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1(lean_object* v_t_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
lean_object* v___x_3135_; lean_object* v_infoState_3136_; uint8_t v_enabled_3137_; 
v___x_3135_ = lean_st_ref_get(v___y_3133_);
v_infoState_3136_ = lean_ctor_get(v___x_3135_, 8);
lean_inc_ref(v_infoState_3136_);
lean_dec(v___x_3135_);
v_enabled_3137_ = lean_ctor_get_uint8(v_infoState_3136_, sizeof(void*)*3);
lean_dec_ref(v_infoState_3136_);
if (v_enabled_3137_ == 0)
{
lean_object* v___x_3138_; lean_object* v___x_3139_; 
lean_dec_ref(v_t_3131_);
v___x_3138_ = lean_box(0);
v___x_3139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3138_);
return v___x_3139_;
}
else
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3140_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___closed__1);
v___x_3141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3141_, 0, v_t_3131_);
lean_ctor_set(v___x_3141_, 1, v___x_3140_);
v___x_3142_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(v___x_3141_, v___y_3133_);
return v___x_3142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1___boxed(lean_object* v_t_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
lean_object* v_res_3147_; 
v_res_3147_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1(v_t_3143_, v___y_3144_, v___y_3145_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
return v_res_3147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___lam__0(lean_object* v___x_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v___x_3150_; 
v___x_3150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3148_);
lean_ctor_set(v___x_3150_, 1, v___y_3149_);
return v___x_3150_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3152_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__0));
v___x_3153_ = l_Lean_stringToMessageData(v___x_3152_);
return v___x_3153_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3155_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__2));
v___x_3156_ = l_Lean_stringToMessageData(v___x_3155_);
return v___x_3156_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29(void){
_start:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__28));
v___x_3206_ = l_Lean_Json_mkObj(v___x_3205_);
return v___x_3206_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30(void){
_start:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3207_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__29);
v___x_3208_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__19));
v___x_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3208_);
lean_ctor_set(v___x_3209_, 1, v___x_3207_);
return v___x_3209_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31(void){
_start:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3210_ = lean_box(0);
v___x_3211_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__30);
v___x_3212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3211_);
lean_ctor_set(v___x_3212_, 1, v___x_3210_);
return v___x_3212_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33(void){
_start:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3215_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__32));
v___x_3216_ = l_Lean_MessageData_ofFormat(v___x_3215_);
return v___x_3216_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35(void){
_start:
{
lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3218_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__34));
v___x_3219_ = l_Lean_stringToMessageData(v___x_3218_);
return v___x_3219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2(lean_object* v_suggestions_3221_, uint8_t v_forceList_3222_, lean_object* v_codeActionPrefix_x3f_3223_, lean_object* v_ref_3224_, lean_object* v_as_3225_, size_t v_sz_3226_, size_t v_i_3227_, lean_object* v_b_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_){
_start:
{
lean_object* v_a_3233_; lean_object* v___y_3238_; lean_object* v___y_3242_; lean_object* v___y_3250_; lean_object* v___y_3251_; lean_object* v___y_3252_; lean_object* v___y_3257_; lean_object* v___y_3258_; lean_object* v___y_3259_; lean_object* v___y_3260_; uint8_t v___x_3277_; 
v___x_3277_ = lean_usize_dec_lt(v_i_3227_, v_sz_3226_);
if (v___x_3277_ == 0)
{
lean_object* v___x_3278_; 
lean_dec(v_ref_3224_);
lean_dec(v_codeActionPrefix_x3f_3223_);
v___x_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3278_, 0, v_b_3228_);
return v___x_3278_;
}
else
{
lean_object* v_a_3279_; lean_object* v_toTryThisSuggestion_3280_; lean_object* v_span_x3f_3281_; lean_object* v_previewSpan_x3f_3282_; uint8_t v_diffGranularity_3283_; lean_object* v___x_3284_; lean_object* v___y_3286_; uint8_t v___y_3287_; lean_object* v___y_3288_; lean_object* v___y_3289_; lean_object* v___y_3290_; lean_object* v___y_3291_; lean_object* v___y_3315_; uint8_t v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; uint8_t v___y_3361_; lean_object* v___y_3362_; lean_object* v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; uint8_t v___y_3368_; lean_object* v___y_3369_; uint8_t v___y_3372_; lean_object* v___y_3373_; lean_object* v___y_3374_; lean_object* v_postInfo_x3f_3375_; lean_object* v___y_3376_; lean_object* v___y_3377_; lean_object* v___y_3378_; uint8_t v___y_3379_; lean_object* v___y_3380_; uint8_t v___y_3383_; lean_object* v___y_3384_; lean_object* v___y_3385_; lean_object* v___y_3386_; lean_object* v___y_3387_; uint8_t v___y_3388_; lean_object* v_edits_3389_; uint8_t v___y_3395_; lean_object* v___y_3396_; lean_object* v___y_3397_; lean_object* v___y_3398_; lean_object* v___y_3399_; lean_object* v___y_3400_; lean_object* v_stop_3401_; lean_object* v___y_3402_; uint8_t v___y_3403_; lean_object* v_edits_3404_; lean_object* v___y_3415_; uint8_t v___y_3416_; lean_object* v___y_3417_; lean_object* v___y_3418_; lean_object* v___y_3419_; lean_object* v___y_3420_; lean_object* v___y_3421_; lean_object* v___y_3422_; uint8_t v___y_3423_; lean_object* v_edits_3424_; lean_object* v___y_3425_; lean_object* v___x_3451_; uint8_t v___y_3453_; lean_object* v___y_3454_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3458_; lean_object* v___y_3459_; lean_object* v___y_3460_; uint8_t v___y_3461_; lean_object* v___y_3462_; lean_object* v___y_3499_; uint8_t v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; uint8_t v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3517_; 
v_a_3279_ = lean_array_uget_borrowed(v_as_3225_, v_i_3227_);
v_toTryThisSuggestion_3280_ = lean_ctor_get(v_a_3279_, 0);
v_span_x3f_3281_ = lean_ctor_get(v_a_3279_, 1);
v_previewSpan_x3f_3282_ = lean_ctor_get(v_a_3279_, 2);
v_diffGranularity_3283_ = lean_ctor_get_uint8(v_a_3279_, sizeof(void*)*3);
v___x_3284_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v___x_3451_ = l_Lean_Meta_Tactic_TryThis_instImpl_00___x40_Lean_Meta_TryThis_3141183573____hygCtx___hyg_12_;
if (lean_obj_tag(v_span_x3f_3281_) == 0)
{
lean_inc(v_ref_3224_);
v___y_3517_ = v_ref_3224_;
goto v___jp_3516_;
}
else
{
lean_object* v_val_3535_; 
v_val_3535_ = lean_ctor_get(v_span_x3f_3281_, 0);
lean_inc(v_val_3535_);
v___y_3517_ = v_val_3535_;
goto v___jp_3516_;
}
v___jp_3285_:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___f_3306_; 
lean_inc_ref(v___y_3291_);
v___x_3292_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffJson(v___y_3291_);
v___x_3293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__9));
v___x_3294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3293_);
lean_ctor_set(v___x_3294_, 1, v___x_3292_);
v___x_3295_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10));
v___x_3296_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3296_, 0, v___y_3290_);
v___x_3297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3297_, 0, v___x_3295_);
lean_ctor_set(v___x_3297_, 1, v___x_3296_);
v___x_3298_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11));
v___x_3299_ = l_Lean_Lsp_instToJsonRange_toJson(v___y_3289_);
v___x_3300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3298_);
lean_ctor_set(v___x_3300_, 1, v___x_3299_);
v___x_3301_ = lean_box(0);
v___x_3302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3302_, 0, v___x_3300_);
lean_ctor_set(v___x_3302_, 1, v___x_3301_);
v___x_3303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3297_);
lean_ctor_set(v___x_3303_, 1, v___x_3302_);
v___x_3304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3294_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
v___x_3305_ = l_Lean_Json_mkObj(v___x_3304_);
lean_dec_ref_known(v___x_3304_, 2);
v___f_3306_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___lam__0), 2, 1);
lean_closure_set(v___f_3306_, 0, v___x_3305_);
if (v___y_3287_ == 0)
{
lean_object* v___x_3307_; 
v___x_3307_ = l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString(v___y_3291_);
v___y_3257_ = v___f_3306_;
v___y_3258_ = v___y_3286_;
v___y_3259_ = v___y_3288_;
v___y_3260_ = v___x_3307_;
goto v___jp_3256_;
}
else
{
lean_object* v___x_3308_; lean_object* v___x_3309_; uint8_t v___x_3310_; 
v___x_3308_ = lean_unsigned_to_nat(0u);
v___x_3309_ = lean_array_get_size(v___y_3291_);
v___x_3310_ = lean_nat_dec_lt(v___x_3308_, v___x_3309_);
if (v___x_3310_ == 0)
{
lean_dec_ref(v___y_3291_);
v___y_3257_ = v___f_3306_;
v___y_3258_ = v___y_3286_;
v___y_3259_ = v___y_3288_;
v___y_3260_ = v___x_3284_;
goto v___jp_3256_;
}
else
{
size_t v___x_3311_; size_t v___x_3312_; lean_object* v___x_3313_; 
v___x_3311_ = ((size_t)0ULL);
v___x_3312_ = lean_usize_of_nat(v___x_3309_);
v___x_3313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__0(v___y_3291_, v___x_3311_, v___x_3312_, v___x_3284_);
lean_dec_ref(v___y_3291_);
v___y_3257_ = v___f_3306_;
v___y_3258_ = v___y_3286_;
v___y_3259_ = v___y_3288_;
v___y_3260_ = v___x_3313_;
goto v___jp_3256_;
}
}
}
v___jp_3314_:
{
if (lean_obj_tag(v___y_3317_) == 0)
{
lean_object* v___x_3323_; uint64_t v_javascriptHash_3324_; lean_object* v_suggestion_3325_; lean_object* v_messageData_x3f_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___f_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
lean_dec_ref(v___y_3319_);
v___x_3323_ = ((lean_object*)(l_Lean_Meta_Hint_textInsertionWidget));
v_javascriptHash_3324_ = lean_ctor_get_uint64(v___x_3323_, sizeof(void*)*1);
v_suggestion_3325_ = lean_ctor_get(v___y_3318_, 0);
lean_inc_ref(v_suggestion_3325_);
v_messageData_x3f_3326_ = lean_ctor_get(v___y_3318_, 4);
lean_inc(v_messageData_x3f_3326_);
lean_dec_ref(v___y_3318_);
v___x_3327_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__18));
v___x_3328_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__11));
v___x_3329_ = l_Lean_Lsp_instToJsonRange_toJson(v___y_3322_);
v___x_3330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3328_);
lean_ctor_set(v___x_3330_, 1, v___x_3329_);
v___x_3331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__10));
v___x_3332_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3332_, 0, v___y_3321_);
v___x_3333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3331_);
lean_ctor_set(v___x_3333_, 1, v___x_3332_);
v___x_3334_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__31);
v___x_3335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3333_);
lean_ctor_set(v___x_3335_, 1, v___x_3334_);
v___x_3336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3330_);
lean_ctor_set(v___x_3336_, 1, v___x_3335_);
v___x_3337_ = l_Lean_Json_mkObj(v___x_3336_);
lean_dec_ref_known(v___x_3336_, 2);
v___f_3338_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___lam__0), 2, 1);
lean_closure_set(v___f_3338_, 0, v___x_3337_);
v___x_3339_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_3339_, 0, v___x_3327_);
lean_ctor_set(v___x_3339_, 1, v___f_3338_);
lean_ctor_set_uint64(v___x_3339_, sizeof(void*)*2, v_javascriptHash_3324_);
v___x_3340_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__33);
v___x_3341_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3339_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1);
v___x_3343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
lean_ctor_set(v___x_3343_, 1, v___x_3341_);
v___x_3344_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__35);
v___x_3345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3343_);
lean_ctor_set(v___x_3345_, 1, v___x_3344_);
v___x_3346_ = l_Lean_stringToMessageData(v___y_3320_);
v___x_3347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3345_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
if (lean_obj_tag(v_messageData_x3f_3326_) == 0)
{
if (lean_obj_tag(v_suggestion_3325_) == 0)
{
lean_object* v_a_3348_; lean_object* v___x_3349_; 
v_a_3348_ = lean_ctor_get(v_suggestion_3325_, 1);
lean_inc(v_a_3348_);
lean_dec_ref_known(v_suggestion_3325_, 2);
v___x_3349_ = l_Lean_MessageData_ofSyntax(v_a_3348_);
v___y_3250_ = v___y_3315_;
v___y_3251_ = v___x_3347_;
v___y_3252_ = v___x_3349_;
goto v___jp_3249_;
}
else
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3358_; 
v_a_3350_ = lean_ctor_get(v_suggestion_3325_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v_suggestion_3325_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3352_ = v_suggestion_3325_;
v_isShared_3353_ = v_isSharedCheck_3358_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v_suggestion_3325_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3358_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3355_; 
if (v_isShared_3353_ == 0)
{
lean_ctor_set_tag(v___x_3352_, 3);
v___x_3355_ = v___x_3352_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v_a_3350_);
v___x_3355_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
lean_object* v___x_3356_; 
v___x_3356_ = l_Lean_MessageData_ofFormat(v___x_3355_);
v___y_3250_ = v___y_3315_;
v___y_3251_ = v___x_3347_;
v___y_3252_ = v___x_3356_;
goto v___jp_3249_;
}
}
}
}
else
{
lean_object* v_val_3359_; 
lean_dec_ref(v_suggestion_3325_);
v_val_3359_ = lean_ctor_get(v_messageData_x3f_3326_, 0);
lean_inc(v_val_3359_);
lean_dec_ref_known(v_messageData_x3f_3326_, 1);
v___y_3250_ = v___y_3315_;
v___y_3251_ = v___x_3347_;
v___y_3252_ = v_val_3359_;
goto v___jp_3249_;
}
}
else
{
lean_dec_ref_known(v___y_3317_, 1);
lean_dec_ref(v___y_3318_);
v___y_3286_ = v___y_3315_;
v___y_3287_ = v___y_3316_;
v___y_3288_ = v___y_3320_;
v___y_3289_ = v___y_3322_;
v___y_3290_ = v___y_3321_;
v___y_3291_ = v___y_3319_;
goto v___jp_3285_;
}
}
v___jp_3360_:
{
if (v___y_3361_ == 4)
{
v___y_3315_ = v___y_3369_;
v___y_3316_ = v___x_3277_;
v___y_3317_ = v___y_3362_;
v___y_3318_ = v___y_3363_;
v___y_3319_ = v___y_3367_;
v___y_3320_ = v___y_3364_;
v___y_3321_ = v___y_3366_;
v___y_3322_ = v___y_3365_;
goto v___jp_3314_;
}
else
{
if (v___y_3368_ == 0)
{
lean_object* v_messageData_x3f_3370_; 
v_messageData_x3f_3370_ = lean_ctor_get(v___y_3363_, 4);
if (lean_obj_tag(v_messageData_x3f_3370_) == 0)
{
lean_dec_ref(v___y_3363_);
lean_dec(v___y_3362_);
v___y_3286_ = v___y_3369_;
v___y_3287_ = v___y_3368_;
v___y_3288_ = v___y_3364_;
v___y_3289_ = v___y_3365_;
v___y_3290_ = v___y_3366_;
v___y_3291_ = v___y_3367_;
goto v___jp_3285_;
}
else
{
v___y_3315_ = v___y_3369_;
v___y_3316_ = v___y_3368_;
v___y_3317_ = v___y_3362_;
v___y_3318_ = v___y_3363_;
v___y_3319_ = v___y_3367_;
v___y_3320_ = v___y_3364_;
v___y_3321_ = v___y_3366_;
v___y_3322_ = v___y_3365_;
goto v___jp_3314_;
}
}
else
{
v___y_3315_ = v___y_3369_;
v___y_3316_ = v___y_3368_;
v___y_3317_ = v___y_3362_;
v___y_3318_ = v___y_3363_;
v___y_3319_ = v___y_3367_;
v___y_3320_ = v___y_3364_;
v___y_3321_ = v___y_3366_;
v___y_3322_ = v___y_3365_;
goto v___jp_3314_;
}
}
}
v___jp_3371_:
{
if (lean_obj_tag(v_postInfo_x3f_3375_) == 0)
{
v___y_3361_ = v___y_3372_;
v___y_3362_ = v___y_3373_;
v___y_3363_ = v___y_3374_;
v___y_3364_ = v___y_3380_;
v___y_3365_ = v___y_3378_;
v___y_3366_ = v___y_3377_;
v___y_3367_ = v___y_3376_;
v___y_3368_ = v___y_3379_;
v___y_3369_ = v___x_3284_;
goto v___jp_3360_;
}
else
{
lean_object* v_val_3381_; 
v_val_3381_ = lean_ctor_get(v_postInfo_x3f_3375_, 0);
lean_inc(v_val_3381_);
lean_dec_ref_known(v_postInfo_x3f_3375_, 1);
v___y_3361_ = v___y_3372_;
v___y_3362_ = v___y_3373_;
v___y_3363_ = v___y_3374_;
v___y_3364_ = v___y_3380_;
v___y_3365_ = v___y_3378_;
v___y_3366_ = v___y_3377_;
v___y_3367_ = v___y_3376_;
v___y_3368_ = v___y_3379_;
v___y_3369_ = v_val_3381_;
goto v___jp_3360_;
}
}
v___jp_3382_:
{
lean_object* v_preInfo_x3f_3390_; 
v_preInfo_x3f_3390_ = lean_ctor_get(v___y_3385_, 1);
if (lean_obj_tag(v_preInfo_x3f_3390_) == 0)
{
lean_object* v_postInfo_x3f_3391_; 
v_postInfo_x3f_3391_ = lean_ctor_get(v___y_3385_, 2);
lean_inc(v_postInfo_x3f_3391_);
v___y_3372_ = v___y_3383_;
v___y_3373_ = v___y_3384_;
v___y_3374_ = v___y_3385_;
v_postInfo_x3f_3375_ = v_postInfo_x3f_3391_;
v___y_3376_ = v_edits_3389_;
v___y_3377_ = v___y_3387_;
v___y_3378_ = v___y_3386_;
v___y_3379_ = v___y_3388_;
v___y_3380_ = v___x_3284_;
goto v___jp_3371_;
}
else
{
lean_object* v_postInfo_x3f_3392_; lean_object* v_val_3393_; 
v_postInfo_x3f_3392_ = lean_ctor_get(v___y_3385_, 2);
lean_inc(v_postInfo_x3f_3392_);
v_val_3393_ = lean_ctor_get(v_preInfo_x3f_3390_, 0);
lean_inc(v_val_3393_);
v___y_3372_ = v___y_3383_;
v___y_3373_ = v___y_3384_;
v___y_3374_ = v___y_3385_;
v_postInfo_x3f_3375_ = v_postInfo_x3f_3392_;
v___y_3376_ = v_edits_3389_;
v___y_3377_ = v___y_3387_;
v___y_3378_ = v___y_3386_;
v___y_3379_ = v___y_3388_;
v___y_3380_ = v_val_3393_;
goto v___jp_3371_;
}
}
v___jp_3394_:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; uint8_t v___x_3407_; 
v___x_3405_ = lean_unsigned_to_nat(1u);
v___x_3406_ = lean_nat_add(v___y_3396_, v___x_3405_);
v___x_3407_ = lean_nat_dec_le(v___x_3406_, v_stop_3401_);
lean_dec(v___x_3406_);
if (v___x_3407_ == 0)
{
lean_dec(v_stop_3401_);
lean_dec(v___y_3396_);
v___y_3383_ = v___y_3395_;
v___y_3384_ = v___y_3397_;
v___y_3385_ = v___y_3398_;
v___y_3386_ = v___y_3400_;
v___y_3387_ = v___y_3399_;
v___y_3388_ = v___y_3403_;
v_edits_3389_ = v_edits_3404_;
goto v___jp_3382_;
}
else
{
lean_object* v_source_3408_; uint8_t v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; 
v_source_3408_ = lean_ctor_get(v___y_3402_, 0);
v___x_3409_ = 2;
v___x_3410_ = lean_string_utf8_extract(v_source_3408_, v___y_3396_, v_stop_3401_);
lean_dec(v_stop_3401_);
lean_dec(v___y_3396_);
v___x_3411_ = lean_box(v___x_3409_);
v___x_3412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3411_);
lean_ctor_set(v___x_3412_, 1, v___x_3410_);
v___x_3413_ = lean_array_push(v_edits_3404_, v___x_3412_);
v___y_3383_ = v___y_3395_;
v___y_3384_ = v___y_3397_;
v___y_3385_ = v___y_3398_;
v___y_3386_ = v___y_3400_;
v___y_3387_ = v___y_3399_;
v___y_3388_ = v___y_3403_;
v_edits_3389_ = v___x_3413_;
goto v___jp_3382_;
}
}
v___jp_3414_:
{
if (lean_obj_tag(v___y_3418_) == 0)
{
lean_dec_ref(v___y_3419_);
lean_dec(v___y_3417_);
lean_dec(v___y_3415_);
v___y_3383_ = v___y_3416_;
v___y_3384_ = v___y_3418_;
v___y_3385_ = v___y_3420_;
v___y_3386_ = v___y_3422_;
v___y_3387_ = v___y_3421_;
v___y_3388_ = v___y_3423_;
v_edits_3389_ = v_edits_3424_;
goto v___jp_3382_;
}
else
{
lean_object* v_val_3426_; lean_object* v___x_3427_; 
v_val_3426_ = lean_ctor_get(v___y_3418_, 0);
v___x_3427_ = l_Lean_Syntax_getRange_x3f(v_val_3426_, v___y_3423_);
if (lean_obj_tag(v___x_3427_) == 1)
{
lean_object* v_val_3428_; uint8_t v___x_3429_; 
v_val_3428_ = lean_ctor_get(v___x_3427_, 0);
lean_inc(v_val_3428_);
lean_dec_ref_known(v___x_3427_, 1);
v___x_3429_ = l_Lean_Syntax_Range_includes(v_val_3428_, v___y_3419_, v___y_3423_, v___y_3423_);
lean_dec_ref(v___y_3419_);
if (v___x_3429_ == 0)
{
lean_dec(v_val_3428_);
lean_dec(v___y_3417_);
lean_dec(v___y_3415_);
v___y_3383_ = v___y_3416_;
v___y_3384_ = v___y_3418_;
v___y_3385_ = v___y_3420_;
v___y_3386_ = v___y_3422_;
v___y_3387_ = v___y_3421_;
v___y_3388_ = v___y_3423_;
v_edits_3389_ = v_edits_3424_;
goto v___jp_3382_;
}
else
{
lean_object* v_toCold_3430_; lean_object* v_fileMap_3431_; lean_object* v_start_3432_; lean_object* v_stop_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3450_; 
v_toCold_3430_ = lean_ctor_get(v___y_3425_, 0);
v_fileMap_3431_ = lean_ctor_get(v_toCold_3430_, 1);
v_start_3432_ = lean_ctor_get(v_val_3428_, 0);
v_stop_3433_ = lean_ctor_get(v_val_3428_, 1);
v_isSharedCheck_3450_ = !lean_is_exclusive(v_val_3428_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3435_ = v_val_3428_;
v_isShared_3436_ = v_isSharedCheck_3450_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_stop_3433_);
lean_inc(v_start_3432_);
lean_dec(v_val_3428_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3450_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3437_; lean_object* v___x_3438_; uint8_t v___x_3439_; 
v___x_3437_ = lean_unsigned_to_nat(1u);
v___x_3438_ = lean_nat_add(v_start_3432_, v___x_3437_);
v___x_3439_ = lean_nat_dec_le(v___x_3438_, v___y_3415_);
lean_dec(v___x_3438_);
if (v___x_3439_ == 0)
{
lean_del_object(v___x_3435_);
lean_dec(v_start_3432_);
lean_dec(v___y_3415_);
v___y_3395_ = v___y_3416_;
v___y_3396_ = v___y_3417_;
v___y_3397_ = v___y_3418_;
v___y_3398_ = v___y_3420_;
v___y_3399_ = v___y_3421_;
v___y_3400_ = v___y_3422_;
v_stop_3401_ = v_stop_3433_;
v___y_3402_ = v_fileMap_3431_;
v___y_3403_ = v___y_3423_;
v_edits_3404_ = v_edits_3424_;
goto v___jp_3394_;
}
else
{
lean_object* v_source_3440_; uint8_t v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3445_; 
v_source_3440_ = lean_ctor_get(v_fileMap_3431_, 0);
v___x_3441_ = 2;
v___x_3442_ = lean_string_utf8_extract(v_source_3440_, v_start_3432_, v___y_3415_);
lean_dec(v___y_3415_);
lean_dec(v_start_3432_);
v___x_3443_ = lean_box(v___x_3441_);
if (v_isShared_3436_ == 0)
{
lean_ctor_set(v___x_3435_, 1, v___x_3442_);
lean_ctor_set(v___x_3435_, 0, v___x_3443_);
v___x_3445_ = v___x_3435_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3443_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v___x_3442_);
v___x_3445_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3446_ = lean_mk_empty_array_with_capacity(v___x_3437_);
v___x_3447_ = lean_array_push(v___x_3446_, v___x_3445_);
v___x_3448_ = l_Array_append___redArg(v___x_3447_, v_edits_3424_);
lean_dec_ref(v_edits_3424_);
v___y_3395_ = v___y_3416_;
v___y_3396_ = v___y_3417_;
v___y_3397_ = v___y_3418_;
v___y_3398_ = v___y_3420_;
v___y_3399_ = v___y_3421_;
v___y_3400_ = v___y_3422_;
v_stop_3401_ = v_stop_3433_;
v___y_3402_ = v_fileMap_3431_;
v___y_3403_ = v___y_3423_;
v_edits_3404_ = v___x_3448_;
goto v___jp_3394_;
}
}
}
}
}
else
{
lean_dec(v___x_3427_);
lean_dec_ref(v___y_3419_);
lean_dec(v___y_3417_);
lean_dec(v___y_3415_);
v___y_3383_ = v___y_3416_;
v___y_3384_ = v___y_3418_;
v___y_3385_ = v___y_3420_;
v___y_3386_ = v___y_3422_;
v___y_3387_ = v___y_3421_;
v___y_3388_ = v___y_3423_;
v_edits_3389_ = v_edits_3424_;
goto v___jp_3382_;
}
}
}
v___jp_3452_:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; 
lean_inc_ref(v___y_3457_);
v___x_3463_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3463_, 0, v___y_3454_);
lean_ctor_set(v___x_3463_, 1, v___y_3462_);
lean_ctor_set(v___x_3463_, 2, v___y_3457_);
v___x_3464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3451_);
lean_ctor_set(v___x_3464_, 1, v___x_3463_);
v___x_3465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3465_, 0, v___y_3458_);
lean_ctor_set(v___x_3465_, 1, v___x_3464_);
v___x_3466_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3465_);
v___x_3467_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1(v___x_3466_, v___y_3229_, v___y_3230_);
if (lean_obj_tag(v___x_3467_) == 0)
{
lean_object* v_messageData_x3f_3468_; 
lean_dec_ref_known(v___x_3467_, 1);
v_messageData_x3f_3468_ = lean_ctor_get(v___y_3457_, 4);
if (lean_obj_tag(v_messageData_x3f_3468_) == 1)
{
lean_object* v_start_3469_; lean_object* v_stop_3470_; lean_object* v_val_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; uint8_t v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v_start_3469_ = lean_ctor_get(v___y_3456_, 0);
lean_inc(v_start_3469_);
v_stop_3470_ = lean_ctor_get(v___y_3456_, 1);
lean_inc(v_stop_3470_);
v_val_3471_ = lean_ctor_get(v_messageData_x3f_3468_, 0);
v___x_3472_ = lean_box(0);
lean_inc(v_val_3471_);
v___x_3473_ = l_Lean_MessageData_format(v_val_3471_, v___x_3472_);
v___x_3474_ = 0;
v___x_3475_ = l_Std_Format_defWidth;
v___x_3476_ = lean_unsigned_to_nat(0u);
v___x_3477_ = l_Std_Format_pretty(v___x_3473_, v___x_3475_, v___x_3476_, v___x_3476_);
v___x_3478_ = lean_box(v___x_3474_);
v___x_3479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3478_);
lean_ctor_set(v___x_3479_, 1, v___x_3477_);
v___x_3480_ = lean_unsigned_to_nat(1u);
v___x_3481_ = lean_mk_empty_array_with_capacity(v___x_3480_);
v___x_3482_ = lean_array_push(v___x_3481_, v___x_3479_);
v___y_3415_ = v_start_3469_;
v___y_3416_ = v___y_3453_;
v___y_3417_ = v_stop_3470_;
v___y_3418_ = v___y_3455_;
v___y_3419_ = v___y_3456_;
v___y_3420_ = v___y_3457_;
v___y_3421_ = v___y_3460_;
v___y_3422_ = v___y_3459_;
v___y_3423_ = v___y_3461_;
v_edits_3424_ = v___x_3482_;
v___y_3425_ = v___y_3229_;
goto v___jp_3414_;
}
else
{
lean_object* v_toCold_3483_; lean_object* v_fileMap_3484_; lean_object* v_start_3485_; lean_object* v_stop_3486_; lean_object* v_source_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v_toCold_3483_ = lean_ctor_get(v___y_3229_, 0);
v_fileMap_3484_ = lean_ctor_get(v_toCold_3483_, 1);
v_start_3485_ = lean_ctor_get(v___y_3456_, 0);
lean_inc(v_start_3485_);
v_stop_3486_ = lean_ctor_get(v___y_3456_, 1);
lean_inc(v_stop_3486_);
v_source_3487_ = lean_ctor_get(v_fileMap_3484_, 0);
v___x_3488_ = lean_string_utf8_extract(v_source_3487_, v_start_3485_, v_stop_3486_);
lean_inc_ref(v___y_3460_);
v___x_3489_ = l_Lean_Meta_Hint_readableDiff(v___x_3488_, v___y_3460_, v___y_3453_);
v___y_3415_ = v_start_3485_;
v___y_3416_ = v___y_3453_;
v___y_3417_ = v_stop_3486_;
v___y_3418_ = v___y_3455_;
v___y_3419_ = v___y_3456_;
v___y_3420_ = v___y_3457_;
v___y_3421_ = v___y_3460_;
v___y_3422_ = v___y_3459_;
v___y_3423_ = v___y_3461_;
v_edits_3424_ = v___x_3489_;
v___y_3425_ = v___y_3229_;
goto v___jp_3414_;
}
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
lean_dec_ref(v___y_3460_);
lean_dec_ref(v___y_3459_);
lean_dec_ref(v___y_3457_);
lean_dec_ref(v___y_3456_);
lean_dec(v___y_3455_);
lean_dec_ref(v_b_3228_);
lean_dec(v_ref_3224_);
lean_dec(v_codeActionPrefix_x3f_3223_);
v_a_3490_ = lean_ctor_get(v___x_3467_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3467_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v___x_3467_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3467_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
}
v___jp_3498_:
{
lean_object* v_toCodeActionTitle_x3f_3508_; lean_object* v___x_3509_; 
v_toCodeActionTitle_x3f_3508_ = lean_ctor_get(v___y_3503_, 5);
v___x_3509_ = l_Lean_Syntax_ofRange(v___y_3507_, v___x_3277_);
if (lean_obj_tag(v_toCodeActionTitle_x3f_3508_) == 0)
{
if (lean_obj_tag(v_codeActionPrefix_x3f_3223_) == 0)
{
lean_object* v___x_3510_; lean_object* v___x_3511_; 
v___x_3510_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__36));
v___x_3511_ = lean_string_append(v___x_3510_, v___y_3504_);
v___y_3453_ = v___y_3500_;
v___y_3454_ = v___y_3499_;
v___y_3455_ = v___y_3501_;
v___y_3456_ = v___y_3502_;
v___y_3457_ = v___y_3503_;
v___y_3458_ = v___x_3509_;
v___y_3459_ = v___y_3505_;
v___y_3460_ = v___y_3504_;
v___y_3461_ = v___y_3506_;
v___y_3462_ = v___x_3511_;
goto v___jp_3452_;
}
else
{
lean_object* v_val_3512_; lean_object* v___x_3513_; 
v_val_3512_ = lean_ctor_get(v_codeActionPrefix_x3f_3223_, 0);
lean_inc(v_val_3512_);
v___x_3513_ = lean_string_append(v_val_3512_, v___y_3504_);
v___y_3453_ = v___y_3500_;
v___y_3454_ = v___y_3499_;
v___y_3455_ = v___y_3501_;
v___y_3456_ = v___y_3502_;
v___y_3457_ = v___y_3503_;
v___y_3458_ = v___x_3509_;
v___y_3459_ = v___y_3505_;
v___y_3460_ = v___y_3504_;
v___y_3461_ = v___y_3506_;
v___y_3462_ = v___x_3513_;
goto v___jp_3452_;
}
}
else
{
lean_object* v_val_3514_; lean_object* v___x_3515_; 
v_val_3514_ = lean_ctor_get(v_toCodeActionTitle_x3f_3508_, 0);
lean_inc(v_val_3514_);
lean_inc_ref(v___y_3504_);
v___x_3515_ = lean_apply_1(v_val_3514_, v___y_3504_);
v___y_3453_ = v___y_3500_;
v___y_3454_ = v___y_3499_;
v___y_3455_ = v___y_3501_;
v___y_3456_ = v___y_3502_;
v___y_3457_ = v___y_3503_;
v___y_3458_ = v___x_3509_;
v___y_3459_ = v___y_3505_;
v___y_3460_ = v___y_3504_;
v___y_3461_ = v___y_3506_;
v___y_3462_ = v___x_3515_;
goto v___jp_3452_;
}
}
v___jp_3516_:
{
uint8_t v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = 0;
v___x_3519_ = l_Lean_Syntax_getRange_x3f(v___y_3517_, v___x_3518_);
lean_dec(v___y_3517_);
if (lean_obj_tag(v___x_3519_) == 1)
{
lean_object* v_val_3520_; lean_object* v___x_3521_; 
v_val_3520_ = lean_ctor_get(v___x_3519_, 0);
lean_inc_n(v_val_3520_, 2);
lean_dec_ref_known(v___x_3519_, 1);
lean_inc_ref(v_toTryThisSuggestion_3280_);
v___x_3521_ = l_Lean_Meta_Tactic_TryThis_Suggestion_processEdit(v_toTryThisSuggestion_3280_, v_val_3520_, v___y_3229_, v___y_3230_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; lean_object* v_range_3523_; lean_object* v_newText_3524_; lean_object* v___x_3525_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3521_, 1);
v_range_3523_ = lean_ctor_get(v_a_3522_, 0);
lean_inc_ref(v_range_3523_);
v_newText_3524_ = lean_ctor_get(v_a_3522_, 1);
lean_inc_ref(v_newText_3524_);
v___x_3525_ = l_Lean_Syntax_getRange_x3f(v_ref_3224_, v___x_3518_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_inc_ref(v_toTryThisSuggestion_3280_);
lean_inc(v_val_3520_);
lean_inc(v_previewSpan_x3f_3282_);
v___y_3499_ = v_a_3522_;
v___y_3500_ = v_diffGranularity_3283_;
v___y_3501_ = v_previewSpan_x3f_3282_;
v___y_3502_ = v_val_3520_;
v___y_3503_ = v_toTryThisSuggestion_3280_;
v___y_3504_ = v_newText_3524_;
v___y_3505_ = v_range_3523_;
v___y_3506_ = v___x_3518_;
v___y_3507_ = v_val_3520_;
goto v___jp_3498_;
}
else
{
lean_object* v_val_3526_; 
v_val_3526_ = lean_ctor_get(v___x_3525_, 0);
lean_inc(v_val_3526_);
lean_dec_ref_known(v___x_3525_, 1);
lean_inc_ref(v_toTryThisSuggestion_3280_);
lean_inc(v_previewSpan_x3f_3282_);
v___y_3499_ = v_a_3522_;
v___y_3500_ = v_diffGranularity_3283_;
v___y_3501_ = v_previewSpan_x3f_3282_;
v___y_3502_ = v_val_3520_;
v___y_3503_ = v_toTryThisSuggestion_3280_;
v___y_3504_ = v_newText_3524_;
v___y_3505_ = v_range_3523_;
v___y_3506_ = v___x_3518_;
v___y_3507_ = v_val_3526_;
goto v___jp_3498_;
}
}
else
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3534_; 
lean_dec(v_val_3520_);
lean_dec_ref(v_b_3228_);
lean_dec(v_ref_3224_);
lean_dec(v_codeActionPrefix_x3f_3223_);
v_a_3527_ = lean_ctor_get(v___x_3521_, 0);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3529_ = v___x_3521_;
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v___x_3521_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3532_; 
if (v_isShared_3530_ == 0)
{
v___x_3532_ = v___x_3529_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v_a_3527_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
}
else
{
lean_dec(v___x_3519_);
v_a_3233_ = v_b_3228_;
goto v___jp_3232_;
}
}
}
v___jp_3232_:
{
size_t v___x_3234_; size_t v___x_3235_; 
v___x_3234_ = ((size_t)1ULL);
v___x_3235_ = lean_usize_add(v_i_3227_, v___x_3234_);
v_i_3227_ = v___x_3235_;
v_b_3228_ = v_a_3233_;
goto _start;
}
v___jp_3237_:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3239_ = l_Lean_MessageData_nestD(v___y_3238_);
v___x_3240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3240_, 0, v_b_3228_);
lean_ctor_set(v___x_3240_, 1, v___x_3239_);
v_a_3233_ = v___x_3240_;
goto v___jp_3232_;
}
v___jp_3241_:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3243_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1);
v___x_3244_ = lean_unsigned_to_nat(2u);
v___x_3245_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__3);
v___x_3246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3245_);
lean_ctor_set(v___x_3246_, 1, v___y_3242_);
v___x_3247_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3244_);
lean_ctor_set(v___x_3247_, 1, v___x_3246_);
v___x_3248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3243_);
lean_ctor_set(v___x_3248_, 1, v___x_3247_);
v___y_3238_ = v___x_3248_;
goto v___jp_3237_;
}
v___jp_3249_:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
v___x_3253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___y_3251_);
lean_ctor_set(v___x_3253_, 1, v___y_3252_);
v___x_3254_ = l_Lean_stringToMessageData(v___y_3250_);
v___x_3255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3253_);
lean_ctor_set(v___x_3255_, 1, v___x_3254_);
v___y_3238_ = v___x_3255_;
goto v___jp_3237_;
}
v___jp_3256_:
{
lean_object* v___x_3261_; uint64_t v_javascriptHash_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; uint8_t v___x_3274_; 
v___x_3261_ = ((lean_object*)(l_Lean_Meta_Hint_tryThisDiffWidget));
v_javascriptHash_3262_ = lean_ctor_get_uint64(v___x_3261_, sizeof(void*)*1);
v___x_3263_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__8));
v___x_3264_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_3264_, 0, v___x_3263_);
lean_ctor_set(v___x_3264_, 1, v___y_3257_);
lean_ctor_set_uint64(v___x_3264_, sizeof(void*)*2, v_javascriptHash_3262_);
v___x_3265_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3265_, 0, v___y_3260_);
v___x_3266_ = l_Lean_MessageData_ofFormat(v___x_3265_);
v___x_3267_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3264_);
lean_ctor_set(v___x_3267_, 1, v___x_3266_);
v___x_3268_ = l_Lean_stringToMessageData(v___y_3259_);
v___x_3269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3268_);
lean_ctor_set(v___x_3269_, 1, v___x_3267_);
v___x_3270_ = l_Lean_stringToMessageData(v___y_3258_);
v___x_3271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3269_);
lean_ctor_set(v___x_3271_, 1, v___x_3270_);
v___x_3272_ = lean_array_get_size(v_suggestions_3221_);
v___x_3273_ = lean_unsigned_to_nat(1u);
v___x_3274_ = lean_nat_dec_eq(v___x_3272_, v___x_3273_);
if (v___x_3274_ == 0)
{
v___y_3242_ = v___x_3271_;
goto v___jp_3241_;
}
else
{
if (v_forceList_3222_ == 0)
{
lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3275_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___closed__1);
v___x_3276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3275_);
lean_ctor_set(v___x_3276_, 1, v___x_3271_);
v___y_3238_ = v___x_3276_;
goto v___jp_3237_;
}
else
{
v___y_3242_ = v___x_3271_;
goto v___jp_3241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2___boxed(lean_object* v_suggestions_3536_, lean_object* v_forceList_3537_, lean_object* v_codeActionPrefix_x3f_3538_, lean_object* v_ref_3539_, lean_object* v_as_3540_, lean_object* v_sz_3541_, lean_object* v_i_3542_, lean_object* v_b_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_){
_start:
{
uint8_t v_forceList_boxed_3547_; size_t v_sz_boxed_3548_; size_t v_i_boxed_3549_; lean_object* v_res_3550_; 
v_forceList_boxed_3547_ = lean_unbox(v_forceList_3537_);
v_sz_boxed_3548_ = lean_unbox_usize(v_sz_3541_);
lean_dec(v_sz_3541_);
v_i_boxed_3549_ = lean_unbox_usize(v_i_3542_);
lean_dec(v_i_3542_);
v_res_3550_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2(v_suggestions_3536_, v_forceList_boxed_3547_, v_codeActionPrefix_x3f_3538_, v_ref_3539_, v_as_3540_, v_sz_boxed_3548_, v_i_boxed_3549_, v_b_3543_, v___y_3544_, v___y_3545_);
lean_dec(v___y_3545_);
lean_dec_ref(v___y_3544_);
lean_dec_ref(v_as_3540_);
lean_dec_ref(v_suggestions_3536_);
return v_res_3550_;
}
}
static lean_object* _init_l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0(void){
_start:
{
lean_object* v___x_3551_; lean_object* v_msg_3552_; 
v___x_3551_ = ((lean_object*)(l___private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString___closed__0));
v_msg_3552_ = l_Lean_stringToMessageData(v___x_3551_);
return v_msg_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage(lean_object* v_suggestions_3553_, lean_object* v_ref_3554_, lean_object* v_codeActionPrefix_x3f_3555_, uint8_t v_forceList_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_){
_start:
{
lean_object* v_msg_3560_; size_t v_sz_3561_; size_t v___x_3562_; lean_object* v___x_3563_; 
v_msg_3560_ = lean_obj_once(&l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0, &l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0_once, _init_l_Lean_Meta_Hint_mkSuggestionsMessage___closed__0);
v_sz_3561_ = lean_array_size(v_suggestions_3553_);
v___x_3562_ = ((size_t)0ULL);
v___x_3563_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__2(v_suggestions_3553_, v_forceList_3556_, v_codeActionPrefix_x3f_3555_, v_ref_3554_, v_suggestions_3553_, v_sz_3561_, v___x_3562_, v_msg_3560_, v_a_3557_, v_a_3558_);
return v___x_3563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Hint_mkSuggestionsMessage___boxed(lean_object* v_suggestions_3564_, lean_object* v_ref_3565_, lean_object* v_codeActionPrefix_x3f_3566_, lean_object* v_forceList_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_){
_start:
{
uint8_t v_forceList_boxed_3571_; lean_object* v_res_3572_; 
v_forceList_boxed_3571_ = lean_unbox(v_forceList_3567_);
v_res_3572_ = l_Lean_Meta_Hint_mkSuggestionsMessage(v_suggestions_3564_, v_ref_3565_, v_codeActionPrefix_x3f_3566_, v_forceList_boxed_3571_, v_a_3568_, v_a_3569_);
lean_dec(v_a_3569_);
lean_dec_ref(v_a_3568_);
lean_dec_ref(v_suggestions_3564_);
return v_res_3572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1(lean_object* v_t_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_){
_start:
{
lean_object* v___x_3577_; 
v___x_3577_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___redArg(v_t_3573_, v___y_3575_);
return v___x_3577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1___boxed(lean_object* v_t_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
lean_object* v_res_3582_; 
v_res_3582_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Meta_Hint_mkSuggestionsMessage_spec__1_spec__1(v_t_3578_, v___y_3579_, v___y_3580_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
return v_res_3582_;
}
}
static lean_object* _init_l_Lean_MessageData_hint___closed__3(void){
_start:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3587_ = ((lean_object*)(l_Lean_MessageData_hint___closed__2));
v___x_3588_ = l_Lean_stringToMessageData(v___x_3587_);
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hint(lean_object* v_hint_3589_, lean_object* v_suggestions_3590_, lean_object* v_ref_x3f_3591_, lean_object* v_codeActionPrefix_x3f_3592_, uint8_t v_forceList_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_){
_start:
{
lean_object* v___y_3598_; 
if (lean_obj_tag(v_ref_x3f_3591_) == 0)
{
lean_object* v_ref_3613_; 
v_ref_3613_ = lean_ctor_get(v_a_3594_, 2);
lean_inc(v_ref_3613_);
v___y_3598_ = v_ref_3613_;
goto v___jp_3597_;
}
else
{
lean_object* v_val_3614_; 
v_val_3614_ = lean_ctor_get(v_ref_x3f_3591_, 0);
lean_inc(v_val_3614_);
lean_dec_ref_known(v_ref_x3f_3591_, 1);
v___y_3598_ = v_val_3614_;
goto v___jp_3597_;
}
v___jp_3597_:
{
lean_object* v___x_3599_; 
v___x_3599_ = l_Lean_Meta_Hint_mkSuggestionsMessage(v_suggestions_3590_, v___y_3598_, v_codeActionPrefix_x3f_3592_, v_forceList_3593_, v_a_3594_, v_a_3595_);
if (lean_obj_tag(v___x_3599_) == 0)
{
lean_object* v_a_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3612_; 
v_a_3600_ = lean_ctor_get(v___x_3599_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3599_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3602_ = v___x_3599_;
v_isShared_3603_ = v_isSharedCheck_3612_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_a_3600_);
lean_dec(v___x_3599_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3612_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3610_; 
v___x_3604_ = ((lean_object*)(l_Lean_MessageData_hint___closed__1));
v___x_3605_ = lean_obj_once(&l_Lean_MessageData_hint___closed__3, &l_Lean_MessageData_hint___closed__3_once, _init_l_Lean_MessageData_hint___closed__3);
v___x_3606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3606_, 0, v___x_3605_);
lean_ctor_set(v___x_3606_, 1, v_hint_3589_);
v___x_3607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3606_);
lean_ctor_set(v___x_3607_, 1, v_a_3600_);
v___x_3608_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3604_);
lean_ctor_set(v___x_3608_, 1, v___x_3607_);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 0, v___x_3608_);
v___x_3610_ = v___x_3602_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v___x_3608_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
else
{
lean_dec_ref(v_hint_3589_);
return v___x_3599_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hint___boxed(lean_object* v_hint_3615_, lean_object* v_suggestions_3616_, lean_object* v_ref_x3f_3617_, lean_object* v_codeActionPrefix_x3f_3618_, lean_object* v_forceList_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_){
_start:
{
uint8_t v_forceList_boxed_3623_; lean_object* v_res_3624_; 
v_forceList_boxed_3623_ = lean_unbox(v_forceList_3619_);
v_res_3624_ = l_Lean_MessageData_hint(v_hint_3615_, v_suggestions_3616_, v_ref_x3f_3617_, v_codeActionPrefix_x3f_3618_, v_forceList_boxed_3623_, v_a_3620_, v_a_3621_);
lean_dec(v_a_3621_);
lean_dec_ref(v_a_3620_);
lean_dec_ref(v_suggestions_3616_);
return v_res_3624_;
}
}
lean_object* runtime_initialize_Lean_Meta_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Diff(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Csimp(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Hint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Csimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1 = _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__1___closed__0___boxed__const__1);
l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1 = _init_l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_mkDiffString_spec__0___closed__0___boxed__const__1);
l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1 = _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1();
lean_mark_persistent(l___private_Init_While_0__repeatM_erased___at___00Lean_Diff_diff___at___00__private_Lean_Meta_Hint_0__Lean_Meta_Hint_readableDiff_mkWhitespaceDiff_spec__1_spec__2___redArg___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Hint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_TryThis(uint8_t builtin);
lean_object* initialize_Lean_Util_Diff(uint8_t builtin);
lean_object* initialize_Init_Data_String_Csimp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Hint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Csimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Hint(builtin);
}
#ifdef __cplusplus
}
#endif
