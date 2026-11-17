// Lean compiler output
// Module: Init.Meta.Defs
// Imports: import all Init.Prelude public import Init.Data.Array.Basic public import Init.MetaTypes import Init.Data.Array.GetLit import Init.Data.Char.Basic meta import Init.MetaTypes import Init.WFTactics
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
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_string_any(lean_object*, lean_object*);
lean_object* lean_substring_drop(lean_object*, lean_object*);
uint8_t lean_substring_all(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_string_contains(lean_object*, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t lean_string_isprefixof(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_string_isempty(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_string_nextwhile(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instReprSourceInfo_repr(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_substring_tostring(lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*, uint8_t);
uint32_t lean_substring_front(lean_object*);
uint8_t lean_substring_isempty(lean_object*);
lean_object* lean_substring_takewhile(lean_object*, lean_object*);
lean_object* lean_substring_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_pos_min(lean_object*, lean_object*);
lean_object* lean_substring_prev(lean_object*, lean_object*);
uint32_t lean_substring_get(lean_object*, lean_object*);
uint32_t lean_string_front(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00__private_Init_Prelude_0__Lean_assembleParts_spec__0(lean_object*);
lean_object* lean_string_drop(lean_object*, lean_object*);
lean_object* lean_string_dropright(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_substring_beq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Macro_expandMacro_x3f(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* lean_nat_pred(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Char_quote(uint32_t);
lean_object* lean_string_trim(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getTrailing_x3f(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntaxArray_mkImpl___boxed(lean_object*, lean_object*);
lean_object* lean_string_capitalize(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* lean_version_get_major(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMajor___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_major___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_major___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_major;
lean_object* lean_version_get_minor(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMinor___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_minor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_minor___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_minor;
lean_object* lean_version_get_patch(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getPatch___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_patch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_patch___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_patch;
lean_object* lean_get_githash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getGithash___boxed(lean_object*);
static lean_once_cell_t l_Lean_githash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_githash___closed__0;
LEAN_EXPORT lean_object* l_Lean_githash;
uint8_t lean_version_get_is_release(lean_object*);
LEAN_EXPORT lean_object* l_Lean_version_getIsRelease___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_isRelease___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_version_isRelease___closed__0;
LEAN_EXPORT uint8_t l_Lean_version_isRelease;
lean_object* lean_version_get_special_desc(lean_object*);
LEAN_EXPORT lean_object* l_Lean_version_getSpecialDesc___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_specialDesc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_specialDesc___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_specialDesc;
static lean_once_cell_t l_Lean_versionStringCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__0;
static const lean_string_object l_Lean_versionStringCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_versionStringCore___closed__1 = (const lean_object*)&l_Lean_versionStringCore___closed__1_value;
static lean_once_cell_t l_Lean_versionStringCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__2;
static lean_once_cell_t l_Lean_versionStringCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__3;
static lean_once_cell_t l_Lean_versionStringCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__4;
static lean_once_cell_t l_Lean_versionStringCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__5;
static lean_once_cell_t l_Lean_versionStringCore___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__6;
static lean_once_cell_t l_Lean_versionStringCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__7;
LEAN_EXPORT lean_object* l_Lean_versionStringCore;
static const lean_string_object l_Lean_versionString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_versionString___closed__0 = (const lean_object*)&l_Lean_versionString___closed__0_value;
static lean_once_cell_t l_Lean_versionString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_versionString___closed__1;
static const lean_string_object l_Lean_versionString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_versionString___closed__2 = (const lean_object*)&l_Lean_versionString___closed__2_value;
static lean_once_cell_t l_Lean_versionString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__3;
static lean_once_cell_t l_Lean_versionString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__4;
static const lean_string_object l_Lean_versionString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", commit "};
static const lean_object* l_Lean_versionString___closed__5 = (const lean_object*)&l_Lean_versionString___closed__5_value;
static lean_once_cell_t l_Lean_versionString___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__6;
static lean_once_cell_t l_Lean_versionString___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__7;
LEAN_EXPORT lean_object* l_Lean_versionString;
static const lean_string_object l_Lean_origin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "leanprover/lean4"};
static const lean_object* l_Lean_origin___closed__0 = (const lean_object*)&l_Lean_origin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_origin = (const lean_object*)&l_Lean_origin___closed__0_value;
static const lean_string_object l_Lean_toolchain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_toolchain___closed__0 = (const lean_object*)&l_Lean_toolchain___closed__0_value;
static lean_once_cell_t l_Lean_toolchain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__1;
static lean_once_cell_t l_Lean_toolchain___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__2;
static const lean_string_object l_Lean_toolchain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":v"};
static const lean_object* l_Lean_toolchain___closed__3 = (const lean_object*)&l_Lean_toolchain___closed__3_value;
static lean_once_cell_t l_Lean_toolchain___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__4;
static lean_once_cell_t l_Lean_toolchain___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__5;
static lean_once_cell_t l_Lean_toolchain___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__6;
static lean_once_cell_t l_Lean_toolchain___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__7;
LEAN_EXPORT lean_object* l_Lean_toolchain;
uint8_t lean_internal_is_stage0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Internal_isStage0___boxed(lean_object*);
uint8_t lean_internal_has_llvm_backend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Internal_hasLLVMBackend___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isGreek(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isGreek___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isLetterLike(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isLetterLike___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isNumericSubscript(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isNumericSubscript___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isSubScriptAlnum(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isSubScriptAlnum___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdFirst(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdFirst___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdFirstAscii(uint8_t);
LEAN_EXPORT lean_object* l_Lean_isIdFirstAscii___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdRest(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdRest___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdRestAscii(uint8_t);
LEAN_EXPORT lean_object* l_Lean_isIdRestAscii___boxed(lean_object*);
LEAN_EXPORT uint32_t l_Lean_idBeginEscape;
LEAN_EXPORT uint32_t l_Lean_idEndEscape;
LEAN_EXPORT uint8_t l_Lean_isIdBeginEscape(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdBeginEscape___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdEndEscape(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdEndEscape___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getRoot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getRoot___boxed(lean_object*);
static const lean_string_object l_Lean_Name_isInaccessibleUserName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "_inaccessible"};
static const lean_object* l_Lean_Name_isInaccessibleUserName___closed__0 = (const lean_object*)&l_Lean_Name_isInaccessibleUserName___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Name_isInaccessibleUserName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isInaccessibleUserName___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_isIdRest___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "«"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "»"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___boxed(lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_isIdEndEscape___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1___boxed(lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0_value;
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0_value;
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3_value;
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_hasNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_hasNum___boxed(lean_object*);
static const lean_string_object l_Lean_Name_reprPrec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Name.anonymous"};
static const lean_object* l_Lean_Name_reprPrec___closed__0 = (const lean_object*)&l_Lean_Name_reprPrec___closed__0_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__0_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__1 = (const lean_object*)&l_Lean_Name_reprPrec___closed__1_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Name_reprPrec___closed__2 = (const lean_object*)&l_Lean_Name_reprPrec___closed__2_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__2_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__3 = (const lean_object*)&l_Lean_Name_reprPrec___closed__3_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Name.mkStr "};
static const lean_object* l_Lean_Name_reprPrec___closed__4 = (const lean_object*)&l_Lean_Name_reprPrec___closed__4_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__4_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__5 = (const lean_object*)&l_Lean_Name_reprPrec___closed__5_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Name_reprPrec___closed__6 = (const lean_object*)&l_Lean_Name_reprPrec___closed__6_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__6_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__7 = (const lean_object*)&l_Lean_Name_reprPrec___closed__7_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Name.mkNum "};
static const lean_object* l_Lean_Name_reprPrec___closed__8 = (const lean_object*)&l_Lean_Name_reprPrec___closed__8_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__8_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__9 = (const lean_object*)&l_Lean_Name_reprPrec___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Name_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_reprPrec___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Name_instRepr___closed__0 = (const lean_object*)&l_Lean_Name_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Name_instRepr = (const lean_object*)&l_Lean_Name_instRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Name_capitalize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_modifyBase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendAfter___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_name_append_after(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendIndexAfter___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_name_append_index_after(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_instDecidableEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameGenerator_curr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameGenerator_next(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameGenerator_mkChild(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7;
static lean_once_cell_t l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Syntax_instReprPreresolved_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Syntax.Preresolved.namespace"};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__1 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__2 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__2_value;
static lean_once_cell_t l_Lean_Syntax_instReprPreresolved_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__3;
static lean_once_cell_t l_Lean_Syntax_instReprPreresolved_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__4;
static const lean_string_object l_Lean_Syntax_instReprPreresolved_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Syntax.Preresolved.decl"};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__5 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__6 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__7 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instReprPreresolved___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instReprPreresolved_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instReprPreresolved___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instReprPreresolved = (const lean_object*)&l_Lean_Syntax_instReprPreresolved___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(lean_object*);
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Syntax.missing"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__0 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__1 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__1_value;
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Syntax.node"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__2 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__2_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__3 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__3_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__4 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__4_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1;
static lean_once_cell_t l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2;
static const lean_ctor_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Syntax.atom"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__5 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__6 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__7 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__7_value;
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Syntax.ident"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__8 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__8_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__8_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__9 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__9_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__10 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__10_value;
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ".toRawSubstring"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__11 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instRepr_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instRepr___closed__0 = (const lean_object*)&l_Lean_Syntax_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instRepr = (const lean_object*)&l_Lean_Syntax_instRepr___closed__0_value;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "raw"};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9;
static lean_once_cell_t l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0 = (const lean_object*)&l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg();
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg();
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_TSyntax_instCoeIdentTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_instCoeIdentTerm___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TSyntax_instCoeIdentTerm___closed__0 = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeIdentTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeDepTermMkIdentIdent(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeStrLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNameLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeScientificLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNumLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeCharLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeIdentLevel = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNumLitPrio = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNumLitPrec = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg();
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSyntaxArray(lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqPreresolved_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqPreresolved_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instBEqPreresolved___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instBEqPreresolved_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEqPreresolved___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEqPreresolved___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instBEqPreresolved = (const lean_object*)&l_Lean_Syntax_instBEqPreresolved___closed__0_value;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structEq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structEq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_structEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEq___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instBEq = (const lean_object*)&l_Lean_Syntax_instBEq___closed__0_value;
static const lean_closure_object l_Lean_Syntax_instBEqTSyntax___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_structEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEqTSyntax___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEqTSyntax___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfoAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___at___00Lean_Syntax_setTailInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfoAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___at___00Lean_Syntax_setHeadInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setInfo(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_getHead_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSynthetic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_expandMacros___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__0 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value;
static const lean_string_object l_Lean_expandMacros___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__1 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value;
static const lean_string_object l_Lean_expandMacros___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__2 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value;
static const lean_string_object l_Lean_expandMacros___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__3 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_expandMacros___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_expandMacros___lam__0___closed__4 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_expandMacros___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandMacros___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_expandMacros___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_expandMacros___closed__0 = (const lean_object*)&l_Lean_expandMacros___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__0 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__0_value;
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "commentBody"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__1 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__1_value;
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_1),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_2),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(181, 50, 60, 220, 73, 28, 0, 197)}};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__2 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__2_value;
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-/"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__3 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__3_value;
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__4 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__4_value;
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_1),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_2),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__4_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__5 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__5_value;
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "/--"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__6 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocCommentFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocCommentFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocComment(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkCIdentFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_internal"};
static const lean_object* l_Lean_mkCIdentFrom___closed__0 = (const lean_object*)&l_Lean_mkCIdentFrom___closed__0_value;
static const lean_ctor_object l_Lean_mkCIdentFrom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkCIdentFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 131, 204, 40, 20, 233, 244, 88)}};
static const lean_object* l_Lean_mkCIdentFrom___closed__1 = (const lean_object*)&l_Lean_mkCIdentFrom___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdent(lean_object*);
static const lean_string_object l_Lean_mkGroupNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_mkGroupNode___closed__0 = (const lean_object*)&l_Lean_mkGroupNode___closed__0_value;
static const lean_ctor_object l_Lean_mkGroupNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkGroupNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_mkGroupNode___closed__1 = (const lean_object*)&l_Lean_mkGroupNode___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkGroupNode(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_mkSepArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_mkSepArray___closed__0 = (const lean_object*)&l_Lean_mkSepArray___closed__0_value;
static const lean_ctor_object l_Lean_mkSepArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkSepArray___closed__0_value)}};
static const lean_object* l_Lean_mkSepArray___closed__1 = (const lean_object*)&l_Lean_mkSepArray___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkSepArray___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkOptionalNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_mkOptionalNode___closed__0 = (const lean_object*)&l_Lean_mkOptionalNode___closed__0_value;
static const lean_ctor_object l_Lean_mkOptionalNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkOptionalNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_mkOptionalNode___closed__1 = (const lean_object*)&l_Lean_mkOptionalNode___closed__1_value;
static const lean_ctor_object l_Lean_mkOptionalNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_mkOptionalNode___closed__1_value),((lean_object*)&l_Lean_mkSepArray___closed__0_value)}};
static const lean_object* l_Lean_mkOptionalNode___closed__2 = (const lean_object*)&l_Lean_mkOptionalNode___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_mkOptionalNode(lean_object*);
static const lean_string_object l_Lean_mkHole___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_mkHole___closed__0 = (const lean_object*)&l_Lean_mkHole___closed__0_value;
static const lean_ctor_object l_Lean_mkHole___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_mkHole___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkHole___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_mkHole___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkHole___closed__1_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_mkHole___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkHole___closed__1_value_aux_2),((lean_object*)&l_Lean_mkHole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_mkHole___closed__1 = (const lean_object*)&l_Lean_mkHole___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkHole(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkHole___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_SepArray_ofElems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_SepArray_ofElems___closed__0 = (const lean_object*)&l_Lean_Syntax_SepArray_ofElems___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_SepArray_ofElems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_mkOptionalNode___closed__1_value),((lean_object*)&l_Lean_Syntax_SepArray_ofElems___closed__0_value)}};
static const lean_object* l_Lean_Syntax_SepArray_ofElems___closed__1 = (const lean_object*)&l_Lean_Syntax_SepArray_ofElems___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayTSepArray(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Syntax_mkApp___closed__0 = (const lean_object*)&l_Lean_Syntax_mkApp___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkApp___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkApp___closed__1_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkApp___closed__1_value_aux_2),((lean_object*)&l_Lean_Syntax_mkApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Syntax_mkApp___closed__1 = (const lean_object*)&l_Lean_Syntax_mkApp___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCApp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkCharLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l_Lean_Syntax_mkCharLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkCharLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkCharLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkCharLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l_Lean_Syntax_mkCharLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkCharLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkStrLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Syntax_mkStrLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkStrLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkStrLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkStrLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Syntax_mkStrLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkStrLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkNumLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Syntax_mkNumLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkNumLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkNumLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkNumLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Syntax_mkNumLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkNumLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNatLit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkScientificLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l_Lean_Syntax_mkScientificLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkScientificLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkScientificLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkScientificLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l_Lean_Syntax_mkScientificLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkScientificLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkScientificLit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkNameLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Syntax_mkNameLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkNameLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkNameLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkNameLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_Syntax_mkNameLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkNameLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_decodeNatLitVal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_decodeNatLitVal_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_isFieldIdx_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fieldIdx"};
static const lean_object* l_Lean_Syntax_isFieldIdx_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_isFieldIdx_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_isFieldIdx_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isFieldIdx_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 141, 165, 29, 238, 211, 61, 163)}};
static const lean_object* l_Lean_Syntax_isFieldIdx_x3f___closed__1 = (const lean_object*)&l_Lean_Syntax_isFieldIdx_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__2;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__3;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__4;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__5;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__6;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_decodeStringGap___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_decodeStringGap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_decodeStringGap___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_decodeStringGap___closed__0 = (const lean_object*)&l_Lean_Syntax_decodeStringGap___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1(uint32_t, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2(uint8_t, uint8_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_splitNameLit(lean_object*);
static const lean_string_object l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Init.Meta.Defs"};
static const lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0 = (const lean_object*)&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0_value;
static const lean_string_object l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Substring.Raw.toName"};
static const lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1 = (const lean_object*)&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1_value;
static const lean_string_object l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2 = (const lean_object*)&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2_value;
static lean_once_cell_t l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3;
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_toName(lean_object*);
LEAN_EXPORT lean_object* l_String_toName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNameLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_hasArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_hasArgs___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAtom(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAtom___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isToken___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNone___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_findAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat___boxed(lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId___boxed(lean_object*);
static const lean_ctor_object l_Lean_TSyntax_getScientific___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_TSyntax_getScientific___closed__0 = (const lean_object*)&l_Lean_TSyntax_getScientific___closed__0_value;
static const lean_ctor_object l_Lean_TSyntax_getScientific___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_TSyntax_getScientific___closed__0_value)}};
static const lean_object* l_Lean_TSyntax_getScientific___closed__1 = (const lean_object*)&l_Lean_TSyntax_getScientific___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString___boxed(lean_object*);
LEAN_EXPORT uint32_t l_Lean_TSyntax_getChar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instQuoteTermMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instQuoteTermMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteTermMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteTermMkStr1 = (const lean_object*)&l_Lean_instQuoteTermMkStr1___closed__0_value;
static const lean_string_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__0 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value;
static const lean_string_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__1 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__2 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_instQuoteBoolMkStr1___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__3;
static const lean_string_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__4 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__5 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_instQuoteBoolMkStr1___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instQuoteBoolMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteBoolMkStr1___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteBoolMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteBoolMkStr1 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instQuoteCharCharLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteCharCharLitKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteCharCharLitKind___closed__0 = (const lean_object*)&l_Lean_instQuoteCharCharLitKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteCharCharLitKind = (const lean_object*)&l_Lean_instQuoteCharCharLitKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteStringStrLitKind___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteStringStrLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteStringStrLitKind___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteStringStrLitKind___closed__0 = (const lean_object*)&l_Lean_instQuoteStringStrLitKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteStringStrLitKind = (const lean_object*)&l_Lean_instQuoteStringStrLitKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteNatNumLitKind___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteNatNumLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteNatNumLitKind___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteNatNumLitKind___closed__0 = (const lean_object*)&l_Lean_instQuoteNatNumLitKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteNatNumLitKind = (const lean_object*)&l_Lean_instQuoteNatNumLitKind___closed__0_value;
static const lean_string_object l_Lean_instQuoteRawMkStr1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_instQuoteRawMkStr1___lam__0___closed__0 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__0_value;
static const lean_string_object l_Lean_instQuoteRawMkStr1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "toRawSubstring'"};
static const lean_object* l_Lean_instQuoteRawMkStr1___lam__0___closed__1 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(190, 31, 121, 163, 121, 213, 247, 150)}};
static const lean_object* l_Lean_instQuoteRawMkStr1___lam__0___closed__2 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteRawMkStr1___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteRawMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteRawMkStr1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteRawMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteRawMkStr1 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
static const lean_string_object l_Lean_quoteNameMk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l_Lean_quoteNameMk___closed__0 = (const lean_object*)&l_Lean_quoteNameMk___closed__0_value;
static const lean_string_object l_Lean_quoteNameMk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "anonymous"};
static const lean_object* l_Lean_quoteNameMk___closed__1 = (const lean_object*)&l_Lean_quoteNameMk___closed__1_value;
static const lean_ctor_object l_Lean_quoteNameMk___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__2_value_aux_0),((lean_object*)&l_Lean_quoteNameMk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__2_value_aux_1),((lean_object*)&l_Lean_quoteNameMk___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 163, 3, 148, 15, 163, 84, 121)}};
static const lean_object* l_Lean_quoteNameMk___closed__2 = (const lean_object*)&l_Lean_quoteNameMk___closed__2_value;
static lean_once_cell_t l_Lean_quoteNameMk___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_quoteNameMk___closed__3;
static const lean_string_object l_Lean_quoteNameMk___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mkStr"};
static const lean_object* l_Lean_quoteNameMk___closed__4 = (const lean_object*)&l_Lean_quoteNameMk___closed__4_value;
static const lean_ctor_object l_Lean_quoteNameMk___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__5_value_aux_0),((lean_object*)&l_Lean_quoteNameMk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__5_value_aux_1),((lean_object*)&l_Lean_quoteNameMk___closed__4_value),LEAN_SCALAR_PTR_LITERAL(66, 239, 13, 154, 0, 241, 98, 75)}};
static const lean_object* l_Lean_quoteNameMk___closed__5 = (const lean_object*)&l_Lean_quoteNameMk___closed__5_value;
static const lean_string_object l_Lean_quoteNameMk___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mkNum"};
static const lean_object* l_Lean_quoteNameMk___closed__6 = (const lean_object*)&l_Lean_quoteNameMk___closed__6_value;
static const lean_ctor_object l_Lean_quoteNameMk___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__7_value_aux_0),((lean_object*)&l_Lean_quoteNameMk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__7_value_aux_1),((lean_object*)&l_Lean_quoteNameMk___closed__6_value),LEAN_SCALAR_PTR_LITERAL(247, 141, 7, 17, 149, 107, 178, 15)}};
static const lean_object* l_Lean_quoteNameMk___closed__7 = (const lean_object*)&l_Lean_quoteNameMk___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_quoteNameMk(lean_object*);
static const lean_string_object l_Lean_instQuoteNameMkStr1___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lean_instQuoteNameMkStr1___private__1___closed__0 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__0_value;
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_2),((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lean_instQuoteNameMkStr1___private__1___closed__1 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteNameMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteNameMkStr1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteNameMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteNameMkStr1 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___closed__0_value;
static const lean_string_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 121, 37, 123, 104, 28, 189, 89)}};
static const lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mkArray"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Option_hasQuote___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__3;
static const lean_string_object l_Lean_Option_hasQuote___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_evalPrec___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalPrec___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_evalPrec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_evalPrec___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_evalPrec___closed__0 = (const lean_object*)&l_Lean_evalPrec___closed__0_value;
static const lean_string_object l_Lean_evalPrec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected precedence"};
static const lean_object* l_Lean_evalPrec___closed__1 = (const lean_object*)&l_Lean_evalPrec___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_evalPrec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalPrec___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_evalPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unexpected priority"};
static const lean_object* l_Lean_evalPrio___closed__0 = (const lean_object*)&l_Lean_evalPrio___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_evalPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalPrio___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalOptPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalOptPrio___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_getSepElems___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_getSepElems___redArg___closed__0 = (const lean_object*)&l_Array_getSepElems___redArg___closed__0_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__1 = (const lean_object*)&l_Array_getSepElems___redArg___closed__1_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__2 = (const lean_object*)&l_Array_getSepElems___redArg___closed__2_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__3 = (const lean_object*)&l_Array_getSepElems___redArg___closed__3_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__4 = (const lean_object*)&l_Array_getSepElems___redArg___closed__4_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__5 = (const lean_object*)&l_Array_getSepElems___redArg___closed__5_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__6 = (const lean_object*)&l_Array_getSepElems___redArg___closed__6_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__7 = (const lean_object*)&l_Array_getSepElems___redArg___closed__7_value;
static const lean_ctor_object l_Array_getSepElems___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_getSepElems___redArg___closed__1_value),((lean_object*)&l_Array_getSepElems___redArg___closed__2_value)}};
static const lean_object* l_Array_getSepElems___redArg___closed__8 = (const lean_object*)&l_Array_getSepElems___redArg___closed__8_value;
static const lean_ctor_object l_Array_getSepElems___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_getSepElems___redArg___closed__8_value),((lean_object*)&l_Array_getSepElems___redArg___closed__3_value),((lean_object*)&l_Array_getSepElems___redArg___closed__4_value),((lean_object*)&l_Array_getSepElems___redArg___closed__5_value),((lean_object*)&l_Array_getSepElems___redArg___closed__6_value)}};
static const lean_object* l_Array_getSepElems___redArg___closed__9 = (const lean_object*)&l_Array_getSepElems___redArg___closed__9_value;
static const lean_ctor_object l_Array_getSepElems___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_getSepElems___redArg___closed__9_value),((lean_object*)&l_Array_getSepElems___redArg___closed__7_value)}};
static const lean_object* l_Array_getSepElems___redArg___closed__10 = (const lean_object*)&l_Array_getSepElems___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_getSepElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_filterSepElems___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElems___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElems___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Syntax_instEmptyCollectionSepArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArrayTSyntaxArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instCoeTermTSyntaxConsSyntaxNodeKindMkStr4Nil = (const lean_object*)&l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit(lean_object*);
static const lean_string_object l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "interpolatedStrLitKind"};
static const lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 181, 130, 246, 88, 58, 26, 43)}};
static const lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1 = (const lean_object*)&l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_++_"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 69, 86, 178, 149, 48, 216, 23)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "++"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_TSyntax_expandInterpolatedStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_expandInterpolatedStr___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__0 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__0_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__1 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__1_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_2),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__2 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__3 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__3_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_2),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__4 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__5 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__5_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__6 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__6_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__7 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__7_value;
static lean_once_cell_t l_Lean_TSyntax_expandInterpolatedStr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__8;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TSyntax"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__9 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__9_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__10_value_aux_0),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__9_value),LEAN_SCALAR_PTR_LITERAL(208, 86, 51, 178, 37, 75, 0, 6)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__10 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__10_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__10_value)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__11 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__11_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Compat"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__12 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__12_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_0),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__9_value),LEAN_SCALAR_PTR_LITERAL(208, 86, 51, 178, 37, 75, 0, 6)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_1),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__12_value),LEAN_SCALAR_PTR_LITERAL(233, 134, 124, 217, 96, 118, 79, 86)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__13 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__14 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__14_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__15 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__15_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__11_value),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__15_value)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__16 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__16_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__17 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.TransparencyMode.all"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__0 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__1 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.TransparencyMode.default"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__2 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__3 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.TransparencyMode.reducible"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__4 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__5 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.TransparencyMode.instances"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__6 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__7 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__7_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.TransparencyMode.none"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__8 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__8_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__8_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__9 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__9_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.TransparencyMode.implicit"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__10 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__10_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__10_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__11 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprTransparencyMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprTransparencyMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprTransparencyMode___closed__0 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprTransparencyMode = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode___closed__0_value;
static const lean_string_object l_Lean_Meta_instReprEtaStructMode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.EtaStructMode.all"};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__0 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprEtaStructMode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__1 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_instReprEtaStructMode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.EtaStructMode.notClasses"};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__2 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprEtaStructMode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__3 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprEtaStructMode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Meta.EtaStructMode.none"};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__4 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprEtaStructMode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__5 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprEtaStructMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprEtaStructMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprEtaStructMode___closed__0 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprEtaStructMode = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode___closed__0_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zeta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__4;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "beta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__6_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__8_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "etaStruct"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__9_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__11;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "iota"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__15_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__17_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__18;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "autoUnfold"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__19_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__19_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__20_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__21;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "failIfUnchanged"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__22 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__22_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__22_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__23_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__24;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unfoldPartialApp"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__25 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__25_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__25_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__26 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__26_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__27;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "zetaDelta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__28 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__28_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__28_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__29_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "index"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__30 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__30_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__30_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__31 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__31_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__32;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "zetaUnused"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__33 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__33_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__33_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__34 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__34_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "zetaHave"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__35 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__35_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__35_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__36 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__36_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__37;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "locals"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__38 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__38_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__38_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__39 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__39_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instances"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__40 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__40_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__40_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__41 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__41_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprConfig_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprConfig___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprConfig = (const lean_object*)&l_Lean_Meta_instReprConfig___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value)}};
static const lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0_value;
static const lean_string_object l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1_value)}};
static const lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "maxSteps"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "maxDischargeDepth"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "contextual"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "memoize"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "singlePass"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arith"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dsimp"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ground"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "implicitDefEqProofs"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "catchRuntime"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letToHave"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "congrConsts"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "bitVecOfNat"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "warnExponents"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "suggestions"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "maxSuggestions"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprConfig__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprConfig__1_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprConfig__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprConfig__1 = (const lean_object*)&l_Lean_Meta_instReprConfig__1___closed__0_value;
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_isAll(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_isAll___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_getConfigItems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_getConfigItems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__1_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_getConfigItems___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 254, 59, 95, 54, 234, 162, 220)}};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_getConfigItems(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mkOptConfig(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_appendConfig(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMajor___boxed(lean_object* v_u_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lean_version_get_major(v_u_2_);
return v_res_3_;
}
}
static lean_object* _init_l_Lean_version_major___closed__0(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_version_get_major(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_version_major(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_version_major___closed__0, &l_Lean_version_major___closed__0_once, _init_l_Lean_version_major___closed__0);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMinor___boxed(lean_object* v_u_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lean_version_get_minor(v_u_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Lean_version_minor___closed__0(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_box(0);
v___x_11_ = lean_version_get_minor(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_version_minor(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_obj_once(&l_Lean_version_minor___closed__0, &l_Lean_version_minor___closed__0_once, _init_l_Lean_version_minor___closed__0);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getPatch___boxed(lean_object* v_u_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lean_version_get_patch(v_u_14_);
return v_res_15_;
}
}
static lean_object* _init_l_Lean_version_patch___closed__0(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_box(0);
v___x_17_ = lean_version_get_patch(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_version_patch(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_obj_once(&l_Lean_version_patch___closed__0, &l_Lean_version_patch___closed__0_once, _init_l_Lean_version_patch___closed__0);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_getGithash___boxed(lean_object* v_u_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lean_get_githash(v_u_20_);
return v_res_21_;
}
}
static lean_object* _init_l_Lean_githash___closed__0(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_box(0);
v___x_23_ = lean_get_githash(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_githash(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&l_Lean_githash___closed__0, &l_Lean_githash___closed__0_once, _init_l_Lean_githash___closed__0);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_version_getIsRelease___boxed(lean_object* v_u_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = lean_version_get_is_release(v_u_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
static uint8_t _init_l_Lean_version_isRelease___closed__0(void){
_start:
{
lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_29_ = lean_box(0);
v___x_30_ = lean_version_get_is_release(v___x_29_);
return v___x_30_;
}
}
static uint8_t _init_l_Lean_version_isRelease(void){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = lean_uint8_once(&l_Lean_version_isRelease___closed__0, &l_Lean_version_isRelease___closed__0_once, _init_l_Lean_version_isRelease___closed__0);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_version_getSpecialDesc___boxed(lean_object* v_u_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = lean_version_get_special_desc(v_u_33_);
return v_res_34_;
}
}
static lean_object* _init_l_Lean_version_specialDesc___closed__0(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_box(0);
v___x_36_ = lean_version_get_special_desc(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_version_specialDesc(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_obj_once(&l_Lean_version_specialDesc___closed__0, &l_Lean_version_specialDesc___closed__0_once, _init_l_Lean_version_specialDesc___closed__0);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__0(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = l_Lean_version_major;
v___x_39_ = l_Nat_reprFast(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__2(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_42_ = lean_obj_once(&l_Lean_versionStringCore___closed__0, &l_Lean_versionStringCore___closed__0_once, _init_l_Lean_versionStringCore___closed__0);
v___x_43_ = lean_string_append(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__3(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = l_Lean_version_minor;
v___x_45_ = l_Nat_reprFast(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__4(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&l_Lean_versionStringCore___closed__3, &l_Lean_versionStringCore___closed__3_once, _init_l_Lean_versionStringCore___closed__3);
v___x_47_ = lean_obj_once(&l_Lean_versionStringCore___closed__2, &l_Lean_versionStringCore___closed__2_once, _init_l_Lean_versionStringCore___closed__2);
v___x_48_ = lean_string_append(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__5(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_50_ = lean_obj_once(&l_Lean_versionStringCore___closed__4, &l_Lean_versionStringCore___closed__4_once, _init_l_Lean_versionStringCore___closed__4);
v___x_51_ = lean_string_append(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__6(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = l_Lean_version_patch;
v___x_53_ = l_Nat_reprFast(v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__7(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_obj_once(&l_Lean_versionStringCore___closed__6, &l_Lean_versionStringCore___closed__6_once, _init_l_Lean_versionStringCore___closed__6);
v___x_55_ = lean_obj_once(&l_Lean_versionStringCore___closed__5, &l_Lean_versionStringCore___closed__5_once, _init_l_Lean_versionStringCore___closed__5);
v___x_56_ = lean_string_append(v___x_55_, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_versionStringCore(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l_Lean_versionStringCore___closed__7, &l_Lean_versionStringCore___closed__7_once, _init_l_Lean_versionStringCore___closed__7);
return v___x_57_;
}
}
static uint8_t _init_l_Lean_versionString___closed__1(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_59_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_60_ = l_Lean_version_specialDesc;
v___x_61_ = lean_string_dec_eq(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_versionString___closed__3(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((lean_object*)(l_Lean_versionString___closed__2));
v___x_64_ = l_Lean_versionStringCore;
v___x_65_ = lean_string_append(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_versionString___closed__4(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = l_Lean_version_specialDesc;
v___x_67_ = lean_obj_once(&l_Lean_versionString___closed__3, &l_Lean_versionString___closed__3_once, _init_l_Lean_versionString___closed__3);
v___x_68_ = lean_string_append(v___x_67_, v___x_66_);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_versionString___closed__6(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = ((lean_object*)(l_Lean_versionString___closed__5));
v___x_71_ = l_Lean_versionStringCore;
v___x_72_ = lean_string_append(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_versionString___closed__7(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = l_Lean_githash;
v___x_74_ = lean_obj_once(&l_Lean_versionString___closed__6, &l_Lean_versionString___closed__6_once, _init_l_Lean_versionString___closed__6);
v___x_75_ = lean_string_append(v___x_74_, v___x_73_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_versionString(void){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = lean_uint8_once(&l_Lean_versionString___closed__1, &l_Lean_versionString___closed__1_once, _init_l_Lean_versionString___closed__1);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Lean_versionString___closed__4, &l_Lean_versionString___closed__4_once, _init_l_Lean_versionString___closed__4);
return v___x_77_;
}
else
{
uint8_t v___x_78_; 
v___x_78_ = l_Lean_version_isRelease;
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
v___x_79_ = lean_obj_once(&l_Lean_versionString___closed__7, &l_Lean_versionString___closed__7_once, _init_l_Lean_versionString___closed__7);
return v___x_79_;
}
else
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_versionStringCore;
return v___x_80_;
}
}
}
}
static lean_object* _init_l_Lean_toolchain___closed__1(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = ((lean_object*)(l_Lean_toolchain___closed__0));
v___x_85_ = ((lean_object*)(l_Lean_origin___closed__0));
v___x_86_ = lean_string_append(v___x_85_, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__2(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = l_Lean_version_specialDesc;
v___x_88_ = lean_obj_once(&l_Lean_toolchain___closed__1, &l_Lean_toolchain___closed__1_once, _init_l_Lean_toolchain___closed__1);
v___x_89_ = lean_string_append(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__4(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = ((lean_object*)(l_Lean_toolchain___closed__3));
v___x_92_ = ((lean_object*)(l_Lean_origin___closed__0));
v___x_93_ = lean_string_append(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__5(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = l_Lean_versionStringCore;
v___x_95_ = lean_obj_once(&l_Lean_toolchain___closed__4, &l_Lean_toolchain___closed__4_once, _init_l_Lean_toolchain___closed__4);
v___x_96_ = lean_string_append(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__6(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = ((lean_object*)(l_Lean_versionString___closed__2));
v___x_98_ = lean_obj_once(&l_Lean_toolchain___closed__5, &l_Lean_toolchain___closed__5_once, _init_l_Lean_toolchain___closed__5);
v___x_99_ = lean_string_append(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__7(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = l_Lean_version_specialDesc;
v___x_101_ = lean_obj_once(&l_Lean_toolchain___closed__6, &l_Lean_toolchain___closed__6_once, _init_l_Lean_toolchain___closed__6);
v___x_102_ = lean_string_append(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_toolchain(void){
_start:
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_104_ = lean_uint8_once(&l_Lean_versionString___closed__1, &l_Lean_versionString___closed__1_once, _init_l_Lean_versionString___closed__1);
if (v___x_104_ == 0)
{
uint8_t v___x_105_; 
v___x_105_ = l_Lean_version_isRelease;
if (v___x_105_ == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lean_toolchain___closed__2, &l_Lean_toolchain___closed__2_once, _init_l_Lean_toolchain___closed__2);
return v___x_106_;
}
else
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Lean_toolchain___closed__7, &l_Lean_toolchain___closed__7_once, _init_l_Lean_toolchain___closed__7);
return v___x_107_;
}
}
else
{
uint8_t v___x_108_; 
v___x_108_ = l_Lean_version_isRelease;
if (v___x_108_ == 0)
{
return v___x_103_;
}
else
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lean_toolchain___closed__5, &l_Lean_toolchain___closed__5_once, _init_l_Lean_toolchain___closed__5);
return v___x_109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Internal_isStage0___boxed(lean_object* v_u_111_){
_start:
{
uint8_t v_res_112_; lean_object* v_r_113_; 
v_res_112_ = lean_internal_is_stage0(v_u_111_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Internal_hasLLVMBackend___boxed(lean_object* v_u_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = lean_internal_has_llvm_backend(v_u_115_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT uint8_t l_Lean_isGreek(uint32_t v_c_118_){
_start:
{
uint32_t v___x_119_; uint8_t v___x_120_; 
v___x_119_ = 913;
v___x_120_ = lean_uint32_dec_le(v___x_119_, v_c_118_);
if (v___x_120_ == 0)
{
return v___x_120_;
}
else
{
uint32_t v___x_121_; uint8_t v___x_122_; 
v___x_121_ = 989;
v___x_122_ = lean_uint32_dec_le(v_c_118_, v___x_121_);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isGreek___boxed(lean_object* v_c_123_){
_start:
{
uint32_t v_c_boxed_124_; uint8_t v_res_125_; lean_object* v_r_126_; 
v_c_boxed_124_ = lean_unbox_uint32(v_c_123_);
lean_dec(v_c_123_);
v_res_125_ = l_Lean_isGreek(v_c_boxed_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT uint8_t l_Lean_isLetterLike(uint32_t v_c_127_){
_start:
{
uint32_t v___x_171_; uint8_t v___x_172_; 
v___x_171_ = 945;
v___x_172_ = lean_uint32_dec_le(v___x_171_, v_c_127_);
if (v___x_172_ == 0)
{
goto v___jp_162_;
}
else
{
uint32_t v___x_173_; uint8_t v___x_174_; 
v___x_173_ = 969;
v___x_174_ = lean_uint32_dec_le(v_c_127_, v___x_173_);
if (v___x_174_ == 0)
{
goto v___jp_162_;
}
else
{
uint32_t v___x_175_; uint8_t v___x_176_; 
v___x_175_ = 955;
v___x_176_ = lean_uint32_dec_eq(v_c_127_, v___x_175_);
if (v___x_176_ == 0)
{
return v___x_174_;
}
else
{
goto v___jp_162_;
}
}
}
v___jp_128_:
{
uint32_t v___x_129_; uint8_t v___x_130_; 
v___x_129_ = 256;
v___x_130_ = lean_uint32_dec_le(v___x_129_, v_c_127_);
if (v___x_130_ == 0)
{
return v___x_130_;
}
else
{
uint32_t v___x_131_; uint8_t v___x_132_; 
v___x_131_ = 383;
v___x_132_ = lean_uint32_dec_le(v_c_127_, v___x_131_);
return v___x_132_;
}
}
v___jp_133_:
{
uint32_t v___x_134_; uint8_t v___x_135_; 
v___x_134_ = 192;
v___x_135_ = lean_uint32_dec_le(v___x_134_, v_c_127_);
if (v___x_135_ == 0)
{
goto v___jp_128_;
}
else
{
uint32_t v___x_136_; uint8_t v___x_137_; 
v___x_136_ = 255;
v___x_137_ = lean_uint32_dec_le(v_c_127_, v___x_136_);
if (v___x_137_ == 0)
{
goto v___jp_128_;
}
else
{
uint32_t v___x_138_; uint8_t v___x_139_; 
v___x_138_ = 215;
v___x_139_ = lean_uint32_dec_eq(v_c_127_, v___x_138_);
if (v___x_139_ == 0)
{
uint32_t v___x_140_; uint8_t v___x_141_; 
v___x_140_ = 247;
v___x_141_ = lean_uint32_dec_eq(v_c_127_, v___x_140_);
if (v___x_141_ == 0)
{
return v___x_137_;
}
else
{
goto v___jp_128_;
}
}
else
{
goto v___jp_128_;
}
}
}
}
v___jp_142_:
{
uint32_t v___x_143_; uint8_t v___x_144_; 
v___x_143_ = 119964;
v___x_144_ = lean_uint32_dec_le(v___x_143_, v_c_127_);
if (v___x_144_ == 0)
{
goto v___jp_133_;
}
else
{
uint32_t v___x_145_; uint8_t v___x_146_; 
v___x_145_ = 120223;
v___x_146_ = lean_uint32_dec_le(v_c_127_, v___x_145_);
if (v___x_146_ == 0)
{
goto v___jp_133_;
}
else
{
return v___x_146_;
}
}
}
v___jp_147_:
{
uint32_t v___x_148_; uint8_t v___x_149_; 
v___x_148_ = 8448;
v___x_149_ = lean_uint32_dec_le(v___x_148_, v_c_127_);
if (v___x_149_ == 0)
{
goto v___jp_142_;
}
else
{
uint32_t v___x_150_; uint8_t v___x_151_; 
v___x_150_ = 8527;
v___x_151_ = lean_uint32_dec_le(v_c_127_, v___x_150_);
if (v___x_151_ == 0)
{
goto v___jp_142_;
}
else
{
return v___x_151_;
}
}
}
v___jp_152_:
{
uint32_t v___x_153_; uint8_t v___x_154_; 
v___x_153_ = 7936;
v___x_154_ = lean_uint32_dec_le(v___x_153_, v_c_127_);
if (v___x_154_ == 0)
{
goto v___jp_147_;
}
else
{
uint32_t v___x_155_; uint8_t v___x_156_; 
v___x_155_ = 8190;
v___x_156_ = lean_uint32_dec_le(v_c_127_, v___x_155_);
if (v___x_156_ == 0)
{
goto v___jp_147_;
}
else
{
return v___x_156_;
}
}
}
v___jp_157_:
{
uint32_t v___x_158_; uint8_t v___x_159_; 
v___x_158_ = 970;
v___x_159_ = lean_uint32_dec_le(v___x_158_, v_c_127_);
if (v___x_159_ == 0)
{
goto v___jp_152_;
}
else
{
uint32_t v___x_160_; uint8_t v___x_161_; 
v___x_160_ = 1019;
v___x_161_ = lean_uint32_dec_le(v_c_127_, v___x_160_);
if (v___x_161_ == 0)
{
goto v___jp_152_;
}
else
{
return v___x_161_;
}
}
}
v___jp_162_:
{
uint32_t v___x_163_; uint8_t v___x_164_; 
v___x_163_ = 913;
v___x_164_ = lean_uint32_dec_le(v___x_163_, v_c_127_);
if (v___x_164_ == 0)
{
goto v___jp_157_;
}
else
{
uint32_t v___x_165_; uint8_t v___x_166_; 
v___x_165_ = 937;
v___x_166_ = lean_uint32_dec_le(v_c_127_, v___x_165_);
if (v___x_166_ == 0)
{
goto v___jp_157_;
}
else
{
uint32_t v___x_167_; uint8_t v___x_168_; 
v___x_167_ = 928;
v___x_168_ = lean_uint32_dec_eq(v_c_127_, v___x_167_);
if (v___x_168_ == 0)
{
uint32_t v___x_169_; uint8_t v___x_170_; 
v___x_169_ = 931;
v___x_170_ = lean_uint32_dec_eq(v_c_127_, v___x_169_);
if (v___x_170_ == 0)
{
return v___x_166_;
}
else
{
goto v___jp_157_;
}
}
else
{
goto v___jp_157_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isLetterLike___boxed(lean_object* v_c_177_){
_start:
{
uint32_t v_c_boxed_178_; uint8_t v_res_179_; lean_object* v_r_180_; 
v_c_boxed_178_ = lean_unbox_uint32(v_c_177_);
lean_dec(v_c_177_);
v_res_179_ = l_Lean_isLetterLike(v_c_boxed_178_);
v_r_180_ = lean_box(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT uint8_t l_Lean_isNumericSubscript(uint32_t v_c_181_){
_start:
{
uint32_t v___x_182_; uint8_t v___x_183_; 
v___x_182_ = 8320;
v___x_183_ = lean_uint32_dec_le(v___x_182_, v_c_181_);
if (v___x_183_ == 0)
{
return v___x_183_;
}
else
{
uint32_t v___x_184_; uint8_t v___x_185_; 
v___x_184_ = 8329;
v___x_185_ = lean_uint32_dec_le(v_c_181_, v___x_184_);
return v___x_185_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isNumericSubscript___boxed(lean_object* v_c_186_){
_start:
{
uint32_t v_c_boxed_187_; uint8_t v_res_188_; lean_object* v_r_189_; 
v_c_boxed_187_ = lean_unbox_uint32(v_c_186_);
lean_dec(v_c_186_);
v_res_188_ = l_Lean_isNumericSubscript(v_c_boxed_187_);
v_r_189_ = lean_box(v_res_188_);
return v_r_189_;
}
}
LEAN_EXPORT uint8_t l_Lean_isSubScriptAlnum(uint32_t v_c_190_){
_start:
{
uint32_t v___x_204_; uint8_t v___x_205_; 
v___x_204_ = 8320;
v___x_205_ = lean_uint32_dec_le(v___x_204_, v_c_190_);
if (v___x_205_ == 0)
{
goto v___jp_199_;
}
else
{
uint32_t v___x_206_; uint8_t v___x_207_; 
v___x_206_ = 8329;
v___x_207_ = lean_uint32_dec_le(v_c_190_, v___x_206_);
if (v___x_207_ == 0)
{
goto v___jp_199_;
}
else
{
return v___x_207_;
}
}
v___jp_191_:
{
uint32_t v___x_192_; uint8_t v___x_193_; 
v___x_192_ = 11388;
v___x_193_ = lean_uint32_dec_eq(v_c_190_, v___x_192_);
return v___x_193_;
}
v___jp_194_:
{
uint32_t v___x_195_; uint8_t v___x_196_; 
v___x_195_ = 7522;
v___x_196_ = lean_uint32_dec_le(v___x_195_, v_c_190_);
if (v___x_196_ == 0)
{
goto v___jp_191_;
}
else
{
uint32_t v___x_197_; uint8_t v___x_198_; 
v___x_197_ = 7530;
v___x_198_ = lean_uint32_dec_le(v_c_190_, v___x_197_);
if (v___x_198_ == 0)
{
goto v___jp_191_;
}
else
{
return v___x_198_;
}
}
}
v___jp_199_:
{
uint32_t v___x_200_; uint8_t v___x_201_; 
v___x_200_ = 8336;
v___x_201_ = lean_uint32_dec_le(v___x_200_, v_c_190_);
if (v___x_201_ == 0)
{
goto v___jp_194_;
}
else
{
uint32_t v___x_202_; uint8_t v___x_203_; 
v___x_202_ = 8348;
v___x_203_ = lean_uint32_dec_le(v_c_190_, v___x_202_);
if (v___x_203_ == 0)
{
goto v___jp_194_;
}
else
{
return v___x_203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isSubScriptAlnum___boxed(lean_object* v_c_208_){
_start:
{
uint32_t v_c_boxed_209_; uint8_t v_res_210_; lean_object* v_r_211_; 
v_c_boxed_209_ = lean_unbox_uint32(v_c_208_);
lean_dec(v_c_208_);
v_res_210_ = l_Lean_isSubScriptAlnum(v_c_boxed_209_);
v_r_211_ = lean_box(v_res_210_);
return v_r_211_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdFirst(uint32_t v_c_212_){
_start:
{
uint32_t v___x_222_; uint8_t v___x_223_; 
v___x_222_ = 65;
v___x_223_ = lean_uint32_dec_le(v___x_222_, v_c_212_);
if (v___x_223_ == 0)
{
goto v___jp_217_;
}
else
{
uint32_t v___x_224_; uint8_t v___x_225_; 
v___x_224_ = 90;
v___x_225_ = lean_uint32_dec_le(v_c_212_, v___x_224_);
if (v___x_225_ == 0)
{
goto v___jp_217_;
}
else
{
return v___x_225_;
}
}
v___jp_213_:
{
uint32_t v___x_214_; uint8_t v___x_215_; 
v___x_214_ = 95;
v___x_215_ = lean_uint32_dec_eq(v_c_212_, v___x_214_);
if (v___x_215_ == 0)
{
uint8_t v___x_216_; 
v___x_216_ = l_Lean_isLetterLike(v_c_212_);
return v___x_216_;
}
else
{
return v___x_215_;
}
}
v___jp_217_:
{
uint32_t v___x_218_; uint8_t v___x_219_; 
v___x_218_ = 97;
v___x_219_ = lean_uint32_dec_le(v___x_218_, v_c_212_);
if (v___x_219_ == 0)
{
goto v___jp_213_;
}
else
{
uint32_t v___x_220_; uint8_t v___x_221_; 
v___x_220_ = 122;
v___x_221_ = lean_uint32_dec_le(v_c_212_, v___x_220_);
if (v___x_221_ == 0)
{
goto v___jp_213_;
}
else
{
return v___x_221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdFirst___boxed(lean_object* v_c_226_){
_start:
{
uint32_t v_c_boxed_227_; uint8_t v_res_228_; lean_object* v_r_229_; 
v_c_boxed_227_ = lean_unbox_uint32(v_c_226_);
lean_dec(v_c_226_);
v_res_228_ = l_Lean_isIdFirst(v_c_boxed_227_);
v_r_229_ = lean_box(v_res_228_);
return v_r_229_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii(uint8_t v_c_230_){
_start:
{
uint8_t v___x_236_; uint8_t v___x_237_; 
v___x_236_ = 97;
v___x_237_ = lean_uint8_dec_le(v___x_236_, v_c_230_);
if (v___x_237_ == 0)
{
goto v___jp_231_;
}
else
{
uint8_t v___x_238_; uint8_t v___x_239_; 
v___x_238_ = 122;
v___x_239_ = lean_uint8_dec_le(v_c_230_, v___x_238_);
if (v___x_239_ == 0)
{
goto v___jp_231_;
}
else
{
return v___x_239_;
}
}
v___jp_231_:
{
uint8_t v___x_232_; uint8_t v___x_233_; 
v___x_232_ = 65;
v___x_233_ = lean_uint8_dec_le(v___x_232_, v_c_230_);
if (v___x_233_ == 0)
{
return v___x_233_;
}
else
{
uint8_t v___x_234_; uint8_t v___x_235_; 
v___x_234_ = 90;
v___x_235_ = lean_uint8_dec_le(v_c_230_, v___x_234_);
return v___x_235_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___boxed(lean_object* v_c_240_){
_start:
{
uint8_t v_c_boxed_241_; uint8_t v_res_242_; lean_object* v_r_243_; 
v_c_boxed_241_ = lean_unbox(v_c_240_);
v_res_242_ = l___private_Init_Meta_Defs_0__Lean_isAlphaAscii(v_c_boxed_241_);
v_r_243_ = lean_box(v_res_242_);
return v_r_243_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdFirstAscii(uint8_t v_c_244_){
_start:
{
uint8_t v___x_253_; uint8_t v___x_254_; 
v___x_253_ = 97;
v___x_254_ = lean_uint8_dec_le(v___x_253_, v_c_244_);
if (v___x_254_ == 0)
{
goto v___jp_248_;
}
else
{
uint8_t v___x_255_; uint8_t v___x_256_; 
v___x_255_ = 122;
v___x_256_ = lean_uint8_dec_le(v_c_244_, v___x_255_);
if (v___x_256_ == 0)
{
goto v___jp_248_;
}
else
{
return v___x_256_;
}
}
v___jp_245_:
{
uint8_t v___x_246_; uint8_t v___x_247_; 
v___x_246_ = 95;
v___x_247_ = lean_uint8_dec_eq(v_c_244_, v___x_246_);
return v___x_247_;
}
v___jp_248_:
{
uint8_t v___x_249_; uint8_t v___x_250_; 
v___x_249_ = 65;
v___x_250_ = lean_uint8_dec_le(v___x_249_, v_c_244_);
if (v___x_250_ == 0)
{
goto v___jp_245_;
}
else
{
uint8_t v___x_251_; uint8_t v___x_252_; 
v___x_251_ = 90;
v___x_252_ = lean_uint8_dec_le(v_c_244_, v___x_251_);
if (v___x_252_ == 0)
{
goto v___jp_245_;
}
else
{
return v___x_252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdFirstAscii___boxed(lean_object* v_c_257_){
_start:
{
uint8_t v_c_boxed_258_; uint8_t v_res_259_; lean_object* v_r_260_; 
v_c_boxed_258_ = lean_unbox(v_c_257_);
v_res_259_ = l_Lean_isIdFirstAscii(v_c_boxed_258_);
v_r_260_ = lean_box(v_res_259_);
return v_r_260_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii(uint8_t v_c_261_){
_start:
{
uint8_t v___x_272_; uint8_t v___x_273_; 
v___x_272_ = 97;
v___x_273_ = lean_uint8_dec_le(v___x_272_, v_c_261_);
if (v___x_273_ == 0)
{
goto v___jp_267_;
}
else
{
uint8_t v___x_274_; uint8_t v___x_275_; 
v___x_274_ = 122;
v___x_275_ = lean_uint8_dec_le(v_c_261_, v___x_274_);
if (v___x_275_ == 0)
{
goto v___jp_267_;
}
else
{
return v___x_275_;
}
}
v___jp_262_:
{
uint8_t v___x_263_; uint8_t v___x_264_; 
v___x_263_ = 48;
v___x_264_ = lean_uint8_dec_le(v___x_263_, v_c_261_);
if (v___x_264_ == 0)
{
return v___x_264_;
}
else
{
uint8_t v___x_265_; uint8_t v___x_266_; 
v___x_265_ = 57;
v___x_266_ = lean_uint8_dec_le(v_c_261_, v___x_265_);
return v___x_266_;
}
}
v___jp_267_:
{
uint8_t v___x_268_; uint8_t v___x_269_; 
v___x_268_ = 65;
v___x_269_ = lean_uint8_dec_le(v___x_268_, v_c_261_);
if (v___x_269_ == 0)
{
goto v___jp_262_;
}
else
{
uint8_t v___x_270_; uint8_t v___x_271_; 
v___x_270_ = 90;
v___x_271_ = lean_uint8_dec_le(v_c_261_, v___x_270_);
if (v___x_271_ == 0)
{
goto v___jp_262_;
}
else
{
return v___x_271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___boxed(lean_object* v_c_276_){
_start:
{
uint8_t v_c_boxed_277_; uint8_t v_res_278_; lean_object* v_r_279_; 
v_c_boxed_277_ = lean_unbox(v_c_276_);
v_res_278_ = l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii(v_c_boxed_277_);
v_r_279_ = lean_box(v_res_278_);
return v_r_279_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdRest(uint32_t v_c_280_){
_start:
{
uint32_t v___x_302_; uint8_t v___x_303_; 
v___x_302_ = 65;
v___x_303_ = lean_uint32_dec_le(v___x_302_, v_c_280_);
if (v___x_303_ == 0)
{
goto v___jp_297_;
}
else
{
uint32_t v___x_304_; uint8_t v___x_305_; 
v___x_304_ = 90;
v___x_305_ = lean_uint32_dec_le(v_c_280_, v___x_304_);
if (v___x_305_ == 0)
{
goto v___jp_297_;
}
else
{
return v___x_305_;
}
}
v___jp_281_:
{
uint32_t v___x_282_; uint8_t v___x_283_; 
v___x_282_ = 95;
v___x_283_ = lean_uint32_dec_eq(v_c_280_, v___x_282_);
if (v___x_283_ == 0)
{
uint32_t v___x_284_; uint8_t v___x_285_; 
v___x_284_ = 39;
v___x_285_ = lean_uint32_dec_eq(v_c_280_, v___x_284_);
if (v___x_285_ == 0)
{
uint32_t v___x_286_; uint8_t v___x_287_; 
v___x_286_ = 33;
v___x_287_ = lean_uint32_dec_eq(v_c_280_, v___x_286_);
if (v___x_287_ == 0)
{
uint32_t v___x_288_; uint8_t v___x_289_; 
v___x_288_ = 63;
v___x_289_ = lean_uint32_dec_eq(v_c_280_, v___x_288_);
if (v___x_289_ == 0)
{
uint8_t v___x_290_; 
v___x_290_ = l_Lean_isLetterLike(v_c_280_);
if (v___x_290_ == 0)
{
uint8_t v___x_291_; 
v___x_291_ = l_Lean_isSubScriptAlnum(v_c_280_);
return v___x_291_;
}
else
{
return v___x_290_;
}
}
else
{
return v___x_289_;
}
}
else
{
return v___x_287_;
}
}
else
{
return v___x_285_;
}
}
else
{
return v___x_283_;
}
}
v___jp_292_:
{
uint32_t v___x_293_; uint8_t v___x_294_; 
v___x_293_ = 48;
v___x_294_ = lean_uint32_dec_le(v___x_293_, v_c_280_);
if (v___x_294_ == 0)
{
goto v___jp_281_;
}
else
{
uint32_t v___x_295_; uint8_t v___x_296_; 
v___x_295_ = 57;
v___x_296_ = lean_uint32_dec_le(v_c_280_, v___x_295_);
if (v___x_296_ == 0)
{
goto v___jp_281_;
}
else
{
return v___x_296_;
}
}
}
v___jp_297_:
{
uint32_t v___x_298_; uint8_t v___x_299_; 
v___x_298_ = 97;
v___x_299_ = lean_uint32_dec_le(v___x_298_, v_c_280_);
if (v___x_299_ == 0)
{
goto v___jp_292_;
}
else
{
uint32_t v___x_300_; uint8_t v___x_301_; 
v___x_300_ = 122;
v___x_301_ = lean_uint32_dec_le(v_c_280_, v___x_300_);
if (v___x_301_ == 0)
{
goto v___jp_292_;
}
else
{
return v___x_301_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdRest___boxed(lean_object* v_c_306_){
_start:
{
uint32_t v_c_boxed_307_; uint8_t v_res_308_; lean_object* v_r_309_; 
v_c_boxed_307_ = lean_unbox_uint32(v_c_306_);
lean_dec(v_c_306_);
v_res_308_ = l_Lean_isIdRest(v_c_boxed_307_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdRestAscii(uint8_t v_c_310_){
_start:
{
uint8_t v___x_330_; uint8_t v___x_331_; 
v___x_330_ = 97;
v___x_331_ = lean_uint8_dec_le(v___x_330_, v_c_310_);
if (v___x_331_ == 0)
{
goto v___jp_325_;
}
else
{
uint8_t v___x_332_; uint8_t v___x_333_; 
v___x_332_ = 122;
v___x_333_ = lean_uint8_dec_le(v_c_310_, v___x_332_);
if (v___x_333_ == 0)
{
goto v___jp_325_;
}
else
{
return v___x_333_;
}
}
v___jp_311_:
{
uint8_t v___x_312_; uint8_t v___x_313_; 
v___x_312_ = 95;
v___x_313_ = lean_uint8_dec_eq(v_c_310_, v___x_312_);
if (v___x_313_ == 0)
{
uint8_t v___x_314_; uint8_t v___x_315_; 
v___x_314_ = 39;
v___x_315_ = lean_uint8_dec_eq(v_c_310_, v___x_314_);
if (v___x_315_ == 0)
{
uint8_t v___x_316_; uint8_t v___x_317_; 
v___x_316_ = 33;
v___x_317_ = lean_uint8_dec_eq(v_c_310_, v___x_316_);
if (v___x_317_ == 0)
{
uint8_t v___x_318_; uint8_t v___x_319_; 
v___x_318_ = 63;
v___x_319_ = lean_uint8_dec_eq(v_c_310_, v___x_318_);
return v___x_319_;
}
else
{
return v___x_317_;
}
}
else
{
return v___x_315_;
}
}
else
{
return v___x_313_;
}
}
v___jp_320_:
{
uint8_t v___x_321_; uint8_t v___x_322_; 
v___x_321_ = 48;
v___x_322_ = lean_uint8_dec_le(v___x_321_, v_c_310_);
if (v___x_322_ == 0)
{
goto v___jp_311_;
}
else
{
uint8_t v___x_323_; uint8_t v___x_324_; 
v___x_323_ = 57;
v___x_324_ = lean_uint8_dec_le(v_c_310_, v___x_323_);
if (v___x_324_ == 0)
{
goto v___jp_311_;
}
else
{
return v___x_324_;
}
}
}
v___jp_325_:
{
uint8_t v___x_326_; uint8_t v___x_327_; 
v___x_326_ = 65;
v___x_327_ = lean_uint8_dec_le(v___x_326_, v_c_310_);
if (v___x_327_ == 0)
{
goto v___jp_320_;
}
else
{
uint8_t v___x_328_; uint8_t v___x_329_; 
v___x_328_ = 90;
v___x_329_ = lean_uint8_dec_le(v_c_310_, v___x_328_);
if (v___x_329_ == 0)
{
goto v___jp_320_;
}
else
{
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdRestAscii___boxed(lean_object* v_c_334_){
_start:
{
uint8_t v_c_boxed_335_; uint8_t v_res_336_; lean_object* v_r_337_; 
v_c_boxed_335_ = lean_unbox(v_c_334_);
v_res_336_ = l_Lean_isIdRestAscii(v_c_boxed_335_);
v_r_337_ = lean_box(v_res_336_);
return v_r_337_;
}
}
static uint32_t _init_l_Lean_idBeginEscape(void){
_start:
{
uint32_t v___x_338_; 
v___x_338_ = 171;
return v___x_338_;
}
}
static uint32_t _init_l_Lean_idEndEscape(void){
_start:
{
uint32_t v___x_339_; 
v___x_339_ = 187;
return v___x_339_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdBeginEscape(uint32_t v_c_340_){
_start:
{
uint32_t v___x_341_; uint8_t v___x_342_; 
v___x_341_ = 171;
v___x_342_ = lean_uint32_dec_eq(v_c_340_, v___x_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIdBeginEscape___boxed(lean_object* v_c_343_){
_start:
{
uint32_t v_c_boxed_344_; uint8_t v_res_345_; lean_object* v_r_346_; 
v_c_boxed_344_ = lean_unbox_uint32(v_c_343_);
lean_dec(v_c_343_);
v_res_345_ = l_Lean_isIdBeginEscape(v_c_boxed_344_);
v_r_346_ = lean_box(v_res_345_);
return v_r_346_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdEndEscape(uint32_t v_c_347_){
_start:
{
uint32_t v___x_348_; uint8_t v___x_349_; 
v___x_348_ = 187;
v___x_349_ = lean_uint32_dec_eq(v_c_347_, v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIdEndEscape___boxed(lean_object* v_c_350_){
_start:
{
uint32_t v_c_boxed_351_; uint8_t v_res_352_; lean_object* v_r_353_; 
v_c_boxed_351_ = lean_unbox_uint32(v_c_350_);
lean_dec(v_c_350_);
v_res_352_ = l_Lean_isIdEndEscape(v_c_boxed_351_);
v_r_353_ = lean_box(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getRoot(lean_object* v_x_354_){
_start:
{
if (lean_obj_tag(v_x_354_) == 0)
{
return v_x_354_;
}
else
{
lean_object* v_pre_355_; 
v_pre_355_ = lean_ctor_get(v_x_354_, 0);
if (lean_obj_tag(v_pre_355_) == 0)
{
lean_inc(v_x_354_);
return v_x_354_;
}
else
{
v_x_354_ = v_pre_355_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getRoot___boxed(lean_object* v_x_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_Name_getRoot(v_x_357_);
lean_dec(v_x_357_);
return v_res_358_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isInaccessibleUserName(lean_object* v_x_360_){
_start:
{
switch(lean_obj_tag(v_x_360_))
{
case 1:
{
lean_object* v_str_361_; uint32_t v___x_362_; uint8_t v___x_363_; 
v_str_361_ = lean_ctor_get(v_x_360_, 1);
lean_inc_ref_n(v_str_361_, 2);
lean_dec_ref_known(v_x_360_, 2);
v___x_362_ = 10013;
v___x_363_ = lean_string_contains(v_str_361_, v___x_362_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_364_ = ((lean_object*)(l_Lean_Name_isInaccessibleUserName___closed__0));
v___x_365_ = lean_string_dec_eq(v_str_361_, v___x_364_);
lean_dec_ref(v_str_361_);
return v___x_365_;
}
else
{
lean_dec_ref(v_str_361_);
return v___x_363_;
}
}
case 2:
{
lean_object* v_pre_366_; 
v_pre_366_ = lean_ctor_get(v_x_360_, 0);
lean_inc(v_pre_366_);
lean_dec_ref_known(v_x_360_, 2);
v_x_360_ = v_pre_366_;
goto _start;
}
default: 
{
uint8_t v___x_368_; 
lean_dec(v_x_360_);
v___x_368_ = 0;
return v___x_368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isInaccessibleUserName___boxed(lean_object* v_x_369_){
_start:
{
uint8_t v_res_370_; lean_object* v_r_371_; 
v_res_370_ = l_Lean_Name_isInaccessibleUserName(v_x_369_);
v_r_371_ = lean_box(v_res_370_);
return v_r_371_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(lean_object* v_s_372_, lean_object* v_i_373_){
_start:
{
lean_object* v___x_378_; uint8_t v___x_379_; 
v___x_378_ = lean_string_utf8_byte_size(v_s_372_);
v___x_379_ = lean_nat_dec_lt(v_i_373_, v___x_378_);
if (v___x_379_ == 0)
{
uint8_t v___x_380_; 
lean_dec(v_i_373_);
v___x_380_ = 1;
return v___x_380_;
}
else
{
uint8_t v_c_381_; uint8_t v___x_401_; uint8_t v___x_402_; 
lean_inc(v_i_373_);
v_c_381_ = lean_string_get_byte_fast(v_s_372_, v_i_373_);
v___x_401_ = 97;
v___x_402_ = lean_uint8_dec_le(v___x_401_, v_c_381_);
if (v___x_402_ == 0)
{
goto v___jp_396_;
}
else
{
uint8_t v___x_403_; uint8_t v___x_404_; 
v___x_403_ = 122;
v___x_404_ = lean_uint8_dec_le(v_c_381_, v___x_403_);
if (v___x_404_ == 0)
{
goto v___jp_396_;
}
else
{
goto v___jp_374_;
}
}
v___jp_382_:
{
uint8_t v___x_383_; uint8_t v___x_384_; 
v___x_383_ = 95;
v___x_384_ = lean_uint8_dec_eq(v_c_381_, v___x_383_);
if (v___x_384_ == 0)
{
uint8_t v___x_385_; uint8_t v___x_386_; 
v___x_385_ = 39;
v___x_386_ = lean_uint8_dec_eq(v_c_381_, v___x_385_);
if (v___x_386_ == 0)
{
uint8_t v___x_387_; uint8_t v___x_388_; 
v___x_387_ = 33;
v___x_388_ = lean_uint8_dec_eq(v_c_381_, v___x_387_);
if (v___x_388_ == 0)
{
uint8_t v___x_389_; uint8_t v___x_390_; 
v___x_389_ = 63;
v___x_390_ = lean_uint8_dec_eq(v_c_381_, v___x_389_);
if (v___x_390_ == 0)
{
lean_dec(v_i_373_);
return v___x_390_;
}
else
{
goto v___jp_374_;
}
}
else
{
goto v___jp_374_;
}
}
else
{
goto v___jp_374_;
}
}
else
{
goto v___jp_374_;
}
}
v___jp_391_:
{
uint8_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 48;
v___x_393_ = lean_uint8_dec_le(v___x_392_, v_c_381_);
if (v___x_393_ == 0)
{
goto v___jp_382_;
}
else
{
uint8_t v___x_394_; uint8_t v___x_395_; 
v___x_394_ = 57;
v___x_395_ = lean_uint8_dec_le(v_c_381_, v___x_394_);
if (v___x_395_ == 0)
{
goto v___jp_382_;
}
else
{
goto v___jp_374_;
}
}
}
v___jp_396_:
{
uint8_t v___x_397_; uint8_t v___x_398_; 
v___x_397_ = 65;
v___x_398_ = lean_uint8_dec_le(v___x_397_, v_c_381_);
if (v___x_398_ == 0)
{
goto v___jp_391_;
}
else
{
uint8_t v___x_399_; uint8_t v___x_400_; 
v___x_399_ = 90;
v___x_400_ = lean_uint8_dec_le(v_c_381_, v___x_399_);
if (v___x_400_ == 0)
{
goto v___jp_391_;
}
else
{
goto v___jp_374_;
}
}
}
}
v___jp_374_:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_nat_add(v_i_373_, v___x_375_);
lean_dec(v_i_373_);
v_i_373_ = v___x_376_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest___boxed(lean_object* v_s_405_, lean_object* v_i_406_){
_start:
{
uint8_t v_res_407_; lean_object* v_r_408_; 
v_res_407_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_405_, v_i_406_);
lean_dec_ref(v_s_405_);
v_r_408_ = lean_box(v_res_407_);
return v_r_408_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg(lean_object* v_s_409_){
_start:
{
lean_object* v___x_413_; uint8_t v_c_414_; uint8_t v___x_423_; uint8_t v___x_424_; 
v___x_413_ = lean_unsigned_to_nat(0u);
v_c_414_ = lean_string_get_byte_fast(v_s_409_, v___x_413_);
v___x_423_ = 97;
v___x_424_ = lean_uint8_dec_le(v___x_423_, v_c_414_);
if (v___x_424_ == 0)
{
goto v___jp_418_;
}
else
{
uint8_t v___x_425_; uint8_t v___x_426_; 
v___x_425_ = 122;
v___x_426_ = lean_uint8_dec_le(v_c_414_, v___x_425_);
if (v___x_426_ == 0)
{
goto v___jp_418_;
}
else
{
goto v___jp_410_;
}
}
v___jp_410_:
{
lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(1u);
v___x_412_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_409_, v___x_411_);
return v___x_412_;
}
v___jp_415_:
{
uint8_t v___x_416_; uint8_t v___x_417_; 
v___x_416_ = 95;
v___x_417_ = lean_uint8_dec_eq(v_c_414_, v___x_416_);
if (v___x_417_ == 0)
{
return v___x_417_;
}
else
{
goto v___jp_410_;
}
}
v___jp_418_:
{
uint8_t v___x_419_; uint8_t v___x_420_; 
v___x_419_ = 65;
v___x_420_ = lean_uint8_dec_le(v___x_419_, v_c_414_);
if (v___x_420_ == 0)
{
goto v___jp_415_;
}
else
{
uint8_t v___x_421_; uint8_t v___x_422_; 
v___x_421_ = 90;
v___x_422_ = lean_uint8_dec_le(v_c_414_, v___x_421_);
if (v___x_422_ == 0)
{
goto v___jp_415_;
}
else
{
goto v___jp_410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg___boxed(lean_object* v_s_427_){
_start:
{
uint8_t v_res_428_; lean_object* v_r_429_; 
v_res_428_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg(v_s_427_);
lean_dec_ref(v_s_427_);
v_r_429_ = lean_box(v_res_428_);
return v_r_429_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii(lean_object* v_s_430_, lean_object* v_h_431_){
_start:
{
lean_object* v___x_435_; uint8_t v_c_436_; uint8_t v___x_445_; uint8_t v___x_446_; 
v___x_435_ = lean_unsigned_to_nat(0u);
v_c_436_ = lean_string_get_byte_fast(v_s_430_, v___x_435_);
v___x_445_ = 97;
v___x_446_ = lean_uint8_dec_le(v___x_445_, v_c_436_);
if (v___x_446_ == 0)
{
goto v___jp_440_;
}
else
{
uint8_t v___x_447_; uint8_t v___x_448_; 
v___x_447_ = 122;
v___x_448_ = lean_uint8_dec_le(v_c_436_, v___x_447_);
if (v___x_448_ == 0)
{
goto v___jp_440_;
}
else
{
goto v___jp_432_;
}
}
v___jp_432_:
{
lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_433_ = lean_unsigned_to_nat(1u);
v___x_434_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_430_, v___x_433_);
return v___x_434_;
}
v___jp_437_:
{
uint8_t v___x_438_; uint8_t v___x_439_; 
v___x_438_ = 95;
v___x_439_ = lean_uint8_dec_eq(v_c_436_, v___x_438_);
if (v___x_439_ == 0)
{
return v___x_439_;
}
else
{
goto v___jp_432_;
}
}
v___jp_440_:
{
uint8_t v___x_441_; uint8_t v___x_442_; 
v___x_441_ = 65;
v___x_442_ = lean_uint8_dec_le(v___x_441_, v_c_436_);
if (v___x_442_ == 0)
{
goto v___jp_437_;
}
else
{
uint8_t v___x_443_; uint8_t v___x_444_; 
v___x_443_ = 90;
v___x_444_ = lean_uint8_dec_le(v_c_436_, v___x_443_);
if (v___x_444_ == 0)
{
goto v___jp_437_;
}
else
{
goto v___jp_432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___boxed(lean_object* v_s_449_, lean_object* v_h_450_){
_start:
{
uint8_t v_res_451_; lean_object* v_r_452_; 
v_res_451_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii(v_s_449_, v_h_450_);
lean_dec_ref(v_s_449_);
v_r_452_ = lean_box(v_res_451_);
return v_r_452_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg(lean_object* v_s_454_){
_start:
{
uint32_t v___y_464_; uint32_t v___y_469_; lean_object* v___x_484_; uint8_t v_c_485_; uint8_t v___x_494_; uint8_t v___x_495_; 
v___x_484_ = lean_unsigned_to_nat(0u);
v_c_485_ = lean_string_get_byte_fast(v_s_454_, v___x_484_);
v___x_494_ = 97;
v___x_495_ = lean_uint8_dec_le(v___x_494_, v_c_485_);
if (v___x_495_ == 0)
{
goto v___jp_489_;
}
else
{
uint8_t v___x_496_; uint8_t v___x_497_; 
v___x_496_ = 122;
v___x_497_ = lean_uint8_dec_le(v_c_485_, v___x_496_);
if (v___x_497_ == 0)
{
goto v___jp_489_;
}
else
{
goto v___jp_481_;
}
}
v___jp_455_:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_456_ = lean_unsigned_to_nat(0u);
v___x_457_ = lean_string_utf8_byte_size(v_s_454_);
v___x_458_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_458_, 0, v_s_454_);
lean_ctor_set(v___x_458_, 1, v___x_456_);
lean_ctor_set(v___x_458_, 2, v___x_457_);
v___x_459_ = lean_unsigned_to_nat(1u);
v___x_460_ = lean_substring_drop(v___x_458_, v___x_459_);
v___x_461_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0));
v___x_462_ = lean_substring_all(v___x_460_, v___x_461_);
return v___x_462_;
}
v___jp_463_:
{
uint32_t v___x_465_; uint8_t v___x_466_; 
v___x_465_ = 95;
v___x_466_ = lean_uint32_dec_eq(v___y_464_, v___x_465_);
if (v___x_466_ == 0)
{
uint8_t v___x_467_; 
v___x_467_ = l_Lean_isLetterLike(v___y_464_);
if (v___x_467_ == 0)
{
lean_dec_ref(v_s_454_);
return v___x_467_;
}
else
{
goto v___jp_455_;
}
}
else
{
goto v___jp_455_;
}
}
v___jp_468_:
{
uint32_t v___x_470_; uint8_t v___x_471_; 
v___x_470_ = 97;
v___x_471_ = lean_uint32_dec_le(v___x_470_, v___y_469_);
if (v___x_471_ == 0)
{
v___y_464_ = v___y_469_;
goto v___jp_463_;
}
else
{
uint32_t v___x_472_; uint8_t v___x_473_; 
v___x_472_ = 122;
v___x_473_ = lean_uint32_dec_le(v___y_469_, v___x_472_);
if (v___x_473_ == 0)
{
v___y_464_ = v___y_469_;
goto v___jp_463_;
}
else
{
goto v___jp_455_;
}
}
}
v___jp_474_:
{
lean_object* v___x_475_; uint32_t v___x_476_; uint32_t v___x_477_; uint8_t v___x_478_; 
v___x_475_ = lean_unsigned_to_nat(0u);
v___x_476_ = lean_string_utf8_get(v_s_454_, v___x_475_);
v___x_477_ = 65;
v___x_478_ = lean_uint32_dec_le(v___x_477_, v___x_476_);
if (v___x_478_ == 0)
{
v___y_469_ = v___x_476_;
goto v___jp_468_;
}
else
{
uint32_t v___x_479_; uint8_t v___x_480_; 
v___x_479_ = 90;
v___x_480_ = lean_uint32_dec_le(v___x_476_, v___x_479_);
if (v___x_480_ == 0)
{
v___y_469_ = v___x_476_;
goto v___jp_468_;
}
else
{
goto v___jp_455_;
}
}
}
v___jp_481_:
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = lean_unsigned_to_nat(1u);
v___x_483_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_454_, v___x_482_);
if (v___x_483_ == 0)
{
goto v___jp_474_;
}
else
{
lean_dec_ref(v_s_454_);
return v___x_483_;
}
}
v___jp_486_:
{
uint8_t v___x_487_; uint8_t v___x_488_; 
v___x_487_ = 95;
v___x_488_ = lean_uint8_dec_eq(v_c_485_, v___x_487_);
if (v___x_488_ == 0)
{
goto v___jp_474_;
}
else
{
goto v___jp_481_;
}
}
v___jp_489_:
{
uint8_t v___x_490_; uint8_t v___x_491_; 
v___x_490_ = 65;
v___x_491_ = lean_uint8_dec_le(v___x_490_, v_c_485_);
if (v___x_491_ == 0)
{
goto v___jp_486_;
}
else
{
uint8_t v___x_492_; uint8_t v___x_493_; 
v___x_492_ = 90;
v___x_493_ = lean_uint8_dec_le(v_c_485_, v___x_492_);
if (v___x_493_ == 0)
{
goto v___jp_486_;
}
else
{
goto v___jp_481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___boxed(lean_object* v_s_498_){
_start:
{
uint8_t v_res_499_; lean_object* v_r_500_; 
v_res_499_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg(v_s_498_);
v_r_500_ = lean_box(v_res_499_);
return v_r_500_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape(lean_object* v_s_501_, lean_object* v_h_502_){
_start:
{
uint32_t v___y_512_; uint32_t v___y_517_; lean_object* v___x_532_; uint8_t v_c_533_; uint8_t v___x_542_; uint8_t v___x_543_; 
v___x_532_ = lean_unsigned_to_nat(0u);
v_c_533_ = lean_string_get_byte_fast(v_s_501_, v___x_532_);
v___x_542_ = 97;
v___x_543_ = lean_uint8_dec_le(v___x_542_, v_c_533_);
if (v___x_543_ == 0)
{
goto v___jp_537_;
}
else
{
uint8_t v___x_544_; uint8_t v___x_545_; 
v___x_544_ = 122;
v___x_545_ = lean_uint8_dec_le(v_c_533_, v___x_544_);
if (v___x_545_ == 0)
{
goto v___jp_537_;
}
else
{
goto v___jp_529_;
}
}
v___jp_503_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; uint8_t v___x_510_; 
v___x_504_ = lean_unsigned_to_nat(0u);
v___x_505_ = lean_string_utf8_byte_size(v_s_501_);
v___x_506_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_506_, 0, v_s_501_);
lean_ctor_set(v___x_506_, 1, v___x_504_);
lean_ctor_set(v___x_506_, 2, v___x_505_);
v___x_507_ = lean_unsigned_to_nat(1u);
v___x_508_ = lean_substring_drop(v___x_506_, v___x_507_);
v___x_509_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0));
v___x_510_ = lean_substring_all(v___x_508_, v___x_509_);
return v___x_510_;
}
v___jp_511_:
{
uint32_t v___x_513_; uint8_t v___x_514_; 
v___x_513_ = 95;
v___x_514_ = lean_uint32_dec_eq(v___y_512_, v___x_513_);
if (v___x_514_ == 0)
{
uint8_t v___x_515_; 
v___x_515_ = l_Lean_isLetterLike(v___y_512_);
if (v___x_515_ == 0)
{
lean_dec_ref(v_s_501_);
return v___x_515_;
}
else
{
goto v___jp_503_;
}
}
else
{
goto v___jp_503_;
}
}
v___jp_516_:
{
uint32_t v___x_518_; uint8_t v___x_519_; 
v___x_518_ = 97;
v___x_519_ = lean_uint32_dec_le(v___x_518_, v___y_517_);
if (v___x_519_ == 0)
{
v___y_512_ = v___y_517_;
goto v___jp_511_;
}
else
{
uint32_t v___x_520_; uint8_t v___x_521_; 
v___x_520_ = 122;
v___x_521_ = lean_uint32_dec_le(v___y_517_, v___x_520_);
if (v___x_521_ == 0)
{
v___y_512_ = v___y_517_;
goto v___jp_511_;
}
else
{
goto v___jp_503_;
}
}
}
v___jp_522_:
{
lean_object* v___x_523_; uint32_t v___x_524_; uint32_t v___x_525_; uint8_t v___x_526_; 
v___x_523_ = lean_unsigned_to_nat(0u);
v___x_524_ = lean_string_utf8_get(v_s_501_, v___x_523_);
v___x_525_ = 65;
v___x_526_ = lean_uint32_dec_le(v___x_525_, v___x_524_);
if (v___x_526_ == 0)
{
v___y_517_ = v___x_524_;
goto v___jp_516_;
}
else
{
uint32_t v___x_527_; uint8_t v___x_528_; 
v___x_527_ = 90;
v___x_528_ = lean_uint32_dec_le(v___x_524_, v___x_527_);
if (v___x_528_ == 0)
{
v___y_517_ = v___x_524_;
goto v___jp_516_;
}
else
{
goto v___jp_503_;
}
}
}
v___jp_529_:
{
lean_object* v___x_530_; uint8_t v___x_531_; 
v___x_530_ = lean_unsigned_to_nat(1u);
v___x_531_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_501_, v___x_530_);
if (v___x_531_ == 0)
{
goto v___jp_522_;
}
else
{
lean_dec_ref(v_s_501_);
return v___x_531_;
}
}
v___jp_534_:
{
uint8_t v___x_535_; uint8_t v___x_536_; 
v___x_535_ = 95;
v___x_536_ = lean_uint8_dec_eq(v_c_533_, v___x_535_);
if (v___x_536_ == 0)
{
goto v___jp_522_;
}
else
{
goto v___jp_529_;
}
}
v___jp_537_:
{
uint8_t v___x_538_; uint8_t v___x_539_; 
v___x_538_ = 65;
v___x_539_ = lean_uint8_dec_le(v___x_538_, v_c_533_);
if (v___x_539_ == 0)
{
goto v___jp_534_;
}
else
{
uint8_t v___x_540_; uint8_t v___x_541_; 
v___x_540_ = 90;
v___x_541_ = lean_uint8_dec_le(v_c_533_, v___x_540_);
if (v___x_541_ == 0)
{
goto v___jp_534_;
}
else
{
goto v___jp_529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___boxed(lean_object* v_s_546_, lean_object* v_h_547_){
_start:
{
uint8_t v_res_548_; lean_object* v_r_549_; 
v_res_548_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape(v_s_546_, v_h_547_);
v_r_549_ = lean_box(v_res_548_);
return v_r_549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape(lean_object* v_s_552_){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_553_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_554_ = lean_string_append(v___x_553_, v_s_552_);
v___x_555_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_556_ = lean_string_append(v___x_554_, v___x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___boxed(lean_object* v_s_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l___private_Init_Meta_Defs_0__Lean_Name_escape(v_s_557_);
lean_dec_ref(v_s_557_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart(lean_object* v_s_560_, uint8_t v_force_561_){
_start:
{
uint32_t v___y_581_; uint32_t v___y_586_; lean_object* v___x_602_; lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_602_ = lean_unsigned_to_nat(0u);
v___x_603_ = lean_string_utf8_byte_size(v_s_560_);
v___x_604_ = lean_nat_dec_lt(v___x_602_, v___x_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_605_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_606_ = lean_string_append(v___x_605_, v_s_560_);
lean_dec_ref(v_s_560_);
v___x_607_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_608_ = lean_string_append(v___x_606_, v___x_607_);
v___x_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
return v___x_609_;
}
else
{
if (v_force_561_ == 0)
{
uint8_t v_c_610_; uint8_t v___x_619_; uint8_t v___x_620_; 
v_c_610_ = lean_string_get_byte_fast(v_s_560_, v___x_602_);
v___x_619_ = 97;
v___x_620_ = lean_uint8_dec_le(v___x_619_, v_c_610_);
if (v___x_620_ == 0)
{
goto v___jp_614_;
}
else
{
uint8_t v___x_621_; uint8_t v___x_622_; 
v___x_621_ = 122;
v___x_622_ = lean_uint8_dec_le(v_c_610_, v___x_621_);
if (v___x_622_ == 0)
{
goto v___jp_614_;
}
else
{
goto v___jp_598_;
}
}
v___jp_611_:
{
uint8_t v___x_612_; uint8_t v___x_613_; 
v___x_612_ = 95;
v___x_613_ = lean_uint8_dec_eq(v_c_610_, v___x_612_);
if (v___x_613_ == 0)
{
goto v___jp_591_;
}
else
{
goto v___jp_598_;
}
}
v___jp_614_:
{
uint8_t v___x_615_; uint8_t v___x_616_; 
v___x_615_ = 65;
v___x_616_ = lean_uint8_dec_le(v___x_615_, v_c_610_);
if (v___x_616_ == 0)
{
goto v___jp_611_;
}
else
{
uint8_t v___x_617_; uint8_t v___x_618_; 
v___x_617_ = 90;
v___x_618_ = lean_uint8_dec_le(v_c_610_, v___x_617_);
if (v___x_618_ == 0)
{
goto v___jp_611_;
}
else
{
goto v___jp_598_;
}
}
}
}
else
{
goto v___jp_562_;
}
}
v___jp_562_:
{
lean_object* v___x_563_; uint8_t v___x_564_; 
v___x_563_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0));
lean_inc_ref(v_s_560_);
v___x_564_ = lean_string_any(v_s_560_, v___x_563_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_565_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_566_ = lean_string_append(v___x_565_, v_s_560_);
lean_dec_ref(v_s_560_);
v___x_567_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_568_ = lean_string_append(v___x_566_, v___x_567_);
v___x_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
return v___x_569_;
}
else
{
lean_object* v___x_570_; 
lean_dec_ref(v_s_560_);
v___x_570_ = lean_box(0);
return v___x_570_;
}
}
v___jp_571_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_572_ = lean_unsigned_to_nat(0u);
v___x_573_ = lean_string_utf8_byte_size(v_s_560_);
lean_inc_ref(v_s_560_);
v___x_574_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_574_, 0, v_s_560_);
lean_ctor_set(v___x_574_, 1, v___x_572_);
lean_ctor_set(v___x_574_, 2, v___x_573_);
v___x_575_ = lean_unsigned_to_nat(1u);
v___x_576_ = lean_substring_drop(v___x_574_, v___x_575_);
v___x_577_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0));
v___x_578_ = lean_substring_all(v___x_576_, v___x_577_);
if (v___x_578_ == 0)
{
goto v___jp_562_;
}
else
{
lean_object* v___x_579_; 
v___x_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_579_, 0, v_s_560_);
return v___x_579_;
}
}
v___jp_580_:
{
uint32_t v___x_582_; uint8_t v___x_583_; 
v___x_582_ = 95;
v___x_583_ = lean_uint32_dec_eq(v___y_581_, v___x_582_);
if (v___x_583_ == 0)
{
uint8_t v___x_584_; 
v___x_584_ = l_Lean_isLetterLike(v___y_581_);
if (v___x_584_ == 0)
{
goto v___jp_562_;
}
else
{
goto v___jp_571_;
}
}
else
{
goto v___jp_571_;
}
}
v___jp_585_:
{
uint32_t v___x_587_; uint8_t v___x_588_; 
v___x_587_ = 97;
v___x_588_ = lean_uint32_dec_le(v___x_587_, v___y_586_);
if (v___x_588_ == 0)
{
v___y_581_ = v___y_586_;
goto v___jp_580_;
}
else
{
uint32_t v___x_589_; uint8_t v___x_590_; 
v___x_589_ = 122;
v___x_590_ = lean_uint32_dec_le(v___y_586_, v___x_589_);
if (v___x_590_ == 0)
{
v___y_581_ = v___y_586_;
goto v___jp_580_;
}
else
{
goto v___jp_571_;
}
}
}
v___jp_591_:
{
lean_object* v___x_592_; uint32_t v___x_593_; uint32_t v___x_594_; uint8_t v___x_595_; 
v___x_592_ = lean_unsigned_to_nat(0u);
v___x_593_ = lean_string_utf8_get(v_s_560_, v___x_592_);
v___x_594_ = 65;
v___x_595_ = lean_uint32_dec_le(v___x_594_, v___x_593_);
if (v___x_595_ == 0)
{
v___y_586_ = v___x_593_;
goto v___jp_585_;
}
else
{
uint32_t v___x_596_; uint8_t v___x_597_; 
v___x_596_ = 90;
v___x_597_ = lean_uint32_dec_le(v___x_593_, v___x_596_);
if (v___x_597_ == 0)
{
v___y_586_ = v___x_593_;
goto v___jp_585_;
}
else
{
goto v___jp_571_;
}
}
}
v___jp_598_:
{
lean_object* v___x_599_; uint8_t v___x_600_; 
v___x_599_ = lean_unsigned_to_nat(1u);
v___x_600_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_560_, v___x_599_);
if (v___x_600_ == 0)
{
goto v___jp_591_;
}
else
{
lean_object* v___x_601_; 
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v_s_560_);
return v___x_601_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___boxed(lean_object* v_s_623_, lean_object* v_force_624_){
_start:
{
uint8_t v_force_boxed_625_; lean_object* v_res_626_; 
v_force_boxed_625_ = lean_unbox(v_force_624_);
v_res_626_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart(v_s_623_, v_force_boxed_625_);
return v_res_626_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0(uint32_t v___y_627_){
_start:
{
uint32_t v___x_628_; uint8_t v___x_629_; 
v___x_628_ = 187;
v___x_629_ = lean_uint32_dec_eq(v___y_627_, v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0___boxed(lean_object* v___y_630_){
_start:
{
uint32_t v___y_394__boxed_631_; uint8_t v_res_632_; lean_object* v_r_633_; 
v___y_394__boxed_631_ = lean_unbox_uint32(v___y_630_);
lean_dec(v___y_630_);
v_res_632_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0(v___y_394__boxed_631_);
v_r_633_ = lean_box(v_res_632_);
return v_r_633_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1(uint32_t v___y_634_){
_start:
{
uint32_t v___x_656_; uint8_t v___x_657_; 
v___x_656_ = 65;
v___x_657_ = lean_uint32_dec_le(v___x_656_, v___y_634_);
if (v___x_657_ == 0)
{
goto v___jp_651_;
}
else
{
uint32_t v___x_658_; uint8_t v___x_659_; 
v___x_658_ = 90;
v___x_659_ = lean_uint32_dec_le(v___y_634_, v___x_658_);
if (v___x_659_ == 0)
{
goto v___jp_651_;
}
else
{
return v___x_659_;
}
}
v___jp_635_:
{
uint32_t v___x_636_; uint8_t v___x_637_; 
v___x_636_ = 95;
v___x_637_ = lean_uint32_dec_eq(v___y_634_, v___x_636_);
if (v___x_637_ == 0)
{
uint32_t v___x_638_; uint8_t v___x_639_; 
v___x_638_ = 39;
v___x_639_ = lean_uint32_dec_eq(v___y_634_, v___x_638_);
if (v___x_639_ == 0)
{
uint32_t v___x_640_; uint8_t v___x_641_; 
v___x_640_ = 33;
v___x_641_ = lean_uint32_dec_eq(v___y_634_, v___x_640_);
if (v___x_641_ == 0)
{
uint32_t v___x_642_; uint8_t v___x_643_; 
v___x_642_ = 63;
v___x_643_ = lean_uint32_dec_eq(v___y_634_, v___x_642_);
if (v___x_643_ == 0)
{
uint8_t v___x_644_; 
v___x_644_ = l_Lean_isLetterLike(v___y_634_);
if (v___x_644_ == 0)
{
uint8_t v___x_645_; 
v___x_645_ = l_Lean_isSubScriptAlnum(v___y_634_);
return v___x_645_;
}
else
{
return v___x_644_;
}
}
else
{
return v___x_643_;
}
}
else
{
return v___x_641_;
}
}
else
{
return v___x_639_;
}
}
else
{
return v___x_637_;
}
}
v___jp_646_:
{
uint32_t v___x_647_; uint8_t v___x_648_; 
v___x_647_ = 48;
v___x_648_ = lean_uint32_dec_le(v___x_647_, v___y_634_);
if (v___x_648_ == 0)
{
goto v___jp_635_;
}
else
{
uint32_t v___x_649_; uint8_t v___x_650_; 
v___x_649_ = 57;
v___x_650_ = lean_uint32_dec_le(v___y_634_, v___x_649_);
if (v___x_650_ == 0)
{
goto v___jp_635_;
}
else
{
return v___x_650_;
}
}
}
v___jp_651_:
{
uint32_t v___x_652_; uint8_t v___x_653_; 
v___x_652_ = 97;
v___x_653_ = lean_uint32_dec_le(v___x_652_, v___y_634_);
if (v___x_653_ == 0)
{
goto v___jp_646_;
}
else
{
uint32_t v___x_654_; uint8_t v___x_655_; 
v___x_654_ = 122;
v___x_655_ = lean_uint32_dec_le(v___y_634_, v___x_654_);
if (v___x_655_ == 0)
{
goto v___jp_646_;
}
else
{
return v___x_655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1___boxed(lean_object* v___y_660_){
_start:
{
uint32_t v___y_401__boxed_661_; uint8_t v_res_662_; lean_object* v_r_663_; 
v___y_401__boxed_661_ = lean_unbox_uint32(v___y_660_);
lean_dec(v___y_660_);
v_res_662_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1(v___y_401__boxed_661_);
v_r_663_ = lean_box(v_res_662_);
return v_r_663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(uint8_t v_escape_666_, lean_object* v_s_667_, uint8_t v_force_668_){
_start:
{
if (v_escape_666_ == 0)
{
return v_s_667_;
}
else
{
lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_669_ = lean_unsigned_to_nat(0u);
v___x_670_ = lean_string_utf8_byte_size(v_s_667_);
v___x_671_ = lean_nat_dec_lt(v___x_669_, v___x_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_672_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_673_ = lean_string_append(v___x_672_, v_s_667_);
lean_dec_ref(v_s_667_);
v___x_674_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_675_ = lean_string_append(v___x_673_, v___x_674_);
return v___x_675_;
}
else
{
lean_object* v___f_676_; 
v___f_676_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0));
if (v_force_668_ == 0)
{
lean_object* v___f_683_; uint32_t v___y_690_; uint32_t v___y_695_; uint8_t v_c_709_; uint8_t v___x_718_; uint8_t v___x_719_; 
v___f_683_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1));
v_c_709_ = lean_string_get_byte_fast(v_s_667_, v___x_669_);
v___x_718_ = 97;
v___x_719_ = lean_uint8_dec_le(v___x_718_, v_c_709_);
if (v___x_719_ == 0)
{
goto v___jp_713_;
}
else
{
uint8_t v___x_720_; uint8_t v___x_721_; 
v___x_720_ = 122;
v___x_721_ = lean_uint8_dec_le(v_c_709_, v___x_720_);
if (v___x_721_ == 0)
{
goto v___jp_713_;
}
else
{
goto v___jp_706_;
}
}
v___jp_684_:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
lean_inc_ref(v_s_667_);
v___x_685_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_685_, 0, v_s_667_);
lean_ctor_set(v___x_685_, 1, v___x_669_);
lean_ctor_set(v___x_685_, 2, v___x_670_);
v___x_686_ = lean_unsigned_to_nat(1u);
v___x_687_ = lean_substring_drop(v___x_685_, v___x_686_);
v___x_688_ = lean_substring_all(v___x_687_, v___f_683_);
if (v___x_688_ == 0)
{
goto v___jp_677_;
}
else
{
return v_s_667_;
}
}
v___jp_689_:
{
uint32_t v___x_691_; uint8_t v___x_692_; 
v___x_691_ = 95;
v___x_692_ = lean_uint32_dec_eq(v___y_690_, v___x_691_);
if (v___x_692_ == 0)
{
uint8_t v___x_693_; 
v___x_693_ = l_Lean_isLetterLike(v___y_690_);
if (v___x_693_ == 0)
{
goto v___jp_677_;
}
else
{
goto v___jp_684_;
}
}
else
{
goto v___jp_684_;
}
}
v___jp_694_:
{
uint32_t v___x_696_; uint8_t v___x_697_; 
v___x_696_ = 97;
v___x_697_ = lean_uint32_dec_le(v___x_696_, v___y_695_);
if (v___x_697_ == 0)
{
v___y_690_ = v___y_695_;
goto v___jp_689_;
}
else
{
uint32_t v___x_698_; uint8_t v___x_699_; 
v___x_698_ = 122;
v___x_699_ = lean_uint32_dec_le(v___y_695_, v___x_698_);
if (v___x_699_ == 0)
{
v___y_690_ = v___y_695_;
goto v___jp_689_;
}
else
{
goto v___jp_684_;
}
}
}
v___jp_700_:
{
uint32_t v___x_701_; uint32_t v___x_702_; uint8_t v___x_703_; 
v___x_701_ = lean_string_utf8_get(v_s_667_, v___x_669_);
v___x_702_ = 65;
v___x_703_ = lean_uint32_dec_le(v___x_702_, v___x_701_);
if (v___x_703_ == 0)
{
v___y_695_ = v___x_701_;
goto v___jp_694_;
}
else
{
uint32_t v___x_704_; uint8_t v___x_705_; 
v___x_704_ = 90;
v___x_705_ = lean_uint32_dec_le(v___x_701_, v___x_704_);
if (v___x_705_ == 0)
{
v___y_695_ = v___x_701_;
goto v___jp_694_;
}
else
{
goto v___jp_684_;
}
}
}
v___jp_706_:
{
lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_707_ = lean_unsigned_to_nat(1u);
v___x_708_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_667_, v___x_707_);
if (v___x_708_ == 0)
{
goto v___jp_700_;
}
else
{
return v_s_667_;
}
}
v___jp_710_:
{
uint8_t v___x_711_; uint8_t v___x_712_; 
v___x_711_ = 95;
v___x_712_ = lean_uint8_dec_eq(v_c_709_, v___x_711_);
if (v___x_712_ == 0)
{
goto v___jp_700_;
}
else
{
goto v___jp_706_;
}
}
v___jp_713_:
{
uint8_t v___x_714_; uint8_t v___x_715_; 
v___x_714_ = 65;
v___x_715_ = lean_uint8_dec_le(v___x_714_, v_c_709_);
if (v___x_715_ == 0)
{
goto v___jp_710_;
}
else
{
uint8_t v___x_716_; uint8_t v___x_717_; 
v___x_716_ = 90;
v___x_717_ = lean_uint8_dec_le(v_c_709_, v___x_716_);
if (v___x_717_ == 0)
{
goto v___jp_710_;
}
else
{
goto v___jp_706_;
}
}
}
}
else
{
goto v___jp_677_;
}
v___jp_677_:
{
uint8_t v___x_678_; 
lean_inc_ref(v_s_667_);
v___x_678_ = lean_string_any(v_s_667_, v___f_676_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_679_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_680_ = lean_string_append(v___x_679_, v_s_667_);
lean_dec_ref(v_s_667_);
v___x_681_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_682_ = lean_string_append(v___x_680_, v___x_681_);
return v___x_682_;
}
else
{
return v_s_667_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___boxed(lean_object* v_escape_722_, lean_object* v_s_723_, lean_object* v_force_724_){
_start:
{
uint8_t v_escape_boxed_725_; uint8_t v_force_boxed_726_; lean_object* v_res_727_; 
v_escape_boxed_725_ = lean_unbox(v_escape_722_);
v_force_boxed_726_ = lean_unbox(v_force_724_);
v_res_727_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_boxed_725_, v_s_723_, v_force_boxed_726_);
return v_res_727_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0(lean_object* v_x_728_){
_start:
{
uint8_t v___x_729_; 
v___x_729_ = 0;
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0___boxed(lean_object* v_x_730_){
_start:
{
uint8_t v_res_731_; lean_object* v_r_732_; 
v_res_731_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0(v_x_730_);
lean_dec_ref(v_x_730_);
v_r_732_ = lean_box(v_res_731_);
return v_r_732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(lean_object* v_sep_735_, uint8_t v_escape_736_, lean_object* v_n_737_, lean_object* v_isToken_738_){
_start:
{
switch(lean_obj_tag(v_n_737_))
{
case 0:
{
lean_object* v___x_739_; 
lean_dec_ref(v_isToken_738_);
v___x_739_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0));
return v___x_739_;
}
case 1:
{
lean_object* v_pre_740_; 
v_pre_740_ = lean_ctor_get(v_n_737_, 0);
if (lean_obj_tag(v_pre_740_) == 0)
{
lean_object* v_str_741_; lean_object* v___x_742_; uint8_t v___x_743_; lean_object* v___x_744_; 
v_str_741_ = lean_ctor_get(v_n_737_, 1);
lean_inc_ref_n(v_str_741_, 2);
lean_dec_ref_known(v_n_737_, 2);
v___x_742_ = lean_apply_1(v_isToken_738_, v_str_741_);
v___x_743_ = lean_unbox(v___x_742_);
v___x_744_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_736_, v_str_741_, v___x_743_);
return v___x_744_;
}
else
{
lean_object* v_str_745_; lean_object* v_r_746_; lean_object* v___x_747_; uint8_t v___x_748_; lean_object* v___x_749_; lean_object* v_r_x27_750_; 
lean_inc(v_pre_740_);
v_str_745_ = lean_ctor_get(v_n_737_, 1);
lean_inc_ref_n(v_str_745_, 2);
lean_dec_ref_known(v_n_737_, 2);
lean_inc_ref(v_isToken_738_);
v_r_746_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v_sep_735_, v_escape_736_, v_pre_740_, v_isToken_738_);
v___x_747_ = lean_string_append(v_r_746_, v_sep_735_);
v___x_748_ = 0;
v___x_749_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_736_, v_str_745_, v___x_748_);
lean_inc_ref(v___x_747_);
v_r_x27_750_ = lean_string_append(v___x_747_, v___x_749_);
lean_dec_ref(v___x_749_);
if (v_escape_736_ == 0)
{
lean_dec_ref(v___x_747_);
lean_dec_ref(v_str_745_);
lean_dec_ref(v_isToken_738_);
return v_r_x27_750_;
}
else
{
lean_object* v___x_751_; uint8_t v___x_752_; 
lean_inc_ref(v_r_x27_750_);
v___x_751_ = lean_apply_1(v_isToken_738_, v_r_x27_750_);
v___x_752_ = lean_unbox(v___x_751_);
if (v___x_752_ == 0)
{
lean_dec_ref(v___x_747_);
lean_dec_ref(v_str_745_);
return v_r_x27_750_;
}
else
{
uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
lean_dec_ref(v_r_x27_750_);
v___x_753_ = lean_unbox(v___x_751_);
v___x_754_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_736_, v_str_745_, v___x_753_);
v___x_755_ = lean_string_append(v___x_747_, v___x_754_);
lean_dec_ref(v___x_754_);
return v___x_755_;
}
}
}
}
default: 
{
lean_object* v_pre_756_; 
lean_dec_ref(v_isToken_738_);
v_pre_756_ = lean_ctor_get(v_n_737_, 0);
if (lean_obj_tag(v_pre_756_) == 0)
{
lean_object* v_i_757_; lean_object* v___x_758_; 
v_i_757_ = lean_ctor_get(v_n_737_, 1);
lean_inc(v_i_757_);
lean_dec_ref_known(v_n_737_, 2);
v___x_758_ = l_Nat_reprFast(v_i_757_);
return v___x_758_;
}
else
{
lean_object* v_i_759_; lean_object* v___f_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
lean_inc(v_pre_756_);
v_i_759_ = lean_ctor_get(v_n_737_, 1);
lean_inc(v_i_759_);
lean_dec_ref_known(v_n_737_, 2);
v___f_760_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1));
v___x_761_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v_sep_735_, v_escape_736_, v_pre_756_, v___f_760_);
v___x_762_ = lean_string_append(v___x_761_, v_sep_735_);
v___x_763_ = l_Nat_reprFast(v_i_759_);
v___x_764_ = lean_string_append(v___x_762_, v___x_763_);
lean_dec_ref(v___x_763_);
return v___x_764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___boxed(lean_object* v_sep_765_, lean_object* v_escape_766_, lean_object* v_n_767_, lean_object* v_isToken_768_){
_start:
{
uint8_t v_escape_boxed_769_; lean_object* v_res_770_; 
v_escape_boxed_769_ = lean_unbox(v_escape_766_);
v_res_770_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v_sep_765_, v_escape_boxed_769_, v_n_767_, v_isToken_768_);
lean_dec_ref(v_sep_765_);
return v_res_770_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(lean_object* v_n_776_){
_start:
{
lean_object* v___x_777_; uint8_t v___x_778_; 
v___x_777_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1));
v___x_778_ = lean_name_eq(v_n_776_, v___x_777_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; 
v___x_779_ = l_Lean_Name_getRoot(v_n_776_);
if (lean_obj_tag(v___x_779_) == 1)
{
lean_object* v_str_780_; lean_object* v___x_781_; uint8_t v___x_782_; 
v_str_780_ = lean_ctor_get(v___x_779_, 1);
lean_inc_ref_n(v_str_780_, 2);
lean_dec_ref_known(v___x_779_, 2);
v___x_781_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2));
v___x_782_ = lean_string_isprefixof(v___x_781_, v_str_780_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; uint8_t v___x_784_; 
v___x_783_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3));
v___x_784_ = lean_string_isprefixof(v___x_783_, v_str_780_);
return v___x_784_;
}
else
{
lean_dec_ref(v_str_780_);
return v___x_782_;
}
}
else
{
lean_dec(v___x_779_);
return v___x_778_;
}
}
else
{
return v___x_778_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___boxed(lean_object* v_n_785_){
_start:
{
uint8_t v_res_786_; lean_object* v_r_787_; 
v_res_786_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(v_n_785_);
lean_dec(v_n_785_);
v_r_787_ = lean_box(v_res_786_);
return v_r_787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken(lean_object* v_n_788_, uint8_t v_escape_789_, lean_object* v_isToken_790_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
if (v_escape_789_ == 0)
{
lean_object* v___x_792_; 
v___x_792_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_791_, v_escape_789_, v_n_788_, v_isToken_790_);
return v___x_792_;
}
else
{
uint8_t v___x_793_; 
lean_inc(v_n_788_);
v___x_793_ = l_Lean_Name_isInaccessibleUserName(v_n_788_);
if (v___x_793_ == 0)
{
uint8_t v___x_794_; 
v___x_794_ = l_Lean_Name_hasMacroScopes(v_n_788_);
if (v___x_794_ == 0)
{
uint8_t v___x_795_; 
v___x_795_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(v_n_788_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; 
v___x_796_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_791_, v_escape_789_, v_n_788_, v_isToken_790_);
return v___x_796_;
}
else
{
lean_object* v___x_797_; 
v___x_797_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_791_, v___x_794_, v_n_788_, v_isToken_790_);
return v___x_797_;
}
}
else
{
lean_object* v___x_798_; 
v___x_798_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_791_, v___x_793_, v_n_788_, v_isToken_790_);
return v___x_798_;
}
}
else
{
uint8_t v___x_799_; lean_object* v___x_800_; 
v___x_799_ = 0;
v___x_800_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_791_, v___x_799_, v_n_788_, v_isToken_790_);
return v___x_800_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___boxed(lean_object* v_n_801_, lean_object* v_escape_802_, lean_object* v_isToken_803_){
_start:
{
uint8_t v_escape_boxed_804_; lean_object* v_res_805_; 
v_escape_boxed_804_ = lean_unbox(v_escape_802_);
v_res_805_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken(v_n_801_, v_escape_boxed_804_, v_isToken_803_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(lean_object* v_sep_806_, uint8_t v_escape_807_, lean_object* v_n_808_){
_start:
{
switch(lean_obj_tag(v_n_808_))
{
case 0:
{
lean_object* v___x_809_; 
v___x_809_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0));
return v___x_809_;
}
case 1:
{
lean_object* v_pre_810_; 
v_pre_810_ = lean_ctor_get(v_n_808_, 0);
if (lean_obj_tag(v_pre_810_) == 0)
{
lean_object* v_str_811_; uint8_t v___x_812_; lean_object* v___x_813_; 
v_str_811_ = lean_ctor_get(v_n_808_, 1);
lean_inc_ref(v_str_811_);
lean_dec_ref_known(v_n_808_, 2);
v___x_812_ = 0;
v___x_813_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_807_, v_str_811_, v___x_812_);
return v___x_813_;
}
else
{
lean_object* v_str_814_; lean_object* v_r_815_; lean_object* v___x_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v_r_x27_819_; 
lean_inc(v_pre_810_);
v_str_814_ = lean_ctor_get(v_n_808_, 1);
lean_inc_ref(v_str_814_);
lean_dec_ref_known(v_n_808_, 2);
v_r_815_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v_sep_806_, v_escape_807_, v_pre_810_);
v___x_816_ = lean_string_append(v_r_815_, v_sep_806_);
v___x_817_ = 0;
v___x_818_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_807_, v_str_814_, v___x_817_);
v_r_x27_819_ = lean_string_append(v___x_816_, v___x_818_);
lean_dec_ref(v___x_818_);
return v_r_x27_819_;
}
}
default: 
{
lean_object* v_pre_820_; 
v_pre_820_ = lean_ctor_get(v_n_808_, 0);
if (lean_obj_tag(v_pre_820_) == 0)
{
lean_object* v_i_821_; lean_object* v___x_822_; 
v_i_821_ = lean_ctor_get(v_n_808_, 1);
lean_inc(v_i_821_);
lean_dec_ref_known(v_n_808_, 2);
v___x_822_ = l_Nat_reprFast(v_i_821_);
return v___x_822_;
}
else
{
lean_object* v_i_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
lean_inc(v_pre_820_);
v_i_823_ = lean_ctor_get(v_n_808_, 1);
lean_inc(v_i_823_);
lean_dec_ref_known(v_n_808_, 2);
v___x_824_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v_sep_806_, v_escape_807_, v_pre_820_);
v___x_825_ = lean_string_append(v___x_824_, v_sep_806_);
v___x_826_ = l_Nat_reprFast(v_i_823_);
v___x_827_ = lean_string_append(v___x_825_, v___x_826_);
lean_dec_ref(v___x_826_);
return v___x_827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0___boxed(lean_object* v_sep_828_, lean_object* v_escape_829_, lean_object* v_n_830_){
_start:
{
uint8_t v_escape_boxed_831_; lean_object* v_res_832_; 
v_escape_boxed_831_ = lean_unbox(v_escape_829_);
v_res_832_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v_sep_828_, v_escape_boxed_831_, v_n_830_);
lean_dec_ref(v_sep_828_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(lean_object* v_n_833_, uint8_t v_escape_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
if (v_escape_834_ == 0)
{
lean_object* v___x_836_; 
v___x_836_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_835_, v_escape_834_, v_n_833_);
return v___x_836_;
}
else
{
uint8_t v___x_837_; 
lean_inc(v_n_833_);
v___x_837_ = l_Lean_Name_isInaccessibleUserName(v_n_833_);
if (v___x_837_ == 0)
{
uint8_t v___x_838_; 
v___x_838_ = l_Lean_Name_hasMacroScopes(v_n_833_);
if (v___x_838_ == 0)
{
uint8_t v___x_839_; 
v___x_839_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(v_n_833_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; 
v___x_840_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_835_, v_escape_834_, v_n_833_);
return v___x_840_;
}
else
{
lean_object* v___x_841_; 
v___x_841_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_835_, v___x_838_, v_n_833_);
return v___x_841_;
}
}
else
{
lean_object* v___x_842_; 
v___x_842_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_835_, v___x_837_, v_n_833_);
return v___x_842_;
}
}
else
{
uint8_t v___x_843_; lean_object* v___x_844_; 
v___x_843_ = 0;
v___x_844_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_835_, v___x_843_, v_n_833_);
return v___x_844_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0___boxed(lean_object* v_n_845_, lean_object* v_escape_846_){
_start:
{
uint8_t v_escape_boxed_847_; lean_object* v_res_848_; 
v_escape_boxed_847_ = lean_unbox(v_escape_846_);
v_res_848_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_n_845_, v_escape_boxed_847_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString(lean_object* v_n_849_, uint8_t v_escape_850_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_n_849_, v_escape_850_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString___boxed(lean_object* v_n_852_, lean_object* v_escape_853_){
_start:
{
uint8_t v_escape_boxed_854_; lean_object* v_res_855_; 
v_escape_boxed_854_ = lean_unbox(v_escape_853_);
v_res_855_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString(v_n_852_, v_escape_boxed_854_);
return v_res_855_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_hasNum(lean_object* v_x_856_){
_start:
{
switch(lean_obj_tag(v_x_856_))
{
case 0:
{
uint8_t v___x_857_; 
v___x_857_ = 0;
return v___x_857_;
}
case 1:
{
lean_object* v_pre_858_; 
v_pre_858_ = lean_ctor_get(v_x_856_, 0);
v_x_856_ = v_pre_858_;
goto _start;
}
default: 
{
uint8_t v___x_860_; 
v___x_860_ = 1;
return v___x_860_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_hasNum___boxed(lean_object* v_x_861_){
_start:
{
uint8_t v_res_862_; lean_object* v_r_863_; 
v_res_862_ = l_Lean_Name_hasNum(v_x_861_);
lean_dec(v_x_861_);
v_r_863_ = lean_box(v_res_862_);
return v_r_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec(lean_object* v_n_879_, lean_object* v_prec_880_){
_start:
{
switch(lean_obj_tag(v_n_879_))
{
case 0:
{
lean_object* v___x_881_; 
v___x_881_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__1));
return v___x_881_;
}
case 1:
{
lean_object* v_pre_882_; lean_object* v_str_883_; uint8_t v___x_884_; 
v_pre_882_ = lean_ctor_get(v_n_879_, 0);
v_str_883_ = lean_ctor_get(v_n_879_, 1);
v___x_884_ = l_Lean_Name_hasNum(v_pre_882_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; uint8_t v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_885_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__3));
v___x_886_ = 1;
v___x_887_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_n_879_, v___x_886_);
v___x_888_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
v___x_889_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_885_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
return v___x_889_;
}
else
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
lean_inc_ref(v_str_883_);
lean_inc(v_pre_882_);
lean_dec_ref_known(v_n_879_, 2);
v___x_890_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__5));
v___x_891_ = lean_unsigned_to_nat(1024u);
v___x_892_ = l_Lean_Name_reprPrec(v_pre_882_, v___x_891_);
v___x_893_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_890_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__7));
v___x_895_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_893_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v___x_896_ = l_String_quote(v_str_883_);
v___x_897_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
v___x_898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_895_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
v___x_899_ = l_Repr_addAppParen(v___x_898_, v_prec_880_);
return v___x_899_;
}
}
default: 
{
lean_object* v_pre_900_; lean_object* v_i_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_pre_900_ = lean_ctor_get(v_n_879_, 0);
lean_inc(v_pre_900_);
v_i_901_ = lean_ctor_get(v_n_879_, 1);
lean_inc(v_i_901_);
lean_dec_ref_known(v_n_879_, 2);
v___x_902_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__9));
v___x_903_ = lean_unsigned_to_nat(1024u);
v___x_904_ = l_Lean_Name_reprPrec(v_pre_900_, v___x_903_);
v___x_905_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_902_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___x_906_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__7));
v___x_907_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_907_, 0, v___x_905_);
lean_ctor_set(v___x_907_, 1, v___x_906_);
v___x_908_ = l_Nat_reprFast(v_i_901_);
v___x_909_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
v___x_910_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_907_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = l_Repr_addAppParen(v___x_910_, v_prec_880_);
return v___x_911_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec___boxed(lean_object* v_n_912_, lean_object* v_prec_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lean_Name_reprPrec(v_n_912_, v_prec_913_);
lean_dec(v_prec_913_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_capitalize(lean_object* v_x_917_){
_start:
{
if (lean_obj_tag(v_x_917_) == 1)
{
lean_object* v_pre_918_; lean_object* v_str_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_pre_918_ = lean_ctor_get(v_x_917_, 0);
lean_inc(v_pre_918_);
v_str_919_ = lean_ctor_get(v_x_917_, 1);
lean_inc_ref(v_str_919_);
lean_dec_ref_known(v_x_917_, 2);
v___x_920_ = lean_string_capitalize(v_str_919_);
v___x_921_ = l_Lean_Name_str___override(v_pre_918_, v___x_920_);
return v___x_921_;
}
else
{
return v_x_917_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix(lean_object* v_x_922_, lean_object* v_x_923_, lean_object* v_x_924_){
_start:
{
switch(lean_obj_tag(v_x_922_))
{
case 0:
{
if (lean_obj_tag(v_x_923_) == 0)
{
lean_inc(v_x_924_);
return v_x_924_;
}
else
{
return v_x_922_;
}
}
case 1:
{
lean_object* v_pre_925_; lean_object* v_str_926_; uint8_t v___x_927_; 
v_pre_925_ = lean_ctor_get(v_x_922_, 0);
lean_inc(v_pre_925_);
v_str_926_ = lean_ctor_get(v_x_922_, 1);
lean_inc_ref(v_str_926_);
v___x_927_ = lean_name_eq(v_x_922_, v_x_923_);
lean_dec_ref_known(v_x_922_, 2);
if (v___x_927_ == 0)
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = l_Lean_Name_replacePrefix(v_pre_925_, v_x_923_, v_x_924_);
v___x_929_ = l_Lean_Name_str___override(v___x_928_, v_str_926_);
return v___x_929_;
}
else
{
lean_dec_ref(v_str_926_);
lean_dec(v_pre_925_);
lean_inc(v_x_924_);
return v_x_924_;
}
}
default: 
{
lean_object* v_pre_930_; lean_object* v_i_931_; uint8_t v___x_932_; 
v_pre_930_ = lean_ctor_get(v_x_922_, 0);
lean_inc(v_pre_930_);
v_i_931_ = lean_ctor_get(v_x_922_, 1);
lean_inc(v_i_931_);
v___x_932_ = lean_name_eq(v_x_922_, v_x_923_);
lean_dec_ref_known(v_x_922_, 2);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = l_Lean_Name_replacePrefix(v_pre_930_, v_x_923_, v_x_924_);
v___x_934_ = l_Lean_Name_num___override(v___x_933_, v_i_931_);
return v___x_934_;
}
else
{
lean_dec(v_i_931_);
lean_dec(v_pre_930_);
lean_inc(v_x_924_);
return v_x_924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix___boxed(lean_object* v_x_935_, lean_object* v_x_936_, lean_object* v_x_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lean_Name_replacePrefix(v_x_935_, v_x_936_, v_x_937_);
lean_dec(v_x_937_);
lean_dec(v_x_936_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f(lean_object* v_x_939_, lean_object* v_x_940_){
_start:
{
switch(lean_obj_tag(v_x_940_))
{
case 0:
{
lean_object* v___x_941_; 
v___x_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_941_, 0, v_x_939_);
return v___x_941_;
}
case 1:
{
if (lean_obj_tag(v_x_939_) == 1)
{
lean_object* v_pre_942_; lean_object* v_str_943_; lean_object* v_pre_944_; lean_object* v_str_945_; uint8_t v___x_946_; 
v_pre_942_ = lean_ctor_get(v_x_940_, 0);
v_str_943_ = lean_ctor_get(v_x_940_, 1);
v_pre_944_ = lean_ctor_get(v_x_939_, 0);
lean_inc(v_pre_944_);
v_str_945_ = lean_ctor_get(v_x_939_, 1);
lean_inc_ref(v_str_945_);
lean_dec_ref_known(v_x_939_, 2);
v___x_946_ = lean_string_dec_eq(v_str_945_, v_str_943_);
lean_dec_ref(v_str_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
lean_dec(v_pre_944_);
v___x_947_ = lean_box(0);
return v___x_947_;
}
else
{
v_x_939_ = v_pre_944_;
v_x_940_ = v_pre_942_;
goto _start;
}
}
else
{
lean_object* v___x_949_; 
lean_dec(v_x_939_);
v___x_949_ = lean_box(0);
return v___x_949_;
}
}
default: 
{
if (lean_obj_tag(v_x_939_) == 2)
{
lean_object* v_pre_950_; lean_object* v_i_951_; lean_object* v_pre_952_; lean_object* v_i_953_; uint8_t v___x_954_; 
v_pre_950_ = lean_ctor_get(v_x_940_, 0);
v_i_951_ = lean_ctor_get(v_x_940_, 1);
v_pre_952_ = lean_ctor_get(v_x_939_, 0);
lean_inc(v_pre_952_);
v_i_953_ = lean_ctor_get(v_x_939_, 1);
lean_inc(v_i_953_);
lean_dec_ref_known(v_x_939_, 2);
v___x_954_ = lean_nat_dec_eq(v_i_953_, v_i_951_);
lean_dec(v_i_953_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; 
lean_dec(v_pre_952_);
v___x_955_ = lean_box(0);
return v___x_955_;
}
else
{
v_x_939_ = v_pre_952_;
v_x_940_ = v_pre_950_;
goto _start;
}
}
else
{
lean_object* v___x_957_; 
lean_dec(v_x_939_);
v___x_957_ = lean_box(0);
return v___x_957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f___boxed(lean_object* v_x_958_, lean_object* v_x_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_Name_eraseSuffix_x3f(v_x_958_, v_x_959_);
lean_dec(v_x_959_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_modifyBase(lean_object* v_n_961_, lean_object* v_f_962_){
_start:
{
uint8_t v___x_963_; 
v___x_963_ = l_Lean_Name_hasMacroScopes(v_n_961_);
if (v___x_963_ == 0)
{
lean_object* v___x_964_; 
v___x_964_ = lean_apply_1(v_f_962_, v_n_961_);
return v___x_964_;
}
else
{
lean_object* v_view_965_; lean_object* v_name_966_; lean_object* v_imported_967_; lean_object* v_ctx_968_; lean_object* v_scopes_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_978_; 
v_view_965_ = l_Lean_extractMacroScopes(v_n_961_);
v_name_966_ = lean_ctor_get(v_view_965_, 0);
v_imported_967_ = lean_ctor_get(v_view_965_, 1);
v_ctx_968_ = lean_ctor_get(v_view_965_, 2);
v_scopes_969_ = lean_ctor_get(v_view_965_, 3);
v_isSharedCheck_978_ = !lean_is_exclusive(v_view_965_);
if (v_isSharedCheck_978_ == 0)
{
v___x_971_ = v_view_965_;
v_isShared_972_ = v_isSharedCheck_978_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_scopes_969_);
lean_inc(v_ctx_968_);
lean_inc(v_imported_967_);
lean_inc(v_name_966_);
lean_dec(v_view_965_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_978_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; lean_object* v___x_975_; 
v___x_973_ = lean_apply_1(v_f_962_, v_name_966_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v___x_973_);
v___x_975_ = v___x_971_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_973_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v_imported_967_);
lean_ctor_set(v_reuseFailAlloc_977_, 2, v_ctx_968_);
lean_ctor_set(v_reuseFailAlloc_977_, 3, v_scopes_969_);
v___x_975_ = v_reuseFailAlloc_977_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
lean_object* v___x_976_; 
v___x_976_ = l_Lean_MacroScopesView_review(v___x_975_);
return v___x_976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendAfter___lam__0(lean_object* v_suffix_979_, lean_object* v_x_980_){
_start:
{
if (lean_obj_tag(v_x_980_) == 1)
{
lean_object* v_pre_981_; lean_object* v_str_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v_pre_981_ = lean_ctor_get(v_x_980_, 0);
lean_inc(v_pre_981_);
v_str_982_ = lean_ctor_get(v_x_980_, 1);
lean_inc_ref(v_str_982_);
lean_dec_ref_known(v_x_980_, 2);
v___x_983_ = lean_string_append(v_str_982_, v_suffix_979_);
lean_dec_ref(v_suffix_979_);
v___x_984_ = l_Lean_Name_str___override(v_pre_981_, v___x_983_);
return v___x_984_;
}
else
{
lean_object* v___x_985_; 
v___x_985_ = l_Lean_Name_str___override(v_x_980_, v_suffix_979_);
return v___x_985_;
}
}
}
LEAN_EXPORT lean_object* lean_name_append_after(lean_object* v_n_986_, lean_object* v_suffix_987_){
_start:
{
uint8_t v___x_988_; 
v___x_988_ = l_Lean_Name_hasMacroScopes(v_n_986_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; 
v___x_989_ = l_Lean_Name_appendAfter___lam__0(v_suffix_987_, v_n_986_);
return v___x_989_;
}
else
{
lean_object* v_view_990_; lean_object* v_name_991_; lean_object* v_imported_992_; lean_object* v_ctx_993_; lean_object* v_scopes_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1003_; 
v_view_990_ = l_Lean_extractMacroScopes(v_n_986_);
v_name_991_ = lean_ctor_get(v_view_990_, 0);
v_imported_992_ = lean_ctor_get(v_view_990_, 1);
v_ctx_993_ = lean_ctor_get(v_view_990_, 2);
v_scopes_994_ = lean_ctor_get(v_view_990_, 3);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_view_990_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_996_ = v_view_990_;
v_isShared_997_ = v_isSharedCheck_1003_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_scopes_994_);
lean_inc(v_ctx_993_);
lean_inc(v_imported_992_);
lean_inc(v_name_991_);
lean_dec(v_view_990_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1003_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_998_; lean_object* v___x_1000_; 
v___x_998_ = l_Lean_Name_appendAfter___lam__0(v_suffix_987_, v_name_991_);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 0, v___x_998_);
v___x_1000_ = v___x_996_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_998_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_imported_992_);
lean_ctor_set(v_reuseFailAlloc_1002_, 2, v_ctx_993_);
lean_ctor_set(v_reuseFailAlloc_1002_, 3, v_scopes_994_);
v___x_1000_ = v_reuseFailAlloc_1002_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lean_MacroScopesView_review(v___x_1000_);
return v___x_1001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendIndexAfter___lam__0(lean_object* v_idx_1004_, lean_object* v_x_1005_){
_start:
{
if (lean_obj_tag(v_x_1005_) == 1)
{
lean_object* v_pre_1006_; lean_object* v_str_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v_pre_1006_ = lean_ctor_get(v_x_1005_, 0);
lean_inc(v_pre_1006_);
v_str_1007_ = lean_ctor_get(v_x_1005_, 1);
lean_inc_ref(v_str_1007_);
lean_dec_ref_known(v_x_1005_, 2);
v___x_1008_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0));
v___x_1009_ = lean_string_append(v_str_1007_, v___x_1008_);
v___x_1010_ = l_Nat_reprFast(v_idx_1004_);
v___x_1011_ = lean_string_append(v___x_1009_, v___x_1010_);
lean_dec_ref(v___x_1010_);
v___x_1012_ = l_Lean_Name_str___override(v_pre_1006_, v___x_1011_);
return v___x_1012_;
}
else
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1013_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0));
v___x_1014_ = l_Nat_reprFast(v_idx_1004_);
v___x_1015_ = lean_string_append(v___x_1013_, v___x_1014_);
lean_dec_ref(v___x_1014_);
v___x_1016_ = l_Lean_Name_str___override(v_x_1005_, v___x_1015_);
return v___x_1016_;
}
}
}
LEAN_EXPORT lean_object* lean_name_append_index_after(lean_object* v_n_1017_, lean_object* v_idx_1018_){
_start:
{
uint8_t v___x_1019_; 
v___x_1019_ = l_Lean_Name_hasMacroScopes(v_n_1017_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; 
v___x_1020_ = l_Lean_Name_appendIndexAfter___lam__0(v_idx_1018_, v_n_1017_);
return v___x_1020_;
}
else
{
lean_object* v_view_1021_; lean_object* v_name_1022_; lean_object* v_imported_1023_; lean_object* v_ctx_1024_; lean_object* v_scopes_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1034_; 
v_view_1021_ = l_Lean_extractMacroScopes(v_n_1017_);
v_name_1022_ = lean_ctor_get(v_view_1021_, 0);
v_imported_1023_ = lean_ctor_get(v_view_1021_, 1);
v_ctx_1024_ = lean_ctor_get(v_view_1021_, 2);
v_scopes_1025_ = lean_ctor_get(v_view_1021_, 3);
v_isSharedCheck_1034_ = !lean_is_exclusive(v_view_1021_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1027_ = v_view_1021_;
v_isShared_1028_ = v_isSharedCheck_1034_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_scopes_1025_);
lean_inc(v_ctx_1024_);
lean_inc(v_imported_1023_);
lean_inc(v_name_1022_);
lean_dec(v_view_1021_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1034_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1029_ = l_Lean_Name_appendIndexAfter___lam__0(v_idx_1018_, v_name_1022_);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 0, v___x_1029_);
v___x_1031_ = v___x_1027_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1029_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v_imported_1023_);
lean_ctor_set(v_reuseFailAlloc_1033_, 2, v_ctx_1024_);
lean_ctor_set(v_reuseFailAlloc_1033_, 3, v_scopes_1025_);
v___x_1031_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
lean_object* v___x_1032_; 
v___x_1032_ = l_Lean_MacroScopesView_review(v___x_1031_);
return v___x_1032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore___lam__0(lean_object* v_pre_1035_, lean_object* v_x_1036_){
_start:
{
switch(lean_obj_tag(v_x_1036_))
{
case 0:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_Lean_Name_str___override(v_x_1036_, v_pre_1035_);
return v___x_1037_;
}
case 1:
{
lean_object* v_pre_1038_; lean_object* v_str_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v_pre_1038_ = lean_ctor_get(v_x_1036_, 0);
lean_inc(v_pre_1038_);
v_str_1039_ = lean_ctor_get(v_x_1036_, 1);
lean_inc_ref(v_str_1039_);
lean_dec_ref_known(v_x_1036_, 2);
v___x_1040_ = lean_string_append(v_pre_1035_, v_str_1039_);
lean_dec_ref(v_str_1039_);
v___x_1041_ = l_Lean_Name_str___override(v_pre_1038_, v___x_1040_);
return v___x_1041_;
}
default: 
{
lean_object* v_pre_1042_; lean_object* v_i_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v_pre_1042_ = lean_ctor_get(v_x_1036_, 0);
lean_inc(v_pre_1042_);
v_i_1043_ = lean_ctor_get(v_x_1036_, 1);
lean_inc(v_i_1043_);
lean_dec_ref_known(v_x_1036_, 2);
v___x_1044_ = l_Lean_Name_str___override(v_pre_1042_, v_pre_1035_);
v___x_1045_ = l_Lean_Name_num___override(v___x_1044_, v_i_1043_);
return v___x_1045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore(lean_object* v_n_1046_, lean_object* v_pre_1047_){
_start:
{
uint8_t v___x_1048_; 
v___x_1048_ = l_Lean_Name_hasMacroScopes(v_n_1046_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; 
v___x_1049_ = l_Lean_Name_appendBefore___lam__0(v_pre_1047_, v_n_1046_);
return v___x_1049_;
}
else
{
lean_object* v_view_1050_; lean_object* v_name_1051_; lean_object* v_imported_1052_; lean_object* v_ctx_1053_; lean_object* v_scopes_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1063_; 
v_view_1050_ = l_Lean_extractMacroScopes(v_n_1046_);
v_name_1051_ = lean_ctor_get(v_view_1050_, 0);
v_imported_1052_ = lean_ctor_get(v_view_1050_, 1);
v_ctx_1053_ = lean_ctor_get(v_view_1050_, 2);
v_scopes_1054_ = lean_ctor_get(v_view_1050_, 3);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_view_1050_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1056_ = v_view_1050_;
v_isShared_1057_ = v_isSharedCheck_1063_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_scopes_1054_);
lean_inc(v_ctx_1053_);
lean_inc(v_imported_1052_);
lean_inc(v_name_1051_);
lean_dec(v_view_1050_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1063_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1058_ = l_Lean_Name_appendBefore___lam__0(v_pre_1047_, v_name_1051_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v___x_1058_);
v___x_1060_ = v___x_1056_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v_imported_1052_);
lean_ctor_set(v_reuseFailAlloc_1062_, 2, v_ctx_1053_);
lean_ctor_set(v_reuseFailAlloc_1062_, 3, v_scopes_1054_);
v___x_1060_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_MacroScopesView_review(v___x_1060_);
return v___x_1061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter___redArg(lean_object* v_x_1064_, lean_object* v_x_1065_, lean_object* v_h__1_1066_, lean_object* v_h__2_1067_, lean_object* v_h__3_1068_, lean_object* v_h__4_1069_){
_start:
{
switch(lean_obj_tag(v_x_1064_))
{
case 0:
{
lean_dec(v_h__3_1068_);
lean_dec(v_h__2_1067_);
if (lean_obj_tag(v_x_1065_) == 0)
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
lean_dec(v_h__4_1069_);
v___x_1070_ = lean_box(0);
v___x_1071_ = lean_apply_1(v_h__1_1066_, v___x_1070_);
return v___x_1071_;
}
else
{
lean_object* v___x_1072_; 
lean_dec(v_h__1_1066_);
v___x_1072_ = lean_apply_5(v_h__4_1069_, v_x_1064_, v_x_1065_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1072_;
}
}
case 1:
{
lean_dec(v_h__3_1068_);
lean_dec(v_h__1_1066_);
if (lean_obj_tag(v_x_1065_) == 1)
{
lean_object* v_pre_1073_; lean_object* v_str_1074_; lean_object* v_pre_1075_; lean_object* v_str_1076_; lean_object* v___x_1077_; 
lean_dec(v_h__4_1069_);
v_pre_1073_ = lean_ctor_get(v_x_1064_, 0);
lean_inc(v_pre_1073_);
v_str_1074_ = lean_ctor_get(v_x_1064_, 1);
lean_inc_ref(v_str_1074_);
lean_dec_ref_known(v_x_1064_, 2);
v_pre_1075_ = lean_ctor_get(v_x_1065_, 0);
lean_inc(v_pre_1075_);
v_str_1076_ = lean_ctor_get(v_x_1065_, 1);
lean_inc_ref(v_str_1076_);
lean_dec_ref_known(v_x_1065_, 2);
v___x_1077_ = lean_apply_4(v_h__2_1067_, v_pre_1073_, v_str_1074_, v_pre_1075_, v_str_1076_);
return v___x_1077_;
}
else
{
lean_object* v___x_1078_; 
lean_dec(v_h__2_1067_);
v___x_1078_ = lean_apply_5(v_h__4_1069_, v_x_1064_, v_x_1065_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1078_;
}
}
default: 
{
lean_dec(v_h__2_1067_);
lean_dec(v_h__1_1066_);
if (lean_obj_tag(v_x_1065_) == 2)
{
lean_object* v_pre_1079_; lean_object* v_i_1080_; lean_object* v_pre_1081_; lean_object* v_i_1082_; lean_object* v___x_1083_; 
lean_dec(v_h__4_1069_);
v_pre_1079_ = lean_ctor_get(v_x_1064_, 0);
lean_inc(v_pre_1079_);
v_i_1080_ = lean_ctor_get(v_x_1064_, 1);
lean_inc(v_i_1080_);
lean_dec_ref_known(v_x_1064_, 2);
v_pre_1081_ = lean_ctor_get(v_x_1065_, 0);
lean_inc(v_pre_1081_);
v_i_1082_ = lean_ctor_get(v_x_1065_, 1);
lean_inc(v_i_1082_);
lean_dec_ref_known(v_x_1065_, 2);
v___x_1083_ = lean_apply_4(v_h__3_1068_, v_pre_1079_, v_i_1080_, v_pre_1081_, v_i_1082_);
return v___x_1083_;
}
else
{
lean_object* v___x_1084_; 
lean_dec(v_h__3_1068_);
v___x_1084_ = lean_apply_5(v_h__4_1069_, v_x_1064_, v_x_1065_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter(lean_object* v_motive_1085_, lean_object* v_x_1086_, lean_object* v_x_1087_, lean_object* v_h__1_1088_, lean_object* v_h__2_1089_, lean_object* v_h__3_1090_, lean_object* v_h__4_1091_){
_start:
{
switch(lean_obj_tag(v_x_1086_))
{
case 0:
{
lean_dec(v_h__3_1090_);
lean_dec(v_h__2_1089_);
if (lean_obj_tag(v_x_1087_) == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
lean_dec(v_h__4_1091_);
v___x_1092_ = lean_box(0);
v___x_1093_ = lean_apply_1(v_h__1_1088_, v___x_1092_);
return v___x_1093_;
}
else
{
lean_object* v___x_1094_; 
lean_dec(v_h__1_1088_);
v___x_1094_ = lean_apply_5(v_h__4_1091_, v_x_1086_, v_x_1087_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1094_;
}
}
case 1:
{
lean_dec(v_h__3_1090_);
lean_dec(v_h__1_1088_);
if (lean_obj_tag(v_x_1087_) == 1)
{
lean_object* v_pre_1095_; lean_object* v_str_1096_; lean_object* v_pre_1097_; lean_object* v_str_1098_; lean_object* v___x_1099_; 
lean_dec(v_h__4_1091_);
v_pre_1095_ = lean_ctor_get(v_x_1086_, 0);
lean_inc(v_pre_1095_);
v_str_1096_ = lean_ctor_get(v_x_1086_, 1);
lean_inc_ref(v_str_1096_);
lean_dec_ref_known(v_x_1086_, 2);
v_pre_1097_ = lean_ctor_get(v_x_1087_, 0);
lean_inc(v_pre_1097_);
v_str_1098_ = lean_ctor_get(v_x_1087_, 1);
lean_inc_ref(v_str_1098_);
lean_dec_ref_known(v_x_1087_, 2);
v___x_1099_ = lean_apply_4(v_h__2_1089_, v_pre_1095_, v_str_1096_, v_pre_1097_, v_str_1098_);
return v___x_1099_;
}
else
{
lean_object* v___x_1100_; 
lean_dec(v_h__2_1089_);
v___x_1100_ = lean_apply_5(v_h__4_1091_, v_x_1086_, v_x_1087_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1100_;
}
}
default: 
{
lean_dec(v_h__2_1089_);
lean_dec(v_h__1_1088_);
if (lean_obj_tag(v_x_1087_) == 2)
{
lean_object* v_pre_1101_; lean_object* v_i_1102_; lean_object* v_pre_1103_; lean_object* v_i_1104_; lean_object* v___x_1105_; 
lean_dec(v_h__4_1091_);
v_pre_1101_ = lean_ctor_get(v_x_1086_, 0);
lean_inc(v_pre_1101_);
v_i_1102_ = lean_ctor_get(v_x_1086_, 1);
lean_inc(v_i_1102_);
lean_dec_ref_known(v_x_1086_, 2);
v_pre_1103_ = lean_ctor_get(v_x_1087_, 0);
lean_inc(v_pre_1103_);
v_i_1104_ = lean_ctor_get(v_x_1087_, 1);
lean_inc(v_i_1104_);
lean_dec_ref_known(v_x_1087_, 2);
v___x_1105_ = lean_apply_4(v_h__3_1090_, v_pre_1101_, v_i_1102_, v_pre_1103_, v_i_1104_);
return v___x_1105_;
}
else
{
lean_object* v___x_1106_; 
lean_dec(v_h__3_1090_);
v___x_1106_ = lean_apply_5(v_h__4_1091_, v_x_1086_, v_x_1087_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1106_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Name_instDecidableEq(lean_object* v_a_1107_, lean_object* v_b_1108_){
_start:
{
uint8_t v___x_1109_; 
v___x_1109_ = lean_name_eq(v_a_1107_, v_b_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_instDecidableEq___boxed(lean_object* v_a_1110_, lean_object* v_b_1111_){
_start:
{
uint8_t v_res_1112_; lean_object* v_r_1113_; 
v_res_1112_ = l_Lean_Name_instDecidableEq(v_a_1110_, v_b_1111_);
lean_dec(v_b_1111_);
lean_dec(v_a_1110_);
v_r_1113_ = lean_box(v_res_1112_);
return v_r_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameGenerator_curr(lean_object* v_g_1114_){
_start:
{
lean_object* v_namePrefix_1115_; lean_object* v_idx_1116_; lean_object* v___x_1117_; 
v_namePrefix_1115_ = lean_ctor_get(v_g_1114_, 0);
lean_inc(v_namePrefix_1115_);
v_idx_1116_ = lean_ctor_get(v_g_1114_, 1);
lean_inc(v_idx_1116_);
lean_dec_ref(v_g_1114_);
v___x_1117_ = l_Lean_Name_num___override(v_namePrefix_1115_, v_idx_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameGenerator_next(lean_object* v_g_1118_){
_start:
{
lean_object* v_namePrefix_1119_; lean_object* v_idx_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1129_; 
v_namePrefix_1119_ = lean_ctor_get(v_g_1118_, 0);
v_idx_1120_ = lean_ctor_get(v_g_1118_, 1);
v_isSharedCheck_1129_ = !lean_is_exclusive(v_g_1118_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1122_ = v_g_1118_;
v_isShared_1123_ = v_isSharedCheck_1129_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_idx_1120_);
lean_inc(v_namePrefix_1119_);
lean_dec(v_g_1118_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1129_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1127_; 
v___x_1124_ = lean_unsigned_to_nat(1u);
v___x_1125_ = lean_nat_add(v_idx_1120_, v___x_1124_);
lean_dec(v_idx_1120_);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 1, v___x_1125_);
v___x_1127_ = v___x_1122_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_namePrefix_1119_);
lean_ctor_set(v_reuseFailAlloc_1128_, 1, v___x_1125_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameGenerator_mkChild(lean_object* v_g_1130_){
_start:
{
lean_object* v_namePrefix_1131_; lean_object* v_idx_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1144_; 
v_namePrefix_1131_ = lean_ctor_get(v_g_1130_, 0);
v_idx_1132_ = lean_ctor_get(v_g_1130_, 1);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_g_1130_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1134_ = v_g_1130_;
v_isShared_1135_ = v_isSharedCheck_1144_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_idx_1132_);
lean_inc(v_namePrefix_1131_);
lean_dec(v_g_1130_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1144_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1139_; 
lean_inc(v_idx_1132_);
lean_inc(v_namePrefix_1131_);
v___x_1136_ = l_Lean_Name_num___override(v_namePrefix_1131_, v_idx_1132_);
v___x_1137_ = lean_unsigned_to_nat(1u);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 1, v___x_1137_);
lean_ctor_set(v___x_1134_, 0, v___x_1136_);
v___x_1139_ = v___x_1134_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v___x_1137_);
v___x_1139_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1140_ = lean_nat_add(v_idx_1132_, v___x_1137_);
lean_dec(v_idx_1132_);
v___x_1141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1141_, 0, v_namePrefix_1131_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1139_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
return v___x_1142_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__0(lean_object* v_toPure_1145_, lean_object* v_r_1146_, lean_object* v_____r_1147_){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_apply_2(v_toPure_1145_, lean_box(0), v_r_1146_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__1(lean_object* v_toPure_1149_, lean_object* v_setNGen_1150_, lean_object* v_toBind_1151_, lean_object* v_ngen_1152_){
_start:
{
lean_object* v_namePrefix_1153_; lean_object* v_idx_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1167_; 
v_namePrefix_1153_ = lean_ctor_get(v_ngen_1152_, 0);
v_idx_1154_ = lean_ctor_get(v_ngen_1152_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_ngen_1152_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1156_ = v_ngen_1152_;
v_isShared_1157_ = v_isSharedCheck_1167_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_idx_1154_);
lean_inc(v_namePrefix_1153_);
lean_dec(v_ngen_1152_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1167_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_r_1158_; lean_object* v___f_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1163_; 
lean_inc(v_idx_1154_);
lean_inc(v_namePrefix_1153_);
v_r_1158_ = l_Lean_Name_num___override(v_namePrefix_1153_, v_idx_1154_);
v___f_1159_ = lean_alloc_closure((void*)(l_Lean_mkFreshId___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1159_, 0, v_toPure_1149_);
lean_closure_set(v___f_1159_, 1, v_r_1158_);
v___x_1160_ = lean_unsigned_to_nat(1u);
v___x_1161_ = lean_nat_add(v_idx_1154_, v___x_1160_);
lean_dec(v_idx_1154_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 1, v___x_1161_);
v___x_1163_ = v___x_1156_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_namePrefix_1153_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = lean_apply_1(v_setNGen_1150_, v___x_1163_);
v___x_1165_ = lean_apply_4(v_toBind_1151_, lean_box(0), lean_box(0), v___x_1164_, v___f_1159_);
return v___x_1165_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg(lean_object* v_inst_1168_, lean_object* v_inst_1169_){
_start:
{
lean_object* v_toApplicative_1170_; lean_object* v_toBind_1171_; lean_object* v_getNGen_1172_; lean_object* v_setNGen_1173_; lean_object* v_toPure_1174_; lean_object* v___f_1175_; lean_object* v___x_1176_; 
v_toApplicative_1170_ = lean_ctor_get(v_inst_1168_, 0);
lean_inc_ref(v_toApplicative_1170_);
v_toBind_1171_ = lean_ctor_get(v_inst_1168_, 1);
lean_inc_n(v_toBind_1171_, 2);
lean_dec_ref(v_inst_1168_);
v_getNGen_1172_ = lean_ctor_get(v_inst_1169_, 0);
lean_inc(v_getNGen_1172_);
v_setNGen_1173_ = lean_ctor_get(v_inst_1169_, 1);
lean_inc(v_setNGen_1173_);
lean_dec_ref(v_inst_1169_);
v_toPure_1174_ = lean_ctor_get(v_toApplicative_1170_, 1);
lean_inc(v_toPure_1174_);
lean_dec_ref(v_toApplicative_1170_);
v___f_1175_ = lean_alloc_closure((void*)(l_Lean_mkFreshId___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1175_, 0, v_toPure_1174_);
lean_closure_set(v___f_1175_, 1, v_setNGen_1173_);
lean_closure_set(v___f_1175_, 2, v_toBind_1171_);
v___x_1176_ = lean_apply_4(v_toBind_1171_, lean_box(0), lean_box(0), v_getNGen_1172_, v___f_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId(lean_object* v_m_1177_, lean_object* v_inst_1178_, lean_object* v_inst_1179_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l_Lean_mkFreshId___redArg(v_inst_1178_, v_inst_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg___lam__0(lean_object* v_setNGen_1181_, lean_object* v_inst_1182_, lean_object* v_ngen_1183_){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = lean_apply_1(v_setNGen_1181_, v_ngen_1183_);
v___x_1185_ = lean_apply_2(v_inst_1182_, lean_box(0), v___x_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg(lean_object* v_inst_1186_, lean_object* v_inst_1187_){
_start:
{
lean_object* v_getNGen_1188_; lean_object* v_setNGen_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1198_; 
v_getNGen_1188_ = lean_ctor_get(v_inst_1187_, 0);
v_setNGen_1189_ = lean_ctor_get(v_inst_1187_, 1);
v_isSharedCheck_1198_ = !lean_is_exclusive(v_inst_1187_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1191_ = v_inst_1187_;
v_isShared_1192_ = v_isSharedCheck_1198_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_setNGen_1189_);
lean_inc(v_getNGen_1188_);
lean_dec(v_inst_1187_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1198_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___f_1193_; lean_object* v___x_1194_; lean_object* v___x_1196_; 
lean_inc(v_inst_1186_);
v___f_1193_ = lean_alloc_closure((void*)(l_Lean_monadNameGeneratorLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1193_, 0, v_setNGen_1189_);
lean_closure_set(v___f_1193_, 1, v_inst_1186_);
v___x_1194_ = lean_apply_2(v_inst_1186_, lean_box(0), v_getNGen_1188_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___f_1193_);
lean_ctor_set(v___x_1191_, 0, v___x_1194_);
v___x_1196_ = v___x_1191_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v___x_1194_);
lean_ctor_set(v_reuseFailAlloc_1197_, 1, v___f_1193_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift(lean_object* v_m_1199_, lean_object* v_n_1200_, lean_object* v_inst_1201_, lean_object* v_inst_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lean_monadNameGeneratorLift___redArg(v_inst_1201_, v_inst_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_1204_, lean_object* v_x_1205_, lean_object* v_x_1206_){
_start:
{
if (lean_obj_tag(v_x_1206_) == 0)
{
lean_dec(v_x_1204_);
return v_x_1205_;
}
else
{
lean_object* v_head_1207_; lean_object* v_tail_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1219_; 
v_head_1207_ = lean_ctor_get(v_x_1206_, 0);
v_tail_1208_ = lean_ctor_get(v_x_1206_, 1);
v_isSharedCheck_1219_ = !lean_is_exclusive(v_x_1206_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1210_ = v_x_1206_;
v_isShared_1211_ = v_isSharedCheck_1219_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_tail_1208_);
lean_inc(v_head_1207_);
lean_dec(v_x_1206_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1219_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
lean_inc(v_x_1204_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set_tag(v___x_1210_, 5);
lean_ctor_set(v___x_1210_, 1, v_x_1204_);
lean_ctor_set(v___x_1210_, 0, v_x_1205_);
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_x_1205_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_x_1204_);
v___x_1213_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1214_ = l_String_quote(v_head_1207_);
v___x_1215_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1214_);
v___x_1216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1213_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
v_x_1205_ = v___x_1216_;
v_x_1206_ = v_tail_1208_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1(lean_object* v_x_1220_, lean_object* v_x_1221_, lean_object* v_x_1222_){
_start:
{
if (lean_obj_tag(v_x_1222_) == 0)
{
lean_dec(v_x_1220_);
return v_x_1221_;
}
else
{
lean_object* v_head_1223_; lean_object* v_tail_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1235_; 
v_head_1223_ = lean_ctor_get(v_x_1222_, 0);
v_tail_1224_ = lean_ctor_get(v_x_1222_, 1);
v_isSharedCheck_1235_ = !lean_is_exclusive(v_x_1222_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1226_ = v_x_1222_;
v_isShared_1227_ = v_isSharedCheck_1235_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_tail_1224_);
lean_inc(v_head_1223_);
lean_dec(v_x_1222_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1235_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
lean_inc(v_x_1220_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set_tag(v___x_1226_, 5);
lean_ctor_set(v___x_1226_, 1, v_x_1220_);
lean_ctor_set(v___x_1226_, 0, v_x_1221_);
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_x_1221_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v_x_1220_);
v___x_1229_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1230_ = l_String_quote(v_head_1223_);
v___x_1231_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1230_);
v___x_1232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1229_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
v___x_1233_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1_spec__3(v_x_1220_, v___x_1232_, v_tail_1224_);
return v___x_1233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(lean_object* v___y_1236_){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = l_String_quote(v___y_1236_);
v___x_1238_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0(lean_object* v_x_1239_, lean_object* v_x_1240_){
_start:
{
if (lean_obj_tag(v_x_1239_) == 0)
{
lean_object* v___x_1241_; 
lean_dec(v_x_1240_);
v___x_1241_ = lean_box(0);
return v___x_1241_;
}
else
{
lean_object* v_tail_1242_; 
v_tail_1242_ = lean_ctor_get(v_x_1239_, 1);
if (lean_obj_tag(v_tail_1242_) == 0)
{
lean_object* v_head_1243_; lean_object* v___x_1244_; 
lean_dec(v_x_1240_);
v_head_1243_ = lean_ctor_get(v_x_1239_, 0);
lean_inc(v_head_1243_);
lean_dec_ref_known(v_x_1239_, 2);
v___x_1244_ = l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(v_head_1243_);
return v___x_1244_;
}
else
{
lean_object* v_head_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
lean_inc(v_tail_1242_);
v_head_1245_ = lean_ctor_get(v_x_1239_, 0);
lean_inc(v_head_1245_);
lean_dec_ref_known(v_x_1239_, 2);
v___x_1246_ = l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(v_head_1245_);
v___x_1247_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1(v_x_1240_, v___x_1246_, v_tail_1242_);
return v___x_1247_;
}
}
}
}
static lean_object* _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2));
v___x_1260_ = lean_string_length(v___x_1259_);
return v___x_1260_;
}
}
static lean_object* _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = lean_obj_once(&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7, &l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7_once, _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7);
v___x_1262_ = lean_nat_to_int(v___x_1261_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(lean_object* v_a_1267_){
_start:
{
if (lean_obj_tag(v_a_1267_) == 0)
{
lean_object* v___x_1268_; 
v___x_1268_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1));
return v___x_1268_;
}
else
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1269_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5));
v___x_1270_ = l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0(v_a_1267_, v___x_1269_);
v___x_1271_ = lean_obj_once(&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8, &l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8_once, _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8);
v___x_1272_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9));
v___x_1273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v___x_1270_);
v___x_1274_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10));
v___x_1275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1273_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1271_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = l_Std_Format_fill(v___x_1276_);
return v___x_1277_;
}
}
}
static lean_object* _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3(void){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1284_ = lean_unsigned_to_nat(2u);
v___x_1285_ = lean_nat_to_int(v___x_1284_);
return v___x_1285_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4(void){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = lean_unsigned_to_nat(1u);
v___x_1287_ = lean_nat_to_int(v___x_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr(lean_object* v_x_1294_, lean_object* v_prec_1295_){
_start:
{
if (lean_obj_tag(v_x_1294_) == 0)
{
lean_object* v_ns_1296_; lean_object* v___y_1298_; lean_object* v___x_1307_; uint8_t v___x_1308_; 
v_ns_1296_ = lean_ctor_get(v_x_1294_, 0);
lean_inc(v_ns_1296_);
lean_dec_ref_known(v_x_1294_, 1);
v___x_1307_ = lean_unsigned_to_nat(1024u);
v___x_1308_ = lean_nat_dec_le(v___x_1307_, v_prec_1295_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; 
v___x_1309_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1298_ = v___x_1309_;
goto v___jp_1297_;
}
else
{
lean_object* v___x_1310_; 
v___x_1310_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1298_ = v___x_1310_;
goto v___jp_1297_;
}
v___jp_1297_:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1299_ = ((lean_object*)(l_Lean_Syntax_instReprPreresolved_repr___closed__2));
v___x_1300_ = lean_unsigned_to_nat(1024u);
v___x_1301_ = l_Lean_Name_reprPrec(v_ns_1296_, v___x_1300_);
v___x_1302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1299_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
lean_inc(v___y_1298_);
v___x_1303_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___y_1298_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___x_1304_ = 0;
v___x_1305_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set_uint8(v___x_1305_, sizeof(void*)*1, v___x_1304_);
v___x_1306_ = l_Repr_addAppParen(v___x_1305_, v_prec_1295_);
return v___x_1306_;
}
}
else
{
lean_object* v_n_1311_; lean_object* v_fields_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1336_; 
v_n_1311_ = lean_ctor_get(v_x_1294_, 0);
v_fields_1312_ = lean_ctor_get(v_x_1294_, 1);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_x_1294_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1314_ = v_x_1294_;
v_isShared_1315_ = v_isSharedCheck_1336_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_fields_1312_);
lean_inc(v_n_1311_);
lean_dec(v_x_1294_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1336_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___y_1317_; lean_object* v___x_1332_; uint8_t v___x_1333_; 
v___x_1332_ = lean_unsigned_to_nat(1024u);
v___x_1333_ = lean_nat_dec_le(v___x_1332_, v_prec_1295_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; 
v___x_1334_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1317_ = v___x_1334_;
goto v___jp_1316_;
}
else
{
lean_object* v___x_1335_; 
v___x_1335_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1317_ = v___x_1335_;
goto v___jp_1316_;
}
v___jp_1316_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___x_1318_ = lean_box(1);
v___x_1319_ = ((lean_object*)(l_Lean_Syntax_instReprPreresolved_repr___closed__7));
v___x_1320_ = lean_unsigned_to_nat(1024u);
v___x_1321_ = l_Lean_Name_reprPrec(v_n_1311_, v___x_1320_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 5);
lean_ctor_set(v___x_1314_, 1, v___x_1321_);
lean_ctor_set(v___x_1314_, 0, v___x_1319_);
v___x_1323_ = v___x_1314_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1319_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; uint8_t v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1324_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
lean_ctor_set(v___x_1324_, 1, v___x_1318_);
v___x_1325_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_fields_1312_);
v___x_1326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
lean_inc(v___y_1317_);
v___x_1327_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___y_1317_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
v___x_1328_ = 0;
v___x_1329_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
lean_ctor_set_uint8(v___x_1329_, sizeof(void*)*1, v___x_1328_);
v___x_1330_ = l_Repr_addAppParen(v___x_1329_, v_prec_1295_);
return v___x_1330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr___boxed(lean_object* v_x_1337_, lean_object* v_prec_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Lean_Syntax_instReprPreresolved_repr(v_x_1337_, v_prec_1338_);
lean_dec(v_prec_1338_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__1(lean_object* v_a_1340_){
_start:
{
lean_object* v___x_1341_; 
v___x_1341_ = lean_nat_to_int(v_a_1340_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0(lean_object* v_a_1342_, lean_object* v_n_1343_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_a_1342_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___boxed(lean_object* v_a_1345_, lean_object* v_n_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0(v_a_1345_, v_n_1346_);
lean_dec(v_n_1346_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(lean_object* v___y_1350_){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = lean_unsigned_to_nat(0u);
v___x_1352_ = l_Lean_Syntax_instReprPreresolved_repr(v___y_1350_, v___x_1351_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4_spec__6(lean_object* v_x_1353_, lean_object* v_x_1354_, lean_object* v_x_1355_){
_start:
{
if (lean_obj_tag(v_x_1355_) == 0)
{
lean_dec(v_x_1353_);
return v_x_1354_;
}
else
{
lean_object* v_head_1356_; lean_object* v_tail_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1368_; 
v_head_1356_ = lean_ctor_get(v_x_1355_, 0);
v_tail_1357_ = lean_ctor_get(v_x_1355_, 1);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_x_1355_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1359_ = v_x_1355_;
v_isShared_1360_ = v_isSharedCheck_1368_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_tail_1357_);
lean_inc(v_head_1356_);
lean_dec(v_x_1355_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1368_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
lean_inc(v_x_1353_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set_tag(v___x_1359_, 5);
lean_ctor_set(v___x_1359_, 1, v_x_1353_);
lean_ctor_set(v___x_1359_, 0, v_x_1354_);
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_x_1354_);
lean_ctor_set(v_reuseFailAlloc_1367_, 1, v_x_1353_);
v___x_1362_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1363_ = lean_unsigned_to_nat(0u);
v___x_1364_ = l_Lean_Syntax_instReprPreresolved_repr(v_head_1356_, v___x_1363_);
v___x_1365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1362_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v_x_1354_ = v___x_1365_;
v_x_1355_ = v_tail_1357_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4(lean_object* v_x_1369_, lean_object* v_x_1370_, lean_object* v_x_1371_){
_start:
{
if (lean_obj_tag(v_x_1371_) == 0)
{
lean_dec(v_x_1369_);
return v_x_1370_;
}
else
{
lean_object* v_head_1372_; lean_object* v_tail_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1384_; 
v_head_1372_ = lean_ctor_get(v_x_1371_, 0);
v_tail_1373_ = lean_ctor_get(v_x_1371_, 1);
v_isSharedCheck_1384_ = !lean_is_exclusive(v_x_1371_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1375_ = v_x_1371_;
v_isShared_1376_ = v_isSharedCheck_1384_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_tail_1373_);
lean_inc(v_head_1372_);
lean_dec(v_x_1371_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1384_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
lean_inc(v_x_1369_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set_tag(v___x_1375_, 5);
lean_ctor_set(v___x_1375_, 1, v_x_1369_);
lean_ctor_set(v___x_1375_, 0, v_x_1370_);
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_x_1370_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v_x_1369_);
v___x_1378_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1379_ = lean_unsigned_to_nat(0u);
v___x_1380_ = l_Lean_Syntax_instReprPreresolved_repr(v_head_1372_, v___x_1379_);
v___x_1381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1378_);
lean_ctor_set(v___x_1381_, 1, v___x_1380_);
v___x_1382_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4_spec__6(v_x_1369_, v___x_1381_, v_tail_1373_);
return v___x_1382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2(lean_object* v_x_1385_, lean_object* v_x_1386_){
_start:
{
if (lean_obj_tag(v_x_1385_) == 0)
{
lean_object* v___x_1387_; 
lean_dec(v_x_1386_);
v___x_1387_ = lean_box(0);
return v___x_1387_;
}
else
{
lean_object* v_tail_1388_; 
v_tail_1388_ = lean_ctor_get(v_x_1385_, 1);
if (lean_obj_tag(v_tail_1388_) == 0)
{
lean_object* v_head_1389_; lean_object* v___x_1390_; 
lean_dec(v_x_1386_);
v_head_1389_ = lean_ctor_get(v_x_1385_, 0);
lean_inc(v_head_1389_);
lean_dec_ref_known(v_x_1385_, 2);
v___x_1390_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(v_head_1389_);
return v___x_1390_;
}
else
{
lean_object* v_head_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
lean_inc(v_tail_1388_);
v_head_1391_ = lean_ctor_get(v_x_1385_, 0);
lean_inc(v_head_1391_);
lean_dec_ref_known(v_x_1385_, 2);
v___x_1392_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(v_head_1391_);
v___x_1393_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4(v_x_1386_, v___x_1392_, v_tail_1388_);
return v___x_1393_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(lean_object* v_a_1394_){
_start:
{
if (lean_obj_tag(v_a_1394_) == 0)
{
lean_object* v___x_1395_; 
v___x_1395_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1));
return v___x_1395_;
}
else
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; uint8_t v___x_1404_; lean_object* v___x_1405_; 
v___x_1396_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5));
v___x_1397_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2(v_a_1394_, v___x_1396_);
v___x_1398_ = lean_obj_once(&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8, &l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8_once, _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8);
v___x_1399_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9));
v___x_1400_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
lean_ctor_set(v___x_1400_, 1, v___x_1397_);
v___x_1401_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10));
v___x_1402_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
v___x_1403_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1398_);
lean_ctor_set(v___x_1403_, 1, v___x_1402_);
v___x_1404_ = 0;
v___x_1405_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1405_, 0, v___x_1403_);
lean_ctor_set_uint8(v___x_1405_, sizeof(void*)*1, v___x_1404_);
return v___x_1405_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_1415_, lean_object* v_x_1416_, lean_object* v_x_1417_){
_start:
{
if (lean_obj_tag(v_x_1417_) == 0)
{
lean_dec(v_x_1415_);
return v_x_1416_;
}
else
{
lean_object* v_head_1418_; lean_object* v_tail_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1430_; 
v_head_1418_ = lean_ctor_get(v_x_1417_, 0);
v_tail_1419_ = lean_ctor_get(v_x_1417_, 1);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_x_1417_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1421_ = v_x_1417_;
v_isShared_1422_ = v_isSharedCheck_1430_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_tail_1419_);
lean_inc(v_head_1418_);
lean_dec(v_x_1417_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1430_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
lean_inc(v_x_1415_);
if (v_isShared_1422_ == 0)
{
lean_ctor_set_tag(v___x_1421_, 5);
lean_ctor_set(v___x_1421_, 1, v_x_1415_);
lean_ctor_set(v___x_1421_, 0, v_x_1416_);
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_x_1416_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v_x_1415_);
v___x_1424_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1425_ = lean_unsigned_to_nat(0u);
v___x_1426_ = l_Lean_Syntax_instRepr_repr(v_head_1418_, v___x_1425_);
v___x_1427_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1424_);
lean_ctor_set(v___x_1427_, 1, v___x_1426_);
v_x_1416_ = v___x_1427_;
v_x_1417_ = v_tail_1419_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1(lean_object* v_x_1431_, lean_object* v_x_1432_, lean_object* v_x_1433_){
_start:
{
if (lean_obj_tag(v_x_1433_) == 0)
{
lean_dec(v_x_1431_);
return v_x_1432_;
}
else
{
lean_object* v_head_1434_; lean_object* v_tail_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1446_; 
v_head_1434_ = lean_ctor_get(v_x_1433_, 0);
v_tail_1435_ = lean_ctor_get(v_x_1433_, 1);
v_isSharedCheck_1446_ = !lean_is_exclusive(v_x_1433_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1437_ = v_x_1433_;
v_isShared_1438_ = v_isSharedCheck_1446_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_tail_1435_);
lean_inc(v_head_1434_);
lean_dec(v_x_1433_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1446_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
lean_inc(v_x_1431_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set_tag(v___x_1437_, 5);
lean_ctor_set(v___x_1437_, 1, v_x_1431_);
lean_ctor_set(v___x_1437_, 0, v_x_1432_);
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_x_1432_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v_x_1431_);
v___x_1440_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1441_ = lean_unsigned_to_nat(0u);
v___x_1442_ = l_Lean_Syntax_instRepr_repr(v_head_1434_, v___x_1441_);
v___x_1443_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1440_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1_spec__3(v_x_1431_, v___x_1443_, v_tail_1435_);
return v___x_1444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0(lean_object* v_x_1447_, lean_object* v_x_1448_){
_start:
{
if (lean_obj_tag(v_x_1447_) == 0)
{
lean_object* v___x_1449_; 
lean_dec(v_x_1448_);
v___x_1449_ = lean_box(0);
return v___x_1449_;
}
else
{
lean_object* v_tail_1450_; 
v_tail_1450_ = lean_ctor_get(v_x_1447_, 1);
if (lean_obj_tag(v_tail_1450_) == 0)
{
lean_object* v_head_1451_; lean_object* v___x_1452_; 
lean_dec(v_x_1448_);
v_head_1451_ = lean_ctor_get(v_x_1447_, 0);
lean_inc(v_head_1451_);
lean_dec_ref_known(v_x_1447_, 2);
v___x_1452_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(v_head_1451_);
return v___x_1452_;
}
else
{
lean_object* v_head_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
lean_inc(v_tail_1450_);
v_head_1453_ = lean_ctor_get(v_x_1447_, 0);
lean_inc(v_head_1453_);
lean_dec_ref_known(v_x_1447_, 2);
v___x_1454_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(v_head_1453_);
v___x_1455_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1(v_x_1448_, v___x_1454_, v_tail_1450_);
return v___x_1455_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1457_ = ((lean_object*)(l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0));
v___x_1458_ = lean_string_length(v___x_1457_);
return v___x_1458_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1459_ = lean_obj_once(&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1, &l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1_once, _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1);
v___x_1460_ = lean_nat_to_int(v___x_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0(lean_object* v_xs_1466_){
_start:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; uint8_t v___x_1469_; 
v___x_1467_ = lean_array_get_size(v_xs_1466_);
v___x_1468_ = lean_unsigned_to_nat(0u);
v___x_1469_ = lean_nat_dec_eq(v___x_1467_, v___x_1468_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1470_ = lean_array_to_list(v_xs_1466_);
v___x_1471_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5));
v___x_1472_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0(v___x_1470_, v___x_1471_);
v___x_1473_ = lean_obj_once(&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2, &l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2);
v___x_1474_ = ((lean_object*)(l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3));
v___x_1475_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1474_);
lean_ctor_set(v___x_1475_, 1, v___x_1472_);
v___x_1476_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10));
v___x_1477_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1475_);
lean_ctor_set(v___x_1477_, 1, v___x_1476_);
v___x_1478_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1473_);
lean_ctor_set(v___x_1478_, 1, v___x_1477_);
v___x_1479_ = l_Std_Format_fill(v___x_1478_);
return v___x_1479_;
}
else
{
lean_object* v___x_1480_; 
lean_dec_ref(v_xs_1466_);
v___x_1480_ = ((lean_object*)(l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5));
return v___x_1480_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr(lean_object* v_x_1494_, lean_object* v_prec_1495_){
_start:
{
lean_object* v___y_1497_; 
switch(lean_obj_tag(v_x_1494_))
{
case 0:
{
lean_object* v___x_1503_; uint8_t v___x_1504_; 
v___x_1503_ = lean_unsigned_to_nat(1024u);
v___x_1504_ = lean_nat_dec_le(v___x_1503_, v_prec_1495_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; 
v___x_1505_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1497_ = v___x_1505_;
goto v___jp_1496_;
}
else
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1497_ = v___x_1506_;
goto v___jp_1496_;
}
}
case 1:
{
lean_object* v_info_1507_; lean_object* v_kind_1508_; lean_object* v_args_1509_; lean_object* v___y_1511_; lean_object* v___x_1527_; uint8_t v___x_1528_; 
v_info_1507_ = lean_ctor_get(v_x_1494_, 0);
lean_inc(v_info_1507_);
v_kind_1508_ = lean_ctor_get(v_x_1494_, 1);
lean_inc(v_kind_1508_);
v_args_1509_ = lean_ctor_get(v_x_1494_, 2);
lean_inc_ref(v_args_1509_);
lean_dec_ref_known(v_x_1494_, 3);
v___x_1527_ = lean_unsigned_to_nat(1024u);
v___x_1528_ = lean_nat_dec_le(v___x_1527_, v_prec_1495_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; 
v___x_1529_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1511_ = v___x_1529_;
goto v___jp_1510_;
}
else
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1511_ = v___x_1530_;
goto v___jp_1510_;
}
v___jp_1510_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1512_ = lean_box(1);
v___x_1513_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__4));
v___x_1514_ = lean_unsigned_to_nat(1024u);
v___x_1515_ = l_instReprSourceInfo_repr(v_info_1507_, v___x_1514_);
v___x_1516_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1513_);
lean_ctor_set(v___x_1516_, 1, v___x_1515_);
v___x_1517_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
lean_ctor_set(v___x_1517_, 1, v___x_1512_);
v___x_1518_ = l_Lean_Name_reprPrec(v_kind_1508_, v___x_1514_);
v___x_1519_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1519_);
lean_ctor_set(v___x_1520_, 1, v___x_1512_);
v___x_1521_ = l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0(v_args_1509_);
v___x_1522_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1520_);
lean_ctor_set(v___x_1522_, 1, v___x_1521_);
lean_inc(v___y_1511_);
v___x_1523_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___y_1511_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = 0;
v___x_1525_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1525_, 0, v___x_1523_);
lean_ctor_set_uint8(v___x_1525_, sizeof(void*)*1, v___x_1524_);
v___x_1526_ = l_Repr_addAppParen(v___x_1525_, v_prec_1495_);
return v___x_1526_;
}
}
case 2:
{
lean_object* v_info_1531_; lean_object* v_val_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1557_; 
v_info_1531_ = lean_ctor_get(v_x_1494_, 0);
v_val_1532_ = lean_ctor_get(v_x_1494_, 1);
v_isSharedCheck_1557_ = !lean_is_exclusive(v_x_1494_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1534_ = v_x_1494_;
v_isShared_1535_ = v_isSharedCheck_1557_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_val_1532_);
lean_inc(v_info_1531_);
lean_dec(v_x_1494_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1557_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___y_1537_; lean_object* v___x_1553_; uint8_t v___x_1554_; 
v___x_1553_ = lean_unsigned_to_nat(1024u);
v___x_1554_ = lean_nat_dec_le(v___x_1553_, v_prec_1495_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; 
v___x_1555_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1537_ = v___x_1555_;
goto v___jp_1536_;
}
else
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1537_ = v___x_1556_;
goto v___jp_1536_;
}
v___jp_1536_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1543_; 
v___x_1538_ = lean_box(1);
v___x_1539_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__7));
v___x_1540_ = lean_unsigned_to_nat(1024u);
v___x_1541_ = l_instReprSourceInfo_repr(v_info_1531_, v___x_1540_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set_tag(v___x_1534_, 5);
lean_ctor_set(v___x_1534_, 1, v___x_1541_);
lean_ctor_set(v___x_1534_, 0, v___x_1539_);
v___x_1543_ = v___x_1534_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1539_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v___x_1541_);
v___x_1543_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; uint8_t v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1544_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
lean_ctor_set(v___x_1544_, 1, v___x_1538_);
v___x_1545_ = l_String_quote(v_val_1532_);
v___x_1546_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1545_);
v___x_1547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1544_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
lean_inc(v___y_1537_);
v___x_1548_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___y_1537_);
lean_ctor_set(v___x_1548_, 1, v___x_1547_);
v___x_1549_ = 0;
v___x_1550_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1550_, 0, v___x_1548_);
lean_ctor_set_uint8(v___x_1550_, sizeof(void*)*1, v___x_1549_);
v___x_1551_ = l_Repr_addAppParen(v___x_1550_, v_prec_1495_);
return v___x_1551_;
}
}
}
}
default: 
{
lean_object* v_info_1558_; lean_object* v_rawVal_1559_; lean_object* v_val_1560_; lean_object* v_preresolved_1561_; lean_object* v___y_1563_; lean_object* v___x_1586_; uint8_t v___x_1587_; 
v_info_1558_ = lean_ctor_get(v_x_1494_, 0);
lean_inc(v_info_1558_);
v_rawVal_1559_ = lean_ctor_get(v_x_1494_, 1);
lean_inc_ref(v_rawVal_1559_);
v_val_1560_ = lean_ctor_get(v_x_1494_, 2);
lean_inc(v_val_1560_);
v_preresolved_1561_ = lean_ctor_get(v_x_1494_, 3);
lean_inc(v_preresolved_1561_);
lean_dec_ref_known(v_x_1494_, 4);
v___x_1586_ = lean_unsigned_to_nat(1024u);
v___x_1587_ = lean_nat_dec_le(v___x_1586_, v_prec_1495_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1563_ = v___x_1588_;
goto v___jp_1562_;
}
else
{
lean_object* v___x_1589_; 
v___x_1589_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1563_ = v___x_1589_;
goto v___jp_1562_;
}
v___jp_1562_:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1564_ = lean_box(1);
v___x_1565_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__10));
v___x_1566_ = lean_unsigned_to_nat(1024u);
v___x_1567_ = l_instReprSourceInfo_repr(v_info_1558_, v___x_1566_);
v___x_1568_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1565_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
v___x_1569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
lean_ctor_set(v___x_1569_, 1, v___x_1564_);
v___x_1570_ = lean_substring_tostring(v_rawVal_1559_);
v___x_1571_ = l_String_quote(v___x_1570_);
v___x_1572_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__11));
v___x_1573_ = lean_string_append(v___x_1571_, v___x_1572_);
v___x_1574_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
v___x_1575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1569_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
lean_ctor_set(v___x_1576_, 1, v___x_1564_);
v___x_1577_ = l_Lean_Name_reprPrec(v_val_1560_, v___x_1566_);
v___x_1578_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1576_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
v___x_1579_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
lean_ctor_set(v___x_1579_, 1, v___x_1564_);
v___x_1580_ = l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(v_preresolved_1561_);
v___x_1581_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1579_);
lean_ctor_set(v___x_1581_, 1, v___x_1580_);
lean_inc(v___y_1563_);
v___x_1582_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___y_1563_);
lean_ctor_set(v___x_1582_, 1, v___x_1581_);
v___x_1583_ = 0;
v___x_1584_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1584_, 0, v___x_1582_);
lean_ctor_set_uint8(v___x_1584_, sizeof(void*)*1, v___x_1583_);
v___x_1585_ = l_Repr_addAppParen(v___x_1584_, v_prec_1495_);
return v___x_1585_;
}
}
}
v___jp_1496_:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; uint8_t v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1498_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__1));
lean_inc(v___y_1497_);
v___x_1499_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___y_1497_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
v___x_1500_ = 0;
v___x_1501_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1501_, 0, v___x_1499_);
lean_ctor_set_uint8(v___x_1501_, sizeof(void*)*1, v___x_1500_);
v___x_1502_ = l_Repr_addAppParen(v___x_1501_, v_prec_1495_);
return v___x_1502_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(lean_object* v___y_1590_){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = lean_unsigned_to_nat(0u);
v___x_1592_ = l_Lean_Syntax_instRepr_repr(v___y_1590_, v___x_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr___boxed(lean_object* v_x_1593_, lean_object* v_prec_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Lean_Syntax_instRepr_repr(v_x_1593_, v_prec_1594_);
lean_dec(v_prec_1594_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1(lean_object* v_a_1596_, lean_object* v_n_1597_){
_start:
{
lean_object* v___x_1598_; 
v___x_1598_ = l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(v_a_1596_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___boxed(lean_object* v_a_1599_, lean_object* v_n_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1(v_a_1599_, v_n_1600_);
lean_dec(v_n_1600_);
return v_res_1601_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = lean_unsigned_to_nat(7u);
v___x_1618_ = lean_nat_to_int(v___x_1617_);
return v___x_1618_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1620_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0));
v___x_1621_ = lean_string_length(v___x_1620_);
return v___x_1621_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9);
v___x_1623_ = lean_nat_to_int(v___x_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object* v_x_1628_){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; uint8_t v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1629_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6));
v___x_1630_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7);
v___x_1631_ = lean_unsigned_to_nat(0u);
v___x_1632_ = l_Lean_Syntax_instRepr_repr(v_x_1628_, v___x_1631_);
v___x_1633_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1630_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = 0;
v___x_1635_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1635_, 0, v___x_1633_);
lean_ctor_set_uint8(v___x_1635_, sizeof(void*)*1, v___x_1634_);
v___x_1636_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1629_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
v___x_1637_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10);
v___x_1638_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11));
v___x_1639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1638_);
lean_ctor_set(v___x_1639_, 1, v___x_1636_);
v___x_1640_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12));
v___x_1641_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1639_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1637_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
v___x_1643_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1643_, 0, v___x_1642_);
lean_ctor_set_uint8(v___x_1643_, sizeof(void*)*1, v___x_1634_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr(lean_object* v_ks_1644_, lean_object* v_x_1645_, lean_object* v_prec_1646_){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_x_1645_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___boxed(lean_object* v_ks_1648_, lean_object* v_x_1649_, lean_object* v_prec_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Lean_Syntax_instReprTSyntax_repr(v_ks_1648_, v_x_1649_, v_prec_1650_);
lean_dec(v_prec_1650_);
lean_dec(v_ks_1648_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax(lean_object* v_ks_1652_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = lean_alloc_closure((void*)(l_Lean_Syntax_instReprTSyntax_repr___boxed), 3, 1);
lean_closure_set(v___x_1653_, 0, v_ks_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0(lean_object* v_stx_1654_){
_start:
{
lean_inc(v_stx_1654_);
return v_stx_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0___boxed(lean_object* v_stx_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0(v_stx_1655_);
lean_dec(v_stx_1655_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg(){
_start:
{
lean_object* v___f_1659_; 
v___f_1659_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___boxed(lean_object* v___dummy_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg();
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil(lean_object* v_k_1662_, lean_object* v_ks_1663_){
_start:
{
lean_object* v___f_1664_; 
v___f_1664_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___boxed(lean_object* v_k_1665_, lean_object* v_ks_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil(v_k_1665_, v_ks_1666_);
lean_dec(v_ks_1666_);
lean_dec(v_k_1665_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg(){
_start:
{
lean_object* v___f_1669_; 
v___f_1669_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg___boxed(lean_object* v___dummy_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg();
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind(lean_object* v_ks_1672_, lean_object* v_k_x27_1673_){
_start:
{
lean_object* v___f_1674_; 
v___f_1674_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___boxed(lean_object* v_ks_1675_, lean_object* v_k_x27_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKind(v_ks_1675_, v_k_x27_1676_);
lean_dec(v_k_x27_1676_);
lean_dec(v_ks_1675_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0(lean_object* v_s_1678_){
_start:
{
lean_inc(v_s_1678_);
return v_s_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0___boxed(lean_object* v_s_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lean_TSyntax_instCoeIdentTerm___lam__0(v_s_1679_);
lean_dec(v_s_1679_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeDepTermMkIdentIdent(lean_object* v_info_1683_, lean_object* v_ss_1684_, lean_object* v_n_1685_, lean_object* v_res_1686_){
_start:
{
lean_object* v___x_1687_; 
v___x_1687_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1687_, 0, v_info_1683_);
lean_ctor_set(v___x_1687_, 1, v_ss_1684_);
lean_ctor_set(v___x_1687_, 2, v_n_1685_);
lean_ctor_set(v___x_1687_, 3, v_res_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg(){
_start:
{
lean_object* v___f_1697_; 
v___f_1697_ = ((lean_object*)(l_Lean_TSyntax_instCoeIdentTerm___closed__0));
return v___f_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg___boxed(lean_object* v___dummy_1698_){
_start:
{
lean_object* v_res_1699_; 
v_res_1699_ = l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg();
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax(lean_object* v_k_1700_){
_start:
{
lean_object* v___f_1701_; 
v___f_1701_ = ((lean_object*)(l_Lean_TSyntax_instCoeIdentTerm___closed__0));
return v___f_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___boxed(lean_object* v_k_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_Lean_TSyntax_Compat_instCoeTailSyntax(v_k_1702_);
lean_dec(v_k_1702_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSyntaxArray(lean_object* v_k_1704_){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = lean_alloc_closure((void*)(l_Lean_TSyntaxArray_mkImpl___boxed), 2, 1);
lean_closure_set(v___x_1705_, 0, v_k_1704_);
return v___x_1705_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(lean_object* v_x_1706_, lean_object* v_x_1707_){
_start:
{
if (lean_obj_tag(v_x_1706_) == 0)
{
if (lean_obj_tag(v_x_1707_) == 0)
{
uint8_t v___x_1708_; 
v___x_1708_ = 1;
return v___x_1708_;
}
else
{
uint8_t v___x_1709_; 
v___x_1709_ = 0;
return v___x_1709_;
}
}
else
{
if (lean_obj_tag(v_x_1707_) == 0)
{
uint8_t v___x_1710_; 
v___x_1710_ = 0;
return v___x_1710_;
}
else
{
lean_object* v_head_1711_; lean_object* v_tail_1712_; lean_object* v_head_1713_; lean_object* v_tail_1714_; uint8_t v___x_1715_; 
v_head_1711_ = lean_ctor_get(v_x_1706_, 0);
v_tail_1712_ = lean_ctor_get(v_x_1706_, 1);
v_head_1713_ = lean_ctor_get(v_x_1707_, 0);
v_tail_1714_ = lean_ctor_get(v_x_1707_, 1);
v___x_1715_ = lean_string_dec_eq(v_head_1711_, v_head_1713_);
if (v___x_1715_ == 0)
{
return v___x_1715_;
}
else
{
v_x_1706_ = v_tail_1712_;
v_x_1707_ = v_tail_1714_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0___boxed(lean_object* v_x_1717_, lean_object* v_x_1718_){
_start:
{
uint8_t v_res_1719_; lean_object* v_r_1720_; 
v_res_1719_ = l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(v_x_1717_, v_x_1718_);
lean_dec(v_x_1718_);
lean_dec(v_x_1717_);
v_r_1720_ = lean_box(v_res_1719_);
return v_r_1720_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqPreresolved_beq(lean_object* v_x_1721_, lean_object* v_x_1722_){
_start:
{
if (lean_obj_tag(v_x_1721_) == 0)
{
if (lean_obj_tag(v_x_1722_) == 0)
{
lean_object* v_ns_1723_; lean_object* v_ns_1724_; uint8_t v___x_1725_; 
v_ns_1723_ = lean_ctor_get(v_x_1721_, 0);
v_ns_1724_ = lean_ctor_get(v_x_1722_, 0);
v___x_1725_ = lean_name_eq(v_ns_1723_, v_ns_1724_);
return v___x_1725_;
}
else
{
uint8_t v___x_1726_; 
v___x_1726_ = 0;
return v___x_1726_;
}
}
else
{
if (lean_obj_tag(v_x_1722_) == 1)
{
lean_object* v_n_1727_; lean_object* v_fields_1728_; lean_object* v_n_1729_; lean_object* v_fields_1730_; uint8_t v___x_1731_; 
v_n_1727_ = lean_ctor_get(v_x_1721_, 0);
v_fields_1728_ = lean_ctor_get(v_x_1721_, 1);
v_n_1729_ = lean_ctor_get(v_x_1722_, 0);
v_fields_1730_ = lean_ctor_get(v_x_1722_, 1);
v___x_1731_ = lean_name_eq(v_n_1727_, v_n_1729_);
if (v___x_1731_ == 0)
{
return v___x_1731_;
}
else
{
uint8_t v___x_1732_; 
v___x_1732_ = l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(v_fields_1728_, v_fields_1730_);
return v___x_1732_;
}
}
else
{
uint8_t v___x_1733_; 
v___x_1733_ = 0;
return v___x_1733_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqPreresolved_beq___boxed(lean_object* v_x_1734_, lean_object* v_x_1735_){
_start:
{
uint8_t v_res_1736_; lean_object* v_r_1737_; 
v_res_1736_ = l_Lean_Syntax_instBEqPreresolved_beq(v_x_1734_, v_x_1735_);
lean_dec_ref(v_x_1735_);
lean_dec_ref(v_x_1734_);
v_r_1737_ = lean_box(v_res_1736_);
return v_r_1737_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structEq_spec__1(lean_object* v_x_1740_, lean_object* v_x_1741_){
_start:
{
if (lean_obj_tag(v_x_1740_) == 0)
{
if (lean_obj_tag(v_x_1741_) == 0)
{
uint8_t v___x_1742_; 
v___x_1742_ = 1;
return v___x_1742_;
}
else
{
uint8_t v___x_1743_; 
v___x_1743_ = 0;
return v___x_1743_;
}
}
else
{
if (lean_obj_tag(v_x_1741_) == 0)
{
uint8_t v___x_1744_; 
v___x_1744_ = 0;
return v___x_1744_;
}
else
{
lean_object* v_head_1745_; lean_object* v_tail_1746_; lean_object* v_head_1747_; lean_object* v_tail_1748_; uint8_t v___x_1749_; 
v_head_1745_ = lean_ctor_get(v_x_1740_, 0);
v_tail_1746_ = lean_ctor_get(v_x_1740_, 1);
v_head_1747_ = lean_ctor_get(v_x_1741_, 0);
v_tail_1748_ = lean_ctor_get(v_x_1741_, 1);
v___x_1749_ = l_Lean_Syntax_instBEqPreresolved_beq(v_head_1745_, v_head_1747_);
if (v___x_1749_ == 0)
{
return v___x_1749_;
}
else
{
v_x_1740_ = v_tail_1746_;
v_x_1741_ = v_tail_1748_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structEq_spec__1___boxed(lean_object* v_x_1751_, lean_object* v_x_1752_){
_start:
{
uint8_t v_res_1753_; lean_object* v_r_1754_; 
v_res_1753_ = l_List_beq___at___00Lean_Syntax_structEq_spec__1(v_x_1751_, v_x_1752_);
lean_dec(v_x_1752_);
lean_dec(v_x_1751_);
v_r_1754_ = lean_box(v_res_1753_);
return v_r_1754_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structEq(lean_object* v_x_1755_, lean_object* v_x_1756_){
_start:
{
switch(lean_obj_tag(v_x_1755_))
{
case 0:
{
if (lean_obj_tag(v_x_1756_) == 0)
{
uint8_t v___x_1757_; 
v___x_1757_ = 1;
return v___x_1757_;
}
else
{
uint8_t v___x_1758_; 
v___x_1758_ = 0;
return v___x_1758_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1756_) == 1)
{
lean_object* v_kind_1759_; lean_object* v_args_1760_; lean_object* v_kind_1761_; lean_object* v_args_1762_; uint8_t v___x_1763_; 
v_kind_1759_ = lean_ctor_get(v_x_1755_, 1);
v_args_1760_ = lean_ctor_get(v_x_1755_, 2);
v_kind_1761_ = lean_ctor_get(v_x_1756_, 1);
v_args_1762_ = lean_ctor_get(v_x_1756_, 2);
v___x_1763_ = lean_name_eq(v_kind_1759_, v_kind_1761_);
if (v___x_1763_ == 0)
{
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; uint8_t v___x_1766_; 
v___x_1764_ = lean_array_get_size(v_args_1760_);
v___x_1765_ = lean_array_get_size(v_args_1762_);
v___x_1766_ = lean_nat_dec_eq(v___x_1764_, v___x_1765_);
if (v___x_1766_ == 0)
{
return v___x_1766_;
}
else
{
uint8_t v___x_1767_; 
v___x_1767_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(v_args_1760_, v_args_1762_, v___x_1764_);
return v___x_1767_;
}
}
}
else
{
uint8_t v___x_1768_; 
v___x_1768_ = 0;
return v___x_1768_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1756_) == 2)
{
lean_object* v_val_1769_; lean_object* v_val_1770_; uint8_t v___x_1771_; 
v_val_1769_ = lean_ctor_get(v_x_1755_, 1);
v_val_1770_ = lean_ctor_get(v_x_1756_, 1);
v___x_1771_ = lean_string_dec_eq(v_val_1769_, v_val_1770_);
return v___x_1771_;
}
else
{
uint8_t v___x_1772_; 
v___x_1772_ = 0;
return v___x_1772_;
}
}
default: 
{
if (lean_obj_tag(v_x_1756_) == 3)
{
lean_object* v_rawVal_1773_; lean_object* v_val_1774_; lean_object* v_preresolved_1775_; lean_object* v_rawVal_1776_; lean_object* v_val_1777_; lean_object* v_preresolved_1778_; uint8_t v___x_1779_; 
v_rawVal_1773_ = lean_ctor_get(v_x_1755_, 1);
v_val_1774_ = lean_ctor_get(v_x_1755_, 2);
v_preresolved_1775_ = lean_ctor_get(v_x_1755_, 3);
v_rawVal_1776_ = lean_ctor_get(v_x_1756_, 1);
v_val_1777_ = lean_ctor_get(v_x_1756_, 2);
v_preresolved_1778_ = lean_ctor_get(v_x_1756_, 3);
lean_inc_ref(v_rawVal_1776_);
lean_inc_ref(v_rawVal_1773_);
v___x_1779_ = lean_substring_beq(v_rawVal_1773_, v_rawVal_1776_);
if (v___x_1779_ == 0)
{
return v___x_1779_;
}
else
{
uint8_t v___x_1780_; 
v___x_1780_ = lean_name_eq(v_val_1774_, v_val_1777_);
if (v___x_1780_ == 0)
{
return v___x_1780_;
}
else
{
uint8_t v___x_1781_; 
v___x_1781_ = l_List_beq___at___00Lean_Syntax_structEq_spec__1(v_preresolved_1775_, v_preresolved_1778_);
return v___x_1781_;
}
}
}
else
{
uint8_t v___x_1782_; 
v___x_1782_ = 0;
return v___x_1782_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(lean_object* v_xs_1783_, lean_object* v_ys_1784_, lean_object* v_x_1785_){
_start:
{
lean_object* v_zero_1786_; uint8_t v_isZero_1787_; 
v_zero_1786_ = lean_unsigned_to_nat(0u);
v_isZero_1787_ = lean_nat_dec_eq(v_x_1785_, v_zero_1786_);
if (v_isZero_1787_ == 1)
{
lean_dec(v_x_1785_);
return v_isZero_1787_;
}
else
{
lean_object* v_one_1788_; lean_object* v_n_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; 
v_one_1788_ = lean_unsigned_to_nat(1u);
v_n_1789_ = lean_nat_sub(v_x_1785_, v_one_1788_);
lean_dec(v_x_1785_);
v___x_1790_ = lean_array_fget_borrowed(v_xs_1783_, v_n_1789_);
v___x_1791_ = lean_array_fget_borrowed(v_ys_1784_, v_n_1789_);
v___x_1792_ = l_Lean_Syntax_structEq(v___x_1790_, v___x_1791_);
if (v___x_1792_ == 0)
{
lean_dec(v_n_1789_);
return v___x_1792_;
}
else
{
v_x_1785_ = v_n_1789_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg___boxed(lean_object* v_xs_1794_, lean_object* v_ys_1795_, lean_object* v_x_1796_){
_start:
{
uint8_t v_res_1797_; lean_object* v_r_1798_; 
v_res_1797_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(v_xs_1794_, v_ys_1795_, v_x_1796_);
lean_dec_ref(v_ys_1795_);
lean_dec_ref(v_xs_1794_);
v_r_1798_ = lean_box(v_res_1797_);
return v_r_1798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structEq___boxed(lean_object* v_x_1799_, lean_object* v_x_1800_){
_start:
{
uint8_t v_res_1801_; lean_object* v_r_1802_; 
v_res_1801_ = l_Lean_Syntax_structEq(v_x_1799_, v_x_1800_);
lean_dec(v_x_1800_);
lean_dec(v_x_1799_);
v_r_1802_ = lean_box(v_res_1801_);
return v_r_1802_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0(lean_object* v_xs_1803_, lean_object* v_ys_1804_, lean_object* v_hsz_1805_, lean_object* v_x_1806_, lean_object* v_x_1807_){
_start:
{
uint8_t v___x_1808_; 
v___x_1808_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(v_xs_1803_, v_ys_1804_, v_x_1806_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___boxed(lean_object* v_xs_1809_, lean_object* v_ys_1810_, lean_object* v_hsz_1811_, lean_object* v_x_1812_, lean_object* v_x_1813_){
_start:
{
uint8_t v_res_1814_; lean_object* v_r_1815_; 
v_res_1814_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0(v_xs_1809_, v_ys_1810_, v_hsz_1811_, v_x_1812_, v_x_1813_);
lean_dec_ref(v_ys_1810_);
lean_dec_ref(v_xs_1809_);
v_r_1815_ = lean_box(v_res_1814_);
return v_r_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg(){
_start:
{
lean_object* v___f_1820_; 
v___f_1820_ = ((lean_object*)(l_Lean_Syntax_instBEqTSyntax___redArg___closed__0));
return v___f_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg___boxed(lean_object* v___dummy_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lean_Syntax_instBEqTSyntax___redArg();
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax(lean_object* v_k_1823_){
_start:
{
lean_object* v___f_1824_; 
v___f_1824_ = ((lean_object*)(l_Lean_Syntax_instBEqTSyntax___redArg___closed__0));
return v___f_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___boxed(lean_object* v_k_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = l_Lean_Syntax_instBEqTSyntax(v_k_1825_);
lean_dec(v_k_1825_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(lean_object* v_as_1827_, lean_object* v_i_1828_){
_start:
{
lean_object* v_zero_1829_; uint8_t v_isZero_1830_; 
v_zero_1829_ = lean_unsigned_to_nat(0u);
v_isZero_1830_ = lean_nat_dec_eq(v_i_1828_, v_zero_1829_);
if (v_isZero_1830_ == 1)
{
lean_object* v___x_1831_; 
lean_dec(v_i_1828_);
v___x_1831_ = lean_box(0);
return v___x_1831_;
}
else
{
lean_object* v_one_1832_; lean_object* v_n_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v_one_1832_ = lean_unsigned_to_nat(1u);
v_n_1833_ = lean_nat_sub(v_i_1828_, v_one_1832_);
lean_dec(v_i_1828_);
v___x_1834_ = lean_array_fget_borrowed(v_as_1827_, v_n_1833_);
v___x_1835_ = l_Lean_Syntax_getTailInfo_x3f(v___x_1834_);
if (lean_obj_tag(v___x_1835_) == 0)
{
v_i_1828_ = v_n_1833_;
goto _start;
}
else
{
lean_dec(v_n_1833_);
return v___x_1835_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object* v_x_1837_){
_start:
{
switch(lean_obj_tag(v_x_1837_))
{
case 2:
{
lean_object* v_info_1838_; lean_object* v___x_1839_; 
v_info_1838_ = lean_ctor_get(v_x_1837_, 0);
lean_inc(v_info_1838_);
v___x_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1839_, 0, v_info_1838_);
return v___x_1839_;
}
case 3:
{
lean_object* v_info_1840_; lean_object* v___x_1841_; 
v_info_1840_ = lean_ctor_get(v_x_1837_, 0);
lean_inc(v_info_1840_);
v___x_1841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1841_, 0, v_info_1840_);
return v___x_1841_;
}
case 1:
{
lean_object* v_info_1842_; 
v_info_1842_ = lean_ctor_get(v_x_1837_, 0);
if (lean_obj_tag(v_info_1842_) == 2)
{
lean_object* v_args_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v_args_1843_ = lean_ctor_get(v_x_1837_, 2);
v___x_1844_ = lean_array_get_size(v_args_1843_);
v___x_1845_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(v_args_1843_, v___x_1844_);
return v___x_1845_;
}
else
{
lean_object* v___x_1846_; 
lean_inc(v_info_1842_);
v___x_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1846_, 0, v_info_1842_);
return v___x_1846_;
}
}
default: 
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_box(0);
return v___x_1847_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f___boxed(lean_object* v_x_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_Syntax_getTailInfo_x3f(v_x_1848_);
lean_dec(v_x_1848_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg___boxed(lean_object* v_as_1850_, lean_object* v_i_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(v_as_1850_, v_i_1851_);
lean_dec_ref(v_as_1850_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0(lean_object* v_as_1853_, lean_object* v_i_1854_, lean_object* v_a_1855_){
_start:
{
lean_object* v___x_1856_; 
v___x_1856_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(v_as_1853_, v_i_1854_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___boxed(lean_object* v_as_1857_, lean_object* v_i_1858_, lean_object* v_a_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0(v_as_1857_, v_i_1858_, v_a_1859_);
lean_dec_ref(v_as_1857_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo(lean_object* v_stx_1861_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = l_Lean_Syntax_getTailInfo_x3f(v_stx_1861_);
if (lean_obj_tag(v___x_1862_) == 0)
{
lean_object* v___x_1863_; 
v___x_1863_ = lean_box(2);
return v___x_1863_;
}
else
{
lean_object* v_val_1864_; 
v_val_1864_ = lean_ctor_get(v___x_1862_, 0);
lean_inc(v_val_1864_);
lean_dec_ref_known(v___x_1862_, 1);
return v_val_1864_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo___boxed(lean_object* v_stx_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lean_Syntax_getTailInfo(v_stx_1865_);
lean_dec(v_stx_1865_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize(lean_object* v_stx_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = l_Lean_Syntax_getTailInfo_x3f(v_stx_1867_);
if (lean_obj_tag(v___x_1868_) == 1)
{
lean_object* v_val_1869_; 
v_val_1869_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_val_1869_);
lean_dec_ref_known(v___x_1868_, 1);
if (lean_obj_tag(v_val_1869_) == 0)
{
lean_object* v_trailing_1870_; lean_object* v_startPos_1871_; lean_object* v_stopPos_1872_; lean_object* v___x_1873_; 
v_trailing_1870_ = lean_ctor_get(v_val_1869_, 2);
lean_inc_ref(v_trailing_1870_);
lean_dec_ref_known(v_val_1869_, 4);
v_startPos_1871_ = lean_ctor_get(v_trailing_1870_, 1);
lean_inc(v_startPos_1871_);
v_stopPos_1872_ = lean_ctor_get(v_trailing_1870_, 2);
lean_inc(v_stopPos_1872_);
lean_dec_ref(v_trailing_1870_);
v___x_1873_ = lean_nat_sub(v_stopPos_1872_, v_startPos_1871_);
lean_dec(v_startPos_1871_);
lean_dec(v_stopPos_1872_);
return v___x_1873_;
}
else
{
lean_object* v___x_1874_; 
lean_dec(v_val_1869_);
v___x_1874_ = lean_unsigned_to_nat(0u);
return v___x_1874_;
}
}
else
{
lean_object* v___x_1875_; 
lean_dec(v___x_1868_);
v___x_1875_ = lean_unsigned_to_nat(0u);
return v___x_1875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize___boxed(lean_object* v_stx_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lean_Syntax_getTrailingSize(v_stx_1876_);
lean_dec(v_stx_1876_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f(lean_object* v_stx_1878_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = l_Lean_Syntax_getTailInfo(v_stx_1878_);
v___x_1880_ = l_Lean_SourceInfo_getTrailing_x3f(v___x_1879_);
lean_dec(v___x_1879_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f___boxed(lean_object* v_stx_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lean_Syntax_getTrailing_x3f(v_stx_1881_);
lean_dec(v_stx_1881_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object* v_stx_1883_, uint8_t v_canonicalOnly_1884_){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = l_Lean_Syntax_getTailInfo(v_stx_1883_);
v___x_1886_ = l_Lean_SourceInfo_getTrailingTailPos_x3f(v___x_1885_, v_canonicalOnly_1884_);
lean_dec(v___x_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f___boxed(lean_object* v_stx_1887_, lean_object* v_canonicalOnly_1888_){
_start:
{
uint8_t v_canonicalOnly_boxed_1889_; lean_object* v_res_1890_; 
v_canonicalOnly_boxed_1889_ = lean_unbox(v_canonicalOnly_1888_);
v_res_1890_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_stx_1887_, v_canonicalOnly_boxed_1889_);
lean_dec(v_stx_1887_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object* v_stx_1891_, uint8_t v_withLeading_1892_, uint8_t v_withTrailing_1893_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_Syntax_getHeadInfo(v_stx_1891_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_leading_1895_; lean_object* v_pos_1896_; lean_object* v___x_1897_; 
v_leading_1895_ = lean_ctor_get(v___x_1894_, 0);
lean_inc_ref(v_leading_1895_);
v_pos_1896_ = lean_ctor_get(v___x_1894_, 1);
lean_inc(v_pos_1896_);
lean_dec_ref_known(v___x_1894_, 4);
v___x_1897_ = l_Lean_Syntax_getTailInfo(v_stx_1891_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_trailing_1898_; lean_object* v_endPos_1899_; lean_object* v_str_1900_; lean_object* v_startPos_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1915_; 
v_trailing_1898_ = lean_ctor_get(v___x_1897_, 2);
lean_inc_ref(v_trailing_1898_);
v_endPos_1899_ = lean_ctor_get(v___x_1897_, 3);
lean_inc(v_endPos_1899_);
lean_dec_ref_known(v___x_1897_, 4);
v_str_1900_ = lean_ctor_get(v_leading_1895_, 0);
v_startPos_1901_ = lean_ctor_get(v_leading_1895_, 1);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_leading_1895_);
if (v_isSharedCheck_1915_ == 0)
{
lean_object* v_unused_1916_; 
v_unused_1916_ = lean_ctor_get(v_leading_1895_, 2);
lean_dec(v_unused_1916_);
v___x_1903_ = v_leading_1895_;
v_isShared_1904_ = v_isSharedCheck_1915_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_startPos_1901_);
lean_inc(v_str_1900_);
lean_dec(v_leading_1895_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1915_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1913_; 
if (v_withLeading_1892_ == 0)
{
lean_dec(v_startPos_1901_);
v___y_1913_ = v_pos_1896_;
goto v___jp_1912_;
}
else
{
lean_dec(v_pos_1896_);
v___y_1913_ = v_startPos_1901_;
goto v___jp_1912_;
}
v___jp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 2, v___y_1907_);
lean_ctor_set(v___x_1903_, 1, v___y_1906_);
v___x_1909_ = v___x_1903_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_str_1900_);
lean_ctor_set(v_reuseFailAlloc_1911_, 1, v___y_1906_);
lean_ctor_set(v_reuseFailAlloc_1911_, 2, v___y_1907_);
v___x_1909_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
lean_object* v___x_1910_; 
v___x_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
return v___x_1910_;
}
}
v___jp_1912_:
{
if (v_withTrailing_1893_ == 0)
{
lean_dec_ref(v_trailing_1898_);
v___y_1906_ = v___y_1913_;
v___y_1907_ = v_endPos_1899_;
goto v___jp_1905_;
}
else
{
lean_object* v_stopPos_1914_; 
lean_dec(v_endPos_1899_);
v_stopPos_1914_ = lean_ctor_get(v_trailing_1898_, 2);
lean_inc(v_stopPos_1914_);
lean_dec_ref(v_trailing_1898_);
v___y_1906_ = v___y_1913_;
v___y_1907_ = v_stopPos_1914_;
goto v___jp_1905_;
}
}
}
}
else
{
lean_object* v___x_1917_; 
lean_dec(v___x_1897_);
lean_dec(v_pos_1896_);
lean_dec_ref(v_leading_1895_);
v___x_1917_ = lean_box(0);
return v___x_1917_;
}
}
else
{
lean_object* v___x_1918_; 
lean_dec(v___x_1894_);
v___x_1918_ = lean_box(0);
return v___x_1918_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f___boxed(lean_object* v_stx_1919_, lean_object* v_withLeading_1920_, lean_object* v_withTrailing_1921_){
_start:
{
uint8_t v_withLeading_boxed_1922_; uint8_t v_withTrailing_boxed_1923_; lean_object* v_res_1924_; 
v_withLeading_boxed_1922_ = lean_unbox(v_withLeading_1920_);
v_withTrailing_boxed_1923_ = lean_unbox(v_withTrailing_1921_);
v_res_1924_ = l_Lean_Syntax_getSubstring_x3f(v_stx_1919_, v_withLeading_boxed_1922_, v_withTrailing_boxed_1923_);
lean_dec(v_stx_1919_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___redArg(lean_object* v_a_1925_, lean_object* v_f_1926_, lean_object* v_i_1927_){
_start:
{
lean_object* v_zero_1928_; uint8_t v_isZero_1929_; 
v_zero_1928_ = lean_unsigned_to_nat(0u);
v_isZero_1929_ = lean_nat_dec_eq(v_i_1927_, v_zero_1928_);
if (v_isZero_1929_ == 1)
{
lean_object* v___x_1930_; 
lean_dec(v_i_1927_);
lean_dec_ref(v_f_1926_);
lean_dec_ref(v_a_1925_);
v___x_1930_ = lean_box(0);
return v___x_1930_;
}
else
{
lean_object* v_one_1931_; lean_object* v_n_1932_; lean_object* v_v_1933_; lean_object* v___x_1934_; 
v_one_1931_ = lean_unsigned_to_nat(1u);
v_n_1932_ = lean_nat_sub(v_i_1927_, v_one_1931_);
lean_dec(v_i_1927_);
v_v_1933_ = lean_array_fget_borrowed(v_a_1925_, v_n_1932_);
lean_inc_ref(v_f_1926_);
lean_inc(v_v_1933_);
v___x_1934_ = lean_apply_1(v_f_1926_, v_v_1933_);
if (lean_obj_tag(v___x_1934_) == 0)
{
v_i_1927_ = v_n_1932_;
goto _start;
}
else
{
lean_object* v_val_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1944_; 
lean_dec_ref(v_f_1926_);
v_val_1936_ = lean_ctor_get(v___x_1934_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1934_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1938_ = v___x_1934_;
v_isShared_1939_ = v_isSharedCheck_1944_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_val_1936_);
lean_dec(v___x_1934_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1944_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1940_ = lean_array_fset(v_a_1925_, v_n_1932_, v_val_1936_);
lean_dec(v_n_1932_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v___x_1940_);
v___x_1942_ = v___x_1938_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast(lean_object* v_00_u03b1_1945_, lean_object* v_a_1946_, lean_object* v_f_1947_, lean_object* v_i_1948_){
_start:
{
lean_object* v___x_1949_; 
v___x_1949_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___redArg(v_a_1946_, v_f_1947_, v_i_1948_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfoAux(lean_object* v_info_1950_, lean_object* v_x_1951_){
_start:
{
switch(lean_obj_tag(v_x_1951_))
{
case 2:
{
lean_object* v_val_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1960_; 
v_val_1952_ = lean_ctor_get(v_x_1951_, 1);
v_isSharedCheck_1960_ = !lean_is_exclusive(v_x_1951_);
if (v_isSharedCheck_1960_ == 0)
{
lean_object* v_unused_1961_; 
v_unused_1961_ = lean_ctor_get(v_x_1951_, 0);
lean_dec(v_unused_1961_);
v___x_1954_ = v_x_1951_;
v_isShared_1955_ = v_isSharedCheck_1960_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_val_1952_);
lean_dec(v_x_1951_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1960_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 0, v_info_1950_);
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_info_1950_);
lean_ctor_set(v_reuseFailAlloc_1959_, 1, v_val_1952_);
v___x_1957_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
lean_object* v___x_1958_; 
v___x_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1957_);
return v___x_1958_;
}
}
}
case 3:
{
lean_object* v_rawVal_1962_; lean_object* v_val_1963_; lean_object* v_preresolved_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1972_; 
v_rawVal_1962_ = lean_ctor_get(v_x_1951_, 1);
v_val_1963_ = lean_ctor_get(v_x_1951_, 2);
v_preresolved_1964_ = lean_ctor_get(v_x_1951_, 3);
v_isSharedCheck_1972_ = !lean_is_exclusive(v_x_1951_);
if (v_isSharedCheck_1972_ == 0)
{
lean_object* v_unused_1973_; 
v_unused_1973_ = lean_ctor_get(v_x_1951_, 0);
lean_dec(v_unused_1973_);
v___x_1966_ = v_x_1951_;
v_isShared_1967_ = v_isSharedCheck_1972_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_preresolved_1964_);
lean_inc(v_val_1963_);
lean_inc(v_rawVal_1962_);
lean_dec(v_x_1951_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1972_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
lean_ctor_set(v___x_1966_, 0, v_info_1950_);
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_info_1950_);
lean_ctor_set(v_reuseFailAlloc_1971_, 1, v_rawVal_1962_);
lean_ctor_set(v_reuseFailAlloc_1971_, 2, v_val_1963_);
lean_ctor_set(v_reuseFailAlloc_1971_, 3, v_preresolved_1964_);
v___x_1969_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
lean_object* v___x_1970_; 
v___x_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1969_);
return v___x_1970_;
}
}
}
case 1:
{
lean_object* v_info_1974_; lean_object* v_kind_1975_; lean_object* v_args_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1994_; 
v_info_1974_ = lean_ctor_get(v_x_1951_, 0);
v_kind_1975_ = lean_ctor_get(v_x_1951_, 1);
v_args_1976_ = lean_ctor_get(v_x_1951_, 2);
v_isSharedCheck_1994_ = !lean_is_exclusive(v_x_1951_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1978_ = v_x_1951_;
v_isShared_1979_ = v_isSharedCheck_1994_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_args_1976_);
lean_inc(v_kind_1975_);
lean_inc(v_info_1974_);
lean_dec(v_x_1951_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1994_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = lean_array_get_size(v_args_1976_);
v___x_1981_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___at___00Lean_Syntax_setTailInfoAux_spec__0(v_info_1950_, v_args_1976_, v___x_1980_);
if (lean_obj_tag(v___x_1981_) == 0)
{
lean_object* v___x_1982_; 
lean_del_object(v___x_1978_);
lean_dec(v_kind_1975_);
lean_dec(v_info_1974_);
v___x_1982_ = lean_box(0);
return v___x_1982_;
}
else
{
lean_object* v_val_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1993_; 
v_val_1983_ = lean_ctor_get(v___x_1981_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1981_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1985_ = v___x_1981_;
v_isShared_1986_ = v_isSharedCheck_1993_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_val_1983_);
lean_dec(v___x_1981_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1993_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1979_ == 0)
{
lean_ctor_set(v___x_1978_, 2, v_val_1983_);
v___x_1988_ = v___x_1978_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_info_1974_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_kind_1975_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v_val_1983_);
v___x_1988_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
lean_object* v___x_1990_; 
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 0, v___x_1988_);
v___x_1990_ = v___x_1985_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1988_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_1995_; 
lean_dec(v_x_1951_);
lean_dec(v_info_1950_);
v___x_1995_ = lean_box(0);
return v___x_1995_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___at___00Lean_Syntax_setTailInfoAux_spec__0(lean_object* v_info_1996_, lean_object* v_a_1997_, lean_object* v_i_1998_){
_start:
{
lean_object* v_zero_1999_; uint8_t v_isZero_2000_; 
v_zero_1999_ = lean_unsigned_to_nat(0u);
v_isZero_2000_ = lean_nat_dec_eq(v_i_1998_, v_zero_1999_);
if (v_isZero_2000_ == 1)
{
lean_object* v___x_2001_; 
lean_dec(v_i_1998_);
lean_dec_ref(v_a_1997_);
lean_dec(v_info_1996_);
v___x_2001_ = lean_box(0);
return v___x_2001_;
}
else
{
lean_object* v_one_2002_; lean_object* v_n_2003_; lean_object* v_v_2004_; lean_object* v___x_2005_; 
v_one_2002_ = lean_unsigned_to_nat(1u);
v_n_2003_ = lean_nat_sub(v_i_1998_, v_one_2002_);
lean_dec(v_i_1998_);
v_v_2004_ = lean_array_fget_borrowed(v_a_1997_, v_n_2003_);
lean_inc(v_v_2004_);
lean_inc(v_info_1996_);
v___x_2005_ = l_Lean_Syntax_setTailInfoAux(v_info_1996_, v_v_2004_);
if (lean_obj_tag(v___x_2005_) == 0)
{
v_i_1998_ = v_n_2003_;
goto _start;
}
else
{
lean_object* v_val_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2015_; 
lean_dec(v_info_1996_);
v_val_2007_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2009_ = v___x_2005_;
v_isShared_2010_ = v_isSharedCheck_2015_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_val_2007_);
lean_dec(v___x_2005_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2015_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2011_; lean_object* v___x_2013_; 
v___x_2011_ = lean_array_fset(v_a_1997_, v_n_2003_, v_val_2007_);
lean_dec(v_n_2003_);
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 0, v___x_2011_);
v___x_2013_ = v___x_2009_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v___x_2011_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfo(lean_object* v_stx_2016_, lean_object* v_info_2017_){
_start:
{
lean_object* v___x_2018_; 
lean_inc(v_stx_2016_);
v___x_2018_ = l_Lean_Syntax_setTailInfoAux(v_info_2017_, v_stx_2016_);
if (lean_obj_tag(v___x_2018_) == 0)
{
return v_stx_2016_;
}
else
{
lean_object* v_val_2019_; 
lean_dec(v_stx_2016_);
v_val_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_val_2019_);
lean_dec_ref_known(v___x_2018_, 1);
return v_val_2019_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_unsetTrailing(lean_object* v_stx_2020_){
_start:
{
lean_object* v___x_2021_; 
v___x_2021_ = l_Lean_Syntax_getTailInfo(v_stx_2020_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_trailing_2022_; lean_object* v_leading_2023_; lean_object* v_pos_2024_; lean_object* v_endPos_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2043_; 
v_trailing_2022_ = lean_ctor_get(v___x_2021_, 2);
v_leading_2023_ = lean_ctor_get(v___x_2021_, 0);
v_pos_2024_ = lean_ctor_get(v___x_2021_, 1);
v_endPos_2025_ = lean_ctor_get(v___x_2021_, 3);
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2027_ = v___x_2021_;
v_isShared_2028_ = v_isSharedCheck_2043_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_endPos_2025_);
lean_inc(v_trailing_2022_);
lean_inc(v_pos_2024_);
lean_inc(v_leading_2023_);
lean_dec(v___x_2021_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2043_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v_str_2029_; lean_object* v_startPos_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2041_; 
v_str_2029_ = lean_ctor_get(v_trailing_2022_, 0);
v_startPos_2030_ = lean_ctor_get(v_trailing_2022_, 1);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_trailing_2022_);
if (v_isSharedCheck_2041_ == 0)
{
lean_object* v_unused_2042_; 
v_unused_2042_ = lean_ctor_get(v_trailing_2022_, 2);
lean_dec(v_unused_2042_);
v___x_2032_ = v_trailing_2022_;
v_isShared_2033_ = v_isSharedCheck_2041_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_startPos_2030_);
lean_inc(v_str_2029_);
lean_dec(v_trailing_2022_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2041_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
lean_inc(v_startPos_2030_);
if (v_isShared_2033_ == 0)
{
lean_ctor_set(v___x_2032_, 2, v_startPos_2030_);
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_str_2029_);
lean_ctor_set(v_reuseFailAlloc_2040_, 1, v_startPos_2030_);
lean_ctor_set(v_reuseFailAlloc_2040_, 2, v_startPos_2030_);
v___x_2035_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
lean_object* v___x_2037_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 2, v___x_2035_);
v___x_2037_ = v___x_2027_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_leading_2023_);
lean_ctor_set(v_reuseFailAlloc_2039_, 1, v_pos_2024_);
lean_ctor_set(v_reuseFailAlloc_2039_, 2, v___x_2035_);
lean_ctor_set(v_reuseFailAlloc_2039_, 3, v_endPos_2025_);
v___x_2037_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
lean_object* v___x_2038_; 
v___x_2038_ = l_Lean_Syntax_setTailInfo(v_stx_2020_, v___x_2037_);
return v___x_2038_;
}
}
}
}
}
else
{
lean_dec(v___x_2021_);
return v_stx_2020_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___redArg(lean_object* v_a_2044_, lean_object* v_f_2045_, lean_object* v_i_2046_){
_start:
{
lean_object* v___x_2047_; uint8_t v___x_2048_; 
v___x_2047_ = lean_array_get_size(v_a_2044_);
v___x_2048_ = lean_nat_dec_lt(v_i_2046_, v___x_2047_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; 
lean_dec(v_i_2046_);
lean_dec_ref(v_f_2045_);
lean_dec_ref(v_a_2044_);
v___x_2049_ = lean_box(0);
return v___x_2049_;
}
else
{
lean_object* v_v_2050_; lean_object* v___x_2051_; 
v_v_2050_ = lean_array_fget_borrowed(v_a_2044_, v_i_2046_);
lean_inc_ref(v_f_2045_);
lean_inc(v_v_2050_);
v___x_2051_ = lean_apply_1(v_f_2045_, v_v_2050_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2052_ = lean_unsigned_to_nat(1u);
v___x_2053_ = lean_nat_add(v_i_2046_, v___x_2052_);
lean_dec(v_i_2046_);
v_i_2046_ = v___x_2053_;
goto _start;
}
else
{
lean_object* v_val_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2063_; 
lean_dec_ref(v_f_2045_);
v_val_2055_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2057_ = v___x_2051_;
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_val_2055_);
lean_dec(v___x_2051_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2059_; lean_object* v___x_2061_; 
v___x_2059_ = lean_array_fset(v_a_2044_, v_i_2046_, v_val_2055_);
lean_dec(v_i_2046_);
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 0, v___x_2059_);
v___x_2061_ = v___x_2057_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst(lean_object* v_00_u03b1_2064_, lean_object* v_inst_2065_, lean_object* v_a_2066_, lean_object* v_f_2067_, lean_object* v_i_2068_){
_start:
{
lean_object* v___x_2069_; 
v___x_2069_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___redArg(v_a_2066_, v_f_2067_, v_i_2068_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___boxed(lean_object* v_00_u03b1_2070_, lean_object* v_inst_2071_, lean_object* v_a_2072_, lean_object* v_f_2073_, lean_object* v_i_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst(v_00_u03b1_2070_, v_inst_2071_, v_a_2072_, v_f_2073_, v_i_2074_);
lean_dec(v_inst_2071_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfoAux(lean_object* v_info_2076_, lean_object* v_x_2077_){
_start:
{
switch(lean_obj_tag(v_x_2077_))
{
case 2:
{
lean_object* v_val_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2086_; 
v_val_2078_ = lean_ctor_get(v_x_2077_, 1);
v_isSharedCheck_2086_ = !lean_is_exclusive(v_x_2077_);
if (v_isSharedCheck_2086_ == 0)
{
lean_object* v_unused_2087_; 
v_unused_2087_ = lean_ctor_get(v_x_2077_, 0);
lean_dec(v_unused_2087_);
v___x_2080_ = v_x_2077_;
v_isShared_2081_ = v_isSharedCheck_2086_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_val_2078_);
lean_dec(v_x_2077_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2086_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 0, v_info_2076_);
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_info_2076_);
lean_ctor_set(v_reuseFailAlloc_2085_, 1, v_val_2078_);
v___x_2083_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
lean_object* v___x_2084_; 
v___x_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
return v___x_2084_;
}
}
}
case 3:
{
lean_object* v_rawVal_2088_; lean_object* v_val_2089_; lean_object* v_preresolved_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2098_; 
v_rawVal_2088_ = lean_ctor_get(v_x_2077_, 1);
v_val_2089_ = lean_ctor_get(v_x_2077_, 2);
v_preresolved_2090_ = lean_ctor_get(v_x_2077_, 3);
v_isSharedCheck_2098_ = !lean_is_exclusive(v_x_2077_);
if (v_isSharedCheck_2098_ == 0)
{
lean_object* v_unused_2099_; 
v_unused_2099_ = lean_ctor_get(v_x_2077_, 0);
lean_dec(v_unused_2099_);
v___x_2092_ = v_x_2077_;
v_isShared_2093_ = v_isSharedCheck_2098_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_preresolved_2090_);
lean_inc(v_val_2089_);
lean_inc(v_rawVal_2088_);
lean_dec(v_x_2077_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2098_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2095_; 
if (v_isShared_2093_ == 0)
{
lean_ctor_set(v___x_2092_, 0, v_info_2076_);
v___x_2095_ = v___x_2092_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_info_2076_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v_rawVal_2088_);
lean_ctor_set(v_reuseFailAlloc_2097_, 2, v_val_2089_);
lean_ctor_set(v_reuseFailAlloc_2097_, 3, v_preresolved_2090_);
v___x_2095_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
lean_object* v___x_2096_; 
v___x_2096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
return v___x_2096_;
}
}
}
case 1:
{
lean_object* v_info_2100_; lean_object* v_kind_2101_; lean_object* v_args_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2120_; 
v_info_2100_ = lean_ctor_get(v_x_2077_, 0);
v_kind_2101_ = lean_ctor_get(v_x_2077_, 1);
v_args_2102_ = lean_ctor_get(v_x_2077_, 2);
v_isSharedCheck_2120_ = !lean_is_exclusive(v_x_2077_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2104_ = v_x_2077_;
v_isShared_2105_ = v_isSharedCheck_2120_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_args_2102_);
lean_inc(v_kind_2101_);
lean_inc(v_info_2100_);
lean_dec(v_x_2077_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2120_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; 
v___x_2106_ = lean_unsigned_to_nat(0u);
v___x_2107_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___at___00Lean_Syntax_setHeadInfoAux_spec__0(v_info_2076_, v_args_2102_, v___x_2106_);
if (lean_obj_tag(v___x_2107_) == 1)
{
lean_object* v_val_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2118_; 
v_val_2108_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2110_ = v___x_2107_;
v_isShared_2111_ = v_isSharedCheck_2118_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_val_2108_);
lean_dec(v___x_2107_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2118_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2113_; 
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 2, v_val_2108_);
v___x_2113_ = v___x_2104_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_info_2100_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v_kind_2101_);
lean_ctor_set(v_reuseFailAlloc_2117_, 2, v_val_2108_);
v___x_2113_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
lean_object* v___x_2115_; 
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 0, v___x_2113_);
v___x_2115_ = v___x_2110_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
else
{
lean_object* v___x_2119_; 
lean_dec(v___x_2107_);
lean_del_object(v___x_2104_);
lean_dec(v_kind_2101_);
lean_dec(v_info_2100_);
v___x_2119_ = lean_box(0);
return v___x_2119_;
}
}
}
default: 
{
lean_object* v___x_2121_; 
lean_dec(v_x_2077_);
lean_dec(v_info_2076_);
v___x_2121_ = lean_box(0);
return v___x_2121_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___at___00Lean_Syntax_setHeadInfoAux_spec__0(lean_object* v_info_2122_, lean_object* v_a_2123_, lean_object* v_i_2124_){
_start:
{
lean_object* v___x_2125_; uint8_t v___x_2126_; 
v___x_2125_ = lean_array_get_size(v_a_2123_);
v___x_2126_ = lean_nat_dec_lt(v_i_2124_, v___x_2125_);
if (v___x_2126_ == 0)
{
lean_object* v___x_2127_; 
lean_dec(v_i_2124_);
lean_dec_ref(v_a_2123_);
lean_dec(v_info_2122_);
v___x_2127_ = lean_box(0);
return v___x_2127_;
}
else
{
lean_object* v_v_2128_; lean_object* v___x_2129_; 
v_v_2128_ = lean_array_fget_borrowed(v_a_2123_, v_i_2124_);
lean_inc(v_v_2128_);
lean_inc(v_info_2122_);
v___x_2129_ = l_Lean_Syntax_setHeadInfoAux(v_info_2122_, v_v_2128_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2130_ = lean_unsigned_to_nat(1u);
v___x_2131_ = lean_nat_add(v_i_2124_, v___x_2130_);
lean_dec(v_i_2124_);
v_i_2124_ = v___x_2131_;
goto _start;
}
else
{
lean_object* v_val_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2141_; 
lean_dec(v_info_2122_);
v_val_2133_ = lean_ctor_get(v___x_2129_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2129_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2135_ = v___x_2129_;
v_isShared_2136_ = v_isSharedCheck_2141_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_val_2133_);
lean_dec(v___x_2129_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2141_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2137_; lean_object* v___x_2139_; 
v___x_2137_ = lean_array_fset(v_a_2123_, v_i_2124_, v_val_2133_);
lean_dec(v_i_2124_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 0, v___x_2137_);
v___x_2139_ = v___x_2135_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v___x_2137_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfo(lean_object* v_stx_2142_, lean_object* v_info_2143_){
_start:
{
lean_object* v___x_2144_; 
lean_inc(v_stx_2142_);
v___x_2144_ = l_Lean_Syntax_setHeadInfoAux(v_info_2143_, v_stx_2142_);
if (lean_obj_tag(v___x_2144_) == 0)
{
return v_stx_2142_;
}
else
{
lean_object* v_val_2145_; 
lean_dec(v_stx_2142_);
v_val_2145_ = lean_ctor_get(v___x_2144_, 0);
lean_inc(v_val_2145_);
lean_dec_ref_known(v___x_2144_, 1);
return v_val_2145_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setInfo(lean_object* v_info_2146_, lean_object* v_x_2147_){
_start:
{
switch(lean_obj_tag(v_x_2147_))
{
case 0:
{
lean_dec(v_info_2146_);
return v_x_2147_;
}
case 1:
{
lean_object* v_kind_2148_; lean_object* v_args_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
v_kind_2148_ = lean_ctor_get(v_x_2147_, 1);
v_args_2149_ = lean_ctor_get(v_x_2147_, 2);
v_isSharedCheck_2156_ = !lean_is_exclusive(v_x_2147_);
if (v_isSharedCheck_2156_ == 0)
{
lean_object* v_unused_2157_; 
v_unused_2157_ = lean_ctor_get(v_x_2147_, 0);
lean_dec(v_unused_2157_);
v___x_2151_ = v_x_2147_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_args_2149_);
lean_inc(v_kind_2148_);
lean_dec(v_x_2147_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 0, v_info_2146_);
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_info_2146_);
lean_ctor_set(v_reuseFailAlloc_2155_, 1, v_kind_2148_);
lean_ctor_set(v_reuseFailAlloc_2155_, 2, v_args_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
case 2:
{
lean_object* v_val_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2165_; 
v_val_2158_ = lean_ctor_get(v_x_2147_, 1);
v_isSharedCheck_2165_ = !lean_is_exclusive(v_x_2147_);
if (v_isSharedCheck_2165_ == 0)
{
lean_object* v_unused_2166_; 
v_unused_2166_ = lean_ctor_get(v_x_2147_, 0);
lean_dec(v_unused_2166_);
v___x_2160_ = v_x_2147_;
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_val_2158_);
lean_dec(v_x_2147_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2163_; 
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v_info_2146_);
v___x_2163_ = v___x_2160_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_info_2146_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v_val_2158_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
default: 
{
lean_object* v_rawVal_2167_; lean_object* v_val_2168_; lean_object* v_preresolved_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2176_; 
v_rawVal_2167_ = lean_ctor_get(v_x_2147_, 1);
v_val_2168_ = lean_ctor_get(v_x_2147_, 2);
v_preresolved_2169_ = lean_ctor_get(v_x_2147_, 3);
v_isSharedCheck_2176_ = !lean_is_exclusive(v_x_2147_);
if (v_isSharedCheck_2176_ == 0)
{
lean_object* v_unused_2177_; 
v_unused_2177_ = lean_ctor_get(v_x_2147_, 0);
lean_dec(v_unused_2177_);
v___x_2171_ = v_x_2147_;
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_preresolved_2169_);
lean_inc(v_val_2168_);
lean_inc(v_rawVal_2167_);
lean_dec(v_x_2147_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 0, v_info_2146_);
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_info_2146_);
lean_ctor_set(v_reuseFailAlloc_2175_, 1, v_rawVal_2167_);
lean_ctor_set(v_reuseFailAlloc_2175_, 2, v_val_2168_);
lean_ctor_set(v_reuseFailAlloc_2175_, 3, v_preresolved_2169_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getHead_x3f(lean_object* v_x_2181_){
_start:
{
switch(lean_obj_tag(v_x_2181_))
{
case 2:
{
lean_object* v_info_2182_; uint8_t v___x_2183_; lean_object* v___x_2184_; 
v_info_2182_ = lean_ctor_get(v_x_2181_, 0);
v___x_2183_ = 0;
v___x_2184_ = l_Lean_SourceInfo_getPos_x3f(v_info_2182_, v___x_2183_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v___x_2185_; 
lean_dec_ref_known(v_x_2181_, 2);
v___x_2185_ = lean_box(0);
return v___x_2185_;
}
else
{
lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2192_ == 0)
{
lean_object* v_unused_2193_; 
v_unused_2193_ = lean_ctor_get(v___x_2184_, 0);
lean_dec(v_unused_2193_);
v___x_2187_ = v___x_2184_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_dec(v___x_2184_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 0, v_x_2181_);
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_x_2181_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
}
case 3:
{
lean_object* v_info_2194_; uint8_t v___x_2195_; lean_object* v___x_2196_; 
v_info_2194_ = lean_ctor_get(v_x_2181_, 0);
v___x_2195_ = 0;
v___x_2196_ = l_Lean_SourceInfo_getPos_x3f(v_info_2194_, v___x_2195_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v___x_2197_; 
lean_dec_ref_known(v_x_2181_, 4);
v___x_2197_ = lean_box(0);
return v___x_2197_;
}
else
{
lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2204_ == 0)
{
lean_object* v_unused_2205_; 
v_unused_2205_ = lean_ctor_get(v___x_2196_, 0);
lean_dec(v_unused_2205_);
v___x_2199_ = v___x_2196_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_dec(v___x_2196_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 0, v_x_2181_);
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_x_2181_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
case 1:
{
lean_object* v_info_2206_; 
v_info_2206_ = lean_ctor_get(v_x_2181_, 0);
if (lean_obj_tag(v_info_2206_) == 2)
{
lean_object* v_args_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; size_t v_sz_2210_; size_t v___x_2211_; lean_object* v___x_2212_; lean_object* v_fst_2213_; 
v_args_2207_ = lean_ctor_get(v_x_2181_, 2);
lean_inc_ref(v_args_2207_);
lean_dec_ref_known(v_x_2181_, 3);
v___x_2208_ = lean_box(0);
v___x_2209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v_sz_2210_ = lean_array_size(v_args_2207_);
v___x_2211_ = ((size_t)0ULL);
v___x_2212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(v_args_2207_, v_sz_2210_, v___x_2211_, v___x_2209_);
lean_dec_ref(v_args_2207_);
v_fst_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_fst_2213_);
lean_dec_ref(v___x_2212_);
if (lean_obj_tag(v_fst_2213_) == 0)
{
return v___x_2208_;
}
else
{
lean_object* v_val_2214_; 
v_val_2214_ = lean_ctor_get(v_fst_2213_, 0);
lean_inc(v_val_2214_);
lean_dec_ref_known(v_fst_2213_, 1);
return v_val_2214_;
}
}
else
{
lean_object* v___x_2215_; 
v___x_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2215_, 0, v_x_2181_);
return v___x_2215_;
}
}
default: 
{
lean_object* v___x_2216_; 
lean_dec(v_x_2181_);
v___x_2216_ = lean_box(0);
return v___x_2216_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(lean_object* v_as_2217_, size_t v_sz_2218_, size_t v_i_2219_, lean_object* v_b_2220_){
_start:
{
uint8_t v___x_2221_; 
v___x_2221_ = lean_usize_dec_lt(v_i_2219_, v_sz_2218_);
if (v___x_2221_ == 0)
{
lean_inc_ref(v_b_2220_);
return v_b_2220_;
}
else
{
lean_object* v___x_2222_; lean_object* v_a_2223_; lean_object* v___x_2224_; 
v___x_2222_ = lean_box(0);
v_a_2223_ = lean_array_uget_borrowed(v_as_2217_, v_i_2219_);
lean_inc(v_a_2223_);
v___x_2224_ = l_Lean_Syntax_getHead_x3f(v_a_2223_);
if (lean_obj_tag(v___x_2224_) == 1)
{
lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
v___x_2226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
lean_ctor_set(v___x_2226_, 1, v___x_2222_);
return v___x_2226_;
}
else
{
lean_object* v___x_2227_; size_t v___x_2228_; size_t v___x_2229_; 
lean_dec(v___x_2224_);
v___x_2227_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v___x_2228_ = ((size_t)1ULL);
v___x_2229_ = lean_usize_add(v_i_2219_, v___x_2228_);
v_i_2219_ = v___x_2229_;
v_b_2220_ = v___x_2227_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___boxed(lean_object* v_as_2231_, lean_object* v_sz_2232_, lean_object* v_i_2233_, lean_object* v_b_2234_){
_start:
{
size_t v_sz_boxed_2235_; size_t v_i_boxed_2236_; lean_object* v_res_2237_; 
v_sz_boxed_2235_ = lean_unbox_usize(v_sz_2232_);
lean_dec(v_sz_2232_);
v_i_boxed_2236_ = lean_unbox_usize(v_i_2233_);
lean_dec(v_i_2233_);
v_res_2237_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(v_as_2231_, v_sz_boxed_2235_, v_i_boxed_2236_, v_b_2234_);
lean_dec_ref(v_b_2234_);
lean_dec_ref(v_as_2231_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object* v_target_2238_, lean_object* v_source_2239_){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2240_ = l_Lean_Syntax_getHeadInfo(v_source_2239_);
v___x_2241_ = l_Lean_Syntax_setHeadInfo(v_target_2238_, v___x_2240_);
v___x_2242_ = l_Lean_Syntax_getTailInfo(v_source_2239_);
v___x_2243_ = l_Lean_Syntax_setTailInfo(v___x_2241_, v___x_2242_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom___boxed(lean_object* v_target_2244_, lean_object* v_source_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l_Lean_Syntax_copyHeadTailInfoFrom(v_target_2244_, v_source_2245_);
lean_dec(v_source_2245_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSynthetic(lean_object* v_stx_2247_){
_start:
{
uint8_t v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2248_ = 0;
v___x_2249_ = l_Lean_SourceInfo_fromRef(v_stx_2247_, v___x_2248_);
v___x_2250_ = l_Lean_Syntax_setHeadInfo(v_stx_2247_, v___x_2249_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0(lean_object* v_val_2251_, lean_object* v_withRef_2252_, lean_object* v_x_2253_, lean_object* v_oldRef_2254_){
_start:
{
lean_object* v_ref_2255_; lean_object* v___x_2256_; 
v_ref_2255_ = l_Lean_replaceRef(v_val_2251_, v_oldRef_2254_);
v___x_2256_ = lean_apply_3(v_withRef_2252_, lean_box(0), v_ref_2255_, v_x_2253_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0___boxed(lean_object* v_val_2257_, lean_object* v_withRef_2258_, lean_object* v_x_2259_, lean_object* v_oldRef_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lean_withHeadRefOnly___redArg___lam__0(v_val_2257_, v_withRef_2258_, v_x_2259_, v_oldRef_2260_);
lean_dec(v_oldRef_2260_);
lean_dec(v_val_2257_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__1(lean_object* v_x_2262_, lean_object* v_withRef_2263_, lean_object* v_toBind_2264_, lean_object* v_getRef_2265_, lean_object* v_____do__lift_2266_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l_Lean_Syntax_getHead_x3f(v_____do__lift_2266_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_dec(v_getRef_2265_);
lean_dec(v_toBind_2264_);
lean_dec(v_withRef_2263_);
return v_x_2262_;
}
else
{
lean_object* v_val_2268_; lean_object* v___f_2269_; lean_object* v___x_2270_; 
v_val_2268_ = lean_ctor_get(v___x_2267_, 0);
lean_inc(v_val_2268_);
lean_dec_ref_known(v___x_2267_, 1);
v___f_2269_ = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2269_, 0, v_val_2268_);
lean_closure_set(v___f_2269_, 1, v_withRef_2263_);
lean_closure_set(v___f_2269_, 2, v_x_2262_);
v___x_2270_ = lean_apply_4(v_toBind_2264_, lean_box(0), lean_box(0), v_getRef_2265_, v___f_2269_);
return v___x_2270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg(lean_object* v_inst_2271_, lean_object* v_inst_2272_, lean_object* v_x_2273_){
_start:
{
lean_object* v_toBind_2274_; lean_object* v_getRef_2275_; lean_object* v_withRef_2276_; lean_object* v___f_2277_; lean_object* v___x_2278_; 
v_toBind_2274_ = lean_ctor_get(v_inst_2271_, 1);
lean_inc_n(v_toBind_2274_, 2);
lean_dec_ref(v_inst_2271_);
v_getRef_2275_ = lean_ctor_get(v_inst_2272_, 0);
lean_inc_n(v_getRef_2275_, 2);
v_withRef_2276_ = lean_ctor_get(v_inst_2272_, 1);
lean_inc(v_withRef_2276_);
lean_dec_ref(v_inst_2272_);
v___f_2277_ = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2277_, 0, v_x_2273_);
lean_closure_set(v___f_2277_, 1, v_withRef_2276_);
lean_closure_set(v___f_2277_, 2, v_toBind_2274_);
lean_closure_set(v___f_2277_, 3, v_getRef_2275_);
v___x_2278_ = lean_apply_4(v_toBind_2274_, lean_box(0), lean_box(0), v_getRef_2275_, v___f_2277_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly(lean_object* v_m_2279_, lean_object* v_inst_2280_, lean_object* v_inst_2281_, lean_object* v_00_u03b1_2282_, lean_object* v_x_2283_){
_start:
{
lean_object* v_toBind_2284_; lean_object* v_getRef_2285_; lean_object* v_withRef_2286_; lean_object* v___f_2287_; lean_object* v___x_2288_; 
v_toBind_2284_ = lean_ctor_get(v_inst_2280_, 1);
lean_inc_n(v_toBind_2284_, 2);
lean_dec_ref(v_inst_2280_);
v_getRef_2285_ = lean_ctor_get(v_inst_2281_, 0);
lean_inc_n(v_getRef_2285_, 2);
v_withRef_2286_ = lean_ctor_get(v_inst_2281_, 1);
lean_inc(v_withRef_2286_);
lean_dec_ref(v_inst_2281_);
v___f_2287_ = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2287_, 0, v_x_2283_);
lean_closure_set(v___f_2287_, 1, v_withRef_2286_);
lean_closure_set(v___f_2287_, 2, v_toBind_2284_);
lean_closure_set(v___f_2287_, 3, v_getRef_2285_);
v___x_2288_ = lean_apply_4(v_toBind_2284_, lean_box(0), lean_box(0), v_getRef_2285_, v___f_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT uint8_t l_Lean_expandMacros___lam__0(uint8_t v___x_2298_, lean_object* v_k_2299_){
_start:
{
lean_object* v___x_2300_; uint8_t v___x_2301_; 
v___x_2300_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__4));
v___x_2301_ = lean_name_eq(v_k_2299_, v___x_2300_);
if (v___x_2301_ == 0)
{
return v___x_2298_;
}
else
{
uint8_t v___x_2302_; 
v___x_2302_ = 0;
return v___x_2302_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_expandMacros___lam__0___boxed(lean_object* v___x_2303_, lean_object* v_k_2304_){
_start:
{
uint8_t v___x_2059__boxed_2305_; uint8_t v_res_2306_; lean_object* v_r_2307_; 
v___x_2059__boxed_2305_ = lean_unbox(v___x_2303_);
v_res_2306_ = l_Lean_expandMacros___lam__0(v___x_2059__boxed_2305_, v_k_2304_);
lean_dec(v_k_2304_);
v_r_2307_ = lean_box(v_res_2306_);
return v_r_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandMacros(lean_object* v_stx_2309_, lean_object* v_p_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_){
_start:
{
if (lean_obj_tag(v_stx_2309_) == 1)
{
lean_object* v_info_2313_; lean_object* v_kind_2314_; lean_object* v_args_2315_; lean_object* v___x_2316_; lean_object* v_methods_2318_; lean_object* v_quotContext_2319_; lean_object* v_currMacroScope_2320_; lean_object* v_currRecDepth_2321_; lean_object* v_maxRecDepth_2322_; lean_object* v_ref_2323_; lean_object* v___y_2324_; uint8_t v___x_2351_; 
v_info_2313_ = lean_ctor_get(v_stx_2309_, 0);
v_kind_2314_ = lean_ctor_get(v_stx_2309_, 1);
v_args_2315_ = lean_ctor_get(v_stx_2309_, 2);
lean_inc(v_kind_2314_);
v___x_2316_ = lean_apply_1(v_p_2310_, v_kind_2314_);
v___x_2351_ = lean_unbox(v___x_2316_);
if (v___x_2351_ == 0)
{
lean_object* v___x_2352_; 
lean_dec_ref(v_a_2311_);
v___x_2352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2352_, 0, v_stx_2309_);
lean_ctor_set(v___x_2352_, 1, v_a_2312_);
return v___x_2352_;
}
else
{
lean_object* v_methods_2353_; lean_object* v_quotContext_2354_; lean_object* v_currMacroScope_2355_; lean_object* v_currRecDepth_2356_; lean_object* v_maxRecDepth_2357_; lean_object* v_ref_2358_; lean_object* v_ref_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; 
v_methods_2353_ = lean_ctor_get(v_a_2311_, 0);
lean_inc_n(v_methods_2353_, 2);
v_quotContext_2354_ = lean_ctor_get(v_a_2311_, 1);
lean_inc_n(v_quotContext_2354_, 2);
v_currMacroScope_2355_ = lean_ctor_get(v_a_2311_, 2);
lean_inc_n(v_currMacroScope_2355_, 2);
v_currRecDepth_2356_ = lean_ctor_get(v_a_2311_, 3);
lean_inc_n(v_currRecDepth_2356_, 2);
v_maxRecDepth_2357_ = lean_ctor_get(v_a_2311_, 4);
lean_inc_n(v_maxRecDepth_2357_, 2);
v_ref_2358_ = lean_ctor_get(v_a_2311_, 5);
lean_inc(v_ref_2358_);
lean_dec_ref(v_a_2311_);
v_ref_2359_ = l_Lean_replaceRef(v_stx_2309_, v_ref_2358_);
lean_dec(v_ref_2358_);
lean_inc(v_ref_2359_);
v___x_2360_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2360_, 0, v_methods_2353_);
lean_ctor_set(v___x_2360_, 1, v_quotContext_2354_);
lean_ctor_set(v___x_2360_, 2, v_currMacroScope_2355_);
lean_ctor_set(v___x_2360_, 3, v_currRecDepth_2356_);
lean_ctor_set(v___x_2360_, 4, v_maxRecDepth_2357_);
lean_ctor_set(v___x_2360_, 5, v_ref_2359_);
lean_inc_ref(v_stx_2309_);
v___x_2361_ = l_Lean_Macro_expandMacro_x3f(v_stx_2309_, v___x_2360_, v_a_2312_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
if (lean_obj_tag(v_a_2362_) == 0)
{
lean_object* v_a_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2375_; 
lean_dec_ref_known(v___x_2360_, 6);
v_a_2363_ = lean_ctor_get(v___x_2361_, 1);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2375_ == 0)
{
lean_object* v_unused_2376_; 
v_unused_2376_ = lean_ctor_get(v___x_2361_, 0);
lean_dec(v_unused_2376_);
v___x_2365_ = v___x_2361_;
v_isShared_2366_ = v_isSharedCheck_2375_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_a_2363_);
lean_dec(v___x_2361_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2375_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2367_; uint8_t v___x_2368_; 
v___x_2367_ = lean_unsigned_to_nat(0u);
v___x_2368_ = lean_nat_dec_eq(v_maxRecDepth_2357_, v___x_2367_);
if (v___x_2368_ == 0)
{
uint8_t v___x_2369_; 
v___x_2369_ = lean_nat_dec_eq(v_currRecDepth_2356_, v_maxRecDepth_2357_);
if (v___x_2369_ == 0)
{
lean_inc_ref(v_args_2315_);
lean_inc(v_kind_2314_);
lean_inc(v_info_2313_);
lean_del_object(v___x_2365_);
lean_dec_ref_known(v_stx_2309_, 3);
v_methods_2318_ = v_methods_2353_;
v_quotContext_2319_ = v_quotContext_2354_;
v_currMacroScope_2320_ = v_currMacroScope_2355_;
v_currRecDepth_2321_ = v_currRecDepth_2356_;
v_maxRecDepth_2322_ = v_maxRecDepth_2357_;
v_ref_2323_ = v_ref_2359_;
v___y_2324_ = v_a_2363_;
goto v___jp_2317_;
}
else
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2373_; 
lean_dec(v_ref_2359_);
lean_dec(v_maxRecDepth_2357_);
lean_dec(v_currRecDepth_2356_);
lean_dec(v_currMacroScope_2355_);
lean_dec(v_quotContext_2354_);
lean_dec(v_methods_2353_);
v___x_2370_ = ((lean_object*)(l_Lean_expandMacros___closed__0));
v___x_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2371_, 0, v_stx_2309_);
lean_ctor_set(v___x_2371_, 1, v___x_2370_);
if (v_isShared_2366_ == 0)
{
lean_ctor_set_tag(v___x_2365_, 1);
lean_ctor_set(v___x_2365_, 0, v___x_2371_);
v___x_2373_ = v___x_2365_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2371_);
lean_ctor_set(v_reuseFailAlloc_2374_, 1, v_a_2363_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
else
{
lean_inc_ref(v_args_2315_);
lean_inc(v_kind_2314_);
lean_inc(v_info_2313_);
lean_del_object(v___x_2365_);
lean_dec_ref_known(v_stx_2309_, 3);
v_methods_2318_ = v_methods_2353_;
v_quotContext_2319_ = v_quotContext_2354_;
v_currMacroScope_2320_ = v_currMacroScope_2355_;
v_currRecDepth_2321_ = v_currRecDepth_2356_;
v_maxRecDepth_2322_ = v_maxRecDepth_2357_;
v_ref_2323_ = v_ref_2359_;
v___y_2324_ = v_a_2363_;
goto v___jp_2317_;
}
}
}
else
{
lean_object* v_a_2377_; lean_object* v_val_2378_; lean_object* v___f_2379_; 
lean_inc_ref(v_a_2362_);
lean_dec(v_ref_2359_);
lean_dec(v_maxRecDepth_2357_);
lean_dec(v_currRecDepth_2356_);
lean_dec(v_currMacroScope_2355_);
lean_dec(v_quotContext_2354_);
lean_dec(v_methods_2353_);
lean_dec_ref_known(v_stx_2309_, 3);
v_a_2377_ = lean_ctor_get(v___x_2361_, 1);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2361_, 2);
v_val_2378_ = lean_ctor_get(v_a_2362_, 0);
lean_inc(v_val_2378_);
lean_dec_ref_known(v_a_2362_, 1);
v___f_2379_ = lean_alloc_closure((void*)(l_Lean_expandMacros___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2379_, 0, v___x_2316_);
v_stx_2309_ = v_val_2378_;
v_p_2310_ = v___f_2379_;
v_a_2311_ = v___x_2360_;
v_a_2312_ = v_a_2377_;
goto _start;
}
}
else
{
lean_object* v_a_2381_; lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
lean_dec_ref_known(v___x_2360_, 6);
lean_dec(v_ref_2359_);
lean_dec(v_maxRecDepth_2357_);
lean_dec(v_currRecDepth_2356_);
lean_dec(v_currMacroScope_2355_);
lean_dec(v_quotContext_2354_);
lean_dec(v_methods_2353_);
lean_dec_ref_known(v_stx_2309_, 3);
v_a_2381_ = lean_ctor_get(v___x_2361_, 0);
v_a_2382_ = lean_ctor_get(v___x_2361_, 1);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2361_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_inc(v_a_2381_);
lean_dec(v___x_2361_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2381_);
lean_ctor_set(v_reuseFailAlloc_2388_, 1, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
v___jp_2317_:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; size_t v_sz_2328_; size_t v___x_2329_; uint8_t v___x_2330_; lean_object* v___x_2331_; 
v___x_2325_ = lean_unsigned_to_nat(1u);
v___x_2326_ = lean_nat_add(v_currRecDepth_2321_, v___x_2325_);
lean_dec(v_currRecDepth_2321_);
v___x_2327_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2327_, 0, v_methods_2318_);
lean_ctor_set(v___x_2327_, 1, v_quotContext_2319_);
lean_ctor_set(v___x_2327_, 2, v_currMacroScope_2320_);
lean_ctor_set(v___x_2327_, 3, v___x_2326_);
lean_ctor_set(v___x_2327_, 4, v_maxRecDepth_2322_);
lean_ctor_set(v___x_2327_, 5, v_ref_2323_);
v_sz_2328_ = lean_array_size(v_args_2315_);
v___x_2329_ = ((size_t)0ULL);
v___x_2330_ = lean_unbox(v___x_2316_);
v___x_2331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(v___x_2330_, v_sz_2328_, v___x_2329_, v_args_2315_, v___x_2327_, v___y_2324_);
lean_dec_ref_known(v___x_2327_, 6);
if (lean_obj_tag(v___x_2331_) == 0)
{
lean_object* v_a_2332_; lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2341_; 
v_a_2332_ = lean_ctor_get(v___x_2331_, 0);
v_a_2333_ = lean_ctor_get(v___x_2331_, 1);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2331_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2335_ = v___x_2331_;
v_isShared_2336_ = v_isSharedCheck_2341_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_inc(v_a_2332_);
lean_dec(v___x_2331_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2341_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___x_2337_; lean_object* v___x_2339_; 
v___x_2337_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2337_, 0, v_info_2313_);
lean_ctor_set(v___x_2337_, 1, v_kind_2314_);
lean_ctor_set(v___x_2337_, 2, v_a_2332_);
if (v_isShared_2336_ == 0)
{
lean_ctor_set(v___x_2335_, 0, v___x_2337_);
v___x_2339_ = v___x_2335_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v___x_2337_);
lean_ctor_set(v_reuseFailAlloc_2340_, 1, v_a_2333_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
}
else
{
lean_object* v_a_2342_; lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
lean_dec(v_kind_2314_);
lean_dec(v_info_2313_);
v_a_2342_ = lean_ctor_get(v___x_2331_, 0);
v_a_2343_ = lean_ctor_get(v___x_2331_, 1);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2331_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2345_ = v___x_2331_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_inc(v_a_2342_);
lean_dec(v___x_2331_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2342_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
}
else
{
lean_object* v___x_2390_; 
lean_dec_ref(v_a_2311_);
lean_dec_ref(v_p_2310_);
v___x_2390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2390_, 0, v_stx_2309_);
lean_ctor_set(v___x_2390_, 1, v_a_2312_);
return v___x_2390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(uint8_t v___x_2391_, size_t v_sz_2392_, size_t v_i_2393_, lean_object* v_bs_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
uint8_t v___x_2397_; 
v___x_2397_ = lean_usize_dec_lt(v_i_2393_, v_sz_2392_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; 
v___x_2398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2398_, 0, v_bs_2394_);
lean_ctor_set(v___x_2398_, 1, v___y_2396_);
return v___x_2398_;
}
else
{
lean_object* v___x_2399_; lean_object* v___f_2400_; lean_object* v_v_2401_; lean_object* v___x_2402_; 
v___x_2399_ = lean_box(v___x_2391_);
v___f_2400_ = lean_alloc_closure((void*)(l_Lean_expandMacros___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2400_, 0, v___x_2399_);
v_v_2401_ = lean_array_uget_borrowed(v_bs_2394_, v_i_2393_);
lean_inc_ref(v___y_2395_);
lean_inc(v_v_2401_);
v___x_2402_ = l_Lean_expandMacros(v_v_2401_, v___f_2400_, v___y_2395_, v___y_2396_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; lean_object* v_a_2404_; lean_object* v___x_2405_; lean_object* v_bs_x27_2406_; size_t v___x_2407_; size_t v___x_2408_; lean_object* v___x_2409_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2403_);
v_a_2404_ = lean_ctor_get(v___x_2402_, 1);
lean_inc(v_a_2404_);
lean_dec_ref_known(v___x_2402_, 2);
v___x_2405_ = lean_unsigned_to_nat(0u);
v_bs_x27_2406_ = lean_array_uset(v_bs_2394_, v_i_2393_, v___x_2405_);
v___x_2407_ = ((size_t)1ULL);
v___x_2408_ = lean_usize_add(v_i_2393_, v___x_2407_);
v___x_2409_ = lean_array_uset(v_bs_x27_2406_, v_i_2393_, v_a_2403_);
v_i_2393_ = v___x_2408_;
v_bs_2394_ = v___x_2409_;
v___y_2396_ = v_a_2404_;
goto _start;
}
else
{
lean_object* v_a_2411_; lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
lean_dec_ref(v_bs_2394_);
v_a_2411_ = lean_ctor_get(v___x_2402_, 0);
v_a_2412_ = lean_ctor_get(v___x_2402_, 1);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2414_ = v___x_2402_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_inc(v_a_2411_);
lean_dec(v___x_2402_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2411_);
lean_ctor_set(v_reuseFailAlloc_2418_, 1, v_a_2412_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0___boxed(lean_object* v___x_2420_, lean_object* v_sz_2421_, lean_object* v_i_2422_, lean_object* v_bs_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
uint8_t v___x_2078__boxed_2426_; size_t v_sz_boxed_2427_; size_t v_i_boxed_2428_; lean_object* v_res_2429_; 
v___x_2078__boxed_2426_ = lean_unbox(v___x_2420_);
v_sz_boxed_2427_ = lean_unbox_usize(v_sz_2421_);
lean_dec(v_sz_2421_);
v_i_boxed_2428_ = lean_unbox_usize(v_i_2422_);
lean_dec(v_i_2422_);
v_res_2429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(v___x_2078__boxed_2426_, v_sz_boxed_2427_, v_i_boxed_2428_, v_bs_2423_, v___y_2424_, v___y_2425_);
lean_dec_ref(v___y_2424_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom(lean_object* v_src_2430_, lean_object* v_val_2431_, uint8_t v_canonical_2432_){
_start:
{
lean_object* v___x_2433_; uint8_t v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2433_ = l_Lean_SourceInfo_fromRef(v_src_2430_, v_canonical_2432_);
v___x_2434_ = 1;
lean_inc(v_val_2431_);
v___x_2435_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_val_2431_, v___x_2434_);
v___x_2436_ = lean_unsigned_to_nat(0u);
v___x_2437_ = lean_string_utf8_byte_size(v___x_2435_);
v___x_2438_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2435_);
lean_ctor_set(v___x_2438_, 1, v___x_2436_);
lean_ctor_set(v___x_2438_, 2, v___x_2437_);
v___x_2439_ = lean_box(0);
v___x_2440_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2433_);
lean_ctor_set(v___x_2440_, 1, v___x_2438_);
lean_ctor_set(v___x_2440_, 2, v_val_2431_);
lean_ctor_set(v___x_2440_, 3, v___x_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom___boxed(lean_object* v_src_2441_, lean_object* v_val_2442_, lean_object* v_canonical_2443_){
_start:
{
uint8_t v_canonical_boxed_2444_; lean_object* v_res_2445_; 
v_canonical_boxed_2444_ = lean_unbox(v_canonical_2443_);
v_res_2445_ = l_Lean_mkIdentFrom(v_src_2441_, v_val_2442_, v_canonical_boxed_2444_);
lean_dec(v_src_2441_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocCommentFrom(lean_object* v_src_2461_, lean_object* v_text_2462_, uint8_t v_canonical_2463_){
_start:
{
lean_object* v_info_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v_body_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v_info_2464_ = l_Lean_SourceInfo_fromRef(v_src_2461_, v_canonical_2463_);
v___x_2465_ = lean_box(2);
v___x_2466_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__2));
lean_inc_n(v_info_2464_, 2);
v___x_2467_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2467_, 0, v_info_2464_);
lean_ctor_set(v___x_2467_, 1, v_text_2462_);
v___x_2468_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__3));
v___x_2469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2469_, 0, v_info_2464_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
v___x_2470_ = lean_unsigned_to_nat(2u);
v___x_2471_ = lean_mk_empty_array_with_capacity(v___x_2470_);
lean_inc_ref(v___x_2471_);
v___x_2472_ = lean_array_push(v___x_2471_, v___x_2467_);
v___x_2473_ = lean_array_push(v___x_2472_, v___x_2469_);
v_body_2474_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_body_2474_, 0, v___x_2465_);
lean_ctor_set(v_body_2474_, 1, v___x_2466_);
lean_ctor_set(v_body_2474_, 2, v___x_2473_);
v___x_2475_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__5));
v___x_2476_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__6));
v___x_2477_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2477_, 0, v_info_2464_);
lean_ctor_set(v___x_2477_, 1, v___x_2476_);
v___x_2478_ = lean_array_push(v___x_2471_, v___x_2477_);
v___x_2479_ = lean_array_push(v___x_2478_, v_body_2474_);
v___x_2480_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2465_);
lean_ctor_set(v___x_2480_, 1, v___x_2475_);
lean_ctor_set(v___x_2480_, 2, v___x_2479_);
return v___x_2480_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocCommentFrom___boxed(lean_object* v_src_2481_, lean_object* v_text_2482_, lean_object* v_canonical_2483_){
_start:
{
uint8_t v_canonical_boxed_2484_; lean_object* v_res_2485_; 
v_canonical_boxed_2484_ = lean_unbox(v_canonical_2483_);
v_res_2485_ = l_Lean_mkMarkdownDocCommentFrom(v_src_2481_, v_text_2482_, v_canonical_boxed_2484_);
lean_dec(v_src_2481_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocComment(lean_object* v_text_2486_){
_start:
{
lean_object* v___x_2487_; uint8_t v___x_2488_; lean_object* v___x_2489_; 
v___x_2487_ = lean_box(0);
v___x_2488_ = 0;
v___x_2489_ = l_Lean_mkMarkdownDocCommentFrom(v___x_2487_, v_text_2486_, v___x_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0(lean_object* v_val_2490_, uint8_t v_canonical_2491_, lean_object* v_toPure_2492_, lean_object* v_____do__lift_2493_){
_start:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2494_ = l_Lean_mkIdentFrom(v_____do__lift_2493_, v_val_2490_, v_canonical_2491_);
v___x_2495_ = lean_apply_2(v_toPure_2492_, lean_box(0), v___x_2494_);
return v___x_2495_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0___boxed(lean_object* v_val_2496_, lean_object* v_canonical_2497_, lean_object* v_toPure_2498_, lean_object* v_____do__lift_2499_){
_start:
{
uint8_t v_canonical_boxed_2500_; lean_object* v_res_2501_; 
v_canonical_boxed_2500_ = lean_unbox(v_canonical_2497_);
v_res_2501_ = l_Lean_mkIdentFromRef___redArg___lam__0(v_val_2496_, v_canonical_boxed_2500_, v_toPure_2498_, v_____do__lift_2499_);
lean_dec(v_____do__lift_2499_);
return v_res_2501_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg(lean_object* v_inst_2502_, lean_object* v_inst_2503_, lean_object* v_val_2504_, uint8_t v_canonical_2505_){
_start:
{
lean_object* v_toApplicative_2506_; lean_object* v_toBind_2507_; lean_object* v_getRef_2508_; lean_object* v_toPure_2509_; lean_object* v___x_2510_; lean_object* v___f_2511_; lean_object* v___x_2512_; 
v_toApplicative_2506_ = lean_ctor_get(v_inst_2502_, 0);
lean_inc_ref(v_toApplicative_2506_);
v_toBind_2507_ = lean_ctor_get(v_inst_2502_, 1);
lean_inc(v_toBind_2507_);
lean_dec_ref(v_inst_2502_);
v_getRef_2508_ = lean_ctor_get(v_inst_2503_, 0);
lean_inc(v_getRef_2508_);
lean_dec_ref(v_inst_2503_);
v_toPure_2509_ = lean_ctor_get(v_toApplicative_2506_, 1);
lean_inc(v_toPure_2509_);
lean_dec_ref(v_toApplicative_2506_);
v___x_2510_ = lean_box(v_canonical_2505_);
v___f_2511_ = lean_alloc_closure((void*)(l_Lean_mkIdentFromRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2511_, 0, v_val_2504_);
lean_closure_set(v___f_2511_, 1, v___x_2510_);
lean_closure_set(v___f_2511_, 2, v_toPure_2509_);
v___x_2512_ = lean_apply_4(v_toBind_2507_, lean_box(0), lean_box(0), v_getRef_2508_, v___f_2511_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___boxed(lean_object* v_inst_2513_, lean_object* v_inst_2514_, lean_object* v_val_2515_, lean_object* v_canonical_2516_){
_start:
{
uint8_t v_canonical_boxed_2517_; lean_object* v_res_2518_; 
v_canonical_boxed_2517_ = lean_unbox(v_canonical_2516_);
v_res_2518_ = l_Lean_mkIdentFromRef___redArg(v_inst_2513_, v_inst_2514_, v_val_2515_, v_canonical_boxed_2517_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef(lean_object* v_m_2519_, lean_object* v_inst_2520_, lean_object* v_inst_2521_, lean_object* v_val_2522_, uint8_t v_canonical_2523_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_Lean_mkIdentFromRef___redArg(v_inst_2520_, v_inst_2521_, v_val_2522_, v_canonical_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___boxed(lean_object* v_m_2525_, lean_object* v_inst_2526_, lean_object* v_inst_2527_, lean_object* v_val_2528_, lean_object* v_canonical_2529_){
_start:
{
uint8_t v_canonical_boxed_2530_; lean_object* v_res_2531_; 
v_canonical_boxed_2530_ = lean_unbox(v_canonical_2529_);
v_res_2531_ = l_Lean_mkIdentFromRef(v_m_2525_, v_inst_2526_, v_inst_2527_, v_val_2528_, v_canonical_boxed_2530_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom(lean_object* v_src_2535_, lean_object* v_c_2536_, uint8_t v_canonical_2537_){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v_id_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2538_ = ((lean_object*)(l_Lean_mkCIdentFrom___closed__1));
v___x_2539_ = lean_unsigned_to_nat(0u);
lean_inc(v_c_2536_);
v_id_2540_ = l_Lean_addMacroScope(v___x_2538_, v_c_2536_, v___x_2539_);
v___x_2541_ = l_Lean_SourceInfo_fromRef(v_src_2535_, v_canonical_2537_);
v___x_2542_ = 1;
lean_inc(v_id_2540_);
v___x_2543_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_id_2540_, v___x_2542_);
v___x_2544_ = lean_string_utf8_byte_size(v___x_2543_);
v___x_2545_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2543_);
lean_ctor_set(v___x_2545_, 1, v___x_2539_);
lean_ctor_set(v___x_2545_, 2, v___x_2544_);
v___x_2546_ = lean_box(0);
v___x_2547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2547_, 0, v_c_2536_);
lean_ctor_set(v___x_2547_, 1, v___x_2546_);
v___x_2548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2547_);
lean_ctor_set(v___x_2548_, 1, v___x_2546_);
v___x_2549_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2541_);
lean_ctor_set(v___x_2549_, 1, v___x_2545_);
lean_ctor_set(v___x_2549_, 2, v_id_2540_);
lean_ctor_set(v___x_2549_, 3, v___x_2548_);
return v___x_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom___boxed(lean_object* v_src_2550_, lean_object* v_c_2551_, lean_object* v_canonical_2552_){
_start:
{
uint8_t v_canonical_boxed_2553_; lean_object* v_res_2554_; 
v_canonical_boxed_2553_ = lean_unbox(v_canonical_2552_);
v_res_2554_ = l_Lean_mkCIdentFrom(v_src_2550_, v_c_2551_, v_canonical_boxed_2553_);
lean_dec(v_src_2550_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0(lean_object* v_c_2555_, uint8_t v_canonical_2556_, lean_object* v_toPure_2557_, lean_object* v_____do__lift_2558_){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2559_ = l_Lean_mkCIdentFrom(v_____do__lift_2558_, v_c_2555_, v_canonical_2556_);
v___x_2560_ = lean_apply_2(v_toPure_2557_, lean_box(0), v___x_2559_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0___boxed(lean_object* v_c_2561_, lean_object* v_canonical_2562_, lean_object* v_toPure_2563_, lean_object* v_____do__lift_2564_){
_start:
{
uint8_t v_canonical_boxed_2565_; lean_object* v_res_2566_; 
v_canonical_boxed_2565_ = lean_unbox(v_canonical_2562_);
v_res_2566_ = l_Lean_mkCIdentFromRef___redArg___lam__0(v_c_2561_, v_canonical_boxed_2565_, v_toPure_2563_, v_____do__lift_2564_);
lean_dec(v_____do__lift_2564_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg(lean_object* v_inst_2567_, lean_object* v_inst_2568_, lean_object* v_c_2569_, uint8_t v_canonical_2570_){
_start:
{
lean_object* v_toApplicative_2571_; lean_object* v_toBind_2572_; lean_object* v_getRef_2573_; lean_object* v_toPure_2574_; lean_object* v___x_2575_; lean_object* v___f_2576_; lean_object* v___x_2577_; 
v_toApplicative_2571_ = lean_ctor_get(v_inst_2567_, 0);
lean_inc_ref(v_toApplicative_2571_);
v_toBind_2572_ = lean_ctor_get(v_inst_2567_, 1);
lean_inc(v_toBind_2572_);
lean_dec_ref(v_inst_2567_);
v_getRef_2573_ = lean_ctor_get(v_inst_2568_, 0);
lean_inc(v_getRef_2573_);
lean_dec_ref(v_inst_2568_);
v_toPure_2574_ = lean_ctor_get(v_toApplicative_2571_, 1);
lean_inc(v_toPure_2574_);
lean_dec_ref(v_toApplicative_2571_);
v___x_2575_ = lean_box(v_canonical_2570_);
v___f_2576_ = lean_alloc_closure((void*)(l_Lean_mkCIdentFromRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2576_, 0, v_c_2569_);
lean_closure_set(v___f_2576_, 1, v___x_2575_);
lean_closure_set(v___f_2576_, 2, v_toPure_2574_);
v___x_2577_ = lean_apply_4(v_toBind_2572_, lean_box(0), lean_box(0), v_getRef_2573_, v___f_2576_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___boxed(lean_object* v_inst_2578_, lean_object* v_inst_2579_, lean_object* v_c_2580_, lean_object* v_canonical_2581_){
_start:
{
uint8_t v_canonical_boxed_2582_; lean_object* v_res_2583_; 
v_canonical_boxed_2582_ = lean_unbox(v_canonical_2581_);
v_res_2583_ = l_Lean_mkCIdentFromRef___redArg(v_inst_2578_, v_inst_2579_, v_c_2580_, v_canonical_boxed_2582_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef(lean_object* v_m_2584_, lean_object* v_inst_2585_, lean_object* v_inst_2586_, lean_object* v_c_2587_, uint8_t v_canonical_2588_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Lean_mkCIdentFromRef___redArg(v_inst_2585_, v_inst_2586_, v_c_2587_, v_canonical_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___boxed(lean_object* v_m_2590_, lean_object* v_inst_2591_, lean_object* v_inst_2592_, lean_object* v_c_2593_, lean_object* v_canonical_2594_){
_start:
{
uint8_t v_canonical_boxed_2595_; lean_object* v_res_2596_; 
v_canonical_boxed_2595_ = lean_unbox(v_canonical_2594_);
v_res_2596_ = l_Lean_mkCIdentFromRef(v_m_2590_, v_inst_2591_, v_inst_2592_, v_c_2593_, v_canonical_boxed_2595_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdent(lean_object* v_c_2597_){
_start:
{
lean_object* v___x_2598_; uint8_t v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = lean_box(0);
v___x_2599_ = 0;
v___x_2600_ = l_Lean_mkCIdentFrom(v___x_2598_, v_c_2597_, v___x_2599_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdent(lean_object* v_val_2601_){
_start:
{
lean_object* v___x_2602_; uint8_t v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v___x_2602_ = lean_box(2);
v___x_2603_ = 1;
lean_inc(v_val_2601_);
v___x_2604_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_val_2601_, v___x_2603_);
v___x_2605_ = lean_unsigned_to_nat(0u);
v___x_2606_ = lean_string_utf8_byte_size(v___x_2604_);
v___x_2607_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2604_);
lean_ctor_set(v___x_2607_, 1, v___x_2605_);
lean_ctor_set(v___x_2607_, 2, v___x_2606_);
v___x_2608_ = lean_box(0);
v___x_2609_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2602_);
lean_ctor_set(v___x_2609_, 1, v___x_2607_);
lean_ctor_set(v___x_2609_, 2, v_val_2601_);
lean_ctor_set(v___x_2609_, 3, v___x_2608_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkGroupNode(lean_object* v_args_2613_){
_start:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2614_ = ((lean_object*)(l_Lean_mkGroupNode___closed__1));
v___x_2615_ = lean_box(2);
v___x_2616_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2615_);
lean_ctor_set(v___x_2616_, 1, v___x_2614_);
lean_ctor_set(v___x_2616_, 2, v_args_2613_);
return v___x_2616_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(lean_object* v_sep_2617_, lean_object* v_as_2618_, size_t v_sz_2619_, size_t v_i_2620_, lean_object* v_b_2621_){
_start:
{
uint8_t v___x_2622_; 
v___x_2622_ = lean_usize_dec_lt(v_i_2620_, v_sz_2619_);
if (v___x_2622_ == 0)
{
lean_dec(v_sep_2617_);
return v_b_2621_;
}
else
{
lean_object* v_fst_2623_; lean_object* v_snd_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2644_; 
v_fst_2623_ = lean_ctor_get(v_b_2621_, 0);
v_snd_2624_ = lean_ctor_get(v_b_2621_, 1);
v_isSharedCheck_2644_ = !lean_is_exclusive(v_b_2621_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2626_ = v_b_2621_;
v_isShared_2627_ = v_isSharedCheck_2644_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_snd_2624_);
lean_inc(v_fst_2623_);
lean_dec(v_b_2621_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2644_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v_r_2629_; lean_object* v_i_2638_; lean_object* v_a_2639_; uint8_t v___x_2640_; 
v_i_2638_ = lean_unsigned_to_nat(0u);
v_a_2639_ = lean_array_uget_borrowed(v_as_2618_, v_i_2620_);
v___x_2640_ = lean_nat_dec_lt(v_i_2638_, v_fst_2623_);
if (v___x_2640_ == 0)
{
lean_object* v___x_2641_; 
lean_inc(v_a_2639_);
v___x_2641_ = lean_array_push(v_snd_2624_, v_a_2639_);
v_r_2629_ = v___x_2641_;
goto v___jp_2628_;
}
else
{
lean_object* v___x_2642_; lean_object* v___x_2643_; 
lean_inc(v_sep_2617_);
v___x_2642_ = lean_array_push(v_snd_2624_, v_sep_2617_);
lean_inc(v_a_2639_);
v___x_2643_ = lean_array_push(v___x_2642_, v_a_2639_);
v_r_2629_ = v___x_2643_;
goto v___jp_2628_;
}
v___jp_2628_:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2630_ = lean_unsigned_to_nat(1u);
v___x_2631_ = lean_nat_add(v_fst_2623_, v___x_2630_);
lean_dec(v_fst_2623_);
if (v_isShared_2627_ == 0)
{
lean_ctor_set(v___x_2626_, 1, v_r_2629_);
lean_ctor_set(v___x_2626_, 0, v___x_2631_);
v___x_2633_ = v___x_2626_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v___x_2631_);
lean_ctor_set(v_reuseFailAlloc_2637_, 1, v_r_2629_);
v___x_2633_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
size_t v___x_2634_; size_t v___x_2635_; 
v___x_2634_ = ((size_t)1ULL);
v___x_2635_ = lean_usize_add(v_i_2620_, v___x_2634_);
v_i_2620_ = v___x_2635_;
v_b_2621_ = v___x_2633_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0___boxed(lean_object* v_sep_2645_, lean_object* v_as_2646_, lean_object* v_sz_2647_, lean_object* v_i_2648_, lean_object* v_b_2649_){
_start:
{
size_t v_sz_boxed_2650_; size_t v_i_boxed_2651_; lean_object* v_res_2652_; 
v_sz_boxed_2650_ = lean_unbox_usize(v_sz_2647_);
lean_dec(v_sz_2647_);
v_i_boxed_2651_ = lean_unbox_usize(v_i_2648_);
lean_dec(v_i_2648_);
v_res_2652_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(v_sep_2645_, v_as_2646_, v_sz_boxed_2650_, v_i_boxed_2651_, v_b_2649_);
lean_dec_ref(v_as_2646_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkSepArray(lean_object* v_as_2658_, lean_object* v_sep_2659_){
_start:
{
lean_object* v___x_2660_; size_t v_sz_2661_; size_t v___x_2662_; lean_object* v___x_2663_; lean_object* v_snd_2664_; 
v___x_2660_ = ((lean_object*)(l_Lean_mkSepArray___closed__1));
v_sz_2661_ = lean_array_size(v_as_2658_);
v___x_2662_ = ((size_t)0ULL);
v___x_2663_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(v_sep_2659_, v_as_2658_, v_sz_2661_, v___x_2662_, v___x_2660_);
v_snd_2664_ = lean_ctor_get(v___x_2663_, 1);
lean_inc(v_snd_2664_);
lean_dec_ref(v___x_2663_);
return v_snd_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkSepArray___boxed(lean_object* v_as_2665_, lean_object* v_sep_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l_Lean_mkSepArray(v_as_2665_, v_sep_2666_);
lean_dec_ref(v_as_2665_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkOptionalNode(lean_object* v_arg_2675_){
_start:
{
if (lean_obj_tag(v_arg_2675_) == 0)
{
lean_object* v___x_2676_; 
v___x_2676_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__2));
return v___x_2676_;
}
else
{
lean_object* v_val_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
v_val_2677_ = lean_ctor_get(v_arg_2675_, 0);
lean_inc(v_val_2677_);
lean_dec_ref_known(v_arg_2675_, 1);
v___x_2678_ = lean_unsigned_to_nat(1u);
v___x_2679_ = lean_mk_empty_array_with_capacity(v___x_2678_);
v___x_2680_ = lean_array_push(v___x_2679_, v_val_2677_);
v___x_2681_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_2682_ = lean_box(2);
v___x_2683_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2682_);
lean_ctor_set(v___x_2683_, 1, v___x_2681_);
lean_ctor_set(v___x_2683_, 2, v___x_2680_);
return v___x_2683_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkHole(lean_object* v_ref_2690_, uint8_t v_canonical_2691_){
_start:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2692_ = ((lean_object*)(l_Lean_mkHole___closed__1));
v___x_2693_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0));
v___x_2694_ = l_Lean_mkAtomFrom(v_ref_2690_, v___x_2693_, v_canonical_2691_);
v___x_2695_ = lean_unsigned_to_nat(1u);
v___x_2696_ = lean_mk_empty_array_with_capacity(v___x_2695_);
v___x_2697_ = lean_array_push(v___x_2696_, v___x_2694_);
v___x_2698_ = lean_box(2);
v___x_2699_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2698_);
lean_ctor_set(v___x_2699_, 1, v___x_2692_);
lean_ctor_set(v___x_2699_, 2, v___x_2697_);
return v___x_2699_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHole___boxed(lean_object* v_ref_2700_, lean_object* v_canonical_2701_){
_start:
{
uint8_t v_canonical_boxed_2702_; lean_object* v_res_2703_; 
v_canonical_boxed_2702_ = lean_unbox(v_canonical_2701_);
v_res_2703_ = l_Lean_mkHole(v_ref_2700_, v_canonical_boxed_2702_);
lean_dec(v_ref_2700_);
return v_res_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep(lean_object* v_a_2704_, lean_object* v_sep_2705_){
_start:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2706_ = l_Lean_mkSepArray(v_a_2704_, v_sep_2705_);
v___x_2707_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_2708_ = lean_box(2);
v___x_2709_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2708_);
lean_ctor_set(v___x_2709_, 1, v___x_2707_);
lean_ctor_set(v___x_2709_, 2, v___x_2706_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep___boxed(lean_object* v_a_2710_, lean_object* v_sep_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l_Lean_Syntax_mkSep(v_a_2710_, v_sep_2711_);
lean_dec_ref(v_a_2710_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object* v_sep_2719_, lean_object* v_elems_2720_){
_start:
{
uint8_t v___x_2721_; 
lean_inc_ref(v_sep_2719_);
v___x_2721_ = lean_string_isempty(v_sep_2719_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2722_ = l_Lean_mkAtom(v_sep_2719_);
v___x_2723_ = l_Lean_mkSepArray(v_elems_2720_, v___x_2722_);
return v___x_2723_;
}
else
{
lean_object* v___x_2724_; lean_object* v___x_2725_; 
lean_dec_ref(v_sep_2719_);
v___x_2724_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__1));
v___x_2725_ = l_Lean_mkSepArray(v_elems_2720_, v___x_2724_);
return v___x_2725_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems___boxed(lean_object* v_sep_2726_, lean_object* v_elems_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lean_Syntax_SepArray_ofElems(v_sep_2726_, v_elems_2727_);
lean_dec_ref(v_elems_2727_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0(lean_object* v_elems_2729_, lean_object* v_toPure_2730_, lean_object* v_sep_2731_, lean_object* v_ref_2732_){
_start:
{
lean_object* v___y_2734_; uint8_t v___x_2737_; 
lean_inc_ref(v_sep_2731_);
v___x_2737_ = lean_string_isempty(v_sep_2731_);
if (v___x_2737_ == 0)
{
lean_object* v___x_2738_; 
v___x_2738_ = l_Lean_mkAtomFrom(v_ref_2732_, v_sep_2731_, v___x_2737_);
v___y_2734_ = v___x_2738_;
goto v___jp_2733_;
}
else
{
lean_object* v___x_2739_; 
lean_dec_ref(v_sep_2731_);
v___x_2739_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__1));
v___y_2734_ = v___x_2739_;
goto v___jp_2733_;
}
v___jp_2733_:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; 
v___x_2735_ = l_Lean_mkSepArray(v_elems_2729_, v___y_2734_);
v___x_2736_ = lean_apply_2(v_toPure_2730_, lean_box(0), v___x_2735_);
return v___x_2736_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0___boxed(lean_object* v_elems_2740_, lean_object* v_toPure_2741_, lean_object* v_sep_2742_, lean_object* v_ref_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0(v_elems_2740_, v_toPure_2741_, v_sep_2742_, v_ref_2743_);
lean_dec(v_ref_2743_);
lean_dec_ref(v_elems_2740_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg(lean_object* v_inst_2745_, lean_object* v_inst_2746_, lean_object* v_sep_2747_, lean_object* v_elems_2748_){
_start:
{
lean_object* v_toApplicative_2749_; lean_object* v_toBind_2750_; lean_object* v_getRef_2751_; lean_object* v_toPure_2752_; lean_object* v___f_2753_; lean_object* v___x_2754_; 
v_toApplicative_2749_ = lean_ctor_get(v_inst_2745_, 0);
lean_inc_ref(v_toApplicative_2749_);
v_toBind_2750_ = lean_ctor_get(v_inst_2745_, 1);
lean_inc(v_toBind_2750_);
lean_dec_ref(v_inst_2745_);
v_getRef_2751_ = lean_ctor_get(v_inst_2746_, 0);
lean_inc(v_getRef_2751_);
lean_dec_ref(v_inst_2746_);
v_toPure_2752_ = lean_ctor_get(v_toApplicative_2749_, 1);
lean_inc(v_toPure_2752_);
lean_dec_ref(v_toApplicative_2749_);
v___f_2753_ = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2753_, 0, v_elems_2748_);
lean_closure_set(v___f_2753_, 1, v_toPure_2752_);
lean_closure_set(v___f_2753_, 2, v_sep_2747_);
v___x_2754_ = lean_apply_4(v_toBind_2750_, lean_box(0), lean_box(0), v_getRef_2751_, v___f_2753_);
return v___x_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef(lean_object* v_m_2755_, lean_object* v_inst_2756_, lean_object* v_inst_2757_, lean_object* v_sep_2758_, lean_object* v_elems_2759_){
_start:
{
lean_object* v___x_2760_; 
v___x_2760_ = l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg(v_inst_2756_, v_inst_2757_, v_sep_2758_, v_elems_2759_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object* v_sep_2761_, lean_object* v_elems_2762_){
_start:
{
lean_object* v___x_2763_; 
v___x_2763_ = l_Lean_Syntax_SepArray_ofElems(v_sep_2761_, v_elems_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg___boxed(lean_object* v_sep_2764_, lean_object* v_elems_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v_sep_2764_, v_elems_2765_);
lean_dec_ref(v_elems_2765_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems(lean_object* v_k_2767_, lean_object* v_sep_2768_, lean_object* v_elems_2769_){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = l_Lean_Syntax_SepArray_ofElems(v_sep_2768_, v_elems_2769_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___boxed(lean_object* v_k_2771_, lean_object* v_sep_2772_, lean_object* v_elems_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Lean_Syntax_TSepArray_ofElems(v_k_2771_, v_sep_2772_, v_elems_2773_);
lean_dec_ref(v_elems_2773_);
lean_dec(v_k_2771_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayTSepArray(lean_object* v_k_2775_, lean_object* v_sep_2776_){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = lean_alloc_closure((void*)(l_Lean_Syntax_TSepArray_ofElems___boxed), 3, 2);
lean_closure_set(v___x_2777_, 0, v_k_2775_);
lean_closure_set(v___x_2777_, 1, v_sep_2776_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkApp(lean_object* v_fn_2784_, lean_object* v_x_2785_){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; uint8_t v___x_2788_; 
v___x_2786_ = lean_array_get_size(v_x_2785_);
v___x_2787_ = lean_unsigned_to_nat(0u);
v___x_2788_ = lean_nat_dec_eq(v___x_2786_, v___x_2787_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; 
v___x_2789_ = ((lean_object*)(l_Lean_Syntax_mkApp___closed__1));
v___x_2790_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_2791_ = lean_box(2);
v___x_2792_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2792_, 0, v___x_2791_);
lean_ctor_set(v___x_2792_, 1, v___x_2790_);
lean_ctor_set(v___x_2792_, 2, v_x_2785_);
v___x_2793_ = lean_unsigned_to_nat(2u);
v___x_2794_ = lean_mk_empty_array_with_capacity(v___x_2793_);
v___x_2795_ = lean_array_push(v___x_2794_, v_fn_2784_);
v___x_2796_ = lean_array_push(v___x_2795_, v___x_2792_);
v___x_2797_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2791_);
lean_ctor_set(v___x_2797_, 1, v___x_2789_);
lean_ctor_set(v___x_2797_, 2, v___x_2796_);
return v___x_2797_;
}
else
{
lean_dec_ref(v_x_2785_);
return v_fn_2784_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCApp(lean_object* v_fn_2798_, lean_object* v_args_2799_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = l_Lean_mkCIdent(v_fn_2798_);
v___x_2801_ = l_Lean_Syntax_mkApp(v___x_2800_, v_args_2799_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkLit(lean_object* v_kind_2802_, lean_object* v_val_2803_, lean_object* v_info_2804_){
_start:
{
lean_object* v_atom_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; 
v_atom_2805_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_2805_, 0, v_info_2804_);
lean_ctor_set(v_atom_2805_, 1, v_val_2803_);
v___x_2806_ = lean_unsigned_to_nat(1u);
v___x_2807_ = lean_mk_empty_array_with_capacity(v___x_2806_);
v___x_2808_ = lean_array_push(v___x_2807_, v_atom_2805_);
v___x_2809_ = lean_box(2);
v___x_2810_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2809_);
lean_ctor_set(v___x_2810_, 1, v_kind_2802_);
lean_ctor_set(v___x_2810_, 2, v___x_2808_);
return v___x_2810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit(uint32_t v_val_2814_, lean_object* v_info_2815_){
_start:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2816_ = ((lean_object*)(l_Lean_Syntax_mkCharLit___closed__1));
v___x_2817_ = l_Char_quote(v_val_2814_);
v___x_2818_ = l_Lean_Syntax_mkLit(v___x_2816_, v___x_2817_, v_info_2815_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit___boxed(lean_object* v_val_2819_, lean_object* v_info_2820_){
_start:
{
uint32_t v_val_boxed_2821_; lean_object* v_res_2822_; 
v_val_boxed_2821_ = lean_unbox_uint32(v_val_2819_);
lean_dec(v_val_2819_);
v_res_2822_ = l_Lean_Syntax_mkCharLit(v_val_boxed_2821_, v_info_2820_);
return v_res_2822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkStrLit(lean_object* v_val_2826_, lean_object* v_info_2827_){
_start:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; 
v___x_2828_ = ((lean_object*)(l_Lean_Syntax_mkStrLit___closed__1));
v___x_2829_ = l_String_quote(v_val_2826_);
v___x_2830_ = l_Lean_Syntax_mkLit(v___x_2828_, v___x_2829_, v_info_2827_);
return v___x_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNumLit(lean_object* v_val_2834_, lean_object* v_info_2835_){
_start:
{
lean_object* v___x_2836_; lean_object* v___x_2837_; 
v___x_2836_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
v___x_2837_ = l_Lean_Syntax_mkLit(v___x_2836_, v_val_2834_, v_info_2835_);
return v___x_2837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNatLit(lean_object* v_val_2838_, lean_object* v_info_2839_){
_start:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2840_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
v___x_2841_ = l_Nat_reprFast(v_val_2838_);
v___x_2842_ = l_Lean_Syntax_mkLit(v___x_2840_, v___x_2841_, v_info_2839_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkScientificLit(lean_object* v_val_2846_, lean_object* v_info_2847_){
_start:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; 
v___x_2848_ = ((lean_object*)(l_Lean_Syntax_mkScientificLit___closed__1));
v___x_2849_ = l_Lean_Syntax_mkLit(v___x_2848_, v_val_2846_, v_info_2847_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNameLit(lean_object* v_val_2853_, lean_object* v_info_2854_){
_start:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2855_ = ((lean_object*)(l_Lean_Syntax_mkNameLit___closed__1));
v___x_2856_ = l_Lean_Syntax_mkLit(v___x_2855_, v_val_2853_, v_info_2854_);
return v___x_2856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(lean_object* v_s_2857_, lean_object* v_i_2858_, lean_object* v_val_2859_){
_start:
{
uint8_t v___x_2860_; 
v___x_2860_ = lean_string_utf8_at_end(v_s_2857_, v_i_2858_);
if (v___x_2860_ == 0)
{
uint32_t v_c_2861_; uint32_t v___x_2862_; uint8_t v___x_2863_; 
v_c_2861_ = lean_string_utf8_get(v_s_2857_, v_i_2858_);
v___x_2862_ = 48;
v___x_2863_ = lean_uint32_dec_eq(v_c_2861_, v___x_2862_);
if (v___x_2863_ == 0)
{
uint32_t v___x_2864_; uint8_t v___x_2865_; 
v___x_2864_ = 49;
v___x_2865_ = lean_uint32_dec_eq(v_c_2861_, v___x_2864_);
if (v___x_2865_ == 0)
{
uint32_t v___x_2866_; uint8_t v___x_2867_; 
v___x_2866_ = 95;
v___x_2867_ = lean_uint32_dec_eq(v_c_2861_, v___x_2866_);
if (v___x_2867_ == 0)
{
lean_object* v___x_2868_; 
lean_dec(v_val_2859_);
lean_dec(v_i_2858_);
v___x_2868_ = lean_box(0);
return v___x_2868_;
}
else
{
lean_object* v___x_2869_; 
v___x_2869_ = lean_string_utf8_next(v_s_2857_, v_i_2858_);
lean_dec(v_i_2858_);
v_i_2858_ = v___x_2869_;
goto _start;
}
}
else
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2871_ = lean_string_utf8_next(v_s_2857_, v_i_2858_);
lean_dec(v_i_2858_);
v___x_2872_ = lean_unsigned_to_nat(2u);
v___x_2873_ = lean_nat_mul(v___x_2872_, v_val_2859_);
lean_dec(v_val_2859_);
v___x_2874_ = lean_unsigned_to_nat(1u);
v___x_2875_ = lean_nat_add(v___x_2873_, v___x_2874_);
lean_dec(v___x_2873_);
v_i_2858_ = v___x_2871_;
v_val_2859_ = v___x_2875_;
goto _start;
}
}
else
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2877_ = lean_string_utf8_next(v_s_2857_, v_i_2858_);
lean_dec(v_i_2858_);
v___x_2878_ = lean_unsigned_to_nat(2u);
v___x_2879_ = lean_nat_mul(v___x_2878_, v_val_2859_);
lean_dec(v_val_2859_);
v_i_2858_ = v___x_2877_;
v_val_2859_ = v___x_2879_;
goto _start;
}
}
else
{
lean_object* v___x_2881_; 
lean_dec(v_i_2858_);
v___x_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2881_, 0, v_val_2859_);
return v___x_2881_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux___boxed(lean_object* v_s_2882_, lean_object* v_i_2883_, lean_object* v_val_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(v_s_2882_, v_i_2883_, v_val_2884_);
lean_dec_ref(v_s_2882_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(lean_object* v_s_2886_, lean_object* v_i_2887_, lean_object* v_val_2888_){
_start:
{
uint8_t v___x_2889_; 
v___x_2889_ = lean_string_utf8_at_end(v_s_2886_, v_i_2887_);
if (v___x_2889_ == 0)
{
uint32_t v_c_2890_; uint32_t v___x_2897_; uint8_t v___x_2898_; 
v_c_2890_ = lean_string_utf8_get(v_s_2886_, v_i_2887_);
v___x_2897_ = 48;
v___x_2898_ = lean_uint32_dec_le(v___x_2897_, v_c_2890_);
if (v___x_2898_ == 0)
{
goto v___jp_2891_;
}
else
{
uint32_t v___x_2899_; uint8_t v___x_2900_; 
v___x_2899_ = 55;
v___x_2900_ = lean_uint32_dec_le(v_c_2890_, v___x_2899_);
if (v___x_2900_ == 0)
{
goto v___jp_2891_;
}
else
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2901_ = lean_string_utf8_next(v_s_2886_, v_i_2887_);
lean_dec(v_i_2887_);
v___x_2902_ = lean_unsigned_to_nat(8u);
v___x_2903_ = lean_nat_mul(v___x_2902_, v_val_2888_);
lean_dec(v_val_2888_);
v___x_2904_ = lean_uint32_to_nat(v_c_2890_);
v___x_2905_ = lean_nat_add(v___x_2903_, v___x_2904_);
lean_dec(v___x_2904_);
lean_dec(v___x_2903_);
v___x_2906_ = lean_unsigned_to_nat(48u);
v___x_2907_ = lean_nat_sub(v___x_2905_, v___x_2906_);
lean_dec(v___x_2905_);
v_i_2887_ = v___x_2901_;
v_val_2888_ = v___x_2907_;
goto _start;
}
}
v___jp_2891_:
{
uint32_t v___x_2892_; uint8_t v___x_2893_; 
v___x_2892_ = 95;
v___x_2893_ = lean_uint32_dec_eq(v_c_2890_, v___x_2892_);
if (v___x_2893_ == 0)
{
lean_object* v___x_2894_; 
lean_dec(v_val_2888_);
lean_dec(v_i_2887_);
v___x_2894_ = lean_box(0);
return v___x_2894_;
}
else
{
lean_object* v___x_2895_; 
v___x_2895_ = lean_string_utf8_next(v_s_2886_, v_i_2887_);
lean_dec(v_i_2887_);
v_i_2887_ = v___x_2895_;
goto _start;
}
}
}
else
{
lean_object* v___x_2909_; 
lean_dec(v_i_2887_);
v___x_2909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2909_, 0, v_val_2888_);
return v___x_2909_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux___boxed(lean_object* v_s_2910_, lean_object* v_i_2911_, lean_object* v_val_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(v_s_2910_, v_i_2911_, v_val_2912_);
lean_dec_ref(v_s_2910_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(lean_object* v_s_2914_, lean_object* v_i_2915_){
_start:
{
uint32_t v_c_2916_; lean_object* v_i_2917_; uint32_t v___x_2944_; uint8_t v___x_2945_; 
v_c_2916_ = lean_string_utf8_get(v_s_2914_, v_i_2915_);
v_i_2917_ = lean_string_utf8_next(v_s_2914_, v_i_2915_);
v___x_2944_ = 48;
v___x_2945_ = lean_uint32_dec_le(v___x_2944_, v_c_2916_);
if (v___x_2945_ == 0)
{
goto v___jp_2932_;
}
else
{
uint32_t v___x_2946_; uint8_t v___x_2947_; 
v___x_2946_ = 57;
v___x_2947_ = lean_uint32_dec_le(v_c_2916_, v___x_2946_);
if (v___x_2947_ == 0)
{
goto v___jp_2932_;
}
else
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2948_ = lean_uint32_to_nat(v_c_2916_);
v___x_2949_ = lean_unsigned_to_nat(48u);
v___x_2950_ = lean_nat_sub(v___x_2948_, v___x_2949_);
lean_dec(v___x_2948_);
v___x_2951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
lean_ctor_set(v___x_2951_, 1, v_i_2917_);
v___x_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
return v___x_2952_;
}
}
v___jp_2918_:
{
uint32_t v___x_2919_; uint8_t v___x_2920_; 
v___x_2919_ = 65;
v___x_2920_ = lean_uint32_dec_le(v___x_2919_, v_c_2916_);
if (v___x_2920_ == 0)
{
lean_object* v___x_2921_; 
lean_dec(v_i_2917_);
v___x_2921_ = lean_box(0);
return v___x_2921_;
}
else
{
uint32_t v___x_2922_; uint8_t v___x_2923_; 
v___x_2922_ = 70;
v___x_2923_ = lean_uint32_dec_le(v_c_2916_, v___x_2922_);
if (v___x_2923_ == 0)
{
lean_object* v___x_2924_; 
lean_dec(v_i_2917_);
v___x_2924_ = lean_box(0);
return v___x_2924_;
}
else
{
lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2925_ = lean_unsigned_to_nat(10u);
v___x_2926_ = lean_uint32_to_nat(v_c_2916_);
v___x_2927_ = lean_nat_add(v___x_2925_, v___x_2926_);
lean_dec(v___x_2926_);
v___x_2928_ = lean_unsigned_to_nat(65u);
v___x_2929_ = lean_nat_sub(v___x_2927_, v___x_2928_);
lean_dec(v___x_2927_);
v___x_2930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2930_, 0, v___x_2929_);
lean_ctor_set(v___x_2930_, 1, v_i_2917_);
v___x_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2930_);
return v___x_2931_;
}
}
}
v___jp_2932_:
{
uint32_t v___x_2933_; uint8_t v___x_2934_; 
v___x_2933_ = 97;
v___x_2934_ = lean_uint32_dec_le(v___x_2933_, v_c_2916_);
if (v___x_2934_ == 0)
{
goto v___jp_2918_;
}
else
{
uint32_t v___x_2935_; uint8_t v___x_2936_; 
v___x_2935_ = 102;
v___x_2936_ = lean_uint32_dec_le(v_c_2916_, v___x_2935_);
if (v___x_2936_ == 0)
{
goto v___jp_2918_;
}
else
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2937_ = lean_unsigned_to_nat(10u);
v___x_2938_ = lean_uint32_to_nat(v_c_2916_);
v___x_2939_ = lean_nat_add(v___x_2937_, v___x_2938_);
lean_dec(v___x_2938_);
v___x_2940_ = lean_unsigned_to_nat(97u);
v___x_2941_ = lean_nat_sub(v___x_2939_, v___x_2940_);
lean_dec(v___x_2939_);
v___x_2942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2941_);
lean_ctor_set(v___x_2942_, 1, v_i_2917_);
v___x_2943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
return v___x_2943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit___boxed(lean_object* v_s_2953_, lean_object* v_i_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_2953_, v_i_2954_);
lean_dec(v_i_2954_);
lean_dec_ref(v_s_2953_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(lean_object* v_s_2956_, lean_object* v_i_2957_, lean_object* v_val_2958_){
_start:
{
uint8_t v___x_2959_; 
v___x_2959_ = lean_string_utf8_at_end(v_s_2956_, v_i_2957_);
if (v___x_2959_ == 0)
{
lean_object* v___x_2960_; 
v___x_2960_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_2956_, v_i_2957_);
if (lean_obj_tag(v___x_2960_) == 0)
{
uint32_t v___x_2961_; uint32_t v___x_2962_; uint8_t v___x_2963_; 
v___x_2961_ = lean_string_utf8_get(v_s_2956_, v_i_2957_);
v___x_2962_ = 95;
v___x_2963_ = lean_uint32_dec_eq(v___x_2961_, v___x_2962_);
if (v___x_2963_ == 0)
{
lean_object* v___x_2964_; 
lean_dec(v_val_2958_);
lean_dec(v_i_2957_);
v___x_2964_ = lean_box(0);
return v___x_2964_;
}
else
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_string_utf8_next(v_s_2956_, v_i_2957_);
lean_dec(v_i_2957_);
v_i_2957_ = v___x_2965_;
goto _start;
}
}
else
{
lean_object* v_val_2967_; lean_object* v_fst_2968_; lean_object* v_snd_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
lean_dec(v_i_2957_);
v_val_2967_ = lean_ctor_get(v___x_2960_, 0);
lean_inc(v_val_2967_);
lean_dec_ref_known(v___x_2960_, 1);
v_fst_2968_ = lean_ctor_get(v_val_2967_, 0);
lean_inc(v_fst_2968_);
v_snd_2969_ = lean_ctor_get(v_val_2967_, 1);
lean_inc(v_snd_2969_);
lean_dec(v_val_2967_);
v___x_2970_ = lean_unsigned_to_nat(16u);
v___x_2971_ = lean_nat_mul(v___x_2970_, v_val_2958_);
lean_dec(v_val_2958_);
v___x_2972_ = lean_nat_add(v___x_2971_, v_fst_2968_);
lean_dec(v_fst_2968_);
lean_dec(v___x_2971_);
v_i_2957_ = v_snd_2969_;
v_val_2958_ = v___x_2972_;
goto _start;
}
}
else
{
lean_object* v___x_2974_; 
lean_dec(v_i_2957_);
v___x_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2974_, 0, v_val_2958_);
return v___x_2974_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux___boxed(lean_object* v_s_2975_, lean_object* v_i_2976_, lean_object* v_val_2977_){
_start:
{
lean_object* v_res_2978_; 
v_res_2978_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(v_s_2975_, v_i_2976_, v_val_2977_);
lean_dec_ref(v_s_2975_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(lean_object* v_s_2979_, lean_object* v_i_2980_, lean_object* v_val_2981_){
_start:
{
uint8_t v___x_2982_; 
v___x_2982_ = lean_string_utf8_at_end(v_s_2979_, v_i_2980_);
if (v___x_2982_ == 0)
{
uint32_t v_c_2983_; uint32_t v___x_2990_; uint8_t v___x_2991_; 
v_c_2983_ = lean_string_utf8_get(v_s_2979_, v_i_2980_);
v___x_2990_ = 48;
v___x_2991_ = lean_uint32_dec_le(v___x_2990_, v_c_2983_);
if (v___x_2991_ == 0)
{
goto v___jp_2984_;
}
else
{
uint32_t v___x_2992_; uint8_t v___x_2993_; 
v___x_2992_ = 57;
v___x_2993_ = lean_uint32_dec_le(v_c_2983_, v___x_2992_);
if (v___x_2993_ == 0)
{
goto v___jp_2984_;
}
else
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2994_ = lean_string_utf8_next(v_s_2979_, v_i_2980_);
lean_dec(v_i_2980_);
v___x_2995_ = lean_unsigned_to_nat(10u);
v___x_2996_ = lean_nat_mul(v___x_2995_, v_val_2981_);
lean_dec(v_val_2981_);
v___x_2997_ = lean_uint32_to_nat(v_c_2983_);
v___x_2998_ = lean_nat_add(v___x_2996_, v___x_2997_);
lean_dec(v___x_2997_);
lean_dec(v___x_2996_);
v___x_2999_ = lean_unsigned_to_nat(48u);
v___x_3000_ = lean_nat_sub(v___x_2998_, v___x_2999_);
lean_dec(v___x_2998_);
v_i_2980_ = v___x_2994_;
v_val_2981_ = v___x_3000_;
goto _start;
}
}
v___jp_2984_:
{
uint32_t v___x_2985_; uint8_t v___x_2986_; 
v___x_2985_ = 95;
v___x_2986_ = lean_uint32_dec_eq(v_c_2983_, v___x_2985_);
if (v___x_2986_ == 0)
{
lean_object* v___x_2987_; 
lean_dec(v_val_2981_);
lean_dec(v_i_2980_);
v___x_2987_ = lean_box(0);
return v___x_2987_;
}
else
{
lean_object* v___x_2988_; 
v___x_2988_ = lean_string_utf8_next(v_s_2979_, v_i_2980_);
lean_dec(v_i_2980_);
v_i_2980_ = v___x_2988_;
goto _start;
}
}
}
else
{
lean_object* v___x_3002_; 
lean_dec(v_i_2980_);
v___x_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3002_, 0, v_val_2981_);
return v___x_3002_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux___boxed(lean_object* v_s_3003_, lean_object* v_i_3004_, lean_object* v_val_3005_){
_start:
{
lean_object* v_res_3006_; 
v_res_3006_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(v_s_3003_, v_i_3004_, v_val_3005_);
lean_dec_ref(v_s_3003_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f(lean_object* v_s_3009_){
_start:
{
lean_object* v_len_3022_; lean_object* v___x_3023_; uint8_t v___x_3024_; 
v_len_3022_ = lean_string_length(v_s_3009_);
v___x_3023_ = lean_unsigned_to_nat(0u);
v___x_3024_ = lean_nat_dec_eq(v_len_3022_, v___x_3023_);
if (v___x_3024_ == 0)
{
uint32_t v_c_3025_; uint32_t v___x_3026_; uint8_t v___x_3027_; 
v_c_3025_ = lean_string_utf8_get(v_s_3009_, v___x_3023_);
v___x_3026_ = 48;
v___x_3027_ = lean_uint32_dec_eq(v_c_3025_, v___x_3026_);
if (v___x_3027_ == 0)
{
uint8_t v___x_3028_; 
lean_dec(v_len_3022_);
v___x_3028_ = lean_uint32_dec_le(v___x_3026_, v_c_3025_);
if (v___x_3028_ == 0)
{
lean_object* v___x_3029_; 
v___x_3029_ = lean_box(0);
return v___x_3029_;
}
else
{
uint32_t v___x_3030_; uint8_t v___x_3031_; 
v___x_3030_ = 57;
v___x_3031_ = lean_uint32_dec_le(v_c_3025_, v___x_3030_);
if (v___x_3031_ == 0)
{
lean_object* v___x_3032_; 
v___x_3032_ = lean_box(0);
return v___x_3032_;
}
else
{
lean_object* v___x_3033_; 
v___x_3033_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(v_s_3009_, v___x_3023_, v___x_3023_);
return v___x_3033_;
}
}
}
else
{
lean_object* v___x_3034_; uint8_t v___x_3035_; 
v___x_3034_ = lean_unsigned_to_nat(1u);
v___x_3035_ = lean_nat_dec_eq(v_len_3022_, v___x_3034_);
lean_dec(v_len_3022_);
if (v___x_3035_ == 0)
{
uint32_t v_c_3036_; uint32_t v___x_3037_; uint8_t v___x_3038_; 
v_c_3036_ = lean_string_utf8_get(v_s_3009_, v___x_3034_);
v___x_3037_ = 120;
v___x_3038_ = lean_uint32_dec_eq(v_c_3036_, v___x_3037_);
if (v___x_3038_ == 0)
{
uint32_t v___x_3039_; uint8_t v___x_3040_; 
v___x_3039_ = 88;
v___x_3040_ = lean_uint32_dec_eq(v_c_3036_, v___x_3039_);
if (v___x_3040_ == 0)
{
uint32_t v___x_3041_; uint8_t v___x_3042_; 
v___x_3041_ = 98;
v___x_3042_ = lean_uint32_dec_eq(v_c_3036_, v___x_3041_);
if (v___x_3042_ == 0)
{
uint32_t v___x_3043_; uint8_t v___x_3044_; 
v___x_3043_ = 66;
v___x_3044_ = lean_uint32_dec_eq(v_c_3036_, v___x_3043_);
if (v___x_3044_ == 0)
{
uint32_t v___x_3045_; uint8_t v___x_3046_; 
v___x_3045_ = 111;
v___x_3046_ = lean_uint32_dec_eq(v_c_3036_, v___x_3045_);
if (v___x_3046_ == 0)
{
uint32_t v___x_3047_; uint8_t v___x_3048_; 
v___x_3047_ = 79;
v___x_3048_ = lean_uint32_dec_eq(v_c_3036_, v___x_3047_);
if (v___x_3048_ == 0)
{
uint8_t v___x_3049_; 
v___x_3049_ = lean_uint32_dec_le(v___x_3026_, v_c_3036_);
if (v___x_3049_ == 0)
{
lean_object* v___x_3050_; 
v___x_3050_ = lean_box(0);
return v___x_3050_;
}
else
{
uint32_t v___x_3051_; uint8_t v___x_3052_; 
v___x_3051_ = 57;
v___x_3052_ = lean_uint32_dec_le(v_c_3036_, v___x_3051_);
if (v___x_3052_ == 0)
{
lean_object* v___x_3053_; 
v___x_3053_ = lean_box(0);
return v___x_3053_;
}
else
{
lean_object* v___x_3054_; 
v___x_3054_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(v_s_3009_, v___x_3023_, v___x_3023_);
return v___x_3054_;
}
}
}
else
{
goto v___jp_3018_;
}
}
else
{
goto v___jp_3018_;
}
}
else
{
goto v___jp_3014_;
}
}
else
{
goto v___jp_3014_;
}
}
else
{
goto v___jp_3010_;
}
}
else
{
goto v___jp_3010_;
}
}
else
{
lean_object* v___x_3055_; 
v___x_3055_ = ((lean_object*)(l_Lean_Syntax_decodeNatLitVal_x3f___closed__0));
return v___x_3055_;
}
}
}
else
{
lean_object* v___x_3056_; 
lean_dec(v_len_3022_);
v___x_3056_ = lean_box(0);
return v___x_3056_;
}
v___jp_3010_:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3011_ = lean_unsigned_to_nat(2u);
v___x_3012_ = lean_unsigned_to_nat(0u);
v___x_3013_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(v_s_3009_, v___x_3011_, v___x_3012_);
return v___x_3013_;
}
v___jp_3014_:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; 
v___x_3015_ = lean_unsigned_to_nat(2u);
v___x_3016_ = lean_unsigned_to_nat(0u);
v___x_3017_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(v_s_3009_, v___x_3015_, v___x_3016_);
return v___x_3017_;
}
v___jp_3018_:
{
lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; 
v___x_3019_ = lean_unsigned_to_nat(2u);
v___x_3020_ = lean_unsigned_to_nat(0u);
v___x_3021_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(v_s_3009_, v___x_3019_, v___x_3020_);
return v___x_3021_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___boxed(lean_object* v_s_3057_){
_start:
{
lean_object* v_res_3058_; 
v_res_3058_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_s_3057_);
lean_dec_ref(v_s_3057_);
return v_res_3058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f(lean_object* v_litKind_3059_, lean_object* v_stx_3060_){
_start:
{
if (lean_obj_tag(v_stx_3060_) == 1)
{
lean_object* v_kind_3061_; lean_object* v_args_3062_; uint8_t v___x_3063_; 
v_kind_3061_ = lean_ctor_get(v_stx_3060_, 1);
v_args_3062_ = lean_ctor_get(v_stx_3060_, 2);
v___x_3063_ = lean_name_eq(v_kind_3061_, v_litKind_3059_);
if (v___x_3063_ == 0)
{
lean_object* v___x_3064_; 
v___x_3064_ = lean_box(0);
return v___x_3064_;
}
else
{
lean_object* v___x_3065_; lean_object* v___x_3066_; uint8_t v___x_3067_; 
v___x_3065_ = lean_array_get_size(v_args_3062_);
v___x_3066_ = lean_unsigned_to_nat(1u);
v___x_3067_ = lean_nat_dec_eq(v___x_3065_, v___x_3066_);
if (v___x_3067_ == 0)
{
lean_object* v___x_3068_; 
v___x_3068_ = lean_box(0);
return v___x_3068_;
}
else
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3069_ = lean_unsigned_to_nat(0u);
v___x_3070_ = lean_array_fget_borrowed(v_args_3062_, v___x_3069_);
if (lean_obj_tag(v___x_3070_) == 2)
{
lean_object* v_val_3071_; lean_object* v___x_3072_; 
v_val_3071_ = lean_ctor_get(v___x_3070_, 1);
lean_inc_ref(v_val_3071_);
v___x_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3072_, 0, v_val_3071_);
return v___x_3072_;
}
else
{
lean_object* v___x_3073_; 
v___x_3073_ = lean_box(0);
return v___x_3073_;
}
}
}
}
else
{
lean_object* v___x_3074_; 
v___x_3074_ = lean_box(0);
return v___x_3074_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f___boxed(lean_object* v_litKind_3075_, lean_object* v_stx_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l_Lean_Syntax_isLit_x3f(v_litKind_3075_, v_stx_3076_);
lean_dec(v_stx_3076_);
lean_dec(v_litKind_3075_);
return v_res_3077_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(lean_object* v_litKind_3078_, lean_object* v_stx_3079_){
_start:
{
lean_object* v___x_3080_; 
v___x_3080_ = l_Lean_Syntax_isLit_x3f(v_litKind_3078_, v_stx_3079_);
if (lean_obj_tag(v___x_3080_) == 1)
{
lean_object* v_val_3081_; lean_object* v___x_3082_; 
v_val_3081_ = lean_ctor_get(v___x_3080_, 0);
lean_inc(v_val_3081_);
lean_dec_ref_known(v___x_3080_, 1);
v___x_3082_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_val_3081_);
lean_dec(v_val_3081_);
return v___x_3082_;
}
else
{
lean_object* v___x_3083_; 
lean_dec(v___x_3080_);
v___x_3083_ = lean_box(0);
return v___x_3083_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux___boxed(lean_object* v_litKind_3084_, lean_object* v_stx_3085_){
_start:
{
lean_object* v_res_3086_; 
v_res_3086_ = l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(v_litKind_3084_, v_stx_3085_);
lean_dec(v_stx_3085_);
lean_dec(v_litKind_3084_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object* v_s_3087_){
_start:
{
lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3088_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
v___x_3089_ = l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(v___x_3088_, v_s_3087_);
return v___x_3089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f___boxed(lean_object* v_s_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lean_Syntax_isNatLit_x3f(v_s_3090_);
lean_dec(v_s_3090_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f(lean_object* v_s_3095_){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3096_ = ((lean_object*)(l_Lean_Syntax_isFieldIdx_x3f___closed__1));
v___x_3097_ = l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(v___x_3096_, v_s_3095_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f___boxed(lean_object* v_s_3098_){
_start:
{
lean_object* v_res_3099_; 
v_res_3099_ = l_Lean_Syntax_isFieldIdx_x3f(v_s_3098_);
lean_dec(v_s_3098_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(lean_object* v_s_3100_, lean_object* v_i_3101_, lean_object* v_val_3102_, lean_object* v_e_3103_, uint8_t v_sign_3104_, lean_object* v_exp_3105_){
_start:
{
uint8_t v___x_3106_; 
v___x_3106_ = lean_string_utf8_at_end(v_s_3100_, v_i_3101_);
if (v___x_3106_ == 0)
{
uint32_t v_c_3107_; uint32_t v___x_3114_; uint8_t v___x_3115_; 
v_c_3107_ = lean_string_utf8_get(v_s_3100_, v_i_3101_);
v___x_3114_ = 48;
v___x_3115_ = lean_uint32_dec_le(v___x_3114_, v_c_3107_);
if (v___x_3115_ == 0)
{
goto v___jp_3108_;
}
else
{
uint32_t v___x_3116_; uint8_t v___x_3117_; 
v___x_3116_ = 57;
v___x_3117_ = lean_uint32_dec_le(v_c_3107_, v___x_3116_);
if (v___x_3117_ == 0)
{
goto v___jp_3108_;
}
else
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3118_ = lean_string_utf8_next(v_s_3100_, v_i_3101_);
lean_dec(v_i_3101_);
v___x_3119_ = lean_unsigned_to_nat(10u);
v___x_3120_ = lean_nat_mul(v___x_3119_, v_exp_3105_);
lean_dec(v_exp_3105_);
v___x_3121_ = lean_uint32_to_nat(v_c_3107_);
v___x_3122_ = lean_nat_add(v___x_3120_, v___x_3121_);
lean_dec(v___x_3121_);
lean_dec(v___x_3120_);
v___x_3123_ = lean_unsigned_to_nat(48u);
v___x_3124_ = lean_nat_sub(v___x_3122_, v___x_3123_);
lean_dec(v___x_3122_);
v_i_3101_ = v___x_3118_;
v_exp_3105_ = v___x_3124_;
goto _start;
}
}
v___jp_3108_:
{
uint32_t v___x_3109_; uint8_t v___x_3110_; 
v___x_3109_ = 95;
v___x_3110_ = lean_uint32_dec_eq(v_c_3107_, v___x_3109_);
if (v___x_3110_ == 0)
{
lean_object* v___x_3111_; 
lean_dec(v_exp_3105_);
lean_dec(v_val_3102_);
lean_dec(v_i_3101_);
v___x_3111_ = lean_box(0);
return v___x_3111_;
}
else
{
lean_object* v___x_3112_; 
v___x_3112_ = lean_string_utf8_next(v_s_3100_, v_i_3101_);
lean_dec(v_i_3101_);
v_i_3101_ = v___x_3112_;
goto _start;
}
}
}
else
{
lean_dec(v_i_3101_);
if (v_sign_3104_ == 0)
{
uint8_t v___x_3126_; 
v___x_3126_ = lean_nat_dec_le(v_e_3103_, v_exp_3105_);
if (v___x_3126_ == 0)
{
lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3127_ = lean_nat_sub(v_e_3103_, v_exp_3105_);
lean_dec(v_exp_3105_);
v___x_3128_ = lean_box(v___x_3106_);
v___x_3129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3128_);
lean_ctor_set(v___x_3129_, 1, v___x_3127_);
v___x_3130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3130_, 0, v_val_3102_);
lean_ctor_set(v___x_3130_, 1, v___x_3129_);
v___x_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3130_);
return v___x_3131_;
}
else
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3132_ = lean_nat_sub(v_exp_3105_, v_e_3103_);
lean_dec(v_exp_3105_);
v___x_3133_ = lean_box(v_sign_3104_);
v___x_3134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3133_);
lean_ctor_set(v___x_3134_, 1, v___x_3132_);
v___x_3135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3135_, 0, v_val_3102_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
v___x_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3135_);
return v___x_3136_;
}
}
else
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3137_ = lean_nat_add(v_exp_3105_, v_e_3103_);
lean_dec(v_exp_3105_);
v___x_3138_ = lean_box(v_sign_3104_);
v___x_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3138_);
lean_ctor_set(v___x_3139_, 1, v___x_3137_);
v___x_3140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3140_, 0, v_val_3102_);
lean_ctor_set(v___x_3140_, 1, v___x_3139_);
v___x_3141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3141_, 0, v___x_3140_);
return v___x_3141_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp___boxed(lean_object* v_s_3142_, lean_object* v_i_3143_, lean_object* v_val_3144_, lean_object* v_e_3145_, lean_object* v_sign_3146_, lean_object* v_exp_3147_){
_start:
{
uint8_t v_sign_boxed_3148_; lean_object* v_res_3149_; 
v_sign_boxed_3148_ = lean_unbox(v_sign_3146_);
v_res_3149_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3142_, v_i_3143_, v_val_3144_, v_e_3145_, v_sign_boxed_3148_, v_exp_3147_);
lean_dec(v_e_3145_);
lean_dec_ref(v_s_3142_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(lean_object* v_s_3150_, lean_object* v_i_3151_, lean_object* v_val_3152_, lean_object* v_e_3153_){
_start:
{
uint8_t v___x_3154_; 
v___x_3154_ = lean_string_utf8_at_end(v_s_3150_, v_i_3151_);
if (v___x_3154_ == 0)
{
uint32_t v_c_3155_; uint32_t v___x_3156_; uint8_t v___x_3157_; 
v_c_3155_ = lean_string_utf8_get(v_s_3150_, v_i_3151_);
v___x_3156_ = 45;
v___x_3157_ = lean_uint32_dec_eq(v_c_3155_, v___x_3156_);
if (v___x_3157_ == 0)
{
uint32_t v___x_3158_; uint8_t v___x_3159_; 
v___x_3158_ = 43;
v___x_3159_ = lean_uint32_dec_eq(v_c_3155_, v___x_3158_);
if (v___x_3159_ == 0)
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3160_ = lean_unsigned_to_nat(0u);
v___x_3161_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3150_, v_i_3151_, v_val_3152_, v_e_3153_, v___x_3159_, v___x_3160_);
return v___x_3161_;
}
else
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3162_ = lean_string_utf8_next(v_s_3150_, v_i_3151_);
lean_dec(v_i_3151_);
v___x_3163_ = lean_unsigned_to_nat(0u);
v___x_3164_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3150_, v___x_3162_, v_val_3152_, v_e_3153_, v___x_3157_, v___x_3163_);
return v___x_3164_;
}
}
else
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3165_ = lean_string_utf8_next(v_s_3150_, v_i_3151_);
lean_dec(v_i_3151_);
v___x_3166_ = lean_unsigned_to_nat(0u);
v___x_3167_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3150_, v___x_3165_, v_val_3152_, v_e_3153_, v___x_3157_, v___x_3166_);
return v___x_3167_;
}
}
else
{
lean_object* v___x_3168_; 
lean_dec(v_val_3152_);
lean_dec(v_i_3151_);
v___x_3168_ = lean_box(0);
return v___x_3168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp___boxed(lean_object* v_s_3169_, lean_object* v_i_3170_, lean_object* v_val_3171_, lean_object* v_e_3172_){
_start:
{
lean_object* v_res_3173_; 
v_res_3173_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(v_s_3169_, v_i_3170_, v_val_3171_, v_e_3172_);
lean_dec(v_e_3172_);
lean_dec_ref(v_s_3169_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(lean_object* v_s_3174_, lean_object* v_i_3175_, lean_object* v_val_3176_, lean_object* v_e_3177_){
_start:
{
uint8_t v___x_3181_; 
v___x_3181_ = lean_string_utf8_at_end(v_s_3174_, v_i_3175_);
if (v___x_3181_ == 0)
{
uint32_t v_c_3182_; uint32_t v___x_3193_; uint8_t v___x_3194_; 
v_c_3182_ = lean_string_utf8_get(v_s_3174_, v_i_3175_);
v___x_3193_ = 48;
v___x_3194_ = lean_uint32_dec_le(v___x_3193_, v_c_3182_);
if (v___x_3194_ == 0)
{
goto v___jp_3183_;
}
else
{
uint32_t v___x_3195_; uint8_t v___x_3196_; 
v___x_3195_ = 57;
v___x_3196_ = lean_uint32_dec_le(v_c_3182_, v___x_3195_);
if (v___x_3196_ == 0)
{
goto v___jp_3183_;
}
else
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3197_ = lean_string_utf8_next(v_s_3174_, v_i_3175_);
lean_dec(v_i_3175_);
v___x_3198_ = lean_unsigned_to_nat(10u);
v___x_3199_ = lean_nat_mul(v___x_3198_, v_val_3176_);
lean_dec(v_val_3176_);
v___x_3200_ = lean_uint32_to_nat(v_c_3182_);
v___x_3201_ = lean_nat_add(v___x_3199_, v___x_3200_);
lean_dec(v___x_3200_);
lean_dec(v___x_3199_);
v___x_3202_ = lean_unsigned_to_nat(48u);
v___x_3203_ = lean_nat_sub(v___x_3201_, v___x_3202_);
lean_dec(v___x_3201_);
v___x_3204_ = lean_unsigned_to_nat(1u);
v___x_3205_ = lean_nat_add(v_e_3177_, v___x_3204_);
lean_dec(v_e_3177_);
v_i_3175_ = v___x_3197_;
v_val_3176_ = v___x_3203_;
v_e_3177_ = v___x_3205_;
goto _start;
}
}
v___jp_3183_:
{
uint32_t v___x_3184_; uint8_t v___x_3185_; 
v___x_3184_ = 95;
v___x_3185_ = lean_uint32_dec_eq(v_c_3182_, v___x_3184_);
if (v___x_3185_ == 0)
{
uint32_t v___x_3186_; uint8_t v___x_3187_; 
v___x_3186_ = 101;
v___x_3187_ = lean_uint32_dec_eq(v_c_3182_, v___x_3186_);
if (v___x_3187_ == 0)
{
uint32_t v___x_3188_; uint8_t v___x_3189_; 
v___x_3188_ = 69;
v___x_3189_ = lean_uint32_dec_eq(v_c_3182_, v___x_3188_);
if (v___x_3189_ == 0)
{
lean_object* v___x_3190_; 
lean_dec(v_e_3177_);
lean_dec(v_val_3176_);
lean_dec(v_i_3175_);
v___x_3190_ = lean_box(0);
return v___x_3190_;
}
else
{
goto v___jp_3178_;
}
}
else
{
goto v___jp_3178_;
}
}
else
{
lean_object* v___x_3191_; 
v___x_3191_ = lean_string_utf8_next(v_s_3174_, v_i_3175_);
lean_dec(v_i_3175_);
v_i_3175_ = v___x_3191_;
goto _start;
}
}
}
else
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
lean_dec(v_i_3175_);
v___x_3207_ = lean_box(v___x_3181_);
v___x_3208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
lean_ctor_set(v___x_3208_, 1, v_e_3177_);
v___x_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3209_, 0, v_val_3176_);
lean_ctor_set(v___x_3209_, 1, v___x_3208_);
v___x_3210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3209_);
return v___x_3210_;
}
v___jp_3178_:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; 
v___x_3179_ = lean_string_utf8_next(v_s_3174_, v_i_3175_);
lean_dec(v_i_3175_);
v___x_3180_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(v_s_3174_, v___x_3179_, v_val_3176_, v_e_3177_);
lean_dec(v_e_3177_);
return v___x_3180_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot___boxed(lean_object* v_s_3211_, lean_object* v_i_3212_, lean_object* v_val_3213_, lean_object* v_e_3214_){
_start:
{
lean_object* v_res_3215_; 
v_res_3215_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(v_s_3211_, v_i_3212_, v_val_3213_, v_e_3214_);
lean_dec_ref(v_s_3211_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(lean_object* v_s_3216_, lean_object* v_i_3217_, lean_object* v_val_3218_){
_start:
{
uint8_t v___x_3223_; 
v___x_3223_ = lean_string_utf8_at_end(v_s_3216_, v_i_3217_);
if (v___x_3223_ == 0)
{
uint32_t v_c_3224_; uint32_t v___x_3240_; uint8_t v___x_3241_; 
v_c_3224_ = lean_string_utf8_get(v_s_3216_, v_i_3217_);
v___x_3240_ = 48;
v___x_3241_ = lean_uint32_dec_le(v___x_3240_, v_c_3224_);
if (v___x_3241_ == 0)
{
goto v___jp_3225_;
}
else
{
uint32_t v___x_3242_; uint8_t v___x_3243_; 
v___x_3242_ = 57;
v___x_3243_ = lean_uint32_dec_le(v_c_3224_, v___x_3242_);
if (v___x_3243_ == 0)
{
goto v___jp_3225_;
}
else
{
lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3244_ = lean_string_utf8_next(v_s_3216_, v_i_3217_);
lean_dec(v_i_3217_);
v___x_3245_ = lean_unsigned_to_nat(10u);
v___x_3246_ = lean_nat_mul(v___x_3245_, v_val_3218_);
lean_dec(v_val_3218_);
v___x_3247_ = lean_uint32_to_nat(v_c_3224_);
v___x_3248_ = lean_nat_add(v___x_3246_, v___x_3247_);
lean_dec(v___x_3247_);
lean_dec(v___x_3246_);
v___x_3249_ = lean_unsigned_to_nat(48u);
v___x_3250_ = lean_nat_sub(v___x_3248_, v___x_3249_);
lean_dec(v___x_3248_);
v_i_3217_ = v___x_3244_;
v_val_3218_ = v___x_3250_;
goto _start;
}
}
v___jp_3225_:
{
uint32_t v___x_3226_; uint8_t v___x_3227_; 
v___x_3226_ = 95;
v___x_3227_ = lean_uint32_dec_eq(v_c_3224_, v___x_3226_);
if (v___x_3227_ == 0)
{
uint32_t v___x_3228_; uint8_t v___x_3229_; 
v___x_3228_ = 46;
v___x_3229_ = lean_uint32_dec_eq(v_c_3224_, v___x_3228_);
if (v___x_3229_ == 0)
{
uint32_t v___x_3230_; uint8_t v___x_3231_; 
v___x_3230_ = 101;
v___x_3231_ = lean_uint32_dec_eq(v_c_3224_, v___x_3230_);
if (v___x_3231_ == 0)
{
uint32_t v___x_3232_; uint8_t v___x_3233_; 
v___x_3232_ = 69;
v___x_3233_ = lean_uint32_dec_eq(v_c_3224_, v___x_3232_);
if (v___x_3233_ == 0)
{
lean_object* v___x_3234_; 
lean_dec(v_val_3218_);
lean_dec(v_i_3217_);
v___x_3234_ = lean_box(0);
return v___x_3234_;
}
else
{
goto v___jp_3219_;
}
}
else
{
goto v___jp_3219_;
}
}
else
{
lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3235_ = lean_string_utf8_next(v_s_3216_, v_i_3217_);
lean_dec(v_i_3217_);
v___x_3236_ = lean_unsigned_to_nat(0u);
v___x_3237_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(v_s_3216_, v___x_3235_, v_val_3218_, v___x_3236_);
return v___x_3237_;
}
}
else
{
lean_object* v___x_3238_; 
v___x_3238_ = lean_string_utf8_next(v_s_3216_, v_i_3217_);
lean_dec(v_i_3217_);
v_i_3217_ = v___x_3238_;
goto _start;
}
}
}
else
{
lean_object* v___x_3252_; 
lean_dec(v_val_3218_);
lean_dec(v_i_3217_);
v___x_3252_ = lean_box(0);
return v___x_3252_;
}
v___jp_3219_:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = lean_string_utf8_next(v_s_3216_, v_i_3217_);
lean_dec(v_i_3217_);
v___x_3221_ = lean_unsigned_to_nat(0u);
v___x_3222_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(v_s_3216_, v___x_3220_, v_val_3218_, v___x_3221_);
return v___x_3222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode___boxed(lean_object* v_s_3253_, lean_object* v_i_3254_, lean_object* v_val_3255_){
_start:
{
lean_object* v_res_3256_; 
v_res_3256_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(v_s_3253_, v_i_3254_, v_val_3255_);
lean_dec_ref(v_s_3253_);
return v_res_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object* v_s_3257_){
_start:
{
lean_object* v_len_3258_; lean_object* v___x_3259_; uint8_t v___x_3260_; 
v_len_3258_ = lean_string_length(v_s_3257_);
v___x_3259_ = lean_unsigned_to_nat(0u);
v___x_3260_ = lean_nat_dec_eq(v_len_3258_, v___x_3259_);
lean_dec(v_len_3258_);
if (v___x_3260_ == 0)
{
uint32_t v_c_3261_; uint32_t v___x_3262_; uint8_t v___x_3263_; 
v_c_3261_ = lean_string_utf8_get(v_s_3257_, v___x_3259_);
v___x_3262_ = 48;
v___x_3263_ = lean_uint32_dec_le(v___x_3262_, v_c_3261_);
if (v___x_3263_ == 0)
{
lean_object* v___x_3264_; 
v___x_3264_ = lean_box(0);
return v___x_3264_;
}
else
{
uint32_t v___x_3265_; uint8_t v___x_3266_; 
v___x_3265_ = 57;
v___x_3266_ = lean_uint32_dec_le(v_c_3261_, v___x_3265_);
if (v___x_3266_ == 0)
{
lean_object* v___x_3267_; 
v___x_3267_ = lean_box(0);
return v___x_3267_;
}
else
{
lean_object* v___x_3268_; 
v___x_3268_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(v_s_3257_, v___x_3259_, v___x_3259_);
return v___x_3268_;
}
}
}
else
{
lean_object* v___x_3269_; 
v___x_3269_ = lean_box(0);
return v___x_3269_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f___boxed(lean_object* v_s_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l_Lean_Syntax_decodeScientificLitVal_x3f(v_s_3270_);
lean_dec_ref(v_s_3270_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f(lean_object* v_stx_3272_){
_start:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3273_ = ((lean_object*)(l_Lean_Syntax_mkScientificLit___closed__1));
v___x_3274_ = l_Lean_Syntax_isLit_x3f(v___x_3273_, v_stx_3272_);
if (lean_obj_tag(v___x_3274_) == 1)
{
lean_object* v_val_3275_; lean_object* v___x_3276_; 
v_val_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_val_3275_);
lean_dec_ref_known(v___x_3274_, 1);
v___x_3276_ = l_Lean_Syntax_decodeScientificLitVal_x3f(v_val_3275_);
lean_dec(v_val_3275_);
return v___x_3276_;
}
else
{
lean_object* v___x_3277_; 
lean_dec(v___x_3274_);
v___x_3277_ = lean_box(0);
return v___x_3277_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f___boxed(lean_object* v_stx_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l_Lean_Syntax_isScientificLit_x3f(v_stx_3278_);
lean_dec(v_stx_3278_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object* v_x_3280_){
_start:
{
switch(lean_obj_tag(v_x_3280_))
{
case 2:
{
lean_object* v_val_3281_; lean_object* v___x_3282_; 
v_val_3281_ = lean_ctor_get(v_x_3280_, 1);
lean_inc_ref(v_val_3281_);
lean_dec_ref_known(v_x_3280_, 2);
v___x_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3282_, 0, v_val_3281_);
return v___x_3282_;
}
case 3:
{
lean_object* v_rawVal_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
v_rawVal_3283_ = lean_ctor_get(v_x_3280_, 1);
lean_inc_ref(v_rawVal_3283_);
lean_dec_ref_known(v_x_3280_, 4);
v___x_3284_ = lean_substring_tostring(v_rawVal_3283_);
v___x_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3284_);
return v___x_3285_;
}
default: 
{
lean_object* v___x_3286_; 
lean_dec(v_x_3280_);
v___x_3286_ = lean_box(0);
return v___x_3286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat(lean_object* v_stx_3287_){
_start:
{
lean_object* v___x_3288_; 
v___x_3288_ = l_Lean_Syntax_isNatLit_x3f(v_stx_3287_);
if (lean_obj_tag(v___x_3288_) == 0)
{
lean_object* v___x_3289_; 
v___x_3289_ = lean_unsigned_to_nat(0u);
return v___x_3289_;
}
else
{
lean_object* v_val_3290_; 
v_val_3290_ = lean_ctor_get(v___x_3288_, 0);
lean_inc(v_val_3290_);
lean_dec_ref_known(v___x_3288_, 1);
return v_val_3290_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat___boxed(lean_object* v_stx_3291_){
_start:
{
lean_object* v_res_3292_; 
v_res_3292_ = l_Lean_Syntax_toNat(v_stx_3291_);
lean_dec(v_stx_3291_);
return v_res_3292_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__1(void){
_start:
{
uint32_t v___x_3293_; lean_object* v___x_3294_; 
v___x_3293_ = 9;
v___x_3294_ = lean_box_uint32(v___x_3293_);
return v___x_3294_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__2(void){
_start:
{
uint32_t v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = 10;
v___x_3296_ = lean_box_uint32(v___x_3295_);
return v___x_3296_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__3(void){
_start:
{
uint32_t v___x_3297_; lean_object* v___x_3298_; 
v___x_3297_ = 13;
v___x_3298_ = lean_box_uint32(v___x_3297_);
return v___x_3298_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__4(void){
_start:
{
uint32_t v___x_3299_; lean_object* v___x_3300_; 
v___x_3299_ = 39;
v___x_3300_ = lean_box_uint32(v___x_3299_);
return v___x_3300_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__5(void){
_start:
{
uint32_t v___x_3301_; lean_object* v___x_3302_; 
v___x_3301_ = 34;
v___x_3302_ = lean_box_uint32(v___x_3301_);
return v___x_3302_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__6(void){
_start:
{
uint32_t v___x_3303_; lean_object* v___x_3304_; 
v___x_3303_ = 92;
v___x_3304_ = lean_box_uint32(v___x_3303_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar(lean_object* v_s_3305_, lean_object* v_i_3306_){
_start:
{
uint32_t v_c_3307_; lean_object* v_i_3308_; uint32_t v___x_3309_; uint8_t v___x_3310_; 
v_c_3307_ = lean_string_utf8_get(v_s_3305_, v_i_3306_);
v_i_3308_ = lean_string_utf8_next(v_s_3305_, v_i_3306_);
v___x_3309_ = 92;
v___x_3310_ = lean_uint32_dec_eq(v_c_3307_, v___x_3309_);
if (v___x_3310_ == 0)
{
uint32_t v___x_3311_; uint8_t v___x_3312_; 
v___x_3311_ = 34;
v___x_3312_ = lean_uint32_dec_eq(v_c_3307_, v___x_3311_);
if (v___x_3312_ == 0)
{
uint32_t v___x_3313_; uint8_t v___x_3314_; 
v___x_3313_ = 39;
v___x_3314_ = lean_uint32_dec_eq(v_c_3307_, v___x_3313_);
if (v___x_3314_ == 0)
{
uint32_t v___x_3315_; uint8_t v___x_3316_; 
v___x_3315_ = 114;
v___x_3316_ = lean_uint32_dec_eq(v_c_3307_, v___x_3315_);
if (v___x_3316_ == 0)
{
uint32_t v___x_3317_; uint8_t v___x_3318_; 
v___x_3317_ = 110;
v___x_3318_ = lean_uint32_dec_eq(v_c_3307_, v___x_3317_);
if (v___x_3318_ == 0)
{
uint32_t v___x_3319_; uint8_t v___x_3320_; 
v___x_3319_ = 116;
v___x_3320_ = lean_uint32_dec_eq(v_c_3307_, v___x_3319_);
if (v___x_3320_ == 0)
{
uint32_t v___x_3321_; uint8_t v___x_3322_; 
v___x_3321_ = 120;
v___x_3322_ = lean_uint32_dec_eq(v_c_3307_, v___x_3321_);
if (v___x_3322_ == 0)
{
uint32_t v___x_3323_; uint8_t v___x_3324_; 
v___x_3323_ = 117;
v___x_3324_ = lean_uint32_dec_eq(v_c_3307_, v___x_3323_);
if (v___x_3324_ == 0)
{
lean_object* v___x_3325_; 
lean_dec(v_i_3308_);
v___x_3325_ = lean_box(0);
return v___x_3325_;
}
else
{
lean_object* v___x_3326_; 
v___x_3326_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3305_, v_i_3308_);
lean_dec(v_i_3308_);
if (lean_obj_tag(v___x_3326_) == 0)
{
lean_object* v___x_3327_; 
v___x_3327_ = lean_box(0);
return v___x_3327_;
}
else
{
lean_object* v_val_3328_; lean_object* v_fst_3329_; lean_object* v_snd_3330_; lean_object* v___x_3331_; 
v_val_3328_ = lean_ctor_get(v___x_3326_, 0);
lean_inc(v_val_3328_);
lean_dec_ref_known(v___x_3326_, 1);
v_fst_3329_ = lean_ctor_get(v_val_3328_, 0);
lean_inc(v_fst_3329_);
v_snd_3330_ = lean_ctor_get(v_val_3328_, 1);
lean_inc(v_snd_3330_);
lean_dec(v_val_3328_);
v___x_3331_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3305_, v_snd_3330_);
lean_dec(v_snd_3330_);
if (lean_obj_tag(v___x_3331_) == 0)
{
lean_object* v___x_3332_; 
lean_dec(v_fst_3329_);
v___x_3332_ = lean_box(0);
return v___x_3332_;
}
else
{
lean_object* v_val_3333_; lean_object* v_fst_3334_; lean_object* v_snd_3335_; lean_object* v___x_3336_; 
v_val_3333_ = lean_ctor_get(v___x_3331_, 0);
lean_inc(v_val_3333_);
lean_dec_ref_known(v___x_3331_, 1);
v_fst_3334_ = lean_ctor_get(v_val_3333_, 0);
lean_inc(v_fst_3334_);
v_snd_3335_ = lean_ctor_get(v_val_3333_, 1);
lean_inc(v_snd_3335_);
lean_dec(v_val_3333_);
v___x_3336_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3305_, v_snd_3335_);
lean_dec(v_snd_3335_);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v___x_3337_; 
lean_dec(v_fst_3334_);
lean_dec(v_fst_3329_);
v___x_3337_ = lean_box(0);
return v___x_3337_;
}
else
{
lean_object* v_val_3338_; lean_object* v_fst_3339_; lean_object* v_snd_3340_; lean_object* v___x_3341_; 
v_val_3338_ = lean_ctor_get(v___x_3336_, 0);
lean_inc(v_val_3338_);
lean_dec_ref_known(v___x_3336_, 1);
v_fst_3339_ = lean_ctor_get(v_val_3338_, 0);
lean_inc(v_fst_3339_);
v_snd_3340_ = lean_ctor_get(v_val_3338_, 1);
lean_inc(v_snd_3340_);
lean_dec(v_val_3338_);
v___x_3341_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3305_, v_snd_3340_);
lean_dec(v_snd_3340_);
if (lean_obj_tag(v___x_3341_) == 0)
{
lean_object* v___x_3342_; 
lean_dec(v_fst_3339_);
lean_dec(v_fst_3334_);
lean_dec(v_fst_3329_);
v___x_3342_ = lean_box(0);
return v___x_3342_;
}
else
{
lean_object* v_val_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3368_; 
v_val_3343_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3345_ = v___x_3341_;
v_isShared_3346_ = v_isSharedCheck_3368_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_val_3343_);
lean_dec(v___x_3341_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3368_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v_fst_3347_; lean_object* v_snd_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3367_; 
v_fst_3347_ = lean_ctor_get(v_val_3343_, 0);
v_snd_3348_ = lean_ctor_get(v_val_3343_, 1);
v_isSharedCheck_3367_ = !lean_is_exclusive(v_val_3343_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3350_ = v_val_3343_;
v_isShared_3351_ = v_isSharedCheck_3367_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_snd_3348_);
lean_inc(v_fst_3347_);
lean_dec(v_val_3343_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3367_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; uint32_t v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3362_; 
v___x_3352_ = lean_unsigned_to_nat(16u);
v___x_3353_ = lean_nat_mul(v___x_3352_, v_fst_3329_);
lean_dec(v_fst_3329_);
v___x_3354_ = lean_nat_add(v___x_3353_, v_fst_3334_);
lean_dec(v_fst_3334_);
lean_dec(v___x_3353_);
v___x_3355_ = lean_nat_mul(v___x_3352_, v___x_3354_);
lean_dec(v___x_3354_);
v___x_3356_ = lean_nat_add(v___x_3355_, v_fst_3339_);
lean_dec(v_fst_3339_);
lean_dec(v___x_3355_);
v___x_3357_ = lean_nat_mul(v___x_3352_, v___x_3356_);
lean_dec(v___x_3356_);
v___x_3358_ = lean_nat_add(v___x_3357_, v_fst_3347_);
lean_dec(v_fst_3347_);
lean_dec(v___x_3357_);
v___x_3359_ = l_Char_ofNat(v___x_3358_);
lean_dec(v___x_3358_);
v___x_3360_ = lean_box_uint32(v___x_3359_);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3360_);
v___x_3362_ = v___x_3350_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v___x_3360_);
lean_ctor_set(v_reuseFailAlloc_3366_, 1, v_snd_3348_);
v___x_3362_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
lean_object* v___x_3364_; 
if (v_isShared_3346_ == 0)
{
lean_ctor_set(v___x_3345_, 0, v___x_3362_);
v___x_3364_ = v___x_3345_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v___x_3362_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
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
else
{
lean_object* v___x_3369_; 
v___x_3369_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3305_, v_i_3308_);
lean_dec(v_i_3308_);
if (lean_obj_tag(v___x_3369_) == 0)
{
lean_object* v___x_3370_; 
v___x_3370_ = lean_box(0);
return v___x_3370_;
}
else
{
lean_object* v_val_3371_; lean_object* v_fst_3372_; lean_object* v_snd_3373_; lean_object* v___x_3374_; 
v_val_3371_ = lean_ctor_get(v___x_3369_, 0);
lean_inc(v_val_3371_);
lean_dec_ref_known(v___x_3369_, 1);
v_fst_3372_ = lean_ctor_get(v_val_3371_, 0);
lean_inc(v_fst_3372_);
v_snd_3373_ = lean_ctor_get(v_val_3371_, 1);
lean_inc(v_snd_3373_);
lean_dec(v_val_3371_);
v___x_3374_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3305_, v_snd_3373_);
lean_dec(v_snd_3373_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v___x_3375_; 
lean_dec(v_fst_3372_);
v___x_3375_ = lean_box(0);
return v___x_3375_;
}
else
{
lean_object* v_val_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3397_; 
v_val_3376_ = lean_ctor_get(v___x_3374_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3374_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3378_ = v___x_3374_;
v_isShared_3379_ = v_isSharedCheck_3397_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_val_3376_);
lean_dec(v___x_3374_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3397_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v_fst_3380_; lean_object* v_snd_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3396_; 
v_fst_3380_ = lean_ctor_get(v_val_3376_, 0);
v_snd_3381_ = lean_ctor_get(v_val_3376_, 1);
v_isSharedCheck_3396_ = !lean_is_exclusive(v_val_3376_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3383_ = v_val_3376_;
v_isShared_3384_ = v_isSharedCheck_3396_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_snd_3381_);
lean_inc(v_fst_3380_);
lean_dec(v_val_3376_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3396_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; uint32_t v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3391_; 
v___x_3385_ = lean_unsigned_to_nat(16u);
v___x_3386_ = lean_nat_mul(v___x_3385_, v_fst_3372_);
lean_dec(v_fst_3372_);
v___x_3387_ = lean_nat_add(v___x_3386_, v_fst_3380_);
lean_dec(v_fst_3380_);
lean_dec(v___x_3386_);
v___x_3388_ = l_Char_ofNat(v___x_3387_);
lean_dec(v___x_3387_);
v___x_3389_ = lean_box_uint32(v___x_3388_);
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 0, v___x_3389_);
v___x_3391_ = v___x_3383_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v___x_3389_);
lean_ctor_set(v_reuseFailAlloc_3395_, 1, v_snd_3381_);
v___x_3391_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
lean_object* v___x_3393_; 
if (v_isShared_3379_ == 0)
{
lean_ctor_set(v___x_3378_, 0, v___x_3391_);
v___x_3393_ = v___x_3378_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v___x_3391_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
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
lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3398_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__1;
v___x_3399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
lean_ctor_set(v___x_3399_, 1, v_i_3308_);
v___x_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3399_);
return v___x_3400_;
}
}
else
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3401_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__2;
v___x_3402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
lean_ctor_set(v___x_3402_, 1, v_i_3308_);
v___x_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3403_, 0, v___x_3402_);
return v___x_3403_;
}
}
else
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3404_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__3;
v___x_3405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3404_);
lean_ctor_set(v___x_3405_, 1, v_i_3308_);
v___x_3406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3405_);
return v___x_3406_;
}
}
else
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3407_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__4;
v___x_3408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3407_);
lean_ctor_set(v___x_3408_, 1, v_i_3308_);
v___x_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3409_, 0, v___x_3408_);
return v___x_3409_;
}
}
else
{
lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3410_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__5;
v___x_3411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
lean_ctor_set(v___x_3411_, 1, v_i_3308_);
v___x_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3411_);
return v___x_3412_;
}
}
else
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; 
v___x_3413_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__6;
v___x_3414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
lean_ctor_set(v___x_3414_, 1, v_i_3308_);
v___x_3415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
return v___x_3415_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed(lean_object* v_s_3416_, lean_object* v_i_3417_){
_start:
{
lean_object* v_res_3418_; 
v_res_3418_ = l_Lean_Syntax_decodeQuotedChar(v_s_3416_, v_i_3417_);
lean_dec(v_i_3417_);
lean_dec_ref(v_s_3416_);
return v_res_3418_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_decodeStringGap___lam__0(uint32_t v___y_3419_){
_start:
{
uint32_t v___x_3420_; uint8_t v___x_3421_; 
v___x_3420_ = 32;
v___x_3421_ = lean_uint32_dec_eq(v___y_3419_, v___x_3420_);
if (v___x_3421_ == 0)
{
uint32_t v___x_3422_; uint8_t v___x_3423_; 
v___x_3422_ = 9;
v___x_3423_ = lean_uint32_dec_eq(v___y_3419_, v___x_3422_);
if (v___x_3423_ == 0)
{
uint32_t v___x_3424_; uint8_t v___x_3425_; 
v___x_3424_ = 13;
v___x_3425_ = lean_uint32_dec_eq(v___y_3419_, v___x_3424_);
if (v___x_3425_ == 0)
{
uint32_t v___x_3426_; uint8_t v___x_3427_; 
v___x_3426_ = 10;
v___x_3427_ = lean_uint32_dec_eq(v___y_3419_, v___x_3426_);
return v___x_3427_;
}
else
{
return v___x_3425_;
}
}
else
{
return v___x_3423_;
}
}
else
{
return v___x_3421_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___lam__0___boxed(lean_object* v___y_3428_){
_start:
{
uint32_t v___y_270__boxed_3429_; uint8_t v_res_3430_; lean_object* v_r_3431_; 
v___y_270__boxed_3429_ = lean_unbox_uint32(v___y_3428_);
lean_dec(v___y_3428_);
v_res_3430_ = l_Lean_Syntax_decodeStringGap___lam__0(v___y_270__boxed_3429_);
v_r_3431_ = lean_box(v_res_3430_);
return v_r_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap(lean_object* v_s_3433_, lean_object* v_i_3434_){
_start:
{
lean_object* v___f_3435_; uint32_t v___x_3440_; uint32_t v___x_3441_; uint8_t v___x_3442_; 
v___f_3435_ = ((lean_object*)(l_Lean_Syntax_decodeStringGap___closed__0));
v___x_3440_ = lean_string_utf8_get(v_s_3433_, v_i_3434_);
v___x_3441_ = 32;
v___x_3442_ = lean_uint32_dec_eq(v___x_3440_, v___x_3441_);
if (v___x_3442_ == 0)
{
uint32_t v___x_3443_; uint8_t v___x_3444_; 
v___x_3443_ = 9;
v___x_3444_ = lean_uint32_dec_eq(v___x_3440_, v___x_3443_);
if (v___x_3444_ == 0)
{
uint32_t v___x_3445_; uint8_t v___x_3446_; 
v___x_3445_ = 13;
v___x_3446_ = lean_uint32_dec_eq(v___x_3440_, v___x_3445_);
if (v___x_3446_ == 0)
{
uint32_t v___x_3447_; uint8_t v___x_3448_; 
v___x_3447_ = 10;
v___x_3448_ = lean_uint32_dec_eq(v___x_3440_, v___x_3447_);
if (v___x_3448_ == 0)
{
lean_object* v___x_3449_; 
lean_dec_ref(v_s_3433_);
v___x_3449_ = lean_box(0);
return v___x_3449_;
}
else
{
goto v___jp_3436_;
}
}
else
{
goto v___jp_3436_;
}
}
else
{
goto v___jp_3436_;
}
}
else
{
goto v___jp_3436_;
}
v___jp_3436_:
{
lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3437_ = lean_string_utf8_next(v_s_3433_, v_i_3434_);
v___x_3438_ = lean_string_nextwhile(v_s_3433_, v___f_3435_, v___x_3437_);
v___x_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3438_);
return v___x_3439_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___boxed(lean_object* v_s_3450_, lean_object* v_i_3451_){
_start:
{
lean_object* v_res_3452_; 
v_res_3452_ = l_Lean_Syntax_decodeStringGap(v_s_3450_, v_i_3451_);
lean_dec(v_i_3451_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLitAux(lean_object* v_s_3453_, lean_object* v_i_3454_, lean_object* v_acc_3455_){
_start:
{
uint32_t v_c_3456_; uint32_t v___x_3457_; uint8_t v___x_3458_; 
v_c_3456_ = lean_string_utf8_get(v_s_3453_, v_i_3454_);
v___x_3457_ = 34;
v___x_3458_ = lean_uint32_dec_eq(v_c_3456_, v___x_3457_);
if (v___x_3458_ == 0)
{
lean_object* v_i_3459_; uint8_t v___x_3460_; 
v_i_3459_ = lean_string_utf8_next(v_s_3453_, v_i_3454_);
lean_dec(v_i_3454_);
v___x_3460_ = lean_string_utf8_at_end(v_s_3453_, v_i_3459_);
if (v___x_3460_ == 0)
{
uint32_t v___x_3461_; uint8_t v___x_3462_; 
v___x_3461_ = 92;
v___x_3462_ = lean_uint32_dec_eq(v_c_3456_, v___x_3461_);
if (v___x_3462_ == 0)
{
lean_object* v___x_3463_; 
v___x_3463_ = lean_string_push(v_acc_3455_, v_c_3456_);
v_i_3454_ = v_i_3459_;
v_acc_3455_ = v___x_3463_;
goto _start;
}
else
{
lean_object* v___x_3465_; 
v___x_3465_ = l_Lean_Syntax_decodeQuotedChar(v_s_3453_, v_i_3459_);
if (lean_obj_tag(v___x_3465_) == 1)
{
lean_object* v_val_3466_; lean_object* v_fst_3467_; lean_object* v_snd_3468_; uint32_t v___x_3469_; lean_object* v___x_3470_; 
lean_dec(v_i_3459_);
v_val_3466_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_val_3466_);
lean_dec_ref_known(v___x_3465_, 1);
v_fst_3467_ = lean_ctor_get(v_val_3466_, 0);
lean_inc(v_fst_3467_);
v_snd_3468_ = lean_ctor_get(v_val_3466_, 1);
lean_inc(v_snd_3468_);
lean_dec(v_val_3466_);
v___x_3469_ = lean_unbox_uint32(v_fst_3467_);
lean_dec(v_fst_3467_);
v___x_3470_ = lean_string_push(v_acc_3455_, v___x_3469_);
v_i_3454_ = v_snd_3468_;
v_acc_3455_ = v___x_3470_;
goto _start;
}
else
{
lean_object* v___x_3472_; 
lean_dec(v___x_3465_);
lean_inc_ref(v_s_3453_);
v___x_3472_ = l_Lean_Syntax_decodeStringGap(v_s_3453_, v_i_3459_);
lean_dec(v_i_3459_);
if (lean_obj_tag(v___x_3472_) == 1)
{
lean_object* v_val_3473_; 
v_val_3473_ = lean_ctor_get(v___x_3472_, 0);
lean_inc(v_val_3473_);
lean_dec_ref_known(v___x_3472_, 1);
v_i_3454_ = v_val_3473_;
goto _start;
}
else
{
lean_object* v___x_3475_; 
lean_dec(v___x_3472_);
lean_dec_ref(v_acc_3455_);
lean_dec_ref(v_s_3453_);
v___x_3475_ = lean_box(0);
return v___x_3475_;
}
}
}
}
else
{
lean_object* v___x_3476_; 
lean_dec(v_i_3459_);
lean_dec_ref(v_acc_3455_);
lean_dec_ref(v_s_3453_);
v___x_3476_ = lean_box(0);
return v___x_3476_;
}
}
else
{
lean_object* v___x_3477_; 
lean_dec(v_i_3454_);
lean_dec_ref(v_s_3453_);
v___x_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3477_, 0, v_acc_3455_);
return v___x_3477_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux(lean_object* v_s_3478_, lean_object* v_i_3479_, lean_object* v_num_3480_){
_start:
{
uint32_t v_c_3481_; lean_object* v_i_3482_; uint32_t v___x_3483_; uint8_t v___x_3484_; 
v_c_3481_ = lean_string_utf8_get(v_s_3478_, v_i_3479_);
v_i_3482_ = lean_string_utf8_next(v_s_3478_, v_i_3479_);
lean_dec(v_i_3479_);
v___x_3483_ = 35;
v___x_3484_ = lean_uint32_dec_eq(v_c_3481_, v___x_3483_);
if (v___x_3484_ == 0)
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3485_ = lean_string_utf8_byte_size(v_s_3478_);
v___x_3486_ = lean_unsigned_to_nat(1u);
v___x_3487_ = lean_nat_add(v_num_3480_, v___x_3486_);
lean_dec(v_num_3480_);
v___x_3488_ = lean_nat_sub(v___x_3485_, v___x_3487_);
lean_dec(v___x_3487_);
v___x_3489_ = lean_string_utf8_extract(v_s_3478_, v_i_3482_, v___x_3488_);
lean_dec(v___x_3488_);
lean_dec(v_i_3482_);
return v___x_3489_;
}
else
{
lean_object* v___x_3490_; lean_object* v___x_3491_; 
v___x_3490_ = lean_unsigned_to_nat(1u);
v___x_3491_ = lean_nat_add(v_num_3480_, v___x_3490_);
lean_dec(v_num_3480_);
v_i_3479_ = v_i_3482_;
v_num_3480_ = v___x_3491_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux___boxed(lean_object* v_s_3493_, lean_object* v_i_3494_, lean_object* v_num_3495_){
_start:
{
lean_object* v_res_3496_; 
v_res_3496_ = l_Lean_Syntax_decodeRawStrLitAux(v_s_3493_, v_i_3494_, v_num_3495_);
lean_dec_ref(v_s_3493_);
return v_res_3496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLit(lean_object* v_s_3497_){
_start:
{
lean_object* v___x_3498_; uint32_t v___x_3499_; uint32_t v___x_3500_; uint8_t v___x_3501_; 
v___x_3498_ = lean_unsigned_to_nat(0u);
v___x_3499_ = lean_string_utf8_get(v_s_3497_, v___x_3498_);
v___x_3500_ = 114;
v___x_3501_ = lean_uint32_dec_eq(v___x_3499_, v___x_3500_);
if (v___x_3501_ == 0)
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; 
v___x_3502_ = lean_unsigned_to_nat(1u);
v___x_3503_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_3504_ = l_Lean_Syntax_decodeStrLitAux(v_s_3497_, v___x_3502_, v___x_3503_);
return v___x_3504_;
}
else
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3505_ = lean_unsigned_to_nat(1u);
v___x_3506_ = l_Lean_Syntax_decodeRawStrLitAux(v_s_3497_, v___x_3505_, v___x_3498_);
lean_dec_ref(v_s_3497_);
v___x_3507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
return v___x_3507_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object* v_stx_3508_){
_start:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = ((lean_object*)(l_Lean_Syntax_mkStrLit___closed__1));
v___x_3510_ = l_Lean_Syntax_isLit_x3f(v___x_3509_, v_stx_3508_);
if (lean_obj_tag(v___x_3510_) == 1)
{
lean_object* v_val_3511_; lean_object* v___x_3512_; 
v_val_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_val_3511_);
lean_dec_ref_known(v___x_3510_, 1);
v___x_3512_ = l_Lean_Syntax_decodeStrLit(v_val_3511_);
return v___x_3512_;
}
else
{
lean_object* v___x_3513_; 
lean_dec(v___x_3510_);
v___x_3513_ = lean_box(0);
return v___x_3513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f___boxed(lean_object* v_stx_3514_){
_start:
{
lean_object* v_res_3515_; 
v_res_3515_ = l_Lean_Syntax_isStrLit_x3f(v_stx_3514_);
lean_dec(v_stx_3514_);
return v_res_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit(lean_object* v_s_3516_){
_start:
{
lean_object* v___x_3517_; uint32_t v_c_3518_; uint32_t v___x_3519_; uint8_t v___x_3520_; 
v___x_3517_ = lean_unsigned_to_nat(1u);
v_c_3518_ = lean_string_utf8_get(v_s_3516_, v___x_3517_);
v___x_3519_ = 92;
v___x_3520_ = lean_uint32_dec_eq(v_c_3518_, v___x_3519_);
if (v___x_3520_ == 0)
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = lean_box_uint32(v_c_3518_);
v___x_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3522_, 0, v___x_3521_);
return v___x_3522_;
}
else
{
lean_object* v___x_3523_; lean_object* v___x_3524_; 
v___x_3523_ = lean_unsigned_to_nat(2u);
v___x_3524_ = l_Lean_Syntax_decodeQuotedChar(v_s_3516_, v___x_3523_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v___x_3525_; 
v___x_3525_ = lean_box(0);
return v___x_3525_;
}
else
{
lean_object* v_val_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3534_; 
v_val_3526_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3528_ = v___x_3524_;
v_isShared_3529_ = v_isSharedCheck_3534_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_val_3526_);
lean_dec(v___x_3524_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3534_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v_fst_3530_; lean_object* v___x_3532_; 
v_fst_3530_ = lean_ctor_get(v_val_3526_, 0);
lean_inc(v_fst_3530_);
lean_dec(v_val_3526_);
if (v_isShared_3529_ == 0)
{
lean_ctor_set(v___x_3528_, 0, v_fst_3530_);
v___x_3532_ = v___x_3528_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v_fst_3530_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit___boxed(lean_object* v_s_3535_){
_start:
{
lean_object* v_res_3536_; 
v_res_3536_ = l_Lean_Syntax_decodeCharLit(v_s_3535_);
lean_dec_ref(v_s_3535_);
return v_res_3536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object* v_stx_3537_){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; 
v___x_3538_ = ((lean_object*)(l_Lean_Syntax_mkCharLit___closed__1));
v___x_3539_ = l_Lean_Syntax_isLit_x3f(v___x_3538_, v_stx_3537_);
if (lean_obj_tag(v___x_3539_) == 1)
{
lean_object* v_val_3540_; lean_object* v___x_3541_; 
v_val_3540_ = lean_ctor_get(v___x_3539_, 0);
lean_inc(v_val_3540_);
lean_dec_ref_known(v___x_3539_, 1);
v___x_3541_ = l_Lean_Syntax_decodeCharLit(v_val_3540_);
lean_dec(v_val_3540_);
return v___x_3541_;
}
else
{
lean_object* v___x_3542_; 
lean_dec(v___x_3539_);
v___x_3542_ = lean_box(0);
return v___x_3542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f___boxed(lean_object* v_stx_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_Lean_Syntax_isCharLit_x3f(v_stx_3543_);
lean_dec(v_stx_3543_);
return v_res_3544_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0(uint32_t v___y_3545_){
_start:
{
uint32_t v___x_3567_; uint8_t v___x_3568_; 
v___x_3567_ = 65;
v___x_3568_ = lean_uint32_dec_le(v___x_3567_, v___y_3545_);
if (v___x_3568_ == 0)
{
goto v___jp_3562_;
}
else
{
uint32_t v___x_3569_; uint8_t v___x_3570_; 
v___x_3569_ = 90;
v___x_3570_ = lean_uint32_dec_le(v___y_3545_, v___x_3569_);
if (v___x_3570_ == 0)
{
goto v___jp_3562_;
}
else
{
return v___x_3570_;
}
}
v___jp_3546_:
{
uint32_t v___x_3547_; uint8_t v___x_3548_; 
v___x_3547_ = 95;
v___x_3548_ = lean_uint32_dec_eq(v___y_3545_, v___x_3547_);
if (v___x_3548_ == 0)
{
uint32_t v___x_3549_; uint8_t v___x_3550_; 
v___x_3549_ = 39;
v___x_3550_ = lean_uint32_dec_eq(v___y_3545_, v___x_3549_);
if (v___x_3550_ == 0)
{
uint32_t v___x_3551_; uint8_t v___x_3552_; 
v___x_3551_ = 33;
v___x_3552_ = lean_uint32_dec_eq(v___y_3545_, v___x_3551_);
if (v___x_3552_ == 0)
{
uint32_t v___x_3553_; uint8_t v___x_3554_; 
v___x_3553_ = 63;
v___x_3554_ = lean_uint32_dec_eq(v___y_3545_, v___x_3553_);
if (v___x_3554_ == 0)
{
uint8_t v___x_3555_; 
v___x_3555_ = l_Lean_isLetterLike(v___y_3545_);
if (v___x_3555_ == 0)
{
uint8_t v___x_3556_; 
v___x_3556_ = l_Lean_isSubScriptAlnum(v___y_3545_);
return v___x_3556_;
}
else
{
return v___x_3555_;
}
}
else
{
return v___x_3554_;
}
}
else
{
return v___x_3552_;
}
}
else
{
return v___x_3550_;
}
}
else
{
return v___x_3548_;
}
}
v___jp_3557_:
{
uint32_t v___x_3558_; uint8_t v___x_3559_; 
v___x_3558_ = 48;
v___x_3559_ = lean_uint32_dec_le(v___x_3558_, v___y_3545_);
if (v___x_3559_ == 0)
{
goto v___jp_3546_;
}
else
{
uint32_t v___x_3560_; uint8_t v___x_3561_; 
v___x_3560_ = 57;
v___x_3561_ = lean_uint32_dec_le(v___y_3545_, v___x_3560_);
if (v___x_3561_ == 0)
{
goto v___jp_3546_;
}
else
{
return v___x_3561_;
}
}
}
v___jp_3562_:
{
uint32_t v___x_3563_; uint8_t v___x_3564_; 
v___x_3563_ = 97;
v___x_3564_ = lean_uint32_dec_le(v___x_3563_, v___y_3545_);
if (v___x_3564_ == 0)
{
goto v___jp_3557_;
}
else
{
uint32_t v___x_3565_; uint8_t v___x_3566_; 
v___x_3565_ = 122;
v___x_3566_ = lean_uint32_dec_le(v___y_3545_, v___x_3565_);
if (v___x_3566_ == 0)
{
goto v___jp_3557_;
}
else
{
return v___x_3566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0___boxed(lean_object* v___y_3571_){
_start:
{
uint32_t v___y_957__boxed_3572_; uint8_t v_res_3573_; lean_object* v_r_3574_; 
v___y_957__boxed_3572_ = lean_unbox_uint32(v___y_3571_);
lean_dec(v___y_3571_);
v_res_3573_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0(v___y_957__boxed_3572_);
v_r_3574_ = lean_box(v_res_3573_);
return v_r_3574_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1(uint32_t v___x_3575_, uint32_t v___x_3576_, uint32_t v___y_3577_){
_start:
{
uint8_t v___x_3578_; 
v___x_3578_ = lean_uint32_dec_le(v___x_3575_, v___y_3577_);
if (v___x_3578_ == 0)
{
return v___x_3578_;
}
else
{
uint8_t v___x_3579_; 
v___x_3579_ = lean_uint32_dec_le(v___y_3577_, v___x_3576_);
return v___x_3579_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1___boxed(lean_object* v___x_3580_, lean_object* v___x_3581_, lean_object* v___y_3582_){
_start:
{
uint32_t v___x_1010__boxed_3583_; uint32_t v___x_1011__boxed_3584_; uint32_t v___y_1012__boxed_3585_; uint8_t v_res_3586_; lean_object* v_r_3587_; 
v___x_1010__boxed_3583_ = lean_unbox_uint32(v___x_3580_);
lean_dec(v___x_3580_);
v___x_1011__boxed_3584_ = lean_unbox_uint32(v___x_3581_);
lean_dec(v___x_3581_);
v___y_1012__boxed_3585_ = lean_unbox_uint32(v___y_3582_);
lean_dec(v___y_3582_);
v_res_3586_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1(v___x_1010__boxed_3583_, v___x_1011__boxed_3584_, v___y_1012__boxed_3585_);
v_r_3587_ = lean_box(v_res_3586_);
return v_r_3587_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2(uint8_t v___x_3588_, uint8_t v___x_3589_, uint32_t v_x_3590_){
_start:
{
uint32_t v___x_3591_; uint8_t v___x_3592_; 
v___x_3591_ = 187;
v___x_3592_ = lean_uint32_dec_eq(v_x_3590_, v___x_3591_);
if (v___x_3592_ == 0)
{
return v___x_3588_;
}
else
{
return v___x_3589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2___boxed(lean_object* v___x_3593_, lean_object* v___x_3594_, lean_object* v_x_3595_){
_start:
{
uint8_t v___x_1023__boxed_3596_; uint8_t v___x_1024__boxed_3597_; uint32_t v_x_1025__boxed_3598_; uint8_t v_res_3599_; lean_object* v_r_3600_; 
v___x_1023__boxed_3596_ = lean_unbox(v___x_3593_);
v___x_1024__boxed_3597_ = lean_unbox(v___x_3594_);
v_x_1025__boxed_3598_ = lean_unbox_uint32(v_x_3595_);
lean_dec(v_x_3595_);
v_res_3599_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2(v___x_1023__boxed_3596_, v___x_1024__boxed_3597_, v_x_1025__boxed_3598_);
v_r_3600_ = lean_box(v_res_3599_);
return v_r_3600_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_3602_; lean_object* v___x_3603_; 
v___x_3602_ = 48;
v___x_3603_ = lean_box_uint32(v___x_3602_);
return v___x_3603_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2(void){
_start:
{
uint32_t v___x_3604_; lean_object* v___x_3605_; 
v___x_3604_ = 57;
v___x_3605_ = lean_box_uint32(v___x_3604_);
return v___x_3605_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1(void){
_start:
{
lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___f_3608_; 
v___x_3606_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1;
v___x_3607_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2;
v___f_3608_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3608_, 0, v___x_3606_);
lean_closure_set(v___f_3608_, 1, v___x_3607_);
return v___f_3608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(lean_object* v_ss_3609_, lean_object* v_acc_3610_){
_start:
{
lean_object* v_ss_3612_; lean_object* v_acc_3613_; uint8_t v___x_3622_; 
lean_inc_ref(v_ss_3609_);
v___x_3622_ = lean_substring_isempty(v_ss_3609_);
if (v___x_3622_ == 0)
{
uint32_t v_curr_3623_; uint32_t v___x_3624_; uint8_t v___x_3625_; 
lean_inc_ref(v_ss_3609_);
v_curr_3623_ = lean_substring_front(v_ss_3609_);
v___x_3624_ = 171;
v___x_3625_ = lean_uint32_dec_eq(v_curr_3623_, v___x_3624_);
if (v___x_3625_ == 0)
{
lean_object* v___f_3626_; uint32_t v___x_3662_; uint8_t v___x_3663_; 
v___f_3626_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0));
v___x_3662_ = 65;
v___x_3663_ = lean_uint32_dec_le(v___x_3662_, v_curr_3623_);
if (v___x_3663_ == 0)
{
goto v___jp_3657_;
}
else
{
uint32_t v___x_3664_; uint8_t v___x_3665_; 
v___x_3664_ = 90;
v___x_3665_ = lean_uint32_dec_le(v_curr_3623_, v___x_3664_);
if (v___x_3665_ == 0)
{
goto v___jp_3657_;
}
else
{
goto v___jp_3627_;
}
}
v___jp_3627_:
{
lean_object* v_idPart_3628_; lean_object* v_startPos_3629_; lean_object* v_stopPos_3630_; lean_object* v_startPos_3631_; lean_object* v_stopPos_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
lean_inc_ref(v_ss_3609_);
v_idPart_3628_ = lean_substring_takewhile(v_ss_3609_, v___f_3626_);
v_startPos_3629_ = lean_ctor_get(v_idPart_3628_, 1);
v_stopPos_3630_ = lean_ctor_get(v_idPart_3628_, 2);
v_startPos_3631_ = lean_ctor_get(v_ss_3609_, 1);
v_stopPos_3632_ = lean_ctor_get(v_ss_3609_, 2);
v___x_3633_ = lean_nat_sub(v_stopPos_3630_, v_startPos_3629_);
v___x_3634_ = lean_nat_sub(v_stopPos_3632_, v_startPos_3631_);
v___x_3635_ = lean_substring_extract(v_ss_3609_, v___x_3633_, v___x_3634_);
v___x_3636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3636_, 0, v_idPart_3628_);
lean_ctor_set(v___x_3636_, 1, v_acc_3610_);
v_ss_3612_ = v___x_3635_;
v_acc_3613_ = v___x_3636_;
goto v___jp_3611_;
}
v___jp_3637_:
{
uint32_t v___x_3638_; uint8_t v___x_3639_; 
v___x_3638_ = 95;
v___x_3639_ = lean_uint32_dec_eq(v_curr_3623_, v___x_3638_);
if (v___x_3639_ == 0)
{
uint8_t v___x_3640_; 
v___x_3640_ = l_Lean_isLetterLike(v_curr_3623_);
if (v___x_3640_ == 0)
{
uint32_t v___x_3641_; uint8_t v___x_3642_; 
v___x_3641_ = 48;
v___x_3642_ = lean_uint32_dec_le(v___x_3641_, v_curr_3623_);
if (v___x_3642_ == 0)
{
lean_object* v___x_3643_; 
lean_dec(v_acc_3610_);
lean_dec_ref(v_ss_3609_);
v___x_3643_ = lean_box(0);
return v___x_3643_;
}
else
{
uint32_t v___x_3644_; uint8_t v___x_3645_; 
v___x_3644_ = 57;
v___x_3645_ = lean_uint32_dec_le(v_curr_3623_, v___x_3644_);
if (v___x_3645_ == 0)
{
lean_object* v___x_3646_; 
lean_dec(v_acc_3610_);
lean_dec_ref(v_ss_3609_);
v___x_3646_ = lean_box(0);
return v___x_3646_;
}
else
{
lean_object* v___f_3647_; lean_object* v_idPart_3648_; lean_object* v_startPos_3649_; lean_object* v_stopPos_3650_; lean_object* v_startPos_3651_; lean_object* v_stopPos_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___f_3647_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1, &l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1);
lean_inc_ref(v_ss_3609_);
v_idPart_3648_ = lean_substring_takewhile(v_ss_3609_, v___f_3647_);
v_startPos_3649_ = lean_ctor_get(v_idPart_3648_, 1);
v_stopPos_3650_ = lean_ctor_get(v_idPart_3648_, 2);
v_startPos_3651_ = lean_ctor_get(v_ss_3609_, 1);
v_stopPos_3652_ = lean_ctor_get(v_ss_3609_, 2);
v___x_3653_ = lean_nat_sub(v_stopPos_3650_, v_startPos_3649_);
v___x_3654_ = lean_nat_sub(v_stopPos_3652_, v_startPos_3651_);
v___x_3655_ = lean_substring_extract(v_ss_3609_, v___x_3653_, v___x_3654_);
v___x_3656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3656_, 0, v_idPart_3648_);
lean_ctor_set(v___x_3656_, 1, v_acc_3610_);
v_ss_3612_ = v___x_3655_;
v_acc_3613_ = v___x_3656_;
goto v___jp_3611_;
}
}
}
else
{
goto v___jp_3627_;
}
}
else
{
goto v___jp_3627_;
}
}
v___jp_3657_:
{
uint32_t v___x_3658_; uint8_t v___x_3659_; 
v___x_3658_ = 97;
v___x_3659_ = lean_uint32_dec_le(v___x_3658_, v_curr_3623_);
if (v___x_3659_ == 0)
{
goto v___jp_3637_;
}
else
{
uint32_t v___x_3660_; uint8_t v___x_3661_; 
v___x_3660_ = 122;
v___x_3661_ = lean_uint32_dec_le(v_curr_3623_, v___x_3660_);
if (v___x_3661_ == 0)
{
goto v___jp_3637_;
}
else
{
goto v___jp_3627_;
}
}
}
}
else
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___f_3668_; lean_object* v_escapedPart_3669_; lean_object* v_str_3670_; lean_object* v_startPos_3671_; lean_object* v_stopPos_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3692_; 
v___x_3666_ = lean_box(v___x_3625_);
v___x_3667_ = lean_box(v___x_3622_);
v___f_3668_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2___boxed), 3, 2);
lean_closure_set(v___f_3668_, 0, v___x_3666_);
lean_closure_set(v___f_3668_, 1, v___x_3667_);
lean_inc_ref(v_ss_3609_);
v_escapedPart_3669_ = lean_substring_takewhile(v_ss_3609_, v___f_3668_);
v_str_3670_ = lean_ctor_get(v_escapedPart_3669_, 0);
v_startPos_3671_ = lean_ctor_get(v_escapedPart_3669_, 1);
v_stopPos_3672_ = lean_ctor_get(v_escapedPart_3669_, 2);
v_isSharedCheck_3692_ = !lean_is_exclusive(v_escapedPart_3669_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3674_ = v_escapedPart_3669_;
v_isShared_3675_ = v_isSharedCheck_3692_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_stopPos_3672_);
lean_inc(v_startPos_3671_);
lean_inc(v_str_3670_);
lean_dec(v_escapedPart_3669_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3692_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v_startPos_3676_; lean_object* v_stopPos_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v_escapedPart_3681_; 
v_startPos_3676_ = lean_ctor_get(v_ss_3609_, 1);
v_stopPos_3677_ = lean_ctor_get(v_ss_3609_, 2);
v___x_3678_ = lean_string_utf8_next(v_str_3670_, v_stopPos_3672_);
lean_dec(v_stopPos_3672_);
lean_inc(v_stopPos_3677_);
v___x_3679_ = lean_string_pos_min(v_stopPos_3677_, v___x_3678_);
lean_inc(v___x_3679_);
lean_inc(v_startPos_3671_);
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 2, v___x_3679_);
v_escapedPart_3681_ = v___x_3674_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_str_3670_);
lean_ctor_set(v_reuseFailAlloc_3691_, 1, v_startPos_3671_);
lean_ctor_set(v_reuseFailAlloc_3691_, 2, v___x_3679_);
v_escapedPart_3681_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3680_;
}
v_reusejp_3680_:
{
lean_object* v___x_3682_; lean_object* v___x_3683_; uint32_t v___x_3684_; uint32_t v___x_3685_; uint8_t v___x_3686_; 
v___x_3682_ = lean_nat_sub(v___x_3679_, v_startPos_3671_);
lean_dec(v_startPos_3671_);
lean_dec(v___x_3679_);
lean_inc(v___x_3682_);
lean_inc_ref_n(v_escapedPart_3681_, 2);
v___x_3683_ = lean_substring_prev(v_escapedPart_3681_, v___x_3682_);
v___x_3684_ = lean_substring_get(v_escapedPart_3681_, v___x_3683_);
v___x_3685_ = 187;
v___x_3686_ = lean_uint32_dec_eq(v___x_3684_, v___x_3685_);
if (v___x_3686_ == 0)
{
lean_object* v___x_3687_; 
lean_dec(v___x_3682_);
lean_dec_ref(v_escapedPart_3681_);
lean_dec(v_acc_3610_);
lean_dec_ref(v_ss_3609_);
v___x_3687_ = lean_box(0);
return v___x_3687_;
}
else
{
lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3688_ = lean_nat_sub(v_stopPos_3677_, v_startPos_3676_);
v___x_3689_ = lean_substring_extract(v_ss_3609_, v___x_3682_, v___x_3688_);
v___x_3690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3690_, 0, v_escapedPart_3681_);
lean_ctor_set(v___x_3690_, 1, v_acc_3610_);
v_ss_3612_ = v___x_3689_;
v_acc_3613_ = v___x_3690_;
goto v___jp_3611_;
}
}
}
}
}
else
{
lean_object* v___x_3693_; 
lean_dec(v_acc_3610_);
lean_dec_ref(v_ss_3609_);
v___x_3693_ = lean_box(0);
return v___x_3693_;
}
v___jp_3611_:
{
uint32_t v___x_3614_; uint32_t v___x_3615_; uint8_t v___x_3616_; 
lean_inc_ref(v_ss_3612_);
v___x_3614_ = lean_substring_front(v_ss_3612_);
v___x_3615_ = 46;
v___x_3616_ = lean_uint32_dec_eq(v___x_3614_, v___x_3615_);
if (v___x_3616_ == 0)
{
uint8_t v___x_3617_; 
v___x_3617_ = lean_substring_isempty(v_ss_3612_);
if (v___x_3617_ == 0)
{
lean_object* v___x_3618_; 
lean_dec(v_acc_3613_);
v___x_3618_ = lean_box(0);
return v___x_3618_;
}
else
{
return v_acc_3613_;
}
}
else
{
lean_object* v___x_3619_; lean_object* v___x_3620_; 
v___x_3619_ = lean_unsigned_to_nat(1u);
v___x_3620_ = lean_substring_drop(v_ss_3612_, v___x_3619_);
v_ss_3609_ = v___x_3620_;
v_acc_3610_ = v_acc_3613_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_splitNameLit(lean_object* v_ss_3694_){
_start:
{
lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; 
v___x_3695_ = lean_box(0);
v___x_3696_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(v_ss_3694_, v___x_3695_);
v___x_3697_ = l_List_reverse___redArg(v___x_3696_);
return v___x_3697_;
}
}
static lean_object* _init_l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3(void){
_start:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3701_ = ((lean_object*)(l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2));
v___x_3702_ = lean_unsigned_to_nat(10u);
v___x_3703_ = lean_unsigned_to_nat(1257u);
v___x_3704_ = ((lean_object*)(l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1));
v___x_3705_ = ((lean_object*)(l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0));
v___x_3706_ = l_mkPanicMessageWithDecl(v___x_3705_, v___x_3704_, v___x_3703_, v___x_3702_, v___x_3701_);
return v___x_3706_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0(lean_object* v_init_3707_, lean_object* v_x_3708_){
_start:
{
if (lean_obj_tag(v_x_3708_) == 0)
{
lean_inc(v_init_3707_);
return v_init_3707_;
}
else
{
lean_object* v_head_3709_; lean_object* v_tail_3710_; lean_object* v___x_3711_; lean_object* v_comp_3712_; uint32_t v___x_3713_; uint32_t v___x_3714_; uint8_t v___x_3715_; 
v_head_3709_ = lean_ctor_get(v_x_3708_, 0);
lean_inc(v_head_3709_);
v_tail_3710_ = lean_ctor_get(v_x_3708_, 1);
lean_inc(v_tail_3710_);
lean_dec_ref_known(v_x_3708_, 2);
v___x_3711_ = l_List_foldr___at___00Substring_Raw_toName_spec__0(v_init_3707_, v_tail_3710_);
v_comp_3712_ = lean_substring_tostring(v_head_3709_);
lean_inc_ref(v_comp_3712_);
v___x_3713_ = lean_string_front(v_comp_3712_);
v___x_3714_ = 171;
v___x_3715_ = lean_uint32_dec_eq(v___x_3713_, v___x_3714_);
if (v___x_3715_ == 0)
{
uint32_t v___x_3716_; uint8_t v___x_3717_; 
v___x_3716_ = 48;
v___x_3717_ = lean_uint32_dec_le(v___x_3716_, v___x_3713_);
if (v___x_3717_ == 0)
{
lean_object* v___x_3718_; 
v___x_3718_ = l_Lean_Name_str___override(v___x_3711_, v_comp_3712_);
return v___x_3718_;
}
else
{
uint32_t v___x_3719_; uint8_t v___x_3720_; 
v___x_3719_ = 57;
v___x_3720_ = lean_uint32_dec_le(v___x_3713_, v___x_3719_);
if (v___x_3720_ == 0)
{
lean_object* v___x_3721_; 
v___x_3721_ = l_Lean_Name_str___override(v___x_3711_, v_comp_3712_);
return v___x_3721_;
}
else
{
lean_object* v___x_3722_; 
v___x_3722_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_comp_3712_);
lean_dec_ref(v_comp_3712_);
if (lean_obj_tag(v___x_3722_) == 1)
{
lean_object* v_val_3723_; lean_object* v___x_3724_; 
v_val_3723_ = lean_ctor_get(v___x_3722_, 0);
lean_inc(v_val_3723_);
lean_dec_ref_known(v___x_3722_, 1);
v___x_3724_ = l_Lean_Name_num___override(v___x_3711_, v_val_3723_);
return v___x_3724_;
}
else
{
lean_object* v___x_3725_; lean_object* v___x_3726_; 
lean_dec(v___x_3722_);
lean_dec(v___x_3711_);
v___x_3725_ = lean_obj_once(&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3, &l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3_once, _init_l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3);
v___x_3726_ = l_panic___at___00__private_Init_Prelude_0__Lean_assembleParts_spec__0(v___x_3725_);
return v___x_3726_;
}
}
}
}
else
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; 
v___x_3727_ = lean_unsigned_to_nat(1u);
v___x_3728_ = lean_string_drop(v_comp_3712_, v___x_3727_);
v___x_3729_ = lean_string_dropright(v___x_3728_, v___x_3727_);
v___x_3730_ = l_Lean_Name_str___override(v___x_3711_, v___x_3729_);
return v___x_3730_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___boxed(lean_object* v_init_3731_, lean_object* v_x_3732_){
_start:
{
lean_object* v_res_3733_; 
v_res_3733_ = l_List_foldr___at___00Substring_Raw_toName_spec__0(v_init_3731_, v_x_3732_);
lean_dec(v_init_3731_);
return v_res_3733_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_toName(lean_object* v_s_3734_){
_start:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3735_ = lean_box(0);
v___x_3736_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(v_s_3734_, v___x_3735_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v___x_3737_; 
v___x_3737_ = lean_box(0);
return v___x_3737_;
}
else
{
lean_object* v___x_3738_; lean_object* v___x_3739_; 
v___x_3738_ = lean_box(0);
v___x_3739_ = l_List_foldr___at___00Substring_Raw_toName_spec__0(v___x_3738_, v___x_3736_);
return v___x_3739_;
}
}
}
LEAN_EXPORT lean_object* l_String_toName(lean_object* v_s_3740_){
_start:
{
lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3741_ = lean_unsigned_to_nat(0u);
v___x_3742_ = lean_string_utf8_byte_size(v_s_3740_);
v___x_3743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3743_, 0, v_s_3740_);
lean_ctor_set(v___x_3743_, 1, v___x_3741_);
lean_ctor_set(v___x_3743_, 2, v___x_3742_);
v___x_3744_ = l_Substring_Raw_toName(v___x_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNameLit(lean_object* v_s_3745_){
_start:
{
lean_object* v___x_3746_; uint32_t v___x_3747_; uint32_t v___x_3748_; uint8_t v___x_3749_; 
v___x_3746_ = lean_unsigned_to_nat(0u);
v___x_3747_ = lean_string_utf8_get(v_s_3745_, v___x_3746_);
v___x_3748_ = 96;
v___x_3749_ = lean_uint32_dec_eq(v___x_3747_, v___x_3748_);
if (v___x_3749_ == 0)
{
lean_object* v___x_3750_; 
lean_dec_ref(v_s_3745_);
v___x_3750_ = lean_box(0);
return v___x_3750_;
}
else
{
lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3751_ = lean_string_utf8_byte_size(v_s_3745_);
v___x_3752_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3752_, 0, v_s_3745_);
lean_ctor_set(v___x_3752_, 1, v___x_3746_);
lean_ctor_set(v___x_3752_, 2, v___x_3751_);
v___x_3753_ = lean_unsigned_to_nat(1u);
v___x_3754_ = lean_substring_drop(v___x_3752_, v___x_3753_);
v___x_3755_ = l_Substring_Raw_toName(v___x_3754_);
if (lean_obj_tag(v___x_3755_) == 0)
{
lean_object* v___x_3756_; 
v___x_3756_ = lean_box(0);
return v___x_3756_;
}
else
{
lean_object* v___x_3757_; 
v___x_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3757_, 0, v___x_3755_);
return v___x_3757_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object* v_stx_3758_){
_start:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3759_ = ((lean_object*)(l_Lean_Syntax_mkNameLit___closed__1));
v___x_3760_ = l_Lean_Syntax_isLit_x3f(v___x_3759_, v_stx_3758_);
if (lean_obj_tag(v___x_3760_) == 1)
{
lean_object* v_val_3761_; lean_object* v___x_3762_; 
v_val_3761_ = lean_ctor_get(v___x_3760_, 0);
lean_inc(v_val_3761_);
lean_dec_ref_known(v___x_3760_, 1);
v___x_3762_ = l_Lean_Syntax_decodeNameLit(v_val_3761_);
return v___x_3762_;
}
else
{
lean_object* v___x_3763_; 
lean_dec(v___x_3760_);
v___x_3763_ = lean_box(0);
return v___x_3763_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f___boxed(lean_object* v_stx_3764_){
_start:
{
lean_object* v_res_3765_; 
v_res_3765_ = l_Lean_Syntax_isNameLit_x3f(v_stx_3764_);
lean_dec(v_stx_3764_);
return v_res_3765_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_hasArgs(lean_object* v_x_3766_){
_start:
{
if (lean_obj_tag(v_x_3766_) == 1)
{
lean_object* v_args_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; uint8_t v___x_3770_; 
v_args_3767_ = lean_ctor_get(v_x_3766_, 2);
v___x_3768_ = lean_unsigned_to_nat(0u);
v___x_3769_ = lean_array_get_size(v_args_3767_);
v___x_3770_ = lean_nat_dec_lt(v___x_3768_, v___x_3769_);
return v___x_3770_;
}
else
{
uint8_t v___x_3771_; 
v___x_3771_ = 0;
return v___x_3771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_hasArgs___boxed(lean_object* v_x_3772_){
_start:
{
uint8_t v_res_3773_; lean_object* v_r_3774_; 
v_res_3773_ = l_Lean_Syntax_hasArgs(v_x_3772_);
lean_dec(v_x_3772_);
v_r_3774_ = lean_box(v_res_3773_);
return v_r_3774_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAtom(lean_object* v_x_3775_){
_start:
{
if (lean_obj_tag(v_x_3775_) == 2)
{
uint8_t v___x_3776_; 
v___x_3776_ = 1;
return v___x_3776_;
}
else
{
uint8_t v___x_3777_; 
v___x_3777_ = 0;
return v___x_3777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAtom___boxed(lean_object* v_x_3778_){
_start:
{
uint8_t v_res_3779_; lean_object* v_r_3780_; 
v_res_3779_ = l_Lean_Syntax_isAtom(v_x_3778_);
lean_dec(v_x_3778_);
v_r_3780_ = lean_box(v_res_3779_);
return v_r_3780_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isToken(lean_object* v_token_3781_, lean_object* v_x_3782_){
_start:
{
if (lean_obj_tag(v_x_3782_) == 2)
{
lean_object* v_val_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; uint8_t v___x_3786_; 
v_val_3783_ = lean_ctor_get(v_x_3782_, 1);
lean_inc_ref(v_val_3783_);
lean_dec_ref_known(v_x_3782_, 2);
v___x_3784_ = lean_string_trim(v_val_3783_);
v___x_3785_ = lean_string_trim(v_token_3781_);
v___x_3786_ = lean_string_dec_eq(v___x_3784_, v___x_3785_);
lean_dec_ref(v___x_3785_);
lean_dec_ref(v___x_3784_);
return v___x_3786_;
}
else
{
uint8_t v___x_3787_; 
lean_dec(v_x_3782_);
lean_dec_ref(v_token_3781_);
v___x_3787_ = 0;
return v___x_3787_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isToken___boxed(lean_object* v_token_3788_, lean_object* v_x_3789_){
_start:
{
uint8_t v_res_3790_; lean_object* v_r_3791_; 
v_res_3790_ = l_Lean_Syntax_isToken(v_token_3788_, v_x_3789_);
v_r_3791_ = lean_box(v_res_3790_);
return v_r_3791_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isNone(lean_object* v_stx_3792_){
_start:
{
switch(lean_obj_tag(v_stx_3792_))
{
case 1:
{
lean_object* v_kind_3793_; lean_object* v_args_3794_; lean_object* v___x_3795_; uint8_t v___x_3796_; 
v_kind_3793_ = lean_ctor_get(v_stx_3792_, 1);
v_args_3794_ = lean_ctor_get(v_stx_3792_, 2);
v___x_3795_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_3796_ = lean_name_eq(v_kind_3793_, v___x_3795_);
if (v___x_3796_ == 0)
{
return v___x_3796_;
}
else
{
lean_object* v___x_3797_; lean_object* v___x_3798_; uint8_t v___x_3799_; 
v___x_3797_ = lean_array_get_size(v_args_3794_);
v___x_3798_ = lean_unsigned_to_nat(0u);
v___x_3799_ = lean_nat_dec_eq(v___x_3797_, v___x_3798_);
return v___x_3799_;
}
}
case 0:
{
uint8_t v___x_3800_; 
v___x_3800_ = 1;
return v___x_3800_;
}
default: 
{
uint8_t v___x_3801_; 
v___x_3801_ = 0;
return v___x_3801_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNone___boxed(lean_object* v_stx_3802_){
_start:
{
uint8_t v_res_3803_; lean_object* v_r_3804_; 
v_res_3803_ = l_Lean_Syntax_isNone(v_stx_3802_);
lean_dec(v_stx_3802_);
v_r_3804_ = lean_box(v_res_3803_);
return v_r_3804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f(lean_object* v_stx_3805_){
_start:
{
lean_object* v___x_3806_; 
v___x_3806_ = l_Lean_Syntax_getOptional_x3f(v_stx_3805_);
if (lean_obj_tag(v___x_3806_) == 0)
{
lean_object* v___x_3807_; 
v___x_3807_ = lean_box(0);
return v___x_3807_;
}
else
{
lean_object* v_val_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3816_; 
v_val_3808_ = lean_ctor_get(v___x_3806_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3806_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3810_ = v___x_3806_;
v_isShared_3811_ = v_isSharedCheck_3816_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_val_3808_);
lean_dec(v___x_3806_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3816_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3812_; lean_object* v___x_3814_; 
v___x_3812_ = l_Lean_Syntax_getId(v_val_3808_);
lean_dec(v_val_3808_);
if (v_isShared_3811_ == 0)
{
lean_ctor_set(v___x_3810_, 0, v___x_3812_);
v___x_3814_ = v___x_3810_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v___x_3812_);
v___x_3814_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
return v___x_3814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f___boxed(lean_object* v_stx_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l_Lean_Syntax_getOptionalIdent_x3f(v_stx_3817_);
lean_dec(v_stx_3817_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_findAux(lean_object* v_p_3819_, lean_object* v_x_3820_){
_start:
{
if (lean_obj_tag(v_x_3820_) == 1)
{
lean_object* v_args_3821_; lean_object* v___x_3822_; uint8_t v___x_3823_; 
v_args_3821_ = lean_ctor_get(v_x_3820_, 2);
lean_inc_ref(v_p_3819_);
lean_inc_ref(v_x_3820_);
v___x_3822_ = lean_apply_1(v_p_3819_, v_x_3820_);
v___x_3823_ = lean_unbox(v___x_3822_);
if (v___x_3823_ == 0)
{
lean_object* v___x_3824_; lean_object* v___x_3825_; size_t v_sz_3826_; size_t v___x_3827_; lean_object* v___x_3828_; lean_object* v_fst_3829_; 
lean_inc_ref(v_args_3821_);
lean_dec_ref_known(v_x_3820_, 3);
v___x_3824_ = lean_box(0);
v___x_3825_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v_sz_3826_ = lean_array_size(v_args_3821_);
v___x_3827_ = ((size_t)0ULL);
v___x_3828_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(v_p_3819_, v_args_3821_, v_sz_3826_, v___x_3827_, v___x_3825_);
lean_dec_ref(v_args_3821_);
v_fst_3829_ = lean_ctor_get(v___x_3828_, 0);
lean_inc(v_fst_3829_);
lean_dec_ref(v___x_3828_);
if (lean_obj_tag(v_fst_3829_) == 0)
{
return v___x_3824_;
}
else
{
lean_object* v_val_3830_; 
v_val_3830_ = lean_ctor_get(v_fst_3829_, 0);
lean_inc(v_val_3830_);
lean_dec_ref_known(v_fst_3829_, 1);
return v_val_3830_;
}
}
else
{
lean_object* v___x_3831_; 
lean_dec_ref(v_p_3819_);
v___x_3831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3831_, 0, v_x_3820_);
return v___x_3831_;
}
}
else
{
lean_object* v___x_3832_; uint8_t v___x_3833_; 
lean_inc(v_x_3820_);
v___x_3832_ = lean_apply_1(v_p_3819_, v_x_3820_);
v___x_3833_ = lean_unbox(v___x_3832_);
if (v___x_3833_ == 0)
{
lean_object* v___x_3834_; 
lean_dec(v_x_3820_);
v___x_3834_ = lean_box(0);
return v___x_3834_;
}
else
{
lean_object* v___x_3835_; 
v___x_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3835_, 0, v_x_3820_);
return v___x_3835_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(lean_object* v_p_3836_, lean_object* v_as_3837_, size_t v_sz_3838_, size_t v_i_3839_, lean_object* v_b_3840_){
_start:
{
uint8_t v___x_3841_; 
v___x_3841_ = lean_usize_dec_lt(v_i_3839_, v_sz_3838_);
if (v___x_3841_ == 0)
{
lean_dec_ref(v_p_3836_);
lean_inc_ref(v_b_3840_);
return v_b_3840_;
}
else
{
lean_object* v___x_3842_; lean_object* v_a_3843_; lean_object* v___x_3844_; 
v___x_3842_ = lean_box(0);
v_a_3843_ = lean_array_uget_borrowed(v_as_3837_, v_i_3839_);
lean_inc(v_a_3843_);
lean_inc_ref(v_p_3836_);
v___x_3844_ = l_Lean_Syntax_findAux(v_p_3836_, v_a_3843_);
if (lean_obj_tag(v___x_3844_) == 1)
{
lean_object* v___x_3845_; lean_object* v___x_3846_; 
lean_dec_ref(v_p_3836_);
v___x_3845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3844_);
v___x_3846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
lean_ctor_set(v___x_3846_, 1, v___x_3842_);
return v___x_3846_;
}
else
{
lean_object* v___x_3847_; size_t v___x_3848_; size_t v___x_3849_; 
lean_dec(v___x_3844_);
v___x_3847_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v___x_3848_ = ((size_t)1ULL);
v___x_3849_ = lean_usize_add(v_i_3839_, v___x_3848_);
v_i_3839_ = v___x_3849_;
v_b_3840_ = v___x_3847_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0___boxed(lean_object* v_p_3851_, lean_object* v_as_3852_, lean_object* v_sz_3853_, lean_object* v_i_3854_, lean_object* v_b_3855_){
_start:
{
size_t v_sz_boxed_3856_; size_t v_i_boxed_3857_; lean_object* v_res_3858_; 
v_sz_boxed_3856_ = lean_unbox_usize(v_sz_3853_);
lean_dec(v_sz_3853_);
v_i_boxed_3857_ = lean_unbox_usize(v_i_3854_);
lean_dec(v_i_3854_);
v_res_3858_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(v_p_3851_, v_as_3852_, v_sz_boxed_3856_, v_i_boxed_3857_, v_b_3855_);
lean_dec_ref(v_b_3855_);
lean_dec_ref(v_as_3852_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_find_x3f(lean_object* v_stx_3859_, lean_object* v_p_3860_){
_start:
{
lean_object* v___x_3861_; 
v___x_3861_ = l_Lean_Syntax_findAux(v_p_3860_, v_stx_3859_);
return v___x_3861_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat(lean_object* v_s_3862_){
_start:
{
lean_object* v___x_3863_; 
v___x_3863_ = l_Lean_Syntax_isNatLit_x3f(v_s_3862_);
if (lean_obj_tag(v___x_3863_) == 0)
{
lean_object* v___x_3864_; 
v___x_3864_ = lean_unsigned_to_nat(0u);
return v___x_3864_;
}
else
{
lean_object* v_val_3865_; 
v_val_3865_ = lean_ctor_get(v___x_3863_, 0);
lean_inc(v_val_3865_);
lean_dec_ref_known(v___x_3863_, 1);
return v_val_3865_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat___boxed(lean_object* v_s_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_Lean_TSyntax_getNat(v_s_3866_);
lean_dec(v_s_3866_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(lean_object* v_stx_3871_){
_start:
{
lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3872_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1));
v___x_3873_ = l_Lean_Syntax_isLit_x3f(v___x_3872_, v_stx_3871_);
if (lean_obj_tag(v___x_3873_) == 1)
{
lean_object* v_val_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v_val_3874_ = lean_ctor_get(v___x_3873_, 0);
lean_inc(v_val_3874_);
lean_dec_ref_known(v___x_3873_, 1);
v___x_3875_ = lean_unsigned_to_nat(0u);
v___x_3876_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(v_val_3874_, v___x_3875_, v___x_3875_);
lean_dec(v_val_3874_);
return v___x_3876_;
}
else
{
lean_object* v___x_3877_; 
lean_dec(v___x_3873_);
v___x_3877_ = lean_box(0);
return v___x_3877_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___boxed(lean_object* v_stx_3878_){
_start:
{
lean_object* v_res_3879_; 
v_res_3879_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(v_stx_3878_);
lean_dec(v_stx_3878_);
return v_res_3879_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal(lean_object* v_s_3880_){
_start:
{
lean_object* v___x_3881_; 
v___x_3881_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(v_s_3880_);
if (lean_obj_tag(v___x_3881_) == 0)
{
lean_object* v___x_3882_; 
v___x_3882_ = lean_unsigned_to_nat(0u);
return v___x_3882_;
}
else
{
lean_object* v_val_3883_; 
v_val_3883_ = lean_ctor_get(v___x_3881_, 0);
lean_inc(v_val_3883_);
lean_dec_ref_known(v___x_3881_, 1);
return v_val_3883_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal___boxed(lean_object* v_s_3884_){
_start:
{
lean_object* v_res_3885_; 
v_res_3885_ = l_Lean_TSyntax_getHexNumVal(v_s_3884_);
lean_dec(v_s_3884_);
return v_res_3885_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(lean_object* v_s_3886_, lean_object* v_p_3887_, lean_object* v_n_3888_){
_start:
{
uint8_t v___x_3889_; 
v___x_3889_ = lean_string_utf8_at_end(v_s_3886_, v_p_3887_);
if (v___x_3889_ == 0)
{
lean_object* v___x_3890_; uint32_t v___x_3891_; uint32_t v___x_3892_; uint8_t v___x_3893_; 
v___x_3890_ = lean_string_utf8_next(v_s_3886_, v_p_3887_);
v___x_3891_ = lean_string_utf8_get(v_s_3886_, v_p_3887_);
lean_dec(v_p_3887_);
v___x_3892_ = 95;
v___x_3893_ = lean_uint32_dec_eq(v___x_3891_, v___x_3892_);
if (v___x_3893_ == 0)
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = lean_unsigned_to_nat(1u);
v___x_3895_ = lean_nat_add(v_n_3888_, v___x_3894_);
lean_dec(v_n_3888_);
v_p_3887_ = v___x_3890_;
v_n_3888_ = v___x_3895_;
goto _start;
}
else
{
v_p_3887_ = v___x_3890_;
goto _start;
}
}
else
{
lean_dec(v_p_3887_);
return v_n_3888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go___boxed(lean_object* v_s_3898_, lean_object* v_p_3899_, lean_object* v_n_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(v_s_3898_, v_p_3899_, v_n_3900_);
lean_dec_ref(v_s_3898_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize(lean_object* v_s_3902_){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3903_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1));
v___x_3904_ = l_Lean_Syntax_isLit_x3f(v___x_3903_, v_s_3902_);
if (lean_obj_tag(v___x_3904_) == 1)
{
lean_object* v_val_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; 
v_val_3905_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_val_3905_);
lean_dec_ref_known(v___x_3904_, 1);
v___x_3906_ = lean_unsigned_to_nat(0u);
v___x_3907_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(v_val_3905_, v___x_3906_, v___x_3906_);
lean_dec(v_val_3905_);
return v___x_3907_;
}
else
{
lean_object* v___x_3908_; 
lean_dec(v___x_3904_);
v___x_3908_ = lean_unsigned_to_nat(0u);
return v___x_3908_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize___boxed(lean_object* v_s_3909_){
_start:
{
lean_object* v_res_3910_; 
v_res_3910_ = l_Lean_TSyntax_getHexNumSize(v_s_3909_);
lean_dec(v_s_3909_);
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId(lean_object* v_s_3911_){
_start:
{
lean_object* v___x_3912_; 
v___x_3912_ = l_Lean_Syntax_getId(v_s_3911_);
return v___x_3912_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId___boxed(lean_object* v_s_3913_){
_start:
{
lean_object* v_res_3914_; 
v_res_3914_ = l_Lean_TSyntax_getId(v_s_3913_);
lean_dec(v_s_3913_);
return v_res_3914_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific(lean_object* v_s_3922_){
_start:
{
lean_object* v___x_3923_; 
v___x_3923_ = l_Lean_Syntax_isScientificLit_x3f(v_s_3922_);
if (lean_obj_tag(v___x_3923_) == 0)
{
lean_object* v___x_3924_; 
v___x_3924_ = ((lean_object*)(l_Lean_TSyntax_getScientific___closed__1));
return v___x_3924_;
}
else
{
lean_object* v_val_3925_; 
v_val_3925_ = lean_ctor_get(v___x_3923_, 0);
lean_inc(v_val_3925_);
lean_dec_ref_known(v___x_3923_, 1);
return v_val_3925_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific___boxed(lean_object* v_s_3926_){
_start:
{
lean_object* v_res_3927_; 
v_res_3927_ = l_Lean_TSyntax_getScientific(v_s_3926_);
lean_dec(v_s_3926_);
return v_res_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString(lean_object* v_s_3928_){
_start:
{
lean_object* v___x_3929_; 
v___x_3929_ = l_Lean_Syntax_isStrLit_x3f(v_s_3928_);
if (lean_obj_tag(v___x_3929_) == 0)
{
lean_object* v___x_3930_; 
v___x_3930_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_3930_;
}
else
{
lean_object* v_val_3931_; 
v_val_3931_ = lean_ctor_get(v___x_3929_, 0);
lean_inc(v_val_3931_);
lean_dec_ref_known(v___x_3929_, 1);
return v_val_3931_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString___boxed(lean_object* v_s_3932_){
_start:
{
lean_object* v_res_3933_; 
v_res_3933_ = l_Lean_TSyntax_getString(v_s_3932_);
lean_dec(v_s_3932_);
return v_res_3933_;
}
}
LEAN_EXPORT uint32_t l_Lean_TSyntax_getChar(lean_object* v_s_3934_){
_start:
{
lean_object* v___x_3935_; 
v___x_3935_ = l_Lean_Syntax_isCharLit_x3f(v_s_3934_);
if (lean_obj_tag(v___x_3935_) == 0)
{
uint32_t v___x_3936_; 
v___x_3936_ = 65;
return v___x_3936_;
}
else
{
lean_object* v_val_3937_; uint32_t v___x_3938_; 
v_val_3937_ = lean_ctor_get(v___x_3935_, 0);
lean_inc(v_val_3937_);
lean_dec_ref_known(v___x_3935_, 1);
v___x_3938_ = lean_unbox_uint32(v_val_3937_);
lean_dec(v_val_3937_);
return v___x_3938_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getChar___boxed(lean_object* v_s_3939_){
_start:
{
uint32_t v_res_3940_; lean_object* v_r_3941_; 
v_res_3940_ = l_Lean_TSyntax_getChar(v_s_3939_);
lean_dec(v_s_3939_);
v_r_3941_ = lean_box_uint32(v_res_3940_);
return v_r_3941_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName(lean_object* v_s_3942_){
_start:
{
lean_object* v___x_3943_; 
v___x_3943_ = l_Lean_Syntax_isNameLit_x3f(v_s_3942_);
if (lean_obj_tag(v___x_3943_) == 0)
{
lean_object* v___x_3944_; 
v___x_3944_ = lean_box(0);
return v___x_3944_;
}
else
{
lean_object* v_val_3945_; 
v_val_3945_ = lean_ctor_get(v___x_3943_, 0);
lean_inc(v_val_3945_);
lean_dec_ref_known(v___x_3943_, 1);
return v_val_3945_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName___boxed(lean_object* v_s_3946_){
_start:
{
lean_object* v_res_3947_; 
v_res_3947_ = l_Lean_TSyntax_getName(v_s_3946_);
lean_dec(v_s_3946_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object* v_s_3948_){
_start:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v___x_3949_ = lean_unsigned_to_nat(0u);
v___x_3950_ = l_Lean_Syntax_getArg(v_s_3948_, v___x_3949_);
v___x_3951_ = l_Lean_Syntax_getId(v___x_3950_);
lean_dec(v___x_3950_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo___boxed(lean_object* v_s_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Lean_TSyntax_getHygieneInfo(v_s_3952_);
lean_dec(v_s_3952_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0(lean_object* v_sep_3954_, lean_object* v_a_3955_){
_start:
{
lean_object* v___x_3956_; 
v___x_3956_ = l_Lean_Syntax_SepArray_ofElems(v_sep_3954_, v_a_3955_);
return v___x_3956_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed(lean_object* v_sep_3957_, lean_object* v_a_3958_){
_start:
{
lean_object* v_res_3959_; 
v_res_3959_ = l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0(v_sep_3957_, v_a_3958_);
lean_dec_ref(v_a_3958_);
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg(lean_object* v_sep_3960_){
_start:
{
lean_object* v___f_3961_; 
v___f_3961_ = lean_alloc_closure((void*)(l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3961_, 0, v_sep_3960_);
return v___f_3961_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray(lean_object* v_k_3962_, lean_object* v_sep_3963_){
_start:
{
lean_object* v___f_3964_; 
v___f_3964_ = lean_alloc_closure((void*)(l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3964_, 0, v_sep_3963_);
return v___f_3964_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___boxed(lean_object* v_k_3965_, lean_object* v_sep_3966_){
_start:
{
lean_object* v_res_3967_; 
v_res_3967_ = l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray(v_k_3965_, v_sep_3966_);
lean_dec(v_k_3965_);
return v_res_3967_;
}
}
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent(lean_object* v_s_3968_, lean_object* v_val_3969_, uint8_t v_canonical_3970_){
_start:
{
lean_object* v___x_3971_; lean_object* v_src_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v_imported_3975_; lean_object* v_ctx_3976_; lean_object* v_scopes_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3993_; 
v___x_3971_ = lean_unsigned_to_nat(0u);
v_src_3972_ = l_Lean_Syntax_getArg(v_s_3968_, v___x_3971_);
v___x_3973_ = l_Lean_Syntax_getId(v_src_3972_);
v___x_3974_ = l_Lean_extractMacroScopes(v___x_3973_);
v_imported_3975_ = lean_ctor_get(v___x_3974_, 1);
v_ctx_3976_ = lean_ctor_get(v___x_3974_, 2);
v_scopes_3977_ = lean_ctor_get(v___x_3974_, 3);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3993_ == 0)
{
lean_object* v_unused_3994_; 
v_unused_3994_ = lean_ctor_get(v___x_3974_, 0);
lean_dec(v_unused_3994_);
v___x_3979_ = v___x_3974_;
v_isShared_3980_ = v_isSharedCheck_3993_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_scopes_3977_);
lean_inc(v_ctx_3976_);
lean_inc(v_imported_3975_);
lean_dec(v___x_3974_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3993_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3981_; lean_object* v___x_3983_; 
v___x_3981_ = l_Lean_Name_eraseMacroScopes(v_val_3969_);
if (v_isShared_3980_ == 0)
{
lean_ctor_set(v___x_3979_, 0, v___x_3981_);
v___x_3983_ = v___x_3979_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v___x_3981_);
lean_ctor_set(v_reuseFailAlloc_3992_, 1, v_imported_3975_);
lean_ctor_set(v_reuseFailAlloc_3992_, 2, v_ctx_3976_);
lean_ctor_set(v_reuseFailAlloc_3992_, 3, v_scopes_3977_);
v___x_3983_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
lean_object* v_id_3984_; lean_object* v___x_3985_; uint8_t v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; 
v_id_3984_ = l_Lean_MacroScopesView_review(v___x_3983_);
v___x_3985_ = l_Lean_SourceInfo_fromRef(v_src_3972_, v_canonical_3970_);
lean_dec(v_src_3972_);
v___x_3986_ = 1;
v___x_3987_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_val_3969_, v___x_3986_);
v___x_3988_ = lean_string_utf8_byte_size(v___x_3987_);
v___x_3989_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3989_, 0, v___x_3987_);
lean_ctor_set(v___x_3989_, 1, v___x_3971_);
lean_ctor_set(v___x_3989_, 2, v___x_3988_);
v___x_3990_ = lean_box(0);
v___x_3991_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3991_, 0, v___x_3985_);
lean_ctor_set(v___x_3991_, 1, v___x_3989_);
lean_ctor_set(v___x_3991_, 2, v_id_3984_);
lean_ctor_set(v___x_3991_, 3, v___x_3990_);
return v___x_3991_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent___boxed(lean_object* v_s_3995_, lean_object* v_val_3996_, lean_object* v_canonical_3997_){
_start:
{
uint8_t v_canonical_boxed_3998_; lean_object* v_res_3999_; 
v_canonical_boxed_3998_ = lean_unbox(v_canonical_3997_);
v_res_3999_ = l_Lean_HygieneInfo_mkIdent(v_s_3995_, v_val_3996_, v_canonical_boxed_3998_);
lean_dec(v_s_3995_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0(lean_object* v_inst_4000_, lean_object* v_inst_4001_, lean_object* v_a_4002_){
_start:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; 
v___x_4003_ = lean_apply_1(v_inst_4000_, v_a_4002_);
v___x_4004_ = lean_apply_1(v_inst_4001_, v___x_4003_);
return v___x_4004_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg(lean_object* v_inst_4005_, lean_object* v_inst_4006_){
_start:
{
lean_object* v___f_4007_; 
v___f_4007_ = lean_alloc_closure((void*)(l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4007_, 0, v_inst_4005_);
lean_closure_set(v___f_4007_, 1, v_inst_4006_);
return v___f_4007_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil(lean_object* v_00_u03b1_4008_, lean_object* v_k_4009_, lean_object* v_k_x27_4010_, lean_object* v_inst_4011_, lean_object* v_inst_4012_){
_start:
{
lean_object* v___f_4013_; 
v___f_4013_ = lean_alloc_closure((void*)(l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4013_, 0, v_inst_4011_);
lean_closure_set(v___f_4013_, 1, v_inst_4012_);
return v___f_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___boxed(lean_object* v_00_u03b1_4014_, lean_object* v_k_4015_, lean_object* v_k_x27_4016_, lean_object* v_inst_4017_, lean_object* v_inst_4018_){
_start:
{
lean_object* v_res_4019_; 
v_res_4019_ = l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil(v_00_u03b1_4014_, v_k_4015_, v_k_x27_4016_, v_inst_4017_, v_inst_4018_);
lean_dec(v_k_x27_4016_);
lean_dec(v_k_4015_);
return v_res_4019_;
}
}
static lean_object* _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4027_ = ((lean_object*)(l_Lean_instQuoteBoolMkStr1___lam__0___closed__2));
v___x_4028_ = l_Lean_mkCIdent(v___x_4027_);
return v___x_4028_;
}
}
static lean_object* _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__6(void){
_start:
{
lean_object* v___x_4033_; lean_object* v___x_4034_; 
v___x_4033_ = ((lean_object*)(l_Lean_instQuoteBoolMkStr1___lam__0___closed__5));
v___x_4034_ = l_Lean_mkCIdent(v___x_4033_);
return v___x_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0(uint8_t v_x_4035_){
_start:
{
if (v_x_4035_ == 0)
{
lean_object* v___x_4036_; 
v___x_4036_ = lean_obj_once(&l_Lean_instQuoteBoolMkStr1___lam__0___closed__3, &l_Lean_instQuoteBoolMkStr1___lam__0___closed__3_once, _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__3);
return v___x_4036_;
}
else
{
lean_object* v___x_4037_; 
v___x_4037_ = lean_obj_once(&l_Lean_instQuoteBoolMkStr1___lam__0___closed__6, &l_Lean_instQuoteBoolMkStr1___lam__0___closed__6_once, _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__6);
return v___x_4037_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___boxed(lean_object* v_x_4038_){
_start:
{
uint8_t v_x_85__boxed_4039_; lean_object* v_res_4040_; 
v_x_85__boxed_4039_ = lean_unbox(v_x_4038_);
v_res_4040_ = l_Lean_instQuoteBoolMkStr1___lam__0(v_x_85__boxed_4039_);
return v_res_4040_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0(uint32_t v_val_4043_){
_start:
{
lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4044_ = lean_box(2);
v___x_4045_ = l_Lean_Syntax_mkCharLit(v_val_4043_, v___x_4044_);
return v___x_4045_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0___boxed(lean_object* v_val_4046_){
_start:
{
uint32_t v_val_boxed_4047_; lean_object* v_res_4048_; 
v_val_boxed_4047_ = lean_unbox_uint32(v_val_4046_);
lean_dec(v_val_4046_);
v_res_4048_ = l_Lean_instQuoteCharCharLitKind___lam__0(v_val_boxed_4047_);
return v_res_4048_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteStringStrLitKind___lam__0(lean_object* v_val_4051_){
_start:
{
lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4052_ = lean_box(2);
v___x_4053_ = l_Lean_Syntax_mkStrLit(v_val_4051_, v___x_4052_);
return v___x_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteNatNumLitKind___lam__0(lean_object* v_n_4056_){
_start:
{
lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; 
v___x_4057_ = l_Nat_reprFast(v_n_4056_);
v___x_4058_ = lean_box(2);
v___x_4059_ = l_Lean_Syntax_mkNumLit(v___x_4057_, v___x_4058_);
return v___x_4059_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteRawMkStr1___lam__0(lean_object* v_s_4067_){
_start:
{
lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
v___x_4068_ = ((lean_object*)(l_Lean_instQuoteRawMkStr1___lam__0___closed__2));
v___x_4069_ = lean_substring_tostring(v_s_4067_);
v___x_4070_ = lean_box(2);
v___x_4071_ = l_Lean_Syntax_mkStrLit(v___x_4069_, v___x_4070_);
v___x_4072_ = lean_unsigned_to_nat(1u);
v___x_4073_ = lean_mk_empty_array_with_capacity(v___x_4072_);
v___x_4074_ = lean_array_push(v___x_4073_, v___x_4071_);
v___x_4075_ = l_Lean_Syntax_mkCApp(v___x_4068_, v___x_4074_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object* v_acc_4078_, lean_object* v_x_4079_){
_start:
{
switch(lean_obj_tag(v_x_4079_))
{
case 0:
{
uint8_t v___x_4080_; 
v___x_4080_ = l_List_isEmpty___redArg(v_acc_4078_);
if (v___x_4080_ == 0)
{
lean_object* v___x_4081_; 
v___x_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4081_, 0, v_acc_4078_);
return v___x_4081_;
}
else
{
lean_object* v___x_4082_; 
lean_dec(v_acc_4078_);
v___x_4082_ = lean_box(0);
return v___x_4082_;
}
}
case 1:
{
lean_object* v_pre_4083_; lean_object* v_str_4084_; lean_object* v_val_4086_; lean_object* v___x_4089_; lean_object* v___x_4090_; uint8_t v___x_4091_; 
v_pre_4083_ = lean_ctor_get(v_x_4079_, 0);
lean_inc(v_pre_4083_);
v_str_4084_ = lean_ctor_get(v_x_4079_, 1);
lean_inc_ref(v_str_4084_);
lean_dec_ref_known(v_x_4079_, 2);
v___x_4089_ = lean_unsigned_to_nat(0u);
v___x_4090_ = lean_string_utf8_byte_size(v_str_4084_);
v___x_4091_ = lean_nat_dec_lt(v___x_4089_, v___x_4090_);
if (v___x_4091_ == 0)
{
lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; 
v___x_4092_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_4093_ = lean_string_append(v___x_4092_, v_str_4084_);
lean_dec_ref(v_str_4084_);
v___x_4094_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_4095_ = lean_string_append(v___x_4093_, v___x_4094_);
v_val_4086_ = v___x_4095_;
goto v___jp_4085_;
}
else
{
lean_object* v___f_4096_; lean_object* v___f_4104_; uint32_t v___y_4111_; uint32_t v___y_4116_; uint8_t v_c_4130_; uint8_t v___x_4139_; uint8_t v___x_4140_; 
v___f_4096_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0));
v___f_4104_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1));
v_c_4130_ = lean_string_get_byte_fast(v_str_4084_, v___x_4089_);
v___x_4139_ = 97;
v___x_4140_ = lean_uint8_dec_le(v___x_4139_, v_c_4130_);
if (v___x_4140_ == 0)
{
goto v___jp_4134_;
}
else
{
uint8_t v___x_4141_; uint8_t v___x_4142_; 
v___x_4141_ = 122;
v___x_4142_ = lean_uint8_dec_le(v_c_4130_, v___x_4141_);
if (v___x_4142_ == 0)
{
goto v___jp_4134_;
}
else
{
goto v___jp_4127_;
}
}
v___jp_4097_:
{
uint8_t v___x_4098_; 
lean_inc_ref(v_str_4084_);
v___x_4098_ = lean_string_any(v_str_4084_, v___f_4096_);
if (v___x_4098_ == 0)
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; 
v___x_4099_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_4100_ = lean_string_append(v___x_4099_, v_str_4084_);
lean_dec_ref(v_str_4084_);
v___x_4101_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_4102_ = lean_string_append(v___x_4100_, v___x_4101_);
v_val_4086_ = v___x_4102_;
goto v___jp_4085_;
}
else
{
lean_object* v___x_4103_; 
lean_dec_ref(v_str_4084_);
lean_dec(v_pre_4083_);
lean_dec(v_acc_4078_);
v___x_4103_ = lean_box(0);
return v___x_4103_;
}
}
v___jp_4105_:
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; uint8_t v___x_4109_; 
lean_inc_ref(v_str_4084_);
v___x_4106_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4106_, 0, v_str_4084_);
lean_ctor_set(v___x_4106_, 1, v___x_4089_);
lean_ctor_set(v___x_4106_, 2, v___x_4090_);
v___x_4107_ = lean_unsigned_to_nat(1u);
v___x_4108_ = lean_substring_drop(v___x_4106_, v___x_4107_);
v___x_4109_ = lean_substring_all(v___x_4108_, v___f_4104_);
if (v___x_4109_ == 0)
{
goto v___jp_4097_;
}
else
{
v_val_4086_ = v_str_4084_;
goto v___jp_4085_;
}
}
v___jp_4110_:
{
uint32_t v___x_4112_; uint8_t v___x_4113_; 
v___x_4112_ = 95;
v___x_4113_ = lean_uint32_dec_eq(v___y_4111_, v___x_4112_);
if (v___x_4113_ == 0)
{
uint8_t v___x_4114_; 
v___x_4114_ = l_Lean_isLetterLike(v___y_4111_);
if (v___x_4114_ == 0)
{
goto v___jp_4097_;
}
else
{
goto v___jp_4105_;
}
}
else
{
goto v___jp_4105_;
}
}
v___jp_4115_:
{
uint32_t v___x_4117_; uint8_t v___x_4118_; 
v___x_4117_ = 97;
v___x_4118_ = lean_uint32_dec_le(v___x_4117_, v___y_4116_);
if (v___x_4118_ == 0)
{
v___y_4111_ = v___y_4116_;
goto v___jp_4110_;
}
else
{
uint32_t v___x_4119_; uint8_t v___x_4120_; 
v___x_4119_ = 122;
v___x_4120_ = lean_uint32_dec_le(v___y_4116_, v___x_4119_);
if (v___x_4120_ == 0)
{
v___y_4111_ = v___y_4116_;
goto v___jp_4110_;
}
else
{
goto v___jp_4105_;
}
}
}
v___jp_4121_:
{
uint32_t v___x_4122_; uint32_t v___x_4123_; uint8_t v___x_4124_; 
v___x_4122_ = lean_string_utf8_get(v_str_4084_, v___x_4089_);
v___x_4123_ = 65;
v___x_4124_ = lean_uint32_dec_le(v___x_4123_, v___x_4122_);
if (v___x_4124_ == 0)
{
v___y_4116_ = v___x_4122_;
goto v___jp_4115_;
}
else
{
uint32_t v___x_4125_; uint8_t v___x_4126_; 
v___x_4125_ = 90;
v___x_4126_ = lean_uint32_dec_le(v___x_4122_, v___x_4125_);
if (v___x_4126_ == 0)
{
v___y_4116_ = v___x_4122_;
goto v___jp_4115_;
}
else
{
goto v___jp_4105_;
}
}
}
v___jp_4127_:
{
lean_object* v___x_4128_; uint8_t v___x_4129_; 
v___x_4128_ = lean_unsigned_to_nat(1u);
v___x_4129_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_str_4084_, v___x_4128_);
if (v___x_4129_ == 0)
{
goto v___jp_4121_;
}
else
{
v_val_4086_ = v_str_4084_;
goto v___jp_4085_;
}
}
v___jp_4131_:
{
uint8_t v___x_4132_; uint8_t v___x_4133_; 
v___x_4132_ = 95;
v___x_4133_ = lean_uint8_dec_eq(v_c_4130_, v___x_4132_);
if (v___x_4133_ == 0)
{
goto v___jp_4121_;
}
else
{
goto v___jp_4127_;
}
}
v___jp_4134_:
{
uint8_t v___x_4135_; uint8_t v___x_4136_; 
v___x_4135_ = 65;
v___x_4136_ = lean_uint8_dec_le(v___x_4135_, v_c_4130_);
if (v___x_4136_ == 0)
{
goto v___jp_4131_;
}
else
{
uint8_t v___x_4137_; uint8_t v___x_4138_; 
v___x_4137_ = 90;
v___x_4138_ = lean_uint8_dec_le(v_c_4130_, v___x_4137_);
if (v___x_4138_ == 0)
{
goto v___jp_4131_;
}
else
{
goto v___jp_4127_;
}
}
}
}
v___jp_4085_:
{
lean_object* v___x_4087_; 
v___x_4087_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4087_, 0, v_val_4086_);
lean_ctor_set(v___x_4087_, 1, v_acc_4078_);
v_acc_4078_ = v___x_4087_;
v_x_4079_ = v_pre_4083_;
goto _start;
}
}
default: 
{
lean_object* v___x_4143_; 
lean_dec_ref_known(v_x_4079_, 2);
lean_dec(v_acc_4078_);
v___x_4143_ = lean_box(0);
return v___x_4143_;
}
}
}
}
static lean_object* _init_l_Lean_quoteNameMk___closed__3(void){
_start:
{
lean_object* v___x_4150_; lean_object* v___x_4151_; 
v___x_4150_ = ((lean_object*)(l_Lean_quoteNameMk___closed__2));
v___x_4151_ = l_Lean_mkCIdent(v___x_4150_);
return v___x_4151_;
}
}
LEAN_EXPORT lean_object* l_Lean_quoteNameMk(lean_object* v_x_4162_){
_start:
{
switch(lean_obj_tag(v_x_4162_))
{
case 0:
{
lean_object* v___x_4163_; 
v___x_4163_ = lean_obj_once(&l_Lean_quoteNameMk___closed__3, &l_Lean_quoteNameMk___closed__3_once, _init_l_Lean_quoteNameMk___closed__3);
return v___x_4163_;
}
case 1:
{
lean_object* v_pre_4164_; lean_object* v_str_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; 
v_pre_4164_ = lean_ctor_get(v_x_4162_, 0);
lean_inc(v_pre_4164_);
v_str_4165_ = lean_ctor_get(v_x_4162_, 1);
lean_inc_ref(v_str_4165_);
lean_dec_ref_known(v_x_4162_, 2);
v___x_4166_ = ((lean_object*)(l_Lean_quoteNameMk___closed__5));
v___x_4167_ = l_Lean_quoteNameMk(v_pre_4164_);
v___x_4168_ = lean_box(2);
v___x_4169_ = l_Lean_Syntax_mkStrLit(v_str_4165_, v___x_4168_);
v___x_4170_ = lean_unsigned_to_nat(2u);
v___x_4171_ = lean_mk_empty_array_with_capacity(v___x_4170_);
v___x_4172_ = lean_array_push(v___x_4171_, v___x_4167_);
v___x_4173_ = lean_array_push(v___x_4172_, v___x_4169_);
v___x_4174_ = l_Lean_Syntax_mkCApp(v___x_4166_, v___x_4173_);
return v___x_4174_;
}
default: 
{
lean_object* v_pre_4175_; lean_object* v_i_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; 
v_pre_4175_ = lean_ctor_get(v_x_4162_, 0);
lean_inc(v_pre_4175_);
v_i_4176_ = lean_ctor_get(v_x_4162_, 1);
lean_inc(v_i_4176_);
lean_dec_ref_known(v_x_4162_, 2);
v___x_4177_ = ((lean_object*)(l_Lean_quoteNameMk___closed__7));
v___x_4178_ = l_Lean_quoteNameMk(v_pre_4175_);
v___x_4179_ = l_Nat_reprFast(v_i_4176_);
v___x_4180_ = lean_box(2);
v___x_4181_ = l_Lean_Syntax_mkNumLit(v___x_4179_, v___x_4180_);
v___x_4182_ = lean_unsigned_to_nat(2u);
v___x_4183_ = lean_mk_empty_array_with_capacity(v___x_4182_);
v___x_4184_ = lean_array_push(v___x_4183_, v___x_4178_);
v___x_4185_ = lean_array_push(v___x_4184_, v___x_4181_);
v___x_4186_ = l_Lean_Syntax_mkCApp(v___x_4177_, v___x_4185_);
return v___x_4186_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___private__1(lean_object* v_n_4193_){
_start:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4194_ = lean_box(0);
lean_inc(v_n_4193_);
v___x_4195_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_4194_, v_n_4193_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v___x_4196_; 
v___x_4196_ = l_Lean_quoteNameMk(v_n_4193_);
return v___x_4196_;
}
else
{
lean_object* v_val_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; 
lean_dec(v_n_4193_);
v_val_4197_ = lean_ctor_get(v___x_4195_, 0);
lean_inc(v_val_4197_);
lean_dec_ref_known(v___x_4195_, 1);
v___x_4198_ = ((lean_object*)(l_Lean_instQuoteNameMkStr1___private__1___closed__1));
v___x_4199_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__2));
v___x_4200_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_4201_ = lean_string_intercalate(v___x_4200_, v_val_4197_);
v___x_4202_ = lean_string_append(v___x_4199_, v___x_4201_);
lean_dec_ref(v___x_4201_);
v___x_4203_ = lean_box(2);
v___x_4204_ = l_Lean_Syntax_mkNameLit(v___x_4202_, v___x_4203_);
v___x_4205_ = lean_unsigned_to_nat(1u);
v___x_4206_ = lean_mk_empty_array_with_capacity(v___x_4205_);
v___x_4207_ = lean_array_push(v___x_4206_, v___x_4204_);
v___x_4208_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4203_);
lean_ctor_set(v___x_4208_, 1, v___x_4198_);
lean_ctor_set(v___x_4208_, 2, v___x_4207_);
return v___x_4208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___lam__0(lean_object* v_n_4209_){
_start:
{
lean_object* v___x_4210_; lean_object* v___x_4211_; 
v___x_4210_ = lean_box(0);
lean_inc(v_n_4209_);
v___x_4211_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_4210_, v_n_4209_);
if (lean_obj_tag(v___x_4211_) == 0)
{
lean_object* v___x_4212_; 
v___x_4212_ = l_Lean_quoteNameMk(v_n_4209_);
return v___x_4212_;
}
else
{
lean_object* v_val_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; 
lean_dec(v_n_4209_);
v_val_4213_ = lean_ctor_get(v___x_4211_, 0);
lean_inc(v_val_4213_);
lean_dec_ref_known(v___x_4211_, 1);
v___x_4214_ = ((lean_object*)(l_Lean_instQuoteNameMkStr1___private__1___closed__1));
v___x_4215_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__2));
v___x_4216_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_4217_ = lean_string_intercalate(v___x_4216_, v_val_4213_);
v___x_4218_ = lean_string_append(v___x_4215_, v___x_4217_);
lean_dec_ref(v___x_4217_);
v___x_4219_ = lean_box(2);
v___x_4220_ = l_Lean_Syntax_mkNameLit(v___x_4218_, v___x_4219_);
v___x_4221_ = lean_unsigned_to_nat(1u);
v___x_4222_ = lean_mk_empty_array_with_capacity(v___x_4221_);
v___x_4223_ = lean_array_push(v___x_4222_, v___x_4220_);
v___x_4224_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4219_);
lean_ctor_set(v___x_4224_, 1, v___x_4214_);
lean_ctor_set(v___x_4224_, 2, v___x_4223_);
return v___x_4224_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0(lean_object* v_inst_4232_, lean_object* v_inst_4233_, lean_object* v_x_4234_){
_start:
{
lean_object* v_fst_4235_; lean_object* v_snd_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; 
v_fst_4235_ = lean_ctor_get(v_x_4234_, 0);
lean_inc(v_fst_4235_);
v_snd_4236_ = lean_ctor_get(v_x_4234_, 1);
lean_inc(v_snd_4236_);
lean_dec_ref(v_x_4234_);
v___x_4237_ = ((lean_object*)(l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2));
v___x_4238_ = lean_apply_1(v_inst_4232_, v_fst_4235_);
v___x_4239_ = lean_apply_1(v_inst_4233_, v_snd_4236_);
v___x_4240_ = lean_unsigned_to_nat(2u);
v___x_4241_ = lean_mk_empty_array_with_capacity(v___x_4240_);
v___x_4242_ = lean_array_push(v___x_4241_, v___x_4238_);
v___x_4243_ = lean_array_push(v___x_4242_, v___x_4239_);
v___x_4244_ = l_Lean_Syntax_mkCApp(v___x_4237_, v___x_4243_);
return v___x_4244_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg(lean_object* v_inst_4245_, lean_object* v_inst_4246_){
_start:
{
lean_object* v___f_4247_; 
v___f_4247_ = lean_alloc_closure((void*)(l_Lean_instQuoteProdMkStr1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4247_, 0, v_inst_4245_);
lean_closure_set(v___f_4247_, 1, v_inst_4246_);
return v___f_4247_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1(lean_object* v_00_u03b1_4248_, lean_object* v_00_u03b2_4249_, lean_object* v_inst_4250_, lean_object* v_inst_4251_){
_start:
{
lean_object* v___f_4252_; 
v___f_4252_ = lean_alloc_closure((void*)(l_Lean_instQuoteProdMkStr1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4252_, 0, v_inst_4250_);
lean_closure_set(v___f_4252_, 1, v_inst_4251_);
return v___f_4252_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3(void){
_start:
{
lean_object* v___x_4258_; lean_object* v___x_4259_; 
v___x_4258_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2));
v___x_4259_ = l_Lean_mkCIdent(v___x_4258_);
return v___x_4259_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(lean_object* v_inst_4264_, lean_object* v_x_4265_){
_start:
{
if (lean_obj_tag(v_x_4265_) == 0)
{
lean_object* v___x_4266_; 
lean_dec_ref(v_inst_4264_);
v___x_4266_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3, &l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3);
return v___x_4266_;
}
else
{
lean_object* v_head_4267_; lean_object* v_tail_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; 
v_head_4267_ = lean_ctor_get(v_x_4265_, 0);
lean_inc(v_head_4267_);
v_tail_4268_ = lean_ctor_get(v_x_4265_, 1);
lean_inc(v_tail_4268_);
lean_dec_ref_known(v_x_4265_, 2);
v___x_4269_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5));
lean_inc_ref(v_inst_4264_);
v___x_4270_ = lean_apply_1(v_inst_4264_, v_head_4267_);
v___x_4271_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4264_, v_tail_4268_);
v___x_4272_ = lean_unsigned_to_nat(2u);
v___x_4273_ = lean_mk_empty_array_with_capacity(v___x_4272_);
v___x_4274_ = lean_array_push(v___x_4273_, v___x_4270_);
v___x_4275_ = lean_array_push(v___x_4274_, v___x_4271_);
v___x_4276_ = l_Lean_Syntax_mkCApp(v___x_4269_, v___x_4275_);
return v___x_4276_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList(lean_object* v_00_u03b1_4277_, lean_object* v_inst_4278_, lean_object* v_x_4279_){
_start:
{
lean_object* v___x_4280_; 
v___x_4280_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4278_, v_x_4279_);
return v___x_4280_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1___redArg(lean_object* v_inst_4281_, lean_object* v_a_4282_){
_start:
{
lean_object* v___x_4283_; 
v___x_4283_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4281_, v_a_4282_);
return v___x_4283_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1(lean_object* v_00_u03b1_4284_, lean_object* v_inst_4285_, lean_object* v_a_4286_){
_start:
{
lean_object* v___x_4287_; 
v___x_4287_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4285_, v_a_4286_);
return v___x_4287_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___redArg(lean_object* v_inst_4288_){
_start:
{
lean_object* v___x_4289_; 
v___x_4289_ = lean_alloc_closure((void*)(l_Lean_instQuoteListMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4289_, 0, lean_box(0));
lean_closure_set(v___x_4289_, 1, v_inst_4288_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1(lean_object* v_00_u03b1_4290_, lean_object* v_inst_4291_){
_start:
{
lean_object* v___x_4292_; 
v___x_4292_ = lean_alloc_closure((void*)(l_Lean_instQuoteListMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4292_, 0, lean_box(0));
lean_closure_set(v___x_4292_, 1, v_inst_4291_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(lean_object* v_inst_4295_, lean_object* v_xs_4296_, lean_object* v_i_4297_, lean_object* v_args_4298_){
_start:
{
lean_object* v___x_4299_; uint8_t v___x_4300_; 
v___x_4299_ = lean_array_get_size(v_xs_4296_);
v___x_4300_ = lean_nat_dec_lt(v_i_4297_, v___x_4299_);
if (v___x_4300_ == 0)
{
lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; 
lean_dec(v_i_4297_);
lean_dec_ref(v_inst_4295_);
v___x_4301_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0));
v___x_4302_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1));
v___x_4303_ = l_Nat_reprFast(v___x_4299_);
v___x_4304_ = lean_string_append(v___x_4302_, v___x_4303_);
lean_dec_ref(v___x_4303_);
v___x_4305_ = l_Lean_Name_mkStr2(v___x_4301_, v___x_4304_);
v___x_4306_ = l_Lean_Syntax_mkCApp(v___x_4305_, v_args_4298_);
return v___x_4306_;
}
else
{
lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; 
v___x_4307_ = lean_unsigned_to_nat(1u);
v___x_4308_ = lean_nat_add(v_i_4297_, v___x_4307_);
v___x_4309_ = lean_array_fget_borrowed(v_xs_4296_, v_i_4297_);
lean_dec(v_i_4297_);
lean_inc_ref(v_inst_4295_);
lean_inc(v___x_4309_);
v___x_4310_ = lean_apply_1(v_inst_4295_, v___x_4309_);
v___x_4311_ = lean_array_push(v_args_4298_, v___x_4310_);
v_i_4297_ = v___x_4308_;
v_args_4298_ = v___x_4311_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___boxed(lean_object* v_inst_4313_, lean_object* v_xs_4314_, lean_object* v_i_4315_, lean_object* v_args_4316_){
_start:
{
lean_object* v_res_4317_; 
v_res_4317_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(v_inst_4313_, v_xs_4314_, v_i_4315_, v_args_4316_);
lean_dec_ref(v_xs_4314_);
return v_res_4317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go(lean_object* v_00_u03b1_4318_, lean_object* v_inst_4319_, lean_object* v_xs_4320_, lean_object* v_i_4321_, lean_object* v_args_4322_){
_start:
{
lean_object* v___x_4323_; 
v___x_4323_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(v_inst_4319_, v_xs_4320_, v_i_4321_, v_args_4322_);
return v___x_4323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___boxed(lean_object* v_00_u03b1_4324_, lean_object* v_inst_4325_, lean_object* v_xs_4326_, lean_object* v_i_4327_, lean_object* v_args_4328_){
_start:
{
lean_object* v_res_4329_; 
v_res_4329_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go(v_00_u03b1_4324_, v_inst_4325_, v_xs_4326_, v_i_4327_, v_args_4328_);
lean_dec_ref(v_xs_4326_);
return v_res_4329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(lean_object* v_inst_4334_, lean_object* v_xs_4335_){
_start:
{
lean_object* v___x_4336_; lean_object* v___x_4337_; uint8_t v___x_4338_; 
v___x_4336_ = lean_array_get_size(v_xs_4335_);
v___x_4337_ = lean_unsigned_to_nat(8u);
v___x_4338_ = lean_nat_dec_le(v___x_4336_, v___x_4337_);
if (v___x_4338_ == 0)
{
lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; 
v___x_4339_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1));
v___x_4340_ = lean_array_to_list(v_xs_4335_);
v___x_4341_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4334_, v___x_4340_);
v___x_4342_ = lean_unsigned_to_nat(1u);
v___x_4343_ = lean_mk_empty_array_with_capacity(v___x_4342_);
v___x_4344_ = lean_array_push(v___x_4343_, v___x_4341_);
v___x_4345_ = l_Lean_Syntax_mkCApp(v___x_4339_, v___x_4344_);
return v___x_4345_;
}
else
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; 
v___x_4346_ = lean_unsigned_to_nat(0u);
v___x_4347_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4348_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(v_inst_4334_, v_xs_4335_, v___x_4346_, v___x_4347_);
lean_dec_ref(v_xs_4335_);
return v___x_4348_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray(lean_object* v_00_u03b1_4349_, lean_object* v_inst_4350_, lean_object* v_xs_4351_){
_start:
{
lean_object* v___x_4352_; 
v___x_4352_ = l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(v_inst_4350_, v_xs_4351_);
return v___x_4352_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1___redArg(lean_object* v_inst_4353_, lean_object* v_xs_4354_){
_start:
{
lean_object* v___x_4355_; 
v___x_4355_ = l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(v_inst_4353_, v_xs_4354_);
return v___x_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1(lean_object* v_00_u03b1_4356_, lean_object* v_inst_4357_, lean_object* v_xs_4358_){
_start:
{
lean_object* v___x_4359_; 
v___x_4359_ = l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(v_inst_4357_, v_xs_4358_);
return v___x_4359_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___redArg(lean_object* v_inst_4360_){
_start:
{
lean_object* v___x_4361_; 
v___x_4361_ = lean_alloc_closure((void*)(l_Lean_instQuoteArrayMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4361_, 0, lean_box(0));
lean_closure_set(v___x_4361_, 1, v_inst_4360_);
return v___x_4361_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1(lean_object* v_00_u03b1_4362_, lean_object* v_inst_4363_){
_start:
{
lean_object* v___x_4364_; 
v___x_4364_ = lean_alloc_closure((void*)(l_Lean_instQuoteArrayMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4364_, 0, lean_box(0));
lean_closure_set(v___x_4364_, 1, v_inst_4363_);
return v___x_4364_;
}
}
static lean_object* _init_l_Lean_Option_hasQuote___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; 
v___x_4370_ = ((lean_object*)(l_Lean_Option_hasQuote___redArg___lam__0___closed__2));
v___x_4371_ = l_Lean_mkIdent(v___x_4370_);
return v___x_4371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg___lam__0(lean_object* v_inst_4376_, lean_object* v_x_4377_){
_start:
{
if (lean_obj_tag(v_x_4377_) == 0)
{
lean_object* v___x_4378_; 
lean_dec_ref(v_inst_4376_);
v___x_4378_ = lean_obj_once(&l_Lean_Option_hasQuote___redArg___lam__0___closed__3, &l_Lean_Option_hasQuote___redArg___lam__0___closed__3_once, _init_l_Lean_Option_hasQuote___redArg___lam__0___closed__3);
return v___x_4378_;
}
else
{
lean_object* v_val_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
v_val_4379_ = lean_ctor_get(v_x_4377_, 0);
lean_inc(v_val_4379_);
lean_dec_ref_known(v_x_4377_, 1);
v___x_4380_ = ((lean_object*)(l_Lean_Option_hasQuote___redArg___lam__0___closed__5));
v___x_4381_ = lean_apply_1(v_inst_4376_, v_val_4379_);
v___x_4382_ = lean_unsigned_to_nat(1u);
v___x_4383_ = lean_mk_empty_array_with_capacity(v___x_4382_);
v___x_4384_ = lean_array_push(v___x_4383_, v___x_4381_);
v___x_4385_ = l_Lean_Syntax_mkCApp(v___x_4380_, v___x_4384_);
return v___x_4385_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg(lean_object* v_inst_4386_){
_start:
{
lean_object* v___f_4387_; 
v___f_4387_ = lean_alloc_closure((void*)(l_Lean_Option_hasQuote___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4387_, 0, v_inst_4386_);
return v___f_4387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote(lean_object* v_00_u03b1_4388_, lean_object* v_inst_4389_){
_start:
{
lean_object* v___f_4390_; 
v___f_4390_ = lean_alloc_closure((void*)(l_Lean_Option_hasQuote___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4390_, 0, v_inst_4389_);
return v___f_4390_;
}
}
LEAN_EXPORT uint8_t l_Lean_evalPrec___lam__0(lean_object* v_k_4391_){
_start:
{
lean_object* v___x_4392_; uint8_t v___x_4393_; 
v___x_4392_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__4));
v___x_4393_ = lean_name_eq(v_k_4391_, v___x_4392_);
if (v___x_4393_ == 0)
{
uint8_t v___x_4394_; 
v___x_4394_ = 1;
return v___x_4394_;
}
else
{
uint8_t v___x_4395_; 
v___x_4395_ = 0;
return v___x_4395_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrec___lam__0___boxed(lean_object* v_k_4396_){
_start:
{
uint8_t v_res_4397_; lean_object* v_r_4398_; 
v_res_4397_ = l_Lean_evalPrec___lam__0(v_k_4396_);
lean_dec(v_k_4396_);
v_r_4398_ = lean_box(v_res_4397_);
return v_r_4398_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrec(lean_object* v_stx_4401_, lean_object* v_a_4402_, lean_object* v_a_4403_){
_start:
{
lean_object* v_methods_4404_; lean_object* v_quotContext_4405_; lean_object* v_currMacroScope_4406_; lean_object* v_currRecDepth_4407_; lean_object* v_maxRecDepth_4408_; lean_object* v_ref_4409_; lean_object* v___f_4410_; lean_object* v_methods_4412_; lean_object* v_quotContext_4413_; lean_object* v_currMacroScope_4414_; lean_object* v_currRecDepth_4415_; lean_object* v_maxRecDepth_4416_; lean_object* v_ref_4417_; lean_object* v___y_4418_; lean_object* v___x_4446_; uint8_t v___x_4447_; 
v_methods_4404_ = lean_ctor_get(v_a_4402_, 0);
v_quotContext_4405_ = lean_ctor_get(v_a_4402_, 1);
v_currMacroScope_4406_ = lean_ctor_get(v_a_4402_, 2);
v_currRecDepth_4407_ = lean_ctor_get(v_a_4402_, 3);
v_maxRecDepth_4408_ = lean_ctor_get(v_a_4402_, 4);
v_ref_4409_ = lean_ctor_get(v_a_4402_, 5);
v___f_4410_ = ((lean_object*)(l_Lean_evalPrec___closed__0));
v___x_4446_ = lean_unsigned_to_nat(0u);
v___x_4447_ = lean_nat_dec_eq(v_maxRecDepth_4408_, v___x_4446_);
if (v___x_4447_ == 0)
{
uint8_t v___x_4448_; 
v___x_4448_ = lean_nat_dec_eq(v_currRecDepth_4407_, v_maxRecDepth_4408_);
if (v___x_4448_ == 0)
{
v_methods_4412_ = v_methods_4404_;
v_quotContext_4413_ = v_quotContext_4405_;
v_currMacroScope_4414_ = v_currMacroScope_4406_;
v_currRecDepth_4415_ = v_currRecDepth_4407_;
v_maxRecDepth_4416_ = v_maxRecDepth_4408_;
v_ref_4417_ = v_ref_4409_;
v___y_4418_ = v_a_4403_;
goto v___jp_4411_;
}
else
{
lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; 
v___x_4449_ = ((lean_object*)(l_Lean_expandMacros___closed__0));
v___x_4450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4450_, 0, v_stx_4401_);
lean_ctor_set(v___x_4450_, 1, v___x_4449_);
v___x_4451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4451_, 0, v___x_4450_);
lean_ctor_set(v___x_4451_, 1, v_a_4403_);
return v___x_4451_;
}
}
else
{
v_methods_4412_ = v_methods_4404_;
v_quotContext_4413_ = v_quotContext_4405_;
v_currMacroScope_4414_ = v_currMacroScope_4406_;
v_currRecDepth_4415_ = v_currRecDepth_4407_;
v_maxRecDepth_4416_ = v_maxRecDepth_4408_;
v_ref_4417_ = v_ref_4409_;
v___y_4418_ = v_a_4403_;
goto v___jp_4411_;
}
v___jp_4411_:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; 
v___x_4419_ = lean_unsigned_to_nat(1u);
v___x_4420_ = lean_nat_add(v_currRecDepth_4415_, v___x_4419_);
lean_inc(v_ref_4417_);
lean_inc(v_maxRecDepth_4416_);
lean_inc(v_currMacroScope_4414_);
lean_inc(v_quotContext_4413_);
lean_inc(v_methods_4412_);
v___x_4421_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4421_, 0, v_methods_4412_);
lean_ctor_set(v___x_4421_, 1, v_quotContext_4413_);
lean_ctor_set(v___x_4421_, 2, v_currMacroScope_4414_);
lean_ctor_set(v___x_4421_, 3, v___x_4420_);
lean_ctor_set(v___x_4421_, 4, v_maxRecDepth_4416_);
lean_ctor_set(v___x_4421_, 5, v_ref_4417_);
lean_inc_ref(v___x_4421_);
v___x_4422_ = l_Lean_expandMacros(v_stx_4401_, v___f_4410_, v___x_4421_, v___y_4418_);
if (lean_obj_tag(v___x_4422_) == 0)
{
lean_object* v_a_4423_; lean_object* v_a_4424_; lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4436_; 
v_a_4423_ = lean_ctor_get(v___x_4422_, 0);
v_a_4424_ = lean_ctor_get(v___x_4422_, 1);
v_isSharedCheck_4436_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4436_ == 0)
{
v___x_4426_ = v___x_4422_;
v_isShared_4427_ = v_isSharedCheck_4436_;
goto v_resetjp_4425_;
}
else
{
lean_inc(v_a_4424_);
lean_inc(v_a_4423_);
lean_dec(v___x_4422_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4436_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4428_; uint8_t v___x_4429_; 
v___x_4428_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
lean_inc(v_a_4423_);
v___x_4429_ = l_Lean_Syntax_isOfKind(v_a_4423_, v___x_4428_);
if (v___x_4429_ == 0)
{
lean_object* v___x_4430_; lean_object* v___x_4431_; 
lean_del_object(v___x_4426_);
v___x_4430_ = ((lean_object*)(l_Lean_evalPrec___closed__1));
v___x_4431_ = l_Lean_Macro_throwErrorAt___redArg(v_a_4423_, v___x_4430_, v___x_4421_, v_a_4424_);
lean_dec_ref_known(v___x_4421_, 6);
lean_dec(v_a_4423_);
return v___x_4431_;
}
else
{
lean_object* v___x_4432_; lean_object* v___x_4434_; 
lean_dec_ref_known(v___x_4421_, 6);
v___x_4432_ = l_Lean_TSyntax_getNat(v_a_4423_);
lean_dec(v_a_4423_);
if (v_isShared_4427_ == 0)
{
lean_ctor_set(v___x_4426_, 0, v___x_4432_);
v___x_4434_ = v___x_4426_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4435_; 
v_reuseFailAlloc_4435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4435_, 0, v___x_4432_);
lean_ctor_set(v_reuseFailAlloc_4435_, 1, v_a_4424_);
v___x_4434_ = v_reuseFailAlloc_4435_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
return v___x_4434_;
}
}
}
}
else
{
lean_object* v_a_4437_; lean_object* v_a_4438_; lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4445_; 
lean_dec_ref_known(v___x_4421_, 6);
v_a_4437_ = lean_ctor_get(v___x_4422_, 0);
v_a_4438_ = lean_ctor_get(v___x_4422_, 1);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4440_ = v___x_4422_;
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
else
{
lean_inc(v_a_4438_);
lean_inc(v_a_4437_);
lean_dec(v___x_4422_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v___x_4443_; 
if (v_isShared_4441_ == 0)
{
v___x_4443_ = v___x_4440_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_a_4437_);
lean_ctor_set(v_reuseFailAlloc_4444_, 1, v_a_4438_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrec___boxed(lean_object* v_stx_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_){
_start:
{
lean_object* v_res_4455_; 
v_res_4455_ = l_Lean_evalPrec(v_stx_4452_, v_a_4453_, v_a_4454_);
lean_dec_ref(v_a_4453_);
return v_res_4455_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrio(lean_object* v_stx_4457_, lean_object* v_a_4458_, lean_object* v_a_4459_){
_start:
{
lean_object* v_methods_4460_; lean_object* v_quotContext_4461_; lean_object* v_currMacroScope_4462_; lean_object* v_currRecDepth_4463_; lean_object* v_maxRecDepth_4464_; lean_object* v_ref_4465_; lean_object* v___f_4466_; lean_object* v_methods_4468_; lean_object* v_quotContext_4469_; lean_object* v_currMacroScope_4470_; lean_object* v_currRecDepth_4471_; lean_object* v_maxRecDepth_4472_; lean_object* v_ref_4473_; lean_object* v___y_4474_; lean_object* v___x_4502_; uint8_t v___x_4503_; 
v_methods_4460_ = lean_ctor_get(v_a_4458_, 0);
v_quotContext_4461_ = lean_ctor_get(v_a_4458_, 1);
v_currMacroScope_4462_ = lean_ctor_get(v_a_4458_, 2);
v_currRecDepth_4463_ = lean_ctor_get(v_a_4458_, 3);
v_maxRecDepth_4464_ = lean_ctor_get(v_a_4458_, 4);
v_ref_4465_ = lean_ctor_get(v_a_4458_, 5);
v___f_4466_ = ((lean_object*)(l_Lean_evalPrec___closed__0));
v___x_4502_ = lean_unsigned_to_nat(0u);
v___x_4503_ = lean_nat_dec_eq(v_maxRecDepth_4464_, v___x_4502_);
if (v___x_4503_ == 0)
{
uint8_t v___x_4504_; 
v___x_4504_ = lean_nat_dec_eq(v_currRecDepth_4463_, v_maxRecDepth_4464_);
if (v___x_4504_ == 0)
{
v_methods_4468_ = v_methods_4460_;
v_quotContext_4469_ = v_quotContext_4461_;
v_currMacroScope_4470_ = v_currMacroScope_4462_;
v_currRecDepth_4471_ = v_currRecDepth_4463_;
v_maxRecDepth_4472_ = v_maxRecDepth_4464_;
v_ref_4473_ = v_ref_4465_;
v___y_4474_ = v_a_4459_;
goto v___jp_4467_;
}
else
{
lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; 
v___x_4505_ = ((lean_object*)(l_Lean_expandMacros___closed__0));
v___x_4506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4506_, 0, v_stx_4457_);
lean_ctor_set(v___x_4506_, 1, v___x_4505_);
v___x_4507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4506_);
lean_ctor_set(v___x_4507_, 1, v_a_4459_);
return v___x_4507_;
}
}
else
{
v_methods_4468_ = v_methods_4460_;
v_quotContext_4469_ = v_quotContext_4461_;
v_currMacroScope_4470_ = v_currMacroScope_4462_;
v_currRecDepth_4471_ = v_currRecDepth_4463_;
v_maxRecDepth_4472_ = v_maxRecDepth_4464_;
v_ref_4473_ = v_ref_4465_;
v___y_4474_ = v_a_4459_;
goto v___jp_4467_;
}
v___jp_4467_:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; 
v___x_4475_ = lean_unsigned_to_nat(1u);
v___x_4476_ = lean_nat_add(v_currRecDepth_4471_, v___x_4475_);
lean_inc(v_ref_4473_);
lean_inc(v_maxRecDepth_4472_);
lean_inc(v_currMacroScope_4470_);
lean_inc(v_quotContext_4469_);
lean_inc(v_methods_4468_);
v___x_4477_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4477_, 0, v_methods_4468_);
lean_ctor_set(v___x_4477_, 1, v_quotContext_4469_);
lean_ctor_set(v___x_4477_, 2, v_currMacroScope_4470_);
lean_ctor_set(v___x_4477_, 3, v___x_4476_);
lean_ctor_set(v___x_4477_, 4, v_maxRecDepth_4472_);
lean_ctor_set(v___x_4477_, 5, v_ref_4473_);
lean_inc_ref(v___x_4477_);
v___x_4478_ = l_Lean_expandMacros(v_stx_4457_, v___f_4466_, v___x_4477_, v___y_4474_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_object* v_a_4479_; lean_object* v_a_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4492_; 
v_a_4479_ = lean_ctor_get(v___x_4478_, 0);
v_a_4480_ = lean_ctor_get(v___x_4478_, 1);
v_isSharedCheck_4492_ = !lean_is_exclusive(v___x_4478_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4482_ = v___x_4478_;
v_isShared_4483_ = v_isSharedCheck_4492_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_a_4480_);
lean_inc(v_a_4479_);
lean_dec(v___x_4478_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4492_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v___x_4484_; uint8_t v___x_4485_; 
v___x_4484_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
lean_inc(v_a_4479_);
v___x_4485_ = l_Lean_Syntax_isOfKind(v_a_4479_, v___x_4484_);
if (v___x_4485_ == 0)
{
lean_object* v___x_4486_; lean_object* v___x_4487_; 
lean_del_object(v___x_4482_);
v___x_4486_ = ((lean_object*)(l_Lean_evalPrio___closed__0));
v___x_4487_ = l_Lean_Macro_throwErrorAt___redArg(v_a_4479_, v___x_4486_, v___x_4477_, v_a_4480_);
lean_dec_ref_known(v___x_4477_, 6);
lean_dec(v_a_4479_);
return v___x_4487_;
}
else
{
lean_object* v___x_4488_; lean_object* v___x_4490_; 
lean_dec_ref_known(v___x_4477_, 6);
v___x_4488_ = l_Lean_TSyntax_getNat(v_a_4479_);
lean_dec(v_a_4479_);
if (v_isShared_4483_ == 0)
{
lean_ctor_set(v___x_4482_, 0, v___x_4488_);
v___x_4490_ = v___x_4482_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v___x_4488_);
lean_ctor_set(v_reuseFailAlloc_4491_, 1, v_a_4480_);
v___x_4490_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
return v___x_4490_;
}
}
}
}
else
{
lean_object* v_a_4493_; lean_object* v_a_4494_; lean_object* v___x_4496_; uint8_t v_isShared_4497_; uint8_t v_isSharedCheck_4501_; 
lean_dec_ref_known(v___x_4477_, 6);
v_a_4493_ = lean_ctor_get(v___x_4478_, 0);
v_a_4494_ = lean_ctor_get(v___x_4478_, 1);
v_isSharedCheck_4501_ = !lean_is_exclusive(v___x_4478_);
if (v_isSharedCheck_4501_ == 0)
{
v___x_4496_ = v___x_4478_;
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
else
{
lean_inc(v_a_4494_);
lean_inc(v_a_4493_);
lean_dec(v___x_4478_);
v___x_4496_ = lean_box(0);
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
v_resetjp_4495_:
{
lean_object* v___x_4499_; 
if (v_isShared_4497_ == 0)
{
v___x_4499_ = v___x_4496_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v_a_4493_);
lean_ctor_set(v_reuseFailAlloc_4500_, 1, v_a_4494_);
v___x_4499_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
return v___x_4499_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrio___boxed(lean_object* v_stx_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_){
_start:
{
lean_object* v_res_4511_; 
v_res_4511_ = l_Lean_evalPrio(v_stx_4508_, v_a_4509_, v_a_4510_);
lean_dec_ref(v_a_4509_);
return v_res_4511_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalOptPrio(lean_object* v_x_4512_, lean_object* v_a_4513_, lean_object* v_a_4514_){
_start:
{
if (lean_obj_tag(v_x_4512_) == 0)
{
lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4515_ = lean_unsigned_to_nat(1000u);
v___x_4516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4516_, 0, v___x_4515_);
lean_ctor_set(v___x_4516_, 1, v_a_4514_);
return v___x_4516_;
}
else
{
lean_object* v_val_4517_; lean_object* v___x_4518_; 
v_val_4517_ = lean_ctor_get(v_x_4512_, 0);
lean_inc(v_val_4517_);
lean_dec_ref_known(v_x_4512_, 1);
v___x_4518_ = l_Lean_evalPrio(v_val_4517_, v_a_4513_, v_a_4514_);
return v___x_4518_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalOptPrio___boxed(lean_object* v_x_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l_Lean_evalOptPrio(v_x_4519_, v_a_4520_, v_a_4521_);
lean_dec_ref(v_a_4520_);
return v_res_4522_;
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0(uint8_t v___x_4523_, lean_object* v_x1_4524_, lean_object* v_x2_4525_){
_start:
{
lean_object* v_fst_4526_; uint8_t v___x_4527_; 
v_fst_4526_ = lean_ctor_get(v_x1_4524_, 0);
v___x_4527_ = lean_unbox(v_fst_4526_);
if (v___x_4527_ == 0)
{
lean_object* v_snd_4528_; lean_object* v___x_4530_; uint8_t v_isShared_4531_; uint8_t v_isSharedCheck_4536_; 
lean_dec(v_x2_4525_);
v_snd_4528_ = lean_ctor_get(v_x1_4524_, 1);
v_isSharedCheck_4536_ = !lean_is_exclusive(v_x1_4524_);
if (v_isSharedCheck_4536_ == 0)
{
lean_object* v_unused_4537_; 
v_unused_4537_ = lean_ctor_get(v_x1_4524_, 0);
lean_dec(v_unused_4537_);
v___x_4530_ = v_x1_4524_;
v_isShared_4531_ = v_isSharedCheck_4536_;
goto v_resetjp_4529_;
}
else
{
lean_inc(v_snd_4528_);
lean_dec(v_x1_4524_);
v___x_4530_ = lean_box(0);
v_isShared_4531_ = v_isSharedCheck_4536_;
goto v_resetjp_4529_;
}
v_resetjp_4529_:
{
lean_object* v___x_4532_; lean_object* v___x_4534_; 
v___x_4532_ = lean_box(v___x_4523_);
if (v_isShared_4531_ == 0)
{
lean_ctor_set(v___x_4530_, 0, v___x_4532_);
v___x_4534_ = v___x_4530_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v___x_4532_);
lean_ctor_set(v_reuseFailAlloc_4535_, 1, v_snd_4528_);
v___x_4534_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
return v___x_4534_;
}
}
}
else
{
lean_object* v_snd_4538_; lean_object* v___x_4540_; uint8_t v_isShared_4541_; uint8_t v_isSharedCheck_4548_; 
v_snd_4538_ = lean_ctor_get(v_x1_4524_, 1);
v_isSharedCheck_4548_ = !lean_is_exclusive(v_x1_4524_);
if (v_isSharedCheck_4548_ == 0)
{
lean_object* v_unused_4549_; 
v_unused_4549_ = lean_ctor_get(v_x1_4524_, 0);
lean_dec(v_unused_4549_);
v___x_4540_ = v_x1_4524_;
v_isShared_4541_ = v_isSharedCheck_4548_;
goto v_resetjp_4539_;
}
else
{
lean_inc(v_snd_4538_);
lean_dec(v_x1_4524_);
v___x_4540_ = lean_box(0);
v_isShared_4541_ = v_isSharedCheck_4548_;
goto v_resetjp_4539_;
}
v_resetjp_4539_:
{
uint8_t v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4546_; 
v___x_4542_ = 0;
v___x_4543_ = lean_array_push(v_snd_4538_, v_x2_4525_);
v___x_4544_ = lean_box(v___x_4542_);
if (v_isShared_4541_ == 0)
{
lean_ctor_set(v___x_4540_, 1, v___x_4543_);
lean_ctor_set(v___x_4540_, 0, v___x_4544_);
v___x_4546_ = v___x_4540_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4547_; 
v_reuseFailAlloc_4547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4547_, 0, v___x_4544_);
lean_ctor_set(v_reuseFailAlloc_4547_, 1, v___x_4543_);
v___x_4546_ = v_reuseFailAlloc_4547_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
return v___x_4546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0___boxed(lean_object* v___x_4550_, lean_object* v_x1_4551_, lean_object* v_x2_4552_){
_start:
{
uint8_t v___x_87__boxed_4553_; lean_object* v_res_4554_; 
v___x_87__boxed_4553_ = lean_unbox(v___x_4550_);
v_res_4554_ = l_Array_getSepElems___redArg___lam__0(v___x_87__boxed_4553_, v_x1_4551_, v_x2_4552_);
return v_res_4554_;
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg(lean_object* v_as_4576_){
_start:
{
lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; uint8_t v___x_4581_; 
v___x_4577_ = lean_unsigned_to_nat(0u);
v___x_4578_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__0));
v___x_4579_ = lean_array_get_size(v_as_4576_);
v___x_4580_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__10));
v___x_4581_ = lean_nat_dec_lt(v___x_4577_, v___x_4579_);
if (v___x_4581_ == 0)
{
lean_dec_ref(v_as_4576_);
return v___x_4578_;
}
else
{
lean_object* v___x_4582_; lean_object* v___f_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; size_t v___x_4586_; size_t v___x_4587_; lean_object* v___x_4588_; lean_object* v_snd_4589_; 
v___x_4582_ = lean_box(v___x_4581_);
v___f_4583_ = lean_alloc_closure((void*)(l_Array_getSepElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4583_, 0, v___x_4582_);
v___x_4584_ = lean_box(v___x_4581_);
v___x_4585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4585_, 0, v___x_4584_);
lean_ctor_set(v___x_4585_, 1, v___x_4578_);
v___x_4586_ = ((size_t)0ULL);
v___x_4587_ = lean_usize_of_nat(v___x_4579_);
v___x_4588_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4580_, v___f_4583_, v_as_4576_, v___x_4586_, v___x_4587_, v___x_4585_);
v_snd_4589_ = lean_ctor_get(v___x_4588_, 1);
lean_inc(v_snd_4589_);
lean_dec(v___x_4588_);
return v_snd_4589_;
}
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems(lean_object* v_00_u03b1_4590_, lean_object* v_as_4591_){
_start:
{
lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; uint8_t v___x_4596_; 
v___x_4592_ = lean_unsigned_to_nat(0u);
v___x_4593_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__0));
v___x_4594_ = lean_array_get_size(v_as_4591_);
v___x_4595_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__10));
v___x_4596_ = lean_nat_dec_lt(v___x_4592_, v___x_4594_);
if (v___x_4596_ == 0)
{
lean_dec_ref(v_as_4591_);
return v___x_4593_;
}
else
{
lean_object* v___x_4597_; lean_object* v___f_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; size_t v___x_4601_; size_t v___x_4602_; lean_object* v___x_4603_; lean_object* v_snd_4604_; 
v___x_4597_ = lean_box(v___x_4596_);
v___f_4598_ = lean_alloc_closure((void*)(l_Array_getSepElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4598_, 0, v___x_4597_);
v___x_4599_ = lean_box(v___x_4596_);
v___x_4600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4599_);
lean_ctor_set(v___x_4600_, 1, v___x_4593_);
v___x_4601_ = ((size_t)0ULL);
v___x_4602_ = lean_usize_of_nat(v___x_4594_);
v___x_4603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4595_, v___f_4598_, v_as_4591_, v___x_4601_, v___x_4602_, v___x_4600_);
v_snd_4604_ = lean_ctor_get(v___x_4603_, 1);
lean_inc(v_snd_4604_);
lean_dec(v___x_4603_);
return v_snd_4604_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0(lean_object* v_i_4605_, lean_object* v_inst_4606_, lean_object* v_a_4607_, lean_object* v_p_4608_, lean_object* v_acc_4609_, lean_object* v_stx_4610_, uint8_t v_____do__lift_4611_){
_start:
{
if (v_____do__lift_4611_ == 0)
{
lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; 
lean_dec(v_stx_4610_);
v___x_4612_ = lean_unsigned_to_nat(2u);
v___x_4613_ = lean_nat_add(v_i_4605_, v___x_4612_);
v___x_4614_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4606_, v_a_4607_, v_p_4608_, v___x_4613_, v_acc_4609_);
return v___x_4614_;
}
else
{
lean_object* v___x_4615_; lean_object* v___x_4616_; uint8_t v___x_4617_; 
v___x_4615_ = lean_array_get_size(v_acc_4609_);
v___x_4616_ = lean_unsigned_to_nat(0u);
v___x_4617_ = lean_nat_dec_eq(v___x_4615_, v___x_4616_);
if (v___x_4617_ == 0)
{
uint8_t v___x_4618_; 
v___x_4618_ = lean_nat_dec_eq(v_i_4605_, v___x_4616_);
if (v___x_4618_ == 0)
{
lean_object* v___x_4619_; lean_object* v_sepStx_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; 
v___x_4619_ = lean_nat_pred(v_i_4605_);
v_sepStx_4620_ = lean_array_fget_borrowed(v_a_4607_, v___x_4619_);
lean_dec(v___x_4619_);
v___x_4621_ = lean_unsigned_to_nat(2u);
v___x_4622_ = lean_nat_add(v_i_4605_, v___x_4621_);
lean_inc(v_sepStx_4620_);
v___x_4623_ = lean_array_push(v_acc_4609_, v_sepStx_4620_);
v___x_4624_ = lean_array_push(v___x_4623_, v_stx_4610_);
v___x_4625_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4606_, v_a_4607_, v_p_4608_, v___x_4622_, v___x_4624_);
return v___x_4625_;
}
else
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4626_ = lean_unsigned_to_nat(2u);
v___x_4627_ = lean_nat_add(v_i_4605_, v___x_4626_);
v___x_4628_ = lean_array_push(v_acc_4609_, v_stx_4610_);
v___x_4629_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4606_, v_a_4607_, v_p_4608_, v___x_4627_, v___x_4628_);
return v___x_4629_;
}
}
else
{
lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4630_ = lean_unsigned_to_nat(2u);
v___x_4631_ = lean_nat_add(v_i_4605_, v___x_4630_);
v___x_4632_ = lean_array_push(v_acc_4609_, v_stx_4610_);
v___x_4633_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4606_, v_a_4607_, v_p_4608_, v___x_4631_, v___x_4632_);
return v___x_4633_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0___boxed(lean_object* v_i_4634_, lean_object* v_inst_4635_, lean_object* v_a_4636_, lean_object* v_p_4637_, lean_object* v_acc_4638_, lean_object* v_stx_4639_, lean_object* v_____do__lift_4640_){
_start:
{
uint8_t v_____do__lift_289__boxed_4641_; lean_object* v_res_4642_; 
v_____do__lift_289__boxed_4641_ = lean_unbox(v_____do__lift_4640_);
v_res_4642_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0(v_i_4634_, v_inst_4635_, v_a_4636_, v_p_4637_, v_acc_4638_, v_stx_4639_, v_____do__lift_289__boxed_4641_);
lean_dec(v_i_4634_);
return v_res_4642_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(lean_object* v_inst_4643_, lean_object* v_a_4644_, lean_object* v_p_4645_, lean_object* v_i_4646_, lean_object* v_acc_4647_){
_start:
{
lean_object* v_toApplicative_4648_; lean_object* v_toBind_4649_; lean_object* v_toPure_4650_; lean_object* v___x_4651_; uint8_t v___x_4652_; 
v_toApplicative_4648_ = lean_ctor_get(v_inst_4643_, 0);
v_toBind_4649_ = lean_ctor_get(v_inst_4643_, 1);
lean_inc(v_toBind_4649_);
v_toPure_4650_ = lean_ctor_get(v_toApplicative_4648_, 1);
v___x_4651_ = lean_array_get_size(v_a_4644_);
v___x_4652_ = lean_nat_dec_lt(v_i_4646_, v___x_4651_);
if (v___x_4652_ == 0)
{
lean_object* v___x_4653_; 
lean_inc(v_toPure_4650_);
lean_dec(v_toBind_4649_);
lean_dec(v_i_4646_);
lean_dec(v_p_4645_);
lean_dec_ref(v_a_4644_);
lean_dec_ref(v_inst_4643_);
v___x_4653_ = lean_apply_2(v_toPure_4650_, lean_box(0), v_acc_4647_);
return v___x_4653_;
}
else
{
lean_object* v_stx_4654_; lean_object* v___f_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; 
v_stx_4654_ = lean_array_fget(v_a_4644_, v_i_4646_);
lean_inc(v_stx_4654_);
lean_inc(v_p_4645_);
v___f_4655_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_4655_, 0, v_i_4646_);
lean_closure_set(v___f_4655_, 1, v_inst_4643_);
lean_closure_set(v___f_4655_, 2, v_a_4644_);
lean_closure_set(v___f_4655_, 3, v_p_4645_);
lean_closure_set(v___f_4655_, 4, v_acc_4647_);
lean_closure_set(v___f_4655_, 5, v_stx_4654_);
v___x_4656_ = lean_apply_1(v_p_4645_, v_stx_4654_);
v___x_4657_ = lean_apply_4(v_toBind_4649_, lean_box(0), lean_box(0), v___x_4656_, v___f_4655_);
return v___x_4657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux(lean_object* v_m_4658_, lean_object* v_inst_4659_, lean_object* v_a_4660_, lean_object* v_p_4661_, lean_object* v_i_4662_, lean_object* v_acc_4663_){
_start:
{
lean_object* v___x_4664_; 
v___x_4664_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4659_, v_a_4660_, v_p_4661_, v_i_4662_, v_acc_4663_);
return v___x_4664_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___redArg(lean_object* v_inst_4665_, lean_object* v_a_4666_, lean_object* v_p_4667_){
_start:
{
lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; 
v___x_4668_ = lean_unsigned_to_nat(0u);
v___x_4669_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4670_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4665_, v_a_4666_, v_p_4667_, v___x_4668_, v___x_4669_);
return v___x_4670_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM(lean_object* v_m_4671_, lean_object* v_inst_4672_, lean_object* v_a_4673_, lean_object* v_p_4674_){
_start:
{
lean_object* v___x_4675_; 
v___x_4675_ = l_Array_filterSepElemsM___redArg(v_inst_4672_, v_a_4673_, v_p_4674_);
return v___x_4675_;
}
}
LEAN_EXPORT uint8_t l_Array_filterSepElems___lam__0(lean_object* v_p_4676_, lean_object* v_x_4677_){
_start:
{
lean_object* v___x_4678_; uint8_t v___x_4679_; 
v___x_4678_ = lean_apply_1(v_p_4676_, v_x_4677_);
v___x_4679_ = lean_unbox(v___x_4678_);
return v___x_4679_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElems___lam__0___boxed(lean_object* v_p_4680_, lean_object* v_x_4681_){
_start:
{
uint8_t v_res_4682_; lean_object* v_r_4683_; 
v_res_4682_ = l_Array_filterSepElems___lam__0(v_p_4680_, v_x_4681_);
v_r_4683_ = lean_box(v_res_4682_);
return v_r_4683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(lean_object* v_a_4684_, lean_object* v_p_4685_, lean_object* v_i_4686_, lean_object* v_acc_4687_){
_start:
{
lean_object* v___x_4688_; uint8_t v___x_4689_; 
v___x_4688_ = lean_array_get_size(v_a_4684_);
v___x_4689_ = lean_nat_dec_lt(v_i_4686_, v___x_4688_);
if (v___x_4689_ == 0)
{
lean_dec(v_i_4686_);
lean_dec_ref(v_p_4685_);
return v_acc_4687_;
}
else
{
lean_object* v_stx_4690_; lean_object* v___x_4691_; uint8_t v___x_4692_; 
v_stx_4690_ = lean_array_fget_borrowed(v_a_4684_, v_i_4686_);
lean_inc_ref(v_p_4685_);
lean_inc(v_stx_4690_);
v___x_4691_ = lean_apply_1(v_p_4685_, v_stx_4690_);
v___x_4692_ = lean_unbox(v___x_4691_);
if (v___x_4692_ == 0)
{
lean_object* v___x_4693_; lean_object* v___x_4694_; 
v___x_4693_ = lean_unsigned_to_nat(2u);
v___x_4694_ = lean_nat_add(v_i_4686_, v___x_4693_);
lean_dec(v_i_4686_);
v_i_4686_ = v___x_4694_;
goto _start;
}
else
{
lean_object* v___x_4696_; lean_object* v___x_4697_; uint8_t v___x_4698_; 
v___x_4696_ = lean_array_get_size(v_acc_4687_);
v___x_4697_ = lean_unsigned_to_nat(0u);
v___x_4698_ = lean_nat_dec_eq(v___x_4696_, v___x_4697_);
if (v___x_4698_ == 0)
{
uint8_t v___x_4699_; 
v___x_4699_ = lean_nat_dec_eq(v_i_4686_, v___x_4697_);
if (v___x_4699_ == 0)
{
lean_object* v___x_4700_; lean_object* v_sepStx_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
v___x_4700_ = lean_nat_pred(v_i_4686_);
v_sepStx_4701_ = lean_array_fget_borrowed(v_a_4684_, v___x_4700_);
lean_dec(v___x_4700_);
v___x_4702_ = lean_unsigned_to_nat(2u);
v___x_4703_ = lean_nat_add(v_i_4686_, v___x_4702_);
lean_dec(v_i_4686_);
lean_inc(v_sepStx_4701_);
v___x_4704_ = lean_array_push(v_acc_4687_, v_sepStx_4701_);
lean_inc(v_stx_4690_);
v___x_4705_ = lean_array_push(v___x_4704_, v_stx_4690_);
v_i_4686_ = v___x_4703_;
v_acc_4687_ = v___x_4705_;
goto _start;
}
else
{
lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; 
v___x_4707_ = lean_unsigned_to_nat(2u);
v___x_4708_ = lean_nat_add(v_i_4686_, v___x_4707_);
lean_dec(v_i_4686_);
lean_inc(v_stx_4690_);
v___x_4709_ = lean_array_push(v_acc_4687_, v_stx_4690_);
v_i_4686_ = v___x_4708_;
v_acc_4687_ = v___x_4709_;
goto _start;
}
}
else
{
lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; 
v___x_4711_ = lean_unsigned_to_nat(2u);
v___x_4712_ = lean_nat_add(v_i_4686_, v___x_4711_);
lean_dec(v_i_4686_);
lean_inc(v_stx_4690_);
v___x_4713_ = lean_array_push(v_acc_4687_, v_stx_4690_);
v_i_4686_ = v___x_4712_;
v_acc_4687_ = v___x_4713_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0___boxed(lean_object* v_a_4715_, lean_object* v_p_4716_, lean_object* v_i_4717_, lean_object* v_acc_4718_){
_start:
{
lean_object* v_res_4719_; 
v_res_4719_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(v_a_4715_, v_p_4716_, v_i_4717_, v_acc_4718_);
lean_dec_ref(v_a_4715_);
return v_res_4719_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(lean_object* v_a_4720_, lean_object* v_p_4721_){
_start:
{
lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; 
v___x_4722_ = lean_unsigned_to_nat(0u);
v___x_4723_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4724_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(v_a_4720_, v_p_4721_, v___x_4722_, v___x_4723_);
return v___x_4724_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0___boxed(lean_object* v_a_4725_, lean_object* v_p_4726_){
_start:
{
lean_object* v_res_4727_; 
v_res_4727_ = l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(v_a_4725_, v_p_4726_);
lean_dec_ref(v_a_4725_);
return v_res_4727_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElems(lean_object* v_a_4728_, lean_object* v_p_4729_){
_start:
{
lean_object* v___f_4730_; lean_object* v___x_4731_; 
v___f_4730_ = lean_alloc_closure((void*)(l_Array_filterSepElems___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4730_, 0, v_p_4729_);
v___x_4731_ = l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(v_a_4728_, v___f_4730_);
return v___x_4731_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElems___boxed(lean_object* v_a_4732_, lean_object* v_p_4733_){
_start:
{
lean_object* v_res_4734_; 
v_res_4734_ = l_Array_filterSepElems(v_a_4732_, v_p_4733_);
lean_dec_ref(v_a_4732_);
return v_res_4734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0___boxed(lean_object* v_i_4735_, lean_object* v_acc_4736_, lean_object* v_inst_4737_, lean_object* v_a_4738_, lean_object* v_f_4739_, lean_object* v_stx_4740_){
_start:
{
lean_object* v_res_4741_; 
v_res_4741_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0(v_i_4735_, v_acc_4736_, v_inst_4737_, v_a_4738_, v_f_4739_, v_stx_4740_);
lean_dec(v_i_4735_);
return v_res_4741_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(lean_object* v_inst_4742_, lean_object* v_a_4743_, lean_object* v_f_4744_, lean_object* v_i_4745_, lean_object* v_acc_4746_){
_start:
{
lean_object* v_toApplicative_4747_; lean_object* v_toBind_4748_; lean_object* v_toPure_4749_; lean_object* v___x_4750_; uint8_t v___x_4751_; 
v_toApplicative_4747_ = lean_ctor_get(v_inst_4742_, 0);
v_toBind_4748_ = lean_ctor_get(v_inst_4742_, 1);
v_toPure_4749_ = lean_ctor_get(v_toApplicative_4747_, 1);
v___x_4750_ = lean_array_get_size(v_a_4743_);
v___x_4751_ = lean_nat_dec_lt(v_i_4745_, v___x_4750_);
if (v___x_4751_ == 0)
{
lean_object* v___x_4752_; 
lean_inc(v_toPure_4749_);
lean_dec(v_i_4745_);
lean_dec(v_f_4744_);
lean_dec_ref(v_a_4743_);
lean_dec_ref(v_inst_4742_);
v___x_4752_ = lean_apply_2(v_toPure_4749_, lean_box(0), v_acc_4746_);
return v___x_4752_;
}
else
{
lean_object* v_stx_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; uint8_t v___x_4757_; 
v_stx_4753_ = lean_array_fget_borrowed(v_a_4743_, v_i_4745_);
v___x_4754_ = lean_unsigned_to_nat(2u);
v___x_4755_ = lean_nat_mod(v_i_4745_, v___x_4754_);
v___x_4756_ = lean_unsigned_to_nat(0u);
v___x_4757_ = lean_nat_dec_eq(v___x_4755_, v___x_4756_);
lean_dec(v___x_4755_);
if (v___x_4757_ == 0)
{
lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
v___x_4758_ = lean_unsigned_to_nat(1u);
v___x_4759_ = lean_nat_add(v_i_4745_, v___x_4758_);
lean_dec(v_i_4745_);
lean_inc(v_stx_4753_);
v___x_4760_ = lean_array_push(v_acc_4746_, v_stx_4753_);
v_i_4745_ = v___x_4759_;
v_acc_4746_ = v___x_4760_;
goto _start;
}
else
{
lean_object* v___f_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; 
lean_inc(v_stx_4753_);
lean_inc(v_toBind_4748_);
lean_inc(v_f_4744_);
v___f_4762_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_4762_, 0, v_i_4745_);
lean_closure_set(v___f_4762_, 1, v_acc_4746_);
lean_closure_set(v___f_4762_, 2, v_inst_4742_);
lean_closure_set(v___f_4762_, 3, v_a_4743_);
lean_closure_set(v___f_4762_, 4, v_f_4744_);
v___x_4763_ = lean_apply_1(v_f_4744_, v_stx_4753_);
v___x_4764_ = lean_apply_4(v_toBind_4748_, lean_box(0), lean_box(0), v___x_4763_, v___f_4762_);
return v___x_4764_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0(lean_object* v_i_4765_, lean_object* v_acc_4766_, lean_object* v_inst_4767_, lean_object* v_a_4768_, lean_object* v_f_4769_, lean_object* v_stx_4770_){
_start:
{
lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; 
v___x_4771_ = lean_unsigned_to_nat(1u);
v___x_4772_ = lean_nat_add(v_i_4765_, v___x_4771_);
v___x_4773_ = lean_array_push(v_acc_4766_, v_stx_4770_);
v___x_4774_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(v_inst_4767_, v_a_4768_, v_f_4769_, v___x_4772_, v___x_4773_);
return v___x_4774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux(lean_object* v_m_4775_, lean_object* v_inst_4776_, lean_object* v_a_4777_, lean_object* v_f_4778_, lean_object* v_i_4779_, lean_object* v_acc_4780_){
_start:
{
lean_object* v___x_4781_; 
v___x_4781_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(v_inst_4776_, v_a_4777_, v_f_4778_, v_i_4779_, v_acc_4780_);
return v___x_4781_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___redArg(lean_object* v_inst_4782_, lean_object* v_a_4783_, lean_object* v_f_4784_){
_start:
{
lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; 
v___x_4785_ = lean_unsigned_to_nat(0u);
v___x_4786_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4787_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(v_inst_4782_, v_a_4783_, v_f_4784_, v___x_4785_, v___x_4786_);
return v___x_4787_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM(lean_object* v_m_4788_, lean_object* v_inst_4789_, lean_object* v_a_4790_, lean_object* v_f_4791_){
_start:
{
lean_object* v___x_4792_; 
v___x_4792_ = l_Array_mapSepElemsM___redArg(v_inst_4789_, v_a_4790_, v_f_4791_);
return v___x_4792_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElems___lam__0(lean_object* v_f_4793_, lean_object* v_x_4794_){
_start:
{
lean_object* v___x_4795_; 
v___x_4795_ = lean_apply_1(v_f_4793_, v_x_4794_);
return v___x_4795_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(lean_object* v_a_4796_, lean_object* v_f_4797_, lean_object* v_i_4798_, lean_object* v_acc_4799_){
_start:
{
lean_object* v___x_4800_; uint8_t v___x_4801_; 
v___x_4800_ = lean_array_get_size(v_a_4796_);
v___x_4801_ = lean_nat_dec_lt(v_i_4798_, v___x_4800_);
if (v___x_4801_ == 0)
{
lean_dec(v_i_4798_);
lean_dec_ref(v_f_4797_);
return v_acc_4799_;
}
else
{
lean_object* v_stx_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; uint8_t v___x_4806_; 
v_stx_4802_ = lean_array_fget_borrowed(v_a_4796_, v_i_4798_);
v___x_4803_ = lean_unsigned_to_nat(2u);
v___x_4804_ = lean_nat_mod(v_i_4798_, v___x_4803_);
v___x_4805_ = lean_unsigned_to_nat(0u);
v___x_4806_ = lean_nat_dec_eq(v___x_4804_, v___x_4805_);
lean_dec(v___x_4804_);
if (v___x_4806_ == 0)
{
lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; 
v___x_4807_ = lean_unsigned_to_nat(1u);
v___x_4808_ = lean_nat_add(v_i_4798_, v___x_4807_);
lean_dec(v_i_4798_);
lean_inc(v_stx_4802_);
v___x_4809_ = lean_array_push(v_acc_4799_, v_stx_4802_);
v_i_4798_ = v___x_4808_;
v_acc_4799_ = v___x_4809_;
goto _start;
}
else
{
lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; 
lean_inc_ref(v_f_4797_);
lean_inc(v_stx_4802_);
v___x_4811_ = lean_apply_1(v_f_4797_, v_stx_4802_);
v___x_4812_ = lean_unsigned_to_nat(1u);
v___x_4813_ = lean_nat_add(v_i_4798_, v___x_4812_);
lean_dec(v_i_4798_);
v___x_4814_ = lean_array_push(v_acc_4799_, v___x_4811_);
v_i_4798_ = v___x_4813_;
v_acc_4799_ = v___x_4814_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0___boxed(lean_object* v_a_4816_, lean_object* v_f_4817_, lean_object* v_i_4818_, lean_object* v_acc_4819_){
_start:
{
lean_object* v_res_4820_; 
v_res_4820_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(v_a_4816_, v_f_4817_, v_i_4818_, v_acc_4819_);
lean_dec_ref(v_a_4816_);
return v_res_4820_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(lean_object* v_a_4821_, lean_object* v_f_4822_){
_start:
{
lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; 
v___x_4823_ = lean_unsigned_to_nat(0u);
v___x_4824_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4825_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(v_a_4821_, v_f_4822_, v___x_4823_, v___x_4824_);
return v___x_4825_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0___boxed(lean_object* v_a_4826_, lean_object* v_f_4827_){
_start:
{
lean_object* v_res_4828_; 
v_res_4828_ = l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(v_a_4826_, v_f_4827_);
lean_dec_ref(v_a_4826_);
return v_res_4828_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElems(lean_object* v_a_4829_, lean_object* v_f_4830_){
_start:
{
lean_object* v___f_4831_; lean_object* v___x_4832_; 
v___f_4831_ = lean_alloc_closure((void*)(l_Array_mapSepElems___lam__0), 2, 1);
lean_closure_set(v___f_4831_, 0, v_f_4830_);
v___x_4832_ = l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(v_a_4829_, v___f_4831_);
return v___x_4832_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElems___boxed(lean_object* v_a_4833_, lean_object* v_f_4834_){
_start:
{
lean_object* v_res_4835_; 
v_res_4835_ = l_Array_mapSepElems(v_a_4833_, v_f_4834_);
lean_dec_ref(v_a_4833_);
return v_res_4835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(lean_object* v_as_4836_, size_t v_i_4837_, size_t v_stop_4838_, lean_object* v_b_4839_){
_start:
{
lean_object* v___y_4841_; uint8_t v___x_4845_; 
v___x_4845_ = lean_usize_dec_eq(v_i_4837_, v_stop_4838_);
if (v___x_4845_ == 0)
{
lean_object* v_fst_4846_; uint8_t v___x_4847_; 
v_fst_4846_ = lean_ctor_get(v_b_4839_, 0);
v___x_4847_ = lean_unbox(v_fst_4846_);
if (v___x_4847_ == 0)
{
lean_object* v_snd_4848_; lean_object* v___x_4850_; uint8_t v_isShared_4851_; uint8_t v_isSharedCheck_4857_; 
v_snd_4848_ = lean_ctor_get(v_b_4839_, 1);
v_isSharedCheck_4857_ = !lean_is_exclusive(v_b_4839_);
if (v_isSharedCheck_4857_ == 0)
{
lean_object* v_unused_4858_; 
v_unused_4858_ = lean_ctor_get(v_b_4839_, 0);
lean_dec(v_unused_4858_);
v___x_4850_ = v_b_4839_;
v_isShared_4851_ = v_isSharedCheck_4857_;
goto v_resetjp_4849_;
}
else
{
lean_inc(v_snd_4848_);
lean_dec(v_b_4839_);
v___x_4850_ = lean_box(0);
v_isShared_4851_ = v_isSharedCheck_4857_;
goto v_resetjp_4849_;
}
v_resetjp_4849_:
{
uint8_t v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4855_; 
v___x_4852_ = 1;
v___x_4853_ = lean_box(v___x_4852_);
if (v_isShared_4851_ == 0)
{
lean_ctor_set(v___x_4850_, 0, v___x_4853_);
v___x_4855_ = v___x_4850_;
goto v_reusejp_4854_;
}
else
{
lean_object* v_reuseFailAlloc_4856_; 
v_reuseFailAlloc_4856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4856_, 0, v___x_4853_);
lean_ctor_set(v_reuseFailAlloc_4856_, 1, v_snd_4848_);
v___x_4855_ = v_reuseFailAlloc_4856_;
goto v_reusejp_4854_;
}
v_reusejp_4854_:
{
v___y_4841_ = v___x_4855_;
goto v___jp_4840_;
}
}
}
else
{
lean_object* v_snd_4859_; lean_object* v___x_4861_; uint8_t v_isShared_4862_; uint8_t v_isSharedCheck_4869_; 
v_snd_4859_ = lean_ctor_get(v_b_4839_, 1);
v_isSharedCheck_4869_ = !lean_is_exclusive(v_b_4839_);
if (v_isSharedCheck_4869_ == 0)
{
lean_object* v_unused_4870_; 
v_unused_4870_ = lean_ctor_get(v_b_4839_, 0);
lean_dec(v_unused_4870_);
v___x_4861_ = v_b_4839_;
v_isShared_4862_ = v_isSharedCheck_4869_;
goto v_resetjp_4860_;
}
else
{
lean_inc(v_snd_4859_);
lean_dec(v_b_4839_);
v___x_4861_ = lean_box(0);
v_isShared_4862_ = v_isSharedCheck_4869_;
goto v_resetjp_4860_;
}
v_resetjp_4860_:
{
lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4867_; 
v___x_4863_ = lean_array_uget_borrowed(v_as_4836_, v_i_4837_);
lean_inc(v___x_4863_);
v___x_4864_ = lean_array_push(v_snd_4859_, v___x_4863_);
v___x_4865_ = lean_box(v___x_4845_);
if (v_isShared_4862_ == 0)
{
lean_ctor_set(v___x_4861_, 1, v___x_4864_);
lean_ctor_set(v___x_4861_, 0, v___x_4865_);
v___x_4867_ = v___x_4861_;
goto v_reusejp_4866_;
}
else
{
lean_object* v_reuseFailAlloc_4868_; 
v_reuseFailAlloc_4868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4868_, 0, v___x_4865_);
lean_ctor_set(v_reuseFailAlloc_4868_, 1, v___x_4864_);
v___x_4867_ = v_reuseFailAlloc_4868_;
goto v_reusejp_4866_;
}
v_reusejp_4866_:
{
v___y_4841_ = v___x_4867_;
goto v___jp_4840_;
}
}
}
}
else
{
return v_b_4839_;
}
v___jp_4840_:
{
size_t v___x_4842_; size_t v___x_4843_; 
v___x_4842_ = ((size_t)1ULL);
v___x_4843_ = lean_usize_add(v_i_4837_, v___x_4842_);
v_i_4837_ = v___x_4843_;
v_b_4839_ = v___y_4841_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0___boxed(lean_object* v_as_4871_, lean_object* v_i_4872_, lean_object* v_stop_4873_, lean_object* v_b_4874_){
_start:
{
size_t v_i_boxed_4875_; size_t v_stop_boxed_4876_; lean_object* v_res_4877_; 
v_i_boxed_4875_ = lean_unbox_usize(v_i_4872_);
lean_dec(v_i_4872_);
v_stop_boxed_4876_ = lean_unbox_usize(v_stop_4873_);
lean_dec(v_stop_4873_);
v_res_4877_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v_as_4871_, v_i_boxed_4875_, v_stop_boxed_4876_, v_b_4874_);
lean_dec_ref(v_as_4871_);
return v_res_4877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg(lean_object* v_sa_4878_){
_start:
{
lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; uint8_t v___x_4882_; 
v___x_4879_ = lean_unsigned_to_nat(0u);
v___x_4880_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_4881_ = lean_array_get_size(v_sa_4878_);
v___x_4882_ = lean_nat_dec_lt(v___x_4879_, v___x_4881_);
if (v___x_4882_ == 0)
{
return v___x_4880_;
}
else
{
lean_object* v___x_4883_; lean_object* v___x_4884_; size_t v___x_4885_; size_t v___x_4886_; lean_object* v___x_4887_; lean_object* v_snd_4888_; 
v___x_4883_ = lean_box(v___x_4882_);
v___x_4884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4884_, 0, v___x_4883_);
lean_ctor_set(v___x_4884_, 1, v___x_4880_);
v___x_4885_ = ((size_t)0ULL);
v___x_4886_ = lean_usize_of_nat(v___x_4881_);
v___x_4887_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v_sa_4878_, v___x_4885_, v___x_4886_, v___x_4884_);
v_snd_4888_ = lean_ctor_get(v___x_4887_, 1);
lean_inc(v_snd_4888_);
lean_dec_ref(v___x_4887_);
return v_snd_4888_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg___boxed(lean_object* v_sa_4889_){
_start:
{
lean_object* v_res_4890_; 
v_res_4890_ = l_Lean_Syntax_SepArray_getElems___redArg(v_sa_4889_);
lean_dec_ref(v_sa_4889_);
return v_res_4890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems(lean_object* v_sep_4891_, lean_object* v_sa_4892_){
_start:
{
lean_object* v___x_4893_; 
v___x_4893_ = l_Lean_Syntax_SepArray_getElems___redArg(v_sa_4892_);
return v___x_4893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___boxed(lean_object* v_sep_4894_, lean_object* v_sa_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l_Lean_Syntax_SepArray_getElems(v_sep_4894_, v_sa_4895_);
lean_dec_ref(v_sa_4895_);
lean_dec_ref(v_sep_4894_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object* v_sa_4897_){
_start:
{
lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; uint8_t v___x_4901_; 
v___x_4898_ = lean_unsigned_to_nat(0u);
v___x_4899_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_4900_ = lean_array_get_size(v_sa_4897_);
v___x_4901_ = lean_nat_dec_lt(v___x_4898_, v___x_4900_);
if (v___x_4901_ == 0)
{
return v___x_4899_;
}
else
{
lean_object* v___x_4902_; lean_object* v___x_4903_; size_t v___x_4904_; size_t v___x_4905_; lean_object* v___x_4906_; lean_object* v_snd_4907_; 
v___x_4902_ = lean_box(v___x_4901_);
v___x_4903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4903_, 0, v___x_4902_);
lean_ctor_set(v___x_4903_, 1, v___x_4899_);
v___x_4904_ = ((size_t)0ULL);
v___x_4905_ = lean_usize_of_nat(v___x_4900_);
v___x_4906_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v_sa_4897_, v___x_4904_, v___x_4905_, v___x_4903_);
v_snd_4907_ = lean_ctor_get(v___x_4906_, 1);
lean_inc(v_snd_4907_);
lean_dec_ref(v___x_4906_);
return v_snd_4907_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg___boxed(lean_object* v_sa_4908_){
_start:
{
lean_object* v_res_4909_; 
v_res_4909_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_sa_4908_);
lean_dec_ref(v_sa_4908_);
return v_res_4909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems(lean_object* v_k_4910_, lean_object* v_sep_4911_, lean_object* v_sa_4912_){
_start:
{
lean_object* v___x_4913_; 
v___x_4913_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_sa_4912_);
return v___x_4913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___boxed(lean_object* v_k_4914_, lean_object* v_sep_4915_, lean_object* v_sa_4916_){
_start:
{
lean_object* v_res_4917_; 
v_res_4917_ = l_Lean_Syntax_TSepArray_getElems(v_k_4914_, v_sep_4915_, v_sa_4916_);
lean_dec_ref(v_sa_4916_);
lean_dec_ref(v_sep_4915_);
lean_dec(v_k_4914_);
return v_res_4917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___redArg(lean_object* v_sep_4918_, lean_object* v_sa_4919_, lean_object* v_e_4920_){
_start:
{
lean_object* v___x_4921_; lean_object* v___x_4922_; uint8_t v___x_4923_; 
v___x_4921_ = lean_array_get_size(v_sa_4919_);
v___x_4922_ = lean_unsigned_to_nat(0u);
v___x_4923_ = lean_nat_dec_eq(v___x_4921_, v___x_4922_);
if (v___x_4923_ == 0)
{
lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; 
v___x_4924_ = l_Lean_mkAtom(v_sep_4918_);
v___x_4925_ = lean_array_push(v_sa_4919_, v___x_4924_);
v___x_4926_ = lean_array_push(v___x_4925_, v_e_4920_);
return v___x_4926_;
}
else
{
lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; 
lean_dec_ref(v_sa_4919_);
lean_dec_ref(v_sep_4918_);
v___x_4927_ = lean_unsigned_to_nat(1u);
v___x_4928_ = lean_mk_empty_array_with_capacity(v___x_4927_);
v___x_4929_ = lean_array_push(v___x_4928_, v_e_4920_);
return v___x_4929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push(lean_object* v_k_4930_, lean_object* v_sep_4931_, lean_object* v_sa_4932_, lean_object* v_e_4933_){
_start:
{
lean_object* v___x_4934_; 
v___x_4934_ = l_Lean_Syntax_TSepArray_push___redArg(v_sep_4931_, v_sa_4932_, v_e_4933_);
return v___x_4934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___boxed(lean_object* v_k_4935_, lean_object* v_sep_4936_, lean_object* v_sa_4937_, lean_object* v_e_4938_){
_start:
{
lean_object* v_res_4939_; 
v_res_4939_ = l_Lean_Syntax_TSepArray_push(v_k_4935_, v_sep_4936_, v_sa_4937_, v_e_4938_);
lean_dec(v_k_4935_);
return v_res_4939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg(){
_start:
{
lean_object* v___x_4941_; 
v___x_4941_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
return v___x_4941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg___boxed(lean_object* v___dummy_4942_){
_start:
{
lean_object* v_res_4943_; 
v_res_4943_ = l_Lean_Syntax_instEmptyCollectionSepArray___redArg();
return v_res_4943_;
}
}
static lean_object* _init_l_Lean_Syntax_instEmptyCollectionSepArray___closed__0(void){
_start:
{
lean_object* v___x_4944_; 
v___x_4944_ = l_Lean_Syntax_instEmptyCollectionSepArray___redArg();
return v___x_4944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray(lean_object* v_sep_4945_){
_start:
{
lean_object* v___x_4946_; 
v___x_4946_ = lean_obj_once(&l_Lean_Syntax_instEmptyCollectionSepArray___closed__0, &l_Lean_Syntax_instEmptyCollectionSepArray___closed__0_once, _init_l_Lean_Syntax_instEmptyCollectionSepArray___closed__0);
return v___x_4946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___boxed(lean_object* v_sep_4947_){
_start:
{
lean_object* v_res_4948_; 
v_res_4948_ = l_Lean_Syntax_instEmptyCollectionSepArray(v_sep_4947_);
lean_dec_ref(v_sep_4947_);
return v_res_4948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg(){
_start:
{
lean_object* v___x_4950_; 
v___x_4950_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
return v___x_4950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg___boxed(lean_object* v___dummy_4951_){
_start:
{
lean_object* v_res_4952_; 
v_res_4952_ = l_Lean_Syntax_instEmptyCollectionTSepArray___redArg();
return v_res_4952_;
}
}
static lean_object* _init_l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0(void){
_start:
{
lean_object* v___x_4953_; 
v___x_4953_ = l_Lean_Syntax_instEmptyCollectionTSepArray___redArg();
return v___x_4953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray(lean_object* v_sep_4954_, lean_object* v_k_4955_){
_start:
{
lean_object* v___x_4956_; 
v___x_4956_ = lean_obj_once(&l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0, &l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0_once, _init_l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0);
return v___x_4956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___boxed(lean_object* v_sep_4957_, lean_object* v_k_4958_){
_start:
{
lean_object* v_res_4959_; 
v_res_4959_ = l_Lean_Syntax_instEmptyCollectionTSepArray(v_sep_4957_, v_k_4958_);
lean_dec_ref(v_k_4958_);
lean_dec(v_sep_4957_);
return v_res_4959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0(lean_object* v_v_4960_){
_start:
{
lean_inc_ref(v_v_4960_);
return v_v_4960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0___boxed(lean_object* v_v_4961_){
_start:
{
lean_object* v_res_4962_; 
v_res_4962_ = l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0(v_v_4961_);
lean_dec_ref(v_v_4961_);
return v_res_4962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg(){
_start:
{
lean_object* v___f_4965_; 
v___f_4965_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0));
return v___f_4965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___boxed(lean_object* v___dummy_4966_){
_start:
{
lean_object* v_res_4967_; 
v_res_4967_ = l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg();
return v_res_4967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray(lean_object* v_k_4968_, lean_object* v_sep_4969_){
_start:
{
lean_object* v___f_4970_; 
v___f_4970_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0));
return v___f_4970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___boxed(lean_object* v_k_4971_, lean_object* v_sep_4972_){
_start:
{
lean_object* v_res_4973_; 
v_res_4973_ = l_Lean_Syntax_instCoeOutTSepArraySepArray(v_k_4971_, v_sep_4972_);
lean_dec_ref(v_sep_4972_);
lean_dec(v_k_4971_);
return v_res_4973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArrayTSyntaxArray(lean_object* v_k_4974_, lean_object* v_sep_4975_){
_start:
{
lean_object* v___x_4976_; 
v___x_4976_ = lean_alloc_closure((void*)(l_Lean_Syntax_TSepArray_getElems___boxed), 3, 2);
lean_closure_set(v___x_4976_, 0, v_k_4974_);
lean_closure_set(v___x_4976_, 1, v_sep_4975_);
return v___x_4976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__0(lean_object* v_inst_4977_, lean_object* v_x_4978_){
_start:
{
lean_object* v___x_4979_; 
v___x_4979_ = lean_apply_1(v_inst_4977_, v_x_4978_);
return v___x_4979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1(lean_object* v___f_4980_, lean_object* v_a_4981_){
_start:
{
lean_object* v___x_4982_; size_t v_sz_4983_; size_t v___x_4984_; lean_object* v___x_4985_; 
v___x_4982_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__10));
v_sz_4983_ = lean_array_size(v_a_4981_);
v___x_4984_ = ((size_t)0ULL);
v___x_4985_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4982_, v___f_4980_, v_sz_4983_, v___x_4984_, v_a_4981_);
return v___x_4985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg(lean_object* v_inst_4986_){
_start:
{
lean_object* v___f_4987_; lean_object* v___f_4988_; 
v___f_4987_ = lean_alloc_closure((void*)(l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4987_, 0, v_inst_4986_);
v___f_4988_ = lean_alloc_closure((void*)(l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4988_, 0, v___f_4987_);
return v___f_4988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax(lean_object* v_k_4989_, lean_object* v_k_x27_4990_, lean_object* v_inst_4991_){
_start:
{
lean_object* v___x_4992_; 
v___x_4992_ = l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg(v_inst_4991_);
return v___x_4992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___boxed(lean_object* v_k_4993_, lean_object* v_k_x27_4994_, lean_object* v_inst_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax(v_k_4993_, v_k_x27_4994_, v_inst_4995_);
lean_dec(v_k_x27_4994_);
lean_dec(v_k_4993_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0(lean_object* v_a_4997_){
_start:
{
lean_inc_ref(v_a_4997_);
return v_a_4997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0___boxed(lean_object* v_a_4998_){
_start:
{
lean_object* v_res_4999_; 
v_res_4999_ = l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0(v_a_4998_);
lean_dec_ref(v_a_4998_);
return v_res_4999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg(){
_start:
{
lean_object* v___f_5002_; 
v___f_5002_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0));
return v___f_5002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___boxed(lean_object* v___dummy_5003_){
_start:
{
lean_object* v_res_5004_; 
v_res_5004_ = l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg();
return v_res_5004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray(lean_object* v_k_5005_){
_start:
{
lean_object* v___f_5006_; 
v___f_5006_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0));
return v___f_5006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___boxed(lean_object* v_k_5007_){
_start:
{
lean_object* v_res_5008_; 
v_res_5008_ = l_Lean_Syntax_instCoeOutTSyntaxArrayArray(v_k_5007_);
lean_dec(v_k_5007_);
return v_res_5008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0(lean_object* v_id_5015_){
_start:
{
lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; 
v___x_5016_ = ((lean_object*)(l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1));
v___x_5017_ = lean_box(2);
v___x_5018_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__2));
v___x_5019_ = lean_unsigned_to_nat(2u);
v___x_5020_ = lean_mk_empty_array_with_capacity(v___x_5019_);
v___x_5021_ = lean_array_push(v___x_5020_, v_id_5015_);
v___x_5022_ = lean_array_push(v___x_5021_, v___x_5018_);
v___x_5023_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5023_, 0, v___x_5017_);
lean_ctor_set(v___x_5023_, 1, v___x_5016_);
lean_ctor_set(v___x_5023_, 2, v___x_5022_);
return v___x_5023_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1(void){
_start:
{
uint32_t v___x_5027_; lean_object* v___x_5028_; 
v___x_5027_ = 123;
v___x_5028_ = lean_box_uint32(v___x_5027_);
return v___x_5028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(lean_object* v_s_5029_, lean_object* v_i_5030_){
_start:
{
lean_object* v___x_5031_; 
v___x_5031_ = l_Lean_Syntax_decodeQuotedChar(v_s_5029_, v_i_5030_);
if (lean_obj_tag(v___x_5031_) == 0)
{
uint32_t v_c_5032_; uint32_t v___x_5033_; uint8_t v___x_5034_; 
v_c_5032_ = lean_string_utf8_get(v_s_5029_, v_i_5030_);
v___x_5033_ = 123;
v___x_5034_ = lean_uint32_dec_eq(v_c_5032_, v___x_5033_);
if (v___x_5034_ == 0)
{
return v___x_5031_;
}
else
{
lean_object* v_i_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; 
v_i_5035_ = lean_string_utf8_next(v_s_5029_, v_i_5030_);
v___x_5036_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1;
v___x_5037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5037_, 0, v___x_5036_);
lean_ctor_set(v___x_5037_, 1, v_i_5035_);
v___x_5038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5038_, 0, v___x_5037_);
return v___x_5038_;
}
}
else
{
return v___x_5031_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed(lean_object* v_s_5039_, lean_object* v_i_5040_){
_start:
{
lean_object* v_res_5041_; 
v_res_5041_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(v_s_5039_, v_i_5040_);
lean_dec(v_i_5040_);
lean_dec_ref(v_s_5039_);
return v_res_5041_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit_loop(lean_object* v_s_5042_, lean_object* v_i_5043_, lean_object* v_acc_5044_){
_start:
{
uint32_t v_c_5045_; uint32_t v___x_5046_; uint8_t v___x_5047_; 
v_c_5045_ = lean_string_utf8_get(v_s_5042_, v_i_5043_);
v___x_5046_ = 34;
v___x_5047_ = lean_uint32_dec_eq(v_c_5045_, v___x_5046_);
if (v___x_5047_ == 0)
{
uint32_t v___x_5048_; uint8_t v___x_5049_; 
v___x_5048_ = 123;
v___x_5049_ = lean_uint32_dec_eq(v_c_5045_, v___x_5048_);
if (v___x_5049_ == 0)
{
lean_object* v_i_5050_; uint8_t v___x_5051_; 
v_i_5050_ = lean_string_utf8_next(v_s_5042_, v_i_5043_);
lean_dec(v_i_5043_);
v___x_5051_ = lean_string_utf8_at_end(v_s_5042_, v_i_5050_);
if (v___x_5051_ == 0)
{
uint32_t v___x_5052_; uint8_t v___x_5053_; 
v___x_5052_ = 92;
v___x_5053_ = lean_uint32_dec_eq(v_c_5045_, v___x_5052_);
if (v___x_5053_ == 0)
{
lean_object* v___x_5054_; 
v___x_5054_ = lean_string_push(v_acc_5044_, v_c_5045_);
v_i_5043_ = v_i_5050_;
v_acc_5044_ = v___x_5054_;
goto _start;
}
else
{
lean_object* v___x_5056_; 
v___x_5056_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(v_s_5042_, v_i_5050_);
if (lean_obj_tag(v___x_5056_) == 1)
{
lean_object* v_val_5057_; lean_object* v_fst_5058_; lean_object* v_snd_5059_; uint32_t v___x_5060_; lean_object* v___x_5061_; 
lean_dec(v_i_5050_);
v_val_5057_ = lean_ctor_get(v___x_5056_, 0);
lean_inc(v_val_5057_);
lean_dec_ref_known(v___x_5056_, 1);
v_fst_5058_ = lean_ctor_get(v_val_5057_, 0);
lean_inc(v_fst_5058_);
v_snd_5059_ = lean_ctor_get(v_val_5057_, 1);
lean_inc(v_snd_5059_);
lean_dec(v_val_5057_);
v___x_5060_ = lean_unbox_uint32(v_fst_5058_);
lean_dec(v_fst_5058_);
v___x_5061_ = lean_string_push(v_acc_5044_, v___x_5060_);
v_i_5043_ = v_snd_5059_;
v_acc_5044_ = v___x_5061_;
goto _start;
}
else
{
lean_object* v___x_5063_; 
lean_dec(v___x_5056_);
lean_inc_ref(v_s_5042_);
v___x_5063_ = l_Lean_Syntax_decodeStringGap(v_s_5042_, v_i_5050_);
lean_dec(v_i_5050_);
if (lean_obj_tag(v___x_5063_) == 1)
{
lean_object* v_val_5064_; 
v_val_5064_ = lean_ctor_get(v___x_5063_, 0);
lean_inc(v_val_5064_);
lean_dec_ref_known(v___x_5063_, 1);
v_i_5043_ = v_val_5064_;
goto _start;
}
else
{
lean_object* v___x_5066_; 
lean_dec(v___x_5063_);
lean_dec_ref(v_acc_5044_);
lean_dec_ref(v_s_5042_);
v___x_5066_ = lean_box(0);
return v___x_5066_;
}
}
}
}
else
{
lean_object* v___x_5067_; 
lean_dec(v_i_5050_);
lean_dec_ref(v_acc_5044_);
lean_dec_ref(v_s_5042_);
v___x_5067_ = lean_box(0);
return v___x_5067_;
}
}
else
{
lean_object* v___x_5068_; 
lean_dec(v_i_5043_);
lean_dec_ref(v_s_5042_);
v___x_5068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5068_, 0, v_acc_5044_);
return v___x_5068_;
}
}
else
{
lean_object* v___x_5069_; 
lean_dec(v_i_5043_);
lean_dec_ref(v_s_5042_);
v___x_5069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5069_, 0, v_acc_5044_);
return v___x_5069_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit(lean_object* v_s_5070_){
_start:
{
lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; 
v___x_5071_ = lean_unsigned_to_nat(1u);
v___x_5072_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_5073_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit_loop(v_s_5070_, v___x_5071_, v___x_5072_);
return v___x_5073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f(lean_object* v_stx_5077_){
_start:
{
lean_object* v___x_5078_; lean_object* v___x_5079_; 
v___x_5078_ = ((lean_object*)(l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1));
v___x_5079_ = l_Lean_Syntax_isLit_x3f(v___x_5078_, v_stx_5077_);
if (lean_obj_tag(v___x_5079_) == 0)
{
return v___x_5079_;
}
else
{
lean_object* v_val_5080_; lean_object* v___x_5081_; 
v_val_5080_ = lean_ctor_get(v___x_5079_, 0);
lean_inc(v_val_5080_);
lean_dec_ref_known(v___x_5079_, 1);
v___x_5081_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit(v_val_5080_);
return v___x_5081_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___boxed(lean_object* v_stx_5082_){
_start:
{
lean_object* v_res_5083_; 
v_res_5083_ = l_Lean_Syntax_isInterpolatedStrLit_x3f(v_stx_5082_);
lean_dec(v_stx_5082_);
return v_res_5083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs(lean_object* v_stx_5084_){
_start:
{
lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; uint8_t v___x_5089_; 
v___x_5085_ = l_Lean_Syntax_getArgs(v_stx_5084_);
v___x_5086_ = lean_unsigned_to_nat(0u);
v___x_5087_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_5088_ = lean_array_get_size(v___x_5085_);
v___x_5089_ = lean_nat_dec_lt(v___x_5086_, v___x_5088_);
if (v___x_5089_ == 0)
{
lean_dec_ref(v___x_5085_);
return v___x_5087_;
}
else
{
lean_object* v___x_5090_; lean_object* v___x_5091_; size_t v___x_5092_; size_t v___x_5093_; lean_object* v___x_5094_; lean_object* v_snd_5095_; 
v___x_5090_ = lean_box(v___x_5089_);
v___x_5091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5091_, 0, v___x_5090_);
lean_ctor_set(v___x_5091_, 1, v___x_5087_);
v___x_5092_ = ((size_t)0ULL);
v___x_5093_ = lean_usize_of_nat(v___x_5088_);
v___x_5094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v___x_5085_, v___x_5092_, v___x_5093_, v___x_5091_);
lean_dec_ref(v___x_5085_);
v_snd_5095_ = lean_ctor_get(v___x_5094_, 1);
lean_inc(v_snd_5095_);
lean_dec_ref(v___x_5094_);
return v_snd_5095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs___boxed(lean_object* v_stx_5096_){
_start:
{
lean_object* v_res_5097_; 
v_res_5097_ = l_Lean_Syntax_getSepArgs(v_stx_5096_);
lean_dec(v_stx_5096_);
return v_res_5097_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(lean_object* v_mkAppend_5098_, lean_object* v_mkElem_5099_, lean_object* v_mkLit_5100_, lean_object* v_as_5101_, size_t v_sz_5102_, size_t v_i_5103_, lean_object* v_b_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_){
_start:
{
lean_object* v_a_5108_; lean_object* v_a_5109_; lean_object* v_elem_5114_; lean_object* v___y_5115_; lean_object* v___y_5116_; uint8_t v___x_5121_; 
v___x_5121_ = lean_usize_dec_lt(v_i_5103_, v_sz_5102_);
if (v___x_5121_ == 0)
{
lean_object* v___x_5122_; 
lean_dec_ref(v_mkLit_5100_);
lean_dec_ref(v_mkElem_5099_);
lean_dec_ref(v_mkAppend_5098_);
v___x_5122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5122_, 0, v_b_5104_);
lean_ctor_set(v___x_5122_, 1, v___y_5106_);
return v___x_5122_;
}
else
{
lean_object* v_a_5123_; lean_object* v___x_5124_; 
v_a_5123_ = lean_array_uget_borrowed(v_as_5101_, v_i_5103_);
v___x_5124_ = l_Lean_Syntax_isInterpolatedStrLit_x3f(v_a_5123_);
if (lean_obj_tag(v___x_5124_) == 0)
{
lean_object* v_methods_5125_; lean_object* v_quotContext_5126_; lean_object* v_currMacroScope_5127_; lean_object* v_currRecDepth_5128_; lean_object* v_maxRecDepth_5129_; lean_object* v_ref_5130_; lean_object* v_ref_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; 
v_methods_5125_ = lean_ctor_get(v___y_5105_, 0);
v_quotContext_5126_ = lean_ctor_get(v___y_5105_, 1);
v_currMacroScope_5127_ = lean_ctor_get(v___y_5105_, 2);
v_currRecDepth_5128_ = lean_ctor_get(v___y_5105_, 3);
v_maxRecDepth_5129_ = lean_ctor_get(v___y_5105_, 4);
v_ref_5130_ = lean_ctor_get(v___y_5105_, 5);
v_ref_5131_ = l_Lean_replaceRef(v_a_5123_, v_ref_5130_);
lean_inc(v_maxRecDepth_5129_);
lean_inc(v_currRecDepth_5128_);
lean_inc(v_currMacroScope_5127_);
lean_inc(v_quotContext_5126_);
lean_inc(v_methods_5125_);
v___x_5132_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5132_, 0, v_methods_5125_);
lean_ctor_set(v___x_5132_, 1, v_quotContext_5126_);
lean_ctor_set(v___x_5132_, 2, v_currMacroScope_5127_);
lean_ctor_set(v___x_5132_, 3, v_currRecDepth_5128_);
lean_ctor_set(v___x_5132_, 4, v_maxRecDepth_5129_);
lean_ctor_set(v___x_5132_, 5, v_ref_5131_);
lean_inc_ref(v_mkElem_5099_);
lean_inc(v_a_5123_);
v___x_5133_ = lean_apply_3(v_mkElem_5099_, v_a_5123_, v___x_5132_, v___y_5106_);
if (lean_obj_tag(v___x_5133_) == 0)
{
lean_object* v_a_5134_; lean_object* v_a_5135_; 
v_a_5134_ = lean_ctor_get(v___x_5133_, 0);
lean_inc(v_a_5134_);
v_a_5135_ = lean_ctor_get(v___x_5133_, 1);
lean_inc(v_a_5135_);
lean_dec_ref_known(v___x_5133_, 2);
v_elem_5114_ = v_a_5134_;
v___y_5115_ = v___y_5105_;
v___y_5116_ = v_a_5135_;
goto v___jp_5113_;
}
else
{
lean_dec(v_b_5104_);
lean_dec_ref(v_mkLit_5100_);
lean_dec_ref(v_mkElem_5099_);
lean_dec_ref(v_mkAppend_5098_);
return v___x_5133_;
}
}
else
{
lean_object* v_val_5136_; uint8_t v___x_5137_; 
v_val_5136_ = lean_ctor_get(v___x_5124_, 0);
lean_inc_n(v_val_5136_, 2);
lean_dec_ref_known(v___x_5124_, 1);
v___x_5137_ = lean_string_isempty(v_val_5136_);
if (v___x_5137_ == 0)
{
lean_object* v_methods_5138_; lean_object* v_quotContext_5139_; lean_object* v_currMacroScope_5140_; lean_object* v_currRecDepth_5141_; lean_object* v_maxRecDepth_5142_; lean_object* v_ref_5143_; lean_object* v_ref_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; 
v_methods_5138_ = lean_ctor_get(v___y_5105_, 0);
v_quotContext_5139_ = lean_ctor_get(v___y_5105_, 1);
v_currMacroScope_5140_ = lean_ctor_get(v___y_5105_, 2);
v_currRecDepth_5141_ = lean_ctor_get(v___y_5105_, 3);
v_maxRecDepth_5142_ = lean_ctor_get(v___y_5105_, 4);
v_ref_5143_ = lean_ctor_get(v___y_5105_, 5);
v_ref_5144_ = l_Lean_replaceRef(v_a_5123_, v_ref_5143_);
lean_inc(v_maxRecDepth_5142_);
lean_inc(v_currRecDepth_5141_);
lean_inc(v_currMacroScope_5140_);
lean_inc(v_quotContext_5139_);
lean_inc(v_methods_5138_);
v___x_5145_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5145_, 0, v_methods_5138_);
lean_ctor_set(v___x_5145_, 1, v_quotContext_5139_);
lean_ctor_set(v___x_5145_, 2, v_currMacroScope_5140_);
lean_ctor_set(v___x_5145_, 3, v_currRecDepth_5141_);
lean_ctor_set(v___x_5145_, 4, v_maxRecDepth_5142_);
lean_ctor_set(v___x_5145_, 5, v_ref_5144_);
lean_inc_ref(v_mkLit_5100_);
v___x_5146_ = lean_apply_3(v_mkLit_5100_, v_val_5136_, v___x_5145_, v___y_5106_);
if (lean_obj_tag(v___x_5146_) == 0)
{
lean_object* v_a_5147_; lean_object* v_a_5148_; 
v_a_5147_ = lean_ctor_get(v___x_5146_, 0);
lean_inc(v_a_5147_);
v_a_5148_ = lean_ctor_get(v___x_5146_, 1);
lean_inc(v_a_5148_);
lean_dec_ref_known(v___x_5146_, 2);
v_elem_5114_ = v_a_5147_;
v___y_5115_ = v___y_5105_;
v___y_5116_ = v_a_5148_;
goto v___jp_5113_;
}
else
{
lean_dec(v_b_5104_);
lean_dec_ref(v_mkLit_5100_);
lean_dec_ref(v_mkElem_5099_);
lean_dec_ref(v_mkAppend_5098_);
return v___x_5146_;
}
}
else
{
lean_dec(v_val_5136_);
v_a_5108_ = v_b_5104_;
v_a_5109_ = v___y_5106_;
goto v___jp_5107_;
}
}
}
v___jp_5107_:
{
size_t v___x_5110_; size_t v___x_5111_; 
v___x_5110_ = ((size_t)1ULL);
v___x_5111_ = lean_usize_add(v_i_5103_, v___x_5110_);
v_i_5103_ = v___x_5111_;
v_b_5104_ = v_a_5108_;
v___y_5106_ = v_a_5109_;
goto _start;
}
v___jp_5113_:
{
uint8_t v___x_5117_; 
v___x_5117_ = l_Lean_Syntax_isMissing(v_b_5104_);
if (v___x_5117_ == 0)
{
lean_object* v___x_5118_; 
lean_inc_ref(v_mkAppend_5098_);
lean_inc_ref(v___y_5115_);
v___x_5118_ = lean_apply_4(v_mkAppend_5098_, v_b_5104_, v_elem_5114_, v___y_5115_, v___y_5116_);
if (lean_obj_tag(v___x_5118_) == 0)
{
lean_object* v_a_5119_; lean_object* v_a_5120_; 
v_a_5119_ = lean_ctor_get(v___x_5118_, 0);
lean_inc(v_a_5119_);
v_a_5120_ = lean_ctor_get(v___x_5118_, 1);
lean_inc(v_a_5120_);
lean_dec_ref_known(v___x_5118_, 2);
v_a_5108_ = v_a_5119_;
v_a_5109_ = v_a_5120_;
goto v___jp_5107_;
}
else
{
lean_dec_ref(v_mkLit_5100_);
lean_dec_ref(v_mkElem_5099_);
lean_dec_ref(v_mkAppend_5098_);
return v___x_5118_;
}
}
else
{
lean_dec(v_b_5104_);
v_a_5108_ = v_elem_5114_;
v_a_5109_ = v___y_5116_;
goto v___jp_5107_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0___boxed(lean_object* v_mkAppend_5149_, lean_object* v_mkElem_5150_, lean_object* v_mkLit_5151_, lean_object* v_as_5152_, lean_object* v_sz_5153_, lean_object* v_i_5154_, lean_object* v_b_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_){
_start:
{
size_t v_sz_boxed_5158_; size_t v_i_boxed_5159_; lean_object* v_res_5160_; 
v_sz_boxed_5158_ = lean_unbox_usize(v_sz_5153_);
lean_dec(v_sz_5153_);
v_i_boxed_5159_ = lean_unbox_usize(v_i_5154_);
lean_dec(v_i_5154_);
v_res_5160_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(v_mkAppend_5149_, v_mkElem_5150_, v_mkLit_5151_, v_as_5152_, v_sz_boxed_5158_, v_i_boxed_5159_, v_b_5155_, v___y_5156_, v___y_5157_);
lean_dec_ref(v___y_5156_);
lean_dec_ref(v_as_5152_);
return v_res_5160_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks(lean_object* v_chunks_5161_, lean_object* v_mkAppend_5162_, lean_object* v_mkElem_5163_, lean_object* v_mkLit_5164_, lean_object* v_a_5165_, lean_object* v_a_5166_){
_start:
{
lean_object* v_result_5167_; size_t v_sz_5168_; size_t v___x_5169_; lean_object* v___x_5170_; 
v_result_5167_ = lean_box(0);
v_sz_5168_ = lean_array_size(v_chunks_5161_);
v___x_5169_ = ((size_t)0ULL);
lean_inc_ref(v_mkLit_5164_);
v___x_5170_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(v_mkAppend_5162_, v_mkElem_5163_, v_mkLit_5164_, v_chunks_5161_, v_sz_5168_, v___x_5169_, v_result_5167_, v_a_5165_, v_a_5166_);
if (lean_obj_tag(v___x_5170_) == 0)
{
lean_object* v_a_5171_; lean_object* v_a_5172_; uint8_t v___x_5173_; 
v_a_5171_ = lean_ctor_get(v___x_5170_, 0);
v_a_5172_ = lean_ctor_get(v___x_5170_, 1);
v___x_5173_ = l_Lean_Syntax_isMissing(v_a_5171_);
if (v___x_5173_ == 0)
{
lean_dec_ref(v_mkLit_5164_);
return v___x_5170_;
}
else
{
lean_object* v___x_5174_; lean_object* v___x_5175_; 
lean_inc(v_a_5172_);
lean_dec_ref_known(v___x_5170_, 2);
v___x_5174_ = ((lean_object*)(l_Lean_versionString___closed__0));
lean_inc_ref(v_a_5165_);
v___x_5175_ = lean_apply_3(v_mkLit_5164_, v___x_5174_, v_a_5165_, v_a_5172_);
return v___x_5175_;
}
}
else
{
lean_dec_ref(v_mkLit_5164_);
return v___x_5170_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks___boxed(lean_object* v_chunks_5176_, lean_object* v_mkAppend_5177_, lean_object* v_mkElem_5178_, lean_object* v_mkLit_5179_, lean_object* v_a_5180_, lean_object* v_a_5181_){
_start:
{
lean_object* v_res_5182_; 
v_res_5182_ = l_Lean_TSyntax_expandInterpolatedStrChunks(v_chunks_5176_, v_mkAppend_5177_, v_mkElem_5178_, v_mkLit_5179_, v_a_5180_, v_a_5181_);
lean_dec_ref(v_a_5180_);
lean_dec_ref(v_chunks_5176_);
return v_res_5182_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0(lean_object* v_a_5187_, lean_object* v_b_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_){
_start:
{
lean_object* v_ref_5191_; uint8_t v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; 
v_ref_5191_ = lean_ctor_get(v___y_5189_, 5);
v___x_5192_ = 0;
v___x_5193_ = l_Lean_SourceInfo_fromRef(v_ref_5191_, v___x_5192_);
v___x_5194_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1));
v___x_5195_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2));
lean_inc(v___x_5193_);
v___x_5196_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5196_, 0, v___x_5193_);
lean_ctor_set(v___x_5196_, 1, v___x_5195_);
v___x_5197_ = l_Lean_Syntax_node3(v___x_5193_, v___x_5194_, v_a_5187_, v___x_5196_, v_b_5188_);
v___x_5198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5198_, 0, v___x_5197_);
lean_ctor_set(v___x_5198_, 1, v___y_5190_);
return v___x_5198_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___boxed(lean_object* v_a_5199_, lean_object* v_b_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_){
_start:
{
lean_object* v_res_5203_; 
v_res_5203_ = l_Lean_TSyntax_expandInterpolatedStr___lam__0(v_a_5199_, v_b_5200_, v___y_5201_, v___y_5202_);
lean_dec_ref(v___y_5201_);
return v_res_5203_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1(lean_object* v_ofInterpFn_5204_, lean_object* v_a_5205_, lean_object* v___y_5206_, lean_object* v___y_5207_){
_start:
{
lean_object* v_ref_5208_; uint8_t v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; 
v_ref_5208_ = lean_ctor_get(v___y_5206_, 5);
v___x_5209_ = 0;
v___x_5210_ = l_Lean_SourceInfo_fromRef(v_ref_5208_, v___x_5209_);
v___x_5211_ = ((lean_object*)(l_Lean_Syntax_mkApp___closed__1));
v___x_5212_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
lean_inc(v___x_5210_);
v___x_5213_ = l_Lean_Syntax_node1(v___x_5210_, v___x_5212_, v_a_5205_);
v___x_5214_ = l_Lean_Syntax_node2(v___x_5210_, v___x_5211_, v_ofInterpFn_5204_, v___x_5213_);
v___x_5215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5215_, 0, v___x_5214_);
lean_ctor_set(v___x_5215_, 1, v___y_5207_);
return v___x_5215_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1___boxed(lean_object* v_ofInterpFn_5216_, lean_object* v_a_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_){
_start:
{
lean_object* v_res_5220_; 
v_res_5220_ = l_Lean_TSyntax_expandInterpolatedStr___lam__1(v_ofInterpFn_5216_, v_a_5217_, v___y_5218_, v___y_5219_);
lean_dec_ref(v___y_5218_);
return v_res_5220_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2(lean_object* v_ofLitFn_5221_, lean_object* v_s_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_){
_start:
{
lean_object* v_ref_5225_; uint8_t v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; 
v_ref_5225_ = lean_ctor_get(v___y_5223_, 5);
v___x_5226_ = 0;
v___x_5227_ = l_Lean_SourceInfo_fromRef(v_ref_5225_, v___x_5226_);
v___x_5228_ = ((lean_object*)(l_Lean_Syntax_mkApp___closed__1));
v___x_5229_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_5230_ = lean_box(2);
v___x_5231_ = l_Lean_Syntax_mkStrLit(v_s_5222_, v___x_5230_);
lean_inc(v___x_5227_);
v___x_5232_ = l_Lean_Syntax_node1(v___x_5227_, v___x_5229_, v___x_5231_);
v___x_5233_ = l_Lean_Syntax_node2(v___x_5227_, v___x_5228_, v_ofLitFn_5221_, v___x_5232_);
v___x_5234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5234_, 0, v___x_5233_);
lean_ctor_set(v___x_5234_, 1, v___y_5224_);
return v___x_5234_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2___boxed(lean_object* v_ofLitFn_5235_, lean_object* v_s_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_){
_start:
{
lean_object* v_res_5239_; 
v_res_5239_ = l_Lean_TSyntax_expandInterpolatedStr___lam__2(v_ofLitFn_5235_, v_s_5236_, v___y_5237_, v___y_5238_);
lean_dec_ref(v___y_5237_);
return v_res_5239_;
}
}
static lean_object* _init_l_Lean_TSyntax_expandInterpolatedStr___closed__8(void){
_start:
{
lean_object* v___x_5257_; lean_object* v___x_5258_; 
v___x_5257_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_5258_ = l_String_toRawSubstring_x27(v___x_5257_);
return v___x_5258_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object* v_interpStr_5279_, lean_object* v_type_5280_, lean_object* v_ofInterpFn_5281_, lean_object* v_ofLitFn_5282_, lean_object* v_a_5283_, lean_object* v_a_5284_){
_start:
{
lean_object* v___f_5285_; lean_object* v___f_5286_; lean_object* v___f_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; 
v___f_5285_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__0));
v___f_5286_ = lean_alloc_closure((void*)(l_Lean_TSyntax_expandInterpolatedStr___lam__1___boxed), 4, 1);
lean_closure_set(v___f_5286_, 0, v_ofInterpFn_5281_);
v___f_5287_ = lean_alloc_closure((void*)(l_Lean_TSyntax_expandInterpolatedStr___lam__2___boxed), 4, 1);
lean_closure_set(v___f_5287_, 0, v_ofLitFn_5282_);
v___x_5288_ = l_Lean_Syntax_getArgs(v_interpStr_5279_);
v___x_5289_ = l_Lean_TSyntax_expandInterpolatedStrChunks(v___x_5288_, v___f_5285_, v___f_5286_, v___f_5287_, v_a_5283_, v_a_5284_);
lean_dec_ref(v___x_5288_);
if (lean_obj_tag(v___x_5289_) == 0)
{
lean_object* v_a_5290_; lean_object* v_a_5291_; lean_object* v___x_5293_; uint8_t v_isShared_5294_; uint8_t v_isSharedCheck_5322_; 
v_a_5290_ = lean_ctor_get(v___x_5289_, 0);
v_a_5291_ = lean_ctor_get(v___x_5289_, 1);
v_isSharedCheck_5322_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5322_ == 0)
{
v___x_5293_ = v___x_5289_;
v_isShared_5294_ = v_isSharedCheck_5322_;
goto v_resetjp_5292_;
}
else
{
lean_inc(v_a_5291_);
lean_inc(v_a_5290_);
lean_dec(v___x_5289_);
v___x_5293_ = lean_box(0);
v_isShared_5294_ = v_isSharedCheck_5322_;
goto v_resetjp_5292_;
}
v_resetjp_5292_:
{
lean_object* v_quotContext_5295_; lean_object* v_currMacroScope_5296_; lean_object* v_ref_5297_; uint8_t v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5320_; 
v_quotContext_5295_ = lean_ctor_get(v_a_5283_, 1);
v_currMacroScope_5296_ = lean_ctor_get(v_a_5283_, 2);
v_ref_5297_ = lean_ctor_get(v_a_5283_, 5);
v___x_5298_ = 0;
v___x_5299_ = l_Lean_SourceInfo_fromRef(v_ref_5297_, v___x_5298_);
v___x_5300_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__2));
v___x_5301_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__4));
v___x_5302_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__5));
lean_inc_n(v___x_5299_, 7);
v___x_5303_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5303_, 0, v___x_5299_);
lean_ctor_set(v___x_5303_, 1, v___x_5302_);
v___x_5304_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__7));
v___x_5305_ = lean_obj_once(&l_Lean_TSyntax_expandInterpolatedStr___closed__8, &l_Lean_TSyntax_expandInterpolatedStr___closed__8_once, _init_l_Lean_TSyntax_expandInterpolatedStr___closed__8);
v___x_5306_ = lean_box(0);
lean_inc(v_currMacroScope_5296_);
lean_inc(v_quotContext_5295_);
v___x_5307_ = l_Lean_addMacroScope(v_quotContext_5295_, v___x_5306_, v_currMacroScope_5296_);
v___x_5308_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__16));
v___x_5309_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5309_, 0, v___x_5299_);
lean_ctor_set(v___x_5309_, 1, v___x_5305_);
lean_ctor_set(v___x_5309_, 2, v___x_5307_);
lean_ctor_set(v___x_5309_, 3, v___x_5308_);
v___x_5310_ = l_Lean_Syntax_node1(v___x_5299_, v___x_5304_, v___x_5309_);
v___x_5311_ = l_Lean_Syntax_node2(v___x_5299_, v___x_5301_, v___x_5303_, v___x_5310_);
v___x_5312_ = ((lean_object*)(l_Lean_toolchain___closed__0));
v___x_5313_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5313_, 0, v___x_5299_);
lean_ctor_set(v___x_5313_, 1, v___x_5312_);
v___x_5314_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_5315_ = l_Lean_Syntax_node1(v___x_5299_, v___x_5314_, v_type_5280_);
v___x_5316_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__17));
v___x_5317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5317_, 0, v___x_5299_);
lean_ctor_set(v___x_5317_, 1, v___x_5316_);
v___x_5318_ = l_Lean_Syntax_node5(v___x_5299_, v___x_5300_, v___x_5311_, v_a_5290_, v___x_5313_, v___x_5315_, v___x_5317_);
if (v_isShared_5294_ == 0)
{
lean_ctor_set(v___x_5293_, 0, v___x_5318_);
v___x_5320_ = v___x_5293_;
goto v_reusejp_5319_;
}
else
{
lean_object* v_reuseFailAlloc_5321_; 
v_reuseFailAlloc_5321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5321_, 0, v___x_5318_);
lean_ctor_set(v_reuseFailAlloc_5321_, 1, v_a_5291_);
v___x_5320_ = v_reuseFailAlloc_5321_;
goto v_reusejp_5319_;
}
v_reusejp_5319_:
{
return v___x_5320_;
}
}
}
else
{
lean_object* v_a_5323_; lean_object* v_a_5324_; lean_object* v___x_5326_; uint8_t v_isShared_5327_; uint8_t v_isSharedCheck_5331_; 
lean_dec(v_type_5280_);
v_a_5323_ = lean_ctor_get(v___x_5289_, 0);
v_a_5324_ = lean_ctor_get(v___x_5289_, 1);
v_isSharedCheck_5331_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5331_ == 0)
{
v___x_5326_ = v___x_5289_;
v_isShared_5327_ = v_isSharedCheck_5331_;
goto v_resetjp_5325_;
}
else
{
lean_inc(v_a_5324_);
lean_inc(v_a_5323_);
lean_dec(v___x_5289_);
v___x_5326_ = lean_box(0);
v_isShared_5327_ = v_isSharedCheck_5331_;
goto v_resetjp_5325_;
}
v_resetjp_5325_:
{
lean_object* v___x_5329_; 
if (v_isShared_5327_ == 0)
{
v___x_5329_ = v___x_5326_;
goto v_reusejp_5328_;
}
else
{
lean_object* v_reuseFailAlloc_5330_; 
v_reuseFailAlloc_5330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5330_, 0, v_a_5323_);
lean_ctor_set(v_reuseFailAlloc_5330_, 1, v_a_5324_);
v___x_5329_ = v_reuseFailAlloc_5330_;
goto v_reusejp_5328_;
}
v_reusejp_5328_:
{
return v___x_5329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___boxed(lean_object* v_interpStr_5332_, lean_object* v_type_5333_, lean_object* v_ofInterpFn_5334_, lean_object* v_ofLitFn_5335_, lean_object* v_a_5336_, lean_object* v_a_5337_){
_start:
{
lean_object* v_res_5338_; 
v_res_5338_ = l_Lean_TSyntax_expandInterpolatedStr(v_interpStr_5332_, v_type_5333_, v_ofInterpFn_5334_, v_ofLitFn_5335_, v_a_5336_, v_a_5337_);
lean_dec_ref(v_a_5336_);
lean_dec(v_interpStr_5332_);
return v_res_5338_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString(lean_object* v_stx_5339_){
_start:
{
lean_object* v___x_5340_; lean_object* v___x_5341_; 
v___x_5340_ = lean_unsigned_to_nat(1u);
v___x_5341_ = l_Lean_Syntax_getArg(v_stx_5339_, v___x_5340_);
if (lean_obj_tag(v___x_5341_) == 1)
{
lean_object* v_kind_5342_; 
v_kind_5342_ = lean_ctor_get(v___x_5341_, 1);
lean_inc(v_kind_5342_);
if (lean_obj_tag(v_kind_5342_) == 1)
{
lean_object* v_pre_5343_; 
v_pre_5343_ = lean_ctor_get(v_kind_5342_, 0);
lean_inc(v_pre_5343_);
if (lean_obj_tag(v_pre_5343_) == 1)
{
lean_object* v_pre_5344_; 
v_pre_5344_ = lean_ctor_get(v_pre_5343_, 0);
lean_inc(v_pre_5344_);
if (lean_obj_tag(v_pre_5344_) == 1)
{
lean_object* v_pre_5345_; 
v_pre_5345_ = lean_ctor_get(v_pre_5344_, 0);
lean_inc(v_pre_5345_);
if (lean_obj_tag(v_pre_5345_) == 1)
{
lean_object* v_pre_5346_; 
v_pre_5346_ = lean_ctor_get(v_pre_5345_, 0);
if (lean_obj_tag(v_pre_5346_) == 0)
{
lean_object* v_args_5347_; lean_object* v_str_5348_; lean_object* v_str_5349_; lean_object* v_str_5350_; lean_object* v_str_5351_; lean_object* v___x_5352_; uint8_t v___x_5353_; 
v_args_5347_ = lean_ctor_get(v___x_5341_, 2);
lean_inc_ref(v_args_5347_);
lean_dec_ref_known(v___x_5341_, 3);
v_str_5348_ = lean_ctor_get(v_kind_5342_, 1);
lean_inc_ref(v_str_5348_);
lean_dec_ref_known(v_kind_5342_, 2);
v_str_5349_ = lean_ctor_get(v_pre_5343_, 1);
lean_inc_ref(v_str_5349_);
lean_dec_ref_known(v_pre_5343_, 2);
v_str_5350_ = lean_ctor_get(v_pre_5344_, 1);
lean_inc_ref(v_str_5350_);
lean_dec_ref_known(v_pre_5344_, 2);
v_str_5351_ = lean_ctor_get(v_pre_5345_, 1);
lean_inc_ref(v_str_5351_);
lean_dec_ref_known(v_pre_5345_, 2);
v___x_5352_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__0));
v___x_5353_ = lean_string_dec_eq(v_str_5351_, v___x_5352_);
lean_dec_ref(v_str_5351_);
if (v___x_5353_ == 0)
{
lean_object* v___x_5354_; 
lean_dec_ref(v_str_5350_);
lean_dec_ref(v_str_5349_);
lean_dec_ref(v_str_5348_);
lean_dec_ref(v_args_5347_);
v___x_5354_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5354_;
}
else
{
lean_object* v___x_5355_; uint8_t v___x_5356_; 
v___x_5355_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__1));
v___x_5356_ = lean_string_dec_eq(v_str_5350_, v___x_5355_);
lean_dec_ref(v_str_5350_);
if (v___x_5356_ == 0)
{
lean_object* v___x_5357_; 
lean_dec_ref(v_str_5349_);
lean_dec_ref(v_str_5348_);
lean_dec_ref(v_args_5347_);
v___x_5357_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5357_;
}
else
{
lean_object* v___x_5358_; uint8_t v___x_5359_; 
v___x_5358_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__0));
v___x_5359_ = lean_string_dec_eq(v_str_5349_, v___x_5358_);
lean_dec_ref(v_str_5349_);
if (v___x_5359_ == 0)
{
lean_object* v___x_5360_; 
lean_dec_ref(v_str_5348_);
lean_dec_ref(v_args_5347_);
v___x_5360_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5360_;
}
else
{
lean_object* v___x_5361_; uint8_t v___x_5362_; 
v___x_5361_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__1));
v___x_5362_ = lean_string_dec_eq(v_str_5348_, v___x_5361_);
lean_dec_ref(v_str_5348_);
if (v___x_5362_ == 0)
{
lean_object* v___x_5363_; 
lean_dec_ref(v_args_5347_);
v___x_5363_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5363_;
}
else
{
lean_object* v___x_5364_; lean_object* v___x_5365_; uint8_t v___x_5366_; 
v___x_5364_ = lean_array_get_size(v_args_5347_);
v___x_5365_ = lean_unsigned_to_nat(2u);
v___x_5366_ = lean_nat_dec_eq(v___x_5364_, v___x_5365_);
if (v___x_5366_ == 0)
{
lean_object* v___x_5367_; 
lean_dec_ref(v_args_5347_);
v___x_5367_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5367_;
}
else
{
lean_object* v___x_5368_; lean_object* v___x_5369_; 
v___x_5368_ = lean_unsigned_to_nat(0u);
v___x_5369_ = lean_array_fget(v_args_5347_, v___x_5368_);
lean_dec_ref(v_args_5347_);
if (lean_obj_tag(v___x_5369_) == 2)
{
lean_object* v_val_5370_; 
v_val_5370_ = lean_ctor_get(v___x_5369_, 1);
lean_inc_ref(v_val_5370_);
lean_dec_ref_known(v___x_5369_, 2);
return v_val_5370_;
}
else
{
lean_object* v___x_5371_; 
lean_dec(v___x_5369_);
v___x_5371_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5371_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5372_; 
lean_dec_ref_known(v_pre_5345_, 2);
lean_dec_ref_known(v_pre_5344_, 2);
lean_dec_ref_known(v_pre_5343_, 2);
lean_dec_ref_known(v_kind_5342_, 2);
lean_dec_ref_known(v___x_5341_, 3);
v___x_5372_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5372_;
}
}
else
{
lean_object* v___x_5373_; 
lean_dec_ref_known(v_pre_5344_, 2);
lean_dec(v_pre_5345_);
lean_dec_ref_known(v_pre_5343_, 2);
lean_dec_ref_known(v_kind_5342_, 2);
lean_dec_ref_known(v___x_5341_, 3);
v___x_5373_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5373_;
}
}
else
{
lean_object* v___x_5374_; 
lean_dec(v_pre_5344_);
lean_dec_ref_known(v_pre_5343_, 2);
lean_dec_ref_known(v_kind_5342_, 2);
lean_dec_ref_known(v___x_5341_, 3);
v___x_5374_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5374_;
}
}
else
{
lean_object* v___x_5375_; 
lean_dec_ref_known(v_kind_5342_, 2);
lean_dec(v_pre_5343_);
lean_dec_ref_known(v___x_5341_, 3);
v___x_5375_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5375_;
}
}
else
{
lean_object* v___x_5376_; 
lean_dec_ref_known(v___x_5341_, 3);
lean_dec(v_kind_5342_);
v___x_5376_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5376_;
}
}
else
{
lean_object* v___x_5377_; 
lean_dec(v___x_5341_);
v___x_5377_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5377_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString___boxed(lean_object* v_stx_5378_){
_start:
{
lean_object* v_res_5379_; 
v_res_5379_ = l_Lean_TSyntax_getDocString(v_stx_5378_);
lean_dec(v_stx_5378_);
return v_res_5379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr(uint8_t v_x_5398_, lean_object* v_prec_5399_){
_start:
{
lean_object* v___y_5401_; lean_object* v___y_5408_; lean_object* v___y_5415_; lean_object* v___y_5422_; lean_object* v___y_5429_; lean_object* v___y_5436_; 
switch(v_x_5398_)
{
case 0:
{
lean_object* v___x_5442_; uint8_t v___x_5443_; 
v___x_5442_ = lean_unsigned_to_nat(1024u);
v___x_5443_ = lean_nat_dec_le(v___x_5442_, v_prec_5399_);
if (v___x_5443_ == 0)
{
lean_object* v___x_5444_; 
v___x_5444_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5401_ = v___x_5444_;
goto v___jp_5400_;
}
else
{
lean_object* v___x_5445_; 
v___x_5445_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5401_ = v___x_5445_;
goto v___jp_5400_;
}
}
case 1:
{
lean_object* v___x_5446_; uint8_t v___x_5447_; 
v___x_5446_ = lean_unsigned_to_nat(1024u);
v___x_5447_ = lean_nat_dec_le(v___x_5446_, v_prec_5399_);
if (v___x_5447_ == 0)
{
lean_object* v___x_5448_; 
v___x_5448_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5408_ = v___x_5448_;
goto v___jp_5407_;
}
else
{
lean_object* v___x_5449_; 
v___x_5449_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5408_ = v___x_5449_;
goto v___jp_5407_;
}
}
case 2:
{
lean_object* v___x_5450_; uint8_t v___x_5451_; 
v___x_5450_ = lean_unsigned_to_nat(1024u);
v___x_5451_ = lean_nat_dec_le(v___x_5450_, v_prec_5399_);
if (v___x_5451_ == 0)
{
lean_object* v___x_5452_; 
v___x_5452_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5415_ = v___x_5452_;
goto v___jp_5414_;
}
else
{
lean_object* v___x_5453_; 
v___x_5453_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5415_ = v___x_5453_;
goto v___jp_5414_;
}
}
case 3:
{
lean_object* v___x_5454_; uint8_t v___x_5455_; 
v___x_5454_ = lean_unsigned_to_nat(1024u);
v___x_5455_ = lean_nat_dec_le(v___x_5454_, v_prec_5399_);
if (v___x_5455_ == 0)
{
lean_object* v___x_5456_; 
v___x_5456_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5422_ = v___x_5456_;
goto v___jp_5421_;
}
else
{
lean_object* v___x_5457_; 
v___x_5457_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5422_ = v___x_5457_;
goto v___jp_5421_;
}
}
case 4:
{
lean_object* v___x_5458_; uint8_t v___x_5459_; 
v___x_5458_ = lean_unsigned_to_nat(1024u);
v___x_5459_ = lean_nat_dec_le(v___x_5458_, v_prec_5399_);
if (v___x_5459_ == 0)
{
lean_object* v___x_5460_; 
v___x_5460_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5429_ = v___x_5460_;
goto v___jp_5428_;
}
else
{
lean_object* v___x_5461_; 
v___x_5461_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5429_ = v___x_5461_;
goto v___jp_5428_;
}
}
default: 
{
lean_object* v___x_5462_; uint8_t v___x_5463_; 
v___x_5462_ = lean_unsigned_to_nat(1024u);
v___x_5463_ = lean_nat_dec_le(v___x_5462_, v_prec_5399_);
if (v___x_5463_ == 0)
{
lean_object* v___x_5464_; 
v___x_5464_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5436_ = v___x_5464_;
goto v___jp_5435_;
}
else
{
lean_object* v___x_5465_; 
v___x_5465_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5436_ = v___x_5465_;
goto v___jp_5435_;
}
}
}
v___jp_5400_:
{
lean_object* v___x_5402_; lean_object* v___x_5403_; uint8_t v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; 
v___x_5402_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__1));
lean_inc(v___y_5401_);
v___x_5403_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5403_, 0, v___y_5401_);
lean_ctor_set(v___x_5403_, 1, v___x_5402_);
v___x_5404_ = 0;
v___x_5405_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5405_, 0, v___x_5403_);
lean_ctor_set_uint8(v___x_5405_, sizeof(void*)*1, v___x_5404_);
v___x_5406_ = l_Repr_addAppParen(v___x_5405_, v_prec_5399_);
return v___x_5406_;
}
v___jp_5407_:
{
lean_object* v___x_5409_; lean_object* v___x_5410_; uint8_t v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; 
v___x_5409_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__3));
lean_inc(v___y_5408_);
v___x_5410_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5410_, 0, v___y_5408_);
lean_ctor_set(v___x_5410_, 1, v___x_5409_);
v___x_5411_ = 0;
v___x_5412_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5412_, 0, v___x_5410_);
lean_ctor_set_uint8(v___x_5412_, sizeof(void*)*1, v___x_5411_);
v___x_5413_ = l_Repr_addAppParen(v___x_5412_, v_prec_5399_);
return v___x_5413_;
}
v___jp_5414_:
{
lean_object* v___x_5416_; lean_object* v___x_5417_; uint8_t v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; 
v___x_5416_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__5));
lean_inc(v___y_5415_);
v___x_5417_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5417_, 0, v___y_5415_);
lean_ctor_set(v___x_5417_, 1, v___x_5416_);
v___x_5418_ = 0;
v___x_5419_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5419_, 0, v___x_5417_);
lean_ctor_set_uint8(v___x_5419_, sizeof(void*)*1, v___x_5418_);
v___x_5420_ = l_Repr_addAppParen(v___x_5419_, v_prec_5399_);
return v___x_5420_;
}
v___jp_5421_:
{
lean_object* v___x_5423_; lean_object* v___x_5424_; uint8_t v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; 
v___x_5423_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__7));
lean_inc(v___y_5422_);
v___x_5424_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5424_, 0, v___y_5422_);
lean_ctor_set(v___x_5424_, 1, v___x_5423_);
v___x_5425_ = 0;
v___x_5426_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5426_, 0, v___x_5424_);
lean_ctor_set_uint8(v___x_5426_, sizeof(void*)*1, v___x_5425_);
v___x_5427_ = l_Repr_addAppParen(v___x_5426_, v_prec_5399_);
return v___x_5427_;
}
v___jp_5428_:
{
lean_object* v___x_5430_; lean_object* v___x_5431_; uint8_t v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; 
v___x_5430_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__9));
lean_inc(v___y_5429_);
v___x_5431_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5431_, 0, v___y_5429_);
lean_ctor_set(v___x_5431_, 1, v___x_5430_);
v___x_5432_ = 0;
v___x_5433_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5433_, 0, v___x_5431_);
lean_ctor_set_uint8(v___x_5433_, sizeof(void*)*1, v___x_5432_);
v___x_5434_ = l_Repr_addAppParen(v___x_5433_, v_prec_5399_);
return v___x_5434_;
}
v___jp_5435_:
{
lean_object* v___x_5437_; lean_object* v___x_5438_; uint8_t v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; 
v___x_5437_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__11));
lean_inc(v___y_5436_);
v___x_5438_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5438_, 0, v___y_5436_);
lean_ctor_set(v___x_5438_, 1, v___x_5437_);
v___x_5439_ = 0;
v___x_5440_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5440_, 0, v___x_5438_);
lean_ctor_set_uint8(v___x_5440_, sizeof(void*)*1, v___x_5439_);
v___x_5441_ = l_Repr_addAppParen(v___x_5440_, v_prec_5399_);
return v___x_5441_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr___boxed(lean_object* v_x_5466_, lean_object* v_prec_5467_){
_start:
{
uint8_t v_x_497__boxed_5468_; lean_object* v_res_5469_; 
v_x_497__boxed_5468_ = lean_unbox(v_x_5466_);
v_res_5469_ = l_Lean_Meta_instReprTransparencyMode_repr(v_x_497__boxed_5468_, v_prec_5467_);
lean_dec(v_prec_5467_);
return v_res_5469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr(uint8_t v_x_5481_, lean_object* v_prec_5482_){
_start:
{
lean_object* v___y_5484_; lean_object* v___y_5491_; lean_object* v___y_5498_; 
switch(v_x_5481_)
{
case 0:
{
lean_object* v___x_5504_; uint8_t v___x_5505_; 
v___x_5504_ = lean_unsigned_to_nat(1024u);
v___x_5505_ = lean_nat_dec_le(v___x_5504_, v_prec_5482_);
if (v___x_5505_ == 0)
{
lean_object* v___x_5506_; 
v___x_5506_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5484_ = v___x_5506_;
goto v___jp_5483_;
}
else
{
lean_object* v___x_5507_; 
v___x_5507_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5484_ = v___x_5507_;
goto v___jp_5483_;
}
}
case 1:
{
lean_object* v___x_5508_; uint8_t v___x_5509_; 
v___x_5508_ = lean_unsigned_to_nat(1024u);
v___x_5509_ = lean_nat_dec_le(v___x_5508_, v_prec_5482_);
if (v___x_5509_ == 0)
{
lean_object* v___x_5510_; 
v___x_5510_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5491_ = v___x_5510_;
goto v___jp_5490_;
}
else
{
lean_object* v___x_5511_; 
v___x_5511_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5491_ = v___x_5511_;
goto v___jp_5490_;
}
}
default: 
{
lean_object* v___x_5512_; uint8_t v___x_5513_; 
v___x_5512_ = lean_unsigned_to_nat(1024u);
v___x_5513_ = lean_nat_dec_le(v___x_5512_, v_prec_5482_);
if (v___x_5513_ == 0)
{
lean_object* v___x_5514_; 
v___x_5514_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5498_ = v___x_5514_;
goto v___jp_5497_;
}
else
{
lean_object* v___x_5515_; 
v___x_5515_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5498_ = v___x_5515_;
goto v___jp_5497_;
}
}
}
v___jp_5483_:
{
lean_object* v___x_5485_; lean_object* v___x_5486_; uint8_t v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; 
v___x_5485_ = ((lean_object*)(l_Lean_Meta_instReprEtaStructMode_repr___closed__1));
lean_inc(v___y_5484_);
v___x_5486_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5486_, 0, v___y_5484_);
lean_ctor_set(v___x_5486_, 1, v___x_5485_);
v___x_5487_ = 0;
v___x_5488_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5488_, 0, v___x_5486_);
lean_ctor_set_uint8(v___x_5488_, sizeof(void*)*1, v___x_5487_);
v___x_5489_ = l_Repr_addAppParen(v___x_5488_, v_prec_5482_);
return v___x_5489_;
}
v___jp_5490_:
{
lean_object* v___x_5492_; lean_object* v___x_5493_; uint8_t v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; 
v___x_5492_ = ((lean_object*)(l_Lean_Meta_instReprEtaStructMode_repr___closed__3));
lean_inc(v___y_5491_);
v___x_5493_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5493_, 0, v___y_5491_);
lean_ctor_set(v___x_5493_, 1, v___x_5492_);
v___x_5494_ = 0;
v___x_5495_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5495_, 0, v___x_5493_);
lean_ctor_set_uint8(v___x_5495_, sizeof(void*)*1, v___x_5494_);
v___x_5496_ = l_Repr_addAppParen(v___x_5495_, v_prec_5482_);
return v___x_5496_;
}
v___jp_5497_:
{
lean_object* v___x_5499_; lean_object* v___x_5500_; uint8_t v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; 
v___x_5499_ = ((lean_object*)(l_Lean_Meta_instReprEtaStructMode_repr___closed__5));
lean_inc(v___y_5498_);
v___x_5500_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5500_, 0, v___y_5498_);
lean_ctor_set(v___x_5500_, 1, v___x_5499_);
v___x_5501_ = 0;
v___x_5502_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5502_, 0, v___x_5500_);
lean_ctor_set_uint8(v___x_5502_, sizeof(void*)*1, v___x_5501_);
v___x_5503_ = l_Repr_addAppParen(v___x_5502_, v_prec_5482_);
return v___x_5503_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr___boxed(lean_object* v_x_5516_, lean_object* v_prec_5517_){
_start:
{
uint8_t v_x_251__boxed_5518_; lean_object* v_res_5519_; 
v_x_251__boxed_5518_ = lean_unbox(v_x_5516_);
v_res_5519_ = l_Lean_Meta_instReprEtaStructMode_repr(v_x_251__boxed_5518_, v_prec_5517_);
lean_dec(v_prec_5517_);
return v_res_5519_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_5531_; lean_object* v___x_5532_; 
v___x_5531_ = lean_unsigned_to_nat(8u);
v___x_5532_ = lean_nat_to_int(v___x_5531_);
return v___x_5532_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_5542_; lean_object* v___x_5543_; 
v___x_5542_ = lean_unsigned_to_nat(13u);
v___x_5543_ = lean_nat_to_int(v___x_5542_);
return v___x_5543_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_5553_; lean_object* v___x_5554_; 
v___x_5553_ = lean_unsigned_to_nat(10u);
v___x_5554_ = lean_nat_to_int(v___x_5553_);
return v___x_5554_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_5558_; lean_object* v___x_5559_; 
v___x_5558_ = lean_unsigned_to_nat(14u);
v___x_5559_ = lean_nat_to_int(v___x_5558_);
return v___x_5559_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_5563_; lean_object* v___x_5564_; 
v___x_5563_ = lean_unsigned_to_nat(19u);
v___x_5564_ = lean_nat_to_int(v___x_5563_);
return v___x_5564_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__27(void){
_start:
{
lean_object* v___x_5568_; lean_object* v___x_5569_; 
v___x_5568_ = lean_unsigned_to_nat(20u);
v___x_5569_ = lean_nat_to_int(v___x_5568_);
return v___x_5569_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__32(void){
_start:
{
lean_object* v___x_5576_; lean_object* v___x_5577_; 
v___x_5576_ = lean_unsigned_to_nat(9u);
v___x_5577_ = lean_nat_to_int(v___x_5576_);
return v___x_5577_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__37(void){
_start:
{
lean_object* v___x_5584_; lean_object* v___x_5585_; 
v___x_5584_ = lean_unsigned_to_nat(12u);
v___x_5585_ = lean_nat_to_int(v___x_5584_);
return v___x_5585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg(lean_object* v_x_5592_){
_start:
{
uint8_t v_zeta_5593_; uint8_t v_beta_5594_; uint8_t v_eta_5595_; uint8_t v_etaStruct_5596_; uint8_t v_iota_5597_; uint8_t v_proj_5598_; uint8_t v_decide_5599_; uint8_t v_autoUnfold_5600_; uint8_t v_failIfUnchanged_5601_; uint8_t v_unfoldPartialApp_5602_; uint8_t v_zetaDelta_5603_; uint8_t v_index_5604_; uint8_t v_zetaUnused_5605_; uint8_t v_zetaHave_5606_; uint8_t v_locals_5607_; uint8_t v_instances_5608_; lean_object* v___x_5609_; lean_object* v___x_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; lean_object* v___x_5614_; uint8_t v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; lean_object* v___x_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; lean_object* v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; lean_object* v___x_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; 
v_zeta_5593_ = lean_ctor_get_uint8(v_x_5592_, 0);
v_beta_5594_ = lean_ctor_get_uint8(v_x_5592_, 1);
v_eta_5595_ = lean_ctor_get_uint8(v_x_5592_, 2);
v_etaStruct_5596_ = lean_ctor_get_uint8(v_x_5592_, 3);
v_iota_5597_ = lean_ctor_get_uint8(v_x_5592_, 4);
v_proj_5598_ = lean_ctor_get_uint8(v_x_5592_, 5);
v_decide_5599_ = lean_ctor_get_uint8(v_x_5592_, 6);
v_autoUnfold_5600_ = lean_ctor_get_uint8(v_x_5592_, 7);
v_failIfUnchanged_5601_ = lean_ctor_get_uint8(v_x_5592_, 8);
v_unfoldPartialApp_5602_ = lean_ctor_get_uint8(v_x_5592_, 9);
v_zetaDelta_5603_ = lean_ctor_get_uint8(v_x_5592_, 10);
v_index_5604_ = lean_ctor_get_uint8(v_x_5592_, 11);
v_zetaUnused_5605_ = lean_ctor_get_uint8(v_x_5592_, 12);
v_zetaHave_5606_ = lean_ctor_get_uint8(v_x_5592_, 13);
v_locals_5607_ = lean_ctor_get_uint8(v_x_5592_, 14);
v_instances_5608_ = lean_ctor_get_uint8(v_x_5592_, 15);
v___x_5609_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5));
v___x_5610_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__3));
v___x_5611_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__4, &l_Lean_Meta_instReprConfig_repr___redArg___closed__4_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__4);
v___x_5612_ = lean_unsigned_to_nat(0u);
v___x_5613_ = l_Bool_repr___redArg(v_zeta_5593_);
v___x_5614_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5614_, 0, v___x_5611_);
lean_ctor_set(v___x_5614_, 1, v___x_5613_);
v___x_5615_ = 0;
v___x_5616_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5616_, 0, v___x_5614_);
lean_ctor_set_uint8(v___x_5616_, sizeof(void*)*1, v___x_5615_);
v___x_5617_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5617_, 0, v___x_5610_);
lean_ctor_set(v___x_5617_, 1, v___x_5616_);
v___x_5618_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4));
v___x_5619_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5619_, 0, v___x_5617_);
lean_ctor_set(v___x_5619_, 1, v___x_5618_);
v___x_5620_ = lean_box(1);
v___x_5621_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5621_, 0, v___x_5619_);
lean_ctor_set(v___x_5621_, 1, v___x_5620_);
v___x_5622_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__6));
v___x_5623_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5623_, 0, v___x_5621_);
lean_ctor_set(v___x_5623_, 1, v___x_5622_);
v___x_5624_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5624_, 0, v___x_5623_);
lean_ctor_set(v___x_5624_, 1, v___x_5609_);
v___x_5625_ = l_Bool_repr___redArg(v_beta_5594_);
v___x_5626_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5626_, 0, v___x_5611_);
lean_ctor_set(v___x_5626_, 1, v___x_5625_);
v___x_5627_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5627_, 0, v___x_5626_);
lean_ctor_set_uint8(v___x_5627_, sizeof(void*)*1, v___x_5615_);
v___x_5628_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5628_, 0, v___x_5624_);
lean_ctor_set(v___x_5628_, 1, v___x_5627_);
v___x_5629_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5629_, 0, v___x_5628_);
lean_ctor_set(v___x_5629_, 1, v___x_5618_);
v___x_5630_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5630_, 0, v___x_5629_);
lean_ctor_set(v___x_5630_, 1, v___x_5620_);
v___x_5631_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__8));
v___x_5632_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5632_, 0, v___x_5630_);
lean_ctor_set(v___x_5632_, 1, v___x_5631_);
v___x_5633_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5633_, 0, v___x_5632_);
lean_ctor_set(v___x_5633_, 1, v___x_5609_);
v___x_5634_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7);
v___x_5635_ = l_Bool_repr___redArg(v_eta_5595_);
v___x_5636_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5636_, 0, v___x_5634_);
lean_ctor_set(v___x_5636_, 1, v___x_5635_);
v___x_5637_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5637_, 0, v___x_5636_);
lean_ctor_set_uint8(v___x_5637_, sizeof(void*)*1, v___x_5615_);
v___x_5638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5638_, 0, v___x_5633_);
lean_ctor_set(v___x_5638_, 1, v___x_5637_);
v___x_5639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5639_, 0, v___x_5638_);
lean_ctor_set(v___x_5639_, 1, v___x_5618_);
v___x_5640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5640_, 0, v___x_5639_);
lean_ctor_set(v___x_5640_, 1, v___x_5620_);
v___x_5641_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__10));
v___x_5642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5642_, 0, v___x_5640_);
lean_ctor_set(v___x_5642_, 1, v___x_5641_);
v___x_5643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5643_, 0, v___x_5642_);
lean_ctor_set(v___x_5643_, 1, v___x_5609_);
v___x_5644_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__11, &l_Lean_Meta_instReprConfig_repr___redArg___closed__11_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__11);
v___x_5645_ = l_Lean_Meta_instReprEtaStructMode_repr(v_etaStruct_5596_, v___x_5612_);
v___x_5646_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5646_, 0, v___x_5644_);
lean_ctor_set(v___x_5646_, 1, v___x_5645_);
v___x_5647_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5647_, 0, v___x_5646_);
lean_ctor_set_uint8(v___x_5647_, sizeof(void*)*1, v___x_5615_);
v___x_5648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5648_, 0, v___x_5643_);
lean_ctor_set(v___x_5648_, 1, v___x_5647_);
v___x_5649_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5649_, 0, v___x_5648_);
lean_ctor_set(v___x_5649_, 1, v___x_5618_);
v___x_5650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5650_, 0, v___x_5649_);
lean_ctor_set(v___x_5650_, 1, v___x_5620_);
v___x_5651_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__13));
v___x_5652_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5652_, 0, v___x_5650_);
lean_ctor_set(v___x_5652_, 1, v___x_5651_);
v___x_5653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5653_, 0, v___x_5652_);
lean_ctor_set(v___x_5653_, 1, v___x_5609_);
v___x_5654_ = l_Bool_repr___redArg(v_iota_5597_);
v___x_5655_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5655_, 0, v___x_5611_);
lean_ctor_set(v___x_5655_, 1, v___x_5654_);
v___x_5656_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5656_, 0, v___x_5655_);
lean_ctor_set_uint8(v___x_5656_, sizeof(void*)*1, v___x_5615_);
v___x_5657_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5657_, 0, v___x_5653_);
lean_ctor_set(v___x_5657_, 1, v___x_5656_);
v___x_5658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5658_, 0, v___x_5657_);
lean_ctor_set(v___x_5658_, 1, v___x_5618_);
v___x_5659_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5659_, 0, v___x_5658_);
lean_ctor_set(v___x_5659_, 1, v___x_5620_);
v___x_5660_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__15));
v___x_5661_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5661_, 0, v___x_5659_);
lean_ctor_set(v___x_5661_, 1, v___x_5660_);
v___x_5662_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5662_, 0, v___x_5661_);
lean_ctor_set(v___x_5662_, 1, v___x_5609_);
v___x_5663_ = l_Bool_repr___redArg(v_proj_5598_);
v___x_5664_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5664_, 0, v___x_5611_);
lean_ctor_set(v___x_5664_, 1, v___x_5663_);
v___x_5665_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5665_, 0, v___x_5664_);
lean_ctor_set_uint8(v___x_5665_, sizeof(void*)*1, v___x_5615_);
v___x_5666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5666_, 0, v___x_5662_);
lean_ctor_set(v___x_5666_, 1, v___x_5665_);
v___x_5667_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5667_, 0, v___x_5666_);
lean_ctor_set(v___x_5667_, 1, v___x_5618_);
v___x_5668_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5668_, 0, v___x_5667_);
lean_ctor_set(v___x_5668_, 1, v___x_5620_);
v___x_5669_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__17));
v___x_5670_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5670_, 0, v___x_5668_);
lean_ctor_set(v___x_5670_, 1, v___x_5669_);
v___x_5671_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5671_, 0, v___x_5670_);
lean_ctor_set(v___x_5671_, 1, v___x_5609_);
v___x_5672_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__18, &l_Lean_Meta_instReprConfig_repr___redArg___closed__18_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__18);
v___x_5673_ = l_Bool_repr___redArg(v_decide_5599_);
v___x_5674_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5674_, 0, v___x_5672_);
lean_ctor_set(v___x_5674_, 1, v___x_5673_);
v___x_5675_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5675_, 0, v___x_5674_);
lean_ctor_set_uint8(v___x_5675_, sizeof(void*)*1, v___x_5615_);
v___x_5676_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5676_, 0, v___x_5671_);
lean_ctor_set(v___x_5676_, 1, v___x_5675_);
v___x_5677_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5677_, 0, v___x_5676_);
lean_ctor_set(v___x_5677_, 1, v___x_5618_);
v___x_5678_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5678_, 0, v___x_5677_);
lean_ctor_set(v___x_5678_, 1, v___x_5620_);
v___x_5679_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__20));
v___x_5680_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5680_, 0, v___x_5678_);
lean_ctor_set(v___x_5680_, 1, v___x_5679_);
v___x_5681_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5681_, 0, v___x_5680_);
lean_ctor_set(v___x_5681_, 1, v___x_5609_);
v___x_5682_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__21, &l_Lean_Meta_instReprConfig_repr___redArg___closed__21_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__21);
v___x_5683_ = l_Bool_repr___redArg(v_autoUnfold_5600_);
v___x_5684_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5684_, 0, v___x_5682_);
lean_ctor_set(v___x_5684_, 1, v___x_5683_);
v___x_5685_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5685_, 0, v___x_5684_);
lean_ctor_set_uint8(v___x_5685_, sizeof(void*)*1, v___x_5615_);
v___x_5686_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5686_, 0, v___x_5681_);
lean_ctor_set(v___x_5686_, 1, v___x_5685_);
v___x_5687_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5687_, 0, v___x_5686_);
lean_ctor_set(v___x_5687_, 1, v___x_5618_);
v___x_5688_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5688_, 0, v___x_5687_);
lean_ctor_set(v___x_5688_, 1, v___x_5620_);
v___x_5689_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__23));
v___x_5690_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5690_, 0, v___x_5688_);
lean_ctor_set(v___x_5690_, 1, v___x_5689_);
v___x_5691_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5691_, 0, v___x_5690_);
lean_ctor_set(v___x_5691_, 1, v___x_5609_);
v___x_5692_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__24, &l_Lean_Meta_instReprConfig_repr___redArg___closed__24_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__24);
v___x_5693_ = l_Bool_repr___redArg(v_failIfUnchanged_5601_);
v___x_5694_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5694_, 0, v___x_5692_);
lean_ctor_set(v___x_5694_, 1, v___x_5693_);
v___x_5695_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5695_, 0, v___x_5694_);
lean_ctor_set_uint8(v___x_5695_, sizeof(void*)*1, v___x_5615_);
v___x_5696_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5696_, 0, v___x_5691_);
lean_ctor_set(v___x_5696_, 1, v___x_5695_);
v___x_5697_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5697_, 0, v___x_5696_);
lean_ctor_set(v___x_5697_, 1, v___x_5618_);
v___x_5698_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5698_, 0, v___x_5697_);
lean_ctor_set(v___x_5698_, 1, v___x_5620_);
v___x_5699_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__26));
v___x_5700_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5700_, 0, v___x_5698_);
lean_ctor_set(v___x_5700_, 1, v___x_5699_);
v___x_5701_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5701_, 0, v___x_5700_);
lean_ctor_set(v___x_5701_, 1, v___x_5609_);
v___x_5702_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__27, &l_Lean_Meta_instReprConfig_repr___redArg___closed__27_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__27);
v___x_5703_ = l_Bool_repr___redArg(v_unfoldPartialApp_5602_);
v___x_5704_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5704_, 0, v___x_5702_);
lean_ctor_set(v___x_5704_, 1, v___x_5703_);
v___x_5705_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5705_, 0, v___x_5704_);
lean_ctor_set_uint8(v___x_5705_, sizeof(void*)*1, v___x_5615_);
v___x_5706_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5706_, 0, v___x_5701_);
lean_ctor_set(v___x_5706_, 1, v___x_5705_);
v___x_5707_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5707_, 0, v___x_5706_);
lean_ctor_set(v___x_5707_, 1, v___x_5618_);
v___x_5708_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5708_, 0, v___x_5707_);
lean_ctor_set(v___x_5708_, 1, v___x_5620_);
v___x_5709_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__29));
v___x_5710_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5710_, 0, v___x_5708_);
lean_ctor_set(v___x_5710_, 1, v___x_5709_);
v___x_5711_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5711_, 0, v___x_5710_);
lean_ctor_set(v___x_5711_, 1, v___x_5609_);
v___x_5712_ = l_Bool_repr___redArg(v_zetaDelta_5603_);
v___x_5713_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5713_, 0, v___x_5644_);
lean_ctor_set(v___x_5713_, 1, v___x_5712_);
v___x_5714_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5714_, 0, v___x_5713_);
lean_ctor_set_uint8(v___x_5714_, sizeof(void*)*1, v___x_5615_);
v___x_5715_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5715_, 0, v___x_5711_);
lean_ctor_set(v___x_5715_, 1, v___x_5714_);
v___x_5716_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5716_, 0, v___x_5715_);
lean_ctor_set(v___x_5716_, 1, v___x_5618_);
v___x_5717_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5717_, 0, v___x_5716_);
lean_ctor_set(v___x_5717_, 1, v___x_5620_);
v___x_5718_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__31));
v___x_5719_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5719_, 0, v___x_5717_);
lean_ctor_set(v___x_5719_, 1, v___x_5718_);
v___x_5720_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5720_, 0, v___x_5719_);
lean_ctor_set(v___x_5720_, 1, v___x_5609_);
v___x_5721_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__32, &l_Lean_Meta_instReprConfig_repr___redArg___closed__32_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__32);
v___x_5722_ = l_Bool_repr___redArg(v_index_5604_);
v___x_5723_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5723_, 0, v___x_5721_);
lean_ctor_set(v___x_5723_, 1, v___x_5722_);
v___x_5724_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5724_, 0, v___x_5723_);
lean_ctor_set_uint8(v___x_5724_, sizeof(void*)*1, v___x_5615_);
v___x_5725_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5725_, 0, v___x_5720_);
lean_ctor_set(v___x_5725_, 1, v___x_5724_);
v___x_5726_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5726_, 0, v___x_5725_);
lean_ctor_set(v___x_5726_, 1, v___x_5618_);
v___x_5727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5727_, 0, v___x_5726_);
lean_ctor_set(v___x_5727_, 1, v___x_5620_);
v___x_5728_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__34));
v___x_5729_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5729_, 0, v___x_5727_);
lean_ctor_set(v___x_5729_, 1, v___x_5728_);
v___x_5730_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5730_, 0, v___x_5729_);
lean_ctor_set(v___x_5730_, 1, v___x_5609_);
v___x_5731_ = l_Bool_repr___redArg(v_zetaUnused_5605_);
v___x_5732_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5732_, 0, v___x_5682_);
lean_ctor_set(v___x_5732_, 1, v___x_5731_);
v___x_5733_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5733_, 0, v___x_5732_);
lean_ctor_set_uint8(v___x_5733_, sizeof(void*)*1, v___x_5615_);
v___x_5734_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5734_, 0, v___x_5730_);
lean_ctor_set(v___x_5734_, 1, v___x_5733_);
v___x_5735_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5735_, 0, v___x_5734_);
lean_ctor_set(v___x_5735_, 1, v___x_5618_);
v___x_5736_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5736_, 0, v___x_5735_);
lean_ctor_set(v___x_5736_, 1, v___x_5620_);
v___x_5737_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__36));
v___x_5738_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5738_, 0, v___x_5736_);
lean_ctor_set(v___x_5738_, 1, v___x_5737_);
v___x_5739_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5739_, 0, v___x_5738_);
lean_ctor_set(v___x_5739_, 1, v___x_5609_);
v___x_5740_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__37, &l_Lean_Meta_instReprConfig_repr___redArg___closed__37_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__37);
v___x_5741_ = l_Bool_repr___redArg(v_zetaHave_5606_);
v___x_5742_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5742_, 0, v___x_5740_);
lean_ctor_set(v___x_5742_, 1, v___x_5741_);
v___x_5743_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5743_, 0, v___x_5742_);
lean_ctor_set_uint8(v___x_5743_, sizeof(void*)*1, v___x_5615_);
v___x_5744_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5744_, 0, v___x_5739_);
lean_ctor_set(v___x_5744_, 1, v___x_5743_);
v___x_5745_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5745_, 0, v___x_5744_);
lean_ctor_set(v___x_5745_, 1, v___x_5618_);
v___x_5746_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5746_, 0, v___x_5745_);
lean_ctor_set(v___x_5746_, 1, v___x_5620_);
v___x_5747_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__39));
v___x_5748_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5748_, 0, v___x_5746_);
lean_ctor_set(v___x_5748_, 1, v___x_5747_);
v___x_5749_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5749_, 0, v___x_5748_);
lean_ctor_set(v___x_5749_, 1, v___x_5609_);
v___x_5750_ = l_Bool_repr___redArg(v_locals_5607_);
v___x_5751_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5751_, 0, v___x_5672_);
lean_ctor_set(v___x_5751_, 1, v___x_5750_);
v___x_5752_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5752_, 0, v___x_5751_);
lean_ctor_set_uint8(v___x_5752_, sizeof(void*)*1, v___x_5615_);
v___x_5753_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5753_, 0, v___x_5749_);
lean_ctor_set(v___x_5753_, 1, v___x_5752_);
v___x_5754_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5754_, 0, v___x_5753_);
lean_ctor_set(v___x_5754_, 1, v___x_5618_);
v___x_5755_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5755_, 0, v___x_5754_);
lean_ctor_set(v___x_5755_, 1, v___x_5620_);
v___x_5756_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__41));
v___x_5757_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5757_, 0, v___x_5755_);
lean_ctor_set(v___x_5757_, 1, v___x_5756_);
v___x_5758_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5758_, 0, v___x_5757_);
lean_ctor_set(v___x_5758_, 1, v___x_5609_);
v___x_5759_ = l_Bool_repr___redArg(v_instances_5608_);
v___x_5760_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5760_, 0, v___x_5644_);
lean_ctor_set(v___x_5760_, 1, v___x_5759_);
v___x_5761_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5761_, 0, v___x_5760_);
lean_ctor_set_uint8(v___x_5761_, sizeof(void*)*1, v___x_5615_);
v___x_5762_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5762_, 0, v___x_5758_);
lean_ctor_set(v___x_5762_, 1, v___x_5761_);
v___x_5763_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10);
v___x_5764_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11));
v___x_5765_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5765_, 0, v___x_5764_);
lean_ctor_set(v___x_5765_, 1, v___x_5762_);
v___x_5766_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12));
v___x_5767_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5767_, 0, v___x_5765_);
lean_ctor_set(v___x_5767_, 1, v___x_5766_);
v___x_5768_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5768_, 0, v___x_5763_);
lean_ctor_set(v___x_5768_, 1, v___x_5767_);
v___x_5769_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5769_, 0, v___x_5768_);
lean_ctor_set_uint8(v___x_5769_, sizeof(void*)*1, v___x_5615_);
return v___x_5769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg___boxed(lean_object* v_x_5770_){
_start:
{
lean_object* v_res_5771_; 
v_res_5771_ = l_Lean_Meta_instReprConfig_repr___redArg(v_x_5770_);
lean_dec_ref(v_x_5770_);
return v_res_5771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr(lean_object* v_x_5772_, lean_object* v_prec_5773_){
_start:
{
lean_object* v___x_5774_; 
v___x_5774_ = l_Lean_Meta_instReprConfig_repr___redArg(v_x_5772_);
return v___x_5774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___boxed(lean_object* v_x_5775_, lean_object* v_prec_5776_){
_start:
{
lean_object* v_res_5777_; 
v_res_5777_ = l_Lean_Meta_instReprConfig_repr(v_x_5775_, v_prec_5776_);
lean_dec(v_prec_5776_);
lean_dec_ref(v_x_5775_);
return v_res_5777_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(lean_object* v_x_5785_, lean_object* v_x_5786_){
_start:
{
if (lean_obj_tag(v_x_5785_) == 0)
{
lean_object* v___x_5787_; 
v___x_5787_ = ((lean_object*)(l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0));
return v___x_5787_;
}
else
{
lean_object* v_val_5788_; lean_object* v___x_5790_; uint8_t v_isShared_5791_; uint8_t v_isSharedCheck_5799_; 
v_val_5788_ = lean_ctor_get(v_x_5785_, 0);
v_isSharedCheck_5799_ = !lean_is_exclusive(v_x_5785_);
if (v_isSharedCheck_5799_ == 0)
{
v___x_5790_ = v_x_5785_;
v_isShared_5791_ = v_isSharedCheck_5799_;
goto v_resetjp_5789_;
}
else
{
lean_inc(v_val_5788_);
lean_dec(v_x_5785_);
v___x_5790_ = lean_box(0);
v_isShared_5791_ = v_isSharedCheck_5799_;
goto v_resetjp_5789_;
}
v_resetjp_5789_:
{
lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5795_; 
v___x_5792_ = ((lean_object*)(l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2));
v___x_5793_ = l_Nat_reprFast(v_val_5788_);
if (v_isShared_5791_ == 0)
{
lean_ctor_set_tag(v___x_5790_, 3);
lean_ctor_set(v___x_5790_, 0, v___x_5793_);
v___x_5795_ = v___x_5790_;
goto v_reusejp_5794_;
}
else
{
lean_object* v_reuseFailAlloc_5798_; 
v_reuseFailAlloc_5798_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5798_, 0, v___x_5793_);
v___x_5795_ = v_reuseFailAlloc_5798_;
goto v_reusejp_5794_;
}
v_reusejp_5794_:
{
lean_object* v___x_5796_; lean_object* v___x_5797_; 
v___x_5796_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5796_, 0, v___x_5792_);
lean_ctor_set(v___x_5796_, 1, v___x_5795_);
v___x_5797_ = l_Repr_addAppParen(v___x_5796_, v_x_5786_);
return v___x_5797_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___boxed(lean_object* v_x_5800_, lean_object* v_x_5801_){
_start:
{
lean_object* v_res_5802_; 
v_res_5802_ = l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(v_x_5800_, v_x_5801_);
lean_dec(v_x_5801_);
return v_res_5802_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_5815_; lean_object* v___x_5816_; 
v___x_5815_ = lean_unsigned_to_nat(21u);
v___x_5816_ = lean_nat_to_int(v___x_5815_);
return v___x_5816_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_5823_; lean_object* v___x_5824_; 
v___x_5823_ = lean_unsigned_to_nat(11u);
v___x_5824_ = lean_nat_to_int(v___x_5823_);
return v___x_5824_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_5840_; lean_object* v___x_5841_; 
v___x_5840_ = lean_unsigned_to_nat(23u);
v___x_5841_ = lean_nat_to_int(v___x_5840_);
return v___x_5841_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25(void){
_start:
{
lean_object* v___x_5845_; lean_object* v___x_5846_; 
v___x_5845_ = lean_unsigned_to_nat(16u);
v___x_5846_ = lean_nat_to_int(v___x_5845_);
return v___x_5846_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30(void){
_start:
{
lean_object* v___x_5853_; lean_object* v___x_5854_; 
v___x_5853_ = lean_unsigned_to_nat(15u);
v___x_5854_ = lean_nat_to_int(v___x_5853_);
return v___x_5854_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35(void){
_start:
{
lean_object* v___x_5861_; lean_object* v___x_5862_; 
v___x_5861_ = lean_unsigned_to_nat(17u);
v___x_5862_ = lean_nat_to_int(v___x_5861_);
return v___x_5862_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40(void){
_start:
{
lean_object* v___x_5869_; lean_object* v___x_5870_; 
v___x_5869_ = lean_unsigned_to_nat(18u);
v___x_5870_ = lean_nat_to_int(v___x_5869_);
return v___x_5870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg(lean_object* v_x_5871_){
_start:
{
lean_object* v_maxSteps_5872_; lean_object* v_maxDischargeDepth_5873_; uint8_t v_contextual_5874_; uint8_t v_memoize_5875_; uint8_t v_singlePass_5876_; uint8_t v_zeta_5877_; uint8_t v_beta_5878_; uint8_t v_eta_5879_; uint8_t v_etaStruct_5880_; uint8_t v_iota_5881_; uint8_t v_proj_5882_; uint8_t v_decide_5883_; uint8_t v_arith_5884_; uint8_t v_autoUnfold_5885_; uint8_t v_dsimp_5886_; uint8_t v_failIfUnchanged_5887_; uint8_t v_ground_5888_; uint8_t v_unfoldPartialApp_5889_; uint8_t v_zetaDelta_5890_; uint8_t v_index_5891_; uint8_t v_implicitDefEqProofs_5892_; uint8_t v_zetaUnused_5893_; uint8_t v_catchRuntime_5894_; uint8_t v_zetaHave_5895_; uint8_t v_letToHave_5896_; uint8_t v_congrConsts_5897_; uint8_t v_bitVecOfNat_5898_; uint8_t v_warnExponents_5899_; uint8_t v_suggestions_5900_; lean_object* v_maxSuggestions_5901_; uint8_t v_locals_5902_; uint8_t v_instances_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; uint8_t v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5953_; lean_object* v___x_5954_; lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; lean_object* v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; lean_object* v___x_6003_; lean_object* v___x_6004_; lean_object* v___x_6005_; lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; lean_object* v___x_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; lean_object* v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6050_; lean_object* v___x_6051_; lean_object* v___x_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___x_6122_; lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; lean_object* v___x_6204_; lean_object* v___x_6205_; lean_object* v___x_6206_; lean_object* v___x_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; lean_object* v___x_6210_; lean_object* v___x_6211_; lean_object* v___x_6212_; lean_object* v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; 
v_maxSteps_5872_ = lean_ctor_get(v_x_5871_, 0);
lean_inc(v_maxSteps_5872_);
v_maxDischargeDepth_5873_ = lean_ctor_get(v_x_5871_, 1);
lean_inc(v_maxDischargeDepth_5873_);
v_contextual_5874_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3);
v_memoize_5875_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 1);
v_singlePass_5876_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 2);
v_zeta_5877_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 3);
v_beta_5878_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 4);
v_eta_5879_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 5);
v_etaStruct_5880_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 6);
v_iota_5881_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 7);
v_proj_5882_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 8);
v_decide_5883_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 9);
v_arith_5884_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 10);
v_autoUnfold_5885_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 11);
v_dsimp_5886_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 12);
v_failIfUnchanged_5887_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 13);
v_ground_5888_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_5889_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 15);
v_zetaDelta_5890_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 16);
v_index_5891_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_5892_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 18);
v_zetaUnused_5893_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 19);
v_catchRuntime_5894_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 20);
v_zetaHave_5895_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 21);
v_letToHave_5896_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 22);
v_congrConsts_5897_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 23);
v_bitVecOfNat_5898_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 24);
v_warnExponents_5899_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 25);
v_suggestions_5900_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 26);
v_maxSuggestions_5901_ = lean_ctor_get(v_x_5871_, 2);
lean_inc(v_maxSuggestions_5901_);
v_locals_5902_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 27);
v_instances_5903_ = lean_ctor_get_uint8(v_x_5871_, sizeof(void*)*3 + 28);
lean_dec_ref(v_x_5871_);
v___x_5904_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5));
v___x_5905_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3));
v___x_5906_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__37, &l_Lean_Meta_instReprConfig_repr___redArg___closed__37_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__37);
v___x_5907_ = l_Nat_reprFast(v_maxSteps_5872_);
v___x_5908_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5908_, 0, v___x_5907_);
v___x_5909_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5909_, 0, v___x_5906_);
lean_ctor_set(v___x_5909_, 1, v___x_5908_);
v___x_5910_ = 0;
v___x_5911_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5911_, 0, v___x_5909_);
lean_ctor_set_uint8(v___x_5911_, sizeof(void*)*1, v___x_5910_);
v___x_5912_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5912_, 0, v___x_5905_);
lean_ctor_set(v___x_5912_, 1, v___x_5911_);
v___x_5913_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4));
v___x_5914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5914_, 0, v___x_5912_);
lean_ctor_set(v___x_5914_, 1, v___x_5913_);
v___x_5915_ = lean_box(1);
v___x_5916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5916_, 0, v___x_5914_);
lean_ctor_set(v___x_5916_, 1, v___x_5915_);
v___x_5917_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5));
v___x_5918_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5918_, 0, v___x_5916_);
lean_ctor_set(v___x_5918_, 1, v___x_5917_);
v___x_5919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5919_, 0, v___x_5918_);
lean_ctor_set(v___x_5919_, 1, v___x_5904_);
v___x_5920_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6);
v___x_5921_ = l_Nat_reprFast(v_maxDischargeDepth_5873_);
v___x_5922_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5922_, 0, v___x_5921_);
v___x_5923_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5923_, 0, v___x_5920_);
lean_ctor_set(v___x_5923_, 1, v___x_5922_);
v___x_5924_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5924_, 0, v___x_5923_);
lean_ctor_set_uint8(v___x_5924_, sizeof(void*)*1, v___x_5910_);
v___x_5925_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5925_, 0, v___x_5919_);
lean_ctor_set(v___x_5925_, 1, v___x_5924_);
v___x_5926_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5926_, 0, v___x_5925_);
lean_ctor_set(v___x_5926_, 1, v___x_5913_);
v___x_5927_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5927_, 0, v___x_5926_);
lean_ctor_set(v___x_5927_, 1, v___x_5915_);
v___x_5928_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8));
v___x_5929_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5929_, 0, v___x_5927_);
lean_ctor_set(v___x_5929_, 1, v___x_5928_);
v___x_5930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5930_, 0, v___x_5929_);
lean_ctor_set(v___x_5930_, 1, v___x_5904_);
v___x_5931_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__21, &l_Lean_Meta_instReprConfig_repr___redArg___closed__21_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__21);
v___x_5932_ = lean_unsigned_to_nat(0u);
v___x_5933_ = l_Bool_repr___redArg(v_contextual_5874_);
v___x_5934_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5934_, 0, v___x_5931_);
lean_ctor_set(v___x_5934_, 1, v___x_5933_);
v___x_5935_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5935_, 0, v___x_5934_);
lean_ctor_set_uint8(v___x_5935_, sizeof(void*)*1, v___x_5910_);
v___x_5936_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5936_, 0, v___x_5930_);
lean_ctor_set(v___x_5936_, 1, v___x_5935_);
v___x_5937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5937_, 0, v___x_5936_);
lean_ctor_set(v___x_5937_, 1, v___x_5913_);
v___x_5938_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5938_, 0, v___x_5937_);
lean_ctor_set(v___x_5938_, 1, v___x_5915_);
v___x_5939_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10));
v___x_5940_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5940_, 0, v___x_5938_);
lean_ctor_set(v___x_5940_, 1, v___x_5939_);
v___x_5941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5941_, 0, v___x_5940_);
lean_ctor_set(v___x_5941_, 1, v___x_5904_);
v___x_5942_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11);
v___x_5943_ = l_Bool_repr___redArg(v_memoize_5875_);
v___x_5944_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5944_, 0, v___x_5942_);
lean_ctor_set(v___x_5944_, 1, v___x_5943_);
v___x_5945_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5945_, 0, v___x_5944_);
lean_ctor_set_uint8(v___x_5945_, sizeof(void*)*1, v___x_5910_);
v___x_5946_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5946_, 0, v___x_5941_);
lean_ctor_set(v___x_5946_, 1, v___x_5945_);
v___x_5947_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5947_, 0, v___x_5946_);
lean_ctor_set(v___x_5947_, 1, v___x_5913_);
v___x_5948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5948_, 0, v___x_5947_);
lean_ctor_set(v___x_5948_, 1, v___x_5915_);
v___x_5949_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13));
v___x_5950_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5950_, 0, v___x_5948_);
lean_ctor_set(v___x_5950_, 1, v___x_5949_);
v___x_5951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5951_, 0, v___x_5950_);
lean_ctor_set(v___x_5951_, 1, v___x_5904_);
v___x_5952_ = l_Bool_repr___redArg(v_singlePass_5876_);
v___x_5953_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5953_, 0, v___x_5931_);
lean_ctor_set(v___x_5953_, 1, v___x_5952_);
v___x_5954_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5954_, 0, v___x_5953_);
lean_ctor_set_uint8(v___x_5954_, sizeof(void*)*1, v___x_5910_);
v___x_5955_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5955_, 0, v___x_5951_);
lean_ctor_set(v___x_5955_, 1, v___x_5954_);
v___x_5956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5956_, 0, v___x_5955_);
lean_ctor_set(v___x_5956_, 1, v___x_5913_);
v___x_5957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5957_, 0, v___x_5956_);
lean_ctor_set(v___x_5957_, 1, v___x_5915_);
v___x_5958_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__1));
v___x_5959_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5959_, 0, v___x_5957_);
lean_ctor_set(v___x_5959_, 1, v___x_5958_);
v___x_5960_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5960_, 0, v___x_5959_);
lean_ctor_set(v___x_5960_, 1, v___x_5904_);
v___x_5961_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__4, &l_Lean_Meta_instReprConfig_repr___redArg___closed__4_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__4);
v___x_5962_ = l_Bool_repr___redArg(v_zeta_5877_);
v___x_5963_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5963_, 0, v___x_5961_);
lean_ctor_set(v___x_5963_, 1, v___x_5962_);
v___x_5964_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5964_, 0, v___x_5963_);
lean_ctor_set_uint8(v___x_5964_, sizeof(void*)*1, v___x_5910_);
v___x_5965_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5965_, 0, v___x_5960_);
lean_ctor_set(v___x_5965_, 1, v___x_5964_);
v___x_5966_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5966_, 0, v___x_5965_);
lean_ctor_set(v___x_5966_, 1, v___x_5913_);
v___x_5967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5967_, 0, v___x_5966_);
lean_ctor_set(v___x_5967_, 1, v___x_5915_);
v___x_5968_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__6));
v___x_5969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5969_, 0, v___x_5967_);
lean_ctor_set(v___x_5969_, 1, v___x_5968_);
v___x_5970_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5970_, 0, v___x_5969_);
lean_ctor_set(v___x_5970_, 1, v___x_5904_);
v___x_5971_ = l_Bool_repr___redArg(v_beta_5878_);
v___x_5972_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5972_, 0, v___x_5961_);
lean_ctor_set(v___x_5972_, 1, v___x_5971_);
v___x_5973_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5973_, 0, v___x_5972_);
lean_ctor_set_uint8(v___x_5973_, sizeof(void*)*1, v___x_5910_);
v___x_5974_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5974_, 0, v___x_5970_);
lean_ctor_set(v___x_5974_, 1, v___x_5973_);
v___x_5975_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5975_, 0, v___x_5974_);
lean_ctor_set(v___x_5975_, 1, v___x_5913_);
v___x_5976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5976_, 0, v___x_5975_);
lean_ctor_set(v___x_5976_, 1, v___x_5915_);
v___x_5977_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__8));
v___x_5978_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5978_, 0, v___x_5976_);
lean_ctor_set(v___x_5978_, 1, v___x_5977_);
v___x_5979_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5979_, 0, v___x_5978_);
lean_ctor_set(v___x_5979_, 1, v___x_5904_);
v___x_5980_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7);
v___x_5981_ = l_Bool_repr___redArg(v_eta_5879_);
v___x_5982_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5982_, 0, v___x_5980_);
lean_ctor_set(v___x_5982_, 1, v___x_5981_);
v___x_5983_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5983_, 0, v___x_5982_);
lean_ctor_set_uint8(v___x_5983_, sizeof(void*)*1, v___x_5910_);
v___x_5984_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5984_, 0, v___x_5979_);
lean_ctor_set(v___x_5984_, 1, v___x_5983_);
v___x_5985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5985_, 0, v___x_5984_);
lean_ctor_set(v___x_5985_, 1, v___x_5913_);
v___x_5986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5986_, 0, v___x_5985_);
lean_ctor_set(v___x_5986_, 1, v___x_5915_);
v___x_5987_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__10));
v___x_5988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5988_, 0, v___x_5986_);
lean_ctor_set(v___x_5988_, 1, v___x_5987_);
v___x_5989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5989_, 0, v___x_5988_);
lean_ctor_set(v___x_5989_, 1, v___x_5904_);
v___x_5990_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__11, &l_Lean_Meta_instReprConfig_repr___redArg___closed__11_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__11);
v___x_5991_ = l_Lean_Meta_instReprEtaStructMode_repr(v_etaStruct_5880_, v___x_5932_);
v___x_5992_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5992_, 0, v___x_5990_);
lean_ctor_set(v___x_5992_, 1, v___x_5991_);
v___x_5993_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5993_, 0, v___x_5992_);
lean_ctor_set_uint8(v___x_5993_, sizeof(void*)*1, v___x_5910_);
v___x_5994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5994_, 0, v___x_5989_);
lean_ctor_set(v___x_5994_, 1, v___x_5993_);
v___x_5995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5995_, 0, v___x_5994_);
lean_ctor_set(v___x_5995_, 1, v___x_5913_);
v___x_5996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5996_, 0, v___x_5995_);
lean_ctor_set(v___x_5996_, 1, v___x_5915_);
v___x_5997_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__13));
v___x_5998_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5998_, 0, v___x_5996_);
lean_ctor_set(v___x_5998_, 1, v___x_5997_);
v___x_5999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5999_, 0, v___x_5998_);
lean_ctor_set(v___x_5999_, 1, v___x_5904_);
v___x_6000_ = l_Bool_repr___redArg(v_iota_5881_);
v___x_6001_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6001_, 0, v___x_5961_);
lean_ctor_set(v___x_6001_, 1, v___x_6000_);
v___x_6002_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6002_, 0, v___x_6001_);
lean_ctor_set_uint8(v___x_6002_, sizeof(void*)*1, v___x_5910_);
v___x_6003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6003_, 0, v___x_5999_);
lean_ctor_set(v___x_6003_, 1, v___x_6002_);
v___x_6004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6004_, 0, v___x_6003_);
lean_ctor_set(v___x_6004_, 1, v___x_5913_);
v___x_6005_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6005_, 0, v___x_6004_);
lean_ctor_set(v___x_6005_, 1, v___x_5915_);
v___x_6006_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__15));
v___x_6007_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6007_, 0, v___x_6005_);
lean_ctor_set(v___x_6007_, 1, v___x_6006_);
v___x_6008_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6008_, 0, v___x_6007_);
lean_ctor_set(v___x_6008_, 1, v___x_5904_);
v___x_6009_ = l_Bool_repr___redArg(v_proj_5882_);
v___x_6010_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6010_, 0, v___x_5961_);
lean_ctor_set(v___x_6010_, 1, v___x_6009_);
v___x_6011_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6011_, 0, v___x_6010_);
lean_ctor_set_uint8(v___x_6011_, sizeof(void*)*1, v___x_5910_);
v___x_6012_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6012_, 0, v___x_6008_);
lean_ctor_set(v___x_6012_, 1, v___x_6011_);
v___x_6013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6013_, 0, v___x_6012_);
lean_ctor_set(v___x_6013_, 1, v___x_5913_);
v___x_6014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6014_, 0, v___x_6013_);
lean_ctor_set(v___x_6014_, 1, v___x_5915_);
v___x_6015_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__17));
v___x_6016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6016_, 0, v___x_6014_);
lean_ctor_set(v___x_6016_, 1, v___x_6015_);
v___x_6017_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6017_, 0, v___x_6016_);
lean_ctor_set(v___x_6017_, 1, v___x_5904_);
v___x_6018_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__18, &l_Lean_Meta_instReprConfig_repr___redArg___closed__18_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__18);
v___x_6019_ = l_Bool_repr___redArg(v_decide_5883_);
v___x_6020_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6020_, 0, v___x_6018_);
lean_ctor_set(v___x_6020_, 1, v___x_6019_);
v___x_6021_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6021_, 0, v___x_6020_);
lean_ctor_set_uint8(v___x_6021_, sizeof(void*)*1, v___x_5910_);
v___x_6022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6022_, 0, v___x_6017_);
lean_ctor_set(v___x_6022_, 1, v___x_6021_);
v___x_6023_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6023_, 0, v___x_6022_);
lean_ctor_set(v___x_6023_, 1, v___x_5913_);
v___x_6024_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6024_, 0, v___x_6023_);
lean_ctor_set(v___x_6024_, 1, v___x_5915_);
v___x_6025_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15));
v___x_6026_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6026_, 0, v___x_6024_);
lean_ctor_set(v___x_6026_, 1, v___x_6025_);
v___x_6027_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6027_, 0, v___x_6026_);
lean_ctor_set(v___x_6027_, 1, v___x_5904_);
v___x_6028_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__32, &l_Lean_Meta_instReprConfig_repr___redArg___closed__32_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__32);
v___x_6029_ = l_Bool_repr___redArg(v_arith_5884_);
v___x_6030_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6030_, 0, v___x_6028_);
lean_ctor_set(v___x_6030_, 1, v___x_6029_);
v___x_6031_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6031_, 0, v___x_6030_);
lean_ctor_set_uint8(v___x_6031_, sizeof(void*)*1, v___x_5910_);
v___x_6032_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6032_, 0, v___x_6027_);
lean_ctor_set(v___x_6032_, 1, v___x_6031_);
v___x_6033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6033_, 0, v___x_6032_);
lean_ctor_set(v___x_6033_, 1, v___x_5913_);
v___x_6034_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6034_, 0, v___x_6033_);
lean_ctor_set(v___x_6034_, 1, v___x_5915_);
v___x_6035_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__20));
v___x_6036_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6036_, 0, v___x_6034_);
lean_ctor_set(v___x_6036_, 1, v___x_6035_);
v___x_6037_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6037_, 0, v___x_6036_);
lean_ctor_set(v___x_6037_, 1, v___x_5904_);
v___x_6038_ = l_Bool_repr___redArg(v_autoUnfold_5885_);
v___x_6039_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6039_, 0, v___x_5931_);
lean_ctor_set(v___x_6039_, 1, v___x_6038_);
v___x_6040_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6040_, 0, v___x_6039_);
lean_ctor_set_uint8(v___x_6040_, sizeof(void*)*1, v___x_5910_);
v___x_6041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6041_, 0, v___x_6037_);
lean_ctor_set(v___x_6041_, 1, v___x_6040_);
v___x_6042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6042_, 0, v___x_6041_);
lean_ctor_set(v___x_6042_, 1, v___x_5913_);
v___x_6043_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6043_, 0, v___x_6042_);
lean_ctor_set(v___x_6043_, 1, v___x_5915_);
v___x_6044_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17));
v___x_6045_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6045_, 0, v___x_6043_);
lean_ctor_set(v___x_6045_, 1, v___x_6044_);
v___x_6046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6046_, 0, v___x_6045_);
lean_ctor_set(v___x_6046_, 1, v___x_5904_);
v___x_6047_ = l_Bool_repr___redArg(v_dsimp_5886_);
v___x_6048_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6048_, 0, v___x_6028_);
lean_ctor_set(v___x_6048_, 1, v___x_6047_);
v___x_6049_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6049_, 0, v___x_6048_);
lean_ctor_set_uint8(v___x_6049_, sizeof(void*)*1, v___x_5910_);
v___x_6050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6050_, 0, v___x_6046_);
lean_ctor_set(v___x_6050_, 1, v___x_6049_);
v___x_6051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6051_, 0, v___x_6050_);
lean_ctor_set(v___x_6051_, 1, v___x_5913_);
v___x_6052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6052_, 0, v___x_6051_);
lean_ctor_set(v___x_6052_, 1, v___x_5915_);
v___x_6053_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__23));
v___x_6054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6054_, 0, v___x_6052_);
lean_ctor_set(v___x_6054_, 1, v___x_6053_);
v___x_6055_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6055_, 0, v___x_6054_);
lean_ctor_set(v___x_6055_, 1, v___x_5904_);
v___x_6056_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__24, &l_Lean_Meta_instReprConfig_repr___redArg___closed__24_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__24);
v___x_6057_ = l_Bool_repr___redArg(v_failIfUnchanged_5887_);
v___x_6058_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6058_, 0, v___x_6056_);
lean_ctor_set(v___x_6058_, 1, v___x_6057_);
v___x_6059_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6059_, 0, v___x_6058_);
lean_ctor_set_uint8(v___x_6059_, sizeof(void*)*1, v___x_5910_);
v___x_6060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6060_, 0, v___x_6055_);
lean_ctor_set(v___x_6060_, 1, v___x_6059_);
v___x_6061_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6061_, 0, v___x_6060_);
lean_ctor_set(v___x_6061_, 1, v___x_5913_);
v___x_6062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6062_, 0, v___x_6061_);
lean_ctor_set(v___x_6062_, 1, v___x_5915_);
v___x_6063_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19));
v___x_6064_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6064_, 0, v___x_6062_);
lean_ctor_set(v___x_6064_, 1, v___x_6063_);
v___x_6065_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6065_, 0, v___x_6064_);
lean_ctor_set(v___x_6065_, 1, v___x_5904_);
v___x_6066_ = l_Bool_repr___redArg(v_ground_5888_);
v___x_6067_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6067_, 0, v___x_6018_);
lean_ctor_set(v___x_6067_, 1, v___x_6066_);
v___x_6068_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6068_, 0, v___x_6067_);
lean_ctor_set_uint8(v___x_6068_, sizeof(void*)*1, v___x_5910_);
v___x_6069_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6069_, 0, v___x_6065_);
lean_ctor_set(v___x_6069_, 1, v___x_6068_);
v___x_6070_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6070_, 0, v___x_6069_);
lean_ctor_set(v___x_6070_, 1, v___x_5913_);
v___x_6071_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6071_, 0, v___x_6070_);
lean_ctor_set(v___x_6071_, 1, v___x_5915_);
v___x_6072_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__26));
v___x_6073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6073_, 0, v___x_6071_);
lean_ctor_set(v___x_6073_, 1, v___x_6072_);
v___x_6074_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6074_, 0, v___x_6073_);
lean_ctor_set(v___x_6074_, 1, v___x_5904_);
v___x_6075_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__27, &l_Lean_Meta_instReprConfig_repr___redArg___closed__27_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__27);
v___x_6076_ = l_Bool_repr___redArg(v_unfoldPartialApp_5889_);
v___x_6077_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6077_, 0, v___x_6075_);
lean_ctor_set(v___x_6077_, 1, v___x_6076_);
v___x_6078_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6078_, 0, v___x_6077_);
lean_ctor_set_uint8(v___x_6078_, sizeof(void*)*1, v___x_5910_);
v___x_6079_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6079_, 0, v___x_6074_);
lean_ctor_set(v___x_6079_, 1, v___x_6078_);
v___x_6080_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6080_, 0, v___x_6079_);
lean_ctor_set(v___x_6080_, 1, v___x_5913_);
v___x_6081_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6081_, 0, v___x_6080_);
lean_ctor_set(v___x_6081_, 1, v___x_5915_);
v___x_6082_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__29));
v___x_6083_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6083_, 0, v___x_6081_);
lean_ctor_set(v___x_6083_, 1, v___x_6082_);
v___x_6084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6084_, 0, v___x_6083_);
lean_ctor_set(v___x_6084_, 1, v___x_5904_);
v___x_6085_ = l_Bool_repr___redArg(v_zetaDelta_5890_);
v___x_6086_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6086_, 0, v___x_5990_);
lean_ctor_set(v___x_6086_, 1, v___x_6085_);
v___x_6087_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6087_, 0, v___x_6086_);
lean_ctor_set_uint8(v___x_6087_, sizeof(void*)*1, v___x_5910_);
v___x_6088_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6088_, 0, v___x_6084_);
lean_ctor_set(v___x_6088_, 1, v___x_6087_);
v___x_6089_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6089_, 0, v___x_6088_);
lean_ctor_set(v___x_6089_, 1, v___x_5913_);
v___x_6090_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6090_, 0, v___x_6089_);
lean_ctor_set(v___x_6090_, 1, v___x_5915_);
v___x_6091_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__31));
v___x_6092_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6092_, 0, v___x_6090_);
lean_ctor_set(v___x_6092_, 1, v___x_6091_);
v___x_6093_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6093_, 0, v___x_6092_);
lean_ctor_set(v___x_6093_, 1, v___x_5904_);
v___x_6094_ = l_Bool_repr___redArg(v_index_5891_);
v___x_6095_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6095_, 0, v___x_6028_);
lean_ctor_set(v___x_6095_, 1, v___x_6094_);
v___x_6096_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6096_, 0, v___x_6095_);
lean_ctor_set_uint8(v___x_6096_, sizeof(void*)*1, v___x_5910_);
v___x_6097_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6097_, 0, v___x_6093_);
lean_ctor_set(v___x_6097_, 1, v___x_6096_);
v___x_6098_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6098_, 0, v___x_6097_);
lean_ctor_set(v___x_6098_, 1, v___x_5913_);
v___x_6099_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6099_, 0, v___x_6098_);
lean_ctor_set(v___x_6099_, 1, v___x_5915_);
v___x_6100_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21));
v___x_6101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6101_, 0, v___x_6099_);
lean_ctor_set(v___x_6101_, 1, v___x_6100_);
v___x_6102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6102_, 0, v___x_6101_);
lean_ctor_set(v___x_6102_, 1, v___x_5904_);
v___x_6103_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22);
v___x_6104_ = l_Bool_repr___redArg(v_implicitDefEqProofs_5892_);
v___x_6105_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6105_, 0, v___x_6103_);
lean_ctor_set(v___x_6105_, 1, v___x_6104_);
v___x_6106_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6106_, 0, v___x_6105_);
lean_ctor_set_uint8(v___x_6106_, sizeof(void*)*1, v___x_5910_);
v___x_6107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6107_, 0, v___x_6102_);
lean_ctor_set(v___x_6107_, 1, v___x_6106_);
v___x_6108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6108_, 0, v___x_6107_);
lean_ctor_set(v___x_6108_, 1, v___x_5913_);
v___x_6109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6109_, 0, v___x_6108_);
lean_ctor_set(v___x_6109_, 1, v___x_5915_);
v___x_6110_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__34));
v___x_6111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6111_, 0, v___x_6109_);
lean_ctor_set(v___x_6111_, 1, v___x_6110_);
v___x_6112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6112_, 0, v___x_6111_);
lean_ctor_set(v___x_6112_, 1, v___x_5904_);
v___x_6113_ = l_Bool_repr___redArg(v_zetaUnused_5893_);
v___x_6114_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6114_, 0, v___x_5931_);
lean_ctor_set(v___x_6114_, 1, v___x_6113_);
v___x_6115_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6115_, 0, v___x_6114_);
lean_ctor_set_uint8(v___x_6115_, sizeof(void*)*1, v___x_5910_);
v___x_6116_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6116_, 0, v___x_6112_);
lean_ctor_set(v___x_6116_, 1, v___x_6115_);
v___x_6117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6117_, 0, v___x_6116_);
lean_ctor_set(v___x_6117_, 1, v___x_5913_);
v___x_6118_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6118_, 0, v___x_6117_);
lean_ctor_set(v___x_6118_, 1, v___x_5915_);
v___x_6119_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24));
v___x_6120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6120_, 0, v___x_6118_);
lean_ctor_set(v___x_6120_, 1, v___x_6119_);
v___x_6121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6121_, 0, v___x_6120_);
lean_ctor_set(v___x_6121_, 1, v___x_5904_);
v___x_6122_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25);
v___x_6123_ = l_Bool_repr___redArg(v_catchRuntime_5894_);
v___x_6124_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6124_, 0, v___x_6122_);
lean_ctor_set(v___x_6124_, 1, v___x_6123_);
v___x_6125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6125_, 0, v___x_6124_);
lean_ctor_set_uint8(v___x_6125_, sizeof(void*)*1, v___x_5910_);
v___x_6126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6126_, 0, v___x_6121_);
lean_ctor_set(v___x_6126_, 1, v___x_6125_);
v___x_6127_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6127_, 0, v___x_6126_);
lean_ctor_set(v___x_6127_, 1, v___x_5913_);
v___x_6128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6128_, 0, v___x_6127_);
lean_ctor_set(v___x_6128_, 1, v___x_5915_);
v___x_6129_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__36));
v___x_6130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6130_, 0, v___x_6128_);
lean_ctor_set(v___x_6130_, 1, v___x_6129_);
v___x_6131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6131_, 0, v___x_6130_);
lean_ctor_set(v___x_6131_, 1, v___x_5904_);
v___x_6132_ = l_Bool_repr___redArg(v_zetaHave_5895_);
v___x_6133_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6133_, 0, v___x_5906_);
lean_ctor_set(v___x_6133_, 1, v___x_6132_);
v___x_6134_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6134_, 0, v___x_6133_);
lean_ctor_set_uint8(v___x_6134_, sizeof(void*)*1, v___x_5910_);
v___x_6135_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6135_, 0, v___x_6131_);
lean_ctor_set(v___x_6135_, 1, v___x_6134_);
v___x_6136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6136_, 0, v___x_6135_);
lean_ctor_set(v___x_6136_, 1, v___x_5913_);
v___x_6137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6137_, 0, v___x_6136_);
lean_ctor_set(v___x_6137_, 1, v___x_5915_);
v___x_6138_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27));
v___x_6139_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6139_, 0, v___x_6137_);
lean_ctor_set(v___x_6139_, 1, v___x_6138_);
v___x_6140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6140_, 0, v___x_6139_);
lean_ctor_set(v___x_6140_, 1, v___x_5904_);
v___x_6141_ = l_Bool_repr___redArg(v_letToHave_5896_);
v___x_6142_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6142_, 0, v___x_5990_);
lean_ctor_set(v___x_6142_, 1, v___x_6141_);
v___x_6143_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6143_, 0, v___x_6142_);
lean_ctor_set_uint8(v___x_6143_, sizeof(void*)*1, v___x_5910_);
v___x_6144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6144_, 0, v___x_6140_);
lean_ctor_set(v___x_6144_, 1, v___x_6143_);
v___x_6145_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6145_, 0, v___x_6144_);
lean_ctor_set(v___x_6145_, 1, v___x_5913_);
v___x_6146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6146_, 0, v___x_6145_);
lean_ctor_set(v___x_6146_, 1, v___x_5915_);
v___x_6147_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29));
v___x_6148_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6148_, 0, v___x_6146_);
lean_ctor_set(v___x_6148_, 1, v___x_6147_);
v___x_6149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6149_, 0, v___x_6148_);
lean_ctor_set(v___x_6149_, 1, v___x_5904_);
v___x_6150_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30);
v___x_6151_ = l_Bool_repr___redArg(v_congrConsts_5897_);
v___x_6152_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6152_, 0, v___x_6150_);
lean_ctor_set(v___x_6152_, 1, v___x_6151_);
v___x_6153_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6153_, 0, v___x_6152_);
lean_ctor_set_uint8(v___x_6153_, sizeof(void*)*1, v___x_5910_);
v___x_6154_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6154_, 0, v___x_6149_);
lean_ctor_set(v___x_6154_, 1, v___x_6153_);
v___x_6155_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6155_, 0, v___x_6154_);
lean_ctor_set(v___x_6155_, 1, v___x_5913_);
v___x_6156_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6156_, 0, v___x_6155_);
lean_ctor_set(v___x_6156_, 1, v___x_5915_);
v___x_6157_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32));
v___x_6158_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6158_, 0, v___x_6156_);
lean_ctor_set(v___x_6158_, 1, v___x_6157_);
v___x_6159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6159_, 0, v___x_6158_);
lean_ctor_set(v___x_6159_, 1, v___x_5904_);
v___x_6160_ = l_Bool_repr___redArg(v_bitVecOfNat_5898_);
v___x_6161_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6161_, 0, v___x_6150_);
lean_ctor_set(v___x_6161_, 1, v___x_6160_);
v___x_6162_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6162_, 0, v___x_6161_);
lean_ctor_set_uint8(v___x_6162_, sizeof(void*)*1, v___x_5910_);
v___x_6163_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6163_, 0, v___x_6159_);
lean_ctor_set(v___x_6163_, 1, v___x_6162_);
v___x_6164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6164_, 0, v___x_6163_);
lean_ctor_set(v___x_6164_, 1, v___x_5913_);
v___x_6165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6165_, 0, v___x_6164_);
lean_ctor_set(v___x_6165_, 1, v___x_5915_);
v___x_6166_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34));
v___x_6167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6167_, 0, v___x_6165_);
lean_ctor_set(v___x_6167_, 1, v___x_6166_);
v___x_6168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6168_, 0, v___x_6167_);
lean_ctor_set(v___x_6168_, 1, v___x_5904_);
v___x_6169_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35);
v___x_6170_ = l_Bool_repr___redArg(v_warnExponents_5899_);
v___x_6171_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6171_, 0, v___x_6169_);
lean_ctor_set(v___x_6171_, 1, v___x_6170_);
v___x_6172_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6172_, 0, v___x_6171_);
lean_ctor_set_uint8(v___x_6172_, sizeof(void*)*1, v___x_5910_);
v___x_6173_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6173_, 0, v___x_6168_);
lean_ctor_set(v___x_6173_, 1, v___x_6172_);
v___x_6174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6174_, 0, v___x_6173_);
lean_ctor_set(v___x_6174_, 1, v___x_5913_);
v___x_6175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6175_, 0, v___x_6174_);
lean_ctor_set(v___x_6175_, 1, v___x_5915_);
v___x_6176_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37));
v___x_6177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6177_, 0, v___x_6175_);
lean_ctor_set(v___x_6177_, 1, v___x_6176_);
v___x_6178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6178_, 0, v___x_6177_);
lean_ctor_set(v___x_6178_, 1, v___x_5904_);
v___x_6179_ = l_Bool_repr___redArg(v_suggestions_5900_);
v___x_6180_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6180_, 0, v___x_6150_);
lean_ctor_set(v___x_6180_, 1, v___x_6179_);
v___x_6181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6181_, 0, v___x_6180_);
lean_ctor_set_uint8(v___x_6181_, sizeof(void*)*1, v___x_5910_);
v___x_6182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6182_, 0, v___x_6178_);
lean_ctor_set(v___x_6182_, 1, v___x_6181_);
v___x_6183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6183_, 0, v___x_6182_);
lean_ctor_set(v___x_6183_, 1, v___x_5913_);
v___x_6184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6184_, 0, v___x_6183_);
lean_ctor_set(v___x_6184_, 1, v___x_5915_);
v___x_6185_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39));
v___x_6186_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6186_, 0, v___x_6184_);
lean_ctor_set(v___x_6186_, 1, v___x_6185_);
v___x_6187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6187_, 0, v___x_6186_);
lean_ctor_set(v___x_6187_, 1, v___x_5904_);
v___x_6188_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40);
v___x_6189_ = l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(v_maxSuggestions_5901_, v___x_5932_);
v___x_6190_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6190_, 0, v___x_6188_);
lean_ctor_set(v___x_6190_, 1, v___x_6189_);
v___x_6191_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6191_, 0, v___x_6190_);
lean_ctor_set_uint8(v___x_6191_, sizeof(void*)*1, v___x_5910_);
v___x_6192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6192_, 0, v___x_6187_);
lean_ctor_set(v___x_6192_, 1, v___x_6191_);
v___x_6193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6193_, 0, v___x_6192_);
lean_ctor_set(v___x_6193_, 1, v___x_5913_);
v___x_6194_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6194_, 0, v___x_6193_);
lean_ctor_set(v___x_6194_, 1, v___x_5915_);
v___x_6195_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__39));
v___x_6196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6196_, 0, v___x_6194_);
lean_ctor_set(v___x_6196_, 1, v___x_6195_);
v___x_6197_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6197_, 0, v___x_6196_);
lean_ctor_set(v___x_6197_, 1, v___x_5904_);
v___x_6198_ = l_Bool_repr___redArg(v_locals_5902_);
v___x_6199_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6199_, 0, v___x_6018_);
lean_ctor_set(v___x_6199_, 1, v___x_6198_);
v___x_6200_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6200_, 0, v___x_6199_);
lean_ctor_set_uint8(v___x_6200_, sizeof(void*)*1, v___x_5910_);
v___x_6201_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6201_, 0, v___x_6197_);
lean_ctor_set(v___x_6201_, 1, v___x_6200_);
v___x_6202_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6202_, 0, v___x_6201_);
lean_ctor_set(v___x_6202_, 1, v___x_5913_);
v___x_6203_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6203_, 0, v___x_6202_);
lean_ctor_set(v___x_6203_, 1, v___x_5915_);
v___x_6204_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__41));
v___x_6205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6205_, 0, v___x_6203_);
lean_ctor_set(v___x_6205_, 1, v___x_6204_);
v___x_6206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6206_, 0, v___x_6205_);
lean_ctor_set(v___x_6206_, 1, v___x_5904_);
v___x_6207_ = l_Bool_repr___redArg(v_instances_5903_);
v___x_6208_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6208_, 0, v___x_5990_);
lean_ctor_set(v___x_6208_, 1, v___x_6207_);
v___x_6209_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6209_, 0, v___x_6208_);
lean_ctor_set_uint8(v___x_6209_, sizeof(void*)*1, v___x_5910_);
v___x_6210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6210_, 0, v___x_6206_);
lean_ctor_set(v___x_6210_, 1, v___x_6209_);
v___x_6211_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10);
v___x_6212_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11));
v___x_6213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6213_, 0, v___x_6212_);
lean_ctor_set(v___x_6213_, 1, v___x_6210_);
v___x_6214_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12));
v___x_6215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6215_, 0, v___x_6213_);
lean_ctor_set(v___x_6215_, 1, v___x_6214_);
v___x_6216_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6216_, 0, v___x_6211_);
lean_ctor_set(v___x_6216_, 1, v___x_6215_);
v___x_6217_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6217_, 0, v___x_6216_);
lean_ctor_set_uint8(v___x_6217_, sizeof(void*)*1, v___x_5910_);
return v___x_6217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr(lean_object* v_x_6218_, lean_object* v_prec_6219_){
_start:
{
lean_object* v___x_6220_; 
v___x_6220_ = l_Lean_Meta_instReprConfig__1_repr___redArg(v_x_6218_);
return v___x_6220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___boxed(lean_object* v_x_6221_, lean_object* v_prec_6222_){
_start:
{
lean_object* v_res_6223_; 
v_res_6223_ = l_Lean_Meta_instReprConfig__1_repr(v_x_6221_, v_prec_6222_);
lean_dec(v_prec_6222_);
return v_res_6223_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object* v_a_6226_, lean_object* v_x_6227_){
_start:
{
if (lean_obj_tag(v_x_6227_) == 0)
{
uint8_t v___x_6228_; 
v___x_6228_ = 0;
return v___x_6228_;
}
else
{
lean_object* v_head_6229_; lean_object* v_tail_6230_; uint8_t v___x_6231_; 
v_head_6229_ = lean_ctor_get(v_x_6227_, 0);
v_tail_6230_ = lean_ctor_get(v_x_6227_, 1);
v___x_6231_ = lean_nat_dec_eq(v_a_6226_, v_head_6229_);
if (v___x_6231_ == 0)
{
v_x_6227_ = v_tail_6230_;
goto _start;
}
else
{
return v___x_6231_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0___boxed(lean_object* v_a_6233_, lean_object* v_x_6234_){
_start:
{
uint8_t v_res_6235_; lean_object* v_r_6236_; 
v_res_6235_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_a_6233_, v_x_6234_);
lean_dec(v_x_6234_);
lean_dec(v_a_6233_);
v_r_6236_ = lean_box(v_res_6235_);
return v_r_6236_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_contains(lean_object* v_x_6237_, lean_object* v_x_6238_){
_start:
{
switch(lean_obj_tag(v_x_6237_))
{
case 0:
{
uint8_t v___x_6239_; 
v___x_6239_ = 1;
return v___x_6239_;
}
case 1:
{
lean_object* v_idxs_6240_; uint8_t v___x_6241_; 
v_idxs_6240_ = lean_ctor_get(v_x_6237_, 0);
v___x_6241_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_x_6238_, v_idxs_6240_);
return v___x_6241_;
}
default: 
{
lean_object* v_idxs_6242_; uint8_t v___x_6243_; 
v_idxs_6242_ = lean_ctor_get(v_x_6237_, 0);
v___x_6243_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_x_6238_, v_idxs_6242_);
if (v___x_6243_ == 0)
{
uint8_t v___x_6244_; 
v___x_6244_ = 1;
return v___x_6244_;
}
else
{
uint8_t v___x_6245_; 
v___x_6245_ = 0;
return v___x_6245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_contains___boxed(lean_object* v_x_6246_, lean_object* v_x_6247_){
_start:
{
uint8_t v_res_6248_; lean_object* v_r_6249_; 
v_res_6248_ = l_Lean_Meta_Occurrences_contains(v_x_6246_, v_x_6247_);
lean_dec(v_x_6247_);
lean_dec(v_x_6246_);
v_r_6249_ = lean_box(v_res_6248_);
return v_r_6249_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_isAll(lean_object* v_x_6250_){
_start:
{
if (lean_obj_tag(v_x_6250_) == 0)
{
uint8_t v___x_6251_; 
v___x_6251_ = 1;
return v___x_6251_;
}
else
{
uint8_t v___x_6252_; 
v___x_6252_ = 0;
return v___x_6252_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_isAll___boxed(lean_object* v_x_6253_){
_start:
{
uint8_t v_res_6254_; lean_object* v_r_6255_; 
v_res_6254_ = l_Lean_Meta_Occurrences_isAll(v_x_6253_);
lean_dec(v_x_6253_);
v_r_6255_ = lean_box(v_res_6254_);
return v_r_6255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___impl(uint8_t v_x_6256_){
_start:
{
lean_object* v___x_6257_; lean_object* v___x_6258_; 
v___x_6257_ = lean_box(v_x_6256_);
v___x_6258_ = lean_obj_tag_nat(v___x_6257_);
lean_dec(v___x_6257_);
return v___x_6258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___impl___boxed(lean_object* v_x_6259_){
_start:
{
uint8_t v_x_4__boxed_6260_; lean_object* v_res_6261_; 
v_x_4__boxed_6260_ = lean_unbox(v_x_6259_);
v_res_6261_ = l_Lean_Meta_ApplyNewGoals_ctorIdx___impl(v_x_4__boxed_6260_);
return v_res_6261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg(lean_object* v_k_6262_){
_start:
{
lean_inc(v_k_6262_);
return v_k_6262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg___boxed(lean_object* v_k_6263_){
_start:
{
lean_object* v_res_6264_; 
v_res_6264_ = l_Lean_Meta_ApplyNewGoals_ctorElim___redArg(v_k_6263_);
lean_dec(v_k_6263_);
return v_res_6264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim(lean_object* v_motive_6265_, lean_object* v_ctorIdx_6266_, uint8_t v_t_6267_, lean_object* v_h_6268_, lean_object* v_k_6269_){
_start:
{
lean_inc(v_k_6269_);
return v_k_6269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___boxed(lean_object* v_motive_6270_, lean_object* v_ctorIdx_6271_, lean_object* v_t_6272_, lean_object* v_h_6273_, lean_object* v_k_6274_){
_start:
{
uint8_t v_t_boxed_6275_; lean_object* v_res_6276_; 
v_t_boxed_6275_ = lean_unbox(v_t_6272_);
v_res_6276_ = l_Lean_Meta_ApplyNewGoals_ctorElim(v_motive_6270_, v_ctorIdx_6271_, v_t_boxed_6275_, v_h_6273_, v_k_6274_);
lean_dec(v_k_6274_);
lean_dec(v_ctorIdx_6271_);
return v_res_6276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg(lean_object* v_nonDependentFirst_6277_){
_start:
{
lean_inc(v_nonDependentFirst_6277_);
return v_nonDependentFirst_6277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg___boxed(lean_object* v_nonDependentFirst_6278_){
_start:
{
lean_object* v_res_6279_; 
v_res_6279_ = l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg(v_nonDependentFirst_6278_);
lean_dec(v_nonDependentFirst_6278_);
return v_res_6279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim(lean_object* v_motive_6280_, uint8_t v_t_6281_, lean_object* v_h_6282_, lean_object* v_nonDependentFirst_6283_){
_start:
{
lean_inc(v_nonDependentFirst_6283_);
return v_nonDependentFirst_6283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___boxed(lean_object* v_motive_6284_, lean_object* v_t_6285_, lean_object* v_h_6286_, lean_object* v_nonDependentFirst_6287_){
_start:
{
uint8_t v_t_boxed_6288_; lean_object* v_res_6289_; 
v_t_boxed_6288_ = lean_unbox(v_t_6285_);
v_res_6289_ = l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim(v_motive_6284_, v_t_boxed_6288_, v_h_6286_, v_nonDependentFirst_6287_);
lean_dec(v_nonDependentFirst_6287_);
return v_res_6289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg(lean_object* v_nonDependentOnly_6290_){
_start:
{
lean_inc(v_nonDependentOnly_6290_);
return v_nonDependentOnly_6290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg___boxed(lean_object* v_nonDependentOnly_6291_){
_start:
{
lean_object* v_res_6292_; 
v_res_6292_ = l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg(v_nonDependentOnly_6291_);
lean_dec(v_nonDependentOnly_6291_);
return v_res_6292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim(lean_object* v_motive_6293_, uint8_t v_t_6294_, lean_object* v_h_6295_, lean_object* v_nonDependentOnly_6296_){
_start:
{
lean_inc(v_nonDependentOnly_6296_);
return v_nonDependentOnly_6296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___boxed(lean_object* v_motive_6297_, lean_object* v_t_6298_, lean_object* v_h_6299_, lean_object* v_nonDependentOnly_6300_){
_start:
{
uint8_t v_t_boxed_6301_; lean_object* v_res_6302_; 
v_t_boxed_6301_ = lean_unbox(v_t_6298_);
v_res_6302_ = l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim(v_motive_6297_, v_t_boxed_6301_, v_h_6299_, v_nonDependentOnly_6300_);
lean_dec(v_nonDependentOnly_6300_);
return v_res_6302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg(lean_object* v_all_6303_){
_start:
{
lean_inc(v_all_6303_);
return v_all_6303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg___boxed(lean_object* v_all_6304_){
_start:
{
lean_object* v_res_6305_; 
v_res_6305_ = l_Lean_Meta_ApplyNewGoals_all_elim___redArg(v_all_6304_);
lean_dec(v_all_6304_);
return v_res_6305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim(lean_object* v_motive_6306_, uint8_t v_t_6307_, lean_object* v_h_6308_, lean_object* v_all_6309_){
_start:
{
lean_inc(v_all_6309_);
return v_all_6309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___boxed(lean_object* v_motive_6310_, lean_object* v_t_6311_, lean_object* v_h_6312_, lean_object* v_all_6313_){
_start:
{
uint8_t v_t_boxed_6314_; lean_object* v_res_6315_; 
v_t_boxed_6314_ = lean_unbox(v_t_6311_);
v_res_6315_ = l_Lean_Meta_ApplyNewGoals_all_elim(v_motive_6310_, v_t_boxed_6314_, v_h_6312_, v_all_6313_);
lean_dec(v_all_6313_);
return v_res_6315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_getConfigItems(lean_object* v_c_6329_){
_start:
{
lean_object* v___x_6330_; uint8_t v___x_6331_; 
v___x_6330_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
lean_inc(v_c_6329_);
v___x_6331_ = l_Lean_Syntax_isOfKind(v_c_6329_, v___x_6330_);
if (v___x_6331_ == 0)
{
lean_object* v___x_6332_; uint8_t v___x_6333_; 
v___x_6332_ = ((lean_object*)(l_Lean_Parser_Tactic_getConfigItems___closed__2));
lean_inc(v_c_6329_);
v___x_6333_ = l_Lean_Syntax_isOfKind(v_c_6329_, v___x_6332_);
if (v___x_6333_ == 0)
{
lean_object* v___x_6334_; uint8_t v___x_6335_; 
v___x_6334_ = ((lean_object*)(l_Lean_Parser_Tactic_getConfigItems___closed__4));
lean_inc(v_c_6329_);
v___x_6335_ = l_Lean_Syntax_isOfKind(v_c_6329_, v___x_6334_);
if (v___x_6335_ == 0)
{
lean_object* v___x_6336_; 
lean_dec(v_c_6329_);
v___x_6336_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
return v___x_6336_;
}
else
{
lean_object* v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; 
v___x_6337_ = lean_unsigned_to_nat(1u);
v___x_6338_ = lean_mk_empty_array_with_capacity(v___x_6337_);
v___x_6339_ = lean_array_push(v___x_6338_, v_c_6329_);
return v___x_6339_;
}
}
else
{
lean_object* v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; 
v___x_6340_ = lean_unsigned_to_nat(0u);
v___x_6341_ = l_Lean_Syntax_getArg(v_c_6329_, v___x_6340_);
lean_dec(v_c_6329_);
v___x_6342_ = l_Lean_Syntax_getArgs(v___x_6341_);
lean_dec(v___x_6341_);
return v___x_6342_;
}
}
else
{
lean_object* v___x_6343_; lean_object* v___x_6344_; lean_object* v___x_6345_; lean_object* v___x_6346_; uint8_t v___x_6347_; 
v___x_6343_ = l_Lean_Syntax_getArgs(v_c_6329_);
lean_dec(v_c_6329_);
v___x_6344_ = lean_unsigned_to_nat(0u);
v___x_6345_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_6346_ = lean_array_get_size(v___x_6343_);
v___x_6347_ = lean_nat_dec_lt(v___x_6344_, v___x_6346_);
if (v___x_6347_ == 0)
{
lean_dec_ref(v___x_6343_);
return v___x_6345_;
}
else
{
size_t v___x_6348_; size_t v___x_6349_; lean_object* v___x_6350_; 
v___x_6348_ = ((size_t)0ULL);
v___x_6349_ = lean_usize_of_nat(v___x_6346_);
v___x_6350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(v___x_6343_, v___x_6348_, v___x_6349_, v___x_6345_);
lean_dec_ref(v___x_6343_);
return v___x_6350_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(lean_object* v_as_6351_, size_t v_i_6352_, size_t v_stop_6353_, lean_object* v_b_6354_){
_start:
{
uint8_t v___x_6355_; 
v___x_6355_ = lean_usize_dec_eq(v_i_6352_, v_stop_6353_);
if (v___x_6355_ == 0)
{
lean_object* v___x_6356_; lean_object* v___x_6357_; lean_object* v___x_6358_; size_t v___x_6359_; size_t v___x_6360_; 
v___x_6356_ = lean_array_uget_borrowed(v_as_6351_, v_i_6352_);
lean_inc(v___x_6356_);
v___x_6357_ = l_Lean_Parser_Tactic_getConfigItems(v___x_6356_);
v___x_6358_ = l_Array_append___redArg(v_b_6354_, v___x_6357_);
lean_dec_ref(v___x_6357_);
v___x_6359_ = ((size_t)1ULL);
v___x_6360_ = lean_usize_add(v_i_6352_, v___x_6359_);
v_i_6352_ = v___x_6360_;
v_b_6354_ = v___x_6358_;
goto _start;
}
else
{
return v_b_6354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0___boxed(lean_object* v_as_6362_, lean_object* v_i_6363_, lean_object* v_stop_6364_, lean_object* v_b_6365_){
_start:
{
size_t v_i_boxed_6366_; size_t v_stop_boxed_6367_; lean_object* v_res_6368_; 
v_i_boxed_6366_ = lean_unbox_usize(v_i_6363_);
lean_dec(v_i_6363_);
v_stop_boxed_6367_ = lean_unbox_usize(v_stop_6364_);
lean_dec(v_stop_6364_);
v_res_6368_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(v_as_6362_, v_i_boxed_6366_, v_stop_boxed_6367_, v_b_6365_);
lean_dec_ref(v_as_6362_);
return v_res_6368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mkOptConfig(lean_object* v_items_6369_){
_start:
{
lean_object* v___x_6370_; lean_object* v___x_6371_; lean_object* v___x_6372_; lean_object* v___x_6373_; lean_object* v___x_6374_; 
v___x_6370_ = ((lean_object*)(l_Lean_Parser_Tactic_getConfigItems___closed__2));
v___x_6371_ = lean_box(2);
v___x_6372_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_6373_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6373_, 0, v___x_6371_);
lean_ctor_set(v___x_6373_, 1, v___x_6372_);
lean_ctor_set(v___x_6373_, 2, v_items_6369_);
v___x_6374_ = l_Lean_Syntax_node1(v___x_6371_, v___x_6370_, v___x_6373_);
return v___x_6374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_appendConfig(lean_object* v_cfg_6375_, lean_object* v_cfg_x27_6376_){
_start:
{
lean_object* v___x_6377_; lean_object* v___x_6378_; lean_object* v___x_6379_; lean_object* v___x_6380_; 
v___x_6377_ = l_Lean_Parser_Tactic_getConfigItems(v_cfg_6375_);
v___x_6378_ = l_Lean_Parser_Tactic_getConfigItems(v_cfg_x27_6376_);
v___x_6379_ = l_Array_append___redArg(v___x_6377_, v___x_6378_);
lean_dec_ref(v___x_6378_);
v___x_6380_ = l_Lean_Parser_Tactic_mkOptConfig(v___x_6379_);
return v___x_6380_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_WFTactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Meta_Defs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_version_major = _init_l_Lean_version_major();
lean_mark_persistent(l_Lean_version_major);
l_Lean_version_minor = _init_l_Lean_version_minor();
lean_mark_persistent(l_Lean_version_minor);
l_Lean_version_patch = _init_l_Lean_version_patch();
lean_mark_persistent(l_Lean_version_patch);
l_Lean_githash = _init_l_Lean_githash();
lean_mark_persistent(l_Lean_githash);
l_Lean_version_isRelease = _init_l_Lean_version_isRelease();
l_Lean_version_specialDesc = _init_l_Lean_version_specialDesc();
lean_mark_persistent(l_Lean_version_specialDesc);
l_Lean_versionStringCore = _init_l_Lean_versionStringCore();
lean_mark_persistent(l_Lean_versionStringCore);
l_Lean_versionString = _init_l_Lean_versionString();
lean_mark_persistent(l_Lean_versionString);
l_Lean_toolchain = _init_l_Lean_toolchain();
lean_mark_persistent(l_Lean_toolchain);
l_Lean_idBeginEscape = _init_l_Lean_idBeginEscape();
l_Lean_idEndEscape = _init_l_Lean_idEndEscape();
l_Lean_Syntax_decodeQuotedChar___boxed__const__1 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__1();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__1);
l_Lean_Syntax_decodeQuotedChar___boxed__const__2 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__2();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__2);
l_Lean_Syntax_decodeQuotedChar___boxed__const__3 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__3();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__3);
l_Lean_Syntax_decodeQuotedChar___boxed__const__4 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__4();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__4);
l_Lean_Syntax_decodeQuotedChar___boxed__const__5 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__5();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__5);
l_Lean_Syntax_decodeQuotedChar___boxed__const__6 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__6();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__6);
l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1 = _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1);
l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2 = _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2();
lean_mark_persistent(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2);
l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1 = _init_l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1();
lean_mark_persistent(l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Meta_Defs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
lean_object* initialize_Init_WFTactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Meta_Defs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Meta_Defs(builtin);
}
#ifdef __cplusplus
}
#endif
