// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Attr
// Imports: public import Lean.Meta.Tactic.Grind.Injective public import Lean.Meta.Tactic.Grind.Cases public import Lean.Meta.Tactic.Grind.ExtAttr public import Lean.Meta.Tactic.Simp.Attr public import Lean.Meta.Tactic.Grind.Homo public import Lean.Meta.Sym.DSimp.Rewrite import Lean.Meta.Sym.Simp.Attr import Lean.ExtraModUses
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
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Theorems_contains___redArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Grind_mkExtension(lean_object*);
lean_object* l_Lean_Meta_mkSimpExt(lean_object*);
lean_object* l_Lean_Meta_addDeclToUnfold(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremsFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Meta_Sym_Simp_Theorems_insert(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_Decls_addEntry(lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_Sym_DSimp_Decls_mkEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addEMatchAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addEMatchAttrAndSuggest(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateExtAttr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addSymbolPriorityAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addInjectiveAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSimpTheoremFromConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Origin_key(lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Grind_addHomoAttr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addHomoPredAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default;
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_CasesTypes_isSplit(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "normExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 117, 24, 11, 244, 218, 170, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normExt;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "norm"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sym"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 82, 242, 154, 5, 26, 236, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 98, 249, 2, 230, 183, 10, 208)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__9_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__9_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__9_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__10_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__9_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(53, 20, 57, 191, 103, 250, 161, 8)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__10_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__10_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__12_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__10_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(109, 254, 122, 13, 209, 4, 96, 59)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__12_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__12_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__13_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__12_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(88, 171, 221, 227, 25, 133, 195, 21)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__13_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__13_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__14_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__13_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(209, 72, 241, 93, 31, 88, 24, 156)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__14_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__14_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__15_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__14_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(177, 99, 64, 101, 196, 242, 78, 191)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__15_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__15_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__16_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__15_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 102, 233, 244, 63, 110, 171, 66)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__16_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__16_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__17_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__17_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__17_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__18_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__16_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__17_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 38, 22, 238, 56, 195, 101, 225)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__18_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__18_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__19_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__19_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__19_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__20_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__18_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__19_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(207, 32, 197, 231, 9, 105, 134, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__20_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__20_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__21_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__20_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(226, 8, 248, 216, 120, 97, 211, 252)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__21_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__21_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__22_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__21_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(246, 115, 203, 254, 31, 135, 121, 67)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__22_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__22_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__23_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__22_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 182, 250, 113, 105, 31, 65, 165)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__23_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__23_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__24_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__23_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(157, 202, 156, 167, 66, 153, 39, 151)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__24_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__24_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__25_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__24_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 187, 236, 120, 172, 89, 32, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__25_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__25_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__26_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__25_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)(((size_t)(448808965) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(24, 160, 99, 55, 202, 33, 244, 33)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__26_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__26_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__27_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__27_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__27_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__28_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__26_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__27_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 159, 216, 39, 51, 61, 141, 72)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__28_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__28_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__29_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__29_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__29_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__28_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__29_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 73, 198, 215, 12, 41, 81, 204)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__31_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(146, 108, 201, 9, 220, 24, 56, 112)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__31_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__31_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedNormSymTheorems;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_pre_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_pre_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_post_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_post_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_dsimp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_dsimp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedNormSymEntry_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedNormSymEntry_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedNormSymEntry_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedNormSymEntry;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymTheorems_addEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_NormSymEntry_declName_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "normSymExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(235, 33, 18, 12, 138, 185, 216, 45)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_NormSymTheorems_addEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normSymExt;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "skipping `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "`: "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`, not a global declaration"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__4;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormTheorem_spec__2(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormTheorem_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormTheorem(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "skipping unfold `"};
static const lean_object* l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormSymDeclToUnfold(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormSymDeclToUnfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormDeclToUnfold(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormDeclToUnfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindMod"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 252, 83, 80, 136, 168, 19, 119)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "unexpected `grind` theorem kind: `"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__4;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__6;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindEq"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__7_value),LEAN_SCALAR_PTR_LITERAL(179, 34, 219, 24, 240, 38, 65, 204)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindDef"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value),LEAN_SCALAR_PTR_LITERAL(66, 218, 12, 28, 39, 29, 4, 77)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindFwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value),LEAN_SCALAR_PTR_LITERAL(121, 161, 177, 116, 112, 162, 92, 47)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindBwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value),LEAN_SCALAR_PTR_LITERAL(114, 163, 57, 243, 160, 41, 114, 23)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindEqRhs"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value),LEAN_SCALAR_PTR_LITERAL(222, 187, 148, 221, 105, 213, 199, 68)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindEqBoth"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value),LEAN_SCALAR_PTR_LITERAL(79, 230, 133, 190, 186, 228, 109, 128)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindEqBwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value),LEAN_SCALAR_PTR_LITERAL(250, 57, 23, 180, 238, 116, 90, 53)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindLR"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value),LEAN_SCALAR_PTR_LITERAL(152, 111, 188, 78, 132, 212, 97, 164)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindRL"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value),LEAN_SCALAR_PTR_LITERAL(84, 112, 237, 169, 105, 148, 42, 205)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindUsr"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__25 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value),LEAN_SCALAR_PTR_LITERAL(204, 58, 160, 148, 192, 167, 114, 18)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindGen"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value),LEAN_SCALAR_PTR_LITERAL(186, 203, 120, 147, 97, 215, 208, 134)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__28 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindCases"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value),LEAN_SCALAR_PTR_LITERAL(85, 142, 28, 230, 49, 50, 229, 162)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "grindCasesEager"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value),LEAN_SCALAR_PTR_LITERAL(75, 210, 92, 40, 190, 183, 142, 70)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__32 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindIntro"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__33 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value),LEAN_SCALAR_PTR_LITERAL(142, 126, 114, 89, 237, 253, 56, 138)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindExt"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__35 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value),LEAN_SCALAR_PTR_LITERAL(147, 193, 153, 166, 243, 149, 163, 253)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__36 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindInj"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__37 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value),LEAN_SCALAR_PTR_LITERAL(223, 225, 41, 9, 21, 5, 145, 193)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__38 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindFunCC"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__39 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value),LEAN_SCALAR_PTR_LITERAL(217, 20, 186, 134, 249, 79, 78, 43)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grindNorm"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__41 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value),LEAN_SCALAR_PTR_LITERAL(166, 126, 146, 239, 104, 253, 29, 148)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__42 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindUnfold"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__43 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value),LEAN_SCALAR_PTR_LITERAL(214, 181, 37, 92, 122, 232, 164, 219)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__44 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindHom"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__45 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value),LEAN_SCALAR_PTR_LITERAL(14, 226, 234, 13, 148, 139, 225, 180)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__46 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "grindHomFallback"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__47 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__48_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__48_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__48_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value),LEAN_SCALAR_PTR_LITERAL(140, 210, 151, 50, 71, 98, 251, 189)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__48 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__48_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "grindHomPred"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__49 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__50_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value),LEAN_SCALAR_PTR_LITERAL(1, 153, 163, 64, 153, 27, 218, 140)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__50 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSym"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__51 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value),LEAN_SCALAR_PTR_LITERAL(104, 204, 11, 169, 55, 109, 254, 23)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__52 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "priority expected"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__53 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__53_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__54;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpPost"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__55 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__55_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__55_value),LEAN_SCALAR_PTR_LITERAL(38, 218, 35, 149, 208, 200, 230, 161)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__56 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "simpPre"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__57 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__57_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__57_value),LEAN_SCALAR_PTR_LITERAL(197, 59, 48, 6, 36, 81, 149, 152)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__58 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__59 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__59_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__60 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__60_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__61 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__61_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__62 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__62_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__63 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__63_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__64 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__64_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__64_value)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__65 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__65_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "the modifier `usr` is only relevant in parameters for `grind only`"};
static const lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "\?]` is a helper attribute for displaying inferred patterns, if you want to remove the attribute, consider using `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "]` instead"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__16;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 8}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "cannot mark declaration to be unfolded by `grind`"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "invalid `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " intro]`, `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` is not an inductive predicate"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "symbol priorities must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "normalizer must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "declaration to unfold must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "homomorphism rules must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "homomorphism predicates must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__13_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "When applied to an equational theorem, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " =]`, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " =_]`, or `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = " _=_]`will mark the theorem for use in heuristic instantiations by the `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 136, .m_capacity = 136, .m_length = 135, .m_data = "` tactic,\n      using respectively the left-hand side, the right-hand side, or both sides of the theorem.When applied to a function, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = " =]` automatically annotates the equational theorems associated with that function.When applied to a theorem `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 183, .m_capacity = 183, .m_length = 180, .m_data = " ←]` will instantiate the theorem whenever it encounters the conclusion of the theorem\n      (that is, it will use the theorem for backwards reasoning).When applied to a theorem `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 190, .m_capacity = 190, .m_length = 187, .m_data = " →]` will instantiate the theorem whenever it encounters sufficiently many of the propositional hypotheses\n      (that is, it will use the theorem for forwards reasoning).The attribute `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "]` by itself will effectively try `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 68, .m_data = " ←]` (if the conclusion is sufficient for instantiation) and then `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 165, .m_capacity = 165, .m_length = 162, .m_data = " →]`.The `grind` tactic utilizes annotated theorems to add instances of matching patterns into the local context during proof search.For example, if a theorem `@["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 179, .m_capacity = 179, .m_length = 178, .m_data = " =] theorem foo_idempotent : foo (foo x) = foo x` is annotated,`grind` will add an instance of this theorem to the local context whenever it encounters the pattern `foo (foo x)`."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "The `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "]` attribute is used to annotate declarations."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "\?]` attribute is identical to the `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "]` attribute, but displays inferred pattern information."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "!]` attribute is used to annotate declarations, but selecting minimal indexable subterms."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "!\?]` attribute is identical to the `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "!]` attribute, but displays inferred pattern information."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!\?"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_extensionMapRef;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___auto__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value),LEAN_SCALAR_PTR_LITERAL(160, 1, 171, 211, 177, 132, 129, 49)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_grindExt;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(12, 161, 226, 116, 111, 153, 146, 212)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "liaExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(148, 224, 62, 90, 13, 174, 224, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_liaExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_));
v___x_12_ = l_Lean_Meta_mkSimpExt(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2____boxed(lean_object* v_a_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_93_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_));
v___x_94_ = 0;
v___x_95_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__31_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_));
v___x_96_ = l_Lean_registerTraceClass(v___x_93_, v___x_94_, v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2____boxed(lean_object* v_a_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_();
return v_res_98_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0(void){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__1(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__2(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__1, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__1_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__1);
v___x_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__3(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = l_Lean_NameSet_empty;
v___x_105_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__2, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__2_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__2);
v___x_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___x_104_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__4(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__3, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__3_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__3);
v___x_108_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__2, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__2_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__2);
v___x_109_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
lean_ctor_set(v___x_109_, 2, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__4, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__4_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__4);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default;
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorIdx___impl(lean_object* v_x_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lean_obj_tag_nat(v_x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorIdx___impl___boxed(lean_object* v_x_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_Meta_Grind_NormSymEntry_ctorIdx___impl(v_x_114_);
lean_dec_ref(v_x_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorElim___redArg(lean_object* v_t_116_, lean_object* v_k_117_){
_start:
{
lean_object* v_thm_118_; lean_object* v___x_119_; 
v_thm_118_ = lean_ctor_get(v_t_116_, 0);
lean_inc_ref(v_thm_118_);
lean_dec_ref(v_t_116_);
v___x_119_ = lean_apply_1(v_k_117_, v_thm_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorElim(lean_object* v_motive_120_, lean_object* v_ctorIdx_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_k_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lean_Meta_Grind_NormSymEntry_ctorElim___redArg(v_t_122_, v_k_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_ctorElim___boxed(lean_object* v_motive_126_, lean_object* v_ctorIdx_127_, lean_object* v_t_128_, lean_object* v_h_129_, lean_object* v_k_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_Meta_Grind_NormSymEntry_ctorElim(v_motive_126_, v_ctorIdx_127_, v_t_128_, v_h_129_, v_k_130_);
lean_dec(v_ctorIdx_127_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_pre_elim___redArg(lean_object* v_t_132_, lean_object* v_pre_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Meta_Grind_NormSymEntry_ctorElim___redArg(v_t_132_, v_pre_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_pre_elim(lean_object* v_motive_135_, lean_object* v_t_136_, lean_object* v_h_137_, lean_object* v_pre_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lean_Meta_Grind_NormSymEntry_ctorElim___redArg(v_t_136_, v_pre_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_post_elim___redArg(lean_object* v_t_140_, lean_object* v_post_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lean_Meta_Grind_NormSymEntry_ctorElim___redArg(v_t_140_, v_post_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_post_elim(lean_object* v_motive_143_, lean_object* v_t_144_, lean_object* v_h_145_, lean_object* v_post_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Meta_Grind_NormSymEntry_ctorElim___redArg(v_t_144_, v_post_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_dsimp_elim___redArg(lean_object* v_t_148_, lean_object* v_dsimp_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = l_Lean_Meta_Grind_NormSymEntry_ctorElim___redArg(v_t_148_, v_dsimp_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymEntry_dsimp_elim(lean_object* v_motive_151_, lean_object* v_t_152_, lean_object* v_h_153_, lean_object* v_dsimp_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l_Lean_Meta_Grind_NormSymEntry_ctorElim___redArg(v_t_152_, v_dsimp_154_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymEntry_default___closed__0(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default;
v___x_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymEntry_default(void){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymEntry_default___closed__0, &l_Lean_Meta_Grind_instInhabitedNormSymEntry_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymEntry_default___closed__0);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedNormSymEntry(void){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_Lean_Meta_Grind_instInhabitedNormSymEntry_default;
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSymTheorems_addEntry(lean_object* v_s_160_, lean_object* v_x_161_){
_start:
{
switch(lean_obj_tag(v_x_161_))
{
case 0:
{
lean_object* v_thm_162_; lean_object* v_pre_163_; lean_object* v_post_164_; lean_object* v_dsimp_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_173_; 
v_thm_162_ = lean_ctor_get(v_x_161_, 0);
lean_inc_ref(v_thm_162_);
lean_dec_ref_known(v_x_161_, 1);
v_pre_163_ = lean_ctor_get(v_s_160_, 0);
v_post_164_ = lean_ctor_get(v_s_160_, 1);
v_dsimp_165_ = lean_ctor_get(v_s_160_, 2);
v_isSharedCheck_173_ = !lean_is_exclusive(v_s_160_);
if (v_isSharedCheck_173_ == 0)
{
v___x_167_ = v_s_160_;
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_dsimp_165_);
lean_inc(v_post_164_);
lean_inc(v_pre_163_);
lean_dec(v_s_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_169_ = l_Lean_Meta_Sym_Simp_Theorems_insert(v_pre_163_, v_thm_162_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_169_);
v___x_171_ = v___x_167_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_169_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v_post_164_);
lean_ctor_set(v_reuseFailAlloc_172_, 2, v_dsimp_165_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
case 1:
{
lean_object* v_thm_174_; lean_object* v_pre_175_; lean_object* v_post_176_; lean_object* v_dsimp_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
v_thm_174_ = lean_ctor_get(v_x_161_, 0);
lean_inc_ref(v_thm_174_);
lean_dec_ref_known(v_x_161_, 1);
v_pre_175_ = lean_ctor_get(v_s_160_, 0);
v_post_176_ = lean_ctor_get(v_s_160_, 1);
v_dsimp_177_ = lean_ctor_get(v_s_160_, 2);
v_isSharedCheck_185_ = !lean_is_exclusive(v_s_160_);
if (v_isSharedCheck_185_ == 0)
{
v___x_179_ = v_s_160_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_dsimp_177_);
lean_inc(v_post_176_);
lean_inc(v_pre_175_);
lean_dec(v_s_160_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_183_; 
v___x_181_ = l_Lean_Meta_Sym_Simp_Theorems_insert(v_post_176_, v_thm_174_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v___x_181_);
v___x_183_ = v___x_179_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_pre_175_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v___x_181_);
lean_ctor_set(v_reuseFailAlloc_184_, 2, v_dsimp_177_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
default: 
{
lean_object* v_entry_186_; lean_object* v_pre_187_; lean_object* v_post_188_; lean_object* v_dsimp_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_197_; 
v_entry_186_ = lean_ctor_get(v_x_161_, 0);
lean_inc_ref(v_entry_186_);
lean_dec_ref_known(v_x_161_, 1);
v_pre_187_ = lean_ctor_get(v_s_160_, 0);
v_post_188_ = lean_ctor_get(v_s_160_, 1);
v_dsimp_189_ = lean_ctor_get(v_s_160_, 2);
v_isSharedCheck_197_ = !lean_is_exclusive(v_s_160_);
if (v_isSharedCheck_197_ == 0)
{
v___x_191_ = v_s_160_;
v_isShared_192_ = v_isSharedCheck_197_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_dsimp_189_);
lean_inc(v_post_188_);
lean_inc(v_pre_187_);
lean_dec(v_s_160_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_197_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_193_ = l_Lean_Meta_Sym_DSimp_Decls_addEntry(v_dsimp_189_, v_entry_186_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 2, v___x_193_);
v___x_195_ = v___x_191_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_pre_187_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_post_188_);
lean_ctor_set(v_reuseFailAlloc_196_, 2, v___x_193_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_NormSymEntry_declName_x3f(lean_object* v_x_198_){
_start:
{
lean_object* v_thm_200_; 
if (lean_obj_tag(v_x_198_) == 2)
{
lean_object* v_entry_205_; 
v_entry_205_ = lean_ctor_get(v_x_198_, 0);
lean_inc_ref(v_entry_205_);
lean_dec_ref_known(v_x_198_, 1);
if (lean_obj_tag(v_entry_205_) == 0)
{
lean_object* v_thm_206_; 
v_thm_206_ = lean_ctor_get(v_entry_205_, 0);
lean_inc_ref(v_thm_206_);
lean_dec_ref_known(v_entry_205_, 1);
v_thm_200_ = v_thm_206_;
goto v___jp_199_;
}
else
{
lean_object* v_declName_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
v_declName_207_ = lean_ctor_get(v_entry_205_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_entry_205_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v_entry_205_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_declName_207_);
lean_dec(v_entry_205_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_declName_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
else
{
lean_object* v_thm_215_; 
v_thm_215_ = lean_ctor_get(v_x_198_, 0);
lean_inc_ref(v_thm_215_);
lean_dec_ref(v_x_198_);
v_thm_200_ = v_thm_215_;
goto v___jp_199_;
}
v___jp_199_:
{
lean_object* v_expr_201_; 
v_expr_201_ = lean_ctor_get(v_thm_200_, 0);
lean_inc_ref(v_expr_201_);
lean_dec_ref(v_thm_200_);
if (lean_obj_tag(v_expr_201_) == 4)
{
lean_object* v_declName_202_; lean_object* v___x_203_; 
v_declName_202_ = lean_ctor_get(v_expr_201_, 0);
lean_inc(v_declName_202_);
lean_dec_ref_known(v_expr_201_, 2);
v___x_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_203_, 0, v_declName_202_);
return v___x_203_;
}
else
{
lean_object* v___x_204_; 
lean_dec_ref(v_expr_201_);
v___x_204_ = lean_box(0);
return v___x_204_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_(lean_object* v_x_216_, lean_object* v_e_217_){
_start:
{
lean_object* v___x_218_; 
lean_inc_ref(v_e_217_);
v___x_218_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_NormSymEntry_declName_x3f(v_e_217_);
if (lean_obj_tag(v___x_218_) == 1)
{
lean_object* v_val_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_233_; 
v_val_219_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_233_ == 0)
{
v___x_221_ = v___x_218_;
v_isShared_222_ = v_isSharedCheck_233_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_val_219_);
lean_dec(v___x_218_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_233_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
uint8_t v___x_223_; 
v___x_223_ = l_Lean_isPrivateName(v_val_219_);
lean_dec(v_val_219_);
if (v___x_223_ == 0)
{
lean_object* v___x_225_; 
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v_e_217_);
v___x_225_ = v___x_221_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_e_217_);
v___x_225_ = v_reuseFailAlloc_227_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
lean_object* v___x_226_; 
lean_inc_ref_n(v___x_225_, 2);
v___x_226_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
lean_ctor_set(v___x_226_, 2, v___x_225_);
return v___x_226_;
}
}
else
{
lean_object* v___x_228_; lean_object* v___x_230_; 
v___x_228_ = lean_box(0);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v_e_217_);
v___x_230_ = v___x_221_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_e_217_);
v___x_230_ = v_reuseFailAlloc_232_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_231_; 
v___x_231_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_231_, 0, v___x_228_);
lean_ctor_set(v___x_231_, 1, v___x_228_);
lean_ctor_set(v___x_231_, 2, v___x_230_);
return v___x_231_;
}
}
}
}
else
{
lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec(v___x_218_);
v___x_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_234_, 0, v_e_217_);
lean_inc_ref_n(v___x_234_, 2);
v___x_235_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
lean_ctor_set(v___x_235_, 2, v___x_234_);
return v___x_235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2____boxed(lean_object* v_x_236_, lean_object* v_e_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_(v_x_236_, v_e_237_);
lean_dec_ref(v_x_236_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_(lean_object* v___y_239_){
_start:
{
lean_inc_ref(v___y_239_);
return v___y_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2____boxed(lean_object* v___y_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_(v___y_240_);
lean_dec_ref(v___y_240_);
return v_res_241_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_251_; uint8_t v___x_252_; lean_object* v___f_253_; lean_object* v___f_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_251_ = lean_box(0);
v___x_252_ = 0;
v___f_253_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_));
v___f_254_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_));
v___x_255_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__4, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__4_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__4);
v___x_256_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_));
v___x_257_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_));
v___x_258_ = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v___x_256_);
lean_ctor_set(v___x_258_, 2, v___x_256_);
lean_ctor_set(v___x_258_, 3, v___x_255_);
lean_ctor_set(v___x_258_, 4, v___f_254_);
lean_ctor_set(v___x_258_, 5, v___f_253_);
lean_ctor_set(v___x_258_, 6, v___x_251_);
lean_ctor_set_uint8(v___x_258_, sizeof(void*)*7, v___x_252_);
lean_ctor_set_uint8(v___x_258_, sizeof(void*)*7 + 1, v___x_252_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_);
v___x_261_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2____boxed(lean_object* v_a_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_();
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0(lean_object* v_____r_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0___closed__0));
v___x_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0___boxed(lean_object* v_____r_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0(v_____r_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0_spec__0(lean_object* v_msgData_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v___x_287_; lean_object* v_env_288_; uint8_t v___x_289_; lean_object* v_env_290_; lean_object* v___x_291_; lean_object* v_toCold_292_; lean_object* v_mctx_293_; lean_object* v_lctx_294_; lean_object* v_options_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_287_ = lean_st_ref_get(v___y_285_);
v_env_288_ = lean_ctor_get(v___x_287_, 0);
lean_inc_ref(v_env_288_);
lean_dec(v___x_287_);
v___x_289_ = 0;
v_env_290_ = l_Lean_Environment_setRecordingDeps(v_env_288_, v___x_289_);
v___x_291_ = lean_st_ref_get(v___y_283_);
v_toCold_292_ = lean_ctor_get(v___y_284_, 0);
v_mctx_293_ = lean_ctor_get(v___x_291_, 0);
lean_inc_ref(v_mctx_293_);
lean_dec(v___x_291_);
v_lctx_294_ = lean_ctor_get(v___y_282_, 2);
v_options_295_ = lean_ctor_get(v_toCold_292_, 2);
lean_inc_ref(v_options_295_);
lean_inc_ref(v_lctx_294_);
v___x_296_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_296_, 0, v_env_290_);
lean_ctor_set(v___x_296_, 1, v_mctx_293_);
lean_ctor_set(v___x_296_, 2, v_lctx_294_);
lean_ctor_set(v___x_296_, 3, v_options_295_);
v___x_297_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v_msgData_281_);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0_spec__0___boxed(lean_object* v_msgData_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0_spec__0(v_msgData_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
return v_res_305_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_306_; double v___x_307_; 
v___x_306_ = lean_unsigned_to_nat(0u);
v___x_307_ = lean_float_of_nat(v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0(lean_object* v_cls_311_, lean_object* v_msg_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_ref_318_; lean_object* v___x_319_; lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_365_; 
v_ref_318_ = lean_ctor_get(v___y_315_, 2);
v___x_319_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0_spec__0(v_msg_312_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
v_a_320_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_365_ == 0)
{
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_365_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_365_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_324_; lean_object* v_traceState_325_; lean_object* v_env_326_; lean_object* v_nextMacroScope_327_; lean_object* v_ngen_328_; lean_object* v_auxDeclNGen_329_; lean_object* v_cache_330_; lean_object* v_recordedDeps_331_; lean_object* v_messages_332_; lean_object* v_infoState_333_; lean_object* v_snapshotTasks_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_364_; 
v___x_324_ = lean_st_ref_take(v___y_316_);
v_traceState_325_ = lean_ctor_get(v___x_324_, 4);
v_env_326_ = lean_ctor_get(v___x_324_, 0);
v_nextMacroScope_327_ = lean_ctor_get(v___x_324_, 1);
v_ngen_328_ = lean_ctor_get(v___x_324_, 2);
v_auxDeclNGen_329_ = lean_ctor_get(v___x_324_, 3);
v_cache_330_ = lean_ctor_get(v___x_324_, 5);
v_recordedDeps_331_ = lean_ctor_get(v___x_324_, 6);
v_messages_332_ = lean_ctor_get(v___x_324_, 7);
v_infoState_333_ = lean_ctor_get(v___x_324_, 8);
v_snapshotTasks_334_ = lean_ctor_get(v___x_324_, 9);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_364_ == 0)
{
v___x_336_ = v___x_324_;
v_isShared_337_ = v_isSharedCheck_364_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_snapshotTasks_334_);
lean_inc(v_infoState_333_);
lean_inc(v_messages_332_);
lean_inc(v_recordedDeps_331_);
lean_inc(v_cache_330_);
lean_inc(v_traceState_325_);
lean_inc(v_auxDeclNGen_329_);
lean_inc(v_ngen_328_);
lean_inc(v_nextMacroScope_327_);
lean_inc(v_env_326_);
lean_dec(v___x_324_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_364_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
uint64_t v_tid_338_; lean_object* v_traces_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_363_; 
v_tid_338_ = lean_ctor_get_uint64(v_traceState_325_, sizeof(void*)*1);
v_traces_339_ = lean_ctor_get(v_traceState_325_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v_traceState_325_);
if (v_isSharedCheck_363_ == 0)
{
v___x_341_ = v_traceState_325_;
v_isShared_342_ = v_isSharedCheck_363_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_traces_339_);
lean_dec(v_traceState_325_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_363_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_343_; lean_object* v___x_344_; double v___x_345_; uint8_t v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_343_ = lean_box(0);
v___x_344_ = lean_box(0);
v___x_345_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__0);
v___x_346_ = 0;
v___x_347_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__1));
v___x_348_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_348_, 0, v_cls_311_);
lean_ctor_set(v___x_348_, 1, v___x_344_);
lean_ctor_set(v___x_348_, 2, v___x_347_);
lean_ctor_set_float(v___x_348_, sizeof(void*)*3, v___x_345_);
lean_ctor_set_float(v___x_348_, sizeof(void*)*3 + 8, v___x_345_);
lean_ctor_set_uint8(v___x_348_, sizeof(void*)*3 + 16, v___x_346_);
v___x_349_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__2));
v___x_350_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_350_, 0, v___x_348_);
lean_ctor_set(v___x_350_, 1, v_a_320_);
lean_ctor_set(v___x_350_, 2, v___x_349_);
lean_inc(v_ref_318_);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v_ref_318_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = l_Lean_PersistentArray_push___redArg(v_traces_339_, v___x_351_);
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v___x_352_);
v___x_354_ = v___x_341_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_352_);
lean_ctor_set_uint64(v_reuseFailAlloc_362_, sizeof(void*)*1, v_tid_338_);
v___x_354_ = v_reuseFailAlloc_362_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
lean_object* v___x_356_; 
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 4, v___x_354_);
v___x_356_ = v___x_336_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_env_326_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_nextMacroScope_327_);
lean_ctor_set(v_reuseFailAlloc_361_, 2, v_ngen_328_);
lean_ctor_set(v_reuseFailAlloc_361_, 3, v_auxDeclNGen_329_);
lean_ctor_set(v_reuseFailAlloc_361_, 4, v___x_354_);
lean_ctor_set(v_reuseFailAlloc_361_, 5, v_cache_330_);
lean_ctor_set(v_reuseFailAlloc_361_, 6, v_recordedDeps_331_);
lean_ctor_set(v_reuseFailAlloc_361_, 7, v_messages_332_);
lean_ctor_set(v_reuseFailAlloc_361_, 8, v_infoState_333_);
lean_ctor_set(v_reuseFailAlloc_361_, 9, v_snapshotTasks_334_);
v___x_356_ = v_reuseFailAlloc_361_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; lean_object* v___x_359_; 
v___x_357_ = lean_st_ref_put(v___y_316_, v___x_356_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_343_);
v___x_359_ = v___x_322_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_343_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___boxed(lean_object* v_cls_366_, lean_object* v_msg_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0(v_cls_366_, v_msg_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_373_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2(void){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_377_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_));
v___x_378_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__1));
v___x_379_ = l_Lean_Name_append(v___x_378_, v___x_377_);
return v___x_379_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__4(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__3));
v___x_382_ = l_Lean_stringToMessageData(v___x_381_);
return v___x_382_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__6(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__5));
v___x_385_ = l_Lean_stringToMessageData(v___x_384_);
return v___x_385_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__8(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__7));
v___x_388_ = l_Lean_stringToMessageData(v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f(lean_object* v_thm_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_){
_start:
{
lean_object* v___y_396_; lean_object* v_proof_409_; 
v_proof_409_ = lean_ctor_get(v_thm_389_, 2);
if (lean_obj_tag(v_proof_409_) == 4)
{
lean_object* v_declName_410_; lean_object* v___x_414_; 
lean_inc_ref(v_proof_409_);
lean_dec_ref(v_thm_389_);
v_declName_410_ = lean_ctor_get(v_proof_409_, 0);
lean_inc_n(v_declName_410_, 2);
lean_dec_ref_known(v_proof_409_, 2);
v___x_414_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v_declName_410_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_423_; 
lean_dec(v_declName_410_);
v_a_415_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_423_ == 0)
{
v___x_417_ = v___x_414_;
v_isShared_418_ = v_isSharedCheck_423_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_414_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_423_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_421_; 
v___x_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_419_, 0, v_a_415_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_419_);
v___x_421_ = v___x_417_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_419_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_461_; 
v_a_424_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_461_ == 0)
{
v___x_426_ = v___x_414_;
v_isShared_427_ = v_isSharedCheck_461_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_414_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_461_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
uint8_t v___x_428_; 
v___x_428_ = l_Lean_Exception_isInterrupt(v_a_424_);
if (v___x_428_ == 0)
{
uint8_t v___x_429_; 
lean_inc(v_a_424_);
v___x_429_ = l_Lean_Exception_isRuntime(v_a_424_);
if (v___x_429_ == 0)
{
lean_object* v_toCold_430_; lean_object* v_options_431_; uint8_t v_hasTrace_432_; 
lean_del_object(v___x_426_);
v_toCold_430_ = lean_ctor_get(v_a_392_, 0);
v_options_431_ = lean_ctor_get(v_toCold_430_, 2);
v_hasTrace_432_ = lean_ctor_get_uint8(v_options_431_, sizeof(void*)*1);
if (v_hasTrace_432_ == 0)
{
lean_dec(v_a_424_);
lean_dec(v_declName_410_);
goto v___jp_411_;
}
else
{
lean_object* v_inheritedTraceOptions_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; 
v_inheritedTraceOptions_433_ = lean_ctor_get(v_toCold_430_, 11);
v___x_434_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_));
v___x_435_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2);
v___x_436_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_433_, v_options_431_, v___x_435_);
if (v___x_436_ == 0)
{
lean_dec(v_a_424_);
lean_dec(v_declName_410_);
goto v___jp_411_;
}
else
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_437_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__4);
v___x_438_ = l_Lean_MessageData_ofConstName(v_declName_410_, v___x_429_);
v___x_439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__6, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__6);
v___x_441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_439_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
v___x_442_ = l_Lean_Exception_toMessageData(v_a_424_);
v___x_443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0(v___x_434_, v___x_443_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_446_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_a_445_);
lean_dec_ref_known(v___x_444_, 1);
v___x_446_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0(v_a_445_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
v___y_396_ = v___x_446_;
goto v___jp_395_;
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
v_a_447_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_444_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_444_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
}
else
{
lean_object* v___x_456_; 
lean_dec(v_declName_410_);
if (v_isShared_427_ == 0)
{
v___x_456_ = v___x_426_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_424_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
else
{
lean_object* v___x_459_; 
lean_dec(v_declName_410_);
if (v_isShared_427_ == 0)
{
v___x_459_ = v___x_426_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_424_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
v___jp_411_:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_box(0);
v___x_413_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___lam__0(v___x_412_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
v___y_396_ = v___x_413_;
goto v___jp_395_;
}
}
else
{
lean_object* v_toCold_462_; lean_object* v_options_463_; uint8_t v_hasTrace_464_; 
v_toCold_462_ = lean_ctor_get(v_a_392_, 0);
v_options_463_ = lean_ctor_get(v_toCold_462_, 2);
v_hasTrace_464_ = lean_ctor_get_uint8(v_options_463_, sizeof(void*)*1);
if (v_hasTrace_464_ == 0)
{
lean_dec_ref(v_thm_389_);
goto v___jp_406_;
}
else
{
lean_object* v_origin_465_; lean_object* v_inheritedTraceOptions_466_; lean_object* v_cls_467_; lean_object* v___x_468_; uint8_t v___x_469_; 
v_origin_465_ = lean_ctor_get(v_thm_389_, 4);
lean_inc_ref(v_origin_465_);
lean_dec_ref(v_thm_389_);
v_inheritedTraceOptions_466_ = lean_ctor_get(v_toCold_462_, 11);
v_cls_467_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_));
v___x_468_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2);
v___x_469_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_466_, v_options_463_, v___x_468_);
if (v___x_469_ == 0)
{
lean_dec_ref(v_origin_465_);
goto v___jp_406_;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_470_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__4);
v___x_471_ = l_Lean_Meta_Origin_key(v_origin_465_);
lean_dec_ref(v_origin_465_);
v___x_472_ = l_Lean_MessageData_ofName(v___x_471_);
v___x_473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_470_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__8, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__8);
v___x_475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_473_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v___x_476_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0(v_cls_467_, v___x_475_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_dec_ref_known(v___x_476_, 1);
goto v___jp_406_;
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_476_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_476_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
}
}
v___jp_395_:
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_405_; 
v_a_397_ = lean_ctor_get(v___y_396_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___y_396_);
if (v_isSharedCheck_405_ == 0)
{
v___x_399_ = v___y_396_;
v_isShared_400_ = v_isSharedCheck_405_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___y_396_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_405_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v_a_401_; lean_object* v___x_403_; 
v_a_401_ = lean_ctor_get(v_a_397_, 0);
lean_inc(v_a_401_);
lean_dec(v_a_397_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 0, v_a_401_);
v___x_403_ = v___x_399_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
v___jp_406_:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_box(0);
v___x_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___boxed(lean_object* v_thm_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f(v_thm_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
return v_res_491_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0);
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg___closed__0);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___dummy_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg();
return v_res_497_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0);
v___x_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
return v___x_499_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
return v___x_501_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1___redArg();
return v___x_502_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0);
v___x_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
return v___x_504_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_505_ = lean_unsigned_to_nat(0u);
v___x_506_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0);
v___x_507_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_507_, 0, v___x_506_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
lean_ctor_set(v___x_507_, 2, v___x_505_);
return v___x_507_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_508_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__4, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__4);
v___x_509_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__3, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__3);
v___x_510_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__0);
v___x_511_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2);
v___x_512_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
lean_ctor_set(v___x_512_, 1, v___x_510_);
lean_ctor_set(v___x_512_, 2, v___x_509_);
lean_ctor_set(v___x_512_, 3, v___x_510_);
lean_ctor_set(v___x_512_, 4, v___x_510_);
lean_ctor_set(v___x_512_, 5, v___x_510_);
lean_ctor_set(v___x_512_, 6, v___x_510_);
lean_ctor_set(v___x_512_, 7, v___x_508_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg(lean_object* v_ext_513_, lean_object* v_b_514_, uint8_t v_kind_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
lean_object* v_toCold_520_; lean_object* v_currNamespace_521_; lean_object* v___x_522_; lean_object* v_env_523_; lean_object* v_nextMacroScope_524_; lean_object* v_ngen_525_; lean_object* v_auxDeclNGen_526_; lean_object* v_traceState_527_; lean_object* v_recordedDeps_528_; lean_object* v_messages_529_; lean_object* v_infoState_530_; lean_object* v_snapshotTasks_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_558_; 
v_toCold_520_ = lean_ctor_get(v___y_517_, 0);
v_currNamespace_521_ = lean_ctor_get(v_toCold_520_, 4);
v___x_522_ = lean_st_ref_take(v___y_518_);
v_env_523_ = lean_ctor_get(v___x_522_, 0);
v_nextMacroScope_524_ = lean_ctor_get(v___x_522_, 1);
v_ngen_525_ = lean_ctor_get(v___x_522_, 2);
v_auxDeclNGen_526_ = lean_ctor_get(v___x_522_, 3);
v_traceState_527_ = lean_ctor_get(v___x_522_, 4);
v_recordedDeps_528_ = lean_ctor_get(v___x_522_, 6);
v_messages_529_ = lean_ctor_get(v___x_522_, 7);
v_infoState_530_ = lean_ctor_get(v___x_522_, 8);
v_snapshotTasks_531_ = lean_ctor_get(v___x_522_, 9);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; 
v_unused_559_ = lean_ctor_get(v___x_522_, 5);
lean_dec(v_unused_559_);
v___x_533_ = v___x_522_;
v_isShared_534_ = v_isSharedCheck_558_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_snapshotTasks_531_);
lean_inc(v_infoState_530_);
lean_inc(v_messages_529_);
lean_inc(v_recordedDeps_528_);
lean_inc(v_traceState_527_);
lean_inc(v_auxDeclNGen_526_);
lean_inc(v_ngen_525_);
lean_inc(v_nextMacroScope_524_);
lean_inc(v_env_523_);
lean_dec(v___x_522_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_558_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
lean_inc(v_currNamespace_521_);
v___x_535_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_523_, v_ext_513_, v_b_514_, v_kind_515_, v_currNamespace_521_);
v___x_536_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 5, v___x_536_);
lean_ctor_set(v___x_533_, 0, v___x_535_);
v___x_538_ = v___x_533_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_nextMacroScope_524_);
lean_ctor_set(v_reuseFailAlloc_557_, 2, v_ngen_525_);
lean_ctor_set(v_reuseFailAlloc_557_, 3, v_auxDeclNGen_526_);
lean_ctor_set(v_reuseFailAlloc_557_, 4, v_traceState_527_);
lean_ctor_set(v_reuseFailAlloc_557_, 5, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_557_, 6, v_recordedDeps_528_);
lean_ctor_set(v_reuseFailAlloc_557_, 7, v_messages_529_);
lean_ctor_set(v_reuseFailAlloc_557_, 8, v_infoState_530_);
lean_ctor_set(v_reuseFailAlloc_557_, 9, v_snapshotTasks_531_);
v___x_538_ = v_reuseFailAlloc_557_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v_mctx_541_; lean_object* v_zetaDeltaFVarIds_542_; lean_object* v_postponed_543_; lean_object* v_diag_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_555_; 
v___x_539_ = lean_st_ref_put(v___y_518_, v___x_538_);
v___x_540_ = lean_st_ref_take(v___y_516_);
v_mctx_541_ = lean_ctor_get(v___x_540_, 0);
v_zetaDeltaFVarIds_542_ = lean_ctor_get(v___x_540_, 2);
v_postponed_543_ = lean_ctor_get(v___x_540_, 3);
v_diag_544_ = lean_ctor_get(v___x_540_, 4);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_555_ == 0)
{
lean_object* v_unused_556_; 
v_unused_556_ = lean_ctor_get(v___x_540_, 1);
lean_dec(v_unused_556_);
v___x_546_ = v___x_540_;
v_isShared_547_ = v_isSharedCheck_555_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_diag_544_);
lean_inc(v_postponed_543_);
lean_inc(v_zetaDeltaFVarIds_542_);
lean_inc(v_mctx_541_);
lean_dec(v___x_540_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_555_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_548_ = lean_box(0);
v___x_549_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 1, v___x_549_);
v___x_551_ = v___x_546_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_mctx_541_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_zetaDeltaFVarIds_542_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v_postponed_543_);
lean_ctor_set(v_reuseFailAlloc_554_, 4, v_diag_544_);
v___x_551_ = v_reuseFailAlloc_554_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_st_ref_put(v___y_516_, v___x_551_);
v___x_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_548_);
return v___x_553_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___boxed(lean_object* v_ext_560_, lean_object* v_b_561_, lean_object* v_kind_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
uint8_t v_kind_boxed_567_; lean_object* v_res_568_; 
v_kind_boxed_567_ = lean_unbox(v_kind_562_);
v_res_568_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg(v_ext_560_, v_b_561_, v_kind_boxed_567_, v___y_563_, v___y_564_, v___y_565_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormTheorem_spec__2(uint8_t v_attrKind_569_, uint8_t v_post_570_, lean_object* v_as_571_, size_t v_sz_572_, size_t v_i_573_, lean_object* v_b_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_a_581_; uint8_t v___x_585_; 
v___x_585_ = lean_usize_dec_lt(v_i_573_, v_sz_572_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; 
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v_b_574_);
return v___x_586_;
}
else
{
lean_object* v___x_587_; lean_object* v_a_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_587_ = lean_box(0);
v_a_588_ = lean_array_uget_borrowed(v_as_571_, v_i_573_);
v___x_589_ = l_Lean_Meta_Grind_normExt;
lean_inc(v_a_588_);
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v_a_588_);
v___x_591_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg(v___x_589_, v___x_590_, v_attrKind_569_, v___y_576_, v___y_577_, v___y_578_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_633_; 
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; 
v_unused_634_ = lean_ctor_get(v___x_591_, 0);
lean_dec(v_unused_634_);
v___x_593_ = v___x_591_;
v_isShared_594_ = v_isSharedCheck_633_;
goto v_resetjp_592_;
}
else
{
lean_dec(v___x_591_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_633_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; 
lean_inc(v_a_588_);
v___x_595_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f(v_a_588_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref_known(v___x_595_, 1);
if (lean_obj_tag(v_a_596_) == 1)
{
lean_object* v_val_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_624_; 
v_val_597_ = lean_ctor_get(v_a_596_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v_a_596_);
if (v_isSharedCheck_624_ == 0)
{
v___x_599_ = v_a_596_;
v_isShared_600_ = v_isSharedCheck_624_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_val_597_);
lean_dec(v_a_596_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_624_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; lean_object* v___y_603_; 
v___x_601_ = l_Lean_Meta_Grind_normSymExt;
if (v_post_570_ == 0)
{
lean_object* v___x_619_; 
lean_inc(v_val_597_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v_val_597_);
v___x_619_ = v___x_593_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_val_597_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
v___y_603_ = v___x_619_;
goto v___jp_602_;
}
}
else
{
lean_object* v___x_622_; 
lean_inc(v_val_597_);
if (v_isShared_594_ == 0)
{
lean_ctor_set_tag(v___x_593_, 1);
lean_ctor_set(v___x_593_, 0, v_val_597_);
v___x_622_ = v___x_593_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_val_597_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
v___y_603_ = v___x_622_;
goto v___jp_602_;
}
}
v___jp_602_:
{
lean_object* v___x_604_; 
v___x_604_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg(v___x_601_, v___y_603_, v_attrKind_569_, v___y_576_, v___y_577_, v___y_578_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_616_; 
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_616_ == 0)
{
lean_object* v_unused_617_; 
v_unused_617_ = lean_ctor_get(v___x_604_, 0);
lean_dec(v_unused_617_);
v___x_606_ = v___x_604_;
v_isShared_607_ = v_isSharedCheck_616_;
goto v_resetjp_605_;
}
else
{
lean_dec(v___x_604_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_616_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
if (v_post_570_ == 0)
{
lean_del_object(v___x_606_);
lean_del_object(v___x_599_);
lean_dec(v_val_597_);
v_a_581_ = v___x_587_;
goto v___jp_580_;
}
else
{
uint8_t v_rfl_608_; 
v_rfl_608_ = lean_ctor_get_uint8(v_a_588_, sizeof(void*)*5 + 2);
if (v_rfl_608_ == 0)
{
lean_del_object(v___x_606_);
lean_del_object(v___x_599_);
lean_dec(v_val_597_);
v_a_581_ = v___x_587_;
goto v___jp_580_;
}
else
{
lean_object* v___x_610_; 
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v_val_597_);
v___x_610_ = v___x_606_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_val_597_);
v___x_610_ = v_reuseFailAlloc_615_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_612_; 
if (v_isShared_600_ == 0)
{
lean_ctor_set_tag(v___x_599_, 2);
lean_ctor_set(v___x_599_, 0, v___x_610_);
v___x_612_ = v___x_599_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v___x_610_);
v___x_612_ = v_reuseFailAlloc_614_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg(v___x_601_, v___x_612_, v_attrKind_569_, v___y_576_, v___y_577_, v___y_578_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_dec_ref_known(v___x_613_, 1);
v_a_581_ = v___x_587_;
goto v___jp_580_;
}
else
{
return v___x_613_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_599_);
lean_dec(v_val_597_);
return v___x_604_;
}
}
}
}
else
{
lean_dec(v_a_596_);
lean_del_object(v___x_593_);
v_a_581_ = v___x_587_;
goto v___jp_580_;
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_del_object(v___x_593_);
v_a_625_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_595_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_595_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
}
else
{
return v___x_591_;
}
}
v___jp_580_:
{
size_t v___x_582_; size_t v___x_583_; 
v___x_582_ = ((size_t)1ULL);
v___x_583_ = lean_usize_add(v_i_573_, v___x_582_);
v_i_573_ = v___x_583_;
v_b_574_ = v_a_581_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormTheorem_spec__2___boxed(lean_object* v_attrKind_635_, lean_object* v_post_636_, lean_object* v_as_637_, lean_object* v_sz_638_, lean_object* v_i_639_, lean_object* v_b_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
uint8_t v_attrKind_boxed_646_; uint8_t v_post_boxed_647_; size_t v_sz_boxed_648_; size_t v_i_boxed_649_; lean_object* v_res_650_; 
v_attrKind_boxed_646_ = lean_unbox(v_attrKind_635_);
v_post_boxed_647_ = lean_unbox(v_post_636_);
v_sz_boxed_648_ = lean_unbox_usize(v_sz_638_);
lean_dec(v_sz_638_);
v_i_boxed_649_ = lean_unbox_usize(v_i_639_);
lean_dec(v_i_639_);
v_res_650_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormTheorem_spec__2(v_attrKind_boxed_646_, v_post_boxed_647_, v_as_637_, v_sz_boxed_648_, v_i_boxed_649_, v_b_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec_ref(v_as_637_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg___lam__0(lean_object* v___y_651_, uint8_t v_isExporting_652_, lean_object* v___x_653_, lean_object* v___y_654_, lean_object* v___x_655_, lean_object* v_a_x3f_656_){
_start:
{
lean_object* v___x_658_; lean_object* v_env_659_; lean_object* v_nextMacroScope_660_; lean_object* v_ngen_661_; lean_object* v_auxDeclNGen_662_; lean_object* v_traceState_663_; lean_object* v_recordedDeps_664_; lean_object* v_messages_665_; lean_object* v_infoState_666_; lean_object* v_snapshotTasks_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_692_; 
v___x_658_ = lean_st_ref_take(v___y_651_);
v_env_659_ = lean_ctor_get(v___x_658_, 0);
v_nextMacroScope_660_ = lean_ctor_get(v___x_658_, 1);
v_ngen_661_ = lean_ctor_get(v___x_658_, 2);
v_auxDeclNGen_662_ = lean_ctor_get(v___x_658_, 3);
v_traceState_663_ = lean_ctor_get(v___x_658_, 4);
v_recordedDeps_664_ = lean_ctor_get(v___x_658_, 6);
v_messages_665_ = lean_ctor_get(v___x_658_, 7);
v_infoState_666_ = lean_ctor_get(v___x_658_, 8);
v_snapshotTasks_667_ = lean_ctor_get(v___x_658_, 9);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_692_ == 0)
{
lean_object* v_unused_693_; 
v_unused_693_ = lean_ctor_get(v___x_658_, 5);
lean_dec(v_unused_693_);
v___x_669_ = v___x_658_;
v_isShared_670_ = v_isSharedCheck_692_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_snapshotTasks_667_);
lean_inc(v_infoState_666_);
lean_inc(v_messages_665_);
lean_inc(v_recordedDeps_664_);
lean_inc(v_traceState_663_);
lean_inc(v_auxDeclNGen_662_);
lean_inc(v_ngen_661_);
lean_inc(v_nextMacroScope_660_);
lean_inc(v_env_659_);
lean_dec(v___x_658_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_692_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_671_; lean_object* v___x_673_; 
v___x_671_ = l_Lean_Environment_setExporting(v_env_659_, v_isExporting_652_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 5, v___x_653_);
lean_ctor_set(v___x_669_, 0, v___x_671_);
v___x_673_ = v___x_669_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_671_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v_nextMacroScope_660_);
lean_ctor_set(v_reuseFailAlloc_691_, 2, v_ngen_661_);
lean_ctor_set(v_reuseFailAlloc_691_, 3, v_auxDeclNGen_662_);
lean_ctor_set(v_reuseFailAlloc_691_, 4, v_traceState_663_);
lean_ctor_set(v_reuseFailAlloc_691_, 5, v___x_653_);
lean_ctor_set(v_reuseFailAlloc_691_, 6, v_recordedDeps_664_);
lean_ctor_set(v_reuseFailAlloc_691_, 7, v_messages_665_);
lean_ctor_set(v_reuseFailAlloc_691_, 8, v_infoState_666_);
lean_ctor_set(v_reuseFailAlloc_691_, 9, v_snapshotTasks_667_);
v___x_673_ = v_reuseFailAlloc_691_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v_mctx_676_; lean_object* v_zetaDeltaFVarIds_677_; lean_object* v_postponed_678_; lean_object* v_diag_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_689_; 
v___x_674_ = lean_st_ref_put(v___y_651_, v___x_673_);
v___x_675_ = lean_st_ref_take(v___y_654_);
v_mctx_676_ = lean_ctor_get(v___x_675_, 0);
v_zetaDeltaFVarIds_677_ = lean_ctor_get(v___x_675_, 2);
v_postponed_678_ = lean_ctor_get(v___x_675_, 3);
v_diag_679_ = lean_ctor_get(v___x_675_, 4);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_689_ == 0)
{
lean_object* v_unused_690_; 
v_unused_690_ = lean_ctor_get(v___x_675_, 1);
lean_dec(v_unused_690_);
v___x_681_ = v___x_675_;
v_isShared_682_ = v_isSharedCheck_689_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_diag_679_);
lean_inc(v_postponed_678_);
lean_inc(v_zetaDeltaFVarIds_677_);
lean_inc(v_mctx_676_);
lean_dec(v___x_675_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_689_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_683_; lean_object* v___x_685_; 
v___x_683_ = lean_box(0);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 1, v___x_655_);
v___x_685_ = v___x_681_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_mctx_676_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v___x_655_);
lean_ctor_set(v_reuseFailAlloc_688_, 2, v_zetaDeltaFVarIds_677_);
lean_ctor_set(v_reuseFailAlloc_688_, 3, v_postponed_678_);
lean_ctor_set(v_reuseFailAlloc_688_, 4, v_diag_679_);
v___x_685_ = v_reuseFailAlloc_688_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_st_ref_put(v___y_654_, v___x_685_);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_683_);
return v___x_687_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg___lam__0___boxed(lean_object* v___y_694_, lean_object* v_isExporting_695_, lean_object* v___x_696_, lean_object* v___y_697_, lean_object* v___x_698_, lean_object* v_a_x3f_699_, lean_object* v___y_700_){
_start:
{
uint8_t v_isExporting_boxed_701_; lean_object* v_res_702_; 
v_isExporting_boxed_701_ = lean_unbox(v_isExporting_695_);
v_res_702_ = l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg___lam__0(v___y_694_, v_isExporting_boxed_701_, v___x_696_, v___y_697_, v___x_698_, v_a_x3f_699_);
lean_dec(v_a_x3f_699_);
lean_dec(v___y_697_);
lean_dec(v___y_694_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg(lean_object* v_x_703_, uint8_t v_isExporting_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v___x_710_; lean_object* v_env_711_; lean_object* v___x_712_; uint8_t v_isModule_713_; 
v___x_710_ = lean_st_ref_get(v___y_708_);
v_env_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc_ref(v_env_711_);
lean_dec(v___x_710_);
v___x_712_ = l_Lean_Environment_header(v_env_711_);
v_isModule_713_ = lean_ctor_get_uint8(v___x_712_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_712_);
if (v_isModule_713_ == 0)
{
lean_object* v___x_714_; 
lean_dec_ref(v_env_711_);
lean_inc(v___y_708_);
lean_inc_ref(v___y_707_);
lean_inc(v___y_706_);
lean_inc_ref(v___y_705_);
v___x_714_ = lean_apply_5(v_x_703_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, lean_box(0));
return v___x_714_;
}
else
{
uint8_t v_isExporting_715_; 
v_isExporting_715_ = lean_ctor_get_uint8(v_env_711_, sizeof(void*)*13);
lean_dec_ref(v_env_711_);
if (v_isExporting_704_ == 0)
{
if (v_isExporting_715_ == 0)
{
lean_object* v___x_782_; 
lean_inc(v___y_708_);
lean_inc_ref(v___y_707_);
lean_inc(v___y_706_);
lean_inc_ref(v___y_705_);
v___x_782_ = lean_apply_5(v_x_703_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, lean_box(0));
return v___x_782_;
}
else
{
goto v___jp_716_;
}
}
else
{
if (v_isExporting_715_ == 0)
{
goto v___jp_716_;
}
else
{
lean_object* v___x_783_; 
lean_inc(v___y_708_);
lean_inc_ref(v___y_707_);
lean_inc(v___y_706_);
lean_inc_ref(v___y_705_);
v___x_783_ = lean_apply_5(v_x_703_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, lean_box(0));
return v___x_783_;
}
}
v___jp_716_:
{
lean_object* v___x_717_; lean_object* v_env_718_; lean_object* v_nextMacroScope_719_; lean_object* v_ngen_720_; lean_object* v_auxDeclNGen_721_; lean_object* v_traceState_722_; lean_object* v_recordedDeps_723_; lean_object* v_messages_724_; lean_object* v_infoState_725_; lean_object* v_snapshotTasks_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_780_; 
v___x_717_ = lean_st_ref_take(v___y_708_);
v_env_718_ = lean_ctor_get(v___x_717_, 0);
v_nextMacroScope_719_ = lean_ctor_get(v___x_717_, 1);
v_ngen_720_ = lean_ctor_get(v___x_717_, 2);
v_auxDeclNGen_721_ = lean_ctor_get(v___x_717_, 3);
v_traceState_722_ = lean_ctor_get(v___x_717_, 4);
v_recordedDeps_723_ = lean_ctor_get(v___x_717_, 6);
v_messages_724_ = lean_ctor_get(v___x_717_, 7);
v_infoState_725_ = lean_ctor_get(v___x_717_, 8);
v_snapshotTasks_726_ = lean_ctor_get(v___x_717_, 9);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_780_ == 0)
{
lean_object* v_unused_781_; 
v_unused_781_ = lean_ctor_get(v___x_717_, 5);
lean_dec(v_unused_781_);
v___x_728_ = v___x_717_;
v_isShared_729_ = v_isSharedCheck_780_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_snapshotTasks_726_);
lean_inc(v_infoState_725_);
lean_inc(v_messages_724_);
lean_inc(v_recordedDeps_723_);
lean_inc(v_traceState_722_);
lean_inc(v_auxDeclNGen_721_);
lean_inc(v_ngen_720_);
lean_inc(v_nextMacroScope_719_);
lean_inc(v_env_718_);
lean_dec(v___x_717_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_780_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_730_ = l_Lean_Environment_setExporting(v_env_718_, v_isExporting_704_);
v___x_731_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 5, v___x_731_);
lean_ctor_set(v___x_728_, 0, v___x_730_);
v___x_733_ = v___x_728_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v_nextMacroScope_719_);
lean_ctor_set(v_reuseFailAlloc_779_, 2, v_ngen_720_);
lean_ctor_set(v_reuseFailAlloc_779_, 3, v_auxDeclNGen_721_);
lean_ctor_set(v_reuseFailAlloc_779_, 4, v_traceState_722_);
lean_ctor_set(v_reuseFailAlloc_779_, 5, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_779_, 6, v_recordedDeps_723_);
lean_ctor_set(v_reuseFailAlloc_779_, 7, v_messages_724_);
lean_ctor_set(v_reuseFailAlloc_779_, 8, v_infoState_725_);
lean_ctor_set(v_reuseFailAlloc_779_, 9, v_snapshotTasks_726_);
v___x_733_ = v_reuseFailAlloc_779_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v_mctx_736_; lean_object* v_zetaDeltaFVarIds_737_; lean_object* v_postponed_738_; lean_object* v_diag_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_777_; 
v___x_734_ = lean_st_ref_put(v___y_708_, v___x_733_);
v___x_735_ = lean_st_ref_take(v___y_706_);
v_mctx_736_ = lean_ctor_get(v___x_735_, 0);
v_zetaDeltaFVarIds_737_ = lean_ctor_get(v___x_735_, 2);
v_postponed_738_ = lean_ctor_get(v___x_735_, 3);
v_diag_739_ = lean_ctor_get(v___x_735_, 4);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_777_ == 0)
{
lean_object* v_unused_778_; 
v_unused_778_ = lean_ctor_get(v___x_735_, 1);
lean_dec(v_unused_778_);
v___x_741_ = v___x_735_;
v_isShared_742_ = v_isSharedCheck_777_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_diag_739_);
lean_inc(v_postponed_738_);
lean_inc(v_zetaDeltaFVarIds_737_);
lean_inc(v_mctx_736_);
lean_dec(v___x_735_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_777_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_743_; lean_object* v___x_745_; 
v___x_743_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 1, v___x_743_);
v___x_745_ = v___x_741_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_mctx_736_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_776_, 2, v_zetaDeltaFVarIds_737_);
lean_ctor_set(v_reuseFailAlloc_776_, 3, v_postponed_738_);
lean_ctor_set(v_reuseFailAlloc_776_, 4, v_diag_739_);
v___x_745_ = v_reuseFailAlloc_776_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; lean_object* v_r_747_; 
v___x_746_ = lean_st_ref_put(v___y_706_, v___x_745_);
lean_inc(v___y_708_);
lean_inc_ref(v___y_707_);
lean_inc(v___y_706_);
lean_inc_ref(v___y_705_);
v_r_747_ = lean_apply_5(v_x_703_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, lean_box(0));
if (lean_obj_tag(v_r_747_) == 0)
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_764_; 
v_a_748_ = lean_ctor_get(v_r_747_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v_r_747_);
if (v_isSharedCheck_764_ == 0)
{
v___x_750_ = v_r_747_;
v_isShared_751_ = v_isSharedCheck_764_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v_r_747_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_764_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
lean_inc(v_a_748_);
if (v_isShared_751_ == 0)
{
lean_ctor_set_tag(v___x_750_, 1);
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_763_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
v___x_754_ = l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg___lam__0(v___y_708_, v_isExporting_715_, v___x_731_, v___y_706_, v___x_743_, v___x_753_);
lean_dec_ref(v___x_753_);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_761_ == 0)
{
lean_object* v_unused_762_; 
v_unused_762_ = lean_ctor_get(v___x_754_, 0);
lean_dec(v_unused_762_);
v___x_756_ = v___x_754_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_dec(v___x_754_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v_a_748_);
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_748_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
v_a_765_ = lean_ctor_get(v_r_747_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v_r_747_, 1);
v___x_766_ = lean_box(0);
v___x_767_ = l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg___lam__0(v___y_708_, v_isExporting_715_, v___x_731_, v___y_706_, v___x_743_, v___x_766_);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; 
v_unused_775_ = lean_ctor_get(v___x_767_, 0);
lean_dec(v_unused_775_);
v___x_769_ = v___x_767_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_dec(v___x_767_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set_tag(v___x_769_, 1);
lean_ctor_set(v___x_769_, 0, v_a_765_);
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_765_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg___boxed(lean_object* v_x_784_, lean_object* v_isExporting_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
uint8_t v_isExporting_boxed_791_; lean_object* v_res_792_; 
v_isExporting_boxed_791_ = lean_unbox(v_isExporting_785_);
v_res_792_ = l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg(v_x_784_, v_isExporting_boxed_791_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormTheorem(lean_object* v_declName_793_, uint8_t v_post_794_, uint8_t v_inv_795_, uint8_t v_attrKind_796_, lean_object* v_prio_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_){
_start:
{
uint8_t v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; uint8_t v___y_809_; uint8_t v___x_832_; uint8_t v___x_833_; 
v___x_803_ = 1;
v___x_804_ = lean_box(v_post_794_);
v___x_805_ = lean_box(v_inv_795_);
v___x_806_ = lean_box(v___x_803_);
lean_inc(v_declName_793_);
v___x_807_ = lean_alloc_closure((void*)(l_Lean_Meta_mkSimpTheoremFromConst___boxed), 10, 5);
lean_closure_set(v___x_807_, 0, v_declName_793_);
lean_closure_set(v___x_807_, 1, v___x_804_);
lean_closure_set(v___x_807_, 2, v___x_805_);
lean_closure_set(v___x_807_, 3, v_prio_797_);
lean_closure_set(v___x_807_, 4, v___x_806_);
v___x_832_ = 1;
v___x_833_ = l_Lean_instBEqAttributeKind_beq(v_attrKind_796_, v___x_832_);
if (v___x_833_ == 0)
{
uint8_t v___x_834_; 
v___x_834_ = l_Lean_isPrivateName(v_declName_793_);
lean_dec(v_declName_793_);
if (v___x_834_ == 0)
{
v___y_809_ = v___x_803_;
goto v___jp_808_;
}
else
{
v___y_809_ = v___x_833_;
goto v___jp_808_;
}
}
else
{
uint8_t v___x_835_; 
lean_dec(v_declName_793_);
v___x_835_ = 0;
v___y_809_ = v___x_835_;
goto v___jp_808_;
}
v___jp_808_:
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg(v___x_807_, v___y_809_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_812_; size_t v_sz_813_; size_t v___x_814_; lean_object* v___x_815_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_811_);
lean_dec_ref_known(v___x_810_, 1);
v___x_812_ = lean_box(0);
v_sz_813_ = lean_array_size(v_a_811_);
v___x_814_ = ((size_t)0ULL);
v___x_815_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormTheorem_spec__2(v_attrKind_796_, v_post_794_, v_a_811_, v_sz_813_, v___x_814_, v___x_812_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
lean_dec(v_a_811_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v___x_815_, 0);
lean_dec(v_unused_823_);
v___x_817_ = v___x_815_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_dec(v___x_815_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 0, v___x_812_);
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_812_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
else
{
return v___x_815_;
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
v_a_824_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_810_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_810_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormTheorem___boxed(lean_object* v_declName_836_, lean_object* v_post_837_, lean_object* v_inv_838_, lean_object* v_attrKind_839_, lean_object* v_prio_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
uint8_t v_post_boxed_846_; uint8_t v_inv_boxed_847_; uint8_t v_attrKind_boxed_848_; lean_object* v_res_849_; 
v_post_boxed_846_ = lean_unbox(v_post_837_);
v_inv_boxed_847_ = lean_unbox(v_inv_838_);
v_attrKind_boxed_848_ = lean_unbox(v_attrKind_839_);
v_res_849_ = l_Lean_Meta_Grind_addNormTheorem(v_declName_836_, v_post_boxed_846_, v_inv_boxed_847_, v_attrKind_boxed_848_, v_prio_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
lean_dec(v_a_844_);
lean_dec_ref(v_a_843_);
lean_dec(v_a_842_);
lean_dec_ref(v_a_841_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0(lean_object* v_00_u03b1_850_, lean_object* v_x_851_, uint8_t v_isExporting_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg(v_x_851_, v_isExporting_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___boxed(lean_object* v_00_u03b1_859_, lean_object* v_x_860_, lean_object* v_isExporting_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
uint8_t v_isExporting_boxed_867_; lean_object* v_res_868_; 
v_isExporting_boxed_867_ = lean_unbox(v_isExporting_861_);
v_res_868_ = l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0(v_00_u03b1_859_, v_x_860_, v_isExporting_boxed_867_, v___y_862_, v___y_863_, v___y_864_, v___y_865_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec(v___y_863_);
lean_dec_ref(v___y_862_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1(lean_object* v_00_u03b1_869_, lean_object* v_00_u03b2_870_, lean_object* v_00_u03c3_871_, lean_object* v_ext_872_, lean_object* v_b_873_, uint8_t v_kind_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v___x_880_; 
v___x_880_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg(v_ext_872_, v_b_873_, v_kind_874_, v___y_876_, v___y_877_, v___y_878_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___boxed(lean_object* v_00_u03b1_881_, lean_object* v_00_u03b2_882_, lean_object* v_00_u03c3_883_, lean_object* v_ext_884_, lean_object* v_b_885_, lean_object* v_kind_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
uint8_t v_kind_boxed_892_; lean_object* v_res_893_; 
v_kind_boxed_892_ = lean_unbox(v_kind_886_);
v_res_893_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1(v_00_u03b1_881_, v_00_u03b2_882_, v_00_u03c3_883_, v_ext_884_, v_b_885_, v_kind_boxed_892_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_894_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0___redArg___boxed(lean_object* v___dummy_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0___redArg();
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0_spec__0(lean_object* v_00_u03b2_900_){
_start:
{
lean_object* v___x_901_; 
v___x_901_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2___redArg(uint8_t v_attrKind_902_, lean_object* v_as_903_, size_t v_sz_904_, size_t v_i_905_, lean_object* v_b_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
uint8_t v___x_911_; 
v___x_911_ = lean_usize_dec_lt(v_i_905_, v_sz_904_);
if (v___x_911_ == 0)
{
lean_object* v___x_912_; 
v___x_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_912_, 0, v_b_906_);
return v___x_912_;
}
else
{
lean_object* v___x_913_; lean_object* v_a_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_913_ = lean_box(0);
v_a_914_ = lean_array_uget_borrowed(v_as_903_, v_i_905_);
v___x_915_ = l_Lean_Meta_Grind_normSymExt;
lean_inc(v_a_914_);
v___x_916_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_916_, 0, v_a_914_);
v___x_917_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg(v___x_915_, v___x_916_, v_attrKind_902_, v___y_907_, v___y_908_, v___y_909_);
if (lean_obj_tag(v___x_917_) == 0)
{
size_t v___x_918_; size_t v___x_919_; 
lean_dec_ref_known(v___x_917_, 1);
v___x_918_ = ((size_t)1ULL);
v___x_919_ = lean_usize_add(v_i_905_, v___x_918_);
v_i_905_ = v___x_919_;
v_b_906_ = v___x_913_;
goto _start;
}
else
{
return v___x_917_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2___redArg___boxed(lean_object* v_attrKind_921_, lean_object* v_as_922_, lean_object* v_sz_923_, lean_object* v_i_924_, lean_object* v_b_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
uint8_t v_attrKind_boxed_930_; size_t v_sz_boxed_931_; size_t v_i_boxed_932_; lean_object* v_res_933_; 
v_attrKind_boxed_930_ = lean_unbox(v_attrKind_921_);
v_sz_boxed_931_ = lean_unbox_usize(v_sz_923_);
lean_dec(v_sz_923_);
v_i_boxed_932_ = lean_unbox_usize(v_i_924_);
lean_dec(v_i_924_);
v_res_933_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2___redArg(v_attrKind_boxed_930_, v_as_922_, v_sz_boxed_931_, v_i_boxed_932_, v_b_925_, v___y_926_, v___y_927_, v___y_928_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v_as_922_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0___redArg(lean_object* v_declName_934_, lean_object* v___y_935_){
_start:
{
lean_object* v___x_937_; lean_object* v_env_938_; uint8_t v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_937_ = lean_st_ref_get(v___y_935_);
v_env_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc_ref(v_env_938_);
lean_dec(v___x_937_);
v___x_939_ = l_Lean_getReducibilityStatusCore(v_env_938_, v_declName_934_);
v___x_940_ = lean_box(v___x_939_);
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0___redArg___boxed(lean_object* v_declName_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0___redArg(v_declName_942_, v___y_943_);
lean_dec(v___y_943_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0(lean_object* v_declName_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_968_; 
v___x_952_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0___redArg(v_declName_946_, v___y_950_);
v_a_953_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_968_ == 0)
{
v___x_955_ = v___x_952_;
v_isShared_956_ = v_isSharedCheck_968_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_952_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_968_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
uint8_t v___x_957_; 
v___x_957_ = lean_unbox(v_a_953_);
lean_dec(v_a_953_);
if (v___x_957_ == 0)
{
uint8_t v___x_958_; lean_object* v___x_959_; lean_object* v___x_961_; 
v___x_958_ = 1;
v___x_959_ = lean_box(v___x_958_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 0, v___x_959_);
v___x_961_ = v___x_955_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_959_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
else
{
uint8_t v___x_963_; lean_object* v___x_964_; lean_object* v___x_966_; 
v___x_963_ = 0;
v___x_964_ = lean_box(v___x_963_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 0, v___x_964_);
v___x_966_ = v___x_955_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_964_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0___boxed(lean_object* v_declName_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0(v_declName_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1___redArg(uint8_t v_attrKind_976_, lean_object* v_as_977_, size_t v_sz_978_, size_t v_i_979_, lean_object* v_b_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
uint8_t v___x_985_; 
v___x_985_ = lean_usize_dec_lt(v_i_979_, v_sz_978_);
if (v___x_985_ == 0)
{
lean_object* v___x_986_; 
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v_b_980_);
return v___x_986_;
}
else
{
lean_object* v___x_987_; lean_object* v_a_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_987_ = lean_box(0);
v_a_988_ = lean_array_uget_borrowed(v_as_977_, v_i_979_);
v___x_989_ = l_Lean_Meta_Grind_normSymExt;
lean_inc(v_a_988_);
v___x_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_990_, 0, v_a_988_);
v___x_991_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg(v___x_989_, v___x_990_, v_attrKind_976_, v___y_981_, v___y_982_, v___y_983_);
if (lean_obj_tag(v___x_991_) == 0)
{
size_t v___x_992_; size_t v___x_993_; 
lean_dec_ref_known(v___x_991_, 1);
v___x_992_ = ((size_t)1ULL);
v___x_993_ = lean_usize_add(v_i_979_, v___x_992_);
v_i_979_ = v___x_993_;
v_b_980_ = v___x_987_;
goto _start;
}
else
{
return v___x_991_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1___redArg___boxed(lean_object* v_attrKind_995_, lean_object* v_as_996_, lean_object* v_sz_997_, lean_object* v_i_998_, lean_object* v_b_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
uint8_t v_attrKind_boxed_1004_; size_t v_sz_boxed_1005_; size_t v_i_boxed_1006_; lean_object* v_res_1007_; 
v_attrKind_boxed_1004_ = lean_unbox(v_attrKind_995_);
v_sz_boxed_1005_ = lean_unbox_usize(v_sz_997_);
lean_dec(v_sz_997_);
v_i_boxed_1006_ = lean_unbox_usize(v_i_998_);
lean_dec(v_i_998_);
v_res_1007_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1___redArg(v_attrKind_boxed_1004_, v_as_996_, v_sz_boxed_1005_, v_i_boxed_1006_, v_b_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v_as_996_);
return v_res_1007_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__1(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = ((lean_object*)(l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__0));
v___x_1010_ = l_Lean_stringToMessageData(v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormSymDeclToUnfold(lean_object* v_declName_1011_, uint8_t v_attrKind_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v___y_1022_; lean_object* v_a_1023_; lean_object* v___x_1041_; 
lean_inc(v_declName_1011_);
v___x_1041_ = l_Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0(v_declName_1011_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1087_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1044_ = v___x_1041_;
v_isShared_1045_ = v_isSharedCheck_1087_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1041_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1087_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
uint8_t v___x_1046_; 
v___x_1046_ = lean_unbox(v_a_1042_);
lean_dec(v_a_1042_);
if (v___x_1046_ == 0)
{
lean_object* v___x_1047_; 
lean_del_object(v___x_1044_);
lean_inc(v_declName_1011_);
v___x_1047_ = l_Lean_Meta_Sym_Simp_mkTheoremsFromDecl(v_declName_1011_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v___x_1049_; size_t v_sz_1050_; size_t v___x_1051_; lean_object* v___x_1052_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_a_1048_);
lean_dec_ref_known(v___x_1047_, 1);
v___x_1049_ = lean_box(0);
v_sz_1050_ = lean_array_size(v_a_1048_);
v___x_1051_ = ((size_t)0ULL);
v___x_1052_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1___redArg(v_attrKind_1012_, v_a_1048_, v_sz_1050_, v___x_1051_, v___x_1049_, v_a_1014_, v_a_1015_, v_a_1016_);
lean_dec(v_a_1048_);
if (lean_obj_tag(v___x_1052_) == 0)
{
lean_object* v___x_1053_; 
lean_dec_ref_known(v___x_1052_, 1);
lean_inc(v_declName_1011_);
v___x_1053_ = l_Lean_Meta_Sym_DSimp_Decls_mkEntries(v_declName_1011_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; size_t v_sz_1055_; lean_object* v___x_1056_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1053_, 1);
v_sz_1055_ = lean_array_size(v_a_1054_);
v___x_1056_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2___redArg(v_attrKind_1012_, v_a_1054_, v_sz_1055_, v___x_1051_, v___x_1049_, v_a_1014_, v_a_1015_, v_a_1016_);
lean_dec(v_a_1054_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec(v_declName_1011_);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v___x_1056_, 0);
lean_dec(v_unused_1064_);
v___x_1058_ = v___x_1056_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_dec(v___x_1056_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 0, v___x_1049_);
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1049_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
else
{
lean_object* v_a_1065_; 
v_a_1065_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1065_);
v___y_1022_ = v___x_1056_;
v_a_1023_ = v_a_1065_;
goto v___jp_1021_;
}
}
else
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
v_a_1066_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1053_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1053_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
lean_inc(v_a_1066_);
if (v_isShared_1069_ == 0)
{
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1066_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
v___y_1022_ = v___x_1071_;
v_a_1023_ = v_a_1066_;
goto v___jp_1021_;
}
}
}
}
else
{
lean_object* v_a_1074_; 
v_a_1074_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_a_1074_);
v___y_1022_ = v___x_1052_;
v_a_1023_ = v_a_1074_;
goto v___jp_1021_;
}
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
v_a_1075_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1077_ = v___x_1047_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1047_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
lean_inc(v_a_1075_);
if (v_isShared_1078_ == 0)
{
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
v___y_1022_ = v___x_1080_;
v_a_1023_ = v_a_1075_;
goto v___jp_1021_;
}
}
}
}
else
{
lean_object* v___x_1083_; lean_object* v___x_1085_; 
lean_dec(v_declName_1011_);
v___x_1083_ = lean_box(0);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v___x_1083_);
v___x_1085_ = v___x_1044_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
lean_dec(v_declName_1011_);
v_a_1088_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1041_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1041_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
v___jp_1018_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = lean_box(0);
v___x_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
return v___x_1020_;
}
v___jp_1021_:
{
uint8_t v___x_1024_; 
v___x_1024_ = l_Lean_Exception_isInterrupt(v_a_1023_);
if (v___x_1024_ == 0)
{
uint8_t v___x_1025_; 
lean_inc_ref(v_a_1023_);
v___x_1025_ = l_Lean_Exception_isRuntime(v_a_1023_);
if (v___x_1025_ == 0)
{
lean_object* v_toCold_1026_; lean_object* v_options_1027_; uint8_t v_hasTrace_1028_; 
lean_dec_ref(v___y_1022_);
v_toCold_1026_ = lean_ctor_get(v_a_1015_, 0);
v_options_1027_ = lean_ctor_get(v_toCold_1026_, 2);
v_hasTrace_1028_ = lean_ctor_get_uint8(v_options_1027_, sizeof(void*)*1);
if (v_hasTrace_1028_ == 0)
{
lean_dec_ref(v_a_1023_);
lean_dec(v_declName_1011_);
goto v___jp_1018_;
}
else
{
lean_object* v_inheritedTraceOptions_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; uint8_t v___x_1032_; 
v_inheritedTraceOptions_1029_ = lean_ctor_get(v_toCold_1026_, 11);
v___x_1030_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_));
v___x_1031_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__2);
v___x_1032_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1029_, v_options_1027_, v___x_1031_);
if (v___x_1032_ == 0)
{
lean_dec_ref(v_a_1023_);
lean_dec(v_declName_1011_);
goto v___jp_1018_;
}
else
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1033_ = lean_obj_once(&l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__1, &l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__1_once, _init_l_Lean_Meta_Grind_addNormSymDeclToUnfold___closed__1);
v___x_1034_ = l_Lean_MessageData_ofConstName(v_declName_1011_, v___x_1025_);
v___x_1035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1033_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__6, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__6);
v___x_1037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = l_Lean_Exception_toMessageData(v_a_1023_);
v___x_1039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1037_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0(v___x_1030_, v___x_1039_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
return v___x_1040_;
}
}
}
else
{
lean_dec_ref(v_a_1023_);
lean_dec(v_declName_1011_);
return v___y_1022_;
}
}
else
{
lean_dec_ref(v_a_1023_);
lean_dec(v_declName_1011_);
return v___y_1022_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormSymDeclToUnfold___boxed(lean_object* v_declName_1096_, lean_object* v_attrKind_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_){
_start:
{
uint8_t v_attrKind_boxed_1103_; lean_object* v_res_1104_; 
v_attrKind_boxed_1103_ = lean_unbox(v_attrKind_1097_);
v_res_1104_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v_declName_1096_, v_attrKind_boxed_1103_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
lean_dec(v_a_1101_);
lean_dec_ref(v_a_1100_);
lean_dec(v_a_1099_);
lean_dec_ref(v_a_1098_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0(lean_object* v_declName_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0___redArg(v_declName_1105_, v___y_1109_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0___boxed(lean_object* v_declName_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__0_spec__0(v_declName_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1(uint8_t v_attrKind_1119_, lean_object* v_as_1120_, size_t v_sz_1121_, size_t v_i_1122_, lean_object* v_b_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1___redArg(v_attrKind_1119_, v_as_1120_, v_sz_1121_, v_i_1122_, v_b_1123_, v___y_1125_, v___y_1126_, v___y_1127_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1___boxed(lean_object* v_attrKind_1130_, lean_object* v_as_1131_, lean_object* v_sz_1132_, lean_object* v_i_1133_, lean_object* v_b_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
uint8_t v_attrKind_boxed_1140_; size_t v_sz_boxed_1141_; size_t v_i_boxed_1142_; lean_object* v_res_1143_; 
v_attrKind_boxed_1140_ = lean_unbox(v_attrKind_1130_);
v_sz_boxed_1141_ = lean_unbox_usize(v_sz_1132_);
lean_dec(v_sz_1132_);
v_i_boxed_1142_ = lean_unbox_usize(v_i_1133_);
lean_dec(v_i_1133_);
v_res_1143_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__1(v_attrKind_boxed_1140_, v_as_1131_, v_sz_boxed_1141_, v_i_boxed_1142_, v_b_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
lean_dec_ref(v_as_1131_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2(uint8_t v_attrKind_1144_, lean_object* v_as_1145_, size_t v_sz_1146_, size_t v_i_1147_, lean_object* v_b_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2___redArg(v_attrKind_1144_, v_as_1145_, v_sz_1146_, v_i_1147_, v_b_1148_, v___y_1150_, v___y_1151_, v___y_1152_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2___boxed(lean_object* v_attrKind_1155_, lean_object* v_as_1156_, lean_object* v_sz_1157_, lean_object* v_i_1158_, lean_object* v_b_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
uint8_t v_attrKind_boxed_1165_; size_t v_sz_boxed_1166_; size_t v_i_boxed_1167_; lean_object* v_res_1168_; 
v_attrKind_boxed_1165_ = lean_unbox(v_attrKind_1155_);
v_sz_boxed_1166_ = lean_unbox_usize(v_sz_1157_);
lean_dec(v_sz_1157_);
v_i_boxed_1167_ = lean_unbox_usize(v_i_1158_);
lean_dec(v_i_1158_);
v_res_1168_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_addNormSymDeclToUnfold_spec__2(v_attrKind_boxed_1165_, v_as_1156_, v_sz_boxed_1166_, v_i_boxed_1167_, v_b_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec_ref(v_as_1156_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormDeclToUnfold(lean_object* v_declName_1169_, uint8_t v_attrKind_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_){
_start:
{
lean_object* v___x_1176_; uint8_t v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1176_ = l_Lean_Meta_Grind_normExt;
v___x_1177_ = 0;
v___x_1178_ = lean_unsigned_to_nat(1000u);
lean_inc(v_declName_1169_);
v___x_1179_ = l_Lean_Meta_addDeclToUnfold(v___x_1176_, v_declName_1169_, v___x_1177_, v___x_1177_, v___x_1178_, v_attrKind_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1206_; 
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1182_ = v___x_1179_;
v_isShared_1183_ = v_isSharedCheck_1206_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1179_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1206_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
uint8_t v___x_1184_; 
v___x_1184_ = lean_unbox(v_a_1180_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; lean_object* v___x_1187_; 
lean_dec(v_a_1180_);
lean_dec(v_declName_1169_);
v___x_1185_ = lean_box(v___x_1177_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1185_);
v___x_1187_ = v___x_1182_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
else
{
lean_object* v___x_1189_; 
lean_del_object(v___x_1182_);
v___x_1189_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v_declName_1169_, v_attrKind_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1196_ == 0)
{
lean_object* v_unused_1197_; 
v_unused_1197_ = lean_ctor_get(v___x_1189_, 0);
lean_dec(v_unused_1197_);
v___x_1191_ = v___x_1189_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_dec(v___x_1189_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v_a_1180_);
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1180_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec(v_a_1180_);
v_a_1198_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1189_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1189_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
}
else
{
lean_dec(v_declName_1169_);
return v___x_1179_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNormDeclToUnfold___boxed(lean_object* v_declName_1207_, lean_object* v_attrKind_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_){
_start:
{
uint8_t v_attrKind_boxed_1214_; lean_object* v_res_1215_; 
v_attrKind_boxed_1214_ = lean_unbox(v_attrKind_1208_);
v_res_1215_ = l_Lean_Meta_Grind_addNormDeclToUnfold(v_declName_1207_, v_attrKind_boxed_1214_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_);
lean_dec(v_a_1212_);
lean_dec_ref(v_a_1211_);
lean_dec(v_a_1210_);
lean_dec_ref(v_a_1209_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___impl(lean_object* v_x_1216_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_obj_tag_nat(v_x_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___impl___boxed(lean_object* v_x_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lean_Meta_Grind_AttrKind_ctorIdx___impl(v_x_1218_);
lean_dec(v_x_1218_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(lean_object* v_t_1220_, lean_object* v_k_1221_){
_start:
{
switch(lean_obj_tag(v_t_1220_))
{
case 0:
{
lean_object* v_k_1222_; lean_object* v___x_1223_; 
v_k_1222_ = lean_ctor_get(v_t_1220_, 0);
lean_inc(v_k_1222_);
lean_dec_ref_known(v_t_1220_, 1);
v___x_1223_ = lean_apply_1(v_k_1221_, v_k_1222_);
return v___x_1223_;
}
case 1:
{
uint8_t v_eager_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v_eager_1224_ = lean_ctor_get_uint8(v_t_1220_, 0);
lean_dec_ref_known(v_t_1220_, 0);
v___x_1225_ = lean_box(v_eager_1224_);
v___x_1226_ = lean_apply_1(v_k_1221_, v___x_1225_);
return v___x_1226_;
}
case 5:
{
lean_object* v_prio_1227_; lean_object* v___x_1228_; 
v_prio_1227_ = lean_ctor_get(v_t_1220_, 0);
lean_inc(v_prio_1227_);
lean_dec_ref_known(v_t_1220_, 1);
v___x_1228_ = lean_apply_1(v_k_1221_, v_prio_1227_);
return v___x_1228_;
}
case 8:
{
uint8_t v_post_1229_; uint8_t v_inv_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v_post_1229_ = lean_ctor_get_uint8(v_t_1220_, 0);
v_inv_1230_ = lean_ctor_get_uint8(v_t_1220_, 1);
lean_dec_ref_known(v_t_1220_, 0);
v___x_1231_ = lean_box(v_post_1229_);
v___x_1232_ = lean_box(v_inv_1230_);
v___x_1233_ = lean_apply_2(v_k_1221_, v___x_1231_, v___x_1232_);
return v___x_1233_;
}
case 10:
{
uint8_t v_fallback_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v_fallback_1234_ = lean_ctor_get_uint8(v_t_1220_, 0);
lean_dec_ref_known(v_t_1220_, 0);
v___x_1235_ = lean_box(v_fallback_1234_);
v___x_1236_ = lean_apply_1(v_k_1221_, v___x_1235_);
return v___x_1236_;
}
default: 
{
lean_dec(v_t_1220_);
return v_k_1221_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim(lean_object* v_motive_1237_, lean_object* v_ctorIdx_1238_, lean_object* v_t_1239_, lean_object* v_h_1240_, lean_object* v_k_1241_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1239_, v_k_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___boxed(lean_object* v_motive_1243_, lean_object* v_ctorIdx_1244_, lean_object* v_t_1245_, lean_object* v_h_1246_, lean_object* v_k_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lean_Meta_Grind_AttrKind_ctorElim(v_motive_1243_, v_ctorIdx_1244_, v_t_1245_, v_h_1246_, v_k_1247_);
lean_dec(v_ctorIdx_1244_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim___redArg(lean_object* v_t_1249_, lean_object* v_ematch_1250_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1249_, v_ematch_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim(lean_object* v_motive_1252_, lean_object* v_t_1253_, lean_object* v_h_1254_, lean_object* v_ematch_1255_){
_start:
{
lean_object* v___x_1256_; 
v___x_1256_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1253_, v_ematch_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim___redArg(lean_object* v_t_1257_, lean_object* v_cases_1258_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1257_, v_cases_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim(lean_object* v_motive_1260_, lean_object* v_t_1261_, lean_object* v_h_1262_, lean_object* v_cases_1263_){
_start:
{
lean_object* v___x_1264_; 
v___x_1264_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1261_, v_cases_1263_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim___redArg(lean_object* v_t_1265_, lean_object* v_intro_1266_){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1265_, v_intro_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim(lean_object* v_motive_1268_, lean_object* v_t_1269_, lean_object* v_h_1270_, lean_object* v_intro_1271_){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1269_, v_intro_1271_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim___redArg(lean_object* v_t_1273_, lean_object* v_infer_1274_){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1273_, v_infer_1274_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim(lean_object* v_motive_1276_, lean_object* v_t_1277_, lean_object* v_h_1278_, lean_object* v_infer_1279_){
_start:
{
lean_object* v___x_1280_; 
v___x_1280_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1277_, v_infer_1279_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim___redArg(lean_object* v_t_1281_, lean_object* v_ext_1282_){
_start:
{
lean_object* v___x_1283_; 
v___x_1283_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1281_, v_ext_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim(lean_object* v_motive_1284_, lean_object* v_t_1285_, lean_object* v_h_1286_, lean_object* v_ext_1287_){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1285_, v_ext_1287_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim___redArg(lean_object* v_t_1289_, lean_object* v_symbol_1290_){
_start:
{
lean_object* v___x_1291_; 
v___x_1291_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1289_, v_symbol_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim(lean_object* v_motive_1292_, lean_object* v_t_1293_, lean_object* v_h_1294_, lean_object* v_symbol_1295_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1293_, v_symbol_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim___redArg(lean_object* v_t_1297_, lean_object* v_inj_1298_){
_start:
{
lean_object* v___x_1299_; 
v___x_1299_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1297_, v_inj_1298_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim(lean_object* v_motive_1300_, lean_object* v_t_1301_, lean_object* v_h_1302_, lean_object* v_inj_1303_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1301_, v_inj_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim___redArg(lean_object* v_t_1305_, lean_object* v_funCC_1306_){
_start:
{
lean_object* v___x_1307_; 
v___x_1307_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1305_, v_funCC_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim(lean_object* v_motive_1308_, lean_object* v_t_1309_, lean_object* v_h_1310_, lean_object* v_funCC_1311_){
_start:
{
lean_object* v___x_1312_; 
v___x_1312_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1309_, v_funCC_1311_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim___redArg(lean_object* v_t_1313_, lean_object* v_norm_1314_){
_start:
{
lean_object* v___x_1315_; 
v___x_1315_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1313_, v_norm_1314_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim(lean_object* v_motive_1316_, lean_object* v_t_1317_, lean_object* v_h_1318_, lean_object* v_norm_1319_){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1317_, v_norm_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim___redArg(lean_object* v_t_1321_, lean_object* v_unfold_1322_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1321_, v_unfold_1322_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim(lean_object* v_motive_1324_, lean_object* v_t_1325_, lean_object* v_h_1326_, lean_object* v_unfold_1327_){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1325_, v_unfold_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim___redArg(lean_object* v_t_1329_, lean_object* v_homo_1330_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1329_, v_homo_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim(lean_object* v_motive_1332_, lean_object* v_t_1333_, lean_object* v_h_1334_, lean_object* v_homo_1335_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1333_, v_homo_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim___redArg(lean_object* v_t_1337_, lean_object* v_homoPred_1338_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1337_, v_homoPred_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim(lean_object* v_motive_1340_, lean_object* v_t_1341_, lean_object* v_h_1342_, lean_object* v_homoPred_1343_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_1341_, v_homoPred_1343_);
return v___x_1344_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0);
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
return v___x_1346_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1347_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0);
v___x_1348_ = lean_unsigned_to_nat(0u);
v___x_1349_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
lean_ctor_set(v___x_1349_, 2, v___x_1348_);
lean_ctor_set(v___x_1349_, 3, v___x_1348_);
lean_ctor_set(v___x_1349_, 4, v___x_1347_);
lean_ctor_set(v___x_1349_, 5, v___x_1347_);
lean_ctor_set(v___x_1349_, 6, v___x_1347_);
lean_ctor_set(v___x_1349_, 7, v___x_1347_);
lean_ctor_set(v___x_1349_, 8, v___x_1347_);
lean_ctor_set(v___x_1349_, 9, v___x_1347_);
lean_ctor_set(v___x_1349_, 10, v___x_1347_);
return v___x_1349_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1350_ = lean_unsigned_to_nat(32u);
v___x_1351_ = lean_mk_empty_array_with_capacity(v___x_1350_);
v___x_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
return v___x_1352_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1353_ = ((size_t)5ULL);
v___x_1354_ = lean_unsigned_to_nat(0u);
v___x_1355_ = lean_unsigned_to_nat(32u);
v___x_1356_ = lean_mk_empty_array_with_capacity(v___x_1355_);
v___x_1357_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2);
v___x_1358_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
lean_ctor_set(v___x_1358_, 1, v___x_1356_);
lean_ctor_set(v___x_1358_, 2, v___x_1354_);
lean_ctor_set(v___x_1358_, 3, v___x_1354_);
lean_ctor_set_usize(v___x_1358_, 4, v___x_1353_);
return v___x_1358_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1359_ = lean_box(1);
v___x_1360_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3);
v___x_1361_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0);
v___x_1362_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
lean_ctor_set(v___x_1362_, 1, v___x_1360_);
lean_ctor_set(v___x_1362_, 2, v___x_1359_);
return v___x_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(lean_object* v_msgData_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_){
_start:
{
lean_object* v___x_1367_; lean_object* v_toCold_1368_; lean_object* v_env_1369_; lean_object* v_options_1370_; uint8_t v___x_1371_; lean_object* v_env_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1367_ = lean_st_ref_get(v___y_1365_);
v_toCold_1368_ = lean_ctor_get(v___y_1364_, 0);
v_env_1369_ = lean_ctor_get(v___x_1367_, 0);
lean_inc_ref(v_env_1369_);
lean_dec(v___x_1367_);
v_options_1370_ = lean_ctor_get(v_toCold_1368_, 2);
v___x_1371_ = 0;
v_env_1372_ = l_Lean_Environment_setRecordingDeps(v_env_1369_, v___x_1371_);
v___x_1373_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1);
v___x_1374_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
lean_inc_ref(v_options_1370_);
v___x_1375_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1375_, 0, v_env_1372_);
lean_ctor_set(v___x_1375_, 1, v___x_1373_);
lean_ctor_set(v___x_1375_, 2, v___x_1374_);
lean_ctor_set(v___x_1375_, 3, v_options_1370_);
v___x_1376_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1375_);
lean_ctor_set(v___x_1376_, 1, v_msgData_1363_);
v___x_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___boxed(lean_object* v_msgData_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msgData_1378_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(lean_object* v_msg_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v_ref_1387_; lean_object* v___x_1388_; lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1397_; 
v_ref_1387_ = lean_ctor_get(v___y_1384_, 2);
v___x_1388_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msg_1383_, v___y_1384_, v___y_1385_);
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1391_ = v___x_1388_;
v_isShared_1392_ = v_isSharedCheck_1397_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1388_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1397_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1393_; lean_object* v___x_1395_; 
lean_inc(v_ref_1387_);
v___x_1393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1393_, 0, v_ref_1387_);
lean_ctor_set(v___x_1393_, 1, v_a_1389_);
if (v_isShared_1392_ == 0)
{
lean_ctor_set_tag(v___x_1391_, 1);
lean_ctor_set(v___x_1391_, 0, v___x_1393_);
v___x_1395_ = v___x_1391_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1393_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg___boxed(lean_object* v_msg_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_1398_, v___y_1399_, v___y_1400_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(lean_object* v_ref_1403_, lean_object* v_msg_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v_toCold_1408_; lean_object* v_currRecDepth_1409_; lean_object* v_ref_1410_; uint16_t v_optionFlags_1411_; uint8_t v_suppressElabErrors_1412_; uint8_t v_checkDeprecated_1413_; uint8_t v_isRecordingDeps_1414_; lean_object* v_ref_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v_toCold_1408_ = lean_ctor_get(v___y_1405_, 0);
v_currRecDepth_1409_ = lean_ctor_get(v___y_1405_, 1);
v_ref_1410_ = lean_ctor_get(v___y_1405_, 2);
v_optionFlags_1411_ = lean_ctor_get_uint16(v___y_1405_, sizeof(void*)*3);
v_suppressElabErrors_1412_ = lean_ctor_get_uint8(v___y_1405_, sizeof(void*)*3 + 2);
v_checkDeprecated_1413_ = lean_ctor_get_uint8(v___y_1405_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1414_ = lean_ctor_get_uint8(v___y_1405_, sizeof(void*)*3 + 4);
v_ref_1415_ = l_Lean_replaceRef(v_ref_1403_, v_ref_1410_);
lean_inc(v_currRecDepth_1409_);
lean_inc_ref(v_toCold_1408_);
v___x_1416_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1416_, 0, v_toCold_1408_);
lean_ctor_set(v___x_1416_, 1, v_currRecDepth_1409_);
lean_ctor_set(v___x_1416_, 2, v_ref_1415_);
lean_ctor_set_uint16(v___x_1416_, sizeof(void*)*3, v_optionFlags_1411_);
lean_ctor_set_uint8(v___x_1416_, sizeof(void*)*3 + 2, v_suppressElabErrors_1412_);
lean_ctor_set_uint8(v___x_1416_, sizeof(void*)*3 + 3, v_checkDeprecated_1413_);
lean_ctor_set_uint8(v___x_1416_, sizeof(void*)*3 + 4, v_isRecordingDeps_1414_);
v___x_1417_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_1404_, v___x_1416_, v___y_1406_);
lean_dec_ref_known(v___x_1416_, 3);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg___boxed(lean_object* v_ref_1418_, lean_object* v_msg_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v_ref_1418_, v_msg_1419_, v___y_1420_, v___y_1421_);
lean_dec(v___y_1421_);
lean_dec_ref(v___y_1420_);
lean_dec(v_ref_1418_);
return v_res_1423_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4(void){
_start:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1432_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__3));
v___x_1433_ = l_Lean_stringToMessageData(v___x_1432_);
return v___x_1433_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6(void){
_start:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1435_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__5));
v___x_1436_ = l_Lean_stringToMessageData(v___x_1435_);
return v___x_1436_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__54(void){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__53));
v___x_1577_ = l_Lean_stringToMessageData(v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object* v_stx_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v___x_1608_; uint8_t v___x_1609_; 
v___x_1608_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__2));
lean_inc(v_stx_1604_);
v___x_1609_ = l_Lean_Syntax_isOfKind(v_stx_1604_, v___x_1608_);
if (v___x_1609_ == 0)
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1610_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1611_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1610_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
v___x_1613_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
v___x_1615_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1614_, v_a_1605_, v_a_1606_);
return v___x_1615_;
}
else
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1616_ = lean_unsigned_to_nat(0u);
v___x_1617_ = l_Lean_Syntax_getArg(v_stx_1604_, v___x_1616_);
v___x_1618_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__8));
lean_inc(v___x_1617_);
v___x_1619_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; uint8_t v___x_1621_; 
v___x_1620_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__10));
lean_inc(v___x_1617_);
v___x_1621_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1620_);
if (v___x_1621_ == 0)
{
lean_object* v___x_1622_; uint8_t v___x_1623_; 
v___x_1622_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__12));
lean_inc(v___x_1617_);
v___x_1623_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1622_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; uint8_t v___x_1625_; 
v___x_1624_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__14));
lean_inc(v___x_1617_);
v___x_1625_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1624_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1626_; uint8_t v___x_1627_; 
v___x_1626_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__16));
lean_inc(v___x_1617_);
v___x_1627_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1626_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; uint8_t v___x_1629_; 
v___x_1628_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__18));
lean_inc(v___x_1617_);
v___x_1629_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1628_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1630_; uint8_t v___x_1631_; 
v___x_1630_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__20));
lean_inc(v___x_1617_);
v___x_1631_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1630_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; uint8_t v___x_1633_; 
v___x_1632_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__22));
lean_inc(v___x_1617_);
v___x_1633_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1632_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1634_; uint8_t v___x_1635_; 
v___x_1634_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__24));
lean_inc(v___x_1617_);
v___x_1635_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1634_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1636_; uint8_t v___x_1637_; 
v___x_1636_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__26));
lean_inc(v___x_1617_);
v___x_1637_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1636_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; uint8_t v___x_1639_; 
v___x_1638_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__28));
lean_inc(v___x_1617_);
v___x_1639_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1638_);
if (v___x_1639_ == 0)
{
lean_object* v___x_1640_; uint8_t v___x_1641_; 
v___x_1640_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__30));
lean_inc(v___x_1617_);
v___x_1641_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1640_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1642_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__32));
lean_inc(v___x_1617_);
v___x_1643_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1642_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; uint8_t v___x_1645_; 
v___x_1644_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__34));
lean_inc(v___x_1617_);
v___x_1645_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1644_);
if (v___x_1645_ == 0)
{
lean_object* v___x_1646_; uint8_t v___x_1647_; 
v___x_1646_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__36));
lean_inc(v___x_1617_);
v___x_1647_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1646_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; uint8_t v___x_1649_; 
v___x_1648_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__38));
lean_inc(v___x_1617_);
v___x_1649_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1648_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1650_; uint8_t v___x_1651_; 
v___x_1650_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__40));
lean_inc(v___x_1617_);
v___x_1651_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1650_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1652_; uint8_t v___x_1653_; 
v___x_1652_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__42));
lean_inc(v___x_1617_);
v___x_1653_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1652_);
if (v___x_1653_ == 0)
{
lean_object* v___x_1654_; uint8_t v___x_1655_; 
v___x_1654_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__44));
lean_inc(v___x_1617_);
v___x_1655_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1654_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; uint8_t v___x_1657_; 
v___x_1656_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__46));
lean_inc(v___x_1617_);
v___x_1657_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1656_);
if (v___x_1657_ == 0)
{
lean_object* v___x_1658_; uint8_t v___x_1659_; 
v___x_1658_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__48));
lean_inc(v___x_1617_);
v___x_1659_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1658_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; uint8_t v___x_1661_; 
v___x_1660_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__50));
lean_inc(v___x_1617_);
v___x_1661_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1660_);
if (v___x_1661_ == 0)
{
lean_object* v___x_1662_; uint8_t v___x_1663_; 
v___x_1662_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__52));
lean_inc(v___x_1617_);
v___x_1663_ = l_Lean_Syntax_isOfKind(v___x_1617_, v___x_1662_);
if (v___x_1663_ == 0)
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
lean_dec(v___x_1617_);
v___x_1664_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1665_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1666_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1668_, v_a_1605_, v_a_1606_);
return v___x_1669_;
}
else
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
lean_dec(v_stx_1604_);
v___x_1670_ = lean_unsigned_to_nat(1u);
v___x_1671_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1670_);
lean_dec(v___x_1617_);
v___x_1672_ = l_Lean_Syntax_isNatLit_x3f(v___x_1671_);
if (lean_obj_tag(v___x_1672_) == 1)
{
lean_object* v_val_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1681_; 
lean_dec(v___x_1671_);
v_val_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1681_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_val_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1681_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
lean_ctor_set_tag(v___x_1675_, 5);
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_val_1673_);
v___x_1678_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
lean_object* v___x_1679_; 
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
return v___x_1679_;
}
}
}
else
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
lean_dec(v___x_1672_);
v___x_1682_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__54, &l_Lean_Meta_Grind_getAttrKindCore___closed__54_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__54);
v___x_1683_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v___x_1671_, v___x_1682_, v_a_1605_, v_a_1606_);
lean_dec(v___x_1671_);
return v___x_1683_;
}
}
}
else
{
lean_object* v___x_1684_; lean_object* v___x_1685_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1684_ = lean_box(11);
v___x_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
return v___x_1685_;
}
}
else
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1686_ = lean_alloc_ctor(10, 0, 1);
lean_ctor_set_uint8(v___x_1686_, 0, v___x_1659_);
v___x_1687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1686_);
return v___x_1687_;
}
}
else
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1688_ = lean_alloc_ctor(10, 0, 1);
lean_ctor_set_uint8(v___x_1688_, 0, v___x_1655_);
v___x_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
return v___x_1689_;
}
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1690_ = lean_box(9);
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
return v___x_1691_;
}
}
else
{
lean_object* v___x_1692_; lean_object* v___x_1693_; uint8_t v___x_1694_; 
v___x_1692_ = lean_unsigned_to_nat(1u);
v___x_1693_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1692_);
lean_inc(v___x_1693_);
v___x_1694_ = l_Lean_Syntax_matchesNull(v___x_1693_, v___x_1616_);
if (v___x_1694_ == 0)
{
uint8_t v___x_1695_; 
lean_inc(v___x_1693_);
v___x_1695_ = l_Lean_Syntax_matchesNull(v___x_1693_, v___x_1692_);
if (v___x_1695_ == 0)
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
lean_dec(v___x_1693_);
lean_dec(v___x_1617_);
v___x_1696_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1697_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1700_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1698_);
lean_ctor_set(v___x_1700_, 1, v___x_1699_);
v___x_1701_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1700_, v_a_1605_, v_a_1606_);
return v___x_1701_;
}
else
{
lean_object* v___x_1702_; lean_object* v___x_1703_; uint8_t v___x_1704_; 
v___x_1702_ = l_Lean_Syntax_getArg(v___x_1693_, v___x_1616_);
lean_dec(v___x_1693_);
v___x_1703_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__56));
lean_inc(v___x_1702_);
v___x_1704_ = l_Lean_Syntax_isOfKind(v___x_1702_, v___x_1703_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; uint8_t v___x_1706_; 
v___x_1705_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__58));
v___x_1706_ = l_Lean_Syntax_isOfKind(v___x_1702_, v___x_1705_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
lean_dec(v___x_1617_);
v___x_1707_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1708_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1709_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1707_);
lean_ctor_set(v___x_1709_, 1, v___x_1708_);
v___x_1710_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1709_);
lean_ctor_set(v___x_1711_, 1, v___x_1710_);
v___x_1712_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1711_, v_a_1605_, v_a_1606_);
return v___x_1712_;
}
else
{
lean_object* v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v___x_1713_ = lean_unsigned_to_nat(2u);
v___x_1714_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1713_);
lean_dec(v___x_1617_);
lean_inc(v___x_1714_);
v___x_1715_ = l_Lean_Syntax_matchesNull(v___x_1714_, v___x_1616_);
if (v___x_1715_ == 0)
{
uint8_t v___x_1716_; 
v___x_1716_ = l_Lean_Syntax_matchesNull(v___x_1714_, v___x_1692_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1717_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1718_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1717_);
lean_ctor_set(v___x_1719_, 1, v___x_1718_);
v___x_1720_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1719_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v___x_1722_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1721_, v_a_1605_, v_a_1606_);
return v___x_1722_;
}
else
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
lean_dec(v_stx_1604_);
v___x_1723_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_1723_, 0, v___x_1715_);
lean_ctor_set_uint8(v___x_1723_, 1, v___x_1716_);
v___x_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1723_);
return v___x_1724_;
}
}
else
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
lean_dec(v___x_1714_);
lean_dec(v_stx_1604_);
v___x_1725_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_1725_, 0, v___x_1704_);
lean_ctor_set_uint8(v___x_1725_, 1, v___x_1704_);
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
}
else
{
lean_object* v___x_1727_; lean_object* v___x_1728_; uint8_t v___x_1729_; 
lean_dec(v___x_1702_);
v___x_1727_ = lean_unsigned_to_nat(2u);
v___x_1728_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1727_);
lean_dec(v___x_1617_);
lean_inc(v___x_1728_);
v___x_1729_ = l_Lean_Syntax_matchesNull(v___x_1728_, v___x_1616_);
if (v___x_1729_ == 0)
{
uint8_t v___x_1730_; 
v___x_1730_ = l_Lean_Syntax_matchesNull(v___x_1728_, v___x_1692_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1731_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1732_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1731_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
v___x_1734_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1733_);
lean_ctor_set(v___x_1735_, 1, v___x_1734_);
v___x_1736_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1735_, v_a_1605_, v_a_1606_);
return v___x_1736_;
}
else
{
lean_object* v___x_1737_; lean_object* v___x_1738_; 
lean_dec(v_stx_1604_);
v___x_1737_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_1737_, 0, v___x_1730_);
lean_ctor_set_uint8(v___x_1737_, 1, v___x_1730_);
v___x_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
return v___x_1738_;
}
}
else
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
lean_dec(v___x_1728_);
lean_dec(v_stx_1604_);
v___x_1739_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_1739_, 0, v___x_1729_);
lean_ctor_set_uint8(v___x_1739_, 1, v___x_1694_);
v___x_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1739_);
return v___x_1740_;
}
}
}
}
else
{
lean_object* v___x_1741_; lean_object* v___x_1742_; uint8_t v___x_1743_; 
lean_dec(v___x_1693_);
v___x_1741_ = lean_unsigned_to_nat(2u);
v___x_1742_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1741_);
lean_dec(v___x_1617_);
lean_inc(v___x_1742_);
v___x_1743_ = l_Lean_Syntax_matchesNull(v___x_1742_, v___x_1616_);
if (v___x_1743_ == 0)
{
uint8_t v___x_1744_; 
v___x_1744_ = l_Lean_Syntax_matchesNull(v___x_1742_, v___x_1692_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1745_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1746_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1745_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
v___x_1748_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1747_);
lean_ctor_set(v___x_1749_, 1, v___x_1748_);
v___x_1750_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1749_, v_a_1605_, v_a_1606_);
return v___x_1750_;
}
else
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_dec(v_stx_1604_);
v___x_1751_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_1751_, 0, v___x_1744_);
lean_ctor_set_uint8(v___x_1751_, 1, v___x_1744_);
v___x_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1751_);
return v___x_1752_;
}
}
else
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
lean_dec(v___x_1742_);
lean_dec(v_stx_1604_);
v___x_1753_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_1753_, 0, v___x_1743_);
lean_ctor_set_uint8(v___x_1753_, 1, v___x_1651_);
v___x_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
}
}
else
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1755_ = lean_box(7);
v___x_1756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
return v___x_1756_;
}
}
else
{
lean_object* v___x_1757_; lean_object* v___x_1758_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1757_ = lean_box(6);
v___x_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1757_);
return v___x_1758_;
}
}
else
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1759_ = lean_box(4);
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
return v___x_1760_;
}
}
else
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1761_ = lean_box(2);
v___x_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1761_);
return v___x_1762_;
}
}
else
{
lean_object* v___x_1763_; lean_object* v___x_1764_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1763_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1763_, 0, v___x_1643_);
v___x_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
return v___x_1764_;
}
}
else
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1765_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1765_, 0, v___x_1639_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1765_);
return v___x_1766_;
}
}
else
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1767_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_1767_, 0, v___x_1639_);
v___x_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1767_);
v___x_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
return v___x_1769_;
}
}
else
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1770_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__59));
v___x_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1770_);
return v___x_1771_;
}
}
else
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1772_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__60));
v___x_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1772_);
return v___x_1773_;
}
}
else
{
lean_object* v___x_1774_; lean_object* v___x_1775_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1774_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__61));
v___x_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1774_);
return v___x_1775_;
}
}
else
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1776_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__62));
v___x_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
return v___x_1777_;
}
}
else
{
lean_object* v___x_1778_; lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1778_ = lean_unsigned_to_nat(3u);
v___x_1779_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1778_);
lean_dec(v___x_1617_);
lean_inc(v___x_1779_);
v___x_1780_ = l_Lean_Syntax_matchesNull(v___x_1779_, v___x_1616_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; uint8_t v___x_1782_; 
v___x_1781_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1779_);
v___x_1782_ = l_Lean_Syntax_matchesNull(v___x_1779_, v___x_1781_);
if (v___x_1782_ == 0)
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
lean_dec(v___x_1779_);
v___x_1783_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1784_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1783_);
lean_ctor_set(v___x_1785_, 1, v___x_1784_);
v___x_1786_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1785_);
lean_ctor_set(v___x_1787_, 1, v___x_1786_);
v___x_1788_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1787_, v_a_1605_, v_a_1606_);
return v___x_1788_;
}
else
{
lean_object* v___x_1789_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v___x_1789_ = l_Lean_Syntax_getArg(v___x_1779_, v___x_1616_);
lean_dec(v___x_1779_);
v___x_1790_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__28));
v___x_1791_ = l_Lean_Syntax_isOfKind(v___x_1789_, v___x_1790_);
if (v___x_1791_ == 0)
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1792_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1793_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1794_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1792_);
lean_ctor_set(v___x_1794_, 1, v___x_1793_);
v___x_1795_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1794_);
lean_ctor_set(v___x_1796_, 1, v___x_1795_);
v___x_1797_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1796_, v_a_1605_, v_a_1606_);
return v___x_1797_;
}
else
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
lean_dec(v_stx_1604_);
v___x_1798_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1798_, 0, v___x_1791_);
v___x_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1798_);
v___x_1800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1799_);
return v___x_1800_;
}
}
}
else
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
lean_dec(v___x_1779_);
lean_dec(v_stx_1604_);
v___x_1801_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1801_, 0, v___x_1627_);
v___x_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1801_);
v___x_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
return v___x_1803_;
}
}
}
else
{
lean_object* v___x_1804_; lean_object* v___x_1805_; uint8_t v___x_1806_; 
v___x_1804_ = lean_unsigned_to_nat(2u);
v___x_1805_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1804_);
lean_dec(v___x_1617_);
lean_inc(v___x_1805_);
v___x_1806_ = l_Lean_Syntax_matchesNull(v___x_1805_, v___x_1616_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; uint8_t v___x_1808_; 
v___x_1807_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1805_);
v___x_1808_ = l_Lean_Syntax_matchesNull(v___x_1805_, v___x_1807_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
lean_dec(v___x_1805_);
v___x_1809_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1810_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1809_);
lean_ctor_set(v___x_1811_, 1, v___x_1810_);
v___x_1812_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1811_);
lean_ctor_set(v___x_1813_, 1, v___x_1812_);
v___x_1814_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1813_, v_a_1605_, v_a_1606_);
return v___x_1814_;
}
else
{
lean_object* v___x_1815_; lean_object* v___x_1816_; uint8_t v___x_1817_; 
v___x_1815_ = l_Lean_Syntax_getArg(v___x_1805_, v___x_1616_);
lean_dec(v___x_1805_);
v___x_1816_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__28));
v___x_1817_ = l_Lean_Syntax_isOfKind(v___x_1815_, v___x_1816_);
if (v___x_1817_ == 0)
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1818_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1819_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1820_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1818_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
v___x_1821_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1820_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
v___x_1823_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1822_, v_a_1605_, v_a_1606_);
return v___x_1823_;
}
else
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
lean_dec(v_stx_1604_);
v___x_1824_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1824_, 0, v___x_1817_);
v___x_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
v___x_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
return v___x_1826_;
}
}
}
else
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
lean_dec(v___x_1805_);
lean_dec(v_stx_1604_);
v___x_1827_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1827_, 0, v___x_1625_);
v___x_1828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
v___x_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
return v___x_1829_;
}
}
}
else
{
lean_object* v___x_1830_; lean_object* v___x_1831_; uint8_t v___x_1832_; 
v___x_1830_ = lean_unsigned_to_nat(1u);
v___x_1831_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1830_);
lean_dec(v___x_1617_);
lean_inc(v___x_1831_);
v___x_1832_ = l_Lean_Syntax_matchesNull(v___x_1831_, v___x_1616_);
if (v___x_1832_ == 0)
{
uint8_t v___x_1833_; 
lean_inc(v___x_1831_);
v___x_1833_ = l_Lean_Syntax_matchesNull(v___x_1831_, v___x_1830_);
if (v___x_1833_ == 0)
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
lean_dec(v___x_1831_);
v___x_1834_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1835_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1836_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1834_);
lean_ctor_set(v___x_1836_, 1, v___x_1835_);
v___x_1837_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1836_);
lean_ctor_set(v___x_1838_, 1, v___x_1837_);
v___x_1839_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1838_, v_a_1605_, v_a_1606_);
return v___x_1839_;
}
else
{
lean_object* v___x_1840_; lean_object* v___x_1841_; uint8_t v___x_1842_; 
v___x_1840_ = l_Lean_Syntax_getArg(v___x_1831_, v___x_1616_);
lean_dec(v___x_1831_);
v___x_1841_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__28));
v___x_1842_ = l_Lean_Syntax_isOfKind(v___x_1840_, v___x_1841_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1843_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1844_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1843_);
lean_ctor_set(v___x_1845_, 1, v___x_1844_);
v___x_1846_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1845_);
lean_ctor_set(v___x_1847_, 1, v___x_1846_);
v___x_1848_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1847_, v_a_1605_, v_a_1606_);
return v___x_1848_;
}
else
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
lean_dec(v_stx_1604_);
v___x_1849_ = lean_alloc_ctor(5, 0, 1);
lean_ctor_set_uint8(v___x_1849_, 0, v___x_1842_);
v___x_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
v___x_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
return v___x_1851_;
}
}
}
else
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
lean_dec(v___x_1831_);
lean_dec(v_stx_1604_);
v___x_1852_ = lean_alloc_ctor(5, 0, 1);
lean_ctor_set_uint8(v___x_1852_, 0, v___x_1623_);
v___x_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
return v___x_1854_;
}
}
}
else
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_dec(v___x_1617_);
lean_dec(v_stx_1604_);
v___x_1855_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__63));
v___x_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1855_);
return v___x_1856_;
}
}
else
{
lean_object* v___x_1857_; lean_object* v___x_1858_; uint8_t v___x_1859_; 
v___x_1857_ = lean_unsigned_to_nat(1u);
v___x_1858_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1857_);
lean_dec(v___x_1617_);
lean_inc(v___x_1858_);
v___x_1859_ = l_Lean_Syntax_matchesNull(v___x_1858_, v___x_1616_);
if (v___x_1859_ == 0)
{
uint8_t v___x_1860_; 
lean_inc(v___x_1858_);
v___x_1860_ = l_Lean_Syntax_matchesNull(v___x_1858_, v___x_1857_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
lean_dec(v___x_1858_);
v___x_1861_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1862_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1863_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1861_);
lean_ctor_set(v___x_1863_, 1, v___x_1862_);
v___x_1864_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1865_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1863_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
v___x_1866_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1865_, v_a_1605_, v_a_1606_);
return v___x_1866_;
}
else
{
lean_object* v___x_1867_; lean_object* v___x_1868_; uint8_t v___x_1869_; 
v___x_1867_ = l_Lean_Syntax_getArg(v___x_1858_, v___x_1616_);
lean_dec(v___x_1858_);
v___x_1868_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__28));
v___x_1869_ = l_Lean_Syntax_isOfKind(v___x_1867_, v___x_1868_);
if (v___x_1869_ == 0)
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1870_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1871_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1872_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1870_);
lean_ctor_set(v___x_1872_, 1, v___x_1871_);
v___x_1873_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1874_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1872_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
v___x_1875_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1874_, v_a_1605_, v_a_1606_);
return v___x_1875_;
}
else
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
lean_dec(v_stx_1604_);
v___x_1876_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_1876_, 0, v___x_1869_);
v___x_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1876_);
v___x_1878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
return v___x_1878_;
}
}
}
else
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
lean_dec(v___x_1858_);
lean_dec(v_stx_1604_);
v___x_1879_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_1879_, 0, v___x_1619_);
v___x_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
v___x_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1880_);
return v___x_1881_;
}
}
}
else
{
lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; 
v___x_1882_ = lean_unsigned_to_nat(1u);
v___x_1883_ = l_Lean_Syntax_getArg(v___x_1617_, v___x_1882_);
lean_dec(v___x_1617_);
lean_inc(v___x_1883_);
v___x_1884_ = l_Lean_Syntax_matchesNull(v___x_1883_, v___x_1616_);
if (v___x_1884_ == 0)
{
uint8_t v___x_1885_; 
lean_inc(v___x_1883_);
v___x_1885_ = l_Lean_Syntax_matchesNull(v___x_1883_, v___x_1882_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
lean_dec(v___x_1883_);
v___x_1886_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1887_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1886_);
lean_ctor_set(v___x_1888_, 1, v___x_1887_);
v___x_1889_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1888_);
lean_ctor_set(v___x_1890_, 1, v___x_1889_);
v___x_1891_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1890_, v_a_1605_, v_a_1606_);
return v___x_1891_;
}
else
{
lean_object* v___x_1892_; lean_object* v___x_1893_; uint8_t v___x_1894_; 
v___x_1892_ = l_Lean_Syntax_getArg(v___x_1883_, v___x_1616_);
lean_dec(v___x_1883_);
v___x_1893_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__28));
v___x_1894_ = l_Lean_Syntax_isOfKind(v___x_1892_, v___x_1893_);
if (v___x_1894_ == 0)
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1895_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__4, &l_Lean_Meta_Grind_getAttrKindCore___closed__4_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__4);
v___x_1896_ = l_Lean_MessageData_ofSyntax(v_stx_1604_);
v___x_1897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1895_);
lean_ctor_set(v___x_1897_, 1, v___x_1896_);
v___x_1898_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__6, &l_Lean_Meta_Grind_getAttrKindCore___closed__6_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__6);
v___x_1899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1897_);
lean_ctor_set(v___x_1899_, 1, v___x_1898_);
v___x_1900_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1899_, v_a_1605_, v_a_1606_);
return v___x_1900_;
}
else
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
lean_dec(v_stx_1604_);
v___x_1901_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1901_, 0, v___x_1894_);
v___x_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
return v___x_1903_;
}
}
}
else
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
lean_dec(v___x_1883_);
lean_dec(v_stx_1604_);
v___x_1904_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__65));
v___x_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1904_);
return v___x_1905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore___boxed(lean_object* v_stx_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_Meta_Grind_getAttrKindCore(v_stx_1906_, v_a_1907_, v_a_1908_);
lean_dec(v_a_1908_);
lean_dec_ref(v_a_1907_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(lean_object* v_00_u03b1_1911_, lean_object* v_msg_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_1912_, v___y_1913_, v___y_1914_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___boxed(lean_object* v_00_u03b1_1917_, lean_object* v_msg_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(v_00_u03b1_1917_, v_msg_1918_, v___y_1919_, v___y_1920_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(lean_object* v_00_u03b1_1923_, lean_object* v_ref_1924_, lean_object* v_msg_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v___x_1929_; 
v___x_1929_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v_ref_1924_, v_msg_1925_, v___y_1926_, v___y_1927_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___boxed(lean_object* v_00_u03b1_1930_, lean_object* v_ref_1931_, lean_object* v_msg_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(v_00_u03b1_1930_, v_ref_1931_, v_msg_1932_, v___y_1933_, v___y_1934_);
lean_dec(v___y_1934_);
lean_dec_ref(v___y_1933_);
lean_dec(v_ref_1931_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt(lean_object* v_stx_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v___x_1941_; lean_object* v___x_1942_; uint8_t v___x_1943_; 
v___x_1941_ = lean_unsigned_to_nat(1u);
v___x_1942_ = l_Lean_Syntax_getArg(v_stx_1937_, v___x_1941_);
v___x_1943_ = l_Lean_Syntax_isNone(v___x_1942_);
if (v___x_1943_ == 0)
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1944_ = lean_unsigned_to_nat(0u);
v___x_1945_ = l_Lean_Syntax_getArg(v___x_1942_, v___x_1944_);
lean_dec(v___x_1942_);
v___x_1946_ = l_Lean_Meta_Grind_getAttrKindCore(v___x_1945_, v_a_1938_, v_a_1939_);
return v___x_1946_;
}
else
{
lean_object* v___x_1947_; lean_object* v___x_1948_; 
lean_dec(v___x_1942_);
v___x_1947_ = lean_box(3);
v___x_1948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1947_);
return v___x_1948_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt___boxed(lean_object* v_stx_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Lean_Meta_Grind_getAttrKindFromOpt(v_stx_1949_, v_a_1950_, v_a_1951_);
lean_dec(v_a_1951_);
lean_dec_ref(v_a_1950_);
lean_dec(v_stx_1949_);
return v_res_1953_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1(void){
_start:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1955_ = ((lean_object*)(l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0));
v___x_1956_ = l_Lean_stringToMessageData(v___x_1955_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object* v_a_1957_, lean_object* v_a_1958_){
_start:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1960_ = lean_obj_once(&l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1, &l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1_once, _init_l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1);
v___x_1961_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_1960_, v_a_1957_, v_a_1958_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___boxed(lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v_a_1962_, v_a_1963_);
lean_dec(v_a_1963_);
lean_dec_ref(v_a_1962_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier(lean_object* v_00_u03b1_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_){
_start:
{
lean_object* v___x_1970_; 
v___x_1970_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v_a_1967_, v_a_1968_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___boxed(lean_object* v_00_u03b1_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l_Lean_Meta_Grind_throwInvalidUsrModifier(v_00_u03b1_1971_, v_a_1972_, v_a_1973_);
lean_dec(v_a_1973_);
lean_dec_ref(v_a_1972_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(lean_object* v_ext_1976_, lean_object* v_b_1977_, uint8_t v_kind_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v_toCold_1982_; lean_object* v_currNamespace_1983_; lean_object* v___x_1984_; lean_object* v_env_1985_; lean_object* v_nextMacroScope_1986_; lean_object* v_ngen_1987_; lean_object* v_auxDeclNGen_1988_; lean_object* v_traceState_1989_; lean_object* v_recordedDeps_1990_; lean_object* v_messages_1991_; lean_object* v_infoState_1992_; lean_object* v_snapshotTasks_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2005_; 
v_toCold_1982_ = lean_ctor_get(v___y_1979_, 0);
v_currNamespace_1983_ = lean_ctor_get(v_toCold_1982_, 4);
v___x_1984_ = lean_st_ref_take(v___y_1980_);
v_env_1985_ = lean_ctor_get(v___x_1984_, 0);
v_nextMacroScope_1986_ = lean_ctor_get(v___x_1984_, 1);
v_ngen_1987_ = lean_ctor_get(v___x_1984_, 2);
v_auxDeclNGen_1988_ = lean_ctor_get(v___x_1984_, 3);
v_traceState_1989_ = lean_ctor_get(v___x_1984_, 4);
v_recordedDeps_1990_ = lean_ctor_get(v___x_1984_, 6);
v_messages_1991_ = lean_ctor_get(v___x_1984_, 7);
v_infoState_1992_ = lean_ctor_get(v___x_1984_, 8);
v_snapshotTasks_1993_ = lean_ctor_get(v___x_1984_, 9);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_2005_ == 0)
{
lean_object* v_unused_2006_; 
v_unused_2006_ = lean_ctor_get(v___x_1984_, 5);
lean_dec(v_unused_2006_);
v___x_1995_ = v___x_1984_;
v_isShared_1996_ = v_isSharedCheck_2005_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_snapshotTasks_1993_);
lean_inc(v_infoState_1992_);
lean_inc(v_messages_1991_);
lean_inc(v_recordedDeps_1990_);
lean_inc(v_traceState_1989_);
lean_inc(v_auxDeclNGen_1988_);
lean_inc(v_ngen_1987_);
lean_inc(v_nextMacroScope_1986_);
lean_inc(v_env_1985_);
lean_dec(v___x_1984_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2005_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2001_; 
v___x_1997_ = lean_box(0);
lean_inc(v_currNamespace_1983_);
v___x_1998_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1985_, v_ext_1976_, v_b_1977_, v_kind_1978_, v_currNamespace_1983_);
v___x_1999_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 5, v___x_1999_);
lean_ctor_set(v___x_1995_, 0, v___x_1998_);
v___x_2001_ = v___x_1995_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v___x_1998_);
lean_ctor_set(v_reuseFailAlloc_2004_, 1, v_nextMacroScope_1986_);
lean_ctor_set(v_reuseFailAlloc_2004_, 2, v_ngen_1987_);
lean_ctor_set(v_reuseFailAlloc_2004_, 3, v_auxDeclNGen_1988_);
lean_ctor_set(v_reuseFailAlloc_2004_, 4, v_traceState_1989_);
lean_ctor_set(v_reuseFailAlloc_2004_, 5, v___x_1999_);
lean_ctor_set(v_reuseFailAlloc_2004_, 6, v_recordedDeps_1990_);
lean_ctor_set(v_reuseFailAlloc_2004_, 7, v_messages_1991_);
lean_ctor_set(v_reuseFailAlloc_2004_, 8, v_infoState_1992_);
lean_ctor_set(v_reuseFailAlloc_2004_, 9, v_snapshotTasks_1993_);
v___x_2001_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2002_ = lean_st_ref_put(v___y_1980_, v___x_2001_);
v___x_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2003_, 0, v___x_1997_);
return v___x_2003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___boxed(lean_object* v_ext_2007_, lean_object* v_b_2008_, lean_object* v_kind_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
uint8_t v_kind_boxed_2013_; lean_object* v_res_2014_; 
v_kind_boxed_2013_ = lean_unbox(v_kind_2009_);
v_res_2014_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_2007_, v_b_2008_, v_kind_boxed_2013_, v___y_2010_, v___y_2011_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(lean_object* v_00_u03b1_2015_, lean_object* v_00_u03b2_2016_, lean_object* v_00_u03c3_2017_, lean_object* v_ext_2018_, lean_object* v_b_2019_, uint8_t v_kind_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v___x_2024_; 
v___x_2024_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_2018_, v_b_2019_, v_kind_2020_, v___y_2021_, v___y_2022_);
return v___x_2024_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___boxed(lean_object* v_00_u03b1_2025_, lean_object* v_00_u03b2_2026_, lean_object* v_00_u03c3_2027_, lean_object* v_ext_2028_, lean_object* v_b_2029_, lean_object* v_kind_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
uint8_t v_kind_boxed_2034_; lean_object* v_res_2035_; 
v_kind_boxed_2034_ = lean_unbox(v_kind_2030_);
v_res_2035_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(v_00_u03b1_2025_, v_00_u03b2_2026_, v_00_u03c3_2027_, v_ext_2028_, v_b_2029_, v_kind_boxed_2034_, v___y_2031_, v___y_2032_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(lean_object* v_ext_2036_, lean_object* v_declName_2037_, uint8_t v_eager_2038_, uint8_t v_attrKind_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v___x_2043_; 
lean_inc(v_declName_2037_);
v___x_2043_ = l_Lean_Meta_Grind_validateCasesAttr(v_declName_2037_, v_eager_2038_, v_a_2040_, v_a_2041_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
lean_dec_ref_known(v___x_2043_, 1);
v___x_2044_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_2044_, 0, v_declName_2037_);
lean_ctor_set_uint8(v___x_2044_, sizeof(void*)*1, v_eager_2038_);
v___x_2045_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_2036_, v___x_2044_, v_attrKind_2039_, v_a_2040_, v_a_2041_);
return v___x_2045_;
}
else
{
lean_dec(v_declName_2037_);
lean_dec_ref(v_ext_2036_);
return v___x_2043_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr___boxed(lean_object* v_ext_2046_, lean_object* v_declName_2047_, lean_object* v_eager_2048_, lean_object* v_attrKind_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_){
_start:
{
uint8_t v_eager_boxed_2053_; uint8_t v_attrKind_boxed_2054_; lean_object* v_res_2055_; 
v_eager_boxed_2053_ = lean_unbox(v_eager_2048_);
v_attrKind_boxed_2054_ = lean_unbox(v_attrKind_2049_);
v_res_2055_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_2046_, v_declName_2047_, v_eager_boxed_2053_, v_attrKind_boxed_2054_, v_a_2050_, v_a_2051_);
lean_dec(v_a_2051_);
lean_dec_ref(v_a_2050_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(lean_object* v_ext_2056_, lean_object* v_declName_2057_, uint8_t v_attrKind_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_){
_start:
{
lean_object* v___x_2062_; 
lean_inc(v_declName_2057_);
v___x_2062_ = l_Lean_Meta_Grind_validateExtAttr(v_declName_2057_, v_a_2059_, v_a_2060_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2070_; 
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2070_ == 0)
{
lean_object* v_unused_2071_; 
v_unused_2071_ = lean_ctor_get(v___x_2062_, 0);
lean_dec(v_unused_2071_);
v___x_2064_ = v___x_2062_;
v_isShared_2065_ = v_isSharedCheck_2070_;
goto v_resetjp_2063_;
}
else
{
lean_dec(v___x_2062_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2070_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 0, v_declName_2057_);
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_declName_2057_);
v___x_2067_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2068_; 
v___x_2068_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_2056_, v___x_2067_, v_attrKind_2058_, v_a_2059_, v_a_2060_);
return v___x_2068_;
}
}
}
else
{
lean_dec(v_declName_2057_);
lean_dec_ref(v_ext_2056_);
return v___x_2062_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr___boxed(lean_object* v_ext_2072_, lean_object* v_declName_2073_, lean_object* v_attrKind_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_){
_start:
{
uint8_t v_attrKind_boxed_2078_; lean_object* v_res_2079_; 
v_attrKind_boxed_2078_ = lean_unbox(v_attrKind_2074_);
v_res_2079_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(v_ext_2072_, v_declName_2073_, v_attrKind_boxed_2078_, v_a_2075_, v_a_2076_);
lean_dec(v_a_2076_);
lean_dec_ref(v_a_2075_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(lean_object* v_ext_2080_, lean_object* v_declName_2081_, uint8_t v_attrKind_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2086_, 0, v_declName_2081_);
v___x_2087_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_2080_, v___x_2086_, v_attrKind_2082_, v_a_2083_, v_a_2084_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr___boxed(lean_object* v_ext_2088_, lean_object* v_declName_2089_, lean_object* v_attrKind_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_){
_start:
{
uint8_t v_attrKind_boxed_2094_; lean_object* v_res_2095_; 
v_attrKind_boxed_2094_ = lean_unbox(v_attrKind_2090_);
v_res_2095_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(v_ext_2088_, v_declName_2089_, v_attrKind_boxed_2094_, v_a_2091_, v_a_2092_);
lean_dec(v_a_2092_);
lean_dec_ref(v_a_2091_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0(lean_object* v_a_2096_, lean_object* v_s_2097_){
_start:
{
lean_object* v_casesTypes_2098_; lean_object* v_funCC_2099_; lean_object* v_ematch_2100_; lean_object* v_inj_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
v_casesTypes_2098_ = lean_ctor_get(v_s_2097_, 0);
v_funCC_2099_ = lean_ctor_get(v_s_2097_, 2);
v_ematch_2100_ = lean_ctor_get(v_s_2097_, 3);
v_inj_2101_ = lean_ctor_get(v_s_2097_, 4);
v_isSharedCheck_2108_ = !lean_is_exclusive(v_s_2097_);
if (v_isSharedCheck_2108_ == 0)
{
lean_object* v_unused_2109_; 
v_unused_2109_ = lean_ctor_get(v_s_2097_, 1);
lean_dec(v_unused_2109_);
v___x_2103_ = v_s_2097_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_inj_2101_);
lean_inc(v_ematch_2100_);
lean_inc(v_funCC_2099_);
lean_inc(v_casesTypes_2098_);
lean_dec(v_s_2097_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 1, v_a_2096_);
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_casesTypes_2098_);
lean_ctor_set(v_reuseFailAlloc_2107_, 1, v_a_2096_);
lean_ctor_set(v_reuseFailAlloc_2107_, 2, v_funCC_2099_);
lean_ctor_set(v_reuseFailAlloc_2107_, 3, v_ematch_2100_);
lean_ctor_set(v_reuseFailAlloc_2107_, 4, v_inj_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(lean_object* v_ext_2110_, lean_object* v_declName_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_){
_start:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v_ext_2117_; lean_object* v_toEnvExtension_2118_; lean_object* v_env_2119_; lean_object* v_asyncMode_2120_; uint8_t v___x_2121_; lean_object* v___x_2122_; lean_object* v_extThms_2123_; lean_object* v___x_2124_; 
v___x_2115_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2116_ = lean_st_ref_get(v_a_2113_);
v_ext_2117_ = lean_ctor_get(v_ext_2110_, 1);
v_toEnvExtension_2118_ = lean_ctor_get(v_ext_2117_, 0);
v_env_2119_ = lean_ctor_get(v___x_2116_, 0);
lean_inc_ref(v_env_2119_);
lean_dec(v___x_2116_);
v_asyncMode_2120_ = lean_ctor_get(v_toEnvExtension_2118_, 2);
v___x_2121_ = 0;
v___x_2122_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2115_, v_ext_2110_, v_env_2119_, v_asyncMode_2120_, v___x_2121_);
v_extThms_2123_ = lean_ctor_get(v___x_2122_, 1);
lean_inc_ref(v_extThms_2123_);
lean_dec(v___x_2122_);
v___x_2124_ = l_Lean_Meta_Grind_ExtTheorems_eraseDecl(v_extThms_2123_, v_declName_2111_, v_a_2112_, v_a_2113_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2155_; 
v_a_2125_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2127_ = v___x_2124_;
v_isShared_2128_ = v_isSharedCheck_2155_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2124_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2155_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___f_2129_; lean_object* v___x_2130_; lean_object* v_env_2131_; lean_object* v_nextMacroScope_2132_; lean_object* v_ngen_2133_; lean_object* v_auxDeclNGen_2134_; lean_object* v_traceState_2135_; lean_object* v_recordedDeps_2136_; lean_object* v_messages_2137_; lean_object* v_infoState_2138_; lean_object* v_snapshotTasks_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2153_; 
v___f_2129_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0), 2, 1);
lean_closure_set(v___f_2129_, 0, v_a_2125_);
v___x_2130_ = lean_st_ref_take(v_a_2113_);
v_env_2131_ = lean_ctor_get(v___x_2130_, 0);
v_nextMacroScope_2132_ = lean_ctor_get(v___x_2130_, 1);
v_ngen_2133_ = lean_ctor_get(v___x_2130_, 2);
v_auxDeclNGen_2134_ = lean_ctor_get(v___x_2130_, 3);
v_traceState_2135_ = lean_ctor_get(v___x_2130_, 4);
v_recordedDeps_2136_ = lean_ctor_get(v___x_2130_, 6);
v_messages_2137_ = lean_ctor_get(v___x_2130_, 7);
v_infoState_2138_ = lean_ctor_get(v___x_2130_, 8);
v_snapshotTasks_2139_ = lean_ctor_get(v___x_2130_, 9);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2153_ == 0)
{
lean_object* v_unused_2154_; 
v_unused_2154_ = lean_ctor_get(v___x_2130_, 5);
lean_dec(v_unused_2154_);
v___x_2141_ = v___x_2130_;
v_isShared_2142_ = v_isSharedCheck_2153_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_snapshotTasks_2139_);
lean_inc(v_infoState_2138_);
lean_inc(v_messages_2137_);
lean_inc(v_recordedDeps_2136_);
lean_inc(v_traceState_2135_);
lean_inc(v_auxDeclNGen_2134_);
lean_inc(v_ngen_2133_);
lean_inc(v_nextMacroScope_2132_);
lean_inc(v_env_2131_);
lean_dec(v___x_2130_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2153_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2143_ = lean_box(0);
v___x_2144_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_2110_, v_env_2131_, v___f_2129_);
v___x_2145_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 5, v___x_2145_);
lean_ctor_set(v___x_2141_, 0, v___x_2144_);
v___x_2147_ = v___x_2141_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v___x_2144_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v_nextMacroScope_2132_);
lean_ctor_set(v_reuseFailAlloc_2152_, 2, v_ngen_2133_);
lean_ctor_set(v_reuseFailAlloc_2152_, 3, v_auxDeclNGen_2134_);
lean_ctor_set(v_reuseFailAlloc_2152_, 4, v_traceState_2135_);
lean_ctor_set(v_reuseFailAlloc_2152_, 5, v___x_2145_);
lean_ctor_set(v_reuseFailAlloc_2152_, 6, v_recordedDeps_2136_);
lean_ctor_set(v_reuseFailAlloc_2152_, 7, v_messages_2137_);
lean_ctor_set(v_reuseFailAlloc_2152_, 8, v_infoState_2138_);
lean_ctor_set(v_reuseFailAlloc_2152_, 9, v_snapshotTasks_2139_);
v___x_2147_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
lean_object* v___x_2148_; lean_object* v___x_2150_; 
v___x_2148_ = lean_st_ref_put(v_a_2113_, v___x_2147_);
if (v_isShared_2128_ == 0)
{
lean_ctor_set(v___x_2127_, 0, v___x_2143_);
v___x_2150_ = v___x_2127_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2143_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v_ext_2110_);
v_a_2156_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2124_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2124_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___boxed(lean_object* v_ext_2164_, lean_object* v_declName_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_){
_start:
{
lean_object* v_res_2169_; 
v_res_2169_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(v_ext_2164_, v_declName_2165_, v_a_2166_, v_a_2167_);
lean_dec(v_a_2167_);
lean_dec_ref(v_a_2166_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0(lean_object* v_a_2170_, lean_object* v_s_2171_){
_start:
{
lean_object* v_extThms_2172_; lean_object* v_funCC_2173_; lean_object* v_ematch_2174_; lean_object* v_inj_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
v_extThms_2172_ = lean_ctor_get(v_s_2171_, 1);
v_funCC_2173_ = lean_ctor_get(v_s_2171_, 2);
v_ematch_2174_ = lean_ctor_get(v_s_2171_, 3);
v_inj_2175_ = lean_ctor_get(v_s_2171_, 4);
v_isSharedCheck_2182_ = !lean_is_exclusive(v_s_2171_);
if (v_isSharedCheck_2182_ == 0)
{
lean_object* v_unused_2183_; 
v_unused_2183_ = lean_ctor_get(v_s_2171_, 0);
lean_dec(v_unused_2183_);
v___x_2177_ = v_s_2171_;
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_inj_2175_);
lean_inc(v_ematch_2174_);
lean_inc(v_funCC_2173_);
lean_inc(v_extThms_2172_);
lean_dec(v_s_2171_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2180_; 
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 0, v_a_2170_);
v___x_2180_ = v___x_2177_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_a_2170_);
lean_ctor_set(v_reuseFailAlloc_2181_, 1, v_extThms_2172_);
lean_ctor_set(v_reuseFailAlloc_2181_, 2, v_funCC_2173_);
lean_ctor_set(v_reuseFailAlloc_2181_, 3, v_ematch_2174_);
lean_ctor_set(v_reuseFailAlloc_2181_, 4, v_inj_2175_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(lean_object* v_ext_2184_, lean_object* v_declName_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2189_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_inc(v_declName_2185_);
v___x_2190_ = l_Lean_Meta_Grind_ensureNotBuiltinCases(v_declName_2185_, v_a_2186_, v_a_2187_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v___x_2191_; lean_object* v_ext_2192_; lean_object* v_toEnvExtension_2193_; lean_object* v_env_2194_; lean_object* v_asyncMode_2195_; uint8_t v___x_2196_; lean_object* v___x_2197_; lean_object* v_casesTypes_2198_; lean_object* v___x_2199_; 
lean_dec_ref_known(v___x_2190_, 1);
v___x_2191_ = lean_st_ref_get(v_a_2187_);
v_ext_2192_ = lean_ctor_get(v_ext_2184_, 1);
v_toEnvExtension_2193_ = lean_ctor_get(v_ext_2192_, 0);
v_env_2194_ = lean_ctor_get(v___x_2191_, 0);
lean_inc_ref(v_env_2194_);
lean_dec(v___x_2191_);
v_asyncMode_2195_ = lean_ctor_get(v_toEnvExtension_2193_, 2);
v___x_2196_ = 0;
v___x_2197_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2189_, v_ext_2184_, v_env_2194_, v_asyncMode_2195_, v___x_2196_);
v_casesTypes_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc_ref(v_casesTypes_2198_);
lean_dec(v___x_2197_);
v___x_2199_ = l_Lean_Meta_Grind_CasesTypes_eraseDecl(v_casesTypes_2198_, v_declName_2185_, v_a_2186_, v_a_2187_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2230_; 
v_a_2200_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2230_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2230_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___f_2204_; lean_object* v___x_2205_; lean_object* v_env_2206_; lean_object* v_nextMacroScope_2207_; lean_object* v_ngen_2208_; lean_object* v_auxDeclNGen_2209_; lean_object* v_traceState_2210_; lean_object* v_recordedDeps_2211_; lean_object* v_messages_2212_; lean_object* v_infoState_2213_; lean_object* v_snapshotTasks_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2228_; 
v___f_2204_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0), 2, 1);
lean_closure_set(v___f_2204_, 0, v_a_2200_);
v___x_2205_ = lean_st_ref_take(v_a_2187_);
v_env_2206_ = lean_ctor_get(v___x_2205_, 0);
v_nextMacroScope_2207_ = lean_ctor_get(v___x_2205_, 1);
v_ngen_2208_ = lean_ctor_get(v___x_2205_, 2);
v_auxDeclNGen_2209_ = lean_ctor_get(v___x_2205_, 3);
v_traceState_2210_ = lean_ctor_get(v___x_2205_, 4);
v_recordedDeps_2211_ = lean_ctor_get(v___x_2205_, 6);
v_messages_2212_ = lean_ctor_get(v___x_2205_, 7);
v_infoState_2213_ = lean_ctor_get(v___x_2205_, 8);
v_snapshotTasks_2214_ = lean_ctor_get(v___x_2205_, 9);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2228_ == 0)
{
lean_object* v_unused_2229_; 
v_unused_2229_ = lean_ctor_get(v___x_2205_, 5);
lean_dec(v_unused_2229_);
v___x_2216_ = v___x_2205_;
v_isShared_2217_ = v_isSharedCheck_2228_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_snapshotTasks_2214_);
lean_inc(v_infoState_2213_);
lean_inc(v_messages_2212_);
lean_inc(v_recordedDeps_2211_);
lean_inc(v_traceState_2210_);
lean_inc(v_auxDeclNGen_2209_);
lean_inc(v_ngen_2208_);
lean_inc(v_nextMacroScope_2207_);
lean_inc(v_env_2206_);
lean_dec(v___x_2205_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2228_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2222_; 
v___x_2218_ = lean_box(0);
v___x_2219_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_2184_, v_env_2206_, v___f_2204_);
v___x_2220_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 5, v___x_2220_);
lean_ctor_set(v___x_2216_, 0, v___x_2219_);
v___x_2222_ = v___x_2216_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2219_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v_nextMacroScope_2207_);
lean_ctor_set(v_reuseFailAlloc_2227_, 2, v_ngen_2208_);
lean_ctor_set(v_reuseFailAlloc_2227_, 3, v_auxDeclNGen_2209_);
lean_ctor_set(v_reuseFailAlloc_2227_, 4, v_traceState_2210_);
lean_ctor_set(v_reuseFailAlloc_2227_, 5, v___x_2220_);
lean_ctor_set(v_reuseFailAlloc_2227_, 6, v_recordedDeps_2211_);
lean_ctor_set(v_reuseFailAlloc_2227_, 7, v_messages_2212_);
lean_ctor_set(v_reuseFailAlloc_2227_, 8, v_infoState_2213_);
lean_ctor_set(v_reuseFailAlloc_2227_, 9, v_snapshotTasks_2214_);
v___x_2222_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
lean_object* v___x_2223_; lean_object* v___x_2225_; 
v___x_2223_ = lean_st_ref_put(v_a_2187_, v___x_2222_);
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2218_);
v___x_2225_ = v___x_2202_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2218_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
lean_dec_ref(v_ext_2184_);
v_a_2231_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2199_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2199_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
else
{
lean_dec(v_declName_2185_);
lean_dec_ref(v_ext_2184_);
return v___x_2190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___boxed(lean_object* v_ext_2239_, lean_object* v_declName_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(v_ext_2239_, v_declName_2240_, v_a_2241_, v_a_2242_);
lean_dec(v_a_2242_);
lean_dec_ref(v_a_2241_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0(lean_object* v___x_2245_, lean_object* v_s_2246_){
_start:
{
lean_object* v_casesTypes_2247_; lean_object* v_extThms_2248_; lean_object* v_ematch_2249_; lean_object* v_inj_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2257_; 
v_casesTypes_2247_ = lean_ctor_get(v_s_2246_, 0);
v_extThms_2248_ = lean_ctor_get(v_s_2246_, 1);
v_ematch_2249_ = lean_ctor_get(v_s_2246_, 3);
v_inj_2250_ = lean_ctor_get(v_s_2246_, 4);
v_isSharedCheck_2257_ = !lean_is_exclusive(v_s_2246_);
if (v_isSharedCheck_2257_ == 0)
{
lean_object* v_unused_2258_; 
v_unused_2258_ = lean_ctor_get(v_s_2246_, 2);
lean_dec(v_unused_2258_);
v___x_2252_ = v_s_2246_;
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_inj_2250_);
lean_inc(v_ematch_2249_);
lean_inc(v_extThms_2248_);
lean_inc(v_casesTypes_2247_);
lean_dec(v_s_2246_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2255_; 
if (v_isShared_2253_ == 0)
{
lean_ctor_set(v___x_2252_, 2, v___x_2245_);
v___x_2255_ = v___x_2252_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v_casesTypes_2247_);
lean_ctor_set(v_reuseFailAlloc_2256_, 1, v_extThms_2248_);
lean_ctor_set(v_reuseFailAlloc_2256_, 2, v___x_2245_);
lean_ctor_set(v_reuseFailAlloc_2256_, 3, v_ematch_2249_);
lean_ctor_set(v_reuseFailAlloc_2256_, 4, v_inj_2250_);
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
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(lean_object* v_k_2259_, lean_object* v_t_2260_){
_start:
{
if (lean_obj_tag(v_t_2260_) == 0)
{
lean_object* v_k_2261_; lean_object* v_v_2262_; lean_object* v_l_2263_; lean_object* v_r_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2918_; 
v_k_2261_ = lean_ctor_get(v_t_2260_, 1);
v_v_2262_ = lean_ctor_get(v_t_2260_, 2);
v_l_2263_ = lean_ctor_get(v_t_2260_, 3);
v_r_2264_ = lean_ctor_get(v_t_2260_, 4);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_t_2260_);
if (v_isSharedCheck_2918_ == 0)
{
lean_object* v_unused_2919_; 
v_unused_2919_ = lean_ctor_get(v_t_2260_, 0);
lean_dec(v_unused_2919_);
v___x_2266_ = v_t_2260_;
v_isShared_2267_ = v_isSharedCheck_2918_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_r_2264_);
lean_inc(v_l_2263_);
lean_inc(v_v_2262_);
lean_inc(v_k_2261_);
lean_dec(v_t_2260_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2918_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
uint8_t v___x_2268_; 
v___x_2268_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2259_, v_k_2261_);
switch(v___x_2268_)
{
case 0:
{
lean_object* v_impl_2269_; lean_object* v___x_2270_; 
v_impl_2269_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_2259_, v_l_2263_);
v___x_2270_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_2269_) == 0)
{
if (lean_obj_tag(v_r_2264_) == 0)
{
lean_object* v_size_2271_; lean_object* v_size_2272_; lean_object* v_k_2273_; lean_object* v_v_2274_; lean_object* v_l_2275_; lean_object* v_r_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; uint8_t v___x_2279_; 
v_size_2271_ = lean_ctor_get(v_impl_2269_, 0);
v_size_2272_ = lean_ctor_get(v_r_2264_, 0);
v_k_2273_ = lean_ctor_get(v_r_2264_, 1);
v_v_2274_ = lean_ctor_get(v_r_2264_, 2);
v_l_2275_ = lean_ctor_get(v_r_2264_, 3);
lean_inc(v_l_2275_);
v_r_2276_ = lean_ctor_get(v_r_2264_, 4);
v___x_2277_ = lean_unsigned_to_nat(3u);
v___x_2278_ = lean_nat_mul(v___x_2277_, v_size_2271_);
v___x_2279_ = lean_nat_dec_lt(v___x_2278_, v_size_2272_);
lean_dec(v___x_2278_);
if (v___x_2279_ == 0)
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2283_; 
lean_dec(v_l_2275_);
v___x_2280_ = lean_nat_add(v___x_2270_, v_size_2271_);
v___x_2281_ = lean_nat_add(v___x_2280_, v_size_2272_);
lean_dec(v___x_2280_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 3, v_impl_2269_);
lean_ctor_set(v___x_2266_, 0, v___x_2281_);
v___x_2283_ = v___x_2266_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v___x_2281_);
lean_ctor_set(v_reuseFailAlloc_2284_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2284_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2284_, 3, v_impl_2269_);
lean_ctor_set(v_reuseFailAlloc_2284_, 4, v_r_2264_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
else
{
lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2348_; 
lean_inc(v_r_2276_);
lean_inc(v_v_2274_);
lean_inc(v_k_2273_);
lean_inc(v_size_2272_);
v_isSharedCheck_2348_ = !lean_is_exclusive(v_r_2264_);
if (v_isSharedCheck_2348_ == 0)
{
lean_object* v_unused_2349_; lean_object* v_unused_2350_; lean_object* v_unused_2351_; lean_object* v_unused_2352_; lean_object* v_unused_2353_; 
v_unused_2349_ = lean_ctor_get(v_r_2264_, 4);
lean_dec(v_unused_2349_);
v_unused_2350_ = lean_ctor_get(v_r_2264_, 3);
lean_dec(v_unused_2350_);
v_unused_2351_ = lean_ctor_get(v_r_2264_, 2);
lean_dec(v_unused_2351_);
v_unused_2352_ = lean_ctor_get(v_r_2264_, 1);
lean_dec(v_unused_2352_);
v_unused_2353_ = lean_ctor_get(v_r_2264_, 0);
lean_dec(v_unused_2353_);
v___x_2286_ = v_r_2264_;
v_isShared_2287_ = v_isSharedCheck_2348_;
goto v_resetjp_2285_;
}
else
{
lean_dec(v_r_2264_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2348_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v_size_2288_; lean_object* v_k_2289_; lean_object* v_v_2290_; lean_object* v_l_2291_; lean_object* v_r_2292_; lean_object* v_size_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; 
v_size_2288_ = lean_ctor_get(v_l_2275_, 0);
v_k_2289_ = lean_ctor_get(v_l_2275_, 1);
v_v_2290_ = lean_ctor_get(v_l_2275_, 2);
v_l_2291_ = lean_ctor_get(v_l_2275_, 3);
v_r_2292_ = lean_ctor_get(v_l_2275_, 4);
v_size_2293_ = lean_ctor_get(v_r_2276_, 0);
v___x_2294_ = lean_unsigned_to_nat(2u);
v___x_2295_ = lean_nat_mul(v___x_2294_, v_size_2293_);
v___x_2296_ = lean_nat_dec_lt(v_size_2288_, v___x_2295_);
lean_dec(v___x_2295_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2324_; 
lean_inc(v_r_2292_);
lean_inc(v_l_2291_);
lean_inc(v_v_2290_);
lean_inc(v_k_2289_);
v_isSharedCheck_2324_ = !lean_is_exclusive(v_l_2275_);
if (v_isSharedCheck_2324_ == 0)
{
lean_object* v_unused_2325_; lean_object* v_unused_2326_; lean_object* v_unused_2327_; lean_object* v_unused_2328_; lean_object* v_unused_2329_; 
v_unused_2325_ = lean_ctor_get(v_l_2275_, 4);
lean_dec(v_unused_2325_);
v_unused_2326_ = lean_ctor_get(v_l_2275_, 3);
lean_dec(v_unused_2326_);
v_unused_2327_ = lean_ctor_get(v_l_2275_, 2);
lean_dec(v_unused_2327_);
v_unused_2328_ = lean_ctor_get(v_l_2275_, 1);
lean_dec(v_unused_2328_);
v_unused_2329_ = lean_ctor_get(v_l_2275_, 0);
lean_dec(v_unused_2329_);
v___x_2298_ = v_l_2275_;
v_isShared_2299_ = v_isSharedCheck_2324_;
goto v_resetjp_2297_;
}
else
{
lean_dec(v_l_2275_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2324_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___y_2303_; lean_object* v___y_2304_; lean_object* v___y_2305_; lean_object* v___y_2314_; 
v___x_2300_ = lean_nat_add(v___x_2270_, v_size_2271_);
v___x_2301_ = lean_nat_add(v___x_2300_, v_size_2272_);
lean_dec(v_size_2272_);
if (lean_obj_tag(v_l_2291_) == 0)
{
lean_object* v_size_2322_; 
v_size_2322_ = lean_ctor_get(v_l_2291_, 0);
lean_inc(v_size_2322_);
v___y_2314_ = v_size_2322_;
goto v___jp_2313_;
}
else
{
lean_object* v___x_2323_; 
v___x_2323_ = lean_unsigned_to_nat(0u);
v___y_2314_ = v___x_2323_;
goto v___jp_2313_;
}
v___jp_2302_:
{
lean_object* v___x_2306_; lean_object* v___x_2308_; 
v___x_2306_ = lean_nat_add(v___y_2304_, v___y_2305_);
lean_dec(v___y_2305_);
lean_dec(v___y_2304_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set(v___x_2298_, 4, v_r_2276_);
lean_ctor_set(v___x_2298_, 3, v_r_2292_);
lean_ctor_set(v___x_2298_, 2, v_v_2274_);
lean_ctor_set(v___x_2298_, 1, v_k_2273_);
lean_ctor_set(v___x_2298_, 0, v___x_2306_);
v___x_2308_ = v___x_2298_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2306_);
lean_ctor_set(v_reuseFailAlloc_2312_, 1, v_k_2273_);
lean_ctor_set(v_reuseFailAlloc_2312_, 2, v_v_2274_);
lean_ctor_set(v_reuseFailAlloc_2312_, 3, v_r_2292_);
lean_ctor_set(v_reuseFailAlloc_2312_, 4, v_r_2276_);
v___x_2308_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
lean_object* v___x_2310_; 
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 4, v___x_2308_);
lean_ctor_set(v___x_2286_, 3, v___y_2303_);
lean_ctor_set(v___x_2286_, 2, v_v_2290_);
lean_ctor_set(v___x_2286_, 1, v_k_2289_);
lean_ctor_set(v___x_2286_, 0, v___x_2301_);
v___x_2310_ = v___x_2286_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v___x_2301_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v_k_2289_);
lean_ctor_set(v_reuseFailAlloc_2311_, 2, v_v_2290_);
lean_ctor_set(v_reuseFailAlloc_2311_, 3, v___y_2303_);
lean_ctor_set(v_reuseFailAlloc_2311_, 4, v___x_2308_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
v___jp_2313_:
{
lean_object* v___x_2315_; lean_object* v___x_2317_; 
v___x_2315_ = lean_nat_add(v___x_2300_, v___y_2314_);
lean_dec(v___y_2314_);
lean_dec(v___x_2300_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v_l_2291_);
lean_ctor_set(v___x_2266_, 3, v_impl_2269_);
lean_ctor_set(v___x_2266_, 0, v___x_2315_);
v___x_2317_ = v___x_2266_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v___x_2315_);
lean_ctor_set(v_reuseFailAlloc_2321_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2321_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2321_, 3, v_impl_2269_);
lean_ctor_set(v_reuseFailAlloc_2321_, 4, v_l_2291_);
v___x_2317_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
lean_object* v___x_2318_; 
v___x_2318_ = lean_nat_add(v___x_2270_, v_size_2293_);
if (lean_obj_tag(v_r_2292_) == 0)
{
lean_object* v_size_2319_; 
v_size_2319_ = lean_ctor_get(v_r_2292_, 0);
lean_inc(v_size_2319_);
v___y_2303_ = v___x_2317_;
v___y_2304_ = v___x_2318_;
v___y_2305_ = v_size_2319_;
goto v___jp_2302_;
}
else
{
lean_object* v___x_2320_; 
v___x_2320_ = lean_unsigned_to_nat(0u);
v___y_2303_ = v___x_2317_;
v___y_2304_ = v___x_2318_;
v___y_2305_ = v___x_2320_;
goto v___jp_2302_;
}
}
}
}
}
else
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2334_; 
lean_del_object(v___x_2266_);
v___x_2330_ = lean_nat_add(v___x_2270_, v_size_2271_);
v___x_2331_ = lean_nat_add(v___x_2330_, v_size_2272_);
lean_dec(v_size_2272_);
v___x_2332_ = lean_nat_add(v___x_2330_, v_size_2288_);
lean_dec(v___x_2330_);
lean_inc_ref(v_impl_2269_);
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 4, v_l_2275_);
lean_ctor_set(v___x_2286_, 3, v_impl_2269_);
lean_ctor_set(v___x_2286_, 2, v_v_2262_);
lean_ctor_set(v___x_2286_, 1, v_k_2261_);
lean_ctor_set(v___x_2286_, 0, v___x_2332_);
v___x_2334_ = v___x_2286_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v___x_2332_);
lean_ctor_set(v_reuseFailAlloc_2347_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2347_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2347_, 3, v_impl_2269_);
lean_ctor_set(v_reuseFailAlloc_2347_, 4, v_l_2275_);
v___x_2334_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2341_; 
v_isSharedCheck_2341_ = !lean_is_exclusive(v_impl_2269_);
if (v_isSharedCheck_2341_ == 0)
{
lean_object* v_unused_2342_; lean_object* v_unused_2343_; lean_object* v_unused_2344_; lean_object* v_unused_2345_; lean_object* v_unused_2346_; 
v_unused_2342_ = lean_ctor_get(v_impl_2269_, 4);
lean_dec(v_unused_2342_);
v_unused_2343_ = lean_ctor_get(v_impl_2269_, 3);
lean_dec(v_unused_2343_);
v_unused_2344_ = lean_ctor_get(v_impl_2269_, 2);
lean_dec(v_unused_2344_);
v_unused_2345_ = lean_ctor_get(v_impl_2269_, 1);
lean_dec(v_unused_2345_);
v_unused_2346_ = lean_ctor_get(v_impl_2269_, 0);
lean_dec(v_unused_2346_);
v___x_2336_ = v_impl_2269_;
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
else
{
lean_dec(v_impl_2269_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2339_; 
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 4, v_r_2276_);
lean_ctor_set(v___x_2336_, 3, v___x_2334_);
lean_ctor_set(v___x_2336_, 2, v_v_2274_);
lean_ctor_set(v___x_2336_, 1, v_k_2273_);
lean_ctor_set(v___x_2336_, 0, v___x_2331_);
v___x_2339_ = v___x_2336_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v___x_2331_);
lean_ctor_set(v_reuseFailAlloc_2340_, 1, v_k_2273_);
lean_ctor_set(v_reuseFailAlloc_2340_, 2, v_v_2274_);
lean_ctor_set(v_reuseFailAlloc_2340_, 3, v___x_2334_);
lean_ctor_set(v_reuseFailAlloc_2340_, 4, v_r_2276_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2354_; lean_object* v___x_2355_; lean_object* v___x_2357_; 
v_size_2354_ = lean_ctor_get(v_impl_2269_, 0);
v___x_2355_ = lean_nat_add(v___x_2270_, v_size_2354_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 3, v_impl_2269_);
lean_ctor_set(v___x_2266_, 0, v___x_2355_);
v___x_2357_ = v___x_2266_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v___x_2355_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2358_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2358_, 3, v_impl_2269_);
lean_ctor_set(v_reuseFailAlloc_2358_, 4, v_r_2264_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
else
{
if (lean_obj_tag(v_r_2264_) == 0)
{
lean_object* v_l_2359_; 
v_l_2359_ = lean_ctor_get(v_r_2264_, 3);
lean_inc(v_l_2359_);
if (lean_obj_tag(v_l_2359_) == 0)
{
lean_object* v_r_2360_; 
v_r_2360_ = lean_ctor_get(v_r_2264_, 4);
lean_inc(v_r_2360_);
if (lean_obj_tag(v_r_2360_) == 0)
{
lean_object* v_size_2361_; lean_object* v_k_2362_; lean_object* v_v_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2376_; 
v_size_2361_ = lean_ctor_get(v_r_2264_, 0);
v_k_2362_ = lean_ctor_get(v_r_2264_, 1);
v_v_2363_ = lean_ctor_get(v_r_2264_, 2);
v_isSharedCheck_2376_ = !lean_is_exclusive(v_r_2264_);
if (v_isSharedCheck_2376_ == 0)
{
lean_object* v_unused_2377_; lean_object* v_unused_2378_; 
v_unused_2377_ = lean_ctor_get(v_r_2264_, 4);
lean_dec(v_unused_2377_);
v_unused_2378_ = lean_ctor_get(v_r_2264_, 3);
lean_dec(v_unused_2378_);
v___x_2365_ = v_r_2264_;
v_isShared_2366_ = v_isSharedCheck_2376_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_v_2363_);
lean_inc(v_k_2362_);
lean_inc(v_size_2361_);
lean_dec(v_r_2264_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2376_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v_size_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2371_; 
v_size_2367_ = lean_ctor_get(v_l_2359_, 0);
v___x_2368_ = lean_nat_add(v___x_2270_, v_size_2361_);
lean_dec(v_size_2361_);
v___x_2369_ = lean_nat_add(v___x_2270_, v_size_2367_);
if (v_isShared_2366_ == 0)
{
lean_ctor_set(v___x_2365_, 4, v_l_2359_);
lean_ctor_set(v___x_2365_, 3, v_impl_2269_);
lean_ctor_set(v___x_2365_, 2, v_v_2262_);
lean_ctor_set(v___x_2365_, 1, v_k_2261_);
lean_ctor_set(v___x_2365_, 0, v___x_2369_);
v___x_2371_ = v___x_2365_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2375_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2375_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2375_, 3, v_impl_2269_);
lean_ctor_set(v_reuseFailAlloc_2375_, 4, v_l_2359_);
v___x_2371_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
lean_object* v___x_2373_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v_r_2360_);
lean_ctor_set(v___x_2266_, 3, v___x_2371_);
lean_ctor_set(v___x_2266_, 2, v_v_2363_);
lean_ctor_set(v___x_2266_, 1, v_k_2362_);
lean_ctor_set(v___x_2266_, 0, v___x_2368_);
v___x_2373_ = v___x_2266_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2368_);
lean_ctor_set(v_reuseFailAlloc_2374_, 1, v_k_2362_);
lean_ctor_set(v_reuseFailAlloc_2374_, 2, v_v_2363_);
lean_ctor_set(v_reuseFailAlloc_2374_, 3, v___x_2371_);
lean_ctor_set(v_reuseFailAlloc_2374_, 4, v_r_2360_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_k_2379_; lean_object* v_v_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2403_; 
v_k_2379_ = lean_ctor_get(v_r_2264_, 1);
v_v_2380_ = lean_ctor_get(v_r_2264_, 2);
v_isSharedCheck_2403_ = !lean_is_exclusive(v_r_2264_);
if (v_isSharedCheck_2403_ == 0)
{
lean_object* v_unused_2404_; lean_object* v_unused_2405_; lean_object* v_unused_2406_; 
v_unused_2404_ = lean_ctor_get(v_r_2264_, 4);
lean_dec(v_unused_2404_);
v_unused_2405_ = lean_ctor_get(v_r_2264_, 3);
lean_dec(v_unused_2405_);
v_unused_2406_ = lean_ctor_get(v_r_2264_, 0);
lean_dec(v_unused_2406_);
v___x_2382_ = v_r_2264_;
v_isShared_2383_ = v_isSharedCheck_2403_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_v_2380_);
lean_inc(v_k_2379_);
lean_dec(v_r_2264_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2403_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v_k_2384_; lean_object* v_v_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2399_; 
v_k_2384_ = lean_ctor_get(v_l_2359_, 1);
v_v_2385_ = lean_ctor_get(v_l_2359_, 2);
v_isSharedCheck_2399_ = !lean_is_exclusive(v_l_2359_);
if (v_isSharedCheck_2399_ == 0)
{
lean_object* v_unused_2400_; lean_object* v_unused_2401_; lean_object* v_unused_2402_; 
v_unused_2400_ = lean_ctor_get(v_l_2359_, 4);
lean_dec(v_unused_2400_);
v_unused_2401_ = lean_ctor_get(v_l_2359_, 3);
lean_dec(v_unused_2401_);
v_unused_2402_ = lean_ctor_get(v_l_2359_, 0);
lean_dec(v_unused_2402_);
v___x_2387_ = v_l_2359_;
v_isShared_2388_ = v_isSharedCheck_2399_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_v_2385_);
lean_inc(v_k_2384_);
lean_dec(v_l_2359_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2399_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2389_; lean_object* v___x_2391_; 
v___x_2389_ = lean_unsigned_to_nat(3u);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 4, v_r_2360_);
lean_ctor_set(v___x_2387_, 3, v_r_2360_);
lean_ctor_set(v___x_2387_, 2, v_v_2262_);
lean_ctor_set(v___x_2387_, 1, v_k_2261_);
lean_ctor_set(v___x_2387_, 0, v___x_2270_);
v___x_2391_ = v___x_2387_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v___x_2270_);
lean_ctor_set(v_reuseFailAlloc_2398_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2398_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2398_, 3, v_r_2360_);
lean_ctor_set(v_reuseFailAlloc_2398_, 4, v_r_2360_);
v___x_2391_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
lean_object* v___x_2393_; 
if (v_isShared_2383_ == 0)
{
lean_ctor_set(v___x_2382_, 3, v_r_2360_);
lean_ctor_set(v___x_2382_, 0, v___x_2270_);
v___x_2393_ = v___x_2382_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v___x_2270_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v_k_2379_);
lean_ctor_set(v_reuseFailAlloc_2397_, 2, v_v_2380_);
lean_ctor_set(v_reuseFailAlloc_2397_, 3, v_r_2360_);
lean_ctor_set(v_reuseFailAlloc_2397_, 4, v_r_2360_);
v___x_2393_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
lean_object* v___x_2395_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v___x_2393_);
lean_ctor_set(v___x_2266_, 3, v___x_2391_);
lean_ctor_set(v___x_2266_, 2, v_v_2385_);
lean_ctor_set(v___x_2266_, 1, v_k_2384_);
lean_ctor_set(v___x_2266_, 0, v___x_2389_);
v___x_2395_ = v___x_2266_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v___x_2389_);
lean_ctor_set(v_reuseFailAlloc_2396_, 1, v_k_2384_);
lean_ctor_set(v_reuseFailAlloc_2396_, 2, v_v_2385_);
lean_ctor_set(v_reuseFailAlloc_2396_, 3, v___x_2391_);
lean_ctor_set(v_reuseFailAlloc_2396_, 4, v___x_2393_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_2407_; 
v_r_2407_ = lean_ctor_get(v_r_2264_, 4);
lean_inc(v_r_2407_);
if (lean_obj_tag(v_r_2407_) == 0)
{
lean_object* v_k_2408_; lean_object* v_v_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2420_; 
v_k_2408_ = lean_ctor_get(v_r_2264_, 1);
v_v_2409_ = lean_ctor_get(v_r_2264_, 2);
v_isSharedCheck_2420_ = !lean_is_exclusive(v_r_2264_);
if (v_isSharedCheck_2420_ == 0)
{
lean_object* v_unused_2421_; lean_object* v_unused_2422_; lean_object* v_unused_2423_; 
v_unused_2421_ = lean_ctor_get(v_r_2264_, 4);
lean_dec(v_unused_2421_);
v_unused_2422_ = lean_ctor_get(v_r_2264_, 3);
lean_dec(v_unused_2422_);
v_unused_2423_ = lean_ctor_get(v_r_2264_, 0);
lean_dec(v_unused_2423_);
v___x_2411_ = v_r_2264_;
v_isShared_2412_ = v_isSharedCheck_2420_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_v_2409_);
lean_inc(v_k_2408_);
lean_dec(v_r_2264_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2420_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2413_; lean_object* v___x_2415_; 
v___x_2413_ = lean_unsigned_to_nat(3u);
if (v_isShared_2412_ == 0)
{
lean_ctor_set(v___x_2411_, 4, v_l_2359_);
lean_ctor_set(v___x_2411_, 2, v_v_2262_);
lean_ctor_set(v___x_2411_, 1, v_k_2261_);
lean_ctor_set(v___x_2411_, 0, v___x_2270_);
v___x_2415_ = v___x_2411_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v___x_2270_);
lean_ctor_set(v_reuseFailAlloc_2419_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2419_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2419_, 3, v_l_2359_);
lean_ctor_set(v_reuseFailAlloc_2419_, 4, v_l_2359_);
v___x_2415_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
lean_object* v___x_2417_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v_r_2407_);
lean_ctor_set(v___x_2266_, 3, v___x_2415_);
lean_ctor_set(v___x_2266_, 2, v_v_2409_);
lean_ctor_set(v___x_2266_, 1, v_k_2408_);
lean_ctor_set(v___x_2266_, 0, v___x_2413_);
v___x_2417_ = v___x_2266_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v___x_2413_);
lean_ctor_set(v_reuseFailAlloc_2418_, 1, v_k_2408_);
lean_ctor_set(v_reuseFailAlloc_2418_, 2, v_v_2409_);
lean_ctor_set(v_reuseFailAlloc_2418_, 3, v___x_2415_);
lean_ctor_set(v_reuseFailAlloc_2418_, 4, v_r_2407_);
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
else
{
lean_object* v_size_2424_; lean_object* v_k_2425_; lean_object* v_v_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2437_; 
v_size_2424_ = lean_ctor_get(v_r_2264_, 0);
v_k_2425_ = lean_ctor_get(v_r_2264_, 1);
v_v_2426_ = lean_ctor_get(v_r_2264_, 2);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_r_2264_);
if (v_isSharedCheck_2437_ == 0)
{
lean_object* v_unused_2438_; lean_object* v_unused_2439_; 
v_unused_2438_ = lean_ctor_get(v_r_2264_, 4);
lean_dec(v_unused_2438_);
v_unused_2439_ = lean_ctor_get(v_r_2264_, 3);
lean_dec(v_unused_2439_);
v___x_2428_ = v_r_2264_;
v_isShared_2429_ = v_isSharedCheck_2437_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_v_2426_);
lean_inc(v_k_2425_);
lean_inc(v_size_2424_);
lean_dec(v_r_2264_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2437_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 3, v_r_2407_);
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_size_2424_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v_k_2425_);
lean_ctor_set(v_reuseFailAlloc_2436_, 2, v_v_2426_);
lean_ctor_set(v_reuseFailAlloc_2436_, 3, v_r_2407_);
lean_ctor_set(v_reuseFailAlloc_2436_, 4, v_r_2407_);
v___x_2431_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
lean_object* v___x_2432_; lean_object* v___x_2434_; 
v___x_2432_ = lean_unsigned_to_nat(2u);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v___x_2431_);
lean_ctor_set(v___x_2266_, 3, v_r_2407_);
lean_ctor_set(v___x_2266_, 0, v___x_2432_);
v___x_2434_ = v___x_2266_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2432_);
lean_ctor_set(v_reuseFailAlloc_2435_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2435_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2435_, 3, v_r_2407_);
lean_ctor_set(v_reuseFailAlloc_2435_, 4, v___x_2431_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
}
}
}
else
{
lean_object* v___x_2441_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 3, v_r_2264_);
lean_ctor_set(v___x_2266_, 0, v___x_2270_);
v___x_2441_ = v___x_2266_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2270_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2442_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2442_, 3, v_r_2264_);
lean_ctor_set(v_reuseFailAlloc_2442_, 4, v_r_2264_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
}
case 1:
{
lean_del_object(v___x_2266_);
lean_dec(v_v_2262_);
lean_dec(v_k_2261_);
if (lean_obj_tag(v_l_2263_) == 0)
{
if (lean_obj_tag(v_r_2264_) == 0)
{
lean_object* v_size_2443_; lean_object* v_k_2444_; lean_object* v_v_2445_; lean_object* v_l_2446_; lean_object* v_r_2447_; lean_object* v_size_2448_; lean_object* v_k_2449_; lean_object* v_v_2450_; lean_object* v_l_2451_; lean_object* v_r_2452_; lean_object* v___x_2453_; uint8_t v___x_2454_; 
v_size_2443_ = lean_ctor_get(v_l_2263_, 0);
v_k_2444_ = lean_ctor_get(v_l_2263_, 1);
v_v_2445_ = lean_ctor_get(v_l_2263_, 2);
v_l_2446_ = lean_ctor_get(v_l_2263_, 3);
v_r_2447_ = lean_ctor_get(v_l_2263_, 4);
lean_inc(v_r_2447_);
v_size_2448_ = lean_ctor_get(v_r_2264_, 0);
v_k_2449_ = lean_ctor_get(v_r_2264_, 1);
v_v_2450_ = lean_ctor_get(v_r_2264_, 2);
v_l_2451_ = lean_ctor_get(v_r_2264_, 3);
lean_inc(v_l_2451_);
v_r_2452_ = lean_ctor_get(v_r_2264_, 4);
v___x_2453_ = lean_unsigned_to_nat(1u);
v___x_2454_ = lean_nat_dec_lt(v_size_2443_, v_size_2448_);
if (v___x_2454_ == 0)
{
lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2590_; 
lean_inc(v_l_2446_);
lean_inc(v_v_2445_);
lean_inc(v_k_2444_);
v_isSharedCheck_2590_ = !lean_is_exclusive(v_l_2263_);
if (v_isSharedCheck_2590_ == 0)
{
lean_object* v_unused_2591_; lean_object* v_unused_2592_; lean_object* v_unused_2593_; lean_object* v_unused_2594_; lean_object* v_unused_2595_; 
v_unused_2591_ = lean_ctor_get(v_l_2263_, 4);
lean_dec(v_unused_2591_);
v_unused_2592_ = lean_ctor_get(v_l_2263_, 3);
lean_dec(v_unused_2592_);
v_unused_2593_ = lean_ctor_get(v_l_2263_, 2);
lean_dec(v_unused_2593_);
v_unused_2594_ = lean_ctor_get(v_l_2263_, 1);
lean_dec(v_unused_2594_);
v_unused_2595_ = lean_ctor_get(v_l_2263_, 0);
lean_dec(v_unused_2595_);
v___x_2456_ = v_l_2263_;
v_isShared_2457_ = v_isSharedCheck_2590_;
goto v_resetjp_2455_;
}
else
{
lean_dec(v_l_2263_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2590_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2458_; lean_object* v_tree_2459_; 
v___x_2458_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_2444_, v_v_2445_, v_l_2446_, v_r_2447_);
v_tree_2459_ = lean_ctor_get(v___x_2458_, 2);
if (lean_obj_tag(v_tree_2459_) == 0)
{
lean_object* v_k_2460_; lean_object* v_v_2461_; lean_object* v_size_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; uint8_t v___x_2465_; 
lean_inc_ref(v_tree_2459_);
v_k_2460_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_k_2460_);
v_v_2461_ = lean_ctor_get(v___x_2458_, 1);
lean_inc(v_v_2461_);
lean_dec_ref(v___x_2458_);
v_size_2462_ = lean_ctor_get(v_tree_2459_, 0);
v___x_2463_ = lean_unsigned_to_nat(3u);
v___x_2464_ = lean_nat_mul(v___x_2463_, v_size_2462_);
v___x_2465_ = lean_nat_dec_lt(v___x_2464_, v_size_2448_);
lean_dec(v___x_2464_);
if (v___x_2465_ == 0)
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2469_; 
lean_dec(v_l_2451_);
v___x_2466_ = lean_nat_add(v___x_2453_, v_size_2462_);
v___x_2467_ = lean_nat_add(v___x_2466_, v_size_2448_);
lean_dec(v___x_2466_);
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 4, v_r_2264_);
lean_ctor_set(v___x_2456_, 3, v_tree_2459_);
lean_ctor_set(v___x_2456_, 2, v_v_2461_);
lean_ctor_set(v___x_2456_, 1, v_k_2460_);
lean_ctor_set(v___x_2456_, 0, v___x_2467_);
v___x_2469_ = v___x_2456_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2467_);
lean_ctor_set(v_reuseFailAlloc_2470_, 1, v_k_2460_);
lean_ctor_set(v_reuseFailAlloc_2470_, 2, v_v_2461_);
lean_ctor_set(v_reuseFailAlloc_2470_, 3, v_tree_2459_);
lean_ctor_set(v_reuseFailAlloc_2470_, 4, v_r_2264_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
else
{
lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2525_; 
lean_inc(v_r_2452_);
lean_inc(v_v_2450_);
lean_inc(v_k_2449_);
lean_inc(v_size_2448_);
v_isSharedCheck_2525_ = !lean_is_exclusive(v_r_2264_);
if (v_isSharedCheck_2525_ == 0)
{
lean_object* v_unused_2526_; lean_object* v_unused_2527_; lean_object* v_unused_2528_; lean_object* v_unused_2529_; lean_object* v_unused_2530_; 
v_unused_2526_ = lean_ctor_get(v_r_2264_, 4);
lean_dec(v_unused_2526_);
v_unused_2527_ = lean_ctor_get(v_r_2264_, 3);
lean_dec(v_unused_2527_);
v_unused_2528_ = lean_ctor_get(v_r_2264_, 2);
lean_dec(v_unused_2528_);
v_unused_2529_ = lean_ctor_get(v_r_2264_, 1);
lean_dec(v_unused_2529_);
v_unused_2530_ = lean_ctor_get(v_r_2264_, 0);
lean_dec(v_unused_2530_);
v___x_2472_ = v_r_2264_;
v_isShared_2473_ = v_isSharedCheck_2525_;
goto v_resetjp_2471_;
}
else
{
lean_dec(v_r_2264_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2525_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v_size_2474_; lean_object* v_k_2475_; lean_object* v_v_2476_; lean_object* v_l_2477_; lean_object* v_r_2478_; lean_object* v_size_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; uint8_t v___x_2482_; 
v_size_2474_ = lean_ctor_get(v_l_2451_, 0);
v_k_2475_ = lean_ctor_get(v_l_2451_, 1);
v_v_2476_ = lean_ctor_get(v_l_2451_, 2);
v_l_2477_ = lean_ctor_get(v_l_2451_, 3);
v_r_2478_ = lean_ctor_get(v_l_2451_, 4);
v_size_2479_ = lean_ctor_get(v_r_2452_, 0);
v___x_2480_ = lean_unsigned_to_nat(2u);
v___x_2481_ = lean_nat_mul(v___x_2480_, v_size_2479_);
v___x_2482_ = lean_nat_dec_lt(v_size_2474_, v___x_2481_);
lean_dec(v___x_2481_);
if (v___x_2482_ == 0)
{
lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2510_; 
lean_inc(v_r_2478_);
lean_inc(v_l_2477_);
lean_inc(v_v_2476_);
lean_inc(v_k_2475_);
v_isSharedCheck_2510_ = !lean_is_exclusive(v_l_2451_);
if (v_isSharedCheck_2510_ == 0)
{
lean_object* v_unused_2511_; lean_object* v_unused_2512_; lean_object* v_unused_2513_; lean_object* v_unused_2514_; lean_object* v_unused_2515_; 
v_unused_2511_ = lean_ctor_get(v_l_2451_, 4);
lean_dec(v_unused_2511_);
v_unused_2512_ = lean_ctor_get(v_l_2451_, 3);
lean_dec(v_unused_2512_);
v_unused_2513_ = lean_ctor_get(v_l_2451_, 2);
lean_dec(v_unused_2513_);
v_unused_2514_ = lean_ctor_get(v_l_2451_, 1);
lean_dec(v_unused_2514_);
v_unused_2515_ = lean_ctor_get(v_l_2451_, 0);
lean_dec(v_unused_2515_);
v___x_2484_ = v_l_2451_;
v_isShared_2485_ = v_isSharedCheck_2510_;
goto v_resetjp_2483_;
}
else
{
lean_dec(v_l_2451_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2510_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2500_; 
v___x_2486_ = lean_nat_add(v___x_2453_, v_size_2462_);
v___x_2487_ = lean_nat_add(v___x_2486_, v_size_2448_);
lean_dec(v_size_2448_);
if (lean_obj_tag(v_l_2477_) == 0)
{
lean_object* v_size_2508_; 
v_size_2508_ = lean_ctor_get(v_l_2477_, 0);
lean_inc(v_size_2508_);
v___y_2500_ = v_size_2508_;
goto v___jp_2499_;
}
else
{
lean_object* v___x_2509_; 
v___x_2509_ = lean_unsigned_to_nat(0u);
v___y_2500_ = v___x_2509_;
goto v___jp_2499_;
}
v___jp_2488_:
{
lean_object* v___x_2492_; lean_object* v___x_2494_; 
v___x_2492_ = lean_nat_add(v___y_2490_, v___y_2491_);
lean_dec(v___y_2491_);
lean_dec(v___y_2490_);
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 4, v_r_2452_);
lean_ctor_set(v___x_2484_, 3, v_r_2478_);
lean_ctor_set(v___x_2484_, 2, v_v_2450_);
lean_ctor_set(v___x_2484_, 1, v_k_2449_);
lean_ctor_set(v___x_2484_, 0, v___x_2492_);
v___x_2494_ = v___x_2484_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v___x_2492_);
lean_ctor_set(v_reuseFailAlloc_2498_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2498_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2498_, 3, v_r_2478_);
lean_ctor_set(v_reuseFailAlloc_2498_, 4, v_r_2452_);
v___x_2494_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
lean_object* v___x_2496_; 
if (v_isShared_2473_ == 0)
{
lean_ctor_set(v___x_2472_, 4, v___x_2494_);
lean_ctor_set(v___x_2472_, 3, v___y_2489_);
lean_ctor_set(v___x_2472_, 2, v_v_2476_);
lean_ctor_set(v___x_2472_, 1, v_k_2475_);
lean_ctor_set(v___x_2472_, 0, v___x_2487_);
v___x_2496_ = v___x_2472_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v___x_2487_);
lean_ctor_set(v_reuseFailAlloc_2497_, 1, v_k_2475_);
lean_ctor_set(v_reuseFailAlloc_2497_, 2, v_v_2476_);
lean_ctor_set(v_reuseFailAlloc_2497_, 3, v___y_2489_);
lean_ctor_set(v_reuseFailAlloc_2497_, 4, v___x_2494_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
v___jp_2499_:
{
lean_object* v___x_2501_; lean_object* v___x_2503_; 
v___x_2501_ = lean_nat_add(v___x_2486_, v___y_2500_);
lean_dec(v___y_2500_);
lean_dec(v___x_2486_);
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 4, v_l_2477_);
lean_ctor_set(v___x_2456_, 3, v_tree_2459_);
lean_ctor_set(v___x_2456_, 2, v_v_2461_);
lean_ctor_set(v___x_2456_, 1, v_k_2460_);
lean_ctor_set(v___x_2456_, 0, v___x_2501_);
v___x_2503_ = v___x_2456_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v___x_2501_);
lean_ctor_set(v_reuseFailAlloc_2507_, 1, v_k_2460_);
lean_ctor_set(v_reuseFailAlloc_2507_, 2, v_v_2461_);
lean_ctor_set(v_reuseFailAlloc_2507_, 3, v_tree_2459_);
lean_ctor_set(v_reuseFailAlloc_2507_, 4, v_l_2477_);
v___x_2503_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
lean_object* v___x_2504_; 
v___x_2504_ = lean_nat_add(v___x_2453_, v_size_2479_);
if (lean_obj_tag(v_r_2478_) == 0)
{
lean_object* v_size_2505_; 
v_size_2505_ = lean_ctor_get(v_r_2478_, 0);
lean_inc(v_size_2505_);
v___y_2489_ = v___x_2503_;
v___y_2490_ = v___x_2504_;
v___y_2491_ = v_size_2505_;
goto v___jp_2488_;
}
else
{
lean_object* v___x_2506_; 
v___x_2506_ = lean_unsigned_to_nat(0u);
v___y_2489_ = v___x_2503_;
v___y_2490_ = v___x_2504_;
v___y_2491_ = v___x_2506_;
goto v___jp_2488_;
}
}
}
}
}
else
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2520_; 
v___x_2516_ = lean_nat_add(v___x_2453_, v_size_2462_);
v___x_2517_ = lean_nat_add(v___x_2516_, v_size_2448_);
lean_dec(v_size_2448_);
v___x_2518_ = lean_nat_add(v___x_2516_, v_size_2474_);
lean_dec(v___x_2516_);
if (v_isShared_2473_ == 0)
{
lean_ctor_set(v___x_2472_, 4, v_l_2451_);
lean_ctor_set(v___x_2472_, 3, v_tree_2459_);
lean_ctor_set(v___x_2472_, 2, v_v_2461_);
lean_ctor_set(v___x_2472_, 1, v_k_2460_);
lean_ctor_set(v___x_2472_, 0, v___x_2518_);
v___x_2520_ = v___x_2472_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v___x_2518_);
lean_ctor_set(v_reuseFailAlloc_2524_, 1, v_k_2460_);
lean_ctor_set(v_reuseFailAlloc_2524_, 2, v_v_2461_);
lean_ctor_set(v_reuseFailAlloc_2524_, 3, v_tree_2459_);
lean_ctor_set(v_reuseFailAlloc_2524_, 4, v_l_2451_);
v___x_2520_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
lean_object* v___x_2522_; 
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 4, v_r_2452_);
lean_ctor_set(v___x_2456_, 3, v___x_2520_);
lean_ctor_set(v___x_2456_, 2, v_v_2450_);
lean_ctor_set(v___x_2456_, 1, v_k_2449_);
lean_ctor_set(v___x_2456_, 0, v___x_2517_);
v___x_2522_ = v___x_2456_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v___x_2517_);
lean_ctor_set(v_reuseFailAlloc_2523_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2523_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2523_, 3, v___x_2520_);
lean_ctor_set(v_reuseFailAlloc_2523_, 4, v_r_2452_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
}
}
}
else
{
lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2584_; 
lean_inc(v_r_2452_);
lean_inc(v_v_2450_);
lean_inc(v_k_2449_);
lean_inc(v_size_2448_);
v_isSharedCheck_2584_ = !lean_is_exclusive(v_r_2264_);
if (v_isSharedCheck_2584_ == 0)
{
lean_object* v_unused_2585_; lean_object* v_unused_2586_; lean_object* v_unused_2587_; lean_object* v_unused_2588_; lean_object* v_unused_2589_; 
v_unused_2585_ = lean_ctor_get(v_r_2264_, 4);
lean_dec(v_unused_2585_);
v_unused_2586_ = lean_ctor_get(v_r_2264_, 3);
lean_dec(v_unused_2586_);
v_unused_2587_ = lean_ctor_get(v_r_2264_, 2);
lean_dec(v_unused_2587_);
v_unused_2588_ = lean_ctor_get(v_r_2264_, 1);
lean_dec(v_unused_2588_);
v_unused_2589_ = lean_ctor_get(v_r_2264_, 0);
lean_dec(v_unused_2589_);
v___x_2532_ = v_r_2264_;
v_isShared_2533_ = v_isSharedCheck_2584_;
goto v_resetjp_2531_;
}
else
{
lean_dec(v_r_2264_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2584_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
if (lean_obj_tag(v_l_2451_) == 0)
{
if (lean_obj_tag(v_r_2452_) == 0)
{
lean_object* v_k_2534_; lean_object* v_v_2535_; lean_object* v_size_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2540_; 
lean_inc(v_tree_2459_);
v_k_2534_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_k_2534_);
v_v_2535_ = lean_ctor_get(v___x_2458_, 1);
lean_inc(v_v_2535_);
lean_dec_ref(v___x_2458_);
v_size_2536_ = lean_ctor_get(v_l_2451_, 0);
v___x_2537_ = lean_nat_add(v___x_2453_, v_size_2448_);
lean_dec(v_size_2448_);
v___x_2538_ = lean_nat_add(v___x_2453_, v_size_2536_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 4, v_l_2451_);
lean_ctor_set(v___x_2532_, 3, v_tree_2459_);
lean_ctor_set(v___x_2532_, 2, v_v_2535_);
lean_ctor_set(v___x_2532_, 1, v_k_2534_);
lean_ctor_set(v___x_2532_, 0, v___x_2538_);
v___x_2540_ = v___x_2532_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v___x_2538_);
lean_ctor_set(v_reuseFailAlloc_2544_, 1, v_k_2534_);
lean_ctor_set(v_reuseFailAlloc_2544_, 2, v_v_2535_);
lean_ctor_set(v_reuseFailAlloc_2544_, 3, v_tree_2459_);
lean_ctor_set(v_reuseFailAlloc_2544_, 4, v_l_2451_);
v___x_2540_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
lean_object* v___x_2542_; 
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 4, v_r_2452_);
lean_ctor_set(v___x_2456_, 3, v___x_2540_);
lean_ctor_set(v___x_2456_, 2, v_v_2450_);
lean_ctor_set(v___x_2456_, 1, v_k_2449_);
lean_ctor_set(v___x_2456_, 0, v___x_2537_);
v___x_2542_ = v___x_2456_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2537_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2543_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2543_, 3, v___x_2540_);
lean_ctor_set(v_reuseFailAlloc_2543_, 4, v_r_2452_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
else
{
lean_object* v_k_2545_; lean_object* v_v_2546_; lean_object* v_k_2547_; lean_object* v_v_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2562_; 
lean_dec(v_size_2448_);
v_k_2545_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_k_2545_);
v_v_2546_ = lean_ctor_get(v___x_2458_, 1);
lean_inc(v_v_2546_);
lean_dec_ref(v___x_2458_);
v_k_2547_ = lean_ctor_get(v_l_2451_, 1);
v_v_2548_ = lean_ctor_get(v_l_2451_, 2);
v_isSharedCheck_2562_ = !lean_is_exclusive(v_l_2451_);
if (v_isSharedCheck_2562_ == 0)
{
lean_object* v_unused_2563_; lean_object* v_unused_2564_; lean_object* v_unused_2565_; 
v_unused_2563_ = lean_ctor_get(v_l_2451_, 4);
lean_dec(v_unused_2563_);
v_unused_2564_ = lean_ctor_get(v_l_2451_, 3);
lean_dec(v_unused_2564_);
v_unused_2565_ = lean_ctor_get(v_l_2451_, 0);
lean_dec(v_unused_2565_);
v___x_2550_ = v_l_2451_;
v_isShared_2551_ = v_isSharedCheck_2562_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_v_2548_);
lean_inc(v_k_2547_);
lean_dec(v_l_2451_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2562_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2552_; lean_object* v___x_2554_; 
v___x_2552_ = lean_unsigned_to_nat(3u);
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 4, v_r_2452_);
lean_ctor_set(v___x_2550_, 3, v_r_2452_);
lean_ctor_set(v___x_2550_, 2, v_v_2546_);
lean_ctor_set(v___x_2550_, 1, v_k_2545_);
lean_ctor_set(v___x_2550_, 0, v___x_2453_);
v___x_2554_ = v___x_2550_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v___x_2453_);
lean_ctor_set(v_reuseFailAlloc_2561_, 1, v_k_2545_);
lean_ctor_set(v_reuseFailAlloc_2561_, 2, v_v_2546_);
lean_ctor_set(v_reuseFailAlloc_2561_, 3, v_r_2452_);
lean_ctor_set(v_reuseFailAlloc_2561_, 4, v_r_2452_);
v___x_2554_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
lean_object* v___x_2556_; 
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 3, v_r_2452_);
lean_ctor_set(v___x_2532_, 0, v___x_2453_);
v___x_2556_ = v___x_2532_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2453_);
lean_ctor_set(v_reuseFailAlloc_2560_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2560_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2560_, 3, v_r_2452_);
lean_ctor_set(v_reuseFailAlloc_2560_, 4, v_r_2452_);
v___x_2556_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
lean_object* v___x_2558_; 
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 4, v___x_2556_);
lean_ctor_set(v___x_2456_, 3, v___x_2554_);
lean_ctor_set(v___x_2456_, 2, v_v_2548_);
lean_ctor_set(v___x_2456_, 1, v_k_2547_);
lean_ctor_set(v___x_2456_, 0, v___x_2552_);
v___x_2558_ = v___x_2456_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v___x_2552_);
lean_ctor_set(v_reuseFailAlloc_2559_, 1, v_k_2547_);
lean_ctor_set(v_reuseFailAlloc_2559_, 2, v_v_2548_);
lean_ctor_set(v_reuseFailAlloc_2559_, 3, v___x_2554_);
lean_ctor_set(v_reuseFailAlloc_2559_, 4, v___x_2556_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
return v___x_2558_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2452_) == 0)
{
lean_object* v_k_2566_; lean_object* v_v_2567_; lean_object* v___x_2568_; lean_object* v___x_2570_; 
lean_dec(v_size_2448_);
v_k_2566_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_k_2566_);
v_v_2567_ = lean_ctor_get(v___x_2458_, 1);
lean_inc(v_v_2567_);
lean_dec_ref(v___x_2458_);
v___x_2568_ = lean_unsigned_to_nat(3u);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 4, v_l_2451_);
lean_ctor_set(v___x_2532_, 2, v_v_2567_);
lean_ctor_set(v___x_2532_, 1, v_k_2566_);
lean_ctor_set(v___x_2532_, 0, v___x_2453_);
v___x_2570_ = v___x_2532_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2453_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_k_2566_);
lean_ctor_set(v_reuseFailAlloc_2574_, 2, v_v_2567_);
lean_ctor_set(v_reuseFailAlloc_2574_, 3, v_l_2451_);
lean_ctor_set(v_reuseFailAlloc_2574_, 4, v_l_2451_);
v___x_2570_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
lean_object* v___x_2572_; 
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 4, v_r_2452_);
lean_ctor_set(v___x_2456_, 3, v___x_2570_);
lean_ctor_set(v___x_2456_, 2, v_v_2450_);
lean_ctor_set(v___x_2456_, 1, v_k_2449_);
lean_ctor_set(v___x_2456_, 0, v___x_2568_);
v___x_2572_ = v___x_2456_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v___x_2568_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2573_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2573_, 3, v___x_2570_);
lean_ctor_set(v_reuseFailAlloc_2573_, 4, v_r_2452_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
else
{
lean_object* v_k_2575_; lean_object* v_v_2576_; lean_object* v___x_2578_; 
v_k_2575_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_k_2575_);
v_v_2576_ = lean_ctor_get(v___x_2458_, 1);
lean_inc(v_v_2576_);
lean_dec_ref(v___x_2458_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 3, v_r_2452_);
v___x_2578_ = v___x_2532_;
goto v_reusejp_2577_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_size_2448_);
lean_ctor_set(v_reuseFailAlloc_2583_, 1, v_k_2449_);
lean_ctor_set(v_reuseFailAlloc_2583_, 2, v_v_2450_);
lean_ctor_set(v_reuseFailAlloc_2583_, 3, v_r_2452_);
lean_ctor_set(v_reuseFailAlloc_2583_, 4, v_r_2452_);
v___x_2578_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2577_;
}
v_reusejp_2577_:
{
lean_object* v___x_2579_; lean_object* v___x_2581_; 
v___x_2579_ = lean_unsigned_to_nat(2u);
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 4, v___x_2578_);
lean_ctor_set(v___x_2456_, 3, v_r_2452_);
lean_ctor_set(v___x_2456_, 2, v_v_2576_);
lean_ctor_set(v___x_2456_, 1, v_k_2575_);
lean_ctor_set(v___x_2456_, 0, v___x_2579_);
v___x_2581_ = v___x_2456_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2579_);
lean_ctor_set(v_reuseFailAlloc_2582_, 1, v_k_2575_);
lean_ctor_set(v_reuseFailAlloc_2582_, 2, v_v_2576_);
lean_ctor_set(v_reuseFailAlloc_2582_, 3, v_r_2452_);
lean_ctor_set(v_reuseFailAlloc_2582_, 4, v___x_2578_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
return v___x_2581_;
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
lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2748_; 
lean_inc(v_r_2452_);
lean_inc(v_v_2450_);
lean_inc(v_k_2449_);
v_isSharedCheck_2748_ = !lean_is_exclusive(v_r_2264_);
if (v_isSharedCheck_2748_ == 0)
{
lean_object* v_unused_2749_; lean_object* v_unused_2750_; lean_object* v_unused_2751_; lean_object* v_unused_2752_; lean_object* v_unused_2753_; 
v_unused_2749_ = lean_ctor_get(v_r_2264_, 4);
lean_dec(v_unused_2749_);
v_unused_2750_ = lean_ctor_get(v_r_2264_, 3);
lean_dec(v_unused_2750_);
v_unused_2751_ = lean_ctor_get(v_r_2264_, 2);
lean_dec(v_unused_2751_);
v_unused_2752_ = lean_ctor_get(v_r_2264_, 1);
lean_dec(v_unused_2752_);
v_unused_2753_ = lean_ctor_get(v_r_2264_, 0);
lean_dec(v_unused_2753_);
v___x_2597_ = v_r_2264_;
v_isShared_2598_ = v_isSharedCheck_2748_;
goto v_resetjp_2596_;
}
else
{
lean_dec(v_r_2264_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2748_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2599_; lean_object* v_tree_2600_; 
v___x_2599_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_2449_, v_v_2450_, v_l_2451_, v_r_2452_);
v_tree_2600_ = lean_ctor_get(v___x_2599_, 2);
lean_inc(v_tree_2600_);
if (lean_obj_tag(v_tree_2600_) == 0)
{
lean_object* v_k_2601_; lean_object* v_v_2602_; lean_object* v_size_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; uint8_t v___x_2606_; 
v_k_2601_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_k_2601_);
v_v_2602_ = lean_ctor_get(v___x_2599_, 1);
lean_inc(v_v_2602_);
lean_dec_ref(v___x_2599_);
v_size_2603_ = lean_ctor_get(v_tree_2600_, 0);
v___x_2604_ = lean_unsigned_to_nat(3u);
v___x_2605_ = lean_nat_mul(v___x_2604_, v_size_2603_);
v___x_2606_ = lean_nat_dec_lt(v___x_2605_, v_size_2443_);
lean_dec(v___x_2605_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2610_; 
lean_dec(v_r_2447_);
v___x_2607_ = lean_nat_add(v___x_2453_, v_size_2443_);
v___x_2608_ = lean_nat_add(v___x_2607_, v_size_2603_);
lean_dec(v___x_2607_);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 4, v_tree_2600_);
lean_ctor_set(v___x_2597_, 3, v_l_2263_);
lean_ctor_set(v___x_2597_, 2, v_v_2602_);
lean_ctor_set(v___x_2597_, 1, v_k_2601_);
lean_ctor_set(v___x_2597_, 0, v___x_2608_);
v___x_2610_ = v___x_2597_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v___x_2608_);
lean_ctor_set(v_reuseFailAlloc_2611_, 1, v_k_2601_);
lean_ctor_set(v_reuseFailAlloc_2611_, 2, v_v_2602_);
lean_ctor_set(v_reuseFailAlloc_2611_, 3, v_l_2263_);
lean_ctor_set(v_reuseFailAlloc_2611_, 4, v_tree_2600_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
else
{
lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2677_; 
lean_inc(v_l_2446_);
lean_inc(v_v_2445_);
lean_inc(v_k_2444_);
lean_inc(v_size_2443_);
v_isSharedCheck_2677_ = !lean_is_exclusive(v_l_2263_);
if (v_isSharedCheck_2677_ == 0)
{
lean_object* v_unused_2678_; lean_object* v_unused_2679_; lean_object* v_unused_2680_; lean_object* v_unused_2681_; lean_object* v_unused_2682_; 
v_unused_2678_ = lean_ctor_get(v_l_2263_, 4);
lean_dec(v_unused_2678_);
v_unused_2679_ = lean_ctor_get(v_l_2263_, 3);
lean_dec(v_unused_2679_);
v_unused_2680_ = lean_ctor_get(v_l_2263_, 2);
lean_dec(v_unused_2680_);
v_unused_2681_ = lean_ctor_get(v_l_2263_, 1);
lean_dec(v_unused_2681_);
v_unused_2682_ = lean_ctor_get(v_l_2263_, 0);
lean_dec(v_unused_2682_);
v___x_2613_ = v_l_2263_;
v_isShared_2614_ = v_isSharedCheck_2677_;
goto v_resetjp_2612_;
}
else
{
lean_dec(v_l_2263_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2677_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v_size_2615_; lean_object* v_size_2616_; lean_object* v_k_2617_; lean_object* v_v_2618_; lean_object* v_l_2619_; lean_object* v_r_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; uint8_t v___x_2623_; 
v_size_2615_ = lean_ctor_get(v_l_2446_, 0);
v_size_2616_ = lean_ctor_get(v_r_2447_, 0);
v_k_2617_ = lean_ctor_get(v_r_2447_, 1);
v_v_2618_ = lean_ctor_get(v_r_2447_, 2);
v_l_2619_ = lean_ctor_get(v_r_2447_, 3);
v_r_2620_ = lean_ctor_get(v_r_2447_, 4);
v___x_2621_ = lean_unsigned_to_nat(2u);
v___x_2622_ = lean_nat_mul(v___x_2621_, v_size_2615_);
v___x_2623_ = lean_nat_dec_lt(v_size_2616_, v___x_2622_);
lean_dec(v___x_2622_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2661_; 
lean_inc(v_r_2620_);
lean_inc(v_l_2619_);
lean_inc(v_v_2618_);
lean_inc(v_k_2617_);
lean_del_object(v___x_2613_);
v_isSharedCheck_2661_ = !lean_is_exclusive(v_r_2447_);
if (v_isSharedCheck_2661_ == 0)
{
lean_object* v_unused_2662_; lean_object* v_unused_2663_; lean_object* v_unused_2664_; lean_object* v_unused_2665_; lean_object* v_unused_2666_; 
v_unused_2662_ = lean_ctor_get(v_r_2447_, 4);
lean_dec(v_unused_2662_);
v_unused_2663_ = lean_ctor_get(v_r_2447_, 3);
lean_dec(v_unused_2663_);
v_unused_2664_ = lean_ctor_get(v_r_2447_, 2);
lean_dec(v_unused_2664_);
v_unused_2665_ = lean_ctor_get(v_r_2447_, 1);
lean_dec(v_unused_2665_);
v_unused_2666_ = lean_ctor_get(v_r_2447_, 0);
lean_dec(v_unused_2666_);
v___x_2625_ = v_r_2447_;
v_isShared_2626_ = v_isSharedCheck_2661_;
goto v_resetjp_2624_;
}
else
{
lean_dec(v_r_2447_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2661_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___x_2649_; lean_object* v___y_2651_; 
v___x_2627_ = lean_nat_add(v___x_2453_, v_size_2443_);
lean_dec(v_size_2443_);
v___x_2628_ = lean_nat_add(v___x_2627_, v_size_2603_);
lean_dec(v___x_2627_);
v___x_2649_ = lean_nat_add(v___x_2453_, v_size_2615_);
if (lean_obj_tag(v_l_2619_) == 0)
{
lean_object* v_size_2659_; 
v_size_2659_ = lean_ctor_get(v_l_2619_, 0);
lean_inc(v_size_2659_);
v___y_2651_ = v_size_2659_;
goto v___jp_2650_;
}
else
{
lean_object* v___x_2660_; 
v___x_2660_ = lean_unsigned_to_nat(0u);
v___y_2651_ = v___x_2660_;
goto v___jp_2650_;
}
v___jp_2629_:
{
lean_object* v___x_2633_; lean_object* v___x_2635_; 
v___x_2633_ = lean_nat_add(v___y_2631_, v___y_2632_);
lean_dec(v___y_2632_);
lean_dec(v___y_2631_);
lean_inc_ref(v_tree_2600_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 4, v_tree_2600_);
lean_ctor_set(v___x_2625_, 3, v_r_2620_);
lean_ctor_set(v___x_2625_, 2, v_v_2602_);
lean_ctor_set(v___x_2625_, 1, v_k_2601_);
lean_ctor_set(v___x_2625_, 0, v___x_2633_);
v___x_2635_ = v___x_2625_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v___x_2633_);
lean_ctor_set(v_reuseFailAlloc_2648_, 1, v_k_2601_);
lean_ctor_set(v_reuseFailAlloc_2648_, 2, v_v_2602_);
lean_ctor_set(v_reuseFailAlloc_2648_, 3, v_r_2620_);
lean_ctor_set(v_reuseFailAlloc_2648_, 4, v_tree_2600_);
v___x_2635_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2642_; 
v_isSharedCheck_2642_ = !lean_is_exclusive(v_tree_2600_);
if (v_isSharedCheck_2642_ == 0)
{
lean_object* v_unused_2643_; lean_object* v_unused_2644_; lean_object* v_unused_2645_; lean_object* v_unused_2646_; lean_object* v_unused_2647_; 
v_unused_2643_ = lean_ctor_get(v_tree_2600_, 4);
lean_dec(v_unused_2643_);
v_unused_2644_ = lean_ctor_get(v_tree_2600_, 3);
lean_dec(v_unused_2644_);
v_unused_2645_ = lean_ctor_get(v_tree_2600_, 2);
lean_dec(v_unused_2645_);
v_unused_2646_ = lean_ctor_get(v_tree_2600_, 1);
lean_dec(v_unused_2646_);
v_unused_2647_ = lean_ctor_get(v_tree_2600_, 0);
lean_dec(v_unused_2647_);
v___x_2637_ = v_tree_2600_;
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
else
{
lean_dec(v_tree_2600_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2642_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2640_; 
if (v_isShared_2638_ == 0)
{
lean_ctor_set(v___x_2637_, 4, v___x_2635_);
lean_ctor_set(v___x_2637_, 3, v___y_2630_);
lean_ctor_set(v___x_2637_, 2, v_v_2618_);
lean_ctor_set(v___x_2637_, 1, v_k_2617_);
lean_ctor_set(v___x_2637_, 0, v___x_2628_);
v___x_2640_ = v___x_2637_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v___x_2628_);
lean_ctor_set(v_reuseFailAlloc_2641_, 1, v_k_2617_);
lean_ctor_set(v_reuseFailAlloc_2641_, 2, v_v_2618_);
lean_ctor_set(v_reuseFailAlloc_2641_, 3, v___y_2630_);
lean_ctor_set(v_reuseFailAlloc_2641_, 4, v___x_2635_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
}
}
v___jp_2650_:
{
lean_object* v___x_2652_; lean_object* v___x_2654_; 
v___x_2652_ = lean_nat_add(v___x_2649_, v___y_2651_);
lean_dec(v___y_2651_);
lean_dec(v___x_2649_);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 4, v_l_2619_);
lean_ctor_set(v___x_2597_, 3, v_l_2446_);
lean_ctor_set(v___x_2597_, 2, v_v_2445_);
lean_ctor_set(v___x_2597_, 1, v_k_2444_);
lean_ctor_set(v___x_2597_, 0, v___x_2652_);
v___x_2654_ = v___x_2597_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v___x_2652_);
lean_ctor_set(v_reuseFailAlloc_2658_, 1, v_k_2444_);
lean_ctor_set(v_reuseFailAlloc_2658_, 2, v_v_2445_);
lean_ctor_set(v_reuseFailAlloc_2658_, 3, v_l_2446_);
lean_ctor_set(v_reuseFailAlloc_2658_, 4, v_l_2619_);
v___x_2654_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
lean_object* v___x_2655_; 
v___x_2655_ = lean_nat_add(v___x_2453_, v_size_2603_);
if (lean_obj_tag(v_r_2620_) == 0)
{
lean_object* v_size_2656_; 
v_size_2656_ = lean_ctor_get(v_r_2620_, 0);
lean_inc(v_size_2656_);
v___y_2630_ = v___x_2654_;
v___y_2631_ = v___x_2655_;
v___y_2632_ = v_size_2656_;
goto v___jp_2629_;
}
else
{
lean_object* v___x_2657_; 
v___x_2657_ = lean_unsigned_to_nat(0u);
v___y_2630_ = v___x_2654_;
v___y_2631_ = v___x_2655_;
v___y_2632_ = v___x_2657_;
goto v___jp_2629_;
}
}
}
}
}
else
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2672_; 
v___x_2667_ = lean_nat_add(v___x_2453_, v_size_2443_);
lean_dec(v_size_2443_);
v___x_2668_ = lean_nat_add(v___x_2667_, v_size_2603_);
lean_dec(v___x_2667_);
v___x_2669_ = lean_nat_add(v___x_2453_, v_size_2603_);
v___x_2670_ = lean_nat_add(v___x_2669_, v_size_2616_);
lean_dec(v___x_2669_);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 4, v_tree_2600_);
lean_ctor_set(v___x_2597_, 3, v_r_2447_);
lean_ctor_set(v___x_2597_, 2, v_v_2602_);
lean_ctor_set(v___x_2597_, 1, v_k_2601_);
lean_ctor_set(v___x_2597_, 0, v___x_2670_);
v___x_2672_ = v___x_2597_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2670_);
lean_ctor_set(v_reuseFailAlloc_2676_, 1, v_k_2601_);
lean_ctor_set(v_reuseFailAlloc_2676_, 2, v_v_2602_);
lean_ctor_set(v_reuseFailAlloc_2676_, 3, v_r_2447_);
lean_ctor_set(v_reuseFailAlloc_2676_, 4, v_tree_2600_);
v___x_2672_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
lean_object* v___x_2674_; 
if (v_isShared_2614_ == 0)
{
lean_ctor_set(v___x_2613_, 4, v___x_2672_);
lean_ctor_set(v___x_2613_, 0, v___x_2668_);
v___x_2674_ = v___x_2613_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v___x_2668_);
lean_ctor_set(v_reuseFailAlloc_2675_, 1, v_k_2444_);
lean_ctor_set(v_reuseFailAlloc_2675_, 2, v_v_2445_);
lean_ctor_set(v_reuseFailAlloc_2675_, 3, v_l_2446_);
lean_ctor_set(v_reuseFailAlloc_2675_, 4, v___x_2672_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_2446_) == 0)
{
lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2706_; 
lean_inc_ref(v_l_2446_);
lean_inc(v_v_2445_);
lean_inc(v_k_2444_);
lean_inc(v_size_2443_);
v_isSharedCheck_2706_ = !lean_is_exclusive(v_l_2263_);
if (v_isSharedCheck_2706_ == 0)
{
lean_object* v_unused_2707_; lean_object* v_unused_2708_; lean_object* v_unused_2709_; lean_object* v_unused_2710_; lean_object* v_unused_2711_; 
v_unused_2707_ = lean_ctor_get(v_l_2263_, 4);
lean_dec(v_unused_2707_);
v_unused_2708_ = lean_ctor_get(v_l_2263_, 3);
lean_dec(v_unused_2708_);
v_unused_2709_ = lean_ctor_get(v_l_2263_, 2);
lean_dec(v_unused_2709_);
v_unused_2710_ = lean_ctor_get(v_l_2263_, 1);
lean_dec(v_unused_2710_);
v_unused_2711_ = lean_ctor_get(v_l_2263_, 0);
lean_dec(v_unused_2711_);
v___x_2684_ = v_l_2263_;
v_isShared_2685_ = v_isSharedCheck_2706_;
goto v_resetjp_2683_;
}
else
{
lean_dec(v_l_2263_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2706_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
if (lean_obj_tag(v_r_2447_) == 0)
{
lean_object* v_k_2686_; lean_object* v_v_2687_; lean_object* v_size_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2692_; 
v_k_2686_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_k_2686_);
v_v_2687_ = lean_ctor_get(v___x_2599_, 1);
lean_inc(v_v_2687_);
lean_dec_ref(v___x_2599_);
v_size_2688_ = lean_ctor_get(v_r_2447_, 0);
v___x_2689_ = lean_nat_add(v___x_2453_, v_size_2443_);
lean_dec(v_size_2443_);
v___x_2690_ = lean_nat_add(v___x_2453_, v_size_2688_);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 4, v_tree_2600_);
lean_ctor_set(v___x_2597_, 3, v_r_2447_);
lean_ctor_set(v___x_2597_, 2, v_v_2687_);
lean_ctor_set(v___x_2597_, 1, v_k_2686_);
lean_ctor_set(v___x_2597_, 0, v___x_2690_);
v___x_2692_ = v___x_2597_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2690_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v_k_2686_);
lean_ctor_set(v_reuseFailAlloc_2696_, 2, v_v_2687_);
lean_ctor_set(v_reuseFailAlloc_2696_, 3, v_r_2447_);
lean_ctor_set(v_reuseFailAlloc_2696_, 4, v_tree_2600_);
v___x_2692_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
lean_object* v___x_2694_; 
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 4, v___x_2692_);
lean_ctor_set(v___x_2684_, 0, v___x_2689_);
v___x_2694_ = v___x_2684_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v___x_2689_);
lean_ctor_set(v_reuseFailAlloc_2695_, 1, v_k_2444_);
lean_ctor_set(v_reuseFailAlloc_2695_, 2, v_v_2445_);
lean_ctor_set(v_reuseFailAlloc_2695_, 3, v_l_2446_);
lean_ctor_set(v_reuseFailAlloc_2695_, 4, v___x_2692_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
else
{
lean_object* v_k_2697_; lean_object* v_v_2698_; lean_object* v___x_2699_; lean_object* v___x_2701_; 
lean_dec(v_size_2443_);
v_k_2697_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_k_2697_);
v_v_2698_ = lean_ctor_get(v___x_2599_, 1);
lean_inc(v_v_2698_);
lean_dec_ref(v___x_2599_);
v___x_2699_ = lean_unsigned_to_nat(3u);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 4, v_r_2447_);
lean_ctor_set(v___x_2597_, 3, v_r_2447_);
lean_ctor_set(v___x_2597_, 2, v_v_2698_);
lean_ctor_set(v___x_2597_, 1, v_k_2697_);
lean_ctor_set(v___x_2597_, 0, v___x_2453_);
v___x_2701_ = v___x_2597_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v___x_2453_);
lean_ctor_set(v_reuseFailAlloc_2705_, 1, v_k_2697_);
lean_ctor_set(v_reuseFailAlloc_2705_, 2, v_v_2698_);
lean_ctor_set(v_reuseFailAlloc_2705_, 3, v_r_2447_);
lean_ctor_set(v_reuseFailAlloc_2705_, 4, v_r_2447_);
v___x_2701_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
lean_object* v___x_2703_; 
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 4, v___x_2701_);
lean_ctor_set(v___x_2684_, 0, v___x_2699_);
v___x_2703_ = v___x_2684_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2699_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v_k_2444_);
lean_ctor_set(v_reuseFailAlloc_2704_, 2, v_v_2445_);
lean_ctor_set(v_reuseFailAlloc_2704_, 3, v_l_2446_);
lean_ctor_set(v_reuseFailAlloc_2704_, 4, v___x_2701_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2447_) == 0)
{
lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2736_; 
lean_inc(v_l_2446_);
lean_inc(v_v_2445_);
lean_inc(v_k_2444_);
v_isSharedCheck_2736_ = !lean_is_exclusive(v_l_2263_);
if (v_isSharedCheck_2736_ == 0)
{
lean_object* v_unused_2737_; lean_object* v_unused_2738_; lean_object* v_unused_2739_; lean_object* v_unused_2740_; lean_object* v_unused_2741_; 
v_unused_2737_ = lean_ctor_get(v_l_2263_, 4);
lean_dec(v_unused_2737_);
v_unused_2738_ = lean_ctor_get(v_l_2263_, 3);
lean_dec(v_unused_2738_);
v_unused_2739_ = lean_ctor_get(v_l_2263_, 2);
lean_dec(v_unused_2739_);
v_unused_2740_ = lean_ctor_get(v_l_2263_, 1);
lean_dec(v_unused_2740_);
v_unused_2741_ = lean_ctor_get(v_l_2263_, 0);
lean_dec(v_unused_2741_);
v___x_2713_ = v_l_2263_;
v_isShared_2714_ = v_isSharedCheck_2736_;
goto v_resetjp_2712_;
}
else
{
lean_dec(v_l_2263_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2736_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v_k_2715_; lean_object* v_v_2716_; lean_object* v_k_2717_; lean_object* v_v_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2732_; 
v_k_2715_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_k_2715_);
v_v_2716_ = lean_ctor_get(v___x_2599_, 1);
lean_inc(v_v_2716_);
lean_dec_ref(v___x_2599_);
v_k_2717_ = lean_ctor_get(v_r_2447_, 1);
v_v_2718_ = lean_ctor_get(v_r_2447_, 2);
v_isSharedCheck_2732_ = !lean_is_exclusive(v_r_2447_);
if (v_isSharedCheck_2732_ == 0)
{
lean_object* v_unused_2733_; lean_object* v_unused_2734_; lean_object* v_unused_2735_; 
v_unused_2733_ = lean_ctor_get(v_r_2447_, 4);
lean_dec(v_unused_2733_);
v_unused_2734_ = lean_ctor_get(v_r_2447_, 3);
lean_dec(v_unused_2734_);
v_unused_2735_ = lean_ctor_get(v_r_2447_, 0);
lean_dec(v_unused_2735_);
v___x_2720_ = v_r_2447_;
v_isShared_2721_ = v_isSharedCheck_2732_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_v_2718_);
lean_inc(v_k_2717_);
lean_dec(v_r_2447_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2732_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2722_; lean_object* v___x_2724_; 
v___x_2722_ = lean_unsigned_to_nat(3u);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 4, v_l_2446_);
lean_ctor_set(v___x_2720_, 3, v_l_2446_);
lean_ctor_set(v___x_2720_, 2, v_v_2445_);
lean_ctor_set(v___x_2720_, 1, v_k_2444_);
lean_ctor_set(v___x_2720_, 0, v___x_2453_);
v___x_2724_ = v___x_2720_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v___x_2453_);
lean_ctor_set(v_reuseFailAlloc_2731_, 1, v_k_2444_);
lean_ctor_set(v_reuseFailAlloc_2731_, 2, v_v_2445_);
lean_ctor_set(v_reuseFailAlloc_2731_, 3, v_l_2446_);
lean_ctor_set(v_reuseFailAlloc_2731_, 4, v_l_2446_);
v___x_2724_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
lean_object* v___x_2726_; 
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 4, v_l_2446_);
lean_ctor_set(v___x_2597_, 3, v_l_2446_);
lean_ctor_set(v___x_2597_, 2, v_v_2716_);
lean_ctor_set(v___x_2597_, 1, v_k_2715_);
lean_ctor_set(v___x_2597_, 0, v___x_2453_);
v___x_2726_ = v___x_2597_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v___x_2453_);
lean_ctor_set(v_reuseFailAlloc_2730_, 1, v_k_2715_);
lean_ctor_set(v_reuseFailAlloc_2730_, 2, v_v_2716_);
lean_ctor_set(v_reuseFailAlloc_2730_, 3, v_l_2446_);
lean_ctor_set(v_reuseFailAlloc_2730_, 4, v_l_2446_);
v___x_2726_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
lean_object* v___x_2728_; 
if (v_isShared_2714_ == 0)
{
lean_ctor_set(v___x_2713_, 4, v___x_2726_);
lean_ctor_set(v___x_2713_, 3, v___x_2724_);
lean_ctor_set(v___x_2713_, 2, v_v_2718_);
lean_ctor_set(v___x_2713_, 1, v_k_2717_);
lean_ctor_set(v___x_2713_, 0, v___x_2722_);
v___x_2728_ = v___x_2713_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2722_);
lean_ctor_set(v_reuseFailAlloc_2729_, 1, v_k_2717_);
lean_ctor_set(v_reuseFailAlloc_2729_, 2, v_v_2718_);
lean_ctor_set(v_reuseFailAlloc_2729_, 3, v___x_2724_);
lean_ctor_set(v_reuseFailAlloc_2729_, 4, v___x_2726_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
}
}
else
{
lean_object* v_k_2742_; lean_object* v_v_2743_; lean_object* v___x_2744_; lean_object* v___x_2746_; 
v_k_2742_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_k_2742_);
v_v_2743_ = lean_ctor_get(v___x_2599_, 1);
lean_inc(v_v_2743_);
lean_dec_ref(v___x_2599_);
v___x_2744_ = lean_unsigned_to_nat(2u);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 4, v_r_2447_);
lean_ctor_set(v___x_2597_, 3, v_l_2263_);
lean_ctor_set(v___x_2597_, 2, v_v_2743_);
lean_ctor_set(v___x_2597_, 1, v_k_2742_);
lean_ctor_set(v___x_2597_, 0, v___x_2744_);
v___x_2746_ = v___x_2597_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v___x_2744_);
lean_ctor_set(v_reuseFailAlloc_2747_, 1, v_k_2742_);
lean_ctor_set(v_reuseFailAlloc_2747_, 2, v_v_2743_);
lean_ctor_set(v_reuseFailAlloc_2747_, 3, v_l_2263_);
lean_ctor_set(v_reuseFailAlloc_2747_, 4, v_r_2447_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
}
}
}
}
}
}
}
else
{
return v_l_2263_;
}
}
else
{
return v_r_2264_;
}
}
default: 
{
lean_object* v_impl_2754_; lean_object* v___x_2755_; 
v_impl_2754_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_2259_, v_r_2264_);
v___x_2755_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_2754_) == 0)
{
if (lean_obj_tag(v_l_2263_) == 0)
{
lean_object* v_size_2756_; lean_object* v_size_2757_; lean_object* v_k_2758_; lean_object* v_v_2759_; lean_object* v_l_2760_; lean_object* v_r_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; uint8_t v___x_2764_; 
v_size_2756_ = lean_ctor_get(v_impl_2754_, 0);
v_size_2757_ = lean_ctor_get(v_l_2263_, 0);
v_k_2758_ = lean_ctor_get(v_l_2263_, 1);
v_v_2759_ = lean_ctor_get(v_l_2263_, 2);
v_l_2760_ = lean_ctor_get(v_l_2263_, 3);
v_r_2761_ = lean_ctor_get(v_l_2263_, 4);
lean_inc(v_r_2761_);
v___x_2762_ = lean_unsigned_to_nat(3u);
v___x_2763_ = lean_nat_mul(v___x_2762_, v_size_2756_);
v___x_2764_ = lean_nat_dec_lt(v___x_2763_, v_size_2757_);
lean_dec(v___x_2763_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2768_; 
lean_dec(v_r_2761_);
v___x_2765_ = lean_nat_add(v___x_2755_, v_size_2757_);
v___x_2766_ = lean_nat_add(v___x_2765_, v_size_2756_);
lean_dec(v___x_2765_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v_impl_2754_);
lean_ctor_set(v___x_2266_, 0, v___x_2766_);
v___x_2768_ = v___x_2266_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v___x_2766_);
lean_ctor_set(v_reuseFailAlloc_2769_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2769_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2769_, 3, v_l_2263_);
lean_ctor_set(v_reuseFailAlloc_2769_, 4, v_impl_2754_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
else
{
lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2835_; 
lean_inc(v_l_2760_);
lean_inc(v_v_2759_);
lean_inc(v_k_2758_);
lean_inc(v_size_2757_);
v_isSharedCheck_2835_ = !lean_is_exclusive(v_l_2263_);
if (v_isSharedCheck_2835_ == 0)
{
lean_object* v_unused_2836_; lean_object* v_unused_2837_; lean_object* v_unused_2838_; lean_object* v_unused_2839_; lean_object* v_unused_2840_; 
v_unused_2836_ = lean_ctor_get(v_l_2263_, 4);
lean_dec(v_unused_2836_);
v_unused_2837_ = lean_ctor_get(v_l_2263_, 3);
lean_dec(v_unused_2837_);
v_unused_2838_ = lean_ctor_get(v_l_2263_, 2);
lean_dec(v_unused_2838_);
v_unused_2839_ = lean_ctor_get(v_l_2263_, 1);
lean_dec(v_unused_2839_);
v_unused_2840_ = lean_ctor_get(v_l_2263_, 0);
lean_dec(v_unused_2840_);
v___x_2771_ = v_l_2263_;
v_isShared_2772_ = v_isSharedCheck_2835_;
goto v_resetjp_2770_;
}
else
{
lean_dec(v_l_2263_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2835_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v_size_2773_; lean_object* v_size_2774_; lean_object* v_k_2775_; lean_object* v_v_2776_; lean_object* v_l_2777_; lean_object* v_r_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; uint8_t v___x_2781_; 
v_size_2773_ = lean_ctor_get(v_l_2760_, 0);
v_size_2774_ = lean_ctor_get(v_r_2761_, 0);
v_k_2775_ = lean_ctor_get(v_r_2761_, 1);
v_v_2776_ = lean_ctor_get(v_r_2761_, 2);
v_l_2777_ = lean_ctor_get(v_r_2761_, 3);
v_r_2778_ = lean_ctor_get(v_r_2761_, 4);
v___x_2779_ = lean_unsigned_to_nat(2u);
v___x_2780_ = lean_nat_mul(v___x_2779_, v_size_2773_);
v___x_2781_ = lean_nat_dec_lt(v_size_2774_, v___x_2780_);
lean_dec(v___x_2780_);
if (v___x_2781_ == 0)
{
lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2810_; 
lean_inc(v_r_2778_);
lean_inc(v_l_2777_);
lean_inc(v_v_2776_);
lean_inc(v_k_2775_);
v_isSharedCheck_2810_ = !lean_is_exclusive(v_r_2761_);
if (v_isSharedCheck_2810_ == 0)
{
lean_object* v_unused_2811_; lean_object* v_unused_2812_; lean_object* v_unused_2813_; lean_object* v_unused_2814_; lean_object* v_unused_2815_; 
v_unused_2811_ = lean_ctor_get(v_r_2761_, 4);
lean_dec(v_unused_2811_);
v_unused_2812_ = lean_ctor_get(v_r_2761_, 3);
lean_dec(v_unused_2812_);
v_unused_2813_ = lean_ctor_get(v_r_2761_, 2);
lean_dec(v_unused_2813_);
v_unused_2814_ = lean_ctor_get(v_r_2761_, 1);
lean_dec(v_unused_2814_);
v_unused_2815_ = lean_ctor_get(v_r_2761_, 0);
lean_dec(v_unused_2815_);
v___x_2783_ = v_r_2761_;
v_isShared_2784_ = v_isSharedCheck_2810_;
goto v_resetjp_2782_;
}
else
{
lean_dec(v_r_2761_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2810_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v___x_2798_; lean_object* v___y_2800_; 
v___x_2785_ = lean_nat_add(v___x_2755_, v_size_2757_);
lean_dec(v_size_2757_);
v___x_2786_ = lean_nat_add(v___x_2785_, v_size_2756_);
lean_dec(v___x_2785_);
v___x_2798_ = lean_nat_add(v___x_2755_, v_size_2773_);
if (lean_obj_tag(v_l_2777_) == 0)
{
lean_object* v_size_2808_; 
v_size_2808_ = lean_ctor_get(v_l_2777_, 0);
lean_inc(v_size_2808_);
v___y_2800_ = v_size_2808_;
goto v___jp_2799_;
}
else
{
lean_object* v___x_2809_; 
v___x_2809_ = lean_unsigned_to_nat(0u);
v___y_2800_ = v___x_2809_;
goto v___jp_2799_;
}
v___jp_2787_:
{
lean_object* v___x_2791_; lean_object* v___x_2793_; 
v___x_2791_ = lean_nat_add(v___y_2789_, v___y_2790_);
lean_dec(v___y_2790_);
lean_dec(v___y_2789_);
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 4, v_impl_2754_);
lean_ctor_set(v___x_2783_, 3, v_r_2778_);
lean_ctor_set(v___x_2783_, 2, v_v_2262_);
lean_ctor_set(v___x_2783_, 1, v_k_2261_);
lean_ctor_set(v___x_2783_, 0, v___x_2791_);
v___x_2793_ = v___x_2783_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v___x_2791_);
lean_ctor_set(v_reuseFailAlloc_2797_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2797_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2797_, 3, v_r_2778_);
lean_ctor_set(v_reuseFailAlloc_2797_, 4, v_impl_2754_);
v___x_2793_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
lean_object* v___x_2795_; 
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 4, v___x_2793_);
lean_ctor_set(v___x_2771_, 3, v___y_2788_);
lean_ctor_set(v___x_2771_, 2, v_v_2776_);
lean_ctor_set(v___x_2771_, 1, v_k_2775_);
lean_ctor_set(v___x_2771_, 0, v___x_2786_);
v___x_2795_ = v___x_2771_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v___x_2786_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v_k_2775_);
lean_ctor_set(v_reuseFailAlloc_2796_, 2, v_v_2776_);
lean_ctor_set(v_reuseFailAlloc_2796_, 3, v___y_2788_);
lean_ctor_set(v_reuseFailAlloc_2796_, 4, v___x_2793_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
v___jp_2799_:
{
lean_object* v___x_2801_; lean_object* v___x_2803_; 
v___x_2801_ = lean_nat_add(v___x_2798_, v___y_2800_);
lean_dec(v___y_2800_);
lean_dec(v___x_2798_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v_l_2777_);
lean_ctor_set(v___x_2266_, 3, v_l_2760_);
lean_ctor_set(v___x_2266_, 2, v_v_2759_);
lean_ctor_set(v___x_2266_, 1, v_k_2758_);
lean_ctor_set(v___x_2266_, 0, v___x_2801_);
v___x_2803_ = v___x_2266_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2801_);
lean_ctor_set(v_reuseFailAlloc_2807_, 1, v_k_2758_);
lean_ctor_set(v_reuseFailAlloc_2807_, 2, v_v_2759_);
lean_ctor_set(v_reuseFailAlloc_2807_, 3, v_l_2760_);
lean_ctor_set(v_reuseFailAlloc_2807_, 4, v_l_2777_);
v___x_2803_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
lean_object* v___x_2804_; 
v___x_2804_ = lean_nat_add(v___x_2755_, v_size_2756_);
if (lean_obj_tag(v_r_2778_) == 0)
{
lean_object* v_size_2805_; 
v_size_2805_ = lean_ctor_get(v_r_2778_, 0);
lean_inc(v_size_2805_);
v___y_2788_ = v___x_2803_;
v___y_2789_ = v___x_2804_;
v___y_2790_ = v_size_2805_;
goto v___jp_2787_;
}
else
{
lean_object* v___x_2806_; 
v___x_2806_ = lean_unsigned_to_nat(0u);
v___y_2788_ = v___x_2803_;
v___y_2789_ = v___x_2804_;
v___y_2790_ = v___x_2806_;
goto v___jp_2787_;
}
}
}
}
}
else
{
lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2821_; 
lean_del_object(v___x_2266_);
v___x_2816_ = lean_nat_add(v___x_2755_, v_size_2757_);
lean_dec(v_size_2757_);
v___x_2817_ = lean_nat_add(v___x_2816_, v_size_2756_);
lean_dec(v___x_2816_);
v___x_2818_ = lean_nat_add(v___x_2755_, v_size_2756_);
v___x_2819_ = lean_nat_add(v___x_2818_, v_size_2774_);
lean_dec(v___x_2818_);
lean_inc_ref(v_impl_2754_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 4, v_impl_2754_);
lean_ctor_set(v___x_2771_, 3, v_r_2761_);
lean_ctor_set(v___x_2771_, 2, v_v_2262_);
lean_ctor_set(v___x_2771_, 1, v_k_2261_);
lean_ctor_set(v___x_2771_, 0, v___x_2819_);
v___x_2821_ = v___x_2771_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v___x_2819_);
lean_ctor_set(v_reuseFailAlloc_2834_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2834_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2834_, 3, v_r_2761_);
lean_ctor_set(v_reuseFailAlloc_2834_, 4, v_impl_2754_);
v___x_2821_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2828_; 
v_isSharedCheck_2828_ = !lean_is_exclusive(v_impl_2754_);
if (v_isSharedCheck_2828_ == 0)
{
lean_object* v_unused_2829_; lean_object* v_unused_2830_; lean_object* v_unused_2831_; lean_object* v_unused_2832_; lean_object* v_unused_2833_; 
v_unused_2829_ = lean_ctor_get(v_impl_2754_, 4);
lean_dec(v_unused_2829_);
v_unused_2830_ = lean_ctor_get(v_impl_2754_, 3);
lean_dec(v_unused_2830_);
v_unused_2831_ = lean_ctor_get(v_impl_2754_, 2);
lean_dec(v_unused_2831_);
v_unused_2832_ = lean_ctor_get(v_impl_2754_, 1);
lean_dec(v_unused_2832_);
v_unused_2833_ = lean_ctor_get(v_impl_2754_, 0);
lean_dec(v_unused_2833_);
v___x_2823_ = v_impl_2754_;
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
else
{
lean_dec(v_impl_2754_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
lean_ctor_set(v___x_2823_, 4, v___x_2821_);
lean_ctor_set(v___x_2823_, 3, v_l_2760_);
lean_ctor_set(v___x_2823_, 2, v_v_2759_);
lean_ctor_set(v___x_2823_, 1, v_k_2758_);
lean_ctor_set(v___x_2823_, 0, v___x_2817_);
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v___x_2817_);
lean_ctor_set(v_reuseFailAlloc_2827_, 1, v_k_2758_);
lean_ctor_set(v_reuseFailAlloc_2827_, 2, v_v_2759_);
lean_ctor_set(v_reuseFailAlloc_2827_, 3, v_l_2760_);
lean_ctor_set(v_reuseFailAlloc_2827_, 4, v___x_2821_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2841_; lean_object* v___x_2842_; lean_object* v___x_2844_; 
v_size_2841_ = lean_ctor_get(v_impl_2754_, 0);
v___x_2842_ = lean_nat_add(v___x_2755_, v_size_2841_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v_impl_2754_);
lean_ctor_set(v___x_2266_, 0, v___x_2842_);
v___x_2844_ = v___x_2266_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v___x_2842_);
lean_ctor_set(v_reuseFailAlloc_2845_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2845_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2845_, 3, v_l_2263_);
lean_ctor_set(v_reuseFailAlloc_2845_, 4, v_impl_2754_);
v___x_2844_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
return v___x_2844_;
}
}
}
else
{
if (lean_obj_tag(v_l_2263_) == 0)
{
lean_object* v_l_2846_; 
v_l_2846_ = lean_ctor_get(v_l_2263_, 3);
if (lean_obj_tag(v_l_2846_) == 0)
{
lean_object* v_r_2847_; 
lean_inc_ref(v_l_2846_);
v_r_2847_ = lean_ctor_get(v_l_2263_, 4);
lean_inc(v_r_2847_);
if (lean_obj_tag(v_r_2847_) == 0)
{
lean_object* v_size_2848_; lean_object* v_k_2849_; lean_object* v_v_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2863_; 
v_size_2848_ = lean_ctor_get(v_l_2263_, 0);
v_k_2849_ = lean_ctor_get(v_l_2263_, 1);
v_v_2850_ = lean_ctor_get(v_l_2263_, 2);
v_isSharedCheck_2863_ = !lean_is_exclusive(v_l_2263_);
if (v_isSharedCheck_2863_ == 0)
{
lean_object* v_unused_2864_; lean_object* v_unused_2865_; 
v_unused_2864_ = lean_ctor_get(v_l_2263_, 4);
lean_dec(v_unused_2864_);
v_unused_2865_ = lean_ctor_get(v_l_2263_, 3);
lean_dec(v_unused_2865_);
v___x_2852_ = v_l_2263_;
v_isShared_2853_ = v_isSharedCheck_2863_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_v_2850_);
lean_inc(v_k_2849_);
lean_inc(v_size_2848_);
lean_dec(v_l_2263_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2863_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v_size_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2858_; 
v_size_2854_ = lean_ctor_get(v_r_2847_, 0);
v___x_2855_ = lean_nat_add(v___x_2755_, v_size_2848_);
lean_dec(v_size_2848_);
v___x_2856_ = lean_nat_add(v___x_2755_, v_size_2854_);
if (v_isShared_2853_ == 0)
{
lean_ctor_set(v___x_2852_, 4, v_impl_2754_);
lean_ctor_set(v___x_2852_, 3, v_r_2847_);
lean_ctor_set(v___x_2852_, 2, v_v_2262_);
lean_ctor_set(v___x_2852_, 1, v_k_2261_);
lean_ctor_set(v___x_2852_, 0, v___x_2856_);
v___x_2858_ = v___x_2852_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v___x_2856_);
lean_ctor_set(v_reuseFailAlloc_2862_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2862_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2862_, 3, v_r_2847_);
lean_ctor_set(v_reuseFailAlloc_2862_, 4, v_impl_2754_);
v___x_2858_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
lean_object* v___x_2860_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v___x_2858_);
lean_ctor_set(v___x_2266_, 3, v_l_2846_);
lean_ctor_set(v___x_2266_, 2, v_v_2850_);
lean_ctor_set(v___x_2266_, 1, v_k_2849_);
lean_ctor_set(v___x_2266_, 0, v___x_2855_);
v___x_2860_ = v___x_2266_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v___x_2855_);
lean_ctor_set(v_reuseFailAlloc_2861_, 1, v_k_2849_);
lean_ctor_set(v_reuseFailAlloc_2861_, 2, v_v_2850_);
lean_ctor_set(v_reuseFailAlloc_2861_, 3, v_l_2846_);
lean_ctor_set(v_reuseFailAlloc_2861_, 4, v___x_2858_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
else
{
lean_object* v_k_2866_; lean_object* v_v_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2878_; 
v_k_2866_ = lean_ctor_get(v_l_2263_, 1);
v_v_2867_ = lean_ctor_get(v_l_2263_, 2);
v_isSharedCheck_2878_ = !lean_is_exclusive(v_l_2263_);
if (v_isSharedCheck_2878_ == 0)
{
lean_object* v_unused_2879_; lean_object* v_unused_2880_; lean_object* v_unused_2881_; 
v_unused_2879_ = lean_ctor_get(v_l_2263_, 4);
lean_dec(v_unused_2879_);
v_unused_2880_ = lean_ctor_get(v_l_2263_, 3);
lean_dec(v_unused_2880_);
v_unused_2881_ = lean_ctor_get(v_l_2263_, 0);
lean_dec(v_unused_2881_);
v___x_2869_ = v_l_2263_;
v_isShared_2870_ = v_isSharedCheck_2878_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_v_2867_);
lean_inc(v_k_2866_);
lean_dec(v_l_2263_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2878_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2871_; lean_object* v___x_2873_; 
v___x_2871_ = lean_unsigned_to_nat(3u);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 3, v_r_2847_);
lean_ctor_set(v___x_2869_, 2, v_v_2262_);
lean_ctor_set(v___x_2869_, 1, v_k_2261_);
lean_ctor_set(v___x_2869_, 0, v___x_2755_);
v___x_2873_ = v___x_2869_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v___x_2755_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2877_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2877_, 3, v_r_2847_);
lean_ctor_set(v_reuseFailAlloc_2877_, 4, v_r_2847_);
v___x_2873_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
lean_object* v___x_2875_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v___x_2873_);
lean_ctor_set(v___x_2266_, 3, v_l_2846_);
lean_ctor_set(v___x_2266_, 2, v_v_2867_);
lean_ctor_set(v___x_2266_, 1, v_k_2866_);
lean_ctor_set(v___x_2266_, 0, v___x_2871_);
v___x_2875_ = v___x_2266_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v___x_2871_);
lean_ctor_set(v_reuseFailAlloc_2876_, 1, v_k_2866_);
lean_ctor_set(v_reuseFailAlloc_2876_, 2, v_v_2867_);
lean_ctor_set(v_reuseFailAlloc_2876_, 3, v_l_2846_);
lean_ctor_set(v_reuseFailAlloc_2876_, 4, v___x_2873_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
}
}
else
{
lean_object* v_r_2882_; 
v_r_2882_ = lean_ctor_get(v_l_2263_, 4);
lean_inc(v_r_2882_);
if (lean_obj_tag(v_r_2882_) == 0)
{
lean_object* v_k_2883_; lean_object* v_v_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2907_; 
lean_inc(v_l_2846_);
v_k_2883_ = lean_ctor_get(v_l_2263_, 1);
v_v_2884_ = lean_ctor_get(v_l_2263_, 2);
v_isSharedCheck_2907_ = !lean_is_exclusive(v_l_2263_);
if (v_isSharedCheck_2907_ == 0)
{
lean_object* v_unused_2908_; lean_object* v_unused_2909_; lean_object* v_unused_2910_; 
v_unused_2908_ = lean_ctor_get(v_l_2263_, 4);
lean_dec(v_unused_2908_);
v_unused_2909_ = lean_ctor_get(v_l_2263_, 3);
lean_dec(v_unused_2909_);
v_unused_2910_ = lean_ctor_get(v_l_2263_, 0);
lean_dec(v_unused_2910_);
v___x_2886_ = v_l_2263_;
v_isShared_2887_ = v_isSharedCheck_2907_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_v_2884_);
lean_inc(v_k_2883_);
lean_dec(v_l_2263_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2907_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v_k_2888_; lean_object* v_v_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2903_; 
v_k_2888_ = lean_ctor_get(v_r_2882_, 1);
v_v_2889_ = lean_ctor_get(v_r_2882_, 2);
v_isSharedCheck_2903_ = !lean_is_exclusive(v_r_2882_);
if (v_isSharedCheck_2903_ == 0)
{
lean_object* v_unused_2904_; lean_object* v_unused_2905_; lean_object* v_unused_2906_; 
v_unused_2904_ = lean_ctor_get(v_r_2882_, 4);
lean_dec(v_unused_2904_);
v_unused_2905_ = lean_ctor_get(v_r_2882_, 3);
lean_dec(v_unused_2905_);
v_unused_2906_ = lean_ctor_get(v_r_2882_, 0);
lean_dec(v_unused_2906_);
v___x_2891_ = v_r_2882_;
v_isShared_2892_ = v_isSharedCheck_2903_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_v_2889_);
lean_inc(v_k_2888_);
lean_dec(v_r_2882_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2903_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2893_; lean_object* v___x_2895_; 
v___x_2893_ = lean_unsigned_to_nat(3u);
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 4, v_l_2846_);
lean_ctor_set(v___x_2891_, 3, v_l_2846_);
lean_ctor_set(v___x_2891_, 2, v_v_2884_);
lean_ctor_set(v___x_2891_, 1, v_k_2883_);
lean_ctor_set(v___x_2891_, 0, v___x_2755_);
v___x_2895_ = v___x_2891_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v___x_2755_);
lean_ctor_set(v_reuseFailAlloc_2902_, 1, v_k_2883_);
lean_ctor_set(v_reuseFailAlloc_2902_, 2, v_v_2884_);
lean_ctor_set(v_reuseFailAlloc_2902_, 3, v_l_2846_);
lean_ctor_set(v_reuseFailAlloc_2902_, 4, v_l_2846_);
v___x_2895_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
lean_object* v___x_2897_; 
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 4, v_l_2846_);
lean_ctor_set(v___x_2886_, 2, v_v_2262_);
lean_ctor_set(v___x_2886_, 1, v_k_2261_);
lean_ctor_set(v___x_2886_, 0, v___x_2755_);
v___x_2897_ = v___x_2886_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v___x_2755_);
lean_ctor_set(v_reuseFailAlloc_2901_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2901_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2901_, 3, v_l_2846_);
lean_ctor_set(v_reuseFailAlloc_2901_, 4, v_l_2846_);
v___x_2897_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
lean_object* v___x_2899_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v___x_2897_);
lean_ctor_set(v___x_2266_, 3, v___x_2895_);
lean_ctor_set(v___x_2266_, 2, v_v_2889_);
lean_ctor_set(v___x_2266_, 1, v_k_2888_);
lean_ctor_set(v___x_2266_, 0, v___x_2893_);
v___x_2899_ = v___x_2266_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v___x_2893_);
lean_ctor_set(v_reuseFailAlloc_2900_, 1, v_k_2888_);
lean_ctor_set(v_reuseFailAlloc_2900_, 2, v_v_2889_);
lean_ctor_set(v_reuseFailAlloc_2900_, 3, v___x_2895_);
lean_ctor_set(v_reuseFailAlloc_2900_, 4, v___x_2897_);
v___x_2899_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
return v___x_2899_;
}
}
}
}
}
}
else
{
lean_object* v___x_2911_; lean_object* v___x_2913_; 
v___x_2911_ = lean_unsigned_to_nat(2u);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v_r_2882_);
lean_ctor_set(v___x_2266_, 0, v___x_2911_);
v___x_2913_ = v___x_2266_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2911_);
lean_ctor_set(v_reuseFailAlloc_2914_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2914_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2914_, 3, v_l_2263_);
lean_ctor_set(v_reuseFailAlloc_2914_, 4, v_r_2882_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
else
{
lean_object* v___x_2916_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 4, v_l_2263_);
lean_ctor_set(v___x_2266_, 0, v___x_2755_);
v___x_2916_ = v___x_2266_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2755_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v_k_2261_);
lean_ctor_set(v_reuseFailAlloc_2917_, 2, v_v_2262_);
lean_ctor_set(v_reuseFailAlloc_2917_, 3, v_l_2263_);
lean_ctor_set(v_reuseFailAlloc_2917_, 4, v_l_2263_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
}
}
}
else
{
return v_t_2260_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg___boxed(lean_object* v_k_2920_, lean_object* v_t_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_2920_, v_t_2921_);
lean_dec(v_k_2920_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(lean_object* v_ext_2923_, lean_object* v_declName_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v_ext_2930_; lean_object* v_toEnvExtension_2931_; lean_object* v_env_2932_; lean_object* v_asyncMode_2933_; uint8_t v___x_2934_; lean_object* v___x_2935_; lean_object* v_funCC_2936_; lean_object* v___y_2938_; uint8_t v___x_2964_; 
v___x_2928_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2929_ = lean_st_ref_get(v_a_2926_);
v_ext_2930_ = lean_ctor_get(v_ext_2923_, 1);
v_toEnvExtension_2931_ = lean_ctor_get(v_ext_2930_, 0);
v_env_2932_ = lean_ctor_get(v___x_2929_, 0);
lean_inc_ref(v_env_2932_);
lean_dec(v___x_2929_);
v_asyncMode_2933_ = lean_ctor_get(v_toEnvExtension_2931_, 2);
v___x_2934_ = 0;
v___x_2935_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2928_, v_ext_2923_, v_env_2932_, v_asyncMode_2933_, v___x_2934_);
v_funCC_2936_ = lean_ctor_get(v___x_2935_, 2);
lean_inc(v_funCC_2936_);
lean_dec(v___x_2935_);
v___x_2964_ = l_Lean_NameSet_contains(v_funCC_2936_, v_declName_2924_);
if (v___x_2964_ == 0)
{
lean_object* v___x_2965_; 
lean_inc(v_declName_2924_);
v___x_2965_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_2924_, v_a_2925_, v_a_2926_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_dec_ref_known(v___x_2965_, 1);
v___y_2938_ = v_a_2926_;
goto v___jp_2937_;
}
else
{
lean_dec(v_funCC_2936_);
lean_dec(v_declName_2924_);
lean_dec_ref(v_ext_2923_);
return v___x_2965_;
}
}
else
{
v___y_2938_ = v_a_2926_;
goto v___jp_2937_;
}
v___jp_2937_:
{
lean_object* v___x_2939_; lean_object* v___f_2940_; lean_object* v___x_2941_; lean_object* v_env_2942_; lean_object* v_nextMacroScope_2943_; lean_object* v_ngen_2944_; lean_object* v_auxDeclNGen_2945_; lean_object* v_traceState_2946_; lean_object* v_recordedDeps_2947_; lean_object* v_messages_2948_; lean_object* v_infoState_2949_; lean_object* v_snapshotTasks_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2962_; 
v___x_2939_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_declName_2924_, v_funCC_2936_);
lean_dec(v_declName_2924_);
v___f_2940_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0), 2, 1);
lean_closure_set(v___f_2940_, 0, v___x_2939_);
v___x_2941_ = lean_st_ref_take(v___y_2938_);
v_env_2942_ = lean_ctor_get(v___x_2941_, 0);
v_nextMacroScope_2943_ = lean_ctor_get(v___x_2941_, 1);
v_ngen_2944_ = lean_ctor_get(v___x_2941_, 2);
v_auxDeclNGen_2945_ = lean_ctor_get(v___x_2941_, 3);
v_traceState_2946_ = lean_ctor_get(v___x_2941_, 4);
v_recordedDeps_2947_ = lean_ctor_get(v___x_2941_, 6);
v_messages_2948_ = lean_ctor_get(v___x_2941_, 7);
v_infoState_2949_ = lean_ctor_get(v___x_2941_, 8);
v_snapshotTasks_2950_ = lean_ctor_get(v___x_2941_, 9);
v_isSharedCheck_2962_ = !lean_is_exclusive(v___x_2941_);
if (v_isSharedCheck_2962_ == 0)
{
lean_object* v_unused_2963_; 
v_unused_2963_ = lean_ctor_get(v___x_2941_, 5);
lean_dec(v_unused_2963_);
v___x_2952_ = v___x_2941_;
v_isShared_2953_ = v_isSharedCheck_2962_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_snapshotTasks_2950_);
lean_inc(v_infoState_2949_);
lean_inc(v_messages_2948_);
lean_inc(v_recordedDeps_2947_);
lean_inc(v_traceState_2946_);
lean_inc(v_auxDeclNGen_2945_);
lean_inc(v_ngen_2944_);
lean_inc(v_nextMacroScope_2943_);
lean_inc(v_env_2942_);
lean_dec(v___x_2941_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2962_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2958_; 
v___x_2954_ = lean_box(0);
v___x_2955_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_2923_, v_env_2942_, v___f_2940_);
v___x_2956_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 5, v___x_2956_);
lean_ctor_set(v___x_2952_, 0, v___x_2955_);
v___x_2958_ = v___x_2952_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v___x_2955_);
lean_ctor_set(v_reuseFailAlloc_2961_, 1, v_nextMacroScope_2943_);
lean_ctor_set(v_reuseFailAlloc_2961_, 2, v_ngen_2944_);
lean_ctor_set(v_reuseFailAlloc_2961_, 3, v_auxDeclNGen_2945_);
lean_ctor_set(v_reuseFailAlloc_2961_, 4, v_traceState_2946_);
lean_ctor_set(v_reuseFailAlloc_2961_, 5, v___x_2956_);
lean_ctor_set(v_reuseFailAlloc_2961_, 6, v_recordedDeps_2947_);
lean_ctor_set(v_reuseFailAlloc_2961_, 7, v_messages_2948_);
lean_ctor_set(v_reuseFailAlloc_2961_, 8, v_infoState_2949_);
lean_ctor_set(v_reuseFailAlloc_2961_, 9, v_snapshotTasks_2950_);
v___x_2958_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2959_ = lean_st_ref_put(v___y_2938_, v___x_2958_);
v___x_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2960_, 0, v___x_2954_);
return v___x_2960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___boxed(lean_object* v_ext_2966_, lean_object* v_declName_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_){
_start:
{
lean_object* v_res_2971_; 
v_res_2971_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(v_ext_2966_, v_declName_2967_, v_a_2968_, v_a_2969_);
lean_dec(v_a_2969_);
lean_dec_ref(v_a_2968_);
return v_res_2971_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(lean_object* v_00_u03b2_2972_, lean_object* v_k_2973_, lean_object* v_t_2974_, lean_object* v_h_2975_){
_start:
{
lean_object* v___x_2976_; 
v___x_2976_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_2973_, v_t_2974_);
return v___x_2976_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___boxed(lean_object* v_00_u03b2_2977_, lean_object* v_k_2978_, lean_object* v_t_2979_, lean_object* v_h_2980_){
_start:
{
lean_object* v_res_2981_; 
v_res_2981_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(v_00_u03b2_2977_, v_k_2978_, v_t_2979_, v_h_2980_);
lean_dec(v_k_2978_);
return v_res_2981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0(lean_object* v_a_2982_, lean_object* v_s_2983_){
_start:
{
lean_object* v_casesTypes_2984_; lean_object* v_extThms_2985_; lean_object* v_funCC_2986_; lean_object* v_inj_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2994_; 
v_casesTypes_2984_ = lean_ctor_get(v_s_2983_, 0);
v_extThms_2985_ = lean_ctor_get(v_s_2983_, 1);
v_funCC_2986_ = lean_ctor_get(v_s_2983_, 2);
v_inj_2987_ = lean_ctor_get(v_s_2983_, 4);
v_isSharedCheck_2994_ = !lean_is_exclusive(v_s_2983_);
if (v_isSharedCheck_2994_ == 0)
{
lean_object* v_unused_2995_; 
v_unused_2995_ = lean_ctor_get(v_s_2983_, 3);
lean_dec(v_unused_2995_);
v___x_2989_ = v_s_2983_;
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_inj_2987_);
lean_inc(v_funCC_2986_);
lean_inc(v_extThms_2985_);
lean_inc(v_casesTypes_2984_);
lean_dec(v_s_2983_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
lean_ctor_set(v___x_2989_, 3, v_a_2982_);
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_casesTypes_2984_);
lean_ctor_set(v_reuseFailAlloc_2993_, 1, v_extThms_2985_);
lean_ctor_set(v_reuseFailAlloc_2993_, 2, v_funCC_2986_);
lean_ctor_set(v_reuseFailAlloc_2993_, 3, v_a_2982_);
lean_ctor_set(v_reuseFailAlloc_2993_, 4, v_inj_2987_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(lean_object* v_ext_2996_, lean_object* v_declName_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v_ext_3005_; lean_object* v_toEnvExtension_3006_; lean_object* v_env_3007_; lean_object* v_asyncMode_3008_; uint8_t v___x_3009_; lean_object* v___x_3010_; lean_object* v_ematch_3011_; lean_object* v___x_3012_; 
v___x_3003_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_3004_ = lean_st_ref_get(v_a_3001_);
v_ext_3005_ = lean_ctor_get(v_ext_2996_, 1);
v_toEnvExtension_3006_ = lean_ctor_get(v_ext_3005_, 0);
v_env_3007_ = lean_ctor_get(v___x_3004_, 0);
lean_inc_ref(v_env_3007_);
lean_dec(v___x_3004_);
v_asyncMode_3008_ = lean_ctor_get(v_toEnvExtension_3006_, 2);
v___x_3009_ = 0;
v___x_3010_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3003_, v_ext_2996_, v_env_3007_, v_asyncMode_3008_, v___x_3009_);
v_ematch_3011_ = lean_ctor_get(v___x_3010_, 3);
lean_inc_ref(v_ematch_3011_);
lean_dec(v___x_3010_);
v___x_3012_ = l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(v_ematch_3011_, v_declName_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v_a_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3058_; 
v_a_3013_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3015_ = v___x_3012_;
v_isShared_3016_ = v_isSharedCheck_3058_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_a_3013_);
lean_dec(v___x_3012_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3058_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___f_3017_; lean_object* v___x_3018_; lean_object* v_env_3019_; lean_object* v_nextMacroScope_3020_; lean_object* v_ngen_3021_; lean_object* v_auxDeclNGen_3022_; lean_object* v_traceState_3023_; lean_object* v_recordedDeps_3024_; lean_object* v_messages_3025_; lean_object* v_infoState_3026_; lean_object* v_snapshotTasks_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3056_; 
v___f_3017_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0), 2, 1);
lean_closure_set(v___f_3017_, 0, v_a_3013_);
v___x_3018_ = lean_st_ref_take(v_a_3001_);
v_env_3019_ = lean_ctor_get(v___x_3018_, 0);
v_nextMacroScope_3020_ = lean_ctor_get(v___x_3018_, 1);
v_ngen_3021_ = lean_ctor_get(v___x_3018_, 2);
v_auxDeclNGen_3022_ = lean_ctor_get(v___x_3018_, 3);
v_traceState_3023_ = lean_ctor_get(v___x_3018_, 4);
v_recordedDeps_3024_ = lean_ctor_get(v___x_3018_, 6);
v_messages_3025_ = lean_ctor_get(v___x_3018_, 7);
v_infoState_3026_ = lean_ctor_get(v___x_3018_, 8);
v_snapshotTasks_3027_ = lean_ctor_get(v___x_3018_, 9);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_3018_);
if (v_isSharedCheck_3056_ == 0)
{
lean_object* v_unused_3057_; 
v_unused_3057_ = lean_ctor_get(v___x_3018_, 5);
lean_dec(v_unused_3057_);
v___x_3029_ = v___x_3018_;
v_isShared_3030_ = v_isSharedCheck_3056_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_snapshotTasks_3027_);
lean_inc(v_infoState_3026_);
lean_inc(v_messages_3025_);
lean_inc(v_recordedDeps_3024_);
lean_inc(v_traceState_3023_);
lean_inc(v_auxDeclNGen_3022_);
lean_inc(v_ngen_3021_);
lean_inc(v_nextMacroScope_3020_);
lean_inc(v_env_3019_);
lean_dec(v___x_3018_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3056_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3034_; 
v___x_3031_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_2996_, v_env_3019_, v___f_3017_);
v___x_3032_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
if (v_isShared_3030_ == 0)
{
lean_ctor_set(v___x_3029_, 5, v___x_3032_);
lean_ctor_set(v___x_3029_, 0, v___x_3031_);
v___x_3034_ = v___x_3029_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v___x_3031_);
lean_ctor_set(v_reuseFailAlloc_3055_, 1, v_nextMacroScope_3020_);
lean_ctor_set(v_reuseFailAlloc_3055_, 2, v_ngen_3021_);
lean_ctor_set(v_reuseFailAlloc_3055_, 3, v_auxDeclNGen_3022_);
lean_ctor_set(v_reuseFailAlloc_3055_, 4, v_traceState_3023_);
lean_ctor_set(v_reuseFailAlloc_3055_, 5, v___x_3032_);
lean_ctor_set(v_reuseFailAlloc_3055_, 6, v_recordedDeps_3024_);
lean_ctor_set(v_reuseFailAlloc_3055_, 7, v_messages_3025_);
lean_ctor_set(v_reuseFailAlloc_3055_, 8, v_infoState_3026_);
lean_ctor_set(v_reuseFailAlloc_3055_, 9, v_snapshotTasks_3027_);
v___x_3034_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v_mctx_3037_; lean_object* v_zetaDeltaFVarIds_3038_; lean_object* v_postponed_3039_; lean_object* v_diag_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3053_; 
v___x_3035_ = lean_st_ref_put(v_a_3001_, v___x_3034_);
v___x_3036_ = lean_st_ref_take(v_a_2999_);
v_mctx_3037_ = lean_ctor_get(v___x_3036_, 0);
v_zetaDeltaFVarIds_3038_ = lean_ctor_get(v___x_3036_, 2);
v_postponed_3039_ = lean_ctor_get(v___x_3036_, 3);
v_diag_3040_ = lean_ctor_get(v___x_3036_, 4);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3053_ == 0)
{
lean_object* v_unused_3054_; 
v_unused_3054_ = lean_ctor_get(v___x_3036_, 1);
lean_dec(v_unused_3054_);
v___x_3042_ = v___x_3036_;
v_isShared_3043_ = v_isSharedCheck_3053_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_diag_3040_);
lean_inc(v_postponed_3039_);
lean_inc(v_zetaDeltaFVarIds_3038_);
lean_inc(v_mctx_3037_);
lean_dec(v___x_3036_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3053_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3047_; 
v___x_3044_ = lean_box(0);
v___x_3045_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5);
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 1, v___x_3045_);
v___x_3047_ = v___x_3042_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_mctx_3037_);
lean_ctor_set(v_reuseFailAlloc_3052_, 1, v___x_3045_);
lean_ctor_set(v_reuseFailAlloc_3052_, 2, v_zetaDeltaFVarIds_3038_);
lean_ctor_set(v_reuseFailAlloc_3052_, 3, v_postponed_3039_);
lean_ctor_set(v_reuseFailAlloc_3052_, 4, v_diag_3040_);
v___x_3047_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
lean_object* v___x_3048_; lean_object* v___x_3050_; 
v___x_3048_ = lean_st_ref_put(v_a_2999_, v___x_3047_);
if (v_isShared_3016_ == 0)
{
lean_ctor_set(v___x_3015_, 0, v___x_3044_);
v___x_3050_ = v___x_3015_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3044_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
lean_dec_ref(v_ext_2996_);
v_a_3059_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_3012_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_3012_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___boxed(lean_object* v_ext_3067_, lean_object* v_declName_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_, lean_object* v_a_3073_){
_start:
{
lean_object* v_res_3074_; 
v_res_3074_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(v_ext_3067_, v_declName_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
lean_dec(v_a_3072_);
lean_dec_ref(v_a_3071_);
lean_dec(v_a_3070_);
lean_dec_ref(v_a_3069_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0(lean_object* v_a_3075_, lean_object* v_s_3076_){
_start:
{
lean_object* v_casesTypes_3077_; lean_object* v_extThms_3078_; lean_object* v_funCC_3079_; lean_object* v_ematch_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3087_; 
v_casesTypes_3077_ = lean_ctor_get(v_s_3076_, 0);
v_extThms_3078_ = lean_ctor_get(v_s_3076_, 1);
v_funCC_3079_ = lean_ctor_get(v_s_3076_, 2);
v_ematch_3080_ = lean_ctor_get(v_s_3076_, 3);
v_isSharedCheck_3087_ = !lean_is_exclusive(v_s_3076_);
if (v_isSharedCheck_3087_ == 0)
{
lean_object* v_unused_3088_; 
v_unused_3088_ = lean_ctor_get(v_s_3076_, 4);
lean_dec(v_unused_3088_);
v___x_3082_ = v_s_3076_;
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_ematch_3080_);
lean_inc(v_funCC_3079_);
lean_inc(v_extThms_3078_);
lean_inc(v_casesTypes_3077_);
lean_dec(v_s_3076_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v___x_3085_; 
if (v_isShared_3083_ == 0)
{
lean_ctor_set(v___x_3082_, 4, v_a_3075_);
v___x_3085_ = v___x_3082_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_casesTypes_3077_);
lean_ctor_set(v_reuseFailAlloc_3086_, 1, v_extThms_3078_);
lean_ctor_set(v_reuseFailAlloc_3086_, 2, v_funCC_3079_);
lean_ctor_set(v_reuseFailAlloc_3086_, 3, v_ematch_3080_);
lean_ctor_set(v_reuseFailAlloc_3086_, 4, v_a_3075_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
return v___x_3085_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(lean_object* v_ext_3089_, lean_object* v_declName_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v_ext_3098_; lean_object* v_toEnvExtension_3099_; lean_object* v_env_3100_; lean_object* v_asyncMode_3101_; uint8_t v___x_3102_; lean_object* v___x_3103_; lean_object* v_inj_3104_; lean_object* v___x_3105_; 
v___x_3096_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_3097_ = lean_st_ref_get(v_a_3094_);
v_ext_3098_ = lean_ctor_get(v_ext_3089_, 1);
v_toEnvExtension_3099_ = lean_ctor_get(v_ext_3098_, 0);
v_env_3100_ = lean_ctor_get(v___x_3097_, 0);
lean_inc_ref(v_env_3100_);
lean_dec(v___x_3097_);
v_asyncMode_3101_ = lean_ctor_get(v_toEnvExtension_3099_, 2);
v___x_3102_ = 0;
v___x_3103_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3096_, v_ext_3089_, v_env_3100_, v_asyncMode_3101_, v___x_3102_);
v_inj_3104_ = lean_ctor_get(v___x_3103_, 4);
lean_inc_ref(v_inj_3104_);
lean_dec(v___x_3103_);
v___x_3105_ = l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(v_inj_3104_, v_declName_3090_, v_a_3091_, v_a_3092_, v_a_3093_, v_a_3094_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3151_; 
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3108_ = v___x_3105_;
v_isShared_3109_ = v_isSharedCheck_3151_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_3105_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3151_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___f_3110_; lean_object* v___x_3111_; lean_object* v_env_3112_; lean_object* v_nextMacroScope_3113_; lean_object* v_ngen_3114_; lean_object* v_auxDeclNGen_3115_; lean_object* v_traceState_3116_; lean_object* v_recordedDeps_3117_; lean_object* v_messages_3118_; lean_object* v_infoState_3119_; lean_object* v_snapshotTasks_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3149_; 
v___f_3110_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0), 2, 1);
lean_closure_set(v___f_3110_, 0, v_a_3106_);
v___x_3111_ = lean_st_ref_take(v_a_3094_);
v_env_3112_ = lean_ctor_get(v___x_3111_, 0);
v_nextMacroScope_3113_ = lean_ctor_get(v___x_3111_, 1);
v_ngen_3114_ = lean_ctor_get(v___x_3111_, 2);
v_auxDeclNGen_3115_ = lean_ctor_get(v___x_3111_, 3);
v_traceState_3116_ = lean_ctor_get(v___x_3111_, 4);
v_recordedDeps_3117_ = lean_ctor_get(v___x_3111_, 6);
v_messages_3118_ = lean_ctor_get(v___x_3111_, 7);
v_infoState_3119_ = lean_ctor_get(v___x_3111_, 8);
v_snapshotTasks_3120_ = lean_ctor_get(v___x_3111_, 9);
v_isSharedCheck_3149_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3149_ == 0)
{
lean_object* v_unused_3150_; 
v_unused_3150_ = lean_ctor_get(v___x_3111_, 5);
lean_dec(v_unused_3150_);
v___x_3122_ = v___x_3111_;
v_isShared_3123_ = v_isSharedCheck_3149_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_snapshotTasks_3120_);
lean_inc(v_infoState_3119_);
lean_inc(v_messages_3118_);
lean_inc(v_recordedDeps_3117_);
lean_inc(v_traceState_3116_);
lean_inc(v_auxDeclNGen_3115_);
lean_inc(v_ngen_3114_);
lean_inc(v_nextMacroScope_3113_);
lean_inc(v_env_3112_);
lean_dec(v___x_3111_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3149_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3127_; 
v___x_3124_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_3089_, v_env_3112_, v___f_3110_);
v___x_3125_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
if (v_isShared_3123_ == 0)
{
lean_ctor_set(v___x_3122_, 5, v___x_3125_);
lean_ctor_set(v___x_3122_, 0, v___x_3124_);
v___x_3127_ = v___x_3122_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v___x_3124_);
lean_ctor_set(v_reuseFailAlloc_3148_, 1, v_nextMacroScope_3113_);
lean_ctor_set(v_reuseFailAlloc_3148_, 2, v_ngen_3114_);
lean_ctor_set(v_reuseFailAlloc_3148_, 3, v_auxDeclNGen_3115_);
lean_ctor_set(v_reuseFailAlloc_3148_, 4, v_traceState_3116_);
lean_ctor_set(v_reuseFailAlloc_3148_, 5, v___x_3125_);
lean_ctor_set(v_reuseFailAlloc_3148_, 6, v_recordedDeps_3117_);
lean_ctor_set(v_reuseFailAlloc_3148_, 7, v_messages_3118_);
lean_ctor_set(v_reuseFailAlloc_3148_, 8, v_infoState_3119_);
lean_ctor_set(v_reuseFailAlloc_3148_, 9, v_snapshotTasks_3120_);
v___x_3127_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v_mctx_3130_; lean_object* v_zetaDeltaFVarIds_3131_; lean_object* v_postponed_3132_; lean_object* v_diag_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3146_; 
v___x_3128_ = lean_st_ref_put(v_a_3094_, v___x_3127_);
v___x_3129_ = lean_st_ref_take(v_a_3092_);
v_mctx_3130_ = lean_ctor_get(v___x_3129_, 0);
v_zetaDeltaFVarIds_3131_ = lean_ctor_get(v___x_3129_, 2);
v_postponed_3132_ = lean_ctor_get(v___x_3129_, 3);
v_diag_3133_ = lean_ctor_get(v___x_3129_, 4);
v_isSharedCheck_3146_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3146_ == 0)
{
lean_object* v_unused_3147_; 
v_unused_3147_ = lean_ctor_get(v___x_3129_, 1);
lean_dec(v_unused_3147_);
v___x_3135_ = v___x_3129_;
v_isShared_3136_ = v_isSharedCheck_3146_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_diag_3133_);
lean_inc(v_postponed_3132_);
lean_inc(v_zetaDeltaFVarIds_3131_);
lean_inc(v_mctx_3130_);
lean_dec(v___x_3129_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3146_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3140_; 
v___x_3137_ = lean_box(0);
v___x_3138_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 1, v___x_3138_);
v___x_3140_ = v___x_3135_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v_mctx_3130_);
lean_ctor_set(v_reuseFailAlloc_3145_, 1, v___x_3138_);
lean_ctor_set(v_reuseFailAlloc_3145_, 2, v_zetaDeltaFVarIds_3131_);
lean_ctor_set(v_reuseFailAlloc_3145_, 3, v_postponed_3132_);
lean_ctor_set(v_reuseFailAlloc_3145_, 4, v_diag_3133_);
v___x_3140_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
lean_object* v___x_3141_; lean_object* v___x_3143_; 
v___x_3141_ = lean_st_ref_put(v_a_3092_, v___x_3140_);
if (v_isShared_3109_ == 0)
{
lean_ctor_set(v___x_3108_, 0, v___x_3137_);
v___x_3143_ = v___x_3108_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___x_3137_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_dec_ref(v_ext_3089_);
v_a_3152_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3105_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3105_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___boxed(lean_object* v_ext_3160_, lean_object* v_declName_3161_, lean_object* v_a_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_){
_start:
{
lean_object* v_res_3167_; 
v_res_3167_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(v_ext_3160_, v_declName_3161_, v_a_3162_, v_a_3163_, v_a_3164_, v_a_3165_);
lean_dec(v_a_3165_);
lean_dec_ref(v_a_3164_);
lean_dec(v_a_3163_);
lean_dec_ref(v_a_3162_);
return v_res_3167_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_3168_, lean_object* v_i_3169_, lean_object* v_k_3170_){
_start:
{
lean_object* v___x_3171_; uint8_t v___x_3172_; 
v___x_3171_ = lean_array_get_size(v_keys_3168_);
v___x_3172_ = lean_nat_dec_lt(v_i_3169_, v___x_3171_);
if (v___x_3172_ == 0)
{
lean_dec(v_i_3169_);
return v___x_3172_;
}
else
{
lean_object* v_k_x27_3173_; uint8_t v___x_3174_; 
v_k_x27_3173_ = lean_array_fget_borrowed(v_keys_3168_, v_i_3169_);
v___x_3174_ = lean_name_eq(v_k_3170_, v_k_x27_3173_);
if (v___x_3174_ == 0)
{
lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3175_ = lean_unsigned_to_nat(1u);
v___x_3176_ = lean_nat_add(v_i_3169_, v___x_3175_);
lean_dec(v_i_3169_);
v_i_3169_ = v___x_3176_;
goto _start;
}
else
{
lean_dec(v_i_3169_);
return v___x_3172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_3178_, lean_object* v_i_3179_, lean_object* v_k_3180_){
_start:
{
uint8_t v_res_3181_; lean_object* v_r_3182_; 
v_res_3181_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_keys_3178_, v_i_3179_, v_k_3180_);
lean_dec(v_k_3180_);
lean_dec_ref(v_keys_3178_);
v_r_3182_ = lean_box(v_res_3181_);
return v_r_3182_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(lean_object* v_x_3183_, size_t v_x_3184_, lean_object* v_x_3185_){
_start:
{
if (lean_obj_tag(v_x_3183_) == 0)
{
lean_object* v_es_3186_; lean_object* v___x_3187_; size_t v___x_3188_; size_t v___x_3189_; lean_object* v_j_3190_; lean_object* v___x_3191_; 
v_es_3186_ = lean_ctor_get(v_x_3183_, 0);
v___x_3187_ = lean_box(2);
v___x_3188_ = ((size_t)31ULL);
v___x_3189_ = lean_usize_land(v_x_3184_, v___x_3188_);
v_j_3190_ = lean_usize_to_nat(v___x_3189_);
v___x_3191_ = lean_array_get_borrowed(v___x_3187_, v_es_3186_, v_j_3190_);
lean_dec(v_j_3190_);
switch(lean_obj_tag(v___x_3191_))
{
case 0:
{
lean_object* v_key_3192_; uint8_t v___x_3193_; 
v_key_3192_ = lean_ctor_get(v___x_3191_, 0);
v___x_3193_ = lean_name_eq(v_x_3185_, v_key_3192_);
return v___x_3193_;
}
case 1:
{
lean_object* v_node_3194_; size_t v___x_3195_; size_t v___x_3196_; 
v_node_3194_ = lean_ctor_get(v___x_3191_, 0);
v___x_3195_ = ((size_t)5ULL);
v___x_3196_ = lean_usize_shift_right(v_x_3184_, v___x_3195_);
v_x_3183_ = v_node_3194_;
v_x_3184_ = v___x_3196_;
goto _start;
}
default: 
{
uint8_t v___x_3198_; 
v___x_3198_ = 0;
return v___x_3198_;
}
}
}
else
{
lean_object* v_ks_3199_; lean_object* v___x_3200_; uint8_t v___x_3201_; 
v_ks_3199_ = lean_ctor_get(v_x_3183_, 0);
v___x_3200_ = lean_unsigned_to_nat(0u);
v___x_3201_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_ks_3199_, v___x_3200_, v_x_3185_);
return v___x_3201_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___boxed(lean_object* v_x_3202_, lean_object* v_x_3203_, lean_object* v_x_3204_){
_start:
{
size_t v_x_330__boxed_3205_; uint8_t v_res_3206_; lean_object* v_r_3207_; 
v_x_330__boxed_3205_ = lean_unbox_usize(v_x_3203_);
lean_dec(v_x_3203_);
v_res_3206_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_3202_, v_x_330__boxed_3205_, v_x_3204_);
lean_dec(v_x_3204_);
lean_dec_ref(v_x_3202_);
v_r_3207_ = lean_box(v_res_3206_);
return v_r_3207_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(lean_object* v_x_3208_, lean_object* v_x_3209_){
_start:
{
uint64_t v___y_3211_; 
if (lean_obj_tag(v_x_3209_) == 0)
{
uint64_t v___x_3214_; 
v___x_3214_ = 1723ULL;
v___y_3211_ = v___x_3214_;
goto v___jp_3210_;
}
else
{
uint64_t v_hash_3215_; 
v_hash_3215_ = lean_ctor_get_uint64(v_x_3209_, sizeof(void*)*2);
v___y_3211_ = v_hash_3215_;
goto v___jp_3210_;
}
v___jp_3210_:
{
size_t v___x_3212_; uint8_t v___x_3213_; 
v___x_3212_ = lean_uint64_to_usize(v___y_3211_);
v___x_3213_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_3208_, v___x_3212_, v_x_3209_);
return v___x_3213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___boxed(lean_object* v_x_3216_, lean_object* v_x_3217_){
_start:
{
uint8_t v_res_3218_; lean_object* v_r_3219_; 
v_res_3218_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_x_3216_, v_x_3217_);
lean_dec(v_x_3217_);
lean_dec_ref(v_x_3216_);
v_r_3219_ = lean_box(v_res_3218_);
return v_r_3219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(lean_object* v_ext_3220_, lean_object* v_declName_3221_, lean_object* v_a_3222_){
_start:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v_ext_3226_; lean_object* v_toEnvExtension_3227_; lean_object* v_env_3228_; lean_object* v_asyncMode_3229_; uint8_t v___x_3230_; lean_object* v___x_3231_; lean_object* v_extThms_3232_; uint8_t v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3224_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_3225_ = lean_st_ref_get(v_a_3222_);
v_ext_3226_ = lean_ctor_get(v_ext_3220_, 1);
v_toEnvExtension_3227_ = lean_ctor_get(v_ext_3226_, 0);
v_env_3228_ = lean_ctor_get(v___x_3225_, 0);
lean_inc_ref(v_env_3228_);
lean_dec(v___x_3225_);
v_asyncMode_3229_ = lean_ctor_get(v_toEnvExtension_3227_, 2);
v___x_3230_ = 0;
v___x_3231_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3224_, v_ext_3220_, v_env_3228_, v_asyncMode_3229_, v___x_3230_);
v_extThms_3232_ = lean_ctor_get(v___x_3231_, 1);
lean_inc_ref(v_extThms_3232_);
lean_dec(v___x_3231_);
v___x_3233_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_extThms_3232_, v_declName_3221_);
lean_dec_ref(v_extThms_3232_);
v___x_3234_ = lean_box(v___x_3233_);
v___x_3235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3234_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg___boxed(lean_object* v_ext_3236_, lean_object* v_declName_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_){
_start:
{
lean_object* v_res_3240_; 
v_res_3240_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_3236_, v_declName_3237_, v_a_3238_);
lean_dec(v_a_3238_);
lean_dec(v_declName_3237_);
lean_dec_ref(v_ext_3236_);
return v_res_3240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(lean_object* v_ext_3241_, lean_object* v_declName_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_){
_start:
{
lean_object* v___x_3246_; 
v___x_3246_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_3241_, v_declName_3242_, v_a_3244_);
return v___x_3246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___boxed(lean_object* v_ext_3247_, lean_object* v_declName_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_){
_start:
{
lean_object* v_res_3252_; 
v_res_3252_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(v_ext_3247_, v_declName_3248_, v_a_3249_, v_a_3250_);
lean_dec(v_a_3250_);
lean_dec_ref(v_a_3249_);
lean_dec(v_declName_3248_);
lean_dec_ref(v_ext_3247_);
return v_res_3252_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(lean_object* v_00_u03b2_3253_, lean_object* v_x_3254_, lean_object* v_x_3255_){
_start:
{
uint8_t v___x_3256_; 
v___x_3256_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_x_3254_, v_x_3255_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___boxed(lean_object* v_00_u03b2_3257_, lean_object* v_x_3258_, lean_object* v_x_3259_){
_start:
{
uint8_t v_res_3260_; lean_object* v_r_3261_; 
v_res_3260_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(v_00_u03b2_3257_, v_x_3258_, v_x_3259_);
lean_dec(v_x_3259_);
lean_dec_ref(v_x_3258_);
v_r_3261_ = lean_box(v_res_3260_);
return v_r_3261_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(lean_object* v_00_u03b2_3262_, lean_object* v_x_3263_, size_t v_x_3264_, lean_object* v_x_3265_){
_start:
{
uint8_t v___x_3266_; 
v___x_3266_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_3263_, v_x_3264_, v_x_3265_);
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3267_, lean_object* v_x_3268_, lean_object* v_x_3269_, lean_object* v_x_3270_){
_start:
{
size_t v_x_417__boxed_3271_; uint8_t v_res_3272_; lean_object* v_r_3273_; 
v_x_417__boxed_3271_ = lean_unbox_usize(v_x_3269_);
lean_dec(v_x_3269_);
v_res_3272_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(v_00_u03b2_3267_, v_x_3268_, v_x_417__boxed_3271_, v_x_3270_);
lean_dec(v_x_3270_);
lean_dec_ref(v_x_3268_);
v_r_3273_ = lean_box(v_res_3272_);
return v_r_3273_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3274_, lean_object* v_keys_3275_, lean_object* v_vals_3276_, lean_object* v_heq_3277_, lean_object* v_i_3278_, lean_object* v_k_3279_){
_start:
{
uint8_t v___x_3280_; 
v___x_3280_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_keys_3275_, v_i_3278_, v_k_3279_);
return v___x_3280_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3281_, lean_object* v_keys_3282_, lean_object* v_vals_3283_, lean_object* v_heq_3284_, lean_object* v_i_3285_, lean_object* v_k_3286_){
_start:
{
uint8_t v_res_3287_; lean_object* v_r_3288_; 
v_res_3287_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(v_00_u03b2_3281_, v_keys_3282_, v_vals_3283_, v_heq_3284_, v_i_3285_, v_k_3286_);
lean_dec(v_k_3286_);
lean_dec_ref(v_vals_3283_);
lean_dec_ref(v_keys_3282_);
v_r_3288_ = lean_box(v_res_3287_);
return v_r_3288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(lean_object* v_ext_3289_, lean_object* v_declName_3290_, lean_object* v_a_3291_){
_start:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v_ext_3295_; lean_object* v_toEnvExtension_3296_; lean_object* v_env_3297_; lean_object* v_asyncMode_3298_; uint8_t v___x_3299_; lean_object* v___x_3300_; lean_object* v_inj_3301_; lean_object* v___x_3302_; uint8_t v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; 
v___x_3293_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_3294_ = lean_st_ref_get(v_a_3291_);
v_ext_3295_ = lean_ctor_get(v_ext_3289_, 1);
v_toEnvExtension_3296_ = lean_ctor_get(v_ext_3295_, 0);
v_env_3297_ = lean_ctor_get(v___x_3294_, 0);
lean_inc_ref(v_env_3297_);
lean_dec(v___x_3294_);
v_asyncMode_3298_ = lean_ctor_get(v_toEnvExtension_3296_, 2);
v___x_3299_ = 0;
v___x_3300_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3293_, v_ext_3289_, v_env_3297_, v_asyncMode_3298_, v___x_3299_);
v_inj_3301_ = lean_ctor_get(v___x_3300_, 4);
lean_inc_ref(v_inj_3301_);
lean_dec(v___x_3300_);
v___x_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3302_, 0, v_declName_3290_);
v___x_3303_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_inj_3301_, v___x_3302_);
lean_dec_ref_known(v___x_3302_, 1);
lean_dec_ref(v_inj_3301_);
v___x_3304_ = lean_box(v___x_3303_);
v___x_3305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3305_, 0, v___x_3304_);
return v___x_3305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg___boxed(lean_object* v_ext_3306_, lean_object* v_declName_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_){
_start:
{
lean_object* v_res_3310_; 
v_res_3310_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_3306_, v_declName_3307_, v_a_3308_);
lean_dec(v_a_3308_);
lean_dec_ref(v_ext_3306_);
return v_res_3310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(lean_object* v_ext_3311_, lean_object* v_declName_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_){
_start:
{
lean_object* v___x_3316_; 
v___x_3316_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_3311_, v_declName_3312_, v_a_3314_);
return v___x_3316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___boxed(lean_object* v_ext_3317_, lean_object* v_declName_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(v_ext_3317_, v_declName_3318_, v_a_3319_, v_a_3320_);
lean_dec(v_a_3320_);
lean_dec_ref(v_a_3319_);
lean_dec_ref(v_ext_3317_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(lean_object* v_ext_3323_, lean_object* v_declName_3324_, lean_object* v_a_3325_){
_start:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v_ext_3329_; lean_object* v_toEnvExtension_3330_; lean_object* v_env_3331_; lean_object* v_asyncMode_3332_; uint8_t v___x_3333_; lean_object* v___x_3334_; lean_object* v_funCC_3335_; uint8_t v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3327_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_3328_ = lean_st_ref_get(v_a_3325_);
v_ext_3329_ = lean_ctor_get(v_ext_3323_, 1);
v_toEnvExtension_3330_ = lean_ctor_get(v_ext_3329_, 0);
v_env_3331_ = lean_ctor_get(v___x_3328_, 0);
lean_inc_ref(v_env_3331_);
lean_dec(v___x_3328_);
v_asyncMode_3332_ = lean_ctor_get(v_toEnvExtension_3330_, 2);
v___x_3333_ = 0;
v___x_3334_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3327_, v_ext_3323_, v_env_3331_, v_asyncMode_3332_, v___x_3333_);
v_funCC_3335_ = lean_ctor_get(v___x_3334_, 2);
lean_inc(v_funCC_3335_);
lean_dec(v___x_3334_);
v___x_3336_ = l_Lean_NameSet_contains(v_funCC_3335_, v_declName_3324_);
lean_dec(v_funCC_3335_);
v___x_3337_ = lean_box(v___x_3336_);
v___x_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3337_);
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg___boxed(lean_object* v_ext_3339_, lean_object* v_declName_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_){
_start:
{
lean_object* v_res_3343_; 
v_res_3343_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_3339_, v_declName_3340_, v_a_3341_);
lean_dec(v_a_3341_);
lean_dec(v_declName_3340_);
lean_dec_ref(v_ext_3339_);
return v_res_3343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(lean_object* v_ext_3344_, lean_object* v_declName_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_){
_start:
{
lean_object* v___x_3349_; 
v___x_3349_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_3344_, v_declName_3345_, v_a_3347_);
return v___x_3349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___boxed(lean_object* v_ext_3350_, lean_object* v_declName_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_){
_start:
{
lean_object* v_res_3355_; 
v_res_3355_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(v_ext_3350_, v_declName_3351_, v_a_3352_, v_a_3353_);
lean_dec(v_a_3353_);
lean_dec_ref(v_a_3352_);
lean_dec(v_declName_3351_);
lean_dec_ref(v_ext_3350_);
return v_res_3355_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9(void){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3379_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7));
v___x_3380_ = l_Lean_mkAtom(v___x_3379_);
return v___x_3380_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10(void){
_start:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
v___x_3381_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9);
v___x_3382_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_3383_ = lean_array_push(v___x_3382_, v___x_3381_);
return v___x_3383_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15(void){
_start:
{
lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3392_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14));
v___x_3393_ = l_Lean_mkAtom(v___x_3392_);
return v___x_3393_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16(void){
_start:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3394_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15);
v___x_3395_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_3396_ = lean_array_push(v___x_3395_, v___x_3394_);
return v___x_3396_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17(void){
_start:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3397_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16);
v___x_3398_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13));
v___x_3399_ = lean_box(2);
v___x_3400_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3399_);
lean_ctor_set(v___x_3400_, 1, v___x_3398_);
lean_ctor_set(v___x_3400_, 2, v___x_3397_);
return v___x_3400_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18(void){
_start:
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3401_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17);
v___x_3402_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10);
v___x_3403_ = lean_array_push(v___x_3402_, v___x_3401_);
return v___x_3403_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19(void){
_start:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; 
v___x_3404_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18);
v___x_3405_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8));
v___x_3406_ = lean_box(2);
v___x_3407_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3406_);
lean_ctor_set(v___x_3407_, 1, v___x_3405_);
lean_ctor_set(v___x_3407_, 2, v___x_3404_);
return v___x_3407_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20(void){
_start:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; 
v___x_3408_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19);
v___x_3409_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_3410_ = lean_array_push(v___x_3409_, v___x_3408_);
return v___x_3410_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21(void){
_start:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3411_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20);
v___x_3412_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6));
v___x_3413_ = lean_box(2);
v___x_3414_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
lean_ctor_set(v___x_3414_, 1, v___x_3412_);
lean_ctor_set(v___x_3414_, 2, v___x_3411_);
return v___x_3414_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22(void){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3415_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21);
v___x_3416_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_3417_ = lean_array_push(v___x_3416_, v___x_3415_);
return v___x_3417_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23(void){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3418_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22);
v___x_3419_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4));
v___x_3420_ = lean_box(2);
v___x_3421_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3420_);
lean_ctor_set(v___x_3421_, 1, v___x_3419_);
lean_ctor_set(v___x_3421_, 2, v___x_3418_);
return v___x_3421_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24(void){
_start:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3422_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23);
v___x_3423_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_3424_ = lean_array_push(v___x_3423_, v___x_3422_);
return v___x_3424_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25(void){
_start:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
v___x_3425_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24);
v___x_3426_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1));
v___x_3427_ = lean_box(2);
v___x_3428_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
lean_ctor_set(v___x_3428_, 1, v___x_3426_);
lean_ctor_set(v___x_3428_, 2, v___x_3425_);
return v___x_3428_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1(void){
_start:
{
lean_object* v___x_3429_; 
v___x_3429_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(lean_object* v_declName_3430_, lean_object* v_ext_3431_, lean_object* v_____r_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
uint8_t v___x_3438_; lean_object* v___x_3439_; 
v___x_3438_ = 0;
lean_inc(v_declName_3430_);
v___x_3439_ = l_Lean_Meta_Grind_isCasesAttrCandidate(v_declName_3430_, v___x_3438_, v___y_3435_, v___y_3436_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v_a_3440_; uint8_t v___x_3441_; 
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
lean_inc(v_a_3440_);
lean_dec_ref_known(v___x_3439_, 1);
v___x_3441_ = lean_unbox(v_a_3440_);
lean_dec(v_a_3440_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; lean_object* v_a_3443_; uint8_t v___x_3444_; 
v___x_3442_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_3431_, v_declName_3430_, v___y_3436_);
v_a_3443_ = lean_ctor_get(v___x_3442_, 0);
lean_inc(v_a_3443_);
lean_dec_ref(v___x_3442_);
v___x_3444_ = lean_unbox(v_a_3443_);
lean_dec(v_a_3443_);
if (v___x_3444_ == 0)
{
lean_object* v___x_3445_; lean_object* v_a_3446_; uint8_t v___x_3447_; 
lean_inc(v_declName_3430_);
v___x_3445_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_3431_, v_declName_3430_, v___y_3436_);
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref(v___x_3445_);
v___x_3447_ = lean_unbox(v_a_3446_);
lean_dec(v_a_3446_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3448_; lean_object* v_a_3449_; uint8_t v___x_3450_; 
v___x_3448_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_3431_, v_declName_3430_, v___y_3436_);
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
lean_inc(v_a_3449_);
lean_dec_ref(v___x_3448_);
v___x_3450_ = lean_unbox(v_a_3449_);
lean_dec(v_a_3449_);
if (v___x_3450_ == 0)
{
lean_object* v___x_3451_; 
v___x_3451_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(v_ext_3431_, v_declName_3430_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_);
return v___x_3451_;
}
else
{
lean_object* v___x_3452_; 
v___x_3452_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(v_ext_3431_, v_declName_3430_, v___y_3435_, v___y_3436_);
return v___x_3452_;
}
}
else
{
lean_object* v___x_3453_; 
v___x_3453_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(v_ext_3431_, v_declName_3430_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_);
return v___x_3453_;
}
}
else
{
lean_object* v___x_3454_; 
v___x_3454_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(v_ext_3431_, v_declName_3430_, v___y_3435_, v___y_3436_);
return v___x_3454_;
}
}
else
{
lean_object* v___x_3455_; 
v___x_3455_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(v_ext_3431_, v_declName_3430_, v___y_3435_, v___y_3436_);
return v___x_3455_;
}
}
else
{
lean_object* v_a_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3463_; 
lean_dec_ref(v_ext_3431_);
lean_dec(v_declName_3430_);
v_a_3456_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3458_ = v___x_3439_;
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_a_3456_);
lean_dec(v___x_3439_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3461_; 
if (v_isShared_3459_ == 0)
{
v___x_3461_ = v___x_3458_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_a_3456_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0___boxed(lean_object* v_declName_3464_, lean_object* v_ext_3465_, lean_object* v_____r_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(v_declName_3464_, v_ext_3465_, v_____r_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
lean_dec(v___y_3468_);
lean_dec_ref(v___y_3467_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(lean_object* v_msg_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_){
_start:
{
lean_object* v_ref_3479_; lean_object* v___x_3480_; lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3489_; 
v_ref_3479_ = lean_ctor_get(v___y_3476_, 2);
v___x_3480_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0_spec__0(v_msg_3473_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_);
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3483_ = v___x_3480_;
v_isShared_3484_ = v_isSharedCheck_3489_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v___x_3480_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3489_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3485_; lean_object* v___x_3487_; 
lean_inc(v_ref_3479_);
v___x_3485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3485_, 0, v_ref_3479_);
lean_ctor_set(v___x_3485_, 1, v_a_3481_);
if (v_isShared_3484_ == 0)
{
lean_ctor_set_tag(v___x_3483_, 1);
lean_ctor_set(v___x_3483_, 0, v___x_3485_);
v___x_3487_ = v___x_3483_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v___x_3485_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg___boxed(lean_object* v_msg_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_){
_start:
{
lean_object* v_res_3496_; 
v_res_3496_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v_msg_3490_, v___y_3491_, v___y_3492_, v___y_3493_, v___y_3494_);
lean_dec(v___y_3494_);
lean_dec_ref(v___y_3493_);
lean_dec(v___y_3492_);
lean_dec_ref(v___y_3491_);
return v_res_3496_;
}
}
static uint64_t _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3503_; uint64_t v___x_3504_; 
v___x_3503_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0));
v___x_3504_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3503_);
return v___x_3504_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2(void){
_start:
{
uint64_t v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3505_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1);
v___x_3506_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0));
v___x_3507_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
lean_ctor_set_uint64(v___x_3507_, sizeof(void*)*1, v___x_3505_);
return v___x_3507_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3508_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0, &l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default___closed__0);
v___x_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
return v___x_3509_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4(void){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3510_ = lean_box(1);
v___x_3511_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3);
v___x_3512_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_3513_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
lean_ctor_set(v___x_3513_, 1, v___x_3511_);
lean_ctor_set(v___x_3513_, 2, v___x_3510_);
return v___x_3513_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6(void){
_start:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___x_3516_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_3517_ = lean_unsigned_to_nat(0u);
v___x_3518_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3517_);
lean_ctor_set(v___x_3518_, 1, v___x_3517_);
lean_ctor_set(v___x_3518_, 2, v___x_3517_);
lean_ctor_set(v___x_3518_, 3, v___x_3517_);
lean_ctor_set(v___x_3518_, 4, v___x_3516_);
lean_ctor_set(v___x_3518_, 5, v___x_3516_);
lean_ctor_set(v___x_3518_, 6, v___x_3516_);
lean_ctor_set(v___x_3518_, 7, v___x_3516_);
lean_ctor_set(v___x_3518_, 8, v___x_3516_);
lean_ctor_set(v___x_3518_, 9, v___x_3516_);
lean_ctor_set(v___x_3518_, 10, v___x_3516_);
return v___x_3518_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7(void){
_start:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_3520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
lean_ctor_set(v___x_3520_, 1, v___x_3519_);
return v___x_3520_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8(void){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3521_ = lean_unsigned_to_nat(0u);
v___x_3522_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_3523_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3522_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
lean_ctor_set(v___x_3523_, 2, v___x_3521_);
return v___x_3523_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9(void){
_start:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3524_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8);
v___x_3525_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7);
v___x_3526_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_3527_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__2);
v___x_3528_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
lean_ctor_set(v___x_3528_, 1, v___x_3526_);
lean_ctor_set(v___x_3528_, 2, v___x_3525_);
lean_ctor_set(v___x_3528_, 3, v___x_3526_);
lean_ctor_set(v___x_3528_, 4, v___x_3526_);
lean_ctor_set(v___x_3528_, 5, v___x_3526_);
lean_ctor_set(v___x_3528_, 6, v___x_3526_);
lean_ctor_set(v___x_3528_, 7, v___x_3524_);
return v___x_3528_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10(void){
_start:
{
lean_object* v___x_3529_; lean_object* v___x_3530_; 
v___x_3529_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_3530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3529_);
lean_ctor_set(v___x_3530_, 1, v___x_3529_);
lean_ctor_set(v___x_3530_, 2, v___x_3529_);
lean_ctor_set(v___x_3530_, 3, v___x_3529_);
lean_ctor_set(v___x_3530_, 4, v___x_3529_);
return v___x_3530_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12(void){
_start:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3532_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11));
v___x_3533_ = l_Lean_stringToMessageData(v___x_3532_);
return v___x_3533_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14(void){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3535_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13));
v___x_3536_ = l_Lean_stringToMessageData(v___x_3535_);
return v___x_3536_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__16(void){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; 
v___x_3538_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__15));
v___x_3539_ = l_Lean_stringToMessageData(v___x_3538_);
return v___x_3539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(lean_object* v_ext_3540_, lean_object* v___x_3541_, uint8_t v_showInfo_3542_, lean_object* v_attrName_3543_, lean_object* v_declName_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_){
_start:
{
uint8_t v___x_3548_; uint8_t v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___y_3563_; 
v___x_3548_ = 0;
v___x_3549_ = 1;
v___x_3550_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2);
v___x_3551_ = lean_unsigned_to_nat(0u);
v___x_3552_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3);
v___x_3553_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_3554_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5));
v___x_3555_ = lean_box(0);
lean_inc(v___x_3541_);
v___x_3556_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3556_, 0, v___x_3550_);
lean_ctor_set(v___x_3556_, 1, v___x_3541_);
lean_ctor_set(v___x_3556_, 2, v___x_3553_);
lean_ctor_set(v___x_3556_, 3, v___x_3554_);
lean_ctor_set(v___x_3556_, 4, v___x_3555_);
lean_ctor_set(v___x_3556_, 5, v___x_3551_);
lean_ctor_set(v___x_3556_, 6, v___x_3555_);
lean_ctor_set_uint8(v___x_3556_, sizeof(void*)*7, v___x_3548_);
lean_ctor_set_uint8(v___x_3556_, sizeof(void*)*7 + 1, v___x_3548_);
lean_ctor_set_uint8(v___x_3556_, sizeof(void*)*7 + 2, v___x_3548_);
lean_ctor_set_uint8(v___x_3556_, sizeof(void*)*7 + 3, v___x_3549_);
v___x_3557_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6);
v___x_3558_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9);
v___x_3559_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10);
v___x_3560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3557_);
lean_ctor_set(v___x_3560_, 1, v___x_3558_);
lean_ctor_set(v___x_3560_, 2, v___x_3541_);
lean_ctor_set(v___x_3560_, 3, v___x_3552_);
lean_ctor_set(v___x_3560_, 4, v___x_3559_);
v___x_3561_ = lean_st_mk_ref(v___x_3560_);
if (v_showInfo_3542_ == 0)
{
lean_object* v___x_3573_; lean_object* v___x_3574_; 
lean_dec(v_attrName_3543_);
v___x_3573_ = lean_box(0);
v___x_3574_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(v_declName_3544_, v_ext_3540_, v___x_3573_, v___x_3556_, v___x_3561_, v___y_3545_, v___y_3546_);
lean_dec_ref_known(v___x_3556_, 7);
v___y_3563_ = v___x_3574_;
goto v___jp_3562_;
}
else
{
lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
lean_dec(v_declName_3544_);
lean_dec_ref(v_ext_3540_);
v___x_3575_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12);
v___x_3576_ = l_Lean_MessageData_ofName(v_attrName_3543_);
lean_inc_ref(v___x_3576_);
v___x_3577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3575_);
lean_ctor_set(v___x_3577_, 1, v___x_3576_);
v___x_3578_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14);
v___x_3579_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3577_);
lean_ctor_set(v___x_3579_, 1, v___x_3578_);
v___x_3580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3579_);
lean_ctor_set(v___x_3580_, 1, v___x_3576_);
v___x_3581_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__16, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__16);
v___x_3582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3582_, 0, v___x_3580_);
lean_ctor_set(v___x_3582_, 1, v___x_3581_);
v___x_3583_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_3582_, v___x_3556_, v___x_3561_, v___y_3545_, v___y_3546_);
lean_dec(v___x_3561_);
lean_dec_ref_known(v___x_3556_, 7);
return v___x_3583_;
}
v___jp_3562_:
{
if (lean_obj_tag(v___y_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3572_; 
v_a_3564_ = lean_ctor_get(v___y_3563_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___y_3563_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3566_ = v___y_3563_;
v_isShared_3567_ = v_isSharedCheck_3572_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___y_3563_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3572_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3568_; lean_object* v___x_3570_; 
v___x_3568_ = lean_st_ref_get(v___x_3561_);
lean_dec(v___x_3561_);
lean_dec(v___x_3568_);
if (v_isShared_3567_ == 0)
{
v___x_3570_ = v___x_3566_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_a_3564_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
else
{
lean_dec(v___x_3561_);
return v___y_3563_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed(lean_object* v_ext_3584_, lean_object* v___x_3585_, lean_object* v_showInfo_3586_, lean_object* v_attrName_3587_, lean_object* v_declName_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_){
_start:
{
uint8_t v_showInfo_boxed_3592_; lean_object* v_res_3593_; 
v_showInfo_boxed_3592_ = lean_unbox(v_showInfo_3586_);
v_res_3593_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(v_ext_3584_, v___x_3585_, v_showInfo_boxed_3592_, v_attrName_3587_, v_declName_3588_, v___y_3589_, v___y_3590_);
lean_dec(v___y_3590_);
lean_dec_ref(v___y_3589_);
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(lean_object* v_ext_3596_, uint8_t v_attrKind_3597_, uint8_t v_showInfo_3598_, uint8_t v_minIndexable_3599_, lean_object* v_as_x27_3600_, lean_object* v_b_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
if (lean_obj_tag(v_as_x27_3600_) == 0)
{
lean_object* v___x_3607_; 
lean_dec_ref(v_ext_3596_);
v___x_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3607_, 0, v_b_3601_);
return v___x_3607_;
}
else
{
lean_object* v_head_3608_; lean_object* v_tail_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v_head_3608_ = lean_ctor_get(v_as_x27_3600_, 0);
v_tail_3609_ = lean_ctor_get(v_as_x27_3600_, 1);
v___x_3610_ = lean_box(0);
v___x_3611_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_3605_);
if (lean_obj_tag(v___x_3611_) == 0)
{
lean_object* v_a_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v_a_3612_ = lean_ctor_get(v___x_3611_, 0);
lean_inc(v_a_3612_);
lean_dec_ref_known(v___x_3611_, 1);
v___x_3613_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0));
lean_inc(v_head_3608_);
lean_inc_ref(v_ext_3596_);
v___x_3614_ = l_Lean_Meta_Grind_Extension_addEMatchAttr(v_ext_3596_, v_head_3608_, v_attrKind_3597_, v___x_3613_, v_a_3612_, v_showInfo_3598_, v_minIndexable_3599_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_dec_ref_known(v___x_3614_, 1);
v_as_x27_3600_ = v_tail_3609_;
v_b_3601_ = v___x_3610_;
goto _start;
}
else
{
lean_dec_ref(v_ext_3596_);
return v___x_3614_;
}
}
else
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3623_; 
lean_dec_ref(v_ext_3596_);
v_a_3616_ = lean_ctor_get(v___x_3611_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3618_ = v___x_3611_;
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3611_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_a_3616_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___boxed(lean_object* v_ext_3624_, lean_object* v_attrKind_3625_, lean_object* v_showInfo_3626_, lean_object* v_minIndexable_3627_, lean_object* v_as_x27_3628_, lean_object* v_b_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_){
_start:
{
uint8_t v_attrKind_boxed_3635_; uint8_t v_showInfo_boxed_3636_; uint8_t v_minIndexable_boxed_3637_; lean_object* v_res_3638_; 
v_attrKind_boxed_3635_ = lean_unbox(v_attrKind_3625_);
v_showInfo_boxed_3636_ = lean_unbox(v_showInfo_3626_);
v_minIndexable_boxed_3637_ = lean_unbox(v_minIndexable_3627_);
v_res_3638_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_3624_, v_attrKind_boxed_3635_, v_showInfo_boxed_3636_, v_minIndexable_boxed_3637_, v_as_x27_3628_, v_b_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_);
lean_dec(v___y_3633_);
lean_dec_ref(v___y_3632_);
lean_dec(v___y_3631_);
lean_dec_ref(v___y_3630_);
lean_dec(v_as_x27_3628_);
return v_res_3638_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; 
v___x_3640_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0));
v___x_3641_ = l_Lean_stringToMessageData(v___x_3640_);
return v___x_3641_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3(void){
_start:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3643_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2));
v___x_3644_ = l_Lean_stringToMessageData(v___x_3643_);
return v___x_3644_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5(void){
_start:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3646_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4));
v___x_3647_ = l_Lean_stringToMessageData(v___x_3646_);
return v___x_3647_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7(void){
_start:
{
lean_object* v___x_3649_; lean_object* v___x_3650_; 
v___x_3649_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6));
v___x_3650_ = l_Lean_stringToMessageData(v___x_3649_);
return v___x_3650_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10(void){
_start:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3654_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_3655_ = l_Lean_stringToMessageData(v___x_3654_);
return v___x_3655_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12(void){
_start:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3657_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11));
v___x_3658_ = l_Lean_stringToMessageData(v___x_3657_);
return v___x_3658_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14(void){
_start:
{
lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3660_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13));
v___x_3661_ = l_Lean_stringToMessageData(v___x_3660_);
return v___x_3661_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16(void){
_start:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3663_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15));
v___x_3664_ = l_Lean_stringToMessageData(v___x_3663_);
return v___x_3664_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18(void){
_start:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3666_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17));
v___x_3667_ = l_Lean_stringToMessageData(v___x_3666_);
return v___x_3667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(lean_object* v_declName_3668_, uint8_t v_attrKind_3669_, lean_object* v_stx_3670_, lean_object* v_ext_3671_, uint8_t v_showInfo_3672_, uint8_t v_minIndexable_3673_, uint8_t v___x_3674_, lean_object* v_attrName_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_){
_start:
{
lean_object* v___x_3703_; 
v___x_3703_ = l_Lean_Meta_Grind_getAttrKindFromOpt(v_stx_3670_, v___y_3678_, v___y_3679_);
if (lean_obj_tag(v___x_3703_) == 0)
{
lean_object* v_a_3704_; 
v_a_3704_ = lean_ctor_get(v___x_3703_, 0);
lean_inc(v_a_3704_);
lean_dec_ref_known(v___x_3703_, 1);
switch(lean_obj_tag(v_a_3704_))
{
case 0:
{
lean_object* v_k_3705_; 
lean_dec(v_attrName_3675_);
lean_dec(v_stx_3670_);
v_k_3705_ = lean_ctor_get(v_a_3704_, 0);
lean_inc(v_k_3705_);
lean_dec_ref_known(v_a_3704_, 1);
if (lean_obj_tag(v_k_3705_) == 9)
{
lean_object* v___x_3706_; 
lean_dec_ref(v_ext_3671_);
lean_dec(v_declName_3668_);
v___x_3706_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v___y_3678_, v___y_3679_);
return v___x_3706_;
}
else
{
lean_object* v___x_3707_; 
v___x_3707_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_3679_);
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3709_; 
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
lean_inc(v_a_3708_);
lean_dec_ref_known(v___x_3707_, 1);
v___x_3709_ = l_Lean_Meta_Grind_Extension_addEMatchAttr(v_ext_3671_, v_declName_3668_, v_attrKind_3669_, v_k_3705_, v_a_3708_, v_showInfo_3672_, v_minIndexable_3673_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3709_;
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec(v_k_3705_);
lean_dec_ref(v_ext_3671_);
lean_dec(v_declName_3668_);
v_a_3710_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3707_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3707_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
}
case 1:
{
uint8_t v_eager_3718_; lean_object* v___x_3719_; 
lean_dec(v_attrName_3675_);
lean_dec(v_stx_3670_);
v_eager_3718_ = lean_ctor_get_uint8(v_a_3704_, 0);
lean_dec_ref_known(v_a_3704_, 0);
v___x_3719_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_3671_, v_declName_3668_, v_eager_3718_, v_attrKind_3669_, v___y_3678_, v___y_3679_);
return v___x_3719_;
}
case 2:
{
lean_object* v___x_3720_; 
lean_dec(v_stx_3670_);
lean_inc(v_declName_3668_);
v___x_3720_ = l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(v_declName_3668_, v___x_3674_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
if (lean_obj_tag(v___x_3720_) == 0)
{
lean_object* v_a_3721_; 
v_a_3721_ = lean_ctor_get(v___x_3720_, 0);
lean_inc(v_a_3721_);
lean_dec_ref_known(v___x_3720_, 1);
if (lean_obj_tag(v_a_3721_) == 1)
{
lean_object* v_val_3722_; lean_object* v_ctors_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
lean_dec(v_attrName_3675_);
lean_dec(v_declName_3668_);
v_val_3722_ = lean_ctor_get(v_a_3721_, 0);
lean_inc(v_val_3722_);
lean_dec_ref_known(v_a_3721_, 1);
v_ctors_3723_ = lean_ctor_get(v_val_3722_, 4);
lean_inc(v_ctors_3723_);
lean_dec(v_val_3722_);
v___x_3724_ = lean_box(0);
v___x_3725_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_3671_, v_attrKind_3669_, v_showInfo_3672_, v_minIndexable_3673_, v_ctors_3723_, v___x_3724_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
lean_dec(v_ctors_3723_);
if (lean_obj_tag(v___x_3725_) == 0)
{
lean_object* v___x_3727_; uint8_t v_isShared_3728_; uint8_t v_isSharedCheck_3732_; 
v_isSharedCheck_3732_ = !lean_is_exclusive(v___x_3725_);
if (v_isSharedCheck_3732_ == 0)
{
lean_object* v_unused_3733_; 
v_unused_3733_ = lean_ctor_get(v___x_3725_, 0);
lean_dec(v_unused_3733_);
v___x_3727_ = v___x_3725_;
v_isShared_3728_ = v_isSharedCheck_3732_;
goto v_resetjp_3726_;
}
else
{
lean_dec(v___x_3725_);
v___x_3727_ = lean_box(0);
v_isShared_3728_ = v_isSharedCheck_3732_;
goto v_resetjp_3726_;
}
v_resetjp_3726_:
{
lean_object* v___x_3730_; 
if (v_isShared_3728_ == 0)
{
lean_ctor_set(v___x_3727_, 0, v___x_3724_);
v___x_3730_ = v___x_3727_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v___x_3724_);
v___x_3730_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
return v___x_3730_;
}
}
}
else
{
return v___x_3725_;
}
}
else
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; 
lean_dec(v_a_3721_);
lean_dec_ref(v_ext_3671_);
v___x_3734_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3);
v___x_3735_ = l_Lean_MessageData_ofName(v_attrName_3675_);
v___x_3736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3734_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
v___x_3737_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5);
v___x_3738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3738_, 0, v___x_3736_);
lean_ctor_set(v___x_3738_, 1, v___x_3737_);
v___x_3739_ = l_Lean_MessageData_ofConstName(v_declName_3668_, v___x_3674_);
v___x_3740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3738_);
lean_ctor_set(v___x_3740_, 1, v___x_3739_);
v___x_3741_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7);
v___x_3742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3740_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v___x_3743_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_3742_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3743_;
}
}
else
{
lean_object* v_a_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3751_; 
lean_dec(v_attrName_3675_);
lean_dec_ref(v_ext_3671_);
lean_dec(v_declName_3668_);
v_a_3744_ = lean_ctor_get(v___x_3720_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3720_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3746_ = v___x_3720_;
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_a_3744_);
lean_dec(v___x_3720_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v___x_3749_; 
if (v_isShared_3747_ == 0)
{
v___x_3749_ = v___x_3746_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v_a_3744_);
v___x_3749_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
return v___x_3749_;
}
}
}
}
case 3:
{
lean_object* v___x_3752_; 
lean_dec(v_attrName_3675_);
lean_inc(v_declName_3668_);
v___x_3752_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_declName_3668_, v___x_3674_, v___y_3678_, v___y_3679_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
lean_inc(v_a_3753_);
lean_dec_ref_known(v___x_3752_, 1);
if (lean_obj_tag(v_a_3753_) == 1)
{
lean_object* v_val_3754_; lean_object* v___x_3755_; 
lean_dec(v_stx_3670_);
lean_dec(v_declName_3668_);
v_val_3754_ = lean_ctor_get(v_a_3753_, 0);
lean_inc_n(v_val_3754_, 2);
lean_dec_ref_known(v_a_3753_, 1);
lean_inc_ref(v_ext_3671_);
v___x_3755_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_3671_, v_val_3754_, v___x_3674_, v_attrKind_3669_, v___y_3678_, v___y_3679_);
if (lean_obj_tag(v___x_3755_) == 0)
{
lean_object* v___x_3756_; 
lean_dec_ref_known(v___x_3755_, 1);
v___x_3756_ = l_Lean_Meta_isInductivePredicate_x3f(v_val_3754_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3777_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3759_ = v___x_3756_;
v_isShared_3760_ = v_isSharedCheck_3777_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_a_3757_);
lean_dec(v___x_3756_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3777_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
if (lean_obj_tag(v_a_3757_) == 1)
{
lean_object* v_val_3761_; lean_object* v_ctors_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
lean_del_object(v___x_3759_);
v_val_3761_ = lean_ctor_get(v_a_3757_, 0);
lean_inc(v_val_3761_);
lean_dec_ref_known(v_a_3757_, 1);
v_ctors_3762_ = lean_ctor_get(v_val_3761_, 4);
lean_inc(v_ctors_3762_);
lean_dec(v_val_3761_);
v___x_3763_ = lean_box(0);
v___x_3764_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_3671_, v_attrKind_3669_, v_showInfo_3672_, v_minIndexable_3673_, v_ctors_3762_, v___x_3763_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
lean_dec(v_ctors_3762_);
if (lean_obj_tag(v___x_3764_) == 0)
{
lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3771_; 
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3764_);
if (v_isSharedCheck_3771_ == 0)
{
lean_object* v_unused_3772_; 
v_unused_3772_ = lean_ctor_get(v___x_3764_, 0);
lean_dec(v_unused_3772_);
v___x_3766_ = v___x_3764_;
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
else
{
lean_dec(v___x_3764_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v___x_3769_; 
if (v_isShared_3767_ == 0)
{
lean_ctor_set(v___x_3766_, 0, v___x_3763_);
v___x_3769_ = v___x_3766_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v___x_3763_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
else
{
return v___x_3764_;
}
}
else
{
lean_object* v___x_3773_; lean_object* v___x_3775_; 
lean_dec(v_a_3757_);
lean_dec_ref(v_ext_3671_);
v___x_3773_ = lean_box(0);
if (v_isShared_3760_ == 0)
{
lean_ctor_set(v___x_3759_, 0, v___x_3773_);
v___x_3775_ = v___x_3759_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v___x_3773_);
v___x_3775_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
return v___x_3775_;
}
}
}
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3785_; 
lean_dec_ref(v_ext_3671_);
v_a_3778_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3780_ = v___x_3756_;
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v___x_3756_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
else
{
lean_dec(v_val_3754_);
lean_dec_ref(v_ext_3671_);
return v___x_3755_;
}
}
else
{
lean_object* v___x_3786_; 
lean_dec(v_a_3753_);
v___x_3786_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_3679_);
if (lean_obj_tag(v___x_3786_) == 0)
{
lean_object* v_a_3787_; lean_object* v___x_3788_; 
v_a_3787_ = lean_ctor_get(v___x_3786_, 0);
lean_inc(v_a_3787_);
lean_dec_ref_known(v___x_3786_, 1);
v___x_3788_ = l_Lean_Meta_Grind_Extension_addEMatchAttrAndSuggest(v_ext_3671_, v_stx_3670_, v_declName_3668_, v_attrKind_3669_, v_a_3787_, v_minIndexable_3673_, v_showInfo_3672_, v___x_3674_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3788_;
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
lean_dec_ref(v_ext_3671_);
lean_dec(v_stx_3670_);
lean_dec(v_declName_3668_);
v_a_3789_ = lean_ctor_get(v___x_3786_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3786_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___x_3786_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3786_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3794_; 
if (v_isShared_3792_ == 0)
{
v___x_3794_ = v___x_3791_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3789_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
}
}
else
{
lean_object* v_a_3797_; lean_object* v___x_3799_; uint8_t v_isShared_3800_; uint8_t v_isSharedCheck_3804_; 
lean_dec_ref(v_ext_3671_);
lean_dec(v_stx_3670_);
lean_dec(v_declName_3668_);
v_a_3797_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3804_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3799_ = v___x_3752_;
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
else
{
lean_inc(v_a_3797_);
lean_dec(v___x_3752_);
v___x_3799_ = lean_box(0);
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
v_resetjp_3798_:
{
lean_object* v___x_3802_; 
if (v_isShared_3800_ == 0)
{
v___x_3802_ = v___x_3799_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_a_3797_);
v___x_3802_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
return v___x_3802_;
}
}
}
}
case 4:
{
lean_object* v___x_3805_; 
lean_dec(v_attrName_3675_);
lean_dec(v_stx_3670_);
v___x_3805_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(v_ext_3671_, v_declName_3668_, v_attrKind_3669_, v___y_3678_, v___y_3679_);
return v___x_3805_;
}
case 5:
{
lean_object* v_prio_3806_; lean_object* v___x_3807_; uint8_t v___x_3808_; 
lean_dec_ref(v_ext_3671_);
lean_dec(v_stx_3670_);
v_prio_3806_ = lean_ctor_get(v_a_3704_, 0);
lean_inc(v_prio_3806_);
lean_dec_ref_known(v_a_3704_, 1);
v___x_3807_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8));
v___x_3808_ = lean_name_eq(v_attrName_3675_, v___x_3807_);
lean_dec(v_attrName_3675_);
if (v___x_3808_ == 0)
{
lean_object* v___x_3809_; lean_object* v___x_3810_; 
lean_dec(v_prio_3806_);
lean_dec(v_declName_3668_);
v___x_3809_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10);
v___x_3810_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_3809_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3810_;
}
else
{
lean_object* v___x_3811_; 
v___x_3811_ = l_Lean_Meta_Grind_addSymbolPriorityAttr(v_declName_3668_, v_attrKind_3669_, v_prio_3806_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3811_;
}
}
case 6:
{
lean_object* v___x_3812_; 
lean_dec(v_attrName_3675_);
lean_dec(v_stx_3670_);
v___x_3812_ = l_Lean_Meta_Grind_Extension_addInjectiveAttr(v_ext_3671_, v_declName_3668_, v_attrKind_3669_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3812_;
}
case 7:
{
lean_object* v___x_3813_; 
lean_dec(v_attrName_3675_);
lean_dec(v_stx_3670_);
v___x_3813_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(v_ext_3671_, v_declName_3668_, v_attrKind_3669_, v___y_3678_, v___y_3679_);
return v___x_3813_;
}
case 8:
{
uint8_t v_post_3814_; uint8_t v_inv_3815_; lean_object* v___y_3817_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v___y_3820_; lean_object* v___x_3823_; uint8_t v___x_3824_; 
lean_dec_ref(v_ext_3671_);
lean_dec(v_stx_3670_);
v_post_3814_ = lean_ctor_get_uint8(v_a_3704_, 0);
v_inv_3815_ = lean_ctor_get_uint8(v_a_3704_, 1);
lean_dec_ref_known(v_a_3704_, 0);
v___x_3823_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8));
v___x_3824_ = lean_name_eq(v_attrName_3675_, v___x_3823_);
lean_dec(v_attrName_3675_);
if (v___x_3824_ == 0)
{
lean_object* v___x_3825_; lean_object* v___x_3826_; 
lean_dec(v_declName_3668_);
v___x_3825_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12);
v___x_3826_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_3825_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3826_;
}
else
{
v___y_3817_ = v___y_3676_;
v___y_3818_ = v___y_3677_;
v___y_3819_ = v___y_3678_;
v___y_3820_ = v___y_3679_;
goto v___jp_3816_;
}
v___jp_3816_:
{
lean_object* v___x_3821_; lean_object* v___x_3822_; 
v___x_3821_ = lean_unsigned_to_nat(1000u);
v___x_3822_ = l_Lean_Meta_Grind_addNormTheorem(v_declName_3668_, v_post_3814_, v_inv_3815_, v_attrKind_3669_, v___x_3821_, v___y_3817_, v___y_3818_, v___y_3819_, v___y_3820_);
return v___x_3822_;
}
}
case 9:
{
lean_object* v___x_3827_; uint8_t v___x_3828_; 
lean_dec_ref(v_ext_3671_);
lean_dec(v_stx_3670_);
v___x_3827_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8));
v___x_3828_ = lean_name_eq(v_attrName_3675_, v___x_3827_);
lean_dec(v_attrName_3675_);
if (v___x_3828_ == 0)
{
lean_object* v___x_3829_; lean_object* v___x_3830_; 
lean_dec(v_declName_3668_);
v___x_3829_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14);
v___x_3830_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_3829_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3830_;
}
else
{
goto v___jp_3681_;
}
}
case 10:
{
uint8_t v_fallback_3831_; lean_object* v___x_3832_; uint8_t v___x_3833_; 
lean_dec_ref(v_ext_3671_);
lean_dec(v_stx_3670_);
v_fallback_3831_ = lean_ctor_get_uint8(v_a_3704_, 0);
lean_dec_ref_known(v_a_3704_, 0);
v___x_3832_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8));
v___x_3833_ = lean_name_eq(v_attrName_3675_, v___x_3832_);
lean_dec(v_attrName_3675_);
if (v___x_3833_ == 0)
{
lean_object* v___x_3834_; lean_object* v___x_3835_; 
lean_dec(v_declName_3668_);
v___x_3834_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16);
v___x_3835_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_3834_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3835_;
}
else
{
lean_object* v___x_3836_; 
v___x_3836_ = l_Lean_Meta_Grind_addHomoAttr(v_declName_3668_, v_attrKind_3669_, v_fallback_3831_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3836_;
}
}
default: 
{
lean_object* v___x_3837_; uint8_t v___x_3838_; 
lean_dec_ref(v_ext_3671_);
lean_dec(v_stx_3670_);
v___x_3837_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8));
v___x_3838_ = lean_name_eq(v_attrName_3675_, v___x_3837_);
lean_dec(v_attrName_3675_);
if (v___x_3838_ == 0)
{
lean_object* v___x_3839_; lean_object* v___x_3840_; 
lean_dec(v_declName_3668_);
v___x_3839_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18);
v___x_3840_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_3839_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3840_;
}
else
{
lean_object* v___x_3841_; 
v___x_3841_ = l_Lean_Meta_Grind_addHomoPredAttr(v_declName_3668_, v_attrKind_3669_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3841_;
}
}
}
}
else
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3849_; 
lean_dec(v_attrName_3675_);
lean_dec_ref(v_ext_3671_);
lean_dec(v_stx_3670_);
lean_dec(v_declName_3668_);
v_a_3842_ = lean_ctor_get(v___x_3703_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v___x_3703_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3844_ = v___x_3703_;
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3703_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
lean_object* v___x_3847_; 
if (v_isShared_3845_ == 0)
{
v___x_3847_ = v___x_3844_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_a_3842_);
v___x_3847_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
return v___x_3847_;
}
}
}
v___jp_3681_:
{
lean_object* v___x_3682_; 
v___x_3682_ = l_Lean_Meta_Grind_addNormDeclToUnfold(v_declName_3668_, v_attrKind_3669_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3694_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3694_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3694_ == 0)
{
v___x_3685_ = v___x_3682_;
v_isShared_3686_ = v_isSharedCheck_3694_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3682_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3694_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
uint8_t v___x_3687_; 
v___x_3687_ = lean_unbox(v_a_3683_);
lean_dec(v_a_3683_);
if (v___x_3687_ == 0)
{
lean_object* v___x_3688_; lean_object* v___x_3689_; 
lean_del_object(v___x_3685_);
v___x_3688_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1);
v___x_3689_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_3688_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
return v___x_3689_;
}
else
{
lean_object* v___x_3690_; lean_object* v___x_3692_; 
v___x_3690_ = lean_box(0);
if (v_isShared_3686_ == 0)
{
lean_ctor_set(v___x_3685_, 0, v___x_3690_);
v___x_3692_ = v___x_3685_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v___x_3690_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
}
}
else
{
lean_object* v_a_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3702_; 
v_a_3695_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3702_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3697_ = v___x_3682_;
v_isShared_3698_ = v_isSharedCheck_3702_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_a_3695_);
lean_dec(v___x_3682_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3702_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___x_3700_; 
if (v_isShared_3698_ == 0)
{
v___x_3700_ = v___x_3697_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v_a_3695_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed(lean_object* v_declName_3850_, lean_object* v_attrKind_3851_, lean_object* v_stx_3852_, lean_object* v_ext_3853_, lean_object* v_showInfo_3854_, lean_object* v_minIndexable_3855_, lean_object* v___x_3856_, lean_object* v_attrName_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_){
_start:
{
uint8_t v_attrKind_boxed_3863_; uint8_t v_showInfo_boxed_3864_; uint8_t v_minIndexable_boxed_3865_; uint8_t v___x_12063__boxed_3866_; lean_object* v_res_3867_; 
v_attrKind_boxed_3863_ = lean_unbox(v_attrKind_3851_);
v_showInfo_boxed_3864_ = lean_unbox(v_showInfo_3854_);
v_minIndexable_boxed_3865_ = lean_unbox(v_minIndexable_3855_);
v___x_12063__boxed_3866_ = lean_unbox(v___x_3856_);
v_res_3867_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(v_declName_3850_, v_attrKind_boxed_3863_, v_stx_3852_, v_ext_3853_, v_showInfo_boxed_3864_, v_minIndexable_boxed_3865_, v___x_12063__boxed_3866_, v_attrName_3857_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec(v___y_3859_);
lean_dec_ref(v___y_3858_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___lam__0(lean_object* v_addEntryFn_3868_, lean_object* v_entry_3869_, lean_object* v_s_3870_){
_start:
{
lean_object* v_importedEntries_3871_; lean_object* v_state_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3880_; 
v_importedEntries_3871_ = lean_ctor_get(v_s_3870_, 0);
v_state_3872_ = lean_ctor_get(v_s_3870_, 1);
v_isSharedCheck_3880_ = !lean_is_exclusive(v_s_3870_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3874_ = v_s_3870_;
v_isShared_3875_ = v_isSharedCheck_3880_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_state_3872_);
lean_inc(v_importedEntries_3871_);
lean_dec(v_s_3870_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3880_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v_state_3876_; lean_object* v___x_3878_; 
v_state_3876_ = lean_apply_2(v_addEntryFn_3868_, v_state_3872_, v_entry_3869_);
if (v_isShared_3875_ == 0)
{
lean_ctor_set(v___x_3874_, 1, v_state_3876_);
v___x_3878_ = v___x_3874_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_importedEntries_3871_);
lean_ctor_set(v_reuseFailAlloc_3879_, 1, v_state_3876_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8___redArg(lean_object* v_keys_3881_, lean_object* v_i_3882_, lean_object* v_k_3883_){
_start:
{
lean_object* v___x_3884_; uint8_t v___x_3885_; 
v___x_3884_ = lean_array_get_size(v_keys_3881_);
v___x_3885_ = lean_nat_dec_lt(v_i_3882_, v___x_3884_);
if (v___x_3885_ == 0)
{
lean_dec(v_i_3882_);
return v___x_3885_;
}
else
{
lean_object* v_k_x27_3886_; uint8_t v___x_3887_; 
v_k_x27_3886_ = lean_array_fget_borrowed(v_keys_3881_, v_i_3882_);
v___x_3887_ = l_Lean_instBEqExtraModUse_beq(v_k_3883_, v_k_x27_3886_);
if (v___x_3887_ == 0)
{
lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3888_ = lean_unsigned_to_nat(1u);
v___x_3889_ = lean_nat_add(v_i_3882_, v___x_3888_);
lean_dec(v_i_3882_);
v_i_3882_ = v___x_3889_;
goto _start;
}
else
{
lean_dec(v_i_3882_);
return v___x_3885_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_keys_3891_, lean_object* v_i_3892_, lean_object* v_k_3893_){
_start:
{
uint8_t v_res_3894_; lean_object* v_r_3895_; 
v_res_3894_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8___redArg(v_keys_3891_, v_i_3892_, v_k_3893_);
lean_dec_ref(v_k_3893_);
lean_dec_ref(v_keys_3891_);
v_r_3895_ = lean_box(v_res_3894_);
return v_r_3895_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5___redArg(lean_object* v_x_3896_, size_t v_x_3897_, lean_object* v_x_3898_){
_start:
{
if (lean_obj_tag(v_x_3896_) == 0)
{
lean_object* v_es_3899_; lean_object* v___x_3900_; size_t v___x_3901_; size_t v___x_3902_; lean_object* v_j_3903_; lean_object* v___x_3904_; 
v_es_3899_ = lean_ctor_get(v_x_3896_, 0);
v___x_3900_ = lean_box(2);
v___x_3901_ = ((size_t)31ULL);
v___x_3902_ = lean_usize_land(v_x_3897_, v___x_3901_);
v_j_3903_ = lean_usize_to_nat(v___x_3902_);
v___x_3904_ = lean_array_get_borrowed(v___x_3900_, v_es_3899_, v_j_3903_);
lean_dec(v_j_3903_);
switch(lean_obj_tag(v___x_3904_))
{
case 0:
{
lean_object* v_key_3905_; uint8_t v___x_3906_; 
v_key_3905_ = lean_ctor_get(v___x_3904_, 0);
v___x_3906_ = l_Lean_instBEqExtraModUse_beq(v_x_3898_, v_key_3905_);
return v___x_3906_;
}
case 1:
{
lean_object* v_node_3907_; size_t v___x_3908_; size_t v___x_3909_; 
v_node_3907_ = lean_ctor_get(v___x_3904_, 0);
v___x_3908_ = ((size_t)5ULL);
v___x_3909_ = lean_usize_shift_right(v_x_3897_, v___x_3908_);
v_x_3896_ = v_node_3907_;
v_x_3897_ = v___x_3909_;
goto _start;
}
default: 
{
uint8_t v___x_3911_; 
v___x_3911_ = 0;
return v___x_3911_;
}
}
}
else
{
lean_object* v_ks_3912_; lean_object* v___x_3913_; uint8_t v___x_3914_; 
v_ks_3912_ = lean_ctor_get(v_x_3896_, 0);
v___x_3913_ = lean_unsigned_to_nat(0u);
v___x_3914_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8___redArg(v_ks_3912_, v___x_3913_, v_x_3898_);
return v___x_3914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_x_3915_, lean_object* v_x_3916_, lean_object* v_x_3917_){
_start:
{
size_t v_x_12487__boxed_3918_; uint8_t v_res_3919_; lean_object* v_r_3920_; 
v_x_12487__boxed_3918_ = lean_unbox_usize(v_x_3916_);
lean_dec(v_x_3916_);
v_res_3919_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5___redArg(v_x_3915_, v_x_12487__boxed_3918_, v_x_3917_);
lean_dec_ref(v_x_3917_);
lean_dec_ref(v_x_3915_);
v_r_3920_ = lean_box(v_res_3919_);
return v_r_3920_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___redArg(lean_object* v_x_3921_, lean_object* v_x_3922_){
_start:
{
uint64_t v___x_3923_; size_t v___x_3924_; uint8_t v___x_3925_; 
v___x_3923_ = l_Lean_instHashableExtraModUse_hash(v_x_3922_);
v___x_3924_ = lean_uint64_to_usize(v___x_3923_);
v___x_3925_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5___redArg(v_x_3921_, v___x_3924_, v_x_3922_);
return v___x_3925_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_x_3926_, lean_object* v_x_3927_){
_start:
{
uint8_t v_res_3928_; lean_object* v_r_3929_; 
v_res_3928_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___redArg(v_x_3926_, v_x_3927_);
lean_dec_ref(v_x_3927_);
lean_dec_ref(v_x_3926_);
v_r_3929_ = lean_box(v_res_3928_);
return v_r_3929_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3930_; 
v___x_3930_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_3930_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__4(void){
_start:
{
lean_object* v___x_3935_; lean_object* v___x_3936_; 
v___x_3935_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__3));
v___x_3936_ = l_Lean_stringToMessageData(v___x_3935_);
return v___x_3936_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__6(void){
_start:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3938_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__5));
v___x_3939_ = l_Lean_stringToMessageData(v___x_3938_);
return v___x_3939_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__7(void){
_start:
{
lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3940_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__1));
v___x_3941_ = l_Lean_stringToMessageData(v___x_3940_);
return v___x_3941_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__8(void){
_start:
{
lean_object* v_cls_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; 
v_cls_3942_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__2));
v___x_3943_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f___closed__1));
v___x_3944_ = l_Lean_Name_append(v___x_3943_, v_cls_3942_);
return v___x_3944_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__10(void){
_start:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; 
v___x_3946_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__9));
v___x_3947_ = l_Lean_stringToMessageData(v___x_3946_);
return v___x_3947_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__12(void){
_start:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3949_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__11));
v___x_3950_ = l_Lean_stringToMessageData(v___x_3949_);
return v___x_3950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2(lean_object* v_mod_3955_, uint8_t v_isMeta_3956_, lean_object* v_hint_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
lean_object* v___y_3964_; lean_object* v___y_3965_; lean_object* v___y_3966_; lean_object* v___y_3967_; lean_object* v___y_3968_; lean_object* v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_3971_; lean_object* v___y_3972_; lean_object* v___y_3973_; lean_object* v___y_3974_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v_env_3997_; uint8_t v_isExporting_3998_; lean_object* v_entry_3999_; lean_object* v___y_4001_; lean_object* v___y_4002_; lean_object* v___x_4024_; lean_object* v_env_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; uint8_t v___x_4030_; 
v___x_3995_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__0);
v___x_3996_ = lean_st_ref_get(v___y_3961_);
v_env_3997_ = lean_ctor_get(v___x_3996_, 0);
lean_inc_ref(v_env_3997_);
lean_dec(v___x_3996_);
v_isExporting_3998_ = lean_ctor_get_uint8(v_env_3997_, sizeof(void*)*13);
lean_dec_ref(v_env_3997_);
lean_inc(v_mod_3955_);
v_entry_3999_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3999_, 0, v_mod_3955_);
lean_ctor_set_uint8(v_entry_3999_, sizeof(void*)*1, v_isExporting_3998_);
lean_ctor_set_uint8(v_entry_3999_, sizeof(void*)*1 + 1, v_isMeta_3956_);
v___x_4024_ = lean_st_ref_get(v___y_3961_);
v_env_4025_ = lean_ctor_get(v___x_4024_, 0);
lean_inc_ref(v_env_4025_);
lean_dec(v___x_4024_);
v___x_4026_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_4027_ = lean_box(1);
v___x_4028_ = lean_box(0);
v___x_4029_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3995_, v___x_4026_, v_env_4025_, v___x_4027_, v___x_4028_);
v___x_4030_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___redArg(v___x_4029_, v_entry_3999_);
lean_dec(v___x_4029_);
if (v___x_4030_ == 0)
{
lean_object* v_toCold_4031_; lean_object* v_options_4032_; uint8_t v_hasTrace_4033_; 
v_toCold_4031_ = lean_ctor_get(v___y_3960_, 0);
v_options_4032_ = lean_ctor_get(v_toCold_4031_, 2);
v_hasTrace_4033_ = lean_ctor_get_uint8(v_options_4032_, sizeof(void*)*1);
if (v_hasTrace_4033_ == 0)
{
lean_dec(v_hint_3957_);
lean_dec(v_mod_3955_);
v___y_4001_ = v___y_3959_;
v___y_4002_ = v___y_3961_;
goto v___jp_4000_;
}
else
{
lean_object* v_inheritedTraceOptions_4034_; lean_object* v_cls_4035_; lean_object* v___y_4037_; lean_object* v___y_4038_; lean_object* v___y_4042_; lean_object* v___y_4043_; lean_object* v___x_4055_; uint8_t v___x_4056_; 
v_inheritedTraceOptions_4034_ = lean_ctor_get(v_toCold_4031_, 11);
v_cls_4035_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__2));
v___x_4055_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__8);
v___x_4056_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4034_, v_options_4032_, v___x_4055_);
if (v___x_4056_ == 0)
{
lean_dec(v_hint_3957_);
lean_dec(v_mod_3955_);
v___y_4001_ = v___y_3959_;
v___y_4002_ = v___y_3961_;
goto v___jp_4000_;
}
else
{
lean_object* v___x_4057_; lean_object* v___y_4059_; 
v___x_4057_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__10);
if (v_isExporting_3998_ == 0)
{
lean_object* v___x_4066_; 
v___x_4066_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__15));
v___y_4059_ = v___x_4066_;
goto v___jp_4058_;
}
else
{
lean_object* v___x_4067_; 
v___x_4067_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__16));
v___y_4059_ = v___x_4067_;
goto v___jp_4058_;
}
v___jp_4058_:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; 
lean_inc_ref(v___y_4059_);
v___x_4060_ = l_Lean_stringToMessageData(v___y_4059_);
v___x_4061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4061_, 0, v___x_4057_);
lean_ctor_set(v___x_4061_, 1, v___x_4060_);
v___x_4062_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__12);
v___x_4063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4061_);
lean_ctor_set(v___x_4063_, 1, v___x_4062_);
if (v_isMeta_3956_ == 0)
{
lean_object* v___x_4064_; 
v___x_4064_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__13));
v___y_4042_ = v___x_4063_;
v___y_4043_ = v___x_4064_;
goto v___jp_4041_;
}
else
{
lean_object* v___x_4065_; 
v___x_4065_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__14));
v___y_4042_ = v___x_4063_;
v___y_4043_ = v___x_4065_;
goto v___jp_4041_;
}
}
}
v___jp_4036_:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; 
v___x_4039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4039_, 0, v___y_4037_);
lean_ctor_set(v___x_4039_, 1, v___y_4038_);
v___x_4040_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0(v_cls_4035_, v___x_4039_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_dec_ref_known(v___x_4040_, 1);
v___y_4001_ = v___y_3959_;
v___y_4002_ = v___y_3961_;
goto v___jp_4000_;
}
else
{
lean_dec_ref_known(v_entry_3999_, 1);
return v___x_4040_;
}
}
v___jp_4041_:
{
lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; uint8_t v___x_4050_; 
lean_inc_ref(v___y_4043_);
v___x_4044_ = l_Lean_stringToMessageData(v___y_4043_);
v___x_4045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4045_, 0, v___y_4042_);
lean_ctor_set(v___x_4045_, 1, v___x_4044_);
v___x_4046_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__4);
v___x_4047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4047_, 0, v___x_4045_);
lean_ctor_set(v___x_4047_, 1, v___x_4046_);
v___x_4048_ = l_Lean_MessageData_ofName(v_mod_3955_);
v___x_4049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4049_, 0, v___x_4047_);
lean_ctor_set(v___x_4049_, 1, v___x_4048_);
v___x_4050_ = l_Lean_Name_isAnonymous(v_hint_3957_);
if (v___x_4050_ == 0)
{
lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4051_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__6);
v___x_4052_ = l_Lean_MessageData_ofName(v_hint_3957_);
v___x_4053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4053_, 0, v___x_4051_);
lean_ctor_set(v___x_4053_, 1, v___x_4052_);
v___y_4037_ = v___x_4049_;
v___y_4038_ = v___x_4053_;
goto v___jp_4036_;
}
else
{
lean_object* v___x_4054_; 
lean_dec(v_hint_3957_);
v___x_4054_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__7);
v___y_4037_ = v___x_4049_;
v___y_4038_ = v___x_4054_;
goto v___jp_4036_;
}
}
}
}
else
{
lean_object* v___x_4068_; lean_object* v___x_4069_; 
lean_dec_ref_known(v_entry_3999_, 1);
lean_dec(v_hint_3957_);
lean_dec(v_mod_3955_);
v___x_4068_ = lean_box(0);
v___x_4069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
return v___x_4069_;
}
v___jp_3963_:
{
lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v_mctx_3979_; lean_object* v_zetaDeltaFVarIds_3980_; lean_object* v_postponed_3981_; lean_object* v_diag_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3993_; 
v___x_3975_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
v___x_3976_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3976_, 0, v___y_3974_);
lean_ctor_set(v___x_3976_, 1, v___y_3969_);
lean_ctor_set(v___x_3976_, 2, v___y_3972_);
lean_ctor_set(v___x_3976_, 3, v___y_3966_);
lean_ctor_set(v___x_3976_, 4, v___y_3971_);
lean_ctor_set(v___x_3976_, 5, v___x_3975_);
lean_ctor_set(v___x_3976_, 6, v___y_3970_);
lean_ctor_set(v___x_3976_, 7, v___y_3967_);
lean_ctor_set(v___x_3976_, 8, v___y_3973_);
lean_ctor_set(v___x_3976_, 9, v___y_3964_);
v___x_3977_ = lean_st_ref_put(v___y_3965_, v___x_3976_);
v___x_3978_ = lean_st_ref_take(v___y_3968_);
v_mctx_3979_ = lean_ctor_get(v___x_3978_, 0);
v_zetaDeltaFVarIds_3980_ = lean_ctor_get(v___x_3978_, 2);
v_postponed_3981_ = lean_ctor_get(v___x_3978_, 3);
v_diag_3982_ = lean_ctor_get(v___x_3978_, 4);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_3993_ == 0)
{
lean_object* v_unused_3994_; 
v_unused_3994_ = lean_ctor_get(v___x_3978_, 1);
lean_dec(v_unused_3994_);
v___x_3984_ = v___x_3978_;
v_isShared_3985_ = v_isSharedCheck_3993_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_diag_3982_);
lean_inc(v_postponed_3981_);
lean_inc(v_zetaDeltaFVarIds_3980_);
lean_inc(v_mctx_3979_);
lean_dec(v___x_3978_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3993_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3989_; 
v___x_3986_ = lean_box(0);
v___x_3987_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__5);
if (v_isShared_3985_ == 0)
{
lean_ctor_set(v___x_3984_, 1, v___x_3987_);
v___x_3989_ = v___x_3984_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_mctx_3979_);
lean_ctor_set(v_reuseFailAlloc_3992_, 1, v___x_3987_);
lean_ctor_set(v_reuseFailAlloc_3992_, 2, v_zetaDeltaFVarIds_3980_);
lean_ctor_set(v_reuseFailAlloc_3992_, 3, v_postponed_3981_);
lean_ctor_set(v_reuseFailAlloc_3992_, 4, v_diag_3982_);
v___x_3989_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
lean_object* v___x_3990_; lean_object* v___x_3991_; 
v___x_3990_ = lean_st_ref_put(v___y_3968_, v___x_3989_);
v___x_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3991_, 0, v___x_3986_);
return v___x_3991_;
}
}
}
v___jp_4000_:
{
lean_object* v___x_4003_; lean_object* v_env_4004_; lean_object* v_nextMacroScope_4005_; lean_object* v_ngen_4006_; lean_object* v_auxDeclNGen_4007_; lean_object* v_traceState_4008_; lean_object* v_recordedDeps_4009_; lean_object* v_messages_4010_; lean_object* v_infoState_4011_; lean_object* v_snapshotTasks_4012_; lean_object* v___x_4013_; lean_object* v_toEnvExtension_4014_; lean_object* v_addEntryFn_4015_; lean_object* v_asyncMode_4016_; uint8_t v_logWrites_4017_; lean_object* v___f_4018_; lean_object* v___x_4019_; uint8_t v___x_4020_; 
v___x_4003_ = lean_st_ref_take(v___y_4002_);
v_env_4004_ = lean_ctor_get(v___x_4003_, 0);
lean_inc_ref(v_env_4004_);
v_nextMacroScope_4005_ = lean_ctor_get(v___x_4003_, 1);
lean_inc(v_nextMacroScope_4005_);
v_ngen_4006_ = lean_ctor_get(v___x_4003_, 2);
lean_inc_ref(v_ngen_4006_);
v_auxDeclNGen_4007_ = lean_ctor_get(v___x_4003_, 3);
lean_inc_ref(v_auxDeclNGen_4007_);
v_traceState_4008_ = lean_ctor_get(v___x_4003_, 4);
lean_inc_ref(v_traceState_4008_);
v_recordedDeps_4009_ = lean_ctor_get(v___x_4003_, 6);
lean_inc_ref(v_recordedDeps_4009_);
v_messages_4010_ = lean_ctor_get(v___x_4003_, 7);
lean_inc_ref(v_messages_4010_);
v_infoState_4011_ = lean_ctor_get(v___x_4003_, 8);
lean_inc_ref(v_infoState_4011_);
v_snapshotTasks_4012_ = lean_ctor_get(v___x_4003_, 9);
lean_inc_ref(v_snapshotTasks_4012_);
lean_dec(v___x_4003_);
v___x_4013_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_4014_ = lean_ctor_get(v___x_4013_, 0);
v_addEntryFn_4015_ = lean_ctor_get(v___x_4013_, 3);
v_asyncMode_4016_ = lean_ctor_get(v_toEnvExtension_4014_, 2);
v_logWrites_4017_ = lean_ctor_get_uint8(v_toEnvExtension_4014_, sizeof(void*)*6);
lean_inc(v_addEntryFn_4015_);
v___f_4018_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___lam__0), 3, 2);
lean_closure_set(v___f_4018_, 0, v_addEntryFn_4015_);
lean_closure_set(v___f_4018_, 1, v_entry_3999_);
v___x_4019_ = lean_box(0);
v___x_4020_ = 1;
if (v_logWrites_4017_ == 0)
{
lean_object* v___x_4021_; 
lean_inc_ref(v_toEnvExtension_4014_);
v___x_4021_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4014_, v_env_4004_, v___f_4018_, v_asyncMode_4016_, v___x_4019_, v___x_4020_);
v___y_3964_ = v_snapshotTasks_4012_;
v___y_3965_ = v___y_4002_;
v___y_3966_ = v_auxDeclNGen_4007_;
v___y_3967_ = v_messages_4010_;
v___y_3968_ = v___y_4001_;
v___y_3969_ = v_nextMacroScope_4005_;
v___y_3970_ = v_recordedDeps_4009_;
v___y_3971_ = v_traceState_4008_;
v___y_3972_ = v_ngen_4006_;
v___y_3973_ = v_infoState_4011_;
v___y_3974_ = v___x_4021_;
goto v___jp_3963_;
}
else
{
lean_object* v___x_4022_; lean_object* v___x_4023_; 
lean_inc_ref_n(v_toEnvExtension_4014_, 2);
v___x_4022_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_4014_, v_env_4004_);
lean_dec_ref(v_env_4004_);
v___x_4023_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4014_, v___x_4022_, v___f_4018_, v_asyncMode_4016_, v___x_4019_, v___x_4020_);
v___y_3964_ = v_snapshotTasks_4012_;
v___y_3965_ = v___y_4002_;
v___y_3966_ = v_auxDeclNGen_4007_;
v___y_3967_ = v_messages_4010_;
v___y_3968_ = v___y_4001_;
v___y_3969_ = v_nextMacroScope_4005_;
v___y_3970_ = v_recordedDeps_4009_;
v___y_3971_ = v_traceState_4008_;
v___y_3972_ = v_ngen_4006_;
v___y_3973_ = v_infoState_4011_;
v___y_3974_ = v___x_4023_;
goto v___jp_3963_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___boxed(lean_object* v_mod_4070_, lean_object* v_isMeta_4071_, lean_object* v_hint_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
uint8_t v_isMeta_boxed_4078_; lean_object* v_res_4079_; 
v_isMeta_boxed_4078_ = lean_unbox(v_isMeta_4071_);
v_res_4079_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2(v_mod_4070_, v_isMeta_boxed_4078_, v_hint_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
return v_res_4079_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6___redArg(lean_object* v_a_4080_, lean_object* v_x_4081_){
_start:
{
if (lean_obj_tag(v_x_4081_) == 0)
{
lean_object* v___x_4082_; 
v___x_4082_ = lean_box(0);
return v___x_4082_;
}
else
{
lean_object* v_key_4083_; lean_object* v_value_4084_; lean_object* v_tail_4085_; uint8_t v___x_4086_; 
v_key_4083_ = lean_ctor_get(v_x_4081_, 0);
v_value_4084_ = lean_ctor_get(v_x_4081_, 1);
v_tail_4085_ = lean_ctor_get(v_x_4081_, 2);
v___x_4086_ = lean_name_eq(v_key_4083_, v_a_4080_);
if (v___x_4086_ == 0)
{
v_x_4081_ = v_tail_4085_;
goto _start;
}
else
{
lean_object* v___x_4088_; 
lean_inc(v_value_4084_);
v___x_4088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4088_, 0, v_value_4084_);
return v___x_4088_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_a_4089_, lean_object* v_x_4090_){
_start:
{
lean_object* v_res_4091_; 
v_res_4091_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6___redArg(v_a_4089_, v_x_4090_);
lean_dec(v_x_4090_);
lean_dec(v_a_4089_);
return v_res_4091_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___redArg(lean_object* v_m_4092_, lean_object* v_a_4093_){
_start:
{
lean_object* v_buckets_4094_; lean_object* v___x_4095_; uint64_t v___y_4097_; 
v_buckets_4094_ = lean_ctor_get(v_m_4092_, 1);
v___x_4095_ = lean_array_get_size(v_buckets_4094_);
if (lean_obj_tag(v_a_4093_) == 0)
{
uint64_t v___x_4111_; 
v___x_4111_ = 1723ULL;
v___y_4097_ = v___x_4111_;
goto v___jp_4096_;
}
else
{
uint64_t v_hash_4112_; 
v_hash_4112_ = lean_ctor_get_uint64(v_a_4093_, sizeof(void*)*2);
v___y_4097_ = v_hash_4112_;
goto v___jp_4096_;
}
v___jp_4096_:
{
uint64_t v___x_4098_; uint64_t v___x_4099_; uint64_t v_fold_4100_; uint64_t v___x_4101_; uint64_t v___x_4102_; uint64_t v___x_4103_; size_t v___x_4104_; size_t v___x_4105_; size_t v___x_4106_; size_t v___x_4107_; size_t v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
v___x_4098_ = 32ULL;
v___x_4099_ = lean_uint64_shift_right(v___y_4097_, v___x_4098_);
v_fold_4100_ = lean_uint64_xor(v___y_4097_, v___x_4099_);
v___x_4101_ = 16ULL;
v___x_4102_ = lean_uint64_shift_right(v_fold_4100_, v___x_4101_);
v___x_4103_ = lean_uint64_xor(v_fold_4100_, v___x_4102_);
v___x_4104_ = lean_uint64_to_usize(v___x_4103_);
v___x_4105_ = lean_usize_of_nat(v___x_4095_);
v___x_4106_ = ((size_t)1ULL);
v___x_4107_ = lean_usize_sub(v___x_4105_, v___x_4106_);
v___x_4108_ = lean_usize_land(v___x_4104_, v___x_4107_);
v___x_4109_ = lean_array_uget_borrowed(v_buckets_4094_, v___x_4108_);
v___x_4110_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6___redArg(v_a_4093_, v___x_4109_);
return v___x_4110_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___redArg___boxed(lean_object* v_m_4113_, lean_object* v_a_4114_){
_start:
{
lean_object* v_res_4115_; 
v_res_4115_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___redArg(v_m_4113_, v_a_4114_);
lean_dec(v_a_4114_);
lean_dec_ref(v_m_4113_);
return v_res_4115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(lean_object* v___x_4116_, lean_object* v_declName_4117_, lean_object* v_as_4118_, size_t v_sz_4119_, size_t v_i_4120_, lean_object* v_b_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_){
_start:
{
uint8_t v___x_4127_; 
v___x_4127_ = lean_usize_dec_lt(v_i_4120_, v_sz_4119_);
if (v___x_4127_ == 0)
{
lean_object* v___x_4128_; 
lean_dec(v_declName_4117_);
v___x_4128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4128_, 0, v_b_4121_);
return v___x_4128_;
}
else
{
lean_object* v___x_4129_; lean_object* v_modules_4130_; lean_object* v___x_4131_; lean_object* v_a_4132_; lean_object* v___x_4133_; lean_object* v_toImport_4134_; lean_object* v_module_4135_; lean_object* v___x_4136_; uint8_t v___x_4137_; lean_object* v___x_4138_; 
v___x_4129_ = l_Lean_Environment_header(v___x_4116_);
v_modules_4130_ = lean_ctor_get(v___x_4129_, 3);
lean_inc_ref(v_modules_4130_);
lean_dec_ref(v___x_4129_);
v___x_4131_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_4132_ = lean_array_uget_borrowed(v_as_4118_, v_i_4120_);
v___x_4133_ = lean_array_get(v___x_4131_, v_modules_4130_, v_a_4132_);
lean_dec_ref(v_modules_4130_);
v_toImport_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc_ref(v_toImport_4134_);
lean_dec(v___x_4133_);
v_module_4135_ = lean_ctor_get(v_toImport_4134_, 0);
lean_inc(v_module_4135_);
lean_dec_ref(v_toImport_4134_);
v___x_4136_ = lean_box(0);
v___x_4137_ = 0;
lean_inc(v_declName_4117_);
v___x_4138_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2(v_module_4135_, v___x_4137_, v_declName_4117_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
if (lean_obj_tag(v___x_4138_) == 0)
{
size_t v___x_4139_; size_t v___x_4140_; 
lean_dec_ref_known(v___x_4138_, 1);
v___x_4139_ = ((size_t)1ULL);
v___x_4140_ = lean_usize_add(v_i_4120_, v___x_4139_);
v_i_4120_ = v___x_4140_;
v_b_4121_ = v___x_4136_;
goto _start;
}
else
{
lean_dec(v_declName_4117_);
return v___x_4138_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___boxed(lean_object* v___x_4142_, lean_object* v_declName_4143_, lean_object* v_as_4144_, lean_object* v_sz_4145_, lean_object* v_i_4146_, lean_object* v_b_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_){
_start:
{
size_t v_sz_boxed_4153_; size_t v_i_boxed_4154_; lean_object* v_res_4155_; 
v_sz_boxed_4153_ = lean_unbox_usize(v_sz_4145_);
lean_dec(v_sz_4145_);
v_i_boxed_4154_ = lean_unbox_usize(v_i_4146_);
lean_dec(v_i_4146_);
v_res_4155_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v___x_4142_, v_declName_4143_, v_as_4144_, v_sz_boxed_4153_, v_i_boxed_4154_, v_b_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
lean_dec(v___y_4151_);
lean_dec_ref(v___y_4150_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
lean_dec_ref(v_as_4144_);
lean_dec_ref(v___x_4142_);
return v_res_4155_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0(void){
_start:
{
lean_object* v___x_4156_; 
v___x_4156_ = l_Std_HashMap_instInhabited___redArg();
return v___x_4156_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(lean_object* v_declName_4159_, uint8_t v_isMeta_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_){
_start:
{
lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v_env_4171_; lean_object* v___y_4173_; lean_object* v___x_4186_; 
v___x_4166_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0);
v___x_4167_ = lean_st_ref_get(v___y_4164_);
v_env_4171_ = lean_ctor_get(v___x_4167_, 0);
lean_inc_ref(v_env_4171_);
lean_dec(v___x_4167_);
v___x_4186_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4171_, v_declName_4159_);
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_dec_ref(v_env_4171_);
lean_dec(v_declName_4159_);
goto v___jp_4168_;
}
else
{
lean_object* v_val_4187_; lean_object* v___x_4188_; lean_object* v_modules_4189_; lean_object* v___x_4190_; uint8_t v___x_4191_; 
v_val_4187_ = lean_ctor_get(v___x_4186_, 0);
lean_inc(v_val_4187_);
lean_dec_ref_known(v___x_4186_, 1);
v___x_4188_ = l_Lean_Environment_header(v_env_4171_);
v_modules_4189_ = lean_ctor_get(v___x_4188_, 3);
lean_inc_ref(v_modules_4189_);
lean_dec_ref(v___x_4188_);
v___x_4190_ = lean_array_get_size(v_modules_4189_);
v___x_4191_ = lean_nat_dec_lt(v_val_4187_, v___x_4190_);
if (v___x_4191_ == 0)
{
lean_dec_ref(v_modules_4189_);
lean_dec(v_val_4187_);
lean_dec_ref(v_env_4171_);
lean_dec(v_declName_4159_);
goto v___jp_4168_;
}
else
{
lean_object* v___x_4192_; lean_object* v___x_4193_; uint8_t v___y_4195_; 
v___x_4192_ = lean_array_fget(v_modules_4189_, v_val_4187_);
lean_dec(v_val_4187_);
lean_dec_ref(v_modules_4189_);
v___x_4193_ = lean_st_ref_get(v___y_4164_);
if (v_isMeta_4160_ == 0)
{
lean_dec(v___x_4193_);
v___y_4195_ = v_isMeta_4160_;
goto v___jp_4194_;
}
else
{
lean_object* v_env_4206_; uint8_t v___x_4207_; 
v_env_4206_ = lean_ctor_get(v___x_4193_, 0);
lean_inc_ref(v_env_4206_);
lean_dec(v___x_4193_);
lean_inc(v_declName_4159_);
v___x_4207_ = l_Lean_isMarkedMeta(v_env_4206_, v_declName_4159_);
if (v___x_4207_ == 0)
{
v___y_4195_ = v_isMeta_4160_;
goto v___jp_4194_;
}
else
{
uint8_t v___x_4208_; 
v___x_4208_ = 0;
v___y_4195_ = v___x_4208_;
goto v___jp_4194_;
}
}
v___jp_4194_:
{
lean_object* v_toImport_4196_; lean_object* v_module_4197_; lean_object* v___x_4198_; 
v_toImport_4196_ = lean_ctor_get(v___x_4192_, 0);
lean_inc_ref(v_toImport_4196_);
lean_dec(v___x_4192_);
v_module_4197_ = lean_ctor_get(v_toImport_4196_, 0);
lean_inc(v_module_4197_);
lean_dec_ref(v_toImport_4196_);
lean_inc(v_declName_4159_);
v___x_4198_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2(v_module_4197_, v___y_4195_, v_declName_4159_, v___y_4161_, v___y_4162_, v___y_4163_, v___y_4164_);
if (lean_obj_tag(v___x_4198_) == 0)
{
lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
lean_dec_ref_known(v___x_4198_, 1);
v___x_4199_ = l_Lean_indirectModUseExt;
v___x_4200_ = lean_box(1);
v___x_4201_ = lean_box(0);
lean_inc_ref(v_env_4171_);
v___x_4202_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4166_, v___x_4199_, v_env_4171_, v___x_4200_, v___x_4201_);
v___x_4203_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___redArg(v___x_4202_, v_declName_4159_);
lean_dec(v___x_4202_);
if (lean_obj_tag(v___x_4203_) == 0)
{
lean_object* v___x_4204_; 
v___x_4204_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1));
v___y_4173_ = v___x_4204_;
goto v___jp_4172_;
}
else
{
lean_object* v_val_4205_; 
v_val_4205_ = lean_ctor_get(v___x_4203_, 0);
lean_inc(v_val_4205_);
lean_dec_ref_known(v___x_4203_, 1);
v___y_4173_ = v_val_4205_;
goto v___jp_4172_;
}
}
else
{
lean_dec_ref(v_env_4171_);
lean_dec(v_declName_4159_);
return v___x_4198_;
}
}
}
}
v___jp_4168_:
{
lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4169_ = lean_box(0);
v___x_4170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4169_);
return v___x_4170_;
}
v___jp_4172_:
{
lean_object* v___x_4174_; size_t v_sz_4175_; size_t v___x_4176_; lean_object* v___x_4177_; 
v___x_4174_ = lean_box(0);
v_sz_4175_ = lean_array_size(v___y_4173_);
v___x_4176_ = ((size_t)0ULL);
v___x_4177_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_env_4171_, v_declName_4159_, v___y_4173_, v_sz_4175_, v___x_4176_, v___x_4174_, v___y_4161_, v___y_4162_, v___y_4163_, v___y_4164_);
lean_dec_ref(v___y_4173_);
lean_dec_ref(v_env_4171_);
if (lean_obj_tag(v___x_4177_) == 0)
{
lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4184_; 
v_isSharedCheck_4184_ = !lean_is_exclusive(v___x_4177_);
if (v_isSharedCheck_4184_ == 0)
{
lean_object* v_unused_4185_; 
v_unused_4185_ = lean_ctor_get(v___x_4177_, 0);
lean_dec(v_unused_4185_);
v___x_4179_ = v___x_4177_;
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
else
{
lean_dec(v___x_4177_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4182_; 
if (v_isShared_4180_ == 0)
{
lean_ctor_set(v___x_4179_, 0, v___x_4174_);
v___x_4182_ = v___x_4179_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v___x_4174_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
}
else
{
return v___x_4177_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___boxed(lean_object* v_declName_4209_, lean_object* v_isMeta_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_){
_start:
{
uint8_t v_isMeta_boxed_4216_; lean_object* v_res_4217_; 
v_isMeta_boxed_4216_ = lean_unbox(v_isMeta_4210_);
v_res_4217_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(v_declName_4209_, v_isMeta_boxed_4216_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_);
lean_dec(v___y_4214_);
lean_dec_ref(v___y_4213_);
lean_dec(v___y_4212_);
lean_dec_ref(v___y_4211_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(lean_object* v_x_4218_, uint8_t v_when_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_){
_start:
{
if (v_when_4219_ == 0)
{
lean_object* v___x_4225_; 
lean_inc(v___y_4223_);
lean_inc_ref(v___y_4222_);
lean_inc(v___y_4221_);
lean_inc_ref(v___y_4220_);
v___x_4225_ = lean_apply_5(v_x_4218_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_, lean_box(0));
return v___x_4225_;
}
else
{
uint8_t v___x_4226_; lean_object* v___x_4227_; 
v___x_4226_ = 0;
v___x_4227_ = l_Lean_withExporting___at___00Lean_Meta_Grind_addNormTheorem_spec__0___redArg(v_x_4218_, v___x_4226_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_);
return v___x_4227_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg___boxed(lean_object* v_x_4228_, lean_object* v_when_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
uint8_t v_when_boxed_4235_; lean_object* v_res_4236_; 
v_when_boxed_4235_ = lean_unbox(v_when_4229_);
v_res_4236_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v_x_4228_, v_when_boxed_4235_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_);
lean_dec(v___y_4233_);
lean_dec_ref(v___y_4232_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4230_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(lean_object* v_ext_4237_, uint8_t v_showInfo_4238_, uint8_t v_minIndexable_4239_, lean_object* v_attrName_4240_, lean_object* v___x_4241_, lean_object* v_declName_4242_, lean_object* v_stx_4243_, uint8_t v_attrKind_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_){
_start:
{
uint8_t v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___f_4253_; uint8_t v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; 
v___x_4248_ = 0;
v___x_4249_ = lean_box(v_attrKind_4244_);
v___x_4250_ = lean_box(v_showInfo_4238_);
v___x_4251_ = lean_box(v_minIndexable_4239_);
v___x_4252_ = lean_box(v___x_4248_);
lean_inc(v_declName_4242_);
v___f_4253_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed), 13, 8);
lean_closure_set(v___f_4253_, 0, v_declName_4242_);
lean_closure_set(v___f_4253_, 1, v___x_4249_);
lean_closure_set(v___f_4253_, 2, v_stx_4243_);
lean_closure_set(v___f_4253_, 3, v_ext_4237_);
lean_closure_set(v___f_4253_, 4, v___x_4250_);
lean_closure_set(v___f_4253_, 5, v___x_4251_);
lean_closure_set(v___f_4253_, 6, v___x_4252_);
lean_closure_set(v___f_4253_, 7, v_attrName_4240_);
v___x_4254_ = 1;
v___x_4255_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2);
v___x_4256_ = lean_unsigned_to_nat(32u);
v___x_4257_ = lean_mk_empty_array_with_capacity(v___x_4256_);
lean_dec_ref(v___x_4257_);
v___x_4258_ = lean_unsigned_to_nat(0u);
v___x_4259_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3);
v___x_4260_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_4261_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5));
v___x_4262_ = lean_box(0);
lean_inc(v___x_4241_);
v___x_4263_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4263_, 0, v___x_4255_);
lean_ctor_set(v___x_4263_, 1, v___x_4241_);
lean_ctor_set(v___x_4263_, 2, v___x_4260_);
lean_ctor_set(v___x_4263_, 3, v___x_4261_);
lean_ctor_set(v___x_4263_, 4, v___x_4262_);
lean_ctor_set(v___x_4263_, 5, v___x_4258_);
lean_ctor_set(v___x_4263_, 6, v___x_4262_);
lean_ctor_set_uint8(v___x_4263_, sizeof(void*)*7, v___x_4248_);
lean_ctor_set_uint8(v___x_4263_, sizeof(void*)*7 + 1, v___x_4248_);
lean_ctor_set_uint8(v___x_4263_, sizeof(void*)*7 + 2, v___x_4248_);
lean_ctor_set_uint8(v___x_4263_, sizeof(void*)*7 + 3, v___x_4254_);
v___x_4264_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6);
v___x_4265_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9);
v___x_4266_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10);
v___x_4267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4267_, 0, v___x_4264_);
lean_ctor_set(v___x_4267_, 1, v___x_4265_);
lean_ctor_set(v___x_4267_, 2, v___x_4241_);
lean_ctor_set(v___x_4267_, 3, v___x_4259_);
lean_ctor_set(v___x_4267_, 4, v___x_4266_);
v___x_4268_ = lean_st_mk_ref(v___x_4267_);
v___x_4269_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(v_declName_4242_, v___x_4248_, v___x_4263_, v___x_4268_, v___y_4245_, v___y_4246_);
if (lean_obj_tag(v___x_4269_) == 0)
{
lean_object* v___x_4270_; 
lean_dec_ref_known(v___x_4269_, 1);
v___x_4270_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v___f_4253_, v___x_4254_, v___x_4263_, v___x_4268_, v___y_4245_, v___y_4246_);
lean_dec_ref_known(v___x_4263_, 7);
if (lean_obj_tag(v___x_4270_) == 0)
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4279_; 
v_a_4271_ = lean_ctor_get(v___x_4270_, 0);
v_isSharedCheck_4279_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4273_ = v___x_4270_;
v_isShared_4274_ = v_isSharedCheck_4279_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4270_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4279_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v___x_4275_; lean_object* v___x_4277_; 
v___x_4275_ = lean_st_ref_get(v___x_4268_);
lean_dec(v___x_4268_);
lean_dec(v___x_4275_);
if (v_isShared_4274_ == 0)
{
v___x_4277_ = v___x_4273_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v_a_4271_);
v___x_4277_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
return v___x_4277_;
}
}
}
else
{
lean_dec(v___x_4268_);
return v___x_4270_;
}
}
else
{
lean_dec(v___x_4268_);
lean_dec_ref_known(v___x_4263_, 7);
lean_dec_ref(v___f_4253_);
return v___x_4269_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed(lean_object* v_ext_4280_, lean_object* v_showInfo_4281_, lean_object* v_minIndexable_4282_, lean_object* v_attrName_4283_, lean_object* v___x_4284_, lean_object* v_declName_4285_, lean_object* v_stx_4286_, lean_object* v_attrKind_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_){
_start:
{
uint8_t v_showInfo_boxed_4291_; uint8_t v_minIndexable_boxed_4292_; uint8_t v_attrKind_boxed_4293_; lean_object* v_res_4294_; 
v_showInfo_boxed_4291_ = lean_unbox(v_showInfo_4281_);
v_minIndexable_boxed_4292_ = lean_unbox(v_minIndexable_4282_);
v_attrKind_boxed_4293_ = lean_unbox(v_attrKind_4287_);
v_res_4294_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(v_ext_4280_, v_showInfo_boxed_4291_, v_minIndexable_boxed_4292_, v_attrName_4283_, v___x_4284_, v_declName_4285_, v_stx_4286_, v_attrKind_boxed_4293_, v___y_4288_, v___y_4289_);
lean_dec(v___y_4289_);
lean_dec_ref(v___y_4288_);
return v_res_4294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(lean_object* v_attrName_4317_, uint8_t v_minIndexable_4318_, uint8_t v_showInfo_4319_, lean_object* v_ext_4320_, lean_object* v_ref_4321_){
_start:
{
lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___f_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___f_4328_; lean_object* v___y_4330_; lean_object* v___y_4331_; lean_object* v___y_4374_; 
v___x_4323_ = lean_box(1);
v___x_4324_ = lean_box(v_showInfo_4319_);
lean_inc_n(v_attrName_4317_, 2);
lean_inc_ref(v_ext_4320_);
v___f_4325_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed), 8, 4);
lean_closure_set(v___f_4325_, 0, v_ext_4320_);
lean_closure_set(v___f_4325_, 1, v___x_4323_);
lean_closure_set(v___f_4325_, 2, v___x_4324_);
lean_closure_set(v___f_4325_, 3, v_attrName_4317_);
v___x_4326_ = lean_box(v_showInfo_4319_);
v___x_4327_ = lean_box(v_minIndexable_4318_);
v___f_4328_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed), 11, 5);
lean_closure_set(v___f_4328_, 0, v_ext_4320_);
lean_closure_set(v___f_4328_, 1, v___x_4326_);
lean_closure_set(v___f_4328_, 2, v___x_4327_);
lean_closure_set(v___f_4328_, 3, v_attrName_4317_);
lean_closure_set(v___f_4328_, 4, v___x_4323_);
if (v_minIndexable_4318_ == 0)
{
if (v_showInfo_4319_ == 0)
{
lean_inc(v_attrName_4317_);
v___y_4374_ = v_attrName_4317_;
goto v___jp_4373_;
}
else
{
lean_object* v___x_4402_; lean_object* v___x_4403_; 
v___x_4402_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19));
lean_inc(v_attrName_4317_);
v___x_4403_ = lean_name_append_after(v_attrName_4317_, v___x_4402_);
v___y_4374_ = v___x_4403_;
goto v___jp_4373_;
}
}
else
{
if (v_showInfo_4319_ == 0)
{
lean_object* v___x_4404_; lean_object* v___x_4405_; 
v___x_4404_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20));
lean_inc(v_attrName_4317_);
v___x_4405_ = lean_name_append_after(v_attrName_4317_, v___x_4404_);
v___y_4374_ = v___x_4405_;
goto v___jp_4373_;
}
else
{
lean_object* v___x_4406_; lean_object* v___x_4407_; 
v___x_4406_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21));
lean_inc(v_attrName_4317_);
v___x_4407_ = lean_name_append_after(v_attrName_4317_, v___x_4406_);
v___y_4374_ = v___x_4407_;
goto v___jp_4373_;
}
}
v___jp_4329_:
{
lean_object* v___x_4332_; uint8_t v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; uint8_t v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4332_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0));
v___x_4333_ = 1;
v___x_4334_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4317_, v___x_4333_);
v___x_4335_ = lean_string_append(v___x_4332_, v___x_4334_);
v___x_4336_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1));
v___x_4337_ = lean_string_append(v___x_4335_, v___x_4336_);
v___x_4338_ = lean_string_append(v___x_4337_, v___x_4334_);
v___x_4339_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2));
v___x_4340_ = lean_string_append(v___x_4338_, v___x_4339_);
v___x_4341_ = lean_string_append(v___x_4340_, v___x_4334_);
v___x_4342_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3));
v___x_4343_ = lean_string_append(v___x_4341_, v___x_4342_);
v___x_4344_ = lean_string_append(v___x_4343_, v___x_4334_);
v___x_4345_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4));
v___x_4346_ = lean_string_append(v___x_4344_, v___x_4345_);
v___x_4347_ = lean_string_append(v___x_4346_, v___x_4334_);
v___x_4348_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5));
v___x_4349_ = lean_string_append(v___x_4347_, v___x_4348_);
v___x_4350_ = lean_string_append(v___x_4349_, v___x_4334_);
v___x_4351_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6));
v___x_4352_ = lean_string_append(v___x_4350_, v___x_4351_);
v___x_4353_ = lean_string_append(v___x_4352_, v___x_4334_);
v___x_4354_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7));
v___x_4355_ = lean_string_append(v___x_4353_, v___x_4354_);
v___x_4356_ = lean_string_append(v___x_4355_, v___x_4334_);
v___x_4357_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8));
v___x_4358_ = lean_string_append(v___x_4356_, v___x_4357_);
v___x_4359_ = lean_string_append(v___x_4358_, v___x_4334_);
v___x_4360_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9));
v___x_4361_ = lean_string_append(v___x_4359_, v___x_4360_);
v___x_4362_ = lean_string_append(v___x_4361_, v___x_4334_);
v___x_4363_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10));
v___x_4364_ = lean_string_append(v___x_4362_, v___x_4363_);
v___x_4365_ = lean_string_append(v___x_4364_, v___x_4334_);
lean_dec_ref(v___x_4334_);
v___x_4366_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11));
v___x_4367_ = lean_string_append(v___x_4365_, v___x_4366_);
v___x_4368_ = lean_string_append(v___y_4331_, v___x_4367_);
lean_dec_ref(v___x_4367_);
v___x_4369_ = 1;
v___x_4370_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4370_, 0, v_ref_4321_);
lean_ctor_set(v___x_4370_, 1, v___y_4330_);
lean_ctor_set(v___x_4370_, 2, v___x_4368_);
lean_ctor_set_uint8(v___x_4370_, sizeof(void*)*3, v___x_4369_);
v___x_4371_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4371_, 0, v___x_4370_);
lean_ctor_set(v___x_4371_, 1, v___f_4328_);
lean_ctor_set(v___x_4371_, 2, v___f_4325_);
v___x_4372_ = l_Lean_registerBuiltinAttribute(v___x_4371_);
return v___x_4372_;
}
v___jp_4373_:
{
if (v_minIndexable_4318_ == 0)
{
if (v_showInfo_4319_ == 0)
{
lean_object* v___x_4375_; uint8_t v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; 
v___x_4375_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
v___x_4376_ = 1;
lean_inc(v_attrName_4317_);
v___x_4377_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4317_, v___x_4376_);
v___x_4378_ = lean_string_append(v___x_4375_, v___x_4377_);
lean_dec_ref(v___x_4377_);
v___x_4379_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13));
v___x_4380_ = lean_string_append(v___x_4378_, v___x_4379_);
v___y_4330_ = v___y_4374_;
v___y_4331_ = v___x_4380_;
goto v___jp_4329_;
}
else
{
lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; 
v___x_4381_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_4317_);
v___x_4382_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4317_, v_showInfo_4319_);
v___x_4383_ = lean_string_append(v___x_4381_, v___x_4382_);
v___x_4384_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14));
v___x_4385_ = lean_string_append(v___x_4383_, v___x_4384_);
v___x_4386_ = lean_string_append(v___x_4385_, v___x_4382_);
lean_dec_ref(v___x_4382_);
v___x_4387_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15));
v___x_4388_ = lean_string_append(v___x_4386_, v___x_4387_);
v___y_4330_ = v___y_4374_;
v___y_4331_ = v___x_4388_;
goto v___jp_4329_;
}
}
else
{
if (v_showInfo_4319_ == 0)
{
lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; 
v___x_4389_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_4317_);
v___x_4390_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4317_, v_minIndexable_4318_);
v___x_4391_ = lean_string_append(v___x_4389_, v___x_4390_);
lean_dec_ref(v___x_4390_);
v___x_4392_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16));
v___x_4393_ = lean_string_append(v___x_4391_, v___x_4392_);
v___y_4330_ = v___y_4374_;
v___y_4331_ = v___x_4393_;
goto v___jp_4329_;
}
else
{
lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4394_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_4317_);
v___x_4395_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_4317_, v_showInfo_4319_);
v___x_4396_ = lean_string_append(v___x_4394_, v___x_4395_);
v___x_4397_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17));
v___x_4398_ = lean_string_append(v___x_4396_, v___x_4397_);
v___x_4399_ = lean_string_append(v___x_4398_, v___x_4395_);
lean_dec_ref(v___x_4395_);
v___x_4400_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18));
v___x_4401_ = lean_string_append(v___x_4399_, v___x_4400_);
v___y_4330_ = v___y_4374_;
v___y_4331_ = v___x_4401_;
goto v___jp_4329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___boxed(lean_object* v_attrName_4408_, lean_object* v_minIndexable_4409_, lean_object* v_showInfo_4410_, lean_object* v_ext_4411_, lean_object* v_ref_4412_, lean_object* v_a_4413_){
_start:
{
uint8_t v_minIndexable_boxed_4414_; uint8_t v_showInfo_boxed_4415_; lean_object* v_res_4416_; 
v_minIndexable_boxed_4414_ = lean_unbox(v_minIndexable_4409_);
v_showInfo_boxed_4415_ = lean_unbox(v_showInfo_4410_);
v_res_4416_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_4408_, v_minIndexable_boxed_4414_, v_showInfo_boxed_4415_, v_ext_4411_, v_ref_4412_);
return v_res_4416_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(lean_object* v_00_u03b1_4417_, lean_object* v_msg_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_){
_start:
{
lean_object* v___x_4424_; 
v___x_4424_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v_msg_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
return v___x_4424_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___boxed(lean_object* v_00_u03b1_4425_, lean_object* v_msg_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_){
_start:
{
lean_object* v_res_4432_; 
v_res_4432_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(v_00_u03b1_4425_, v_msg_4426_, v___y_4427_, v___y_4428_, v___y_4429_, v___y_4430_);
lean_dec(v___y_4430_);
lean_dec_ref(v___y_4429_);
lean_dec(v___y_4428_);
lean_dec_ref(v___y_4427_);
return v_res_4432_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(lean_object* v_ext_4433_, uint8_t v_attrKind_4434_, uint8_t v_showInfo_4435_, uint8_t v_minIndexable_4436_, lean_object* v_as_4437_, lean_object* v_as_x27_4438_, lean_object* v_b_4439_, lean_object* v_a_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_){
_start:
{
lean_object* v___x_4446_; 
v___x_4446_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_4433_, v_attrKind_4434_, v_showInfo_4435_, v_minIndexable_4436_, v_as_x27_4438_, v_b_4439_, v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_);
return v___x_4446_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___boxed(lean_object* v_ext_4447_, lean_object* v_attrKind_4448_, lean_object* v_showInfo_4449_, lean_object* v_minIndexable_4450_, lean_object* v_as_4451_, lean_object* v_as_x27_4452_, lean_object* v_b_4453_, lean_object* v_a_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_){
_start:
{
uint8_t v_attrKind_boxed_4460_; uint8_t v_showInfo_boxed_4461_; uint8_t v_minIndexable_boxed_4462_; lean_object* v_res_4463_; 
v_attrKind_boxed_4460_ = lean_unbox(v_attrKind_4448_);
v_showInfo_boxed_4461_ = lean_unbox(v_showInfo_4449_);
v_minIndexable_boxed_4462_ = lean_unbox(v_minIndexable_4450_);
v_res_4463_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(v_ext_4447_, v_attrKind_boxed_4460_, v_showInfo_boxed_4461_, v_minIndexable_boxed_4462_, v_as_4451_, v_as_x27_4452_, v_b_4453_, v_a_4454_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_);
lean_dec(v___y_4458_);
lean_dec_ref(v___y_4457_);
lean_dec(v___y_4456_);
lean_dec_ref(v___y_4455_);
lean_dec(v_as_x27_4452_);
lean_dec(v_as_4451_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(lean_object* v_00_u03b1_4464_, lean_object* v_x_4465_, uint8_t v_when_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_){
_start:
{
lean_object* v___x_4472_; 
v___x_4472_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v_x_4465_, v_when_4466_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
return v___x_4472_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___boxed(lean_object* v_00_u03b1_4473_, lean_object* v_x_4474_, lean_object* v_when_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_){
_start:
{
uint8_t v_when_boxed_4481_; lean_object* v_res_4482_; 
v_when_boxed_4481_ = lean_unbox(v_when_4475_);
v_res_4482_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(v_00_u03b1_4473_, v_x_4474_, v_when_boxed_4481_, v___y_4476_, v___y_4477_, v___y_4478_, v___y_4479_);
lean_dec(v___y_4479_);
lean_dec_ref(v___y_4478_);
lean_dec(v___y_4477_);
lean_dec_ref(v___y_4476_);
return v_res_4482_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(lean_object* v_00_u03b2_4483_, lean_object* v_m_4484_, lean_object* v_a_4485_){
_start:
{
lean_object* v___x_4486_; 
v___x_4486_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___redArg(v_m_4484_, v_a_4485_);
return v___x_4486_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___boxed(lean_object* v_00_u03b2_4487_, lean_object* v_m_4488_, lean_object* v_a_4489_){
_start:
{
lean_object* v_res_4490_; 
v_res_4490_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(v_00_u03b2_4487_, v_m_4488_, v_a_4489_);
lean_dec(v_a_4489_);
lean_dec_ref(v_m_4488_);
return v_res_4490_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3(lean_object* v_00_u03b2_4491_, lean_object* v_x_4492_, lean_object* v_x_4493_){
_start:
{
uint8_t v___x_4494_; 
v___x_4494_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___redArg(v_x_4492_, v_x_4493_);
return v___x_4494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___boxed(lean_object* v_00_u03b2_4495_, lean_object* v_x_4496_, lean_object* v_x_4497_){
_start:
{
uint8_t v_res_4498_; lean_object* v_r_4499_; 
v_res_4498_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3(v_00_u03b2_4495_, v_x_4496_, v_x_4497_);
lean_dec_ref(v_x_4497_);
lean_dec_ref(v_x_4496_);
v_r_4499_ = lean_box(v_res_4498_);
return v_r_4499_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_4500_, lean_object* v_a_4501_, lean_object* v_x_4502_){
_start:
{
lean_object* v___x_4503_; 
v___x_4503_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6___redArg(v_a_4501_, v_x_4502_);
return v___x_4503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b2_4504_, lean_object* v_a_4505_, lean_object* v_x_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4_spec__6(v_00_u03b2_4504_, v_a_4505_, v_x_4506_);
lean_dec(v_x_4506_);
lean_dec(v_a_4505_);
return v_res_4507_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_4508_, lean_object* v_x_4509_, size_t v_x_4510_, lean_object* v_x_4511_){
_start:
{
uint8_t v___x_4512_; 
v___x_4512_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5___redArg(v_x_4509_, v_x_4510_, v_x_4511_);
return v___x_4512_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b2_4513_, lean_object* v_x_4514_, lean_object* v_x_4515_, lean_object* v_x_4516_){
_start:
{
size_t v_x_13523__boxed_4517_; uint8_t v_res_4518_; lean_object* v_r_4519_; 
v_x_13523__boxed_4517_ = lean_unbox_usize(v_x_4515_);
lean_dec(v_x_4515_);
v_res_4518_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5(v_00_u03b2_4513_, v_x_4514_, v_x_13523__boxed_4517_, v_x_4516_);
lean_dec_ref(v_x_4516_);
lean_dec_ref(v_x_4514_);
v_r_4519_ = lean_box(v_res_4518_);
return v_r_4519_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_4520_, lean_object* v_keys_4521_, lean_object* v_vals_4522_, lean_object* v_heq_4523_, lean_object* v_i_4524_, lean_object* v_k_4525_){
_start:
{
uint8_t v___x_4526_; 
v___x_4526_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8___redArg(v_keys_4521_, v_i_4524_, v_k_4525_);
return v___x_4526_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b2_4527_, lean_object* v_keys_4528_, lean_object* v_vals_4529_, lean_object* v_heq_4530_, lean_object* v_i_4531_, lean_object* v_k_4532_){
_start:
{
uint8_t v_res_4533_; lean_object* v_r_4534_; 
v_res_4533_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3_spec__5_spec__8(v_00_u03b2_4527_, v_keys_4528_, v_vals_4529_, v_heq_4530_, v_i_4531_, v_k_4532_);
lean_dec_ref(v_k_4532_);
lean_dec_ref(v_vals_4529_);
lean_dec_ref(v_keys_4528_);
v_r_4534_ = lean_box(v_res_4533_);
return v_r_4534_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4535_ = lean_box(0);
v___x_4536_ = lean_unsigned_to_nat(16u);
v___x_4537_ = lean_mk_array(v___x_4536_, v___x_4535_);
return v___x_4537_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; 
v___x_4538_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_);
v___x_4539_ = lean_unsigned_to_nat(0u);
v___x_4540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4540_, 0, v___x_4539_);
lean_ctor_set(v___x_4540_, 1, v___x_4538_);
return v___x_4540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; 
v___x_4542_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_);
v___x_4543_ = lean_st_mk_ref(v___x_4542_);
v___x_4544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4544_, 0, v___x_4543_);
return v___x_4544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2____boxed(lean_object* v_a_4545_){
_start:
{
lean_object* v_res_4546_; 
v_res_4546_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
return v_res_4546_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(lean_object* v_cls_4547_, lean_object* v_msg_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_){
_start:
{
lean_object* v_ref_4552_; lean_object* v___x_4553_; lean_object* v_a_4554_; lean_object* v___x_4556_; uint8_t v_isShared_4557_; uint8_t v_isSharedCheck_4599_; 
v_ref_4552_ = lean_ctor_get(v___y_4549_, 2);
v___x_4553_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msg_4548_, v___y_4549_, v___y_4550_);
v_a_4554_ = lean_ctor_get(v___x_4553_, 0);
v_isSharedCheck_4599_ = !lean_is_exclusive(v___x_4553_);
if (v_isSharedCheck_4599_ == 0)
{
v___x_4556_ = v___x_4553_;
v_isShared_4557_ = v_isSharedCheck_4599_;
goto v_resetjp_4555_;
}
else
{
lean_inc(v_a_4554_);
lean_dec(v___x_4553_);
v___x_4556_ = lean_box(0);
v_isShared_4557_ = v_isSharedCheck_4599_;
goto v_resetjp_4555_;
}
v_resetjp_4555_:
{
lean_object* v___x_4558_; lean_object* v_traceState_4559_; lean_object* v_env_4560_; lean_object* v_nextMacroScope_4561_; lean_object* v_ngen_4562_; lean_object* v_auxDeclNGen_4563_; lean_object* v_cache_4564_; lean_object* v_recordedDeps_4565_; lean_object* v_messages_4566_; lean_object* v_infoState_4567_; lean_object* v_snapshotTasks_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4598_; 
v___x_4558_ = lean_st_ref_take(v___y_4550_);
v_traceState_4559_ = lean_ctor_get(v___x_4558_, 4);
v_env_4560_ = lean_ctor_get(v___x_4558_, 0);
v_nextMacroScope_4561_ = lean_ctor_get(v___x_4558_, 1);
v_ngen_4562_ = lean_ctor_get(v___x_4558_, 2);
v_auxDeclNGen_4563_ = lean_ctor_get(v___x_4558_, 3);
v_cache_4564_ = lean_ctor_get(v___x_4558_, 5);
v_recordedDeps_4565_ = lean_ctor_get(v___x_4558_, 6);
v_messages_4566_ = lean_ctor_get(v___x_4558_, 7);
v_infoState_4567_ = lean_ctor_get(v___x_4558_, 8);
v_snapshotTasks_4568_ = lean_ctor_get(v___x_4558_, 9);
v_isSharedCheck_4598_ = !lean_is_exclusive(v___x_4558_);
if (v_isSharedCheck_4598_ == 0)
{
v___x_4570_ = v___x_4558_;
v_isShared_4571_ = v_isSharedCheck_4598_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_snapshotTasks_4568_);
lean_inc(v_infoState_4567_);
lean_inc(v_messages_4566_);
lean_inc(v_recordedDeps_4565_);
lean_inc(v_cache_4564_);
lean_inc(v_traceState_4559_);
lean_inc(v_auxDeclNGen_4563_);
lean_inc(v_ngen_4562_);
lean_inc(v_nextMacroScope_4561_);
lean_inc(v_env_4560_);
lean_dec(v___x_4558_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4598_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
uint64_t v_tid_4572_; lean_object* v_traces_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4597_; 
v_tid_4572_ = lean_ctor_get_uint64(v_traceState_4559_, sizeof(void*)*1);
v_traces_4573_ = lean_ctor_get(v_traceState_4559_, 0);
v_isSharedCheck_4597_ = !lean_is_exclusive(v_traceState_4559_);
if (v_isSharedCheck_4597_ == 0)
{
v___x_4575_ = v_traceState_4559_;
v_isShared_4576_ = v_isSharedCheck_4597_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_traces_4573_);
lean_dec(v_traceState_4559_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4597_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4577_; lean_object* v___x_4578_; double v___x_4579_; uint8_t v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4588_; 
v___x_4577_ = lean_box(0);
v___x_4578_ = lean_box(0);
v___x_4579_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__0);
v___x_4580_ = 0;
v___x_4581_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__1));
v___x_4582_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4582_, 0, v_cls_4547_);
lean_ctor_set(v___x_4582_, 1, v___x_4578_);
lean_ctor_set(v___x_4582_, 2, v___x_4581_);
lean_ctor_set_float(v___x_4582_, sizeof(void*)*3, v___x_4579_);
lean_ctor_set_float(v___x_4582_, sizeof(void*)*3 + 8, v___x_4579_);
lean_ctor_set_uint8(v___x_4582_, sizeof(void*)*3 + 16, v___x_4580_);
v___x_4583_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkNormSymTheorem_x3f_spec__0___closed__2));
v___x_4584_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4584_, 0, v___x_4582_);
lean_ctor_set(v___x_4584_, 1, v_a_4554_);
lean_ctor_set(v___x_4584_, 2, v___x_4583_);
lean_inc(v_ref_4552_);
v___x_4585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4585_, 0, v_ref_4552_);
lean_ctor_set(v___x_4585_, 1, v___x_4584_);
v___x_4586_ = l_Lean_PersistentArray_push___redArg(v_traces_4573_, v___x_4585_);
if (v_isShared_4576_ == 0)
{
lean_ctor_set(v___x_4575_, 0, v___x_4586_);
v___x_4588_ = v___x_4575_;
goto v_reusejp_4587_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v___x_4586_);
lean_ctor_set_uint64(v_reuseFailAlloc_4596_, sizeof(void*)*1, v_tid_4572_);
v___x_4588_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4587_;
}
v_reusejp_4587_:
{
lean_object* v___x_4590_; 
if (v_isShared_4571_ == 0)
{
lean_ctor_set(v___x_4570_, 4, v___x_4588_);
v___x_4590_ = v___x_4570_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v_env_4560_);
lean_ctor_set(v_reuseFailAlloc_4595_, 1, v_nextMacroScope_4561_);
lean_ctor_set(v_reuseFailAlloc_4595_, 2, v_ngen_4562_);
lean_ctor_set(v_reuseFailAlloc_4595_, 3, v_auxDeclNGen_4563_);
lean_ctor_set(v_reuseFailAlloc_4595_, 4, v___x_4588_);
lean_ctor_set(v_reuseFailAlloc_4595_, 5, v_cache_4564_);
lean_ctor_set(v_reuseFailAlloc_4595_, 6, v_recordedDeps_4565_);
lean_ctor_set(v_reuseFailAlloc_4595_, 7, v_messages_4566_);
lean_ctor_set(v_reuseFailAlloc_4595_, 8, v_infoState_4567_);
lean_ctor_set(v_reuseFailAlloc_4595_, 9, v_snapshotTasks_4568_);
v___x_4590_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
lean_object* v___x_4591_; lean_object* v___x_4593_; 
v___x_4591_ = lean_st_ref_put(v___y_4550_, v___x_4590_);
if (v_isShared_4557_ == 0)
{
lean_ctor_set(v___x_4556_, 0, v___x_4577_);
v___x_4593_ = v___x_4556_;
goto v_reusejp_4592_;
}
else
{
lean_object* v_reuseFailAlloc_4594_; 
v_reuseFailAlloc_4594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4594_, 0, v___x_4577_);
v___x_4593_ = v_reuseFailAlloc_4594_;
goto v_reusejp_4592_;
}
v_reusejp_4592_:
{
return v___x_4593_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_cls_4600_, lean_object* v_msg_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_){
_start:
{
lean_object* v_res_4605_; 
v_res_4605_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(v_cls_4600_, v_msg_4601_, v___y_4602_, v___y_4603_);
lean_dec(v___y_4603_);
lean_dec_ref(v___y_4602_);
return v_res_4605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(lean_object* v_mod_4606_, uint8_t v_isMeta_4607_, lean_object* v_hint_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
lean_object* v___y_4613_; lean_object* v___y_4614_; lean_object* v___y_4615_; lean_object* v___y_4616_; lean_object* v___y_4617_; lean_object* v___y_4618_; lean_object* v___y_4619_; lean_object* v___y_4620_; lean_object* v___y_4621_; lean_object* v___y_4622_; lean_object* v___y_4623_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v_env_4630_; uint8_t v_isExporting_4631_; lean_object* v_entry_4632_; lean_object* v___y_4634_; lean_object* v___x_4657_; lean_object* v_env_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; uint8_t v___x_4663_; 
v___x_4628_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__0);
v___x_4629_ = lean_st_ref_get(v___y_4610_);
v_env_4630_ = lean_ctor_get(v___x_4629_, 0);
lean_inc_ref(v_env_4630_);
lean_dec(v___x_4629_);
v_isExporting_4631_ = lean_ctor_get_uint8(v_env_4630_, sizeof(void*)*13);
lean_dec_ref(v_env_4630_);
lean_inc(v_mod_4606_);
v_entry_4632_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_4632_, 0, v_mod_4606_);
lean_ctor_set_uint8(v_entry_4632_, sizeof(void*)*1, v_isExporting_4631_);
lean_ctor_set_uint8(v_entry_4632_, sizeof(void*)*1 + 1, v_isMeta_4607_);
v___x_4657_ = lean_st_ref_get(v___y_4610_);
v_env_4658_ = lean_ctor_get(v___x_4657_, 0);
lean_inc_ref(v_env_4658_);
lean_dec(v___x_4657_);
v___x_4659_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_4660_ = lean_box(1);
v___x_4661_ = lean_box(0);
v___x_4662_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4628_, v___x_4659_, v_env_4658_, v___x_4660_, v___x_4661_);
v___x_4663_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2_spec__3___redArg(v___x_4662_, v_entry_4632_);
lean_dec(v___x_4662_);
if (v___x_4663_ == 0)
{
lean_object* v_toCold_4664_; lean_object* v_options_4665_; uint8_t v_hasTrace_4666_; 
v_toCold_4664_ = lean_ctor_get(v___y_4609_, 0);
v_options_4665_ = lean_ctor_get(v_toCold_4664_, 2);
v_hasTrace_4666_ = lean_ctor_get_uint8(v_options_4665_, sizeof(void*)*1);
if (v_hasTrace_4666_ == 0)
{
lean_dec(v_hint_4608_);
lean_dec(v_mod_4606_);
v___y_4634_ = v___y_4610_;
goto v___jp_4633_;
}
else
{
lean_object* v_inheritedTraceOptions_4667_; lean_object* v_cls_4668_; lean_object* v___y_4670_; lean_object* v___y_4671_; lean_object* v___y_4675_; lean_object* v___y_4676_; lean_object* v___x_4688_; uint8_t v___x_4689_; 
v_inheritedTraceOptions_4667_ = lean_ctor_get(v_toCold_4664_, 11);
v_cls_4668_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__2));
v___x_4688_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__8);
v___x_4689_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4667_, v_options_4665_, v___x_4688_);
if (v___x_4689_ == 0)
{
lean_dec(v_hint_4608_);
lean_dec(v_mod_4606_);
v___y_4634_ = v___y_4610_;
goto v___jp_4633_;
}
else
{
lean_object* v___x_4690_; lean_object* v___y_4692_; 
v___x_4690_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__10);
if (v_isExporting_4631_ == 0)
{
lean_object* v___x_4699_; 
v___x_4699_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__15));
v___y_4692_ = v___x_4699_;
goto v___jp_4691_;
}
else
{
lean_object* v___x_4700_; 
v___x_4700_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__16));
v___y_4692_ = v___x_4700_;
goto v___jp_4691_;
}
v___jp_4691_:
{
lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; 
lean_inc_ref(v___y_4692_);
v___x_4693_ = l_Lean_stringToMessageData(v___y_4692_);
v___x_4694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4694_, 0, v___x_4690_);
lean_ctor_set(v___x_4694_, 1, v___x_4693_);
v___x_4695_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__12);
v___x_4696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4696_, 0, v___x_4694_);
lean_ctor_set(v___x_4696_, 1, v___x_4695_);
if (v_isMeta_4607_ == 0)
{
lean_object* v___x_4697_; 
v___x_4697_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__13));
v___y_4675_ = v___x_4696_;
v___y_4676_ = v___x_4697_;
goto v___jp_4674_;
}
else
{
lean_object* v___x_4698_; 
v___x_4698_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__14));
v___y_4675_ = v___x_4696_;
v___y_4676_ = v___x_4698_;
goto v___jp_4674_;
}
}
}
v___jp_4669_:
{
lean_object* v___x_4672_; lean_object* v___x_4673_; 
v___x_4672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4672_, 0, v___y_4670_);
lean_ctor_set(v___x_4672_, 1, v___y_4671_);
v___x_4673_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(v_cls_4668_, v___x_4672_, v___y_4609_, v___y_4610_);
if (lean_obj_tag(v___x_4673_) == 0)
{
lean_dec_ref_known(v___x_4673_, 1);
v___y_4634_ = v___y_4610_;
goto v___jp_4633_;
}
else
{
lean_dec_ref_known(v_entry_4632_, 1);
return v___x_4673_;
}
}
v___jp_4674_:
{
lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; uint8_t v___x_4683_; 
lean_inc_ref(v___y_4676_);
v___x_4677_ = l_Lean_stringToMessageData(v___y_4676_);
v___x_4678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4678_, 0, v___y_4675_);
lean_ctor_set(v___x_4678_, 1, v___x_4677_);
v___x_4679_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__4);
v___x_4680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4680_, 0, v___x_4678_);
lean_ctor_set(v___x_4680_, 1, v___x_4679_);
v___x_4681_ = l_Lean_MessageData_ofName(v_mod_4606_);
v___x_4682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4682_, 0, v___x_4680_);
lean_ctor_set(v___x_4682_, 1, v___x_4681_);
v___x_4683_ = l_Lean_Name_isAnonymous(v_hint_4608_);
if (v___x_4683_ == 0)
{
lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; 
v___x_4684_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__6);
v___x_4685_ = l_Lean_MessageData_ofName(v_hint_4608_);
v___x_4686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4686_, 0, v___x_4684_);
lean_ctor_set(v___x_4686_, 1, v___x_4685_);
v___y_4670_ = v___x_4682_;
v___y_4671_ = v___x_4686_;
goto v___jp_4669_;
}
else
{
lean_object* v___x_4687_; 
lean_dec(v_hint_4608_);
v___x_4687_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___closed__7);
v___y_4670_ = v___x_4682_;
v___y_4671_ = v___x_4687_;
goto v___jp_4669_;
}
}
}
}
else
{
lean_object* v___x_4701_; lean_object* v___x_4702_; 
lean_dec_ref_known(v_entry_4632_, 1);
lean_dec(v_hint_4608_);
lean_dec(v_mod_4606_);
v___x_4701_ = lean_box(0);
v___x_4702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4701_);
return v___x_4702_;
}
v___jp_4612_:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; 
v___x_4624_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_addNormTheorem_spec__1___redArg___closed__1);
v___x_4625_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4625_, 0, v___y_4623_);
lean_ctor_set(v___x_4625_, 1, v___y_4615_);
lean_ctor_set(v___x_4625_, 2, v___y_4614_);
lean_ctor_set(v___x_4625_, 3, v___y_4618_);
lean_ctor_set(v___x_4625_, 4, v___y_4613_);
lean_ctor_set(v___x_4625_, 5, v___x_4624_);
lean_ctor_set(v___x_4625_, 6, v___y_4619_);
lean_ctor_set(v___x_4625_, 7, v___y_4617_);
lean_ctor_set(v___x_4625_, 8, v___y_4622_);
lean_ctor_set(v___x_4625_, 9, v___y_4621_);
v___x_4626_ = lean_st_ref_put(v___y_4620_, v___x_4625_);
v___x_4627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4627_, 0, v___y_4616_);
return v___x_4627_;
}
v___jp_4633_:
{
lean_object* v___x_4635_; lean_object* v_env_4636_; lean_object* v_nextMacroScope_4637_; lean_object* v_ngen_4638_; lean_object* v_auxDeclNGen_4639_; lean_object* v_traceState_4640_; lean_object* v_recordedDeps_4641_; lean_object* v_messages_4642_; lean_object* v_infoState_4643_; lean_object* v_snapshotTasks_4644_; lean_object* v___x_4645_; lean_object* v_toEnvExtension_4646_; lean_object* v_addEntryFn_4647_; lean_object* v_asyncMode_4648_; uint8_t v_logWrites_4649_; lean_object* v___x_4650_; lean_object* v___f_4651_; lean_object* v___x_4652_; uint8_t v___x_4653_; 
v___x_4635_ = lean_st_ref_take(v___y_4634_);
v_env_4636_ = lean_ctor_get(v___x_4635_, 0);
lean_inc_ref(v_env_4636_);
v_nextMacroScope_4637_ = lean_ctor_get(v___x_4635_, 1);
lean_inc(v_nextMacroScope_4637_);
v_ngen_4638_ = lean_ctor_get(v___x_4635_, 2);
lean_inc_ref(v_ngen_4638_);
v_auxDeclNGen_4639_ = lean_ctor_get(v___x_4635_, 3);
lean_inc_ref(v_auxDeclNGen_4639_);
v_traceState_4640_ = lean_ctor_get(v___x_4635_, 4);
lean_inc_ref(v_traceState_4640_);
v_recordedDeps_4641_ = lean_ctor_get(v___x_4635_, 6);
lean_inc_ref(v_recordedDeps_4641_);
v_messages_4642_ = lean_ctor_get(v___x_4635_, 7);
lean_inc_ref(v_messages_4642_);
v_infoState_4643_ = lean_ctor_get(v___x_4635_, 8);
lean_inc_ref(v_infoState_4643_);
v_snapshotTasks_4644_ = lean_ctor_get(v___x_4635_, 9);
lean_inc_ref(v_snapshotTasks_4644_);
lean_dec(v___x_4635_);
v___x_4645_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_4646_ = lean_ctor_get(v___x_4645_, 0);
v_addEntryFn_4647_ = lean_ctor_get(v___x_4645_, 3);
v_asyncMode_4648_ = lean_ctor_get(v_toEnvExtension_4646_, 2);
v_logWrites_4649_ = lean_ctor_get_uint8(v_toEnvExtension_4646_, sizeof(void*)*6);
v___x_4650_ = lean_box(0);
lean_inc(v_addEntryFn_4647_);
v___f_4651_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__2___lam__0), 3, 2);
lean_closure_set(v___f_4651_, 0, v_addEntryFn_4647_);
lean_closure_set(v___f_4651_, 1, v_entry_4632_);
v___x_4652_ = lean_box(0);
v___x_4653_ = 1;
if (v_logWrites_4649_ == 0)
{
lean_object* v___x_4654_; 
lean_inc_ref(v_toEnvExtension_4646_);
v___x_4654_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4646_, v_env_4636_, v___f_4651_, v_asyncMode_4648_, v___x_4652_, v___x_4653_);
v___y_4613_ = v_traceState_4640_;
v___y_4614_ = v_ngen_4638_;
v___y_4615_ = v_nextMacroScope_4637_;
v___y_4616_ = v___x_4650_;
v___y_4617_ = v_messages_4642_;
v___y_4618_ = v_auxDeclNGen_4639_;
v___y_4619_ = v_recordedDeps_4641_;
v___y_4620_ = v___y_4634_;
v___y_4621_ = v_snapshotTasks_4644_;
v___y_4622_ = v_infoState_4643_;
v___y_4623_ = v___x_4654_;
goto v___jp_4612_;
}
else
{
lean_object* v___x_4655_; lean_object* v___x_4656_; 
lean_inc_ref_n(v_toEnvExtension_4646_, 2);
v___x_4655_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_4646_, v_env_4636_);
lean_dec_ref(v_env_4636_);
v___x_4656_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_4646_, v___x_4655_, v___f_4651_, v_asyncMode_4648_, v___x_4652_, v___x_4653_);
v___y_4613_ = v_traceState_4640_;
v___y_4614_ = v_ngen_4638_;
v___y_4615_ = v_nextMacroScope_4637_;
v___y_4616_ = v___x_4650_;
v___y_4617_ = v_messages_4642_;
v___y_4618_ = v_auxDeclNGen_4639_;
v___y_4619_ = v_recordedDeps_4641_;
v___y_4620_ = v___y_4634_;
v___y_4621_ = v_snapshotTasks_4644_;
v___y_4622_ = v_infoState_4643_;
v___y_4623_ = v___x_4656_;
goto v___jp_4612_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0___boxed(lean_object* v_mod_4703_, lean_object* v_isMeta_4704_, lean_object* v_hint_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_){
_start:
{
uint8_t v_isMeta_boxed_4709_; lean_object* v_res_4710_; 
v_isMeta_boxed_4709_ = lean_unbox(v_isMeta_4704_);
v_res_4710_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_mod_4703_, v_isMeta_boxed_4709_, v_hint_4705_, v___y_4706_, v___y_4707_);
lean_dec(v___y_4707_);
lean_dec_ref(v___y_4706_);
return v_res_4710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(lean_object* v___x_4711_, lean_object* v_declName_4712_, lean_object* v_as_4713_, size_t v_sz_4714_, size_t v_i_4715_, lean_object* v_b_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_){
_start:
{
uint8_t v___x_4720_; 
v___x_4720_ = lean_usize_dec_lt(v_i_4715_, v_sz_4714_);
if (v___x_4720_ == 0)
{
lean_object* v___x_4721_; 
lean_dec(v_declName_4712_);
v___x_4721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4721_, 0, v_b_4716_);
return v___x_4721_;
}
else
{
lean_object* v___x_4722_; lean_object* v_modules_4723_; lean_object* v___x_4724_; lean_object* v_a_4725_; lean_object* v___x_4726_; lean_object* v_toImport_4727_; lean_object* v_module_4728_; lean_object* v___x_4729_; uint8_t v___x_4730_; lean_object* v___x_4731_; 
v___x_4722_ = l_Lean_Environment_header(v___x_4711_);
v_modules_4723_ = lean_ctor_get(v___x_4722_, 3);
lean_inc_ref(v_modules_4723_);
lean_dec_ref(v___x_4722_);
v___x_4724_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_4725_ = lean_array_uget_borrowed(v_as_4713_, v_i_4715_);
v___x_4726_ = lean_array_get(v___x_4724_, v_modules_4723_, v_a_4725_);
lean_dec_ref(v_modules_4723_);
v_toImport_4727_ = lean_ctor_get(v___x_4726_, 0);
lean_inc_ref(v_toImport_4727_);
lean_dec(v___x_4726_);
v_module_4728_ = lean_ctor_get(v_toImport_4727_, 0);
lean_inc(v_module_4728_);
lean_dec_ref(v_toImport_4727_);
v___x_4729_ = lean_box(0);
v___x_4730_ = 0;
lean_inc(v_declName_4712_);
v___x_4731_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_module_4728_, v___x_4730_, v_declName_4712_, v___y_4717_, v___y_4718_);
if (lean_obj_tag(v___x_4731_) == 0)
{
size_t v___x_4732_; size_t v___x_4733_; 
lean_dec_ref_known(v___x_4731_, 1);
v___x_4732_ = ((size_t)1ULL);
v___x_4733_ = lean_usize_add(v_i_4715_, v___x_4732_);
v_i_4715_ = v___x_4733_;
v_b_4716_ = v___x_4729_;
goto _start;
}
else
{
lean_dec(v_declName_4712_);
return v___x_4731_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1___boxed(lean_object* v___x_4735_, lean_object* v_declName_4736_, lean_object* v_as_4737_, lean_object* v_sz_4738_, lean_object* v_i_4739_, lean_object* v_b_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_){
_start:
{
size_t v_sz_boxed_4744_; size_t v_i_boxed_4745_; lean_object* v_res_4746_; 
v_sz_boxed_4744_ = lean_unbox_usize(v_sz_4738_);
lean_dec(v_sz_4738_);
v_i_boxed_4745_ = lean_unbox_usize(v_i_4739_);
lean_dec(v_i_4739_);
v_res_4746_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(v___x_4735_, v_declName_4736_, v_as_4737_, v_sz_boxed_4744_, v_i_boxed_4745_, v_b_4740_, v___y_4741_, v___y_4742_);
lean_dec(v___y_4742_);
lean_dec_ref(v___y_4741_);
lean_dec_ref(v_as_4737_);
lean_dec_ref(v___x_4735_);
return v_res_4746_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(lean_object* v_declName_4747_, uint8_t v_isMeta_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_){
_start:
{
lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v_env_4757_; lean_object* v___y_4759_; lean_object* v___x_4772_; 
v___x_4752_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0);
v___x_4753_ = lean_st_ref_get(v___y_4750_);
v_env_4757_ = lean_ctor_get(v___x_4753_, 0);
lean_inc_ref(v_env_4757_);
lean_dec(v___x_4753_);
v___x_4772_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4757_, v_declName_4747_);
if (lean_obj_tag(v___x_4772_) == 0)
{
lean_dec_ref(v_env_4757_);
lean_dec(v_declName_4747_);
goto v___jp_4754_;
}
else
{
lean_object* v_val_4773_; lean_object* v___x_4774_; lean_object* v_modules_4775_; lean_object* v___x_4776_; uint8_t v___x_4777_; 
v_val_4773_ = lean_ctor_get(v___x_4772_, 0);
lean_inc(v_val_4773_);
lean_dec_ref_known(v___x_4772_, 1);
v___x_4774_ = l_Lean_Environment_header(v_env_4757_);
v_modules_4775_ = lean_ctor_get(v___x_4774_, 3);
lean_inc_ref(v_modules_4775_);
lean_dec_ref(v___x_4774_);
v___x_4776_ = lean_array_get_size(v_modules_4775_);
v___x_4777_ = lean_nat_dec_lt(v_val_4773_, v___x_4776_);
if (v___x_4777_ == 0)
{
lean_dec_ref(v_modules_4775_);
lean_dec(v_val_4773_);
lean_dec_ref(v_env_4757_);
lean_dec(v_declName_4747_);
goto v___jp_4754_;
}
else
{
lean_object* v___x_4778_; lean_object* v___x_4779_; uint8_t v___y_4781_; 
v___x_4778_ = lean_array_fget(v_modules_4775_, v_val_4773_);
lean_dec(v_val_4773_);
lean_dec_ref(v_modules_4775_);
v___x_4779_ = lean_st_ref_get(v___y_4750_);
if (v_isMeta_4748_ == 0)
{
lean_dec(v___x_4779_);
v___y_4781_ = v_isMeta_4748_;
goto v___jp_4780_;
}
else
{
lean_object* v_env_4792_; uint8_t v___x_4793_; 
v_env_4792_ = lean_ctor_get(v___x_4779_, 0);
lean_inc_ref(v_env_4792_);
lean_dec(v___x_4779_);
lean_inc(v_declName_4747_);
v___x_4793_ = l_Lean_isMarkedMeta(v_env_4792_, v_declName_4747_);
if (v___x_4793_ == 0)
{
v___y_4781_ = v_isMeta_4748_;
goto v___jp_4780_;
}
else
{
uint8_t v___x_4794_; 
v___x_4794_ = 0;
v___y_4781_ = v___x_4794_;
goto v___jp_4780_;
}
}
v___jp_4780_:
{
lean_object* v_toImport_4782_; lean_object* v_module_4783_; lean_object* v___x_4784_; 
v_toImport_4782_ = lean_ctor_get(v___x_4778_, 0);
lean_inc_ref(v_toImport_4782_);
lean_dec(v___x_4778_);
v_module_4783_ = lean_ctor_get(v_toImport_4782_, 0);
lean_inc(v_module_4783_);
lean_dec_ref(v_toImport_4782_);
lean_inc(v_declName_4747_);
v___x_4784_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_module_4783_, v___y_4781_, v_declName_4747_, v___y_4749_, v___y_4750_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; 
lean_dec_ref_known(v___x_4784_, 1);
v___x_4785_ = l_Lean_indirectModUseExt;
v___x_4786_ = lean_box(1);
v___x_4787_ = lean_box(0);
lean_inc_ref(v_env_4757_);
v___x_4788_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4752_, v___x_4785_, v_env_4757_, v___x_4786_, v___x_4787_);
v___x_4789_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___redArg(v___x_4788_, v_declName_4747_);
lean_dec(v___x_4788_);
if (lean_obj_tag(v___x_4789_) == 0)
{
lean_object* v___x_4790_; 
v___x_4790_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1));
v___y_4759_ = v___x_4790_;
goto v___jp_4758_;
}
else
{
lean_object* v_val_4791_; 
v_val_4791_ = lean_ctor_get(v___x_4789_, 0);
lean_inc(v_val_4791_);
lean_dec_ref_known(v___x_4789_, 1);
v___y_4759_ = v_val_4791_;
goto v___jp_4758_;
}
}
else
{
lean_dec_ref(v_env_4757_);
lean_dec(v_declName_4747_);
return v___x_4784_;
}
}
}
}
v___jp_4754_:
{
lean_object* v___x_4755_; lean_object* v___x_4756_; 
v___x_4755_ = lean_box(0);
v___x_4756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4756_, 0, v___x_4755_);
return v___x_4756_;
}
v___jp_4758_:
{
lean_object* v___x_4760_; size_t v_sz_4761_; size_t v___x_4762_; lean_object* v___x_4763_; 
v___x_4760_ = lean_box(0);
v_sz_4761_ = lean_array_size(v___y_4759_);
v___x_4762_ = ((size_t)0ULL);
v___x_4763_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(v_env_4757_, v_declName_4747_, v___y_4759_, v_sz_4761_, v___x_4762_, v___x_4760_, v___y_4749_, v___y_4750_);
lean_dec_ref(v___y_4759_);
lean_dec_ref(v_env_4757_);
if (lean_obj_tag(v___x_4763_) == 0)
{
lean_object* v___x_4765_; uint8_t v_isShared_4766_; uint8_t v_isSharedCheck_4770_; 
v_isSharedCheck_4770_ = !lean_is_exclusive(v___x_4763_);
if (v_isSharedCheck_4770_ == 0)
{
lean_object* v_unused_4771_; 
v_unused_4771_ = lean_ctor_get(v___x_4763_, 0);
lean_dec(v_unused_4771_);
v___x_4765_ = v___x_4763_;
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
else
{
lean_dec(v___x_4763_);
v___x_4765_ = lean_box(0);
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
v_resetjp_4764_:
{
lean_object* v___x_4768_; 
if (v_isShared_4766_ == 0)
{
lean_ctor_set(v___x_4765_, 0, v___x_4760_);
v___x_4768_ = v___x_4765_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4769_; 
v_reuseFailAlloc_4769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4769_, 0, v___x_4760_);
v___x_4768_ = v_reuseFailAlloc_4769_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
return v___x_4768_;
}
}
}
else
{
return v___x_4763_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0___boxed(lean_object* v_declName_4795_, lean_object* v_isMeta_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_){
_start:
{
uint8_t v_isMeta_boxed_4800_; lean_object* v_res_4801_; 
v_isMeta_boxed_4800_ = lean_unbox(v_isMeta_4796_);
v_res_4801_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(v_declName_4795_, v_isMeta_boxed_4800_, v___y_4797_, v___y_4798_);
lean_dec(v___y_4798_);
lean_dec_ref(v___y_4797_);
return v_res_4801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object* v_attrName_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_){
_start:
{
lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; 
v___x_4806_ = l_Lean_Meta_Grind_extensionMapRef;
v___x_4807_ = lean_st_ref_get(v___x_4806_);
v___x_4808_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___redArg(v___x_4807_, v_attrName_4802_);
lean_dec(v___x_4807_);
if (lean_obj_tag(v___x_4808_) == 1)
{
lean_object* v_val_4809_; lean_object* v_ext_4810_; lean_object* v_name_4811_; uint8_t v___x_4812_; lean_object* v___x_4813_; 
v_val_4809_ = lean_ctor_get(v___x_4808_, 0);
v_ext_4810_ = lean_ctor_get(v_val_4809_, 1);
v_name_4811_ = lean_ctor_get(v_ext_4810_, 1);
v___x_4812_ = 1;
lean_inc(v_name_4811_);
v___x_4813_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(v_name_4811_, v___x_4812_, v_a_4803_, v_a_4804_);
if (lean_obj_tag(v___x_4813_) == 0)
{
lean_object* v___x_4815_; uint8_t v_isShared_4816_; uint8_t v_isSharedCheck_4820_; 
v_isSharedCheck_4820_ = !lean_is_exclusive(v___x_4813_);
if (v_isSharedCheck_4820_ == 0)
{
lean_object* v_unused_4821_; 
v_unused_4821_ = lean_ctor_get(v___x_4813_, 0);
lean_dec(v_unused_4821_);
v___x_4815_ = v___x_4813_;
v_isShared_4816_ = v_isSharedCheck_4820_;
goto v_resetjp_4814_;
}
else
{
lean_dec(v___x_4813_);
v___x_4815_ = lean_box(0);
v_isShared_4816_ = v_isSharedCheck_4820_;
goto v_resetjp_4814_;
}
v_resetjp_4814_:
{
lean_object* v___x_4818_; 
if (v_isShared_4816_ == 0)
{
lean_ctor_set(v___x_4815_, 0, v___x_4808_);
v___x_4818_ = v___x_4815_;
goto v_reusejp_4817_;
}
else
{
lean_object* v_reuseFailAlloc_4819_; 
v_reuseFailAlloc_4819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4819_, 0, v___x_4808_);
v___x_4818_ = v_reuseFailAlloc_4819_;
goto v_reusejp_4817_;
}
v_reusejp_4817_:
{
return v___x_4818_;
}
}
}
else
{
lean_object* v_a_4822_; lean_object* v___x_4824_; uint8_t v_isShared_4825_; uint8_t v_isSharedCheck_4829_; 
lean_dec_ref_known(v___x_4808_, 1);
v_a_4822_ = lean_ctor_get(v___x_4813_, 0);
v_isSharedCheck_4829_ = !lean_is_exclusive(v___x_4813_);
if (v_isSharedCheck_4829_ == 0)
{
v___x_4824_ = v___x_4813_;
v_isShared_4825_ = v_isSharedCheck_4829_;
goto v_resetjp_4823_;
}
else
{
lean_inc(v_a_4822_);
lean_dec(v___x_4813_);
v___x_4824_ = lean_box(0);
v_isShared_4825_ = v_isSharedCheck_4829_;
goto v_resetjp_4823_;
}
v_resetjp_4823_:
{
lean_object* v___x_4827_; 
if (v_isShared_4825_ == 0)
{
v___x_4827_ = v___x_4824_;
goto v_reusejp_4826_;
}
else
{
lean_object* v_reuseFailAlloc_4828_; 
v_reuseFailAlloc_4828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4828_, 0, v_a_4822_);
v___x_4827_ = v_reuseFailAlloc_4828_;
goto v_reusejp_4826_;
}
v_reusejp_4826_:
{
return v___x_4827_;
}
}
}
}
else
{
lean_object* v___x_4830_; 
v___x_4830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4830_, 0, v___x_4808_);
return v___x_4830_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f___boxed(lean_object* v_attrName_4831_, lean_object* v_a_4832_, lean_object* v_a_4833_, lean_object* v_a_4834_){
_start:
{
lean_object* v_res_4835_; 
v_res_4835_ = l_Lean_Meta_Grind_getExtension_x3f(v_attrName_4831_, v_a_4832_, v_a_4833_);
lean_dec(v_a_4833_);
lean_dec_ref(v_a_4832_);
lean_dec(v_attrName_4831_);
return v_res_4835_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_registerAttr___auto__1(void){
_start:
{
lean_object* v___x_4836_; 
v___x_4836_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25);
return v___x_4836_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_4837_, lean_object* v_x_4838_){
_start:
{
if (lean_obj_tag(v_x_4838_) == 0)
{
return v_x_4837_;
}
else
{
lean_object* v_key_4839_; lean_object* v_value_4840_; lean_object* v_tail_4841_; lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4867_; 
v_key_4839_ = lean_ctor_get(v_x_4838_, 0);
v_value_4840_ = lean_ctor_get(v_x_4838_, 1);
v_tail_4841_ = lean_ctor_get(v_x_4838_, 2);
v_isSharedCheck_4867_ = !lean_is_exclusive(v_x_4838_);
if (v_isSharedCheck_4867_ == 0)
{
v___x_4843_ = v_x_4838_;
v_isShared_4844_ = v_isSharedCheck_4867_;
goto v_resetjp_4842_;
}
else
{
lean_inc(v_tail_4841_);
lean_inc(v_value_4840_);
lean_inc(v_key_4839_);
lean_dec(v_x_4838_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4867_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v___x_4845_; uint64_t v___y_4847_; 
v___x_4845_ = lean_array_get_size(v_x_4837_);
if (lean_obj_tag(v_key_4839_) == 0)
{
uint64_t v___x_4865_; 
v___x_4865_ = 1723ULL;
v___y_4847_ = v___x_4865_;
goto v___jp_4846_;
}
else
{
uint64_t v_hash_4866_; 
v_hash_4866_ = lean_ctor_get_uint64(v_key_4839_, sizeof(void*)*2);
v___y_4847_ = v_hash_4866_;
goto v___jp_4846_;
}
v___jp_4846_:
{
uint64_t v___x_4848_; uint64_t v___x_4849_; uint64_t v_fold_4850_; uint64_t v___x_4851_; uint64_t v___x_4852_; uint64_t v___x_4853_; size_t v___x_4854_; size_t v___x_4855_; size_t v___x_4856_; size_t v___x_4857_; size_t v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4861_; 
v___x_4848_ = 32ULL;
v___x_4849_ = lean_uint64_shift_right(v___y_4847_, v___x_4848_);
v_fold_4850_ = lean_uint64_xor(v___y_4847_, v___x_4849_);
v___x_4851_ = 16ULL;
v___x_4852_ = lean_uint64_shift_right(v_fold_4850_, v___x_4851_);
v___x_4853_ = lean_uint64_xor(v_fold_4850_, v___x_4852_);
v___x_4854_ = lean_uint64_to_usize(v___x_4853_);
v___x_4855_ = lean_usize_of_nat(v___x_4845_);
v___x_4856_ = ((size_t)1ULL);
v___x_4857_ = lean_usize_sub(v___x_4855_, v___x_4856_);
v___x_4858_ = lean_usize_land(v___x_4854_, v___x_4857_);
v___x_4859_ = lean_array_uget_borrowed(v_x_4837_, v___x_4858_);
lean_inc(v___x_4859_);
if (v_isShared_4844_ == 0)
{
lean_ctor_set(v___x_4843_, 2, v___x_4859_);
v___x_4861_ = v___x_4843_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4864_; 
v_reuseFailAlloc_4864_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4864_, 0, v_key_4839_);
lean_ctor_set(v_reuseFailAlloc_4864_, 1, v_value_4840_);
lean_ctor_set(v_reuseFailAlloc_4864_, 2, v___x_4859_);
v___x_4861_ = v_reuseFailAlloc_4864_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
lean_object* v___x_4862_; 
v___x_4862_ = lean_array_uset(v_x_4837_, v___x_4858_, v___x_4861_);
v_x_4837_ = v___x_4862_;
v_x_4838_ = v_tail_4841_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(lean_object* v_i_4868_, lean_object* v_source_4869_, lean_object* v_target_4870_){
_start:
{
lean_object* v___x_4871_; uint8_t v___x_4872_; 
v___x_4871_ = lean_array_get_size(v_source_4869_);
v___x_4872_ = lean_nat_dec_lt(v_i_4868_, v___x_4871_);
if (v___x_4872_ == 0)
{
lean_dec_ref(v_source_4869_);
lean_dec(v_i_4868_);
return v_target_4870_;
}
else
{
lean_object* v_es_4873_; lean_object* v___x_4874_; lean_object* v_source_4875_; lean_object* v_target_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; 
v_es_4873_ = lean_array_fget(v_source_4869_, v_i_4868_);
v___x_4874_ = lean_box(0);
v_source_4875_ = lean_array_fset(v_source_4869_, v_i_4868_, v___x_4874_);
v_target_4876_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(v_target_4870_, v_es_4873_);
v___x_4877_ = lean_unsigned_to_nat(1u);
v___x_4878_ = lean_nat_add(v_i_4868_, v___x_4877_);
lean_dec(v_i_4868_);
v_i_4868_ = v___x_4878_;
v_source_4869_ = v_source_4875_;
v_target_4870_ = v_target_4876_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(lean_object* v_data_4880_){
_start:
{
lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v_nbuckets_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; 
v___x_4881_ = lean_array_get_size(v_data_4880_);
v___x_4882_ = lean_unsigned_to_nat(2u);
v_nbuckets_4883_ = lean_nat_mul(v___x_4881_, v___x_4882_);
v___x_4884_ = lean_unsigned_to_nat(0u);
v___x_4885_ = lean_box(0);
v___x_4886_ = lean_mk_array(v_nbuckets_4883_, v___x_4885_);
v___x_4887_ = lean_array_propagate_mark(v_data_4880_, v___x_4886_);
v___x_4888_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(v___x_4884_, v_data_4880_, v___x_4887_);
return v___x_4888_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(lean_object* v_a_4889_, lean_object* v_x_4890_){
_start:
{
if (lean_obj_tag(v_x_4890_) == 0)
{
uint8_t v___x_4891_; 
v___x_4891_ = 0;
return v___x_4891_;
}
else
{
lean_object* v_key_4892_; lean_object* v_tail_4893_; uint8_t v___x_4894_; 
v_key_4892_ = lean_ctor_get(v_x_4890_, 0);
v_tail_4893_ = lean_ctor_get(v_x_4890_, 2);
v___x_4894_ = lean_name_eq(v_key_4892_, v_a_4889_);
if (v___x_4894_ == 0)
{
v_x_4890_ = v_tail_4893_;
goto _start;
}
else
{
return v___x_4894_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg___boxed(lean_object* v_a_4896_, lean_object* v_x_4897_){
_start:
{
uint8_t v_res_4898_; lean_object* v_r_4899_; 
v_res_4898_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_4896_, v_x_4897_);
lean_dec(v_x_4897_);
lean_dec(v_a_4896_);
v_r_4899_ = lean_box(v_res_4898_);
return v_r_4899_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(lean_object* v_a_4900_, lean_object* v_b_4901_, lean_object* v_x_4902_){
_start:
{
if (lean_obj_tag(v_x_4902_) == 0)
{
lean_dec(v_b_4901_);
lean_dec(v_a_4900_);
return v_x_4902_;
}
else
{
lean_object* v_key_4903_; lean_object* v_value_4904_; lean_object* v_tail_4905_; lean_object* v___x_4907_; uint8_t v_isShared_4908_; uint8_t v_isSharedCheck_4917_; 
v_key_4903_ = lean_ctor_get(v_x_4902_, 0);
v_value_4904_ = lean_ctor_get(v_x_4902_, 1);
v_tail_4905_ = lean_ctor_get(v_x_4902_, 2);
v_isSharedCheck_4917_ = !lean_is_exclusive(v_x_4902_);
if (v_isSharedCheck_4917_ == 0)
{
v___x_4907_ = v_x_4902_;
v_isShared_4908_ = v_isSharedCheck_4917_;
goto v_resetjp_4906_;
}
else
{
lean_inc(v_tail_4905_);
lean_inc(v_value_4904_);
lean_inc(v_key_4903_);
lean_dec(v_x_4902_);
v___x_4907_ = lean_box(0);
v_isShared_4908_ = v_isSharedCheck_4917_;
goto v_resetjp_4906_;
}
v_resetjp_4906_:
{
uint8_t v___x_4909_; 
v___x_4909_ = lean_name_eq(v_key_4903_, v_a_4900_);
if (v___x_4909_ == 0)
{
lean_object* v___x_4910_; lean_object* v___x_4912_; 
v___x_4910_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_4900_, v_b_4901_, v_tail_4905_);
if (v_isShared_4908_ == 0)
{
lean_ctor_set(v___x_4907_, 2, v___x_4910_);
v___x_4912_ = v___x_4907_;
goto v_reusejp_4911_;
}
else
{
lean_object* v_reuseFailAlloc_4913_; 
v_reuseFailAlloc_4913_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4913_, 0, v_key_4903_);
lean_ctor_set(v_reuseFailAlloc_4913_, 1, v_value_4904_);
lean_ctor_set(v_reuseFailAlloc_4913_, 2, v___x_4910_);
v___x_4912_ = v_reuseFailAlloc_4913_;
goto v_reusejp_4911_;
}
v_reusejp_4911_:
{
return v___x_4912_;
}
}
else
{
lean_object* v___x_4915_; 
lean_dec(v_value_4904_);
lean_dec(v_key_4903_);
if (v_isShared_4908_ == 0)
{
lean_ctor_set(v___x_4907_, 1, v_b_4901_);
lean_ctor_set(v___x_4907_, 0, v_a_4900_);
v___x_4915_ = v___x_4907_;
goto v_reusejp_4914_;
}
else
{
lean_object* v_reuseFailAlloc_4916_; 
v_reuseFailAlloc_4916_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4916_, 0, v_a_4900_);
lean_ctor_set(v_reuseFailAlloc_4916_, 1, v_b_4901_);
lean_ctor_set(v_reuseFailAlloc_4916_, 2, v_tail_4905_);
v___x_4915_ = v_reuseFailAlloc_4916_;
goto v_reusejp_4914_;
}
v_reusejp_4914_:
{
return v___x_4915_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(lean_object* v_m_4918_, lean_object* v_a_4919_, lean_object* v_b_4920_){
_start:
{
lean_object* v_size_4921_; lean_object* v_buckets_4922_; lean_object* v___x_4924_; uint8_t v_isShared_4925_; uint8_t v_isSharedCheck_4968_; 
v_size_4921_ = lean_ctor_get(v_m_4918_, 0);
v_buckets_4922_ = lean_ctor_get(v_m_4918_, 1);
v_isSharedCheck_4968_ = !lean_is_exclusive(v_m_4918_);
if (v_isSharedCheck_4968_ == 0)
{
v___x_4924_ = v_m_4918_;
v_isShared_4925_ = v_isSharedCheck_4968_;
goto v_resetjp_4923_;
}
else
{
lean_inc(v_buckets_4922_);
lean_inc(v_size_4921_);
lean_dec(v_m_4918_);
v___x_4924_ = lean_box(0);
v_isShared_4925_ = v_isSharedCheck_4968_;
goto v_resetjp_4923_;
}
v_resetjp_4923_:
{
lean_object* v___x_4926_; uint64_t v___y_4928_; 
v___x_4926_ = lean_array_get_size(v_buckets_4922_);
if (lean_obj_tag(v_a_4919_) == 0)
{
uint64_t v___x_4966_; 
v___x_4966_ = 1723ULL;
v___y_4928_ = v___x_4966_;
goto v___jp_4927_;
}
else
{
uint64_t v_hash_4967_; 
v_hash_4967_ = lean_ctor_get_uint64(v_a_4919_, sizeof(void*)*2);
v___y_4928_ = v_hash_4967_;
goto v___jp_4927_;
}
v___jp_4927_:
{
uint64_t v___x_4929_; uint64_t v___x_4930_; uint64_t v_fold_4931_; uint64_t v___x_4932_; uint64_t v___x_4933_; uint64_t v___x_4934_; size_t v___x_4935_; size_t v___x_4936_; size_t v___x_4937_; size_t v___x_4938_; size_t v___x_4939_; lean_object* v_bkt_4940_; uint8_t v___x_4941_; 
v___x_4929_ = 32ULL;
v___x_4930_ = lean_uint64_shift_right(v___y_4928_, v___x_4929_);
v_fold_4931_ = lean_uint64_xor(v___y_4928_, v___x_4930_);
v___x_4932_ = 16ULL;
v___x_4933_ = lean_uint64_shift_right(v_fold_4931_, v___x_4932_);
v___x_4934_ = lean_uint64_xor(v_fold_4931_, v___x_4933_);
v___x_4935_ = lean_uint64_to_usize(v___x_4934_);
v___x_4936_ = lean_usize_of_nat(v___x_4926_);
v___x_4937_ = ((size_t)1ULL);
v___x_4938_ = lean_usize_sub(v___x_4936_, v___x_4937_);
v___x_4939_ = lean_usize_land(v___x_4935_, v___x_4938_);
v_bkt_4940_ = lean_array_uget_borrowed(v_buckets_4922_, v___x_4939_);
v___x_4941_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_4919_, v_bkt_4940_);
if (v___x_4941_ == 0)
{
lean_object* v___x_4942_; lean_object* v_size_x27_4943_; lean_object* v___x_4944_; lean_object* v_buckets_x27_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; uint8_t v___x_4951_; 
v___x_4942_ = lean_unsigned_to_nat(1u);
v_size_x27_4943_ = lean_nat_add(v_size_4921_, v___x_4942_);
lean_dec(v_size_4921_);
lean_inc(v_bkt_4940_);
v___x_4944_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4944_, 0, v_a_4919_);
lean_ctor_set(v___x_4944_, 1, v_b_4920_);
lean_ctor_set(v___x_4944_, 2, v_bkt_4940_);
v_buckets_x27_4945_ = lean_array_uset(v_buckets_4922_, v___x_4939_, v___x_4944_);
v___x_4946_ = lean_unsigned_to_nat(4u);
v___x_4947_ = lean_nat_mul(v_size_x27_4943_, v___x_4946_);
v___x_4948_ = lean_unsigned_to_nat(3u);
v___x_4949_ = lean_nat_div(v___x_4947_, v___x_4948_);
lean_dec(v___x_4947_);
v___x_4950_ = lean_array_get_size(v_buckets_x27_4945_);
v___x_4951_ = lean_nat_dec_le(v___x_4949_, v___x_4950_);
lean_dec(v___x_4949_);
if (v___x_4951_ == 0)
{
lean_object* v_val_4952_; lean_object* v___x_4954_; 
v_val_4952_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(v_buckets_x27_4945_);
if (v_isShared_4925_ == 0)
{
lean_ctor_set(v___x_4924_, 1, v_val_4952_);
lean_ctor_set(v___x_4924_, 0, v_size_x27_4943_);
v___x_4954_ = v___x_4924_;
goto v_reusejp_4953_;
}
else
{
lean_object* v_reuseFailAlloc_4955_; 
v_reuseFailAlloc_4955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4955_, 0, v_size_x27_4943_);
lean_ctor_set(v_reuseFailAlloc_4955_, 1, v_val_4952_);
v___x_4954_ = v_reuseFailAlloc_4955_;
goto v_reusejp_4953_;
}
v_reusejp_4953_:
{
return v___x_4954_;
}
}
else
{
lean_object* v___x_4957_; 
if (v_isShared_4925_ == 0)
{
lean_ctor_set(v___x_4924_, 1, v_buckets_x27_4945_);
lean_ctor_set(v___x_4924_, 0, v_size_x27_4943_);
v___x_4957_ = v___x_4924_;
goto v_reusejp_4956_;
}
else
{
lean_object* v_reuseFailAlloc_4958_; 
v_reuseFailAlloc_4958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4958_, 0, v_size_x27_4943_);
lean_ctor_set(v_reuseFailAlloc_4958_, 1, v_buckets_x27_4945_);
v___x_4957_ = v_reuseFailAlloc_4958_;
goto v_reusejp_4956_;
}
v_reusejp_4956_:
{
return v___x_4957_;
}
}
}
else
{
lean_object* v___x_4959_; lean_object* v_buckets_x27_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4964_; 
lean_inc(v_bkt_4940_);
v___x_4959_ = lean_box(0);
v_buckets_x27_4960_ = lean_array_uset(v_buckets_4922_, v___x_4939_, v___x_4959_);
v___x_4961_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_4919_, v_b_4920_, v_bkt_4940_);
v___x_4962_ = lean_array_uset(v_buckets_x27_4960_, v___x_4939_, v___x_4961_);
if (v_isShared_4925_ == 0)
{
lean_ctor_set(v___x_4924_, 1, v___x_4962_);
v___x_4964_ = v___x_4924_;
goto v_reusejp_4963_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v_size_4921_);
lean_ctor_set(v_reuseFailAlloc_4965_, 1, v___x_4962_);
v___x_4964_ = v_reuseFailAlloc_4965_;
goto v_reusejp_4963_;
}
v_reusejp_4963_:
{
return v___x_4964_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr(lean_object* v_attrName_4969_, lean_object* v_ref_4970_){
_start:
{
lean_object* v___x_4972_; 
lean_inc(v_ref_4970_);
v___x_4972_ = l_Lean_Meta_Grind_mkExtension(v_ref_4970_);
if (lean_obj_tag(v___x_4972_) == 0)
{
lean_object* v_a_4973_; uint8_t v___x_4974_; uint8_t v___x_4975_; lean_object* v___x_4976_; 
v_a_4973_ = lean_ctor_get(v___x_4972_, 0);
lean_inc_n(v_a_4973_, 2);
lean_dec_ref_known(v___x_4972_, 1);
v___x_4974_ = 0;
v___x_4975_ = 1;
lean_inc(v_ref_4970_);
lean_inc(v_attrName_4969_);
v___x_4976_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_4969_, v___x_4974_, v___x_4975_, v_a_4973_, v_ref_4970_);
if (lean_obj_tag(v___x_4976_) == 0)
{
lean_object* v___x_4977_; 
lean_dec_ref_known(v___x_4976_, 1);
lean_inc(v_ref_4970_);
lean_inc(v_a_4973_);
lean_inc(v_attrName_4969_);
v___x_4977_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_4969_, v___x_4974_, v___x_4974_, v_a_4973_, v_ref_4970_);
if (lean_obj_tag(v___x_4977_) == 0)
{
lean_object* v___x_4978_; 
lean_dec_ref_known(v___x_4977_, 1);
lean_inc(v_ref_4970_);
lean_inc(v_a_4973_);
lean_inc(v_attrName_4969_);
v___x_4978_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_4969_, v___x_4975_, v___x_4975_, v_a_4973_, v_ref_4970_);
if (lean_obj_tag(v___x_4978_) == 0)
{
lean_object* v___x_4979_; 
lean_dec_ref_known(v___x_4978_, 1);
lean_inc(v_a_4973_);
lean_inc(v_attrName_4969_);
v___x_4979_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_4969_, v___x_4975_, v___x_4974_, v_a_4973_, v_ref_4970_);
if (lean_obj_tag(v___x_4979_) == 0)
{
lean_object* v___x_4981_; uint8_t v_isShared_4982_; uint8_t v_isSharedCheck_4990_; 
v_isSharedCheck_4990_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_4990_ == 0)
{
lean_object* v_unused_4991_; 
v_unused_4991_ = lean_ctor_get(v___x_4979_, 0);
lean_dec(v_unused_4991_);
v___x_4981_ = v___x_4979_;
v_isShared_4982_ = v_isSharedCheck_4990_;
goto v_resetjp_4980_;
}
else
{
lean_dec(v___x_4979_);
v___x_4981_ = lean_box(0);
v_isShared_4982_ = v_isSharedCheck_4990_;
goto v_resetjp_4980_;
}
v_resetjp_4980_:
{
lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4988_; 
v___x_4983_ = l_Lean_Meta_Grind_extensionMapRef;
v___x_4984_ = lean_st_ref_take(v___x_4983_);
lean_inc(v_a_4973_);
v___x_4985_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(v___x_4984_, v_attrName_4969_, v_a_4973_);
v___x_4986_ = lean_st_ref_put(v___x_4983_, v___x_4985_);
if (v_isShared_4982_ == 0)
{
lean_ctor_set(v___x_4981_, 0, v_a_4973_);
v___x_4988_ = v___x_4981_;
goto v_reusejp_4987_;
}
else
{
lean_object* v_reuseFailAlloc_4989_; 
v_reuseFailAlloc_4989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4989_, 0, v_a_4973_);
v___x_4988_ = v_reuseFailAlloc_4989_;
goto v_reusejp_4987_;
}
v_reusejp_4987_:
{
return v___x_4988_;
}
}
}
else
{
lean_object* v_a_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_4999_; 
lean_dec(v_a_4973_);
lean_dec(v_attrName_4969_);
v_a_4992_ = lean_ctor_get(v___x_4979_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4994_ = v___x_4979_;
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_a_4992_);
lean_dec(v___x_4979_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v___x_4997_; 
if (v_isShared_4995_ == 0)
{
v___x_4997_ = v___x_4994_;
goto v_reusejp_4996_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v_a_4992_);
v___x_4997_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4996_;
}
v_reusejp_4996_:
{
return v___x_4997_;
}
}
}
}
else
{
lean_object* v_a_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5007_; 
lean_dec(v_a_4973_);
lean_dec(v_ref_4970_);
lean_dec(v_attrName_4969_);
v_a_5000_ = lean_ctor_get(v___x_4978_, 0);
v_isSharedCheck_5007_ = !lean_is_exclusive(v___x_4978_);
if (v_isSharedCheck_5007_ == 0)
{
v___x_5002_ = v___x_4978_;
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_a_5000_);
lean_dec(v___x_4978_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v___x_5005_; 
if (v_isShared_5003_ == 0)
{
v___x_5005_ = v___x_5002_;
goto v_reusejp_5004_;
}
else
{
lean_object* v_reuseFailAlloc_5006_; 
v_reuseFailAlloc_5006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5006_, 0, v_a_5000_);
v___x_5005_ = v_reuseFailAlloc_5006_;
goto v_reusejp_5004_;
}
v_reusejp_5004_:
{
return v___x_5005_;
}
}
}
}
else
{
lean_object* v_a_5008_; lean_object* v___x_5010_; uint8_t v_isShared_5011_; uint8_t v_isSharedCheck_5015_; 
lean_dec(v_a_4973_);
lean_dec(v_ref_4970_);
lean_dec(v_attrName_4969_);
v_a_5008_ = lean_ctor_get(v___x_4977_, 0);
v_isSharedCheck_5015_ = !lean_is_exclusive(v___x_4977_);
if (v_isSharedCheck_5015_ == 0)
{
v___x_5010_ = v___x_4977_;
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
else
{
lean_inc(v_a_5008_);
lean_dec(v___x_4977_);
v___x_5010_ = lean_box(0);
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
v_resetjp_5009_:
{
lean_object* v___x_5013_; 
if (v_isShared_5011_ == 0)
{
v___x_5013_ = v___x_5010_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v_a_5008_);
v___x_5013_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
return v___x_5013_;
}
}
}
}
else
{
lean_object* v_a_5016_; lean_object* v___x_5018_; uint8_t v_isShared_5019_; uint8_t v_isSharedCheck_5023_; 
lean_dec(v_a_4973_);
lean_dec(v_ref_4970_);
lean_dec(v_attrName_4969_);
v_a_5016_ = lean_ctor_get(v___x_4976_, 0);
v_isSharedCheck_5023_ = !lean_is_exclusive(v___x_4976_);
if (v_isSharedCheck_5023_ == 0)
{
v___x_5018_ = v___x_4976_;
v_isShared_5019_ = v_isSharedCheck_5023_;
goto v_resetjp_5017_;
}
else
{
lean_inc(v_a_5016_);
lean_dec(v___x_4976_);
v___x_5018_ = lean_box(0);
v_isShared_5019_ = v_isSharedCheck_5023_;
goto v_resetjp_5017_;
}
v_resetjp_5017_:
{
lean_object* v___x_5021_; 
if (v_isShared_5019_ == 0)
{
v___x_5021_ = v___x_5018_;
goto v_reusejp_5020_;
}
else
{
lean_object* v_reuseFailAlloc_5022_; 
v_reuseFailAlloc_5022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5022_, 0, v_a_5016_);
v___x_5021_ = v_reuseFailAlloc_5022_;
goto v_reusejp_5020_;
}
v_reusejp_5020_:
{
return v___x_5021_;
}
}
}
}
else
{
lean_dec(v_ref_4970_);
lean_dec(v_attrName_4969_);
return v___x_4972_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___boxed(lean_object* v_attrName_5024_, lean_object* v_ref_5025_, lean_object* v_a_5026_){
_start:
{
lean_object* v_res_5027_; 
v_res_5027_ = l_Lean_Meta_Grind_registerAttr(v_attrName_5024_, v_ref_5025_);
return v_res_5027_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0(lean_object* v_00_u03b2_5028_, lean_object* v_m_5029_, lean_object* v_a_5030_, lean_object* v_b_5031_){
_start:
{
lean_object* v___x_5032_; 
v___x_5032_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(v_m_5029_, v_a_5030_, v_b_5031_);
return v___x_5032_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(lean_object* v_00_u03b2_5033_, lean_object* v_a_5034_, lean_object* v_x_5035_){
_start:
{
uint8_t v___x_5036_; 
v___x_5036_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_5034_, v_x_5035_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5037_, lean_object* v_a_5038_, lean_object* v_x_5039_){
_start:
{
uint8_t v_res_5040_; lean_object* v_r_5041_; 
v_res_5040_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(v_00_u03b2_5037_, v_a_5038_, v_x_5039_);
lean_dec(v_x_5039_);
lean_dec(v_a_5038_);
v_r_5041_ = lean_box(v_res_5040_);
return v_r_5041_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1(lean_object* v_00_u03b2_5042_, lean_object* v_data_5043_){
_start:
{
lean_object* v___x_5044_; 
v___x_5044_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(v_data_5043_);
return v___x_5044_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2(lean_object* v_00_u03b2_5045_, lean_object* v_a_5046_, lean_object* v_b_5047_, lean_object* v_x_5048_){
_start:
{
lean_object* v___x_5049_; 
v___x_5049_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_5046_, v_b_5047_, v_x_5048_);
return v___x_5049_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_5050_, lean_object* v_i_5051_, lean_object* v_source_5052_, lean_object* v_target_5053_){
_start:
{
lean_object* v___x_5054_; 
v___x_5054_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(v_i_5051_, v_source_5052_, v_target_5053_);
return v___x_5054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_5055_, lean_object* v_x_5056_, lean_object* v_x_5057_){
_start:
{
lean_object* v___x_5058_; 
v___x_5058_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(v_x_5056_, v_x_5057_);
return v___x_5058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; 
v___x_5065_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8));
v___x_5066_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_));
v___x_5067_ = l_Lean_Meta_Grind_registerAttr(v___x_5065_, v___x_5066_);
return v___x_5067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2____boxed(lean_object* v_a_5068_){
_start:
{
lean_object* v_res_5069_; 
v_res_5069_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
return v_res_5069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; 
v___x_5080_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_));
v___x_5081_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_));
v___x_5082_ = l_Lean_Meta_Grind_registerAttr(v___x_5080_, v___x_5081_);
return v___x_5082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2____boxed(lean_object* v_a_5083_){
_start:
{
lean_object* v_res_5084_; 
v_res_5084_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_();
return v_res_5084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg(lean_object* v_declName_5085_, lean_object* v_a_5086_){
_start:
{
lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v_env_5090_; lean_object* v___x_5091_; lean_object* v_ext_5092_; lean_object* v_toEnvExtension_5093_; lean_object* v_asyncMode_5094_; uint8_t v___x_5095_; lean_object* v___x_5096_; lean_object* v_casesTypes_5097_; uint8_t v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; 
v___x_5088_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_5089_ = lean_st_ref_get(v_a_5086_);
v_env_5090_ = lean_ctor_get(v___x_5089_, 0);
lean_inc_ref(v_env_5090_);
lean_dec(v___x_5089_);
v___x_5091_ = l_Lean_Meta_Grind_grindExt;
v_ext_5092_ = lean_ctor_get(v___x_5091_, 1);
v_toEnvExtension_5093_ = lean_ctor_get(v_ext_5092_, 0);
v_asyncMode_5094_ = lean_ctor_get(v_toEnvExtension_5093_, 2);
v___x_5095_ = 0;
v___x_5096_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5088_, v___x_5091_, v_env_5090_, v_asyncMode_5094_, v___x_5095_);
v_casesTypes_5097_ = lean_ctor_get(v___x_5096_, 0);
lean_inc_ref(v_casesTypes_5097_);
lean_dec(v___x_5096_);
v___x_5098_ = l_Lean_Meta_Grind_CasesTypes_isSplit(v_casesTypes_5097_, v_declName_5085_);
lean_dec_ref(v_casesTypes_5097_);
v___x_5099_ = lean_box(v___x_5098_);
v___x_5100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5100_, 0, v___x_5099_);
return v___x_5100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg___boxed(lean_object* v_declName_5101_, lean_object* v_a_5102_, lean_object* v_a_5103_){
_start:
{
lean_object* v_res_5104_; 
v_res_5104_ = l_Lean_Meta_Grind_isGlobalSplit___redArg(v_declName_5101_, v_a_5102_);
lean_dec(v_a_5102_);
lean_dec(v_declName_5101_);
return v_res_5104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit(lean_object* v_declName_5105_, lean_object* v_a_5106_, lean_object* v_a_5107_){
_start:
{
lean_object* v___x_5109_; 
v___x_5109_ = l_Lean_Meta_Grind_isGlobalSplit___redArg(v_declName_5105_, v_a_5107_);
return v___x_5109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___boxed(lean_object* v_declName_5110_, lean_object* v_a_5111_, lean_object* v_a_5112_, lean_object* v_a_5113_){
_start:
{
lean_object* v_res_5114_; 
v_res_5114_ = l_Lean_Meta_Grind_isGlobalSplit(v_declName_5110_, v_a_5111_, v_a_5112_);
lean_dec(v_a_5112_);
lean_dec_ref(v_a_5111_);
lean_dec(v_declName_5110_);
return v_res_5114_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Injective(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_normExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_normExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_448808965____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default = _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedNormSymTheorems_default);
l_Lean_Meta_Grind_instInhabitedNormSymTheorems = _init_l_Lean_Meta_Grind_instInhabitedNormSymTheorems();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedNormSymTheorems);
l_Lean_Meta_Grind_instInhabitedNormSymEntry_default = _init_l_Lean_Meta_Grind_instInhabitedNormSymEntry_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedNormSymEntry_default);
l_Lean_Meta_Grind_instInhabitedNormSymEntry = _init_l_Lean_Meta_Grind_instInhabitedNormSymEntry();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedNormSymEntry);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2087691235____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_normSymExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_normSymExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_extensionMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_extensionMapRef);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_grindExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_grindExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_liaExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_liaExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1 = _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1);
l_Lean_Meta_Grind_registerAttr___auto__1 = _init_l_Lean_Meta_Grind_registerAttr___auto__1();
lean_mark_persistent(l_Lean_Meta_Grind_registerAttr___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Injective(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
}
#ifdef __cplusplus
}
#endif
