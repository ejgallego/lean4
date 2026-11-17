// Lean compiler output
// Module: Lean.Meta.RecursorInfo
// Imports: public import Lean.Meta.Basic import Init.Data.Range.Polymorphic.Iterators
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_isAuxRecursor(lean_object*, lean_object*);
lean_object* l_Lean_mkRecName(lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_casesOnSuffix;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_recOnSuffix;
extern lean_object* l_Lean_brecOnSuffix;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerParametricAttribute___redArg(lean_object*);
lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringOption___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_instToStringBool___lam__0___boxed(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_motive_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_motive_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_majorType_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_majorType_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instToStringRecursorUnivLevelPos___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "<motive-univ>"};
static const lean_object* l_Lean_Meta_instToStringRecursorUnivLevelPos___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_instToStringRecursorUnivLevelPos___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instToStringRecursorUnivLevelPos___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_instToStringRecursorUnivLevelPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instToStringRecursorUnivLevelPos___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instToStringRecursorUnivLevelPos___closed__0 = (const lean_object*)&l_Lean_Meta_instToStringRecursorUnivLevelPos___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instToStringRecursorUnivLevelPos = (const lean_object*)&l_Lean_Meta_instToStringRecursorUnivLevelPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numParams___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numIndices(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numIndices___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_motivePos(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_motivePos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_firstIndexPos(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_firstIndexPos___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_RecursorInfo_isMinor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_isMinor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numMinors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numMinors___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "{\n  name           := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  numArgs        := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__2_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  numParams      := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  numIndices     := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__4_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  numMinors      := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__5_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  major          := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__6_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  motive         := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__7_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  paramsAtMajor  := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__8_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  indicesAtMajor := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__9_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  produceMotive  := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__10_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__11_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  type           := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__12_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  univs          := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__13 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__13_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  depElim        := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__14 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__14_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "  recursive      := "};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__15 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__15_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__16 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__16_value;
static const lean_string_object l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__17 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_RecursorInfo_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___closed__0 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___closed__0_value;
static const lean_closure_object l_Lean_Meta_RecursorInfo_instToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_reprFast, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___closed__1 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___closed__1_value;
static const lean_closure_object l_Lean_Meta_RecursorInfo_instToString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringOption___redArg___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_RecursorInfo_instToString___closed__1_value)} };
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___closed__2 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___closed__2_value;
static const lean_closure_object l_Lean_Meta_RecursorInfo_instToString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_RecursorInfo_instToString___lam__0, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Meta_RecursorInfo_instToString___closed__2_value),((lean_object*)&l_Lean_Meta_RecursorInfo_instToString___closed__1_value),((lean_object*)&l_Lean_Meta_RecursorInfo_instToString___closed__0_value),((lean_object*)&l_Lean_Meta_instToStringRecursorUnivLevelPos___closed__0_value)} };
static const lean_object* l_Lean_Meta_RecursorInfo_instToString___closed__3 = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_RecursorInfo_instToString = (const lean_object*)&l_Lean_Meta_RecursorInfo_instToString___closed__3_value;
static lean_once_cell_t l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "` is not a recursor"};
static const lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.isRec\?"};
static const lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive_spec__0(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "invalid user defined recursor `"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__0 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1;
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 129, .m_capacity = 129, .m_length = 128, .m_data = "`, result type must be of the form `C t`, where `C` is a bound variable, and t is a (possibly empty) sequence of bound variables"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__2 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getNumParams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getNumParams___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ill-formed recursor `"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__0 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__1;
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "invalid user defined recursor, `"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__2 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__3;
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 191, .m_capacity = 191, .m_length = 190, .m_data = "` does not support dependent elimination, and position of the major premise was not specified (solution: set attribute `[recursor <pos>]`, where `<pos>` is the position of the major premise)"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__4 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__5;
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "invalid major premise position for user defined recursor, recursor has only "};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__6 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__7;
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " arguments"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__8 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "`, type of the major premise does not contain the recursor parameter"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__1;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos___closed__0 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "`, type of the major premise does not contain the recursor index"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos___closed__0 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "`, motive result sort must be Prop or `Sort u` where u is a universe level parameter"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__0 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "`, major premise type does not contain universe level parameter `"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos___closed__0 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___closed__0 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___closed__1 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 221, .m_capacity = 221, .m_length = 220, .m_data = "`, motive must have a type of the form (C : Pi (i : B A), I A i -> Type), where A is a (possibly empty) sequence of variables (aka parameters), (i : B A) is a (possibly empty) telescope (aka indices), and I is a constant"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__0 = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "`, type of the major premise must be of the form (I ...), where I is a constant"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___boxed(lean_object**);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "`, indices must occur before major premise"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__0 = (const lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__0_value;
static const lean_string_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__1 = (const lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__1_value;
static const lean_string_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__2 = (const lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__2_value;
static const lean_string_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "recursor"};
static const lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__3 = (const lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__3_value),LEAN_SCALAR_PTR_LITERAL(90, 29, 106, 40, 200, 118, 31, 85)}};
static const lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4 = (const lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4_value;
static const lean_string_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "unexpected attribute argument, numeral expected"};
static const lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__5 = (const lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__6;
static const lean_string_object l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "major premise position must be greater than zero"};
static const lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__7 = (const lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
static const lean_array_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__10_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__10_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__11_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__11_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "recursorAttribute"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(69, 14, 117, 146, 218, 161, 149, 75)}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 1, 161, 9, 253, 193, 133, 24)}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "user defined recursor, numerical parameter specifies position of the major premise"};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_recursorAttribute;
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorPos_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Meta_RecursorUnivLevelPos_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
return v_k_6_;
}
else
{
lean_object* v_idx_7_; lean_object* v___x_8_; 
v_idx_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_idx_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_idx_7_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_RecursorUnivLevelPos_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Meta_RecursorUnivLevelPos_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_motive_elim___redArg(lean_object* v_t_21_, lean_object* v_motive_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_Meta_RecursorUnivLevelPos_ctorElim___redArg(v_t_21_, v_motive_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_motive_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_motive_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Meta_RecursorUnivLevelPos_ctorElim___redArg(v_t_25_, v_motive_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_majorType_elim___redArg(lean_object* v_t_29_, lean_object* v_majorType_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Meta_RecursorUnivLevelPos_ctorElim___redArg(v_t_29_, v_majorType_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorUnivLevelPos_majorType_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_majorType_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Meta_RecursorUnivLevelPos_ctorElim___redArg(v_t_33_, v_majorType_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instToStringRecursorUnivLevelPos___lam__0(lean_object* v_x_38_){
_start:
{
if (lean_obj_tag(v_x_38_) == 0)
{
lean_object* v___x_39_; 
v___x_39_ = ((lean_object*)(l_Lean_Meta_instToStringRecursorUnivLevelPos___lam__0___closed__0));
return v___x_39_;
}
else
{
lean_object* v_idx_40_; lean_object* v___x_41_; 
v_idx_40_ = lean_ctor_get(v_x_38_, 0);
lean_inc(v_idx_40_);
lean_dec_ref_known(v_x_38_, 1);
v___x_41_ = l_Nat_reprFast(v_idx_40_);
return v___x_41_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numParams(lean_object* v_info_44_){
_start:
{
lean_object* v_paramsPos_45_; lean_object* v___x_46_; 
v_paramsPos_45_ = lean_ctor_get(v_info_44_, 5);
v___x_46_ = l_List_lengthTR___redArg(v_paramsPos_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numParams___boxed(lean_object* v_info_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lean_Meta_RecursorInfo_numParams(v_info_47_);
lean_dec_ref(v_info_47_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numIndices(lean_object* v_info_49_){
_start:
{
lean_object* v_indicesPos_50_; lean_object* v___x_51_; 
v_indicesPos_50_ = lean_ctor_get(v_info_49_, 6);
v___x_51_ = l_List_lengthTR___redArg(v_indicesPos_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numIndices___boxed(lean_object* v_info_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_Meta_RecursorInfo_numIndices(v_info_52_);
lean_dec_ref(v_info_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_motivePos(lean_object* v_info_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Meta_RecursorInfo_numParams(v_info_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_motivePos___boxed(lean_object* v_info_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_Meta_RecursorInfo_motivePos(v_info_56_);
lean_dec_ref(v_info_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_firstIndexPos(lean_object* v_info_58_){
_start:
{
lean_object* v_majorPos_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v_majorPos_59_ = lean_ctor_get(v_info_58_, 4);
v___x_60_ = l_Lean_Meta_RecursorInfo_numIndices(v_info_58_);
v___x_61_ = lean_nat_sub(v_majorPos_59_, v___x_60_);
lean_dec(v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_firstIndexPos___boxed(lean_object* v_info_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_Meta_RecursorInfo_firstIndexPos(v_info_62_);
lean_dec_ref(v_info_62_);
return v_res_63_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_RecursorInfo_isMinor(lean_object* v_info_64_, lean_object* v_pos_65_){
_start:
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = l_Lean_Meta_RecursorInfo_numParams(v_info_64_);
v___x_67_ = lean_nat_dec_le(v_pos_65_, v___x_66_);
lean_dec(v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_68_ = l_Lean_Meta_RecursorInfo_firstIndexPos(v_info_64_);
v___x_69_ = lean_nat_dec_le(v___x_68_, v_pos_65_);
lean_dec(v___x_68_);
if (v___x_69_ == 0)
{
uint8_t v___x_70_; 
v___x_70_ = 1;
return v___x_70_;
}
else
{
lean_object* v_majorPos_71_; uint8_t v___x_72_; 
v_majorPos_71_ = lean_ctor_get(v_info_64_, 4);
v___x_72_ = lean_nat_dec_le(v_pos_65_, v_majorPos_71_);
if (v___x_72_ == 0)
{
return v___x_69_;
}
else
{
return v___x_67_;
}
}
}
else
{
uint8_t v___x_73_; 
v___x_73_ = 0;
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_isMinor___boxed(lean_object* v_info_74_, lean_object* v_pos_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = l_Lean_Meta_RecursorInfo_isMinor(v_info_74_, v_pos_75_);
lean_dec(v_pos_75_);
lean_dec_ref(v_info_74_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numMinors(lean_object* v_info_78_){
_start:
{
lean_object* v_numArgs_79_; lean_object* v_majorPos_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v_r_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_numArgs_79_ = lean_ctor_get(v_info_78_, 3);
v_majorPos_80_ = lean_ctor_get(v_info_78_, 4);
v___x_81_ = l_Lean_Meta_RecursorInfo_numParams(v_info_78_);
v___x_82_ = lean_nat_sub(v_numArgs_79_, v___x_81_);
lean_dec(v___x_81_);
v___x_83_ = lean_unsigned_to_nat(1u);
v_r_84_ = lean_nat_sub(v___x_82_, v___x_83_);
lean_dec(v___x_82_);
v___x_85_ = lean_nat_add(v_majorPos_80_, v___x_83_);
v___x_86_ = l_Lean_Meta_RecursorInfo_firstIndexPos(v_info_78_);
v___x_87_ = lean_nat_sub(v___x_85_, v___x_86_);
lean_dec(v___x_86_);
lean_dec(v___x_85_);
v___x_88_ = lean_nat_sub(v_r_84_, v___x_87_);
lean_dec(v___x_87_);
lean_dec(v_r_84_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_numMinors___boxed(lean_object* v_info_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Meta_RecursorInfo_numMinors(v_info_89_);
lean_dec_ref(v_info_89_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_RecursorInfo_instToString___lam__0(lean_object* v___f_109_, lean_object* v___f_110_, lean_object* v___f_111_, lean_object* v___f_112_, lean_object* v_info_113_){
_start:
{
lean_object* v_recursorName_114_; lean_object* v_typeName_115_; lean_object* v_univLevelPos_116_; uint8_t v_depElim_117_; uint8_t v_recursive_118_; lean_object* v_numArgs_119_; lean_object* v_majorPos_120_; lean_object* v_paramsPos_121_; lean_object* v_indicesPos_122_; lean_object* v_produceMotive_123_; lean_object* v___x_124_; uint8_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___y_130_; lean_object* v___y_131_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___y_197_; 
v_recursorName_114_ = lean_ctor_get(v_info_113_, 0);
v_typeName_115_ = lean_ctor_get(v_info_113_, 1);
v_univLevelPos_116_ = lean_ctor_get(v_info_113_, 2);
v_depElim_117_ = lean_ctor_get_uint8(v_info_113_, sizeof(void*)*8);
v_recursive_118_ = lean_ctor_get_uint8(v_info_113_, sizeof(void*)*8 + 1);
v_numArgs_119_ = lean_ctor_get(v_info_113_, 3);
v_majorPos_120_ = lean_ctor_get(v_info_113_, 4);
lean_inc(v_majorPos_120_);
v_paramsPos_121_ = lean_ctor_get(v_info_113_, 5);
lean_inc(v_paramsPos_121_);
v_indicesPos_122_ = lean_ctor_get(v_info_113_, 6);
lean_inc(v_indicesPos_122_);
v_produceMotive_123_ = lean_ctor_get(v_info_113_, 7);
lean_inc(v_produceMotive_123_);
v___x_124_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__0));
v___x_125_ = 1;
lean_inc(v_recursorName_114_);
v___x_126_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_recursorName_114_, v___x_125_);
v___x_127_ = lean_string_append(v___x_124_, v___x_126_);
lean_dec_ref(v___x_126_);
v___x_128_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__1));
v___x_183_ = lean_string_append(v___x_127_, v___x_128_);
v___x_184_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__12));
v___x_185_ = lean_string_append(v___x_183_, v___x_184_);
lean_inc(v_typeName_115_);
v___x_186_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_typeName_115_, v___x_125_);
v___x_187_ = lean_string_append(v___x_185_, v___x_186_);
lean_dec_ref(v___x_186_);
v___x_188_ = lean_string_append(v___x_187_, v___x_128_);
v___x_189_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__13));
v___x_190_ = lean_string_append(v___x_188_, v___x_189_);
lean_inc(v_univLevelPos_116_);
v___x_191_ = l_List_toString___redArg(v___f_112_, v_univLevelPos_116_);
v___x_192_ = lean_string_append(v___x_190_, v___x_191_);
lean_dec_ref(v___x_191_);
v___x_193_ = lean_string_append(v___x_192_, v___x_128_);
v___x_194_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__14));
v___x_195_ = lean_string_append(v___x_193_, v___x_194_);
if (v_depElim_117_ == 0)
{
lean_object* v___x_204_; 
v___x_204_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__16));
v___y_197_ = v___x_204_;
goto v___jp_196_;
}
else
{
lean_object* v___x_205_; 
v___x_205_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__17));
v___y_197_ = v___x_205_;
goto v___jp_196_;
}
v___jp_129_:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_132_ = lean_string_append(v___y_130_, v___y_131_);
v___x_133_ = lean_string_append(v___x_132_, v___x_128_);
v___x_134_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__2));
v___x_135_ = lean_string_append(v___x_133_, v___x_134_);
lean_inc(v_numArgs_119_);
v___x_136_ = l_Nat_reprFast(v_numArgs_119_);
v___x_137_ = lean_string_append(v___x_135_, v___x_136_);
lean_dec_ref(v___x_136_);
v___x_138_ = lean_string_append(v___x_137_, v___x_128_);
v___x_139_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__3));
v___x_140_ = lean_string_append(v___x_138_, v___x_139_);
v___x_141_ = l_Lean_Meta_RecursorInfo_numParams(v_info_113_);
v___x_142_ = l_Nat_reprFast(v___x_141_);
v___x_143_ = lean_string_append(v___x_140_, v___x_142_);
v___x_144_ = lean_string_append(v___x_143_, v___x_128_);
v___x_145_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__4));
v___x_146_ = lean_string_append(v___x_144_, v___x_145_);
v___x_147_ = l_Lean_Meta_RecursorInfo_numIndices(v_info_113_);
v___x_148_ = l_Nat_reprFast(v___x_147_);
v___x_149_ = lean_string_append(v___x_146_, v___x_148_);
lean_dec_ref(v___x_148_);
v___x_150_ = lean_string_append(v___x_149_, v___x_128_);
v___x_151_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__5));
v___x_152_ = lean_string_append(v___x_150_, v___x_151_);
v___x_153_ = l_Lean_Meta_RecursorInfo_numMinors(v_info_113_);
lean_dec_ref(v_info_113_);
v___x_154_ = l_Nat_reprFast(v___x_153_);
v___x_155_ = lean_string_append(v___x_152_, v___x_154_);
lean_dec_ref(v___x_154_);
v___x_156_ = lean_string_append(v___x_155_, v___x_128_);
v___x_157_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__6));
v___x_158_ = lean_string_append(v___x_156_, v___x_157_);
v___x_159_ = l_Nat_reprFast(v_majorPos_120_);
v___x_160_ = lean_string_append(v___x_158_, v___x_159_);
lean_dec_ref(v___x_159_);
v___x_161_ = lean_string_append(v___x_160_, v___x_128_);
v___x_162_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__7));
v___x_163_ = lean_string_append(v___x_161_, v___x_162_);
v___x_164_ = lean_string_append(v___x_163_, v___x_142_);
lean_dec_ref(v___x_142_);
v___x_165_ = lean_string_append(v___x_164_, v___x_128_);
v___x_166_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__8));
v___x_167_ = lean_string_append(v___x_165_, v___x_166_);
v___x_168_ = l_List_toString___redArg(v___f_109_, v_paramsPos_121_);
v___x_169_ = lean_string_append(v___x_167_, v___x_168_);
lean_dec_ref(v___x_168_);
v___x_170_ = lean_string_append(v___x_169_, v___x_128_);
v___x_171_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__9));
v___x_172_ = lean_string_append(v___x_170_, v___x_171_);
v___x_173_ = l_List_toString___redArg(v___f_110_, v_indicesPos_122_);
v___x_174_ = lean_string_append(v___x_172_, v___x_173_);
lean_dec_ref(v___x_173_);
v___x_175_ = lean_string_append(v___x_174_, v___x_128_);
v___x_176_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__10));
v___x_177_ = lean_string_append(v___x_175_, v___x_176_);
v___x_178_ = l_List_toString___redArg(v___f_111_, v_produceMotive_123_);
v___x_179_ = lean_string_append(v___x_177_, v___x_178_);
lean_dec_ref(v___x_178_);
v___x_180_ = lean_string_append(v___x_179_, v___x_128_);
v___x_181_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__11));
v___x_182_ = lean_string_append(v___x_180_, v___x_181_);
return v___x_182_;
}
v___jp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_198_ = lean_string_append(v___x_195_, v___y_197_);
v___x_199_ = lean_string_append(v___x_198_, v___x_128_);
v___x_200_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__15));
v___x_201_ = lean_string_append(v___x_199_, v___x_200_);
if (v_recursive_118_ == 0)
{
lean_object* v___x_202_; 
v___x_202_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__16));
v___y_130_ = v___x_201_;
v___y_131_ = v___x_202_;
goto v___jp_129_;
}
else
{
lean_object* v___x_203_; 
v___x_203_ = ((lean_object*)(l_Lean_Meta_RecursorInfo_instToString___lam__0___closed__17));
v___y_130_ = v___x_201_;
v___y_131_ = v___x_203_;
goto v___jp_129_;
}
}
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_instMonadEIO___redArg();
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1(lean_object* v_msg_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v_toApplicative_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_290_; 
v___x_227_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__0);
v___x_228_ = l_StateRefT_x27_instMonad___redArg(v___x_227_);
v_toApplicative_229_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_290_ == 0)
{
lean_object* v_unused_291_; 
v_unused_291_ = lean_ctor_get(v___x_228_, 1);
lean_dec(v_unused_291_);
v___x_231_ = v___x_228_;
v_isShared_232_ = v_isSharedCheck_290_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_toApplicative_229_);
lean_dec(v___x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_290_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v_toFunctor_233_; lean_object* v_toSeq_234_; lean_object* v_toSeqLeft_235_; lean_object* v_toSeqRight_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_288_; 
v_toFunctor_233_ = lean_ctor_get(v_toApplicative_229_, 0);
v_toSeq_234_ = lean_ctor_get(v_toApplicative_229_, 2);
v_toSeqLeft_235_ = lean_ctor_get(v_toApplicative_229_, 3);
v_toSeqRight_236_ = lean_ctor_get(v_toApplicative_229_, 4);
v_isSharedCheck_288_ = !lean_is_exclusive(v_toApplicative_229_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; 
v_unused_289_ = lean_ctor_get(v_toApplicative_229_, 1);
lean_dec(v_unused_289_);
v___x_238_ = v_toApplicative_229_;
v_isShared_239_ = v_isSharedCheck_288_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_toSeqRight_236_);
lean_inc(v_toSeqLeft_235_);
lean_inc(v_toSeq_234_);
lean_inc(v_toFunctor_233_);
lean_dec(v_toApplicative_229_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_288_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___f_240_; lean_object* v___f_241_; lean_object* v___f_242_; lean_object* v___f_243_; lean_object* v___x_244_; lean_object* v___f_245_; lean_object* v___f_246_; lean_object* v___f_247_; lean_object* v___x_249_; 
v___f_240_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__1));
v___f_241_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_233_);
v___f_242_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_242_, 0, v_toFunctor_233_);
v___f_243_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_243_, 0, v_toFunctor_233_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v___f_242_);
lean_ctor_set(v___x_244_, 1, v___f_243_);
v___f_245_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_245_, 0, v_toSeqRight_236_);
v___f_246_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_246_, 0, v_toSeqLeft_235_);
v___f_247_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_247_, 0, v_toSeq_234_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 4, v___f_245_);
lean_ctor_set(v___x_238_, 3, v___f_246_);
lean_ctor_set(v___x_238_, 2, v___f_247_);
lean_ctor_set(v___x_238_, 1, v___f_240_);
lean_ctor_set(v___x_238_, 0, v___x_244_);
v___x_249_ = v___x_238_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___f_240_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v___f_247_);
lean_ctor_set(v_reuseFailAlloc_287_, 3, v___f_246_);
lean_ctor_set(v_reuseFailAlloc_287_, 4, v___f_245_);
v___x_249_ = v_reuseFailAlloc_287_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_251_; 
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v___f_241_);
lean_ctor_set(v___x_231_, 0, v___x_249_);
v___x_251_ = v___x_231_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_249_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___f_241_);
v___x_251_ = v_reuseFailAlloc_286_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; lean_object* v_toApplicative_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_284_; 
v___x_252_ = l_StateRefT_x27_instMonad___redArg(v___x_251_);
v_toApplicative_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_284_ == 0)
{
lean_object* v_unused_285_; 
v_unused_285_ = lean_ctor_get(v___x_252_, 1);
lean_dec(v_unused_285_);
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_284_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_toApplicative_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_284_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v_toFunctor_257_; lean_object* v_toSeq_258_; lean_object* v_toSeqLeft_259_; lean_object* v_toSeqRight_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_282_; 
v_toFunctor_257_ = lean_ctor_get(v_toApplicative_253_, 0);
v_toSeq_258_ = lean_ctor_get(v_toApplicative_253_, 2);
v_toSeqLeft_259_ = lean_ctor_get(v_toApplicative_253_, 3);
v_toSeqRight_260_ = lean_ctor_get(v_toApplicative_253_, 4);
v_isSharedCheck_282_ = !lean_is_exclusive(v_toApplicative_253_);
if (v_isSharedCheck_282_ == 0)
{
lean_object* v_unused_283_; 
v_unused_283_ = lean_ctor_get(v_toApplicative_253_, 1);
lean_dec(v_unused_283_);
v___x_262_ = v_toApplicative_253_;
v_isShared_263_ = v_isSharedCheck_282_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_toSeqRight_260_);
lean_inc(v_toSeqLeft_259_);
lean_inc(v_toSeq_258_);
lean_inc(v_toFunctor_257_);
lean_dec(v_toApplicative_253_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_282_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___f_264_; lean_object* v___f_265_; lean_object* v___f_266_; lean_object* v___f_267_; lean_object* v___x_268_; lean_object* v___f_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___x_273_; 
v___f_264_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__3));
v___f_265_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_257_);
v___f_266_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_266_, 0, v_toFunctor_257_);
v___f_267_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_267_, 0, v_toFunctor_257_);
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___f_266_);
lean_ctor_set(v___x_268_, 1, v___f_267_);
v___f_269_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_269_, 0, v_toSeqRight_260_);
v___f_270_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_270_, 0, v_toSeqLeft_259_);
v___f_271_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_271_, 0, v_toSeq_258_);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 4, v___f_269_);
lean_ctor_set(v___x_262_, 3, v___f_270_);
lean_ctor_set(v___x_262_, 2, v___f_271_);
lean_ctor_set(v___x_262_, 1, v___f_264_);
lean_ctor_set(v___x_262_, 0, v___x_268_);
v___x_273_ = v___x_262_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_268_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v___f_264_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v___f_271_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v___f_270_);
lean_ctor_set(v_reuseFailAlloc_281_, 4, v___f_269_);
v___x_273_ = v_reuseFailAlloc_281_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
lean_object* v___x_275_; 
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 1, v___f_265_);
lean_ctor_set(v___x_255_, 0, v___x_273_);
v___x_275_ = v___x_255_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v___f_265_);
v___x_275_ = v_reuseFailAlloc_280_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_2967__overap_278_; lean_object* v___x_279_; 
v___x_276_ = lean_box(0);
v___x_277_ = l_instInhabitedOfMonad___redArg(v___x_275_, v___x_276_);
v___x_2967__overap_278_ = lean_panic_fn_borrowed(v___x_277_, v_msg_221_);
lean_dec(v___x_277_);
lean_inc(v___y_225_);
lean_inc_ref(v___y_224_);
lean_inc(v___y_223_);
lean_inc_ref(v___y_222_);
v___x_279_ = lean_apply_5(v___x_2967__overap_278_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, lean_box(0));
return v___x_279_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1___boxed(lean_object* v_msg_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1(v_msg_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0_spec__1(lean_object* v_msgData_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_){
_start:
{
lean_object* v___x_305_; lean_object* v_env_306_; uint8_t v___x_307_; lean_object* v_env_308_; lean_object* v___x_309_; lean_object* v_toCold_310_; lean_object* v_mctx_311_; lean_object* v_lctx_312_; lean_object* v_options_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_305_ = lean_st_ref_get(v___y_303_);
v_env_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc_ref(v_env_306_);
lean_dec(v___x_305_);
v___x_307_ = 0;
v_env_308_ = l_Lean_Environment_setRecordingDeps(v_env_306_, v___x_307_);
v___x_309_ = lean_st_ref_get(v___y_301_);
v_toCold_310_ = lean_ctor_get(v___y_302_, 0);
v_mctx_311_ = lean_ctor_get(v___x_309_, 0);
lean_inc_ref(v_mctx_311_);
lean_dec(v___x_309_);
v_lctx_312_ = lean_ctor_get(v___y_300_, 2);
v_options_313_ = lean_ctor_get(v_toCold_310_, 2);
lean_inc_ref(v_options_313_);
lean_inc_ref(v_lctx_312_);
v___x_314_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_314_, 0, v_env_308_);
lean_ctor_set(v___x_314_, 1, v_mctx_311_);
lean_ctor_set(v___x_314_, 2, v_lctx_312_);
lean_ctor_set(v___x_314_, 3, v_options_313_);
v___x_315_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
lean_ctor_set(v___x_315_, 1, v_msgData_299_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0_spec__1(v_msgData_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(lean_object* v_msg_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v_ref_330_; lean_object* v___x_331_; lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_340_; 
v_ref_330_ = lean_ctor_get(v___y_327_, 2);
v___x_331_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0_spec__1(v_msg_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_340_ == 0)
{
v___x_334_ = v___x_331_;
v_isShared_335_ = v_isSharedCheck_340_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_340_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_338_; 
lean_inc(v_ref_330_);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v_ref_330_);
lean_ctor_set(v___x_336_, 1, v_a_332_);
if (v_isShared_335_ == 0)
{
lean_ctor_set_tag(v___x_334_, 1);
lean_ctor_set(v___x_334_, 0, v___x_336_);
v___x_338_ = v___x_334_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v___x_336_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_msg_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v_msg_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
lean_dec(v___y_345_);
lean_dec_ref(v___y_344_);
lean_dec(v___y_343_);
lean_dec_ref(v___y_342_);
return v_res_347_;
}
}
static lean_object* _init_l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__0));
v___x_350_ = l_Lean_stringToMessageData(v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__3(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__2));
v___x_353_ = l_Lean_stringToMessageData(v___x_352_);
return v___x_353_;
}
}
static lean_object* _init_l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__7(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_357_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__6));
v___x_358_ = lean_unsigned_to_nat(11u);
v___x_359_ = lean_unsigned_to_nat(129u);
v___x_360_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__5));
v___x_361_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__4));
v___x_362_ = l_mkPanicMessageWithDecl(v___x_361_, v___x_360_, v___x_359_, v___x_358_, v___x_357_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0(lean_object* v_constName_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v___x_377_; lean_object* v_env_378_; uint8_t v___x_379_; lean_object* v___x_380_; 
v___x_377_ = lean_st_ref_get(v___y_367_);
v_env_378_ = lean_ctor_get(v___x_377_, 0);
lean_inc_ref(v_env_378_);
lean_dec(v___x_377_);
v___x_379_ = 0;
lean_inc(v_constName_363_);
v___x_380_ = l_Lean_Environment_findAsync_x3f(v_env_378_, v_constName_363_, v___x_379_);
if (lean_obj_tag(v___x_380_) == 1)
{
lean_object* v_val_381_; uint8_t v_kind_382_; 
v_val_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_val_381_);
lean_dec_ref_known(v___x_380_, 1);
v_kind_382_ = lean_ctor_get_uint8(v_val_381_, sizeof(void*)*3);
if (v_kind_382_ == 7)
{
lean_object* v___x_383_; 
v___x_383_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_381_);
if (lean_obj_tag(v___x_383_) == 7)
{
lean_object* v_val_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_dec(v_constName_363_);
v_val_384_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_383_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_val_384_);
lean_dec(v___x_383_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
lean_ctor_set_tag(v___x_386_, 0);
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_val_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
else
{
lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec_ref(v___x_383_);
v___x_392_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__7, &l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__7_once, _init_l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__7);
v___x_393_ = l_panic___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__1(v___x_392_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_402_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_402_ == 0)
{
v___x_396_ = v___x_393_;
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
if (lean_obj_tag(v_a_394_) == 0)
{
lean_del_object(v___x_396_);
goto v___jp_369_;
}
else
{
lean_object* v_val_398_; lean_object* v___x_400_; 
lean_dec(v_constName_363_);
v_val_398_ = lean_ctor_get(v_a_394_, 0);
lean_inc(v_val_398_);
lean_dec_ref_known(v_a_394_, 1);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v_val_398_);
v___x_400_ = v___x_396_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_val_398_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
lean_dec(v_constName_363_);
v_a_403_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_393_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_393_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
}
}
else
{
lean_dec(v_val_381_);
goto v___jp_369_;
}
}
else
{
lean_dec(v___x_380_);
goto v___jp_369_;
}
v___jp_369_:
{
lean_object* v___x_370_; uint8_t v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_370_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1, &l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1_once, _init_l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1);
v___x_371_ = 0;
v___x_372_ = l_Lean_MessageData_ofConstName(v_constName_363_, v___x_371_);
v___x_373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_373_, 0, v___x_370_);
lean_ctor_set(v___x_373_, 1, v___x_372_);
v___x_374_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__3, &l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__3_once, _init_l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__3);
v___x_375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_375_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
return v___x_376_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___boxed(lean_object* v_constName_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0(v_constName_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f(lean_object* v_declName_418_, lean_object* v_majorPos_x3f_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
lean_object* v___y_426_; lean_object* v___y_427_; 
if (lean_obj_tag(v_majorPos_x3f_419_) == 0)
{
lean_object* v___x_431_; lean_object* v_env_432_; uint8_t v___x_433_; 
v___x_431_ = lean_st_ref_get(v_a_423_);
v_env_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc_ref(v_env_432_);
lean_dec(v___x_431_);
lean_inc(v_declName_418_);
v___x_433_ = l_Lean_isAuxRecursor(v_env_432_, v_declName_418_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; 
lean_dec(v_declName_418_);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v_majorPos_x3f_419_);
return v___x_434_;
}
else
{
if (lean_obj_tag(v_declName_418_) == 1)
{
lean_object* v_pre_435_; lean_object* v_str_436_; lean_object* v___x_456_; uint8_t v___x_457_; 
v_pre_435_ = lean_ctor_get(v_declName_418_, 0);
lean_inc(v_pre_435_);
v_str_436_ = lean_ctor_get(v_declName_418_, 1);
lean_inc_ref(v_str_436_);
lean_dec_ref_known(v_declName_418_, 2);
v___x_456_ = l_Lean_recOnSuffix;
v___x_457_ = lean_string_dec_eq(v_str_436_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = l_Lean_casesOnSuffix;
v___x_459_ = lean_string_dec_eq(v_str_436_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_460_ = l_Lean_brecOnSuffix;
v___x_461_ = lean_string_dec_eq(v_str_436_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
lean_dec_ref(v_str_436_);
lean_dec(v_pre_435_);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v_majorPos_x3f_419_);
return v___x_462_;
}
else
{
goto v___jp_437_;
}
}
else
{
goto v___jp_437_;
}
}
else
{
goto v___jp_437_;
}
v___jp_437_:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = l_Lean_mkRecName(v_pre_435_);
v___x_439_ = l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0(v___x_438_, v_a_420_, v_a_421_, v_a_422_, v_a_423_);
if (lean_obj_tag(v___x_439_) == 0)
{
lean_object* v_a_440_; lean_object* v_numParams_441_; lean_object* v_numIndices_442_; lean_object* v_numMotives_443_; lean_object* v___x_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
v_a_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_a_440_);
lean_dec_ref_known(v___x_439_, 1);
v_numParams_441_ = lean_ctor_get(v_a_440_, 2);
lean_inc(v_numParams_441_);
v_numIndices_442_ = lean_ctor_get(v_a_440_, 3);
lean_inc(v_numIndices_442_);
v_numMotives_443_ = lean_ctor_get(v_a_440_, 4);
lean_inc(v_numMotives_443_);
lean_dec(v_a_440_);
v___x_444_ = lean_nat_add(v_numParams_441_, v_numIndices_442_);
lean_dec(v_numIndices_442_);
lean_dec(v_numParams_441_);
v___x_445_ = l_Lean_casesOnSuffix;
v___x_446_ = lean_string_dec_eq(v_str_436_, v___x_445_);
lean_dec_ref(v_str_436_);
if (v___x_446_ == 0)
{
v___y_426_ = v___x_444_;
v___y_427_ = v_numMotives_443_;
goto v___jp_425_;
}
else
{
lean_object* v___x_447_; 
lean_dec(v_numMotives_443_);
v___x_447_ = lean_unsigned_to_nat(1u);
v___y_426_ = v___x_444_;
v___y_427_ = v___x_447_;
goto v___jp_425_;
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec_ref(v_str_436_);
v_a_448_ = lean_ctor_get(v___x_439_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_439_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_439_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_439_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
else
{
lean_object* v___x_463_; 
lean_dec(v_declName_418_);
v___x_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_463_, 0, v_majorPos_x3f_419_);
return v___x_463_;
}
}
}
else
{
lean_object* v___x_464_; 
lean_dec(v_declName_418_);
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v_majorPos_x3f_419_);
return v___x_464_;
}
v___jp_425_:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_nat_add(v___y_426_, v___y_427_);
lean_dec(v___y_427_);
lean_dec(v___y_426_);
v___x_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
v___x_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
return v___x_430_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f___boxed(lean_object* v_declName_465_, lean_object* v_majorPos_x3f_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f(v_declName_465_, v_majorPos_x3f_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
lean_dec(v_a_470_);
lean_dec_ref(v_a_469_);
lean_dec(v_a_468_);
lean_dec_ref(v_a_467_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0(lean_object* v_00_u03b1_473_, lean_object* v_msg_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v_msg_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b1_481_, lean_object* v_msg_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0(v_00_u03b1_481_, v_msg_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
return v_res_488_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive_spec__0(uint8_t v___x_489_, lean_object* v_as_490_, size_t v_i_491_, size_t v_stop_492_){
_start:
{
uint8_t v___x_497_; 
v___x_497_ = lean_usize_dec_eq(v_i_491_, v_stop_492_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = lean_array_uget_borrowed(v_as_490_, v_i_491_);
v___x_499_ = l_Lean_Expr_isFVar(v___x_498_);
if (v___x_499_ == 0)
{
if (v___x_489_ == 0)
{
goto v___jp_493_;
}
else
{
return v___x_489_;
}
}
else
{
goto v___jp_493_;
}
}
else
{
uint8_t v___x_500_; 
v___x_500_ = 0;
return v___x_500_;
}
v___jp_493_:
{
size_t v___x_494_; size_t v___x_495_; 
v___x_494_ = ((size_t)1ULL);
v___x_495_ = lean_usize_add(v_i_491_, v___x_494_);
v_i_491_ = v___x_495_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive_spec__0___boxed(lean_object* v___x_501_, lean_object* v_as_502_, lean_object* v_i_503_, lean_object* v_stop_504_){
_start:
{
uint8_t v___x_500__boxed_505_; size_t v_i_boxed_506_; size_t v_stop_boxed_507_; uint8_t v_res_508_; lean_object* v_r_509_; 
v___x_500__boxed_505_ = lean_unbox(v___x_501_);
v_i_boxed_506_ = lean_unbox_usize(v_i_503_);
lean_dec(v_i_503_);
v_stop_boxed_507_ = lean_unbox_usize(v_stop_504_);
lean_dec(v_stop_504_);
v_res_508_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive_spec__0(v___x_500__boxed_505_, v_as_502_, v_i_boxed_506_, v_stop_boxed_507_);
lean_dec_ref(v_as_502_);
v_r_509_ = lean_box(v_res_508_);
return v_r_509_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__0));
v___x_512_ = l_Lean_stringToMessageData(v___x_511_);
return v___x_512_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__3(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__2));
v___x_515_ = l_Lean_stringToMessageData(v___x_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive(lean_object* v_declName_516_, lean_object* v_motive_517_, lean_object* v_motiveArgs_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
uint8_t v___x_535_; 
v___x_535_ = l_Lean_Expr_isFVar(v_motive_517_);
if (v___x_535_ == 0)
{
goto v___jp_524_;
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = lean_array_get_size(v_motiveArgs_518_);
v___x_538_ = lean_nat_dec_lt(v___x_536_, v___x_537_);
if (v___x_538_ == 0)
{
lean_dec(v_declName_516_);
goto v___jp_532_;
}
else
{
if (v___x_538_ == 0)
{
lean_dec(v_declName_516_);
goto v___jp_532_;
}
else
{
size_t v___x_539_; size_t v___x_540_; uint8_t v___x_541_; 
v___x_539_ = ((size_t)0ULL);
v___x_540_ = lean_usize_of_nat(v___x_537_);
v___x_541_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive_spec__0(v___x_535_, v_motiveArgs_518_, v___x_539_, v___x_540_);
if (v___x_541_ == 0)
{
lean_dec(v_declName_516_);
goto v___jp_532_;
}
else
{
goto v___jp_524_;
}
}
}
}
v___jp_524_:
{
lean_object* v___x_525_; uint8_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_525_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1);
v___x_526_ = 0;
v___x_527_ = l_Lean_MessageData_ofConstName(v_declName_516_, v___x_526_);
v___x_528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_525_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__3, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__3_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__3);
v___x_530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_530_, v_a_519_, v_a_520_, v_a_521_, v_a_522_);
return v___x_531_;
}
v___jp_532_:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_box(0);
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___boxed(lean_object* v_declName_542_, lean_object* v_motive_543_, lean_object* v_motiveArgs_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive(v_declName_542_, v_motive_543_, v_motiveArgs_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec_ref(v_motiveArgs_544_);
lean_dec_ref(v_motive_543_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getNumParams(lean_object* v_xs_551_, lean_object* v_motive_552_, lean_object* v_i_553_){
_start:
{
lean_object* v___x_554_; uint8_t v___x_555_; 
v___x_554_ = lean_array_get_size(v_xs_551_);
v___x_555_ = lean_nat_dec_lt(v_i_553_, v___x_554_);
if (v___x_555_ == 0)
{
return v_i_553_;
}
else
{
lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_556_ = lean_array_fget_borrowed(v_xs_551_, v_i_553_);
v___x_557_ = lean_expr_eqv(v_motive_552_, v___x_556_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_558_ = lean_unsigned_to_nat(1u);
v___x_559_ = lean_nat_add(v_i_553_, v___x_558_);
lean_dec(v_i_553_);
v_i_553_ = v___x_559_;
goto _start;
}
else
{
return v_i_553_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getNumParams___boxed(lean_object* v_xs_561_, lean_object* v_motive_562_, lean_object* v_i_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getNumParams(v_xs_561_, v_motive_562_, v_i_563_);
lean_dec_ref(v_motive_562_);
lean_dec_ref(v_xs_561_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0_spec__1(lean_object* v_xs_565_, lean_object* v_v_566_, lean_object* v_i_567_){
_start:
{
lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_568_ = lean_array_get_size(v_xs_565_);
v___x_569_ = lean_nat_dec_lt(v_i_567_, v___x_568_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
lean_dec(v_i_567_);
v___x_570_ = lean_box(0);
return v___x_570_;
}
else
{
lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_571_ = lean_array_fget_borrowed(v_xs_565_, v_i_567_);
v___x_572_ = lean_expr_eqv(v___x_571_, v_v_566_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = lean_unsigned_to_nat(1u);
v___x_574_ = lean_nat_add(v_i_567_, v___x_573_);
lean_dec(v_i_567_);
v_i_567_ = v___x_574_;
goto _start;
}
else
{
lean_object* v___x_576_; 
v___x_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_576_, 0, v_i_567_);
return v___x_576_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_577_, lean_object* v_v_578_, lean_object* v_i_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0_spec__1(v_xs_577_, v_v_578_, v_i_579_);
lean_dec_ref(v_v_578_);
lean_dec_ref(v_xs_577_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0(lean_object* v_xs_581_, lean_object* v_v_582_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_584_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0_spec__1(v_xs_581_, v_v_582_, v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0___boxed(lean_object* v_xs_585_, lean_object* v_v_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0(v_xs_585_, v_v_586_);
lean_dec_ref(v_v_586_);
lean_dec_ref(v_xs_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0(lean_object* v_xs_588_, lean_object* v_v_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0_spec__0(v_xs_588_, v_v_589_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v___x_591_; 
v___x_591_ = lean_box(0);
return v___x_591_;
}
else
{
lean_object* v_val_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
v_val_592_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_590_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_val_592_);
lean_dec(v___x_590_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_val_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0___boxed(lean_object* v_xs_600_, lean_object* v_v_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0(v_xs_600_, v_v_601_);
lean_dec_ref(v_v_601_);
lean_dec_ref(v_xs_600_);
return v_res_602_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1_spec__2(lean_object* v_a_603_, lean_object* v_as_604_, size_t v_i_605_, size_t v_stop_606_){
_start:
{
uint8_t v___x_607_; 
v___x_607_ = lean_usize_dec_eq(v_i_605_, v_stop_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_608_ = lean_array_uget_borrowed(v_as_604_, v_i_605_);
v___x_609_ = lean_expr_eqv(v_a_603_, v___x_608_);
if (v___x_609_ == 0)
{
size_t v___x_610_; size_t v___x_611_; 
v___x_610_ = ((size_t)1ULL);
v___x_611_ = lean_usize_add(v_i_605_, v___x_610_);
v_i_605_ = v___x_611_;
goto _start;
}
else
{
return v___x_609_;
}
}
else
{
uint8_t v___x_613_; 
v___x_613_ = 0;
return v___x_613_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1_spec__2___boxed(lean_object* v_a_614_, lean_object* v_as_615_, lean_object* v_i_616_, lean_object* v_stop_617_){
_start:
{
size_t v_i_boxed_618_; size_t v_stop_boxed_619_; uint8_t v_res_620_; lean_object* v_r_621_; 
v_i_boxed_618_ = lean_unbox_usize(v_i_616_);
lean_dec(v_i_616_);
v_stop_boxed_619_ = lean_unbox_usize(v_stop_617_);
lean_dec(v_stop_617_);
v_res_620_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1_spec__2(v_a_614_, v_as_615_, v_i_boxed_618_, v_stop_boxed_619_);
lean_dec_ref(v_as_615_);
lean_dec_ref(v_a_614_);
v_r_621_ = lean_box(v_res_620_);
return v_r_621_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1(lean_object* v_as_622_, lean_object* v_a_623_){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_624_ = lean_unsigned_to_nat(0u);
v___x_625_ = lean_array_get_size(v_as_622_);
v___x_626_ = lean_nat_dec_lt(v___x_624_, v___x_625_);
if (v___x_626_ == 0)
{
return v___x_626_;
}
else
{
size_t v___x_627_; size_t v___x_628_; uint8_t v___x_629_; 
v___x_627_ = ((size_t)0ULL);
v___x_628_ = lean_usize_of_nat(v___x_625_);
v___x_629_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1_spec__2(v_a_623_, v_as_622_, v___x_627_, v___x_628_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1___boxed(lean_object* v_as_630_, lean_object* v_a_631_){
_start:
{
uint8_t v_res_632_; lean_object* v_r_633_; 
v_res_632_ = l_Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1(v_as_630_, v_a_631_);
lean_dec_ref(v_a_631_);
lean_dec_ref(v_as_630_);
v_r_633_ = lean_box(v_res_632_);
return v_r_633_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__1(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__0));
v___x_636_ = l_Lean_stringToMessageData(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__3(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__2));
v___x_639_ = l_Lean_stringToMessageData(v___x_638_);
return v___x_639_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__5(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__4));
v___x_642_ = l_Lean_stringToMessageData(v___x_641_);
return v___x_642_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__7(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__6));
v___x_645_ = l_Lean_stringToMessageData(v___x_644_);
return v___x_645_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__9(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__8));
v___x_648_ = l_Lean_stringToMessageData(v___x_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim(lean_object* v_declName_649_, lean_object* v_majorPos_x3f_650_, lean_object* v_xs_651_, lean_object* v_motiveArgs_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_){
_start:
{
if (lean_obj_tag(v_majorPos_x3f_650_) == 0)
{
lean_object* v___x_658_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_658_ = l_Lean_instInhabitedExpr;
v___x_688_ = lean_array_get_size(v_motiveArgs_652_);
v___x_689_ = lean_unsigned_to_nat(0u);
v___x_690_ = lean_nat_dec_eq(v___x_688_, v___x_689_);
if (v___x_690_ == 0)
{
v___y_660_ = v_a_653_;
v___y_661_ = v_a_654_;
v___y_662_ = v_a_655_;
v___y_663_ = v_a_656_;
goto v___jp_659_;
}
else
{
lean_object* v___x_691_; uint8_t v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v___x_691_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__3, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__3_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__3);
v___x_692_ = 0;
v___x_693_ = l_Lean_MessageData_ofConstName(v_declName_649_, v___x_692_);
v___x_694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_691_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v___x_695_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__5, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__5_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__5);
v___x_696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_694_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_696_, v_a_653_, v_a_654_, v_a_655_, v_a_656_);
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
v___jp_659_:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v_major_667_; lean_object* v___x_668_; 
v___x_664_ = lean_array_get_size(v_motiveArgs_652_);
v___x_665_ = lean_unsigned_to_nat(1u);
v___x_666_ = lean_nat_sub(v___x_664_, v___x_665_);
v_major_667_ = lean_array_get_borrowed(v___x_658_, v_motiveArgs_652_, v___x_666_);
lean_dec(v___x_666_);
v___x_668_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__0(v_xs_651_, v_major_667_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v___x_669_; uint8_t v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_669_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__1);
v___x_670_ = 0;
v___x_671_ = l_Lean_MessageData_ofConstName(v_declName_649_, v___x_670_);
v___x_672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_669_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
v___x_673_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1, &l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1_once, _init_l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1);
v___x_674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_672_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v___x_675_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_674_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
return v___x_675_;
}
else
{
lean_object* v_val_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_687_; 
lean_dec(v_declName_649_);
v_val_676_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_687_ == 0)
{
v___x_678_ = v___x_668_;
v_isShared_679_ = v_isSharedCheck_687_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_val_676_);
lean_dec(v___x_668_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_687_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
uint8_t v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_685_; 
v___x_680_ = 1;
v___x_681_ = lean_box(v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v_val_676_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
lean_inc(v_major_667_);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v_major_667_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
if (v_isShared_679_ == 0)
{
lean_ctor_set_tag(v___x_678_, 0);
lean_ctor_set(v___x_678_, 0, v___x_683_);
v___x_685_ = v___x_678_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
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
else
{
lean_object* v_val_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_730_; 
lean_dec(v_declName_649_);
v_val_706_ = lean_ctor_get(v_majorPos_x3f_650_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v_majorPos_x3f_650_);
if (v_isSharedCheck_730_ == 0)
{
v___x_708_ = v_majorPos_x3f_650_;
v_isShared_709_ = v_isSharedCheck_730_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_val_706_);
lean_dec(v_majorPos_x3f_650_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_730_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_710_ = lean_array_get_size(v_xs_651_);
v___x_711_ = lean_nat_dec_lt(v_val_706_, v___x_710_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
lean_dec(v_val_706_);
v___x_712_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__7, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__7_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__7);
v___x_713_ = l_Nat_reprFast(v___x_710_);
if (v_isShared_709_ == 0)
{
lean_ctor_set_tag(v___x_708_, 3);
lean_ctor_set(v___x_708_, 0, v___x_713_);
v___x_715_ = v___x_708_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_713_);
v___x_715_ = v_reuseFailAlloc_721_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_716_ = l_Lean_MessageData_ofFormat(v___x_715_);
v___x_717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_712_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v___x_718_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__9, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__9_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___closed__9);
v___x_719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_717_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_719_, v_a_653_, v_a_654_, v_a_655_, v_a_656_);
return v___x_720_;
}
}
else
{
lean_object* v_major_722_; uint8_t v_depElim_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; 
v_major_722_ = lean_array_fget_borrowed(v_xs_651_, v_val_706_);
v_depElim_723_ = l_Array_contains___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim_spec__1(v_motiveArgs_652_, v_major_722_);
v___x_724_ = lean_box(v_depElim_723_);
v___x_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_725_, 0, v_val_706_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
lean_inc(v_major_722_);
v___x_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_726_, 0, v_major_722_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
if (v_isShared_709_ == 0)
{
lean_ctor_set_tag(v___x_708_, 0);
lean_ctor_set(v___x_708_, 0, v___x_726_);
v___x_728_ = v___x_708_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim___boxed(lean_object* v_declName_731_, lean_object* v_majorPos_x3f_732_, lean_object* v_xs_733_, lean_object* v_motiveArgs_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim(v_declName_731_, v_majorPos_x3f_732_, v_xs_733_, v_motiveArgs_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
lean_dec(v_a_738_);
lean_dec_ref(v_a_737_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec_ref(v_motiveArgs_734_);
lean_dec_ref(v_xs_733_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__0(lean_object* v___x_741_, lean_object* v_as_742_, size_t v_sz_743_, size_t v_i_744_, lean_object* v_b_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_){
_start:
{
uint8_t v___x_751_; 
v___x_751_ = lean_usize_dec_lt(v_i_744_, v_sz_743_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; 
lean_dec_ref(v___x_741_);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v_b_745_);
return v___x_752_;
}
else
{
lean_object* v_snd_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_790_; 
v_snd_753_ = lean_ctor_get(v_b_745_, 1);
v_isSharedCheck_790_ = !lean_is_exclusive(v_b_745_);
if (v_isSharedCheck_790_ == 0)
{
lean_object* v_unused_791_; 
v_unused_791_ = lean_ctor_get(v_b_745_, 0);
lean_dec(v_unused_791_);
v___x_755_ = v_b_745_;
v_isShared_756_ = v_isSharedCheck_790_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_snd_753_);
lean_dec(v_b_745_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_790_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v_a_758_; lean_object* v___x_759_; 
v___x_757_ = lean_box(0);
v_a_758_ = lean_array_uget_borrowed(v_as_742_, v_i_744_);
lean_inc_ref(v___x_741_);
lean_inc(v_a_758_);
v___x_759_ = l_Lean_Meta_isExprDefEq(v_a_758_, v___x_741_, v___y_746_, v___y_747_, v___y_748_, v___y_749_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_781_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_781_ == 0)
{
v___x_762_ = v___x_759_;
v_isShared_763_ = v_isSharedCheck_781_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_759_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_781_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
uint8_t v___x_764_; 
v___x_764_ = lean_unbox(v_a_760_);
lean_dec(v_a_760_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_768_; 
lean_del_object(v___x_762_);
v___x_765_ = lean_unsigned_to_nat(1u);
v___x_766_ = lean_nat_add(v_snd_753_, v___x_765_);
lean_dec(v_snd_753_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 1, v___x_766_);
lean_ctor_set(v___x_755_, 0, v___x_757_);
v___x_768_ = v___x_755_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v___x_766_);
v___x_768_ = v_reuseFailAlloc_772_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
size_t v___x_769_; size_t v___x_770_; 
v___x_769_ = ((size_t)1ULL);
v___x_770_ = lean_usize_add(v_i_744_, v___x_769_);
v_i_744_ = v___x_770_;
v_b_745_ = v___x_768_;
goto _start;
}
}
else
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
lean_dec_ref(v___x_741_);
lean_inc(v_snd_753_);
v___x_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_773_, 0, v_snd_753_);
v___x_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_774_, 0, v___x_773_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v___x_774_);
v___x_776_ = v___x_755_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_774_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v_snd_753_);
v___x_776_ = v_reuseFailAlloc_780_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_778_; 
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 0, v___x_776_);
v___x_778_ = v___x_762_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_del_object(v___x_755_);
lean_dec(v_snd_753_);
lean_dec_ref(v___x_741_);
v_a_782_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_759_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_759_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__0___boxed(lean_object* v___x_792_, lean_object* v_as_793_, lean_object* v_sz_794_, lean_object* v_i_795_, lean_object* v_b_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
size_t v_sz_boxed_802_; size_t v_i_boxed_803_; lean_object* v_res_804_; 
v_sz_boxed_802_ = lean_unbox_usize(v_sz_794_);
lean_dec(v_sz_794_);
v_i_boxed_803_ = lean_unbox_usize(v_i_795_);
lean_dec(v_i_795_);
v_res_804_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__0(v___x_792_, v_as_793_, v_sz_boxed_802_, v_i_boxed_803_, v_b_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec_ref(v_as_793_);
return v_res_804_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__0));
v___x_807_ = l_Lean_stringToMessageData(v___x_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg(lean_object* v_upperBound_811_, lean_object* v_xs_812_, lean_object* v_declName_813_, lean_object* v_Iargs_814_, lean_object* v_a_815_, lean_object* v_b_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_a_823_; uint8_t v___x_827_; 
v___x_827_ = lean_nat_dec_lt(v_a_815_, v_upperBound_811_);
if (v___x_827_ == 0)
{
lean_object* v___x_828_; 
lean_dec(v_a_815_);
lean_dec(v_declName_813_);
v___x_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_828_, 0, v_b_816_);
return v___x_828_;
}
else
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v_a_832_; lean_object* v___x_861_; lean_object* v___x_862_; size_t v_sz_863_; size_t v___x_864_; lean_object* v___x_865_; 
v___x_829_ = l_Lean_instInhabitedExpr;
v___x_830_ = lean_array_get_borrowed(v___x_829_, v_xs_812_, v_a_815_);
v___x_861_ = lean_box(0);
v___x_862_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__2));
v_sz_863_ = lean_array_size(v_Iargs_814_);
v___x_864_ = ((size_t)0ULL);
lean_inc(v___x_830_);
v___x_865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__0(v___x_830_, v_Iargs_814_, v_sz_863_, v___x_864_, v___x_862_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v_fst_867_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v_fst_867_ = lean_ctor_get(v_a_866_, 0);
lean_inc(v_fst_867_);
lean_dec(v_a_866_);
if (lean_obj_tag(v_fst_867_) == 0)
{
v_a_832_ = v___x_861_;
goto v___jp_831_;
}
else
{
lean_object* v_val_868_; 
v_val_868_ = lean_ctor_get(v_fst_867_, 0);
lean_inc(v_val_868_);
lean_dec_ref_known(v_fst_867_, 1);
if (lean_obj_tag(v_val_868_) == 0)
{
v_a_832_ = v_val_868_;
goto v___jp_831_;
}
else
{
lean_object* v___x_869_; 
v___x_869_ = lean_array_push(v_b_816_, v_val_868_);
v_a_823_ = v___x_869_;
goto v___jp_822_;
}
}
}
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
lean_dec_ref(v_b_816_);
lean_dec(v_a_815_);
lean_dec(v_declName_813_);
v_a_870_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_865_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_865_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
v___jp_831_:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = l_Lean_Expr_fvarId_x21(v___x_830_);
v___x_834_ = l_Lean_FVarId_getDecl___redArg(v___x_833_, v___y_817_, v___y_819_, v___y_820_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; uint8_t v___x_836_; uint8_t v___x_837_; 
v_a_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_835_);
lean_dec_ref_known(v___x_834_, 1);
v___x_836_ = l_Lean_LocalDecl_binderInfo(v_a_835_);
lean_dec(v_a_835_);
v___x_837_ = l_Lean_BinderInfo_isInstImplicit(v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
lean_dec(v_a_832_);
v___x_838_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1);
lean_inc(v_declName_813_);
v___x_839_ = l_Lean_MessageData_ofConstName(v_declName_813_, v___x_837_);
v___x_840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_838_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
v___x_841_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__1);
v___x_842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_840_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
v___x_843_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_842_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
if (lean_obj_tag(v___x_843_) == 0)
{
lean_dec_ref_known(v___x_843_, 1);
v_a_823_ = v_b_816_;
goto v___jp_822_;
}
else
{
lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
lean_dec_ref(v_b_816_);
lean_dec(v_a_815_);
lean_dec(v_declName_813_);
v_a_844_ = lean_ctor_get(v___x_843_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_851_ == 0)
{
v___x_846_ = v___x_843_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_843_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_a_844_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
}
else
{
lean_object* v___x_852_; 
v___x_852_ = lean_array_push(v_b_816_, v_a_832_);
v_a_823_ = v___x_852_;
goto v___jp_822_;
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_860_; 
lean_dec(v_a_832_);
lean_dec_ref(v_b_816_);
lean_dec(v_a_815_);
lean_dec(v_declName_813_);
v_a_853_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_860_ == 0)
{
v___x_855_ = v___x_834_;
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_834_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_853_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
v___jp_822_:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(1u);
v___x_825_ = lean_nat_add(v_a_815_, v___x_824_);
lean_dec(v_a_815_);
v_a_815_ = v___x_825_;
v_b_816_ = v_a_823_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___boxed(lean_object* v_upperBound_878_, lean_object* v_xs_879_, lean_object* v_declName_880_, lean_object* v_Iargs_881_, lean_object* v_a_882_, lean_object* v_b_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg(v_upperBound_878_, v_xs_879_, v_declName_880_, v_Iargs_881_, v_a_882_, v_b_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec_ref(v_Iargs_881_);
lean_dec_ref(v_xs_879_);
lean_dec(v_upperBound_878_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos(lean_object* v_declName_892_, lean_object* v_xs_893_, lean_object* v_numParams_894_, lean_object* v_Iargs_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_){
_start:
{
lean_object* v___x_901_; lean_object* v_paramsPos_902_; lean_object* v___x_903_; 
v___x_901_ = lean_unsigned_to_nat(0u);
v_paramsPos_902_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos___closed__0));
v___x_903_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg(v_numParams_894_, v_xs_893_, v_declName_892_, v_Iargs_895_, v___x_901_, v_paramsPos_902_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_912_; 
v_a_904_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_912_ == 0)
{
v___x_906_ = v___x_903_;
v_isShared_907_ = v_isSharedCheck_912_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_912_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_908_ = lean_array_to_list(v_a_904_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_908_);
v___x_910_ = v___x_906_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
v_a_913_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_903_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_903_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos___boxed(lean_object* v_declName_921_, lean_object* v_xs_922_, lean_object* v_numParams_923_, lean_object* v_Iargs_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos(v_declName_921_, v_xs_922_, v_numParams_923_, v_Iargs_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
lean_dec(v_a_926_);
lean_dec_ref(v_a_925_);
lean_dec_ref(v_Iargs_924_);
lean_dec(v_numParams_923_);
lean_dec_ref(v_xs_922_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1(lean_object* v_upperBound_931_, lean_object* v_xs_932_, lean_object* v_declName_933_, lean_object* v_Iargs_934_, lean_object* v_inst_935_, lean_object* v_R_936_, lean_object* v_a_937_, lean_object* v_b_938_, lean_object* v_c_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg(v_upperBound_931_, v_xs_932_, v_declName_933_, v_Iargs_934_, v_a_937_, v_b_938_, v___y_940_, v___y_941_, v___y_942_, v___y_943_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___boxed(lean_object* v_upperBound_946_, lean_object* v_xs_947_, lean_object* v_declName_948_, lean_object* v_Iargs_949_, lean_object* v_inst_950_, lean_object* v_R_951_, lean_object* v_a_952_, lean_object* v_b_953_, lean_object* v_c_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1(v_upperBound_946_, v_xs_947_, v_declName_948_, v_Iargs_949_, v_inst_950_, v_R_951_, v_a_952_, v_b_953_, v_c_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec_ref(v_Iargs_949_);
lean_dec_ref(v_xs_947_);
lean_dec(v_upperBound_946_);
return v_res_960_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__0));
v___x_963_ = l_Lean_stringToMessageData(v___x_962_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg(lean_object* v_declName_964_, lean_object* v_upperBound_965_, lean_object* v_majorPos_966_, lean_object* v_numIndices_967_, lean_object* v_xs_968_, lean_object* v_Iargs_969_, lean_object* v_a_970_, lean_object* v_b_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_a_978_; uint8_t v___x_998_; 
v___x_998_ = lean_nat_dec_lt(v_a_970_, v_upperBound_965_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; 
lean_dec(v_a_970_);
lean_dec(v_declName_964_);
v___x_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_999_, 0, v_b_971_);
return v___x_999_;
}
else
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; size_t v_sz_1005_; size_t v___x_1006_; lean_object* v___x_1007_; 
v___x_1000_ = l_Lean_instInhabitedExpr;
v___x_1001_ = lean_nat_sub(v_majorPos_966_, v_numIndices_967_);
v___x_1002_ = lean_nat_add(v___x_1001_, v_a_970_);
lean_dec(v___x_1001_);
v___x_1003_ = lean_array_get_borrowed(v___x_1000_, v_xs_968_, v___x_1002_);
lean_dec(v___x_1002_);
v___x_1004_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__1___redArg___closed__2));
v_sz_1005_ = lean_array_size(v_Iargs_969_);
v___x_1006_ = ((size_t)0ULL);
lean_inc(v___x_1003_);
v___x_1007_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos_spec__0(v___x_1003_, v_Iargs_969_, v_sz_1005_, v___x_1006_, v___x_1004_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v_fst_1009_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_1007_, 1);
v_fst_1009_ = lean_ctor_get(v_a_1008_, 0);
lean_inc(v_fst_1009_);
lean_dec(v_a_1008_);
if (lean_obj_tag(v_fst_1009_) == 0)
{
goto v___jp_982_;
}
else
{
lean_object* v_val_1010_; 
v_val_1010_ = lean_ctor_get(v_fst_1009_, 0);
lean_inc(v_val_1010_);
lean_dec_ref_known(v_fst_1009_, 1);
if (lean_obj_tag(v_val_1010_) == 0)
{
goto v___jp_982_;
}
else
{
lean_object* v_val_1011_; lean_object* v___x_1012_; 
v_val_1011_ = lean_ctor_get(v_val_1010_, 0);
lean_inc(v_val_1011_);
lean_dec_ref_known(v_val_1010_, 1);
v___x_1012_ = lean_array_push(v_b_971_, v_val_1011_);
v_a_978_ = v___x_1012_;
goto v___jp_977_;
}
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec_ref(v_b_971_);
lean_dec(v_a_970_);
lean_dec(v_declName_964_);
v_a_1013_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1007_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1007_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
v___jp_977_:
{
lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_979_ = lean_unsigned_to_nat(1u);
v___x_980_ = lean_nat_add(v_a_970_, v___x_979_);
lean_dec(v_a_970_);
v_a_970_ = v___x_980_;
v_b_971_ = v_a_978_;
goto _start;
}
v___jp_982_:
{
lean_object* v___x_983_; uint8_t v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_983_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1);
v___x_984_ = 0;
lean_inc(v_declName_964_);
v___x_985_ = l_Lean_MessageData_ofConstName(v_declName_964_, v___x_984_);
v___x_986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_983_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___closed__1);
v___x_988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_988_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_dec_ref_known(v___x_989_, 1);
v_a_978_ = v_b_971_;
goto v___jp_977_;
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec_ref(v_b_971_);
lean_dec(v_a_970_);
lean_dec(v_declName_964_);
v_a_990_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_989_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg___boxed(lean_object* v_declName_1021_, lean_object* v_upperBound_1022_, lean_object* v_majorPos_1023_, lean_object* v_numIndices_1024_, lean_object* v_xs_1025_, lean_object* v_Iargs_1026_, lean_object* v_a_1027_, lean_object* v_b_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg(v_declName_1021_, v_upperBound_1022_, v_majorPos_1023_, v_numIndices_1024_, v_xs_1025_, v_Iargs_1026_, v_a_1027_, v_b_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec_ref(v_Iargs_1026_);
lean_dec_ref(v_xs_1025_);
lean_dec(v_numIndices_1024_);
lean_dec(v_majorPos_1023_);
lean_dec(v_upperBound_1022_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos(lean_object* v_declName_1037_, lean_object* v_xs_1038_, lean_object* v_majorPos_1039_, lean_object* v_numIndices_1040_, lean_object* v_Iargs_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v___x_1047_; lean_object* v_indicesPos_1048_; lean_object* v___x_1049_; 
v___x_1047_ = lean_unsigned_to_nat(0u);
v_indicesPos_1048_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos___closed__0));
v___x_1049_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg(v_declName_1037_, v_numIndices_1040_, v_majorPos_1039_, v_numIndices_1040_, v_xs_1038_, v_Iargs_1041_, v___x_1047_, v_indicesPos_1048_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1058_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1052_ = v___x_1049_;
v_isShared_1053_ = v_isSharedCheck_1058_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1058_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1054_; lean_object* v___x_1056_; 
v___x_1054_ = lean_array_to_list(v_a_1050_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v___x_1054_);
v___x_1056_ = v___x_1052_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v___x_1054_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
v_a_1059_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1049_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1049_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos___boxed(lean_object* v_declName_1067_, lean_object* v_xs_1068_, lean_object* v_majorPos_1069_, lean_object* v_numIndices_1070_, lean_object* v_Iargs_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos(v_declName_1067_, v_xs_1068_, v_majorPos_1069_, v_numIndices_1070_, v_Iargs_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
lean_dec_ref(v_Iargs_1071_);
lean_dec(v_numIndices_1070_);
lean_dec(v_majorPos_1069_);
lean_dec_ref(v_xs_1068_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0(lean_object* v_declName_1078_, lean_object* v_upperBound_1079_, lean_object* v_majorPos_1080_, lean_object* v_numIndices_1081_, lean_object* v_xs_1082_, lean_object* v_Iargs_1083_, lean_object* v_inst_1084_, lean_object* v_R_1085_, lean_object* v_a_1086_, lean_object* v_b_1087_, lean_object* v_c_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___redArg(v_declName_1078_, v_upperBound_1079_, v_majorPos_1080_, v_numIndices_1081_, v_xs_1082_, v_Iargs_1083_, v_a_1086_, v_b_1087_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0___boxed(lean_object* v_declName_1095_, lean_object* v_upperBound_1096_, lean_object* v_majorPos_1097_, lean_object* v_numIndices_1098_, lean_object* v_xs_1099_, lean_object* v_Iargs_1100_, lean_object* v_inst_1101_, lean_object* v_R_1102_, lean_object* v_a_1103_, lean_object* v_b_1104_, lean_object* v_c_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos_spec__0(v_declName_1095_, v_upperBound_1096_, v_majorPos_1097_, v_numIndices_1098_, v_xs_1099_, v_Iargs_1100_, v_inst_1101_, v_R_1102_, v_a_1103_, v_b_1104_, v_c_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec_ref(v_Iargs_1100_);
lean_dec_ref(v_xs_1099_);
lean_dec(v_numIndices_1098_);
lean_dec(v_majorPos_1097_);
lean_dec(v_upperBound_1096_);
return v_res_1111_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__1(void){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__0));
v___x_1114_ = l_Lean_stringToMessageData(v___x_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel(lean_object* v_declName_1115_, lean_object* v_motiveResultType_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_){
_start:
{
lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; 
if (lean_obj_tag(v_motiveResultType_1116_) == 3)
{
lean_object* v_u_1134_; 
v_u_1134_ = lean_ctor_get(v_motiveResultType_1116_, 0);
switch(lean_obj_tag(v_u_1134_))
{
case 0:
{
lean_object* v___x_1135_; 
lean_dec(v_declName_1115_);
v___x_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1135_, 0, v_u_1134_);
return v___x_1135_;
}
case 4:
{
lean_object* v___x_1136_; 
lean_dec(v_declName_1115_);
lean_inc_ref(v_u_1134_);
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v_u_1134_);
return v___x_1136_;
}
default: 
{
v___y_1123_ = v_a_1117_;
v___y_1124_ = v_a_1118_;
v___y_1125_ = v_a_1119_;
v___y_1126_ = v_a_1120_;
goto v___jp_1122_;
}
}
}
else
{
v___y_1123_ = v_a_1117_;
v___y_1124_ = v_a_1118_;
v___y_1125_ = v_a_1119_;
v___y_1126_ = v_a_1120_;
goto v___jp_1122_;
}
v___jp_1122_:
{
lean_object* v___x_1127_; uint8_t v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1127_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1);
v___x_1128_ = 0;
v___x_1129_ = l_Lean_MessageData_ofConstName(v_declName_1115_, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1127_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
v___x_1131_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___closed__1);
v___x_1132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_1132_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
return v___x_1133_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel___boxed(lean_object* v_declName_1137_, lean_object* v_motiveResultType_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel(v_declName_1137_, v_motiveResultType_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
lean_dec(v_a_1142_);
lean_dec_ref(v_a_1141_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
lean_dec_ref(v_motiveResultType_1138_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__0(lean_object* v_a_1145_, lean_object* v_as_1146_, lean_object* v_j_1147_){
_start:
{
lean_object* v___x_1148_; uint8_t v___x_1149_; 
v___x_1148_ = lean_array_get_size(v_as_1146_);
v___x_1149_ = lean_nat_dec_lt(v_j_1147_, v___x_1148_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1150_; 
lean_dec(v_j_1147_);
lean_dec(v_a_1145_);
v___x_1150_ = lean_box(0);
return v___x_1150_;
}
else
{
lean_object* v___x_1151_; lean_object* v___x_1152_; uint8_t v___x_1153_; 
v___x_1151_ = lean_array_fget_borrowed(v_as_1146_, v_j_1147_);
lean_inc(v_a_1145_);
v___x_1152_ = l_Lean_mkLevelParam(v_a_1145_);
v___x_1153_ = lean_level_eq(v___x_1151_, v___x_1152_);
lean_dec(v___x_1152_);
if (v___x_1153_ == 0)
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = lean_unsigned_to_nat(1u);
v___x_1155_ = lean_nat_add(v_j_1147_, v___x_1154_);
lean_dec(v_j_1147_);
v_j_1147_ = v___x_1155_;
goto _start;
}
else
{
lean_object* v___x_1157_; 
lean_dec(v_a_1145_);
v___x_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1157_, 0, v_j_1147_);
return v___x_1157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__0___boxed(lean_object* v_a_1158_, lean_object* v_as_1159_, lean_object* v_j_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__0(v_a_1158_, v_as_1159_, v_j_1160_);
lean_dec_ref(v_as_1159_);
return v_res_1161_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__0));
v___x_1164_ = l_Lean_stringToMessageData(v___x_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg(lean_object* v_motiveLvl_1165_, lean_object* v_Ilevels_1166_, lean_object* v_declName_1167_, lean_object* v_as_x27_1168_, lean_object* v_b_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
if (lean_obj_tag(v_as_x27_1168_) == 0)
{
lean_object* v___x_1175_; 
lean_dec(v_declName_1167_);
v___x_1175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1175_, 0, v_b_1169_);
return v___x_1175_;
}
else
{
lean_object* v_head_1176_; lean_object* v_tail_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; 
v_head_1176_ = lean_ctor_get(v_as_x27_1168_, 0);
v_tail_1177_ = lean_ctor_get(v_as_x27_1168_, 1);
lean_inc(v_head_1176_);
v___x_1178_ = l_Lean_mkLevelParam(v_head_1176_);
v___x_1179_ = lean_level_eq(v_motiveLvl_1165_, v___x_1178_);
lean_dec(v___x_1178_);
if (v___x_1179_ == 0)
{
lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1180_ = lean_unsigned_to_nat(0u);
lean_inc(v_head_1176_);
v___x_1181_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__0(v_head_1176_, v_Ilevels_1166_, v___x_1180_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref(v_b_1169_);
v___x_1182_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1);
v___x_1183_ = l_Lean_MessageData_ofConstName(v_declName_1167_, v___x_1179_);
v___x_1184_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1182_);
lean_ctor_set(v___x_1184_, 1, v___x_1183_);
v___x_1185_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___closed__1);
v___x_1186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1184_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
lean_inc(v_head_1176_);
v___x_1187_ = l_Lean_MessageData_ofName(v_head_1176_);
v___x_1188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1186_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1, &l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1_once, _init_l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1);
v___x_1190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1188_);
lean_ctor_set(v___x_1190_, 1, v___x_1189_);
v___x_1191_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_1190_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
v_a_1192_ = lean_ctor_get(v___x_1191_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1191_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1191_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
else
{
lean_object* v_val_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1209_; 
v_val_1200_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1202_ = v___x_1181_;
v_isShared_1203_ = v_isSharedCheck_1209_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_val_1200_);
lean_dec(v___x_1181_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1209_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_val_1200_);
v___x_1205_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
lean_object* v___x_1206_; 
v___x_1206_ = lean_array_push(v_b_1169_, v___x_1205_);
v_as_x27_1168_ = v_tail_1177_;
v_b_1169_ = v___x_1206_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = lean_box(0);
v___x_1211_ = lean_array_push(v_b_1169_, v___x_1210_);
v_as_x27_1168_ = v_tail_1177_;
v_b_1169_ = v___x_1211_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg___boxed(lean_object* v_motiveLvl_1213_, lean_object* v_Ilevels_1214_, lean_object* v_declName_1215_, lean_object* v_as_x27_1216_, lean_object* v_b_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg(v_motiveLvl_1213_, v_Ilevels_1214_, v_declName_1215_, v_as_x27_1216_, v_b_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v_as_x27_1216_);
lean_dec_ref(v_Ilevels_1214_);
lean_dec(v_motiveLvl_1213_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos(lean_object* v_declName_1226_, lean_object* v_lparams_1227_, lean_object* v_motiveLvl_1228_, lean_object* v_Ilevels_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v_Ilevels_1235_; lean_object* v_univLevelPos_1236_; lean_object* v___x_1237_; 
v_Ilevels_1235_ = lean_array_mk(v_Ilevels_1229_);
v_univLevelPos_1236_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos___closed__0));
v___x_1237_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg(v_motiveLvl_1228_, v_Ilevels_1235_, v_declName_1226_, v_lparams_1227_, v_univLevelPos_1236_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_);
lean_dec_ref(v_Ilevels_1235_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1246_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1240_ = v___x_1237_;
v_isShared_1241_ = v_isSharedCheck_1246_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1237_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1246_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1242_ = lean_array_to_list(v_a_1238_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v___x_1242_);
v___x_1244_ = v___x_1240_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1242_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
v_a_1247_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1237_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1237_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos___boxed(lean_object* v_declName_1255_, lean_object* v_lparams_1256_, lean_object* v_motiveLvl_1257_, lean_object* v_Ilevels_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos(v_declName_1255_, v_lparams_1256_, v_motiveLvl_1257_, v_Ilevels_1258_, v_a_1259_, v_a_1260_, v_a_1261_, v_a_1262_);
lean_dec(v_a_1262_);
lean_dec_ref(v_a_1261_);
lean_dec(v_a_1260_);
lean_dec_ref(v_a_1259_);
lean_dec(v_motiveLvl_1257_);
lean_dec(v_lparams_1256_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1(lean_object* v_motiveLvl_1265_, lean_object* v_Ilevels_1266_, lean_object* v_declName_1267_, lean_object* v_as_1268_, lean_object* v_as_x27_1269_, lean_object* v_b_1270_, lean_object* v_a_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___redArg(v_motiveLvl_1265_, v_Ilevels_1266_, v_declName_1267_, v_as_x27_1269_, v_b_1270_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1___boxed(lean_object* v_motiveLvl_1278_, lean_object* v_Ilevels_1279_, lean_object* v_declName_1280_, lean_object* v_as_1281_, lean_object* v_as_x27_1282_, lean_object* v_b_1283_, lean_object* v_a_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos_spec__1(v_motiveLvl_1278_, v_Ilevels_1279_, v_declName_1280_, v_as_1281_, v_as_x27_1282_, v_b_1283_, v_a_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v_as_x27_1282_);
lean_dec(v_as_1281_);
lean_dec_ref(v_Ilevels_1279_);
lean_dec(v_motiveLvl_1278_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg___lam__0(lean_object* v_k_1291_, lean_object* v_b_1292_, lean_object* v_c_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v___x_1299_; 
lean_inc(v___y_1297_);
lean_inc_ref(v___y_1296_);
lean_inc(v___y_1295_);
lean_inc_ref(v___y_1294_);
v___x_1299_ = lean_apply_7(v_k_1291_, v_b_1292_, v_c_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, lean_box(0));
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg___lam__0___boxed(lean_object* v_k_1300_, lean_object* v_b_1301_, lean_object* v_c_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg___lam__0(v_k_1300_, v_b_1301_, v_c_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg(lean_object* v_type_1309_, lean_object* v_k_1310_, uint8_t v_cleanupAnnotations_1311_, uint8_t v_whnfType_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v___f_1318_; lean_object* v___x_1319_; 
v___f_1318_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1318_, 0, v_k_1310_);
v___x_1319_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1309_, v___f_1318_, v_cleanupAnnotations_1311_, v_whnfType_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1322_ = v___x_1319_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1319_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
else
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
v_a_1328_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1319_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1319_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1328_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg___boxed(lean_object* v_type_1336_, lean_object* v_k_1337_, lean_object* v_cleanupAnnotations_1338_, lean_object* v_whnfType_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1345_; uint8_t v_whnfType_boxed_1346_; lean_object* v_res_1347_; 
v_cleanupAnnotations_boxed_1345_ = lean_unbox(v_cleanupAnnotations_1338_);
v_whnfType_boxed_1346_ = lean_unbox(v_whnfType_1339_);
v_res_1347_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg(v_type_1336_, v_k_1337_, v_cleanupAnnotations_boxed_1345_, v_whnfType_boxed_1346_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
lean_dec(v___y_1343_);
lean_dec_ref(v___y_1342_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2(lean_object* v_00_u03b1_1348_, lean_object* v_type_1349_, lean_object* v_k_1350_, uint8_t v_cleanupAnnotations_1351_, uint8_t v_whnfType_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg(v_type_1349_, v_k_1350_, v_cleanupAnnotations_1351_, v_whnfType_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___boxed(lean_object* v_00_u03b1_1359_, lean_object* v_type_1360_, lean_object* v_k_1361_, lean_object* v_cleanupAnnotations_1362_, lean_object* v_whnfType_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1369_; uint8_t v_whnfType_boxed_1370_; lean_object* v_res_1371_; 
v_cleanupAnnotations_boxed_1369_ = lean_unbox(v_cleanupAnnotations_1362_);
v_whnfType_boxed_1370_ = lean_unbox(v_whnfType_1363_);
v_res_1371_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2(v_00_u03b1_1359_, v_type_1360_, v_k_1361_, v_cleanupAnnotations_boxed_1369_, v_whnfType_boxed_1370_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
return v_res_1371_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0___lam__0(lean_object* v_motive_1372_, lean_object* v_e_1373_){
_start:
{
uint8_t v___x_1374_; 
v___x_1374_ = lean_expr_eqv(v_e_1373_, v_motive_1372_);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0___lam__0___boxed(lean_object* v_motive_1375_, lean_object* v_e_1376_){
_start:
{
uint8_t v_res_1377_; lean_object* v_r_1378_; 
v_res_1377_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0___lam__0(v_motive_1375_, v_e_1376_);
lean_dec_ref(v_e_1376_);
lean_dec_ref(v_motive_1375_);
v_r_1378_ = lean_box(v_res_1377_);
return v_r_1378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0(lean_object* v_motive_1379_, uint8_t v___x_1380_, lean_object* v_next_1381_, lean_object* v_upperBound_1382_, lean_object* v_as_1383_, size_t v_i_1384_, size_t v_stop_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v___y_1392_; uint8_t v_a_1393_; uint8_t v___x_1397_; 
v___x_1397_ = lean_usize_dec_eq(v_i_1384_, v_stop_1385_);
if (v___x_1397_ == 0)
{
lean_object* v___f_1398_; uint8_t v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
lean_inc_ref(v_motive_1379_);
v___f_1398_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1398_, 0, v_motive_1379_);
v___x_1399_ = lean_nat_dec_lt(v_next_1381_, v_upperBound_1382_);
v___x_1400_ = lean_array_uget_borrowed(v_as_1383_, v_i_1384_);
lean_inc(v___y_1389_);
lean_inc_ref(v___y_1388_);
lean_inc(v___y_1387_);
lean_inc_ref(v___y_1386_);
lean_inc(v___x_1400_);
v___x_1401_ = lean_infer_type(v___x_1400_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1415_; 
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1404_ = v___x_1401_;
v_isShared_1405_ = v_isSharedCheck_1415_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_dec(v___x_1401_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1415_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1406_; 
v___x_1406_ = lean_find_expr(v___f_1398_, v_a_1402_);
lean_dec(v_a_1402_);
lean_dec_ref(v___f_1398_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1407_ = lean_box(v___x_1380_);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 0, v___x_1407_);
v___x_1409_ = v___x_1404_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
v___y_1392_ = v___x_1409_;
v_a_1393_ = v___x_1380_;
goto v___jp_1391_;
}
}
else
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
lean_dec_ref_known(v___x_1406_, 1);
v___x_1411_ = lean_box(v___x_1399_);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 0, v___x_1411_);
v___x_1413_ = v___x_1404_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
v___y_1392_ = v___x_1413_;
v_a_1393_ = v___x_1399_;
goto v___jp_1391_;
}
}
}
}
else
{
lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1423_; 
lean_dec_ref(v___f_1398_);
lean_dec_ref(v_motive_1379_);
v_a_1416_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1418_ = v___x_1401_;
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_dec(v___x_1401_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1421_; 
if (v_isShared_1419_ == 0)
{
v___x_1421_ = v___x_1418_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_a_1416_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
}
else
{
uint8_t v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
lean_dec_ref(v_motive_1379_);
v___x_1424_ = 0;
v___x_1425_ = lean_box(v___x_1424_);
v___x_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
return v___x_1426_;
}
v___jp_1391_:
{
if (v_a_1393_ == 0)
{
size_t v___x_1394_; size_t v___x_1395_; 
lean_dec_ref(v___y_1392_);
v___x_1394_ = ((size_t)1ULL);
v___x_1395_ = lean_usize_add(v_i_1384_, v___x_1394_);
v_i_1384_ = v___x_1395_;
goto _start;
}
else
{
lean_dec_ref(v_motive_1379_);
return v___y_1392_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0___boxed(lean_object* v_motive_1427_, lean_object* v___x_1428_, lean_object* v_next_1429_, lean_object* v_upperBound_1430_, lean_object* v_as_1431_, lean_object* v_i_1432_, lean_object* v_stop_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
uint8_t v___x_4075__boxed_1439_; size_t v_i_boxed_1440_; size_t v_stop_boxed_1441_; lean_object* v_res_1442_; 
v___x_4075__boxed_1439_ = lean_unbox(v___x_1428_);
v_i_boxed_1440_ = lean_unbox_usize(v_i_1432_);
lean_dec(v_i_1432_);
v_stop_boxed_1441_ = lean_unbox_usize(v_stop_1433_);
lean_dec(v_stop_1433_);
v_res_1442_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0(v_motive_1427_, v___x_4075__boxed_1439_, v_next_1429_, v_upperBound_1430_, v_as_1431_, v_i_boxed_1440_, v_stop_boxed_1441_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec_ref(v_as_1431_);
lean_dec(v_upperBound_1430_);
lean_dec(v_next_1429_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__1(lean_object* v_motive_1443_, lean_object* v___x_1444_, uint8_t v___x_1445_, lean_object* v_minorArgs_1446_, lean_object* v_next_1447_, lean_object* v_upperBound_1448_, lean_object* v_x_1449_, lean_object* v_x_1450_, lean_object* v_x_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_){
_start:
{
if (lean_obj_tag(v_x_1449_) == 5)
{
lean_object* v_fn_1457_; lean_object* v_arg_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v_fn_1457_ = lean_ctor_get(v_x_1449_, 0);
lean_inc_ref(v_fn_1457_);
v_arg_1458_ = lean_ctor_get(v_x_1449_, 1);
lean_inc_ref(v_arg_1458_);
lean_dec_ref_known(v_x_1449_, 2);
v___x_1459_ = lean_array_set(v_x_1450_, v_x_1451_, v_arg_1458_);
v___x_1460_ = lean_unsigned_to_nat(1u);
v___x_1461_ = lean_nat_sub(v_x_1451_, v___x_1460_);
lean_dec(v_x_1451_);
v_x_1449_ = v_fn_1457_;
v_x_1450_ = v___x_1459_;
v_x_1451_ = v___x_1461_;
goto _start;
}
else
{
uint8_t v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; uint8_t v_recursor_1467_; 
lean_dec(v_x_1451_);
lean_dec_ref(v_x_1450_);
v___x_1463_ = lean_expr_eqv(v_x_1449_, v_motive_1443_);
lean_dec_ref(v_x_1449_);
v___x_1464_ = lean_box(v___x_1463_);
v___x_1465_ = lean_array_push(v___x_1444_, v___x_1464_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1471_; lean_object* v___x_1472_; uint8_t v___x_1473_; 
v___x_1471_ = lean_unsigned_to_nat(0u);
v___x_1472_ = lean_array_get_size(v_minorArgs_1446_);
v___x_1473_ = lean_nat_dec_lt(v___x_1471_, v___x_1472_);
if (v___x_1473_ == 0)
{
lean_dec_ref(v_motive_1443_);
v_recursor_1467_ = v___x_1473_;
goto v___jp_1466_;
}
else
{
if (v___x_1473_ == 0)
{
lean_dec_ref(v_motive_1443_);
v_recursor_1467_ = v___x_1473_;
goto v___jp_1466_;
}
else
{
size_t v___x_1474_; size_t v___x_1475_; lean_object* v___x_1476_; 
v___x_1474_ = ((size_t)0ULL);
v___x_1475_ = lean_usize_of_nat(v___x_1472_);
v___x_1476_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__0(v_motive_1443_, v___x_1445_, v_next_1447_, v_upperBound_1448_, v_minorArgs_1446_, v___x_1474_, v___x_1475_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; uint8_t v___x_1478_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1477_);
lean_dec_ref_known(v___x_1476_, 1);
v___x_1478_ = lean_unbox(v_a_1477_);
lean_dec(v_a_1477_);
v_recursor_1467_ = v___x_1478_;
goto v___jp_1466_;
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v___x_1465_);
v_a_1479_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1476_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1476_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_motive_1443_);
v_recursor_1467_ = v___x_1445_;
goto v___jp_1466_;
}
v___jp_1466_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1468_ = lean_box(v_recursor_1467_);
v___x_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1465_);
lean_ctor_set(v___x_1469_, 1, v___x_1468_);
v___x_1470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1470_, 0, v___x_1469_);
return v___x_1470_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__1___boxed(lean_object* v_motive_1487_, lean_object* v___x_1488_, lean_object* v___x_1489_, lean_object* v_minorArgs_1490_, lean_object* v_next_1491_, lean_object* v_upperBound_1492_, lean_object* v_x_1493_, lean_object* v_x_1494_, lean_object* v_x_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
uint8_t v___x_4170__boxed_1501_; lean_object* v_res_1502_; 
v___x_4170__boxed_1501_ = lean_unbox(v___x_1489_);
v_res_1502_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__1(v_motive_1487_, v___x_1488_, v___x_4170__boxed_1501_, v_minorArgs_1490_, v_next_1491_, v_upperBound_1492_, v_x_1493_, v_x_1494_, v_x_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v_upperBound_1492_);
lean_dec(v_next_1491_);
lean_dec_ref(v_minorArgs_1490_);
return v_res_1502_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1503_; lean_object* v_dummy_1504_; 
v___x_1503_ = lean_box(0);
v_dummy_1504_ = l_Lean_Expr_sort___override(v___x_1503_);
return v_dummy_1504_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1(lean_object* v_motive_1505_, lean_object* v_fst_1506_, lean_object* v_snd_1507_, lean_object* v_a_1508_, lean_object* v_upperBound_1509_, lean_object* v_minorArgs_1510_, lean_object* v_minorResultType_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_dummy_1517_; lean_object* v_nargs_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; lean_object* v___x_1523_; 
v_dummy_1517_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0);
v_nargs_1518_ = l_Lean_Expr_getAppNumArgs(v_minorResultType_1511_);
lean_inc(v_nargs_1518_);
v___x_1519_ = lean_mk_array(v_nargs_1518_, v_dummy_1517_);
v___x_1520_ = lean_unsigned_to_nat(1u);
v___x_1521_ = lean_nat_sub(v_nargs_1518_, v___x_1520_);
lean_dec(v_nargs_1518_);
v___x_1522_ = lean_unbox(v_snd_1507_);
v___x_1523_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__1(v_motive_1505_, v_fst_1506_, v___x_1522_, v_minorArgs_1510_, v_a_1508_, v_upperBound_1509_, v_minorResultType_1511_, v___x_1519_, v___x_1521_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___boxed(lean_object* v_motive_1524_, lean_object* v_fst_1525_, lean_object* v_snd_1526_, lean_object* v_a_1527_, lean_object* v_upperBound_1528_, lean_object* v_minorArgs_1529_, lean_object* v_minorResultType_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1(v_motive_1524_, v_fst_1525_, v_snd_1526_, v_a_1527_, v_upperBound_1528_, v_minorArgs_1529_, v_minorResultType_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec_ref(v_minorArgs_1529_);
lean_dec(v_upperBound_1528_);
lean_dec(v_a_1527_);
lean_dec(v_snd_1526_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__0(lean_object* v_fst_1537_, lean_object* v_snd_1538_, lean_object* v_00___1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1545_, 0, v_fst_1537_);
lean_ctor_set(v___x_1545_, 1, v_snd_1538_);
v___x_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1545_);
v___x_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__0___boxed(lean_object* v_fst_1548_, lean_object* v_snd_1549_, lean_object* v_00___1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__0(v_fst_1548_, v_snd_1549_, v_00___1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg(lean_object* v_upperBound_1557_, lean_object* v_motive_1558_, lean_object* v_xs_1559_, lean_object* v_numParams_1560_, lean_object* v_majorPos_1561_, lean_object* v_numIndices_1562_, lean_object* v_a_1563_, lean_object* v_b_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v_a_1571_; lean_object* v___y_1576_; uint8_t v___x_1595_; 
v___x_1595_ = lean_nat_dec_lt(v_a_1563_, v_upperBound_1557_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; 
lean_dec(v_a_1563_);
lean_dec_ref(v_motive_1558_);
lean_dec(v_upperBound_1557_);
v___x_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1596_, 0, v_b_1564_);
return v___x_1596_;
}
else
{
lean_object* v_fst_1597_; lean_object* v_snd_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; uint8_t v_recursor_1601_; 
v_fst_1597_ = lean_ctor_get(v_b_1564_, 0);
lean_inc(v_fst_1597_);
v_snd_1598_ = lean_ctor_get(v_b_1564_, 1);
lean_inc(v_snd_1598_);
lean_dec_ref(v_b_1564_);
v___x_1599_ = lean_unsigned_to_nat(1u);
v___x_1600_ = lean_nat_add(v_numParams_1560_, v___x_1599_);
v_recursor_1601_ = lean_nat_dec_lt(v_a_1563_, v___x_1600_);
lean_dec(v___x_1600_);
if (v_recursor_1601_ == 0)
{
lean_object* v___f_1602_; lean_object* v___x_1617_; uint8_t v___x_1618_; 
lean_inc(v_upperBound_1557_);
lean_inc(v_a_1563_);
lean_inc(v_snd_1598_);
lean_inc(v_fst_1597_);
lean_inc_ref(v_motive_1558_);
v___f_1602_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___boxed), 12, 5);
lean_closure_set(v___f_1602_, 0, v_motive_1558_);
lean_closure_set(v___f_1602_, 1, v_fst_1597_);
lean_closure_set(v___f_1602_, 2, v_snd_1598_);
lean_closure_set(v___f_1602_, 3, v_a_1563_);
lean_closure_set(v___f_1602_, 4, v_upperBound_1557_);
v___x_1617_ = lean_nat_sub(v_majorPos_1561_, v_numIndices_1562_);
v___x_1618_ = lean_nat_dec_le(v___x_1617_, v_a_1563_);
lean_dec(v___x_1617_);
if (v___x_1618_ == 0)
{
lean_dec(v_snd_1598_);
lean_dec(v_fst_1597_);
goto v___jp_1603_;
}
else
{
uint8_t v___x_1619_; 
v___x_1619_ = lean_nat_dec_le(v_a_1563_, v_majorPos_1561_);
if (v___x_1619_ == 0)
{
lean_dec(v_snd_1598_);
lean_dec(v_fst_1597_);
goto v___jp_1603_;
}
else
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_dec_ref(v___f_1602_);
v___x_1620_ = lean_box(0);
v___x_1621_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__0(v_fst_1597_, v_snd_1598_, v___x_1620_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
v___y_1576_ = v___x_1621_;
goto v___jp_1575_;
}
}
v___jp_1603_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = lean_array_fget_borrowed(v_xs_1559_, v_a_1563_);
lean_inc(v___y_1568_);
lean_inc_ref(v___y_1567_);
lean_inc(v___y_1566_);
lean_inc_ref(v___y_1565_);
lean_inc(v___x_1604_);
v___x_1605_ = lean_infer_type(v___x_1604_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v_a_1606_; lean_object* v___x_1607_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1605_, 1);
v___x_1607_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg(v_a_1606_, v___f_1602_, v_recursor_1601_, v_recursor_1601_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
v_a_1571_ = v_a_1608_;
goto v___jp_1570_;
}
else
{
lean_dec(v_a_1563_);
lean_dec_ref(v_motive_1558_);
lean_dec(v_upperBound_1557_);
return v___x_1607_;
}
}
else
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1616_; 
lean_dec_ref(v___f_1602_);
lean_dec(v_a_1563_);
lean_dec_ref(v_motive_1558_);
lean_dec(v_upperBound_1557_);
v_a_1609_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1611_ = v___x_1605_;
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1605_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
}
else
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = lean_box(0);
v___x_1623_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__0(v_fst_1597_, v_snd_1598_, v___x_1622_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
v___y_1576_ = v___x_1623_;
goto v___jp_1575_;
}
}
v___jp_1570_:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = lean_unsigned_to_nat(1u);
v___x_1573_ = lean_nat_add(v_a_1563_, v___x_1572_);
lean_dec(v_a_1563_);
v_a_1563_ = v___x_1573_;
v_b_1564_ = v_a_1571_;
goto _start;
}
v___jp_1575_:
{
if (lean_obj_tag(v___y_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1586_; 
v_a_1577_ = lean_ctor_get(v___y_1576_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v___y_1576_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1579_ = v___y_1576_;
v_isShared_1580_ = v_isSharedCheck_1586_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___y_1576_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1586_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
if (lean_obj_tag(v_a_1577_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1583_; 
lean_dec(v_a_1563_);
lean_dec_ref(v_motive_1558_);
lean_dec(v_upperBound_1557_);
v_a_1581_ = lean_ctor_get(v_a_1577_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v_a_1577_, 1);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 0, v_a_1581_);
v___x_1583_ = v___x_1579_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
else
{
lean_object* v_a_1585_; 
lean_del_object(v___x_1579_);
v_a_1585_ = lean_ctor_get(v_a_1577_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v_a_1577_, 1);
v_a_1571_ = v_a_1585_;
goto v___jp_1570_;
}
}
}
else
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
lean_dec(v_a_1563_);
lean_dec_ref(v_motive_1558_);
lean_dec(v_upperBound_1557_);
v_a_1587_ = lean_ctor_get(v___y_1576_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___y_1576_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___y_1576_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___y_1576_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1587_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___boxed(lean_object* v_upperBound_1624_, lean_object* v_motive_1625_, lean_object* v_xs_1626_, lean_object* v_numParams_1627_, lean_object* v_majorPos_1628_, lean_object* v_numIndices_1629_, lean_object* v_a_1630_, lean_object* v_b_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg(v_upperBound_1624_, v_motive_1625_, v_xs_1626_, v_numParams_1627_, v_majorPos_1628_, v_numIndices_1629_, v_a_1630_, v_b_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
lean_dec(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec(v_numIndices_1629_);
lean_dec(v_majorPos_1628_);
lean_dec(v_numParams_1627_);
lean_dec_ref(v_xs_1626_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive(lean_object* v_xs_1644_, lean_object* v_numParams_1645_, lean_object* v_numIndices_1646_, lean_object* v_majorPos_1647_, lean_object* v_motive_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1654_ = lean_array_get_size(v_xs_1644_);
v___x_1655_ = lean_unsigned_to_nat(0u);
v___x_1656_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___closed__1));
v___x_1657_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg(v___x_1654_, v_motive_1648_, v_xs_1644_, v_numParams_1645_, v_majorPos_1647_, v_numIndices_1646_, v___x_1655_, v___x_1656_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1675_; 
v_a_1658_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1660_ = v___x_1657_;
v_isShared_1661_ = v_isSharedCheck_1675_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1657_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1675_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v_fst_1662_; lean_object* v_snd_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1674_; 
v_fst_1662_ = lean_ctor_get(v_a_1658_, 0);
v_snd_1663_ = lean_ctor_get(v_a_1658_, 1);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_a_1658_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1665_ = v_a_1658_;
v_isShared_1666_ = v_isSharedCheck_1674_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_snd_1663_);
lean_inc(v_fst_1662_);
lean_dec(v_a_1658_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1674_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1667_; lean_object* v___x_1669_; 
v___x_1667_ = lean_array_to_list(v_fst_1662_);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1667_);
v___x_1669_ = v___x_1665_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1667_);
lean_ctor_set(v_reuseFailAlloc_1673_, 1, v_snd_1663_);
v___x_1669_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
lean_object* v___x_1671_; 
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 0, v___x_1669_);
v___x_1671_ = v___x_1660_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1669_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
v_a_1676_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___x_1657_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1657_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive___boxed(lean_object* v_xs_1684_, lean_object* v_numParams_1685_, lean_object* v_numIndices_1686_, lean_object* v_majorPos_1687_, lean_object* v_motive_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive(v_xs_1684_, v_numParams_1685_, v_numIndices_1686_, v_majorPos_1687_, v_motive_1688_, v_a_1689_, v_a_1690_, v_a_1691_, v_a_1692_);
lean_dec(v_a_1692_);
lean_dec_ref(v_a_1691_);
lean_dec(v_a_1690_);
lean_dec_ref(v_a_1689_);
lean_dec(v_majorPos_1687_);
lean_dec(v_numIndices_1686_);
lean_dec(v_numParams_1685_);
lean_dec_ref(v_xs_1684_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3(lean_object* v_upperBound_1695_, lean_object* v_motive_1696_, lean_object* v_xs_1697_, lean_object* v_numParams_1698_, lean_object* v_majorPos_1699_, lean_object* v_numIndices_1700_, lean_object* v_inst_1701_, lean_object* v_R_1702_, lean_object* v_a_1703_, lean_object* v_b_1704_, lean_object* v_c_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg(v_upperBound_1695_, v_motive_1696_, v_xs_1697_, v_numParams_1698_, v_majorPos_1699_, v_numIndices_1700_, v_a_1703_, v_b_1704_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___boxed(lean_object* v_upperBound_1712_, lean_object* v_motive_1713_, lean_object* v_xs_1714_, lean_object* v_numParams_1715_, lean_object* v_majorPos_1716_, lean_object* v_numIndices_1717_, lean_object* v_inst_1718_, lean_object* v_R_1719_, lean_object* v_a_1720_, lean_object* v_b_1721_, lean_object* v_c_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3(v_upperBound_1712_, v_motive_1713_, v_xs_1714_, v_numParams_1715_, v_majorPos_1716_, v_numIndices_1717_, v_inst_1718_, v_R_1719_, v_a_1720_, v_b_1721_, v_c_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec(v_numIndices_1717_);
lean_dec(v_majorPos_1716_);
lean_dec(v_numParams_1715_);
lean_dec_ref(v_xs_1714_);
return v_res_1728_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__1(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__0));
v___x_1731_ = l_Lean_stringToMessageData(v___x_1730_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType(lean_object* v_declName_1732_, lean_object* v_motiveArgs_1733_, lean_object* v_motiveResultType_1734_, lean_object* v_motiveTypeParams_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
uint8_t v___x_1749_; 
v___x_1749_ = l_Lean_Expr_isSort(v_motiveResultType_1734_);
if (v___x_1749_ == 0)
{
goto v___jp_1741_;
}
else
{
lean_object* v___x_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1750_ = lean_array_get_size(v_motiveArgs_1733_);
v___x_1751_ = lean_array_get_size(v_motiveTypeParams_1735_);
v___x_1752_ = lean_nat_dec_eq(v___x_1750_, v___x_1751_);
if (v___x_1752_ == 0)
{
goto v___jp_1741_;
}
else
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
lean_dec(v_declName_1732_);
v___x_1753_ = lean_box(0);
v___x_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
v___jp_1741_:
{
lean_object* v___x_1742_; uint8_t v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1742_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1);
v___x_1743_ = 0;
v___x_1744_ = l_Lean_MessageData_ofConstName(v_declName_1732_, v___x_1743_);
v___x_1745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1742_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
v___x_1746_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___closed__1);
v___x_1747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1745_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
v___x_1748_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_1747_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_);
return v___x_1748_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType___boxed(lean_object* v_declName_1755_, lean_object* v_motiveArgs_1756_, lean_object* v_motiveResultType_1757_, lean_object* v_motiveTypeParams_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType(v_declName_1755_, v_motiveArgs_1756_, v_motiveResultType_1757_, v_motiveTypeParams_1758_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_);
lean_dec(v_a_1762_);
lean_dec_ref(v_a_1761_);
lean_dec(v_a_1760_);
lean_dec_ref(v_a_1759_);
lean_dec_ref(v_motiveTypeParams_1758_);
lean_dec_ref(v_motiveResultType_1757_);
lean_dec_ref(v_motiveArgs_1756_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___lam__0(lean_object* v_declName_1765_, lean_object* v_motiveArgs_1766_, lean_object* v_a_1767_, lean_object* v_us_1768_, lean_object* v_xs_1769_, lean_object* v___x_1770_, lean_object* v___y_1771_, lean_object* v_fst_1772_, lean_object* v_motive_1773_, lean_object* v_declName_1774_, uint8_t v_snd_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_, lean_object* v_motiveTypeParams_1778_, lean_object* v_motiveResultType_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v___x_1785_; 
lean_inc(v_declName_1765_);
v___x_1785_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotiveResultType(v_declName_1765_, v_motiveArgs_1766_, v_motiveResultType_1779_, v_motiveTypeParams_1778_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_object* v___x_1786_; 
lean_dec_ref_known(v___x_1785_, 1);
lean_inc(v_declName_1765_);
v___x_1786_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMotiveLevel(v_declName_1765_, v_motiveResultType_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1786_, 1);
v___x_1788_ = l_Lean_ConstantInfo_levelParams(v_a_1767_);
lean_inc(v_declName_1765_);
v___x_1789_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getUnivLevelPos(v_declName_1765_, v___x_1788_, v_a_1787_, v_us_1768_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
lean_dec(v_a_1787_);
lean_dec(v___x_1788_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_a_1790_; lean_object* v___x_1791_; 
v_a_1790_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_a_1790_);
lean_dec_ref_known(v___x_1789_, 1);
v___x_1791_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive(v_xs_1769_, v___x_1770_, v___y_1771_, v_fst_1772_, v_motive_1773_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1804_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1794_ = v___x_1791_;
v_isShared_1795_ = v_isSharedCheck_1804_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v___x_1791_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1804_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v_fst_1796_; lean_object* v_snd_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; uint8_t v___x_1800_; lean_object* v___x_1802_; 
v_fst_1796_ = lean_ctor_get(v_a_1792_, 0);
lean_inc(v_fst_1796_);
v_snd_1797_ = lean_ctor_get(v_a_1792_, 1);
lean_inc(v_snd_1797_);
lean_dec(v_a_1792_);
v___x_1798_ = lean_array_get_size(v_xs_1769_);
v___x_1799_ = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(v___x_1799_, 0, v_declName_1765_);
lean_ctor_set(v___x_1799_, 1, v_declName_1774_);
lean_ctor_set(v___x_1799_, 2, v_a_1790_);
lean_ctor_set(v___x_1799_, 3, v___x_1798_);
lean_ctor_set(v___x_1799_, 4, v_fst_1772_);
lean_ctor_set(v___x_1799_, 5, v_a_1776_);
lean_ctor_set(v___x_1799_, 6, v_a_1777_);
lean_ctor_set(v___x_1799_, 7, v_fst_1796_);
lean_ctor_set_uint8(v___x_1799_, sizeof(void*)*8, v_snd_1775_);
v___x_1800_ = lean_unbox(v_snd_1797_);
lean_dec(v_snd_1797_);
lean_ctor_set_uint8(v___x_1799_, sizeof(void*)*8 + 1, v___x_1800_);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 0, v___x_1799_);
v___x_1802_ = v___x_1794_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1799_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
lean_dec(v_a_1790_);
lean_dec(v_a_1777_);
lean_dec(v_a_1776_);
lean_dec(v_declName_1774_);
lean_dec(v_fst_1772_);
lean_dec(v_declName_1765_);
v_a_1805_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1807_ = v___x_1791_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1791_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec(v_a_1777_);
lean_dec(v_a_1776_);
lean_dec(v_declName_1774_);
lean_dec_ref(v_motive_1773_);
lean_dec(v_fst_1772_);
lean_dec(v_declName_1765_);
v_a_1813_ = lean_ctor_get(v___x_1789_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1789_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1789_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
lean_dec(v_a_1777_);
lean_dec(v_a_1776_);
lean_dec(v_declName_1774_);
lean_dec_ref(v_motive_1773_);
lean_dec(v_fst_1772_);
lean_dec(v_us_1768_);
lean_dec(v_declName_1765_);
v_a_1821_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1786_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1786_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
lean_dec(v_a_1777_);
lean_dec(v_a_1776_);
lean_dec(v_declName_1774_);
lean_dec_ref(v_motive_1773_);
lean_dec(v_fst_1772_);
lean_dec(v_us_1768_);
lean_dec(v_declName_1765_);
v_a_1829_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1785_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1785_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___lam__0___boxed(lean_object** _args){
lean_object* v_declName_1837_ = _args[0];
lean_object* v_motiveArgs_1838_ = _args[1];
lean_object* v_a_1839_ = _args[2];
lean_object* v_us_1840_ = _args[3];
lean_object* v_xs_1841_ = _args[4];
lean_object* v___x_1842_ = _args[5];
lean_object* v___y_1843_ = _args[6];
lean_object* v_fst_1844_ = _args[7];
lean_object* v_motive_1845_ = _args[8];
lean_object* v_declName_1846_ = _args[9];
lean_object* v_snd_1847_ = _args[10];
lean_object* v_a_1848_ = _args[11];
lean_object* v_a_1849_ = _args[12];
lean_object* v_motiveTypeParams_1850_ = _args[13];
lean_object* v_motiveResultType_1851_ = _args[14];
lean_object* v___y_1852_ = _args[15];
lean_object* v___y_1853_ = _args[16];
lean_object* v___y_1854_ = _args[17];
lean_object* v___y_1855_ = _args[18];
lean_object* v___y_1856_ = _args[19];
_start:
{
uint8_t v_snd_5117__boxed_1857_; lean_object* v_res_1858_; 
v_snd_5117__boxed_1857_ = lean_unbox(v_snd_1847_);
v_res_1858_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___lam__0(v_declName_1837_, v_motiveArgs_1838_, v_a_1839_, v_us_1840_, v_xs_1841_, v___x_1842_, v___y_1843_, v_fst_1844_, v_motive_1845_, v_declName_1846_, v_snd_5117__boxed_1857_, v_a_1848_, v_a_1849_, v_motiveTypeParams_1850_, v_motiveResultType_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
lean_dec_ref(v_motiveResultType_1851_);
lean_dec_ref(v_motiveTypeParams_1850_);
lean_dec(v___y_1843_);
lean_dec(v___x_1842_);
lean_dec_ref(v_xs_1841_);
lean_dec_ref(v_a_1839_);
lean_dec_ref(v_motiveArgs_1838_);
return v_res_1858_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__0));
v___x_1861_ = l_Lean_stringToMessageData(v___x_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1(lean_object* v_declName_1862_, lean_object* v_xs_1863_, lean_object* v___x_1864_, lean_object* v_fst_1865_, lean_object* v___y_1866_, lean_object* v_motiveArgs_1867_, lean_object* v_a_1868_, lean_object* v_motive_1869_, uint8_t v_snd_1870_, lean_object* v_x_1871_, lean_object* v_x_1872_, lean_object* v_x_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
if (lean_obj_tag(v_x_1871_) == 5)
{
lean_object* v_fn_1879_; lean_object* v_arg_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v_fn_1879_ = lean_ctor_get(v_x_1871_, 0);
lean_inc_ref(v_fn_1879_);
v_arg_1880_ = lean_ctor_get(v_x_1871_, 1);
lean_inc_ref(v_arg_1880_);
lean_dec_ref_known(v_x_1871_, 2);
v___x_1881_ = lean_array_set(v_x_1872_, v_x_1873_, v_arg_1880_);
v___x_1882_ = lean_unsigned_to_nat(1u);
v___x_1883_ = lean_nat_sub(v_x_1873_, v___x_1882_);
lean_dec(v_x_1873_);
v_x_1871_ = v_fn_1879_;
v_x_1872_ = v___x_1881_;
v_x_1873_ = v___x_1883_;
goto _start;
}
else
{
lean_dec(v_x_1873_);
if (lean_obj_tag(v_x_1871_) == 4)
{
lean_object* v_declName_1885_; lean_object* v_us_1886_; lean_object* v___x_1887_; 
v_declName_1885_ = lean_ctor_get(v_x_1871_, 0);
lean_inc(v_declName_1885_);
v_us_1886_ = lean_ctor_get(v_x_1871_, 1);
lean_inc(v_us_1886_);
lean_dec_ref_known(v_x_1871_, 2);
lean_inc(v_declName_1862_);
v___x_1887_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getParamsPos(v_declName_1862_, v_xs_1863_, v___x_1864_, v_x_1872_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; lean_object* v___x_1889_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc(v_a_1888_);
lean_dec_ref_known(v___x_1887_, 1);
lean_inc(v_declName_1862_);
v___x_1889_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getIndicesPos(v_declName_1862_, v_xs_1863_, v_fst_1865_, v___y_1866_, v_x_1872_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
lean_dec_ref(v_x_1872_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; lean_object* v___x_1891_; lean_object* v___f_1892_; lean_object* v___x_1893_; 
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_a_1890_);
lean_dec_ref_known(v___x_1889_, 1);
v___x_1891_ = lean_box(v_snd_1870_);
lean_inc_ref(v_motive_1869_);
v___f_1892_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___lam__0___boxed), 20, 13);
lean_closure_set(v___f_1892_, 0, v_declName_1862_);
lean_closure_set(v___f_1892_, 1, v_motiveArgs_1867_);
lean_closure_set(v___f_1892_, 2, v_a_1868_);
lean_closure_set(v___f_1892_, 3, v_us_1886_);
lean_closure_set(v___f_1892_, 4, v_xs_1863_);
lean_closure_set(v___f_1892_, 5, v___x_1864_);
lean_closure_set(v___f_1892_, 6, v___y_1866_);
lean_closure_set(v___f_1892_, 7, v_fst_1865_);
lean_closure_set(v___f_1892_, 8, v_motive_1869_);
lean_closure_set(v___f_1892_, 9, v_declName_1885_);
lean_closure_set(v___f_1892_, 10, v___x_1891_);
lean_closure_set(v___f_1892_, 11, v_a_1888_);
lean_closure_set(v___f_1892_, 12, v_a_1890_);
lean_inc(v___y_1877_);
lean_inc_ref(v___y_1876_);
lean_inc(v___y_1875_);
lean_inc_ref(v___y_1874_);
v___x_1893_ = lean_infer_type(v_motive_1869_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_object* v_a_1894_; uint8_t v___x_1895_; lean_object* v___x_1896_; 
v_a_1894_ = lean_ctor_get(v___x_1893_, 0);
lean_inc(v_a_1894_);
lean_dec_ref_known(v___x_1893_, 1);
v___x_1895_ = 0;
v___x_1896_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg(v_a_1894_, v___f_1892_, v___x_1895_, v___x_1895_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
return v___x_1896_;
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
lean_dec_ref(v___f_1892_);
v_a_1897_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___x_1893_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1893_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
else
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1912_; 
lean_dec(v_a_1888_);
lean_dec(v_us_1886_);
lean_dec(v_declName_1885_);
lean_dec_ref(v_motive_1869_);
lean_dec_ref(v_a_1868_);
lean_dec_ref(v_motiveArgs_1867_);
lean_dec(v___y_1866_);
lean_dec(v_fst_1865_);
lean_dec(v___x_1864_);
lean_dec_ref(v_xs_1863_);
lean_dec(v_declName_1862_);
v_a_1905_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1907_ = v___x_1889_;
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1889_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1910_; 
if (v_isShared_1908_ == 0)
{
v___x_1910_ = v___x_1907_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_a_1905_);
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
else
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1920_; 
lean_dec(v_us_1886_);
lean_dec(v_declName_1885_);
lean_dec_ref(v_x_1872_);
lean_dec_ref(v_motive_1869_);
lean_dec_ref(v_a_1868_);
lean_dec_ref(v_motiveArgs_1867_);
lean_dec(v___y_1866_);
lean_dec(v_fst_1865_);
lean_dec(v___x_1864_);
lean_dec_ref(v_xs_1863_);
lean_dec(v_declName_1862_);
v_a_1913_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1915_ = v___x_1887_;
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v___x_1887_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1918_; 
if (v_isShared_1916_ == 0)
{
v___x_1918_ = v___x_1915_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1913_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
}
else
{
lean_object* v___x_1921_; uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
lean_dec_ref(v_x_1872_);
lean_dec_ref(v_x_1871_);
lean_dec_ref(v_motive_1869_);
lean_dec_ref(v_a_1868_);
lean_dec_ref(v_motiveArgs_1867_);
lean_dec(v___y_1866_);
lean_dec(v_fst_1865_);
lean_dec(v___x_1864_);
lean_dec_ref(v_xs_1863_);
v___x_1921_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1);
v___x_1922_ = 0;
v___x_1923_ = l_Lean_MessageData_ofConstName(v_declName_1862_, v___x_1922_);
v___x_1924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1921_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___closed__1);
v___x_1926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1924_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_1926_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
return v___x_1927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1___boxed(lean_object** _args){
lean_object* v_declName_1928_ = _args[0];
lean_object* v_xs_1929_ = _args[1];
lean_object* v___x_1930_ = _args[2];
lean_object* v_fst_1931_ = _args[3];
lean_object* v___y_1932_ = _args[4];
lean_object* v_motiveArgs_1933_ = _args[5];
lean_object* v_a_1934_ = _args[6];
lean_object* v_motive_1935_ = _args[7];
lean_object* v_snd_1936_ = _args[8];
lean_object* v_x_1937_ = _args[9];
lean_object* v_x_1938_ = _args[10];
lean_object* v_x_1939_ = _args[11];
lean_object* v___y_1940_ = _args[12];
lean_object* v___y_1941_ = _args[13];
lean_object* v___y_1942_ = _args[14];
lean_object* v___y_1943_ = _args[15];
lean_object* v___y_1944_ = _args[16];
_start:
{
uint8_t v_snd_5271__boxed_1945_; lean_object* v_res_1946_; 
v_snd_5271__boxed_1945_ = lean_unbox(v_snd_1936_);
v_res_1946_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1(v_declName_1928_, v_xs_1929_, v___x_1930_, v_fst_1931_, v___y_1932_, v_motiveArgs_1933_, v_a_1934_, v_motive_1935_, v_snd_5271__boxed_1945_, v_x_1937_, v_x_1938_, v_x_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
return v_res_1946_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1948_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__0));
v___x_1949_ = l_Lean_stringToMessageData(v___x_1948_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2(lean_object* v_declName_1950_, lean_object* v_xs_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_x_1954_, lean_object* v_x_1955_, lean_object* v_x_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
if (lean_obj_tag(v_x_1954_) == 5)
{
lean_object* v_fn_1962_; lean_object* v_arg_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v_fn_1962_ = lean_ctor_get(v_x_1954_, 0);
lean_inc_ref(v_fn_1962_);
v_arg_1963_ = lean_ctor_get(v_x_1954_, 1);
lean_inc_ref(v_arg_1963_);
lean_dec_ref_known(v_x_1954_, 2);
v___x_1964_ = lean_array_set(v_x_1955_, v_x_1956_, v_arg_1963_);
v___x_1965_ = lean_unsigned_to_nat(1u);
v___x_1966_ = lean_nat_sub(v_x_1956_, v___x_1965_);
lean_dec(v_x_1956_);
v_x_1954_ = v_fn_1962_;
v_x_1955_ = v___x_1964_;
v_x_1956_ = v___x_1966_;
goto _start;
}
else
{
lean_object* v___x_1968_; 
lean_dec(v_x_1956_);
lean_inc(v_declName_1950_);
v___x_1968_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive(v_declName_1950_, v_x_1954_, v_x_1955_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
lean_dec_ref_known(v___x_1968_, 1);
v___x_1969_ = lean_unsigned_to_nat(0u);
v___x_1970_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getNumParams(v_xs_1951_, v_x_1954_, v___x_1969_);
lean_inc(v_declName_1950_);
v___x_1971_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosDepElim(v_declName_1950_, v_a_1952_, v_xs_1951_, v_x_1955_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v_a_1972_; lean_object* v_snd_1973_; lean_object* v_fst_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_2034_; 
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1972_);
lean_dec_ref_known(v___x_1971_, 1);
v_snd_1973_ = lean_ctor_get(v_a_1972_, 1);
v_fst_1974_ = lean_ctor_get(v_a_1972_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v_a_1972_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_1976_ = v_a_1972_;
v_isShared_1977_ = v_isSharedCheck_2034_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_snd_1973_);
lean_inc(v_fst_1974_);
lean_dec(v_a_1972_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_2034_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v_fst_1978_; lean_object* v_snd_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_2033_; 
v_fst_1978_ = lean_ctor_get(v_snd_1973_, 0);
v_snd_1979_ = lean_ctor_get(v_snd_1973_, 1);
v_isSharedCheck_2033_ = !lean_is_exclusive(v_snd_1973_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_1981_ = v_snd_1973_;
v_isShared_1982_ = v_isSharedCheck_2033_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_snd_1979_);
lean_inc(v_fst_1978_);
lean_dec(v_snd_1973_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_2033_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_2007_; uint8_t v___x_2028_; 
v___x_2028_ = lean_unbox(v_snd_1979_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; 
v___x_2029_ = lean_array_get_size(v_x_1955_);
v___y_2007_ = v___x_2029_;
goto v___jp_2006_;
}
else
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2030_ = lean_array_get_size(v_x_1955_);
v___x_2031_ = lean_unsigned_to_nat(1u);
v___x_2032_ = lean_nat_sub(v___x_2030_, v___x_2031_);
v___y_2007_ = v___x_2032_;
goto v___jp_2006_;
}
v___jp_1983_:
{
lean_object* v___x_1989_; 
lean_inc(v___y_1988_);
lean_inc_ref(v___y_1987_);
lean_inc(v___y_1986_);
lean_inc_ref(v___y_1985_);
v___x_1989_ = lean_infer_type(v_fst_1974_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v_dummy_1991_; lean_object* v_nargs_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; lean_object* v___x_1997_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v_dummy_1991_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0);
v_nargs_1992_ = l_Lean_Expr_getAppNumArgs(v_a_1990_);
lean_inc(v_nargs_1992_);
v___x_1993_ = lean_mk_array(v_nargs_1992_, v_dummy_1991_);
v___x_1994_ = lean_unsigned_to_nat(1u);
v___x_1995_ = lean_nat_sub(v_nargs_1992_, v___x_1994_);
lean_dec(v_nargs_1992_);
v___x_1996_ = lean_unbox(v_snd_1979_);
lean_dec(v_snd_1979_);
v___x_1997_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__1(v_declName_1950_, v_xs_1951_, v___x_1970_, v_fst_1978_, v___y_1984_, v_x_1955_, v_a_1953_, v_x_1954_, v___x_1996_, v_a_1990_, v___x_1993_, v___x_1995_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_);
return v___x_1997_;
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec(v___y_1984_);
lean_dec(v_snd_1979_);
lean_dec(v_fst_1978_);
lean_dec(v___x_1970_);
lean_dec_ref(v_x_1955_);
lean_dec_ref(v_x_1954_);
lean_dec_ref(v_a_1953_);
lean_dec_ref(v_xs_1951_);
lean_dec(v_declName_1950_);
v_a_1998_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1989_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1989_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
v___jp_2006_:
{
uint8_t v___x_2008_; 
v___x_2008_ = lean_nat_dec_lt(v_fst_1978_, v___y_2007_);
if (v___x_2008_ == 0)
{
lean_del_object(v___x_1981_);
lean_del_object(v___x_1976_);
v___y_1984_ = v___y_2007_;
v___y_1985_ = v___y_1957_;
v___y_1986_ = v___y_1958_;
v___y_1987_ = v___y_1959_;
v___y_1988_ = v___y_1960_;
goto v___jp_1983_;
}
else
{
lean_object* v___x_2009_; uint8_t v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2013_; 
lean_dec(v___y_2007_);
lean_dec(v_snd_1979_);
lean_dec(v_fst_1978_);
lean_dec(v_fst_1974_);
lean_dec(v___x_1970_);
lean_dec_ref(v_x_1955_);
lean_dec_ref(v_x_1954_);
lean_dec_ref(v_a_1953_);
lean_dec_ref(v_xs_1951_);
v___x_2009_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1_once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_checkMotive___closed__1);
v___x_2010_ = 0;
v___x_2011_ = l_Lean_MessageData_ofConstName(v_declName_1950_, v___x_2010_);
if (v_isShared_1982_ == 0)
{
lean_ctor_set_tag(v___x_1981_, 7);
lean_ctor_set(v___x_1981_, 1, v___x_2011_);
lean_ctor_set(v___x_1981_, 0, v___x_2009_);
v___x_2013_ = v___x_1981_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v___x_2009_);
lean_ctor_set(v_reuseFailAlloc_2027_, 1, v___x_2011_);
v___x_2013_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
lean_object* v___x_2014_; lean_object* v___x_2016_; 
v___x_2014_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___closed__1);
if (v_isShared_1977_ == 0)
{
lean_ctor_set_tag(v___x_1976_, 7);
lean_ctor_set(v___x_1976_, 1, v___x_2014_);
lean_ctor_set(v___x_1976_, 0, v___x_2013_);
v___x_2016_ = v___x_1976_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v___x_2013_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v___x_2014_);
v___x_2016_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
lean_object* v___x_2017_; lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2025_; 
v___x_2017_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v___x_2016_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
v_a_2018_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2020_ = v___x_2017_;
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_2017_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2023_; 
if (v_isShared_2021_ == 0)
{
v___x_2023_ = v___x_2020_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_a_2018_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
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
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
lean_dec(v___x_1970_);
lean_dec_ref(v_x_1955_);
lean_dec_ref(v_x_1954_);
lean_dec_ref(v_a_1953_);
lean_dec_ref(v_xs_1951_);
lean_dec(v_declName_1950_);
v_a_2035_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2037_ = v___x_1971_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_1971_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2035_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_dec_ref(v_x_1955_);
lean_dec_ref(v_x_1954_);
lean_dec_ref(v_a_1953_);
lean_dec(v_a_1952_);
lean_dec_ref(v_xs_1951_);
lean_dec(v_declName_1950_);
v_a_2043_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_1968_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_1968_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2___boxed(lean_object* v_declName_2051_, lean_object* v_xs_2052_, lean_object* v_a_2053_, lean_object* v_a_2054_, lean_object* v_x_2055_, lean_object* v_x_2056_, lean_object* v_x_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2(v_declName_2051_, v_xs_2052_, v_a_2053_, v_a_2054_, v_x_2055_, v_x_2056_, v_x_2057_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
lean_dec(v___y_2061_);
lean_dec_ref(v___y_2060_);
lean_dec(v___y_2059_);
lean_dec_ref(v___y_2058_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore___lam__0(lean_object* v_declName_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_xs_2067_, lean_object* v_type_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v_dummy_2074_; lean_object* v_nargs_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v_dummy_2074_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__3___redArg___lam__1___closed__0);
v_nargs_2075_ = l_Lean_Expr_getAppNumArgs(v_type_2068_);
lean_inc(v_nargs_2075_);
v___x_2076_ = lean_mk_array(v_nargs_2075_, v_dummy_2074_);
v___x_2077_ = lean_unsigned_to_nat(1u);
v___x_2078_ = lean_nat_sub(v_nargs_2075_, v___x_2077_);
lean_dec(v_nargs_2075_);
v___x_2079_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__2(v_declName_2064_, v_xs_2067_, v_a_2065_, v_a_2066_, v_type_2068_, v___x_2076_, v___x_2078_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore___lam__0___boxed(lean_object* v_declName_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_xs_2083_, lean_object* v_type_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore___lam__0(v_declName_2080_, v_a_2081_, v_a_2082_, v_xs_2083_, v_type_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
lean_dec(v___y_2088_);
lean_dec_ref(v___y_2087_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_2091_, lean_object* v_msg_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
lean_object* v_toCold_2098_; lean_object* v_currRecDepth_2099_; lean_object* v_ref_2100_; uint16_t v_optionFlags_2101_; uint8_t v_suppressElabErrors_2102_; uint8_t v_checkDeprecated_2103_; uint8_t v_isRecordingDeps_2104_; lean_object* v_ref_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; 
v_toCold_2098_ = lean_ctor_get(v___y_2095_, 0);
v_currRecDepth_2099_ = lean_ctor_get(v___y_2095_, 1);
v_ref_2100_ = lean_ctor_get(v___y_2095_, 2);
v_optionFlags_2101_ = lean_ctor_get_uint16(v___y_2095_, sizeof(void*)*3);
v_suppressElabErrors_2102_ = lean_ctor_get_uint8(v___y_2095_, sizeof(void*)*3 + 2);
v_checkDeprecated_2103_ = lean_ctor_get_uint8(v___y_2095_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2104_ = lean_ctor_get_uint8(v___y_2095_, sizeof(void*)*3 + 4);
v_ref_2105_ = l_Lean_replaceRef(v_ref_2091_, v_ref_2100_);
lean_inc(v_currRecDepth_2099_);
lean_inc_ref(v_toCold_2098_);
v___x_2106_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2106_, 0, v_toCold_2098_);
lean_ctor_set(v___x_2106_, 1, v_currRecDepth_2099_);
lean_ctor_set(v___x_2106_, 2, v_ref_2105_);
lean_ctor_set_uint16(v___x_2106_, sizeof(void*)*3, v_optionFlags_2101_);
lean_ctor_set_uint8(v___x_2106_, sizeof(void*)*3 + 2, v_suppressElabErrors_2102_);
lean_ctor_set_uint8(v___x_2106_, sizeof(void*)*3 + 3, v_checkDeprecated_2103_);
lean_ctor_set_uint8(v___x_2106_, sizeof(void*)*3 + 4, v_isRecordingDeps_2104_);
v___x_2107_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0_spec__0___redArg(v_msg_2092_, v___y_2093_, v___y_2094_, v___x_2106_, v___y_2096_);
lean_dec_ref_known(v___x_2106_, 3);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_2108_, lean_object* v_msg_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v_res_2115_; 
v_res_2115_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2108_, v_msg_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v_ref_2108_);
return v_res_2115_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_2116_; 
v___x_2116_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2116_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_2118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
return v___x_2118_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2119_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_2120_ = lean_unsigned_to_nat(0u);
v___x_2121_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
lean_ctor_set(v___x_2121_, 2, v___x_2120_);
lean_ctor_set(v___x_2121_, 3, v___x_2120_);
lean_ctor_set(v___x_2121_, 4, v___x_2119_);
lean_ctor_set(v___x_2121_, 5, v___x_2119_);
lean_ctor_set(v___x_2121_, 6, v___x_2119_);
lean_ctor_set(v___x_2121_, 7, v___x_2119_);
lean_ctor_set(v___x_2121_, 8, v___x_2119_);
lean_ctor_set(v___x_2121_, 9, v___x_2119_);
lean_ctor_set(v___x_2121_, 10, v___x_2119_);
return v___x_2121_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2122_ = lean_unsigned_to_nat(32u);
v___x_2123_ = lean_mk_empty_array_with_capacity(v___x_2122_);
v___x_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
return v___x_2124_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4(void){
_start:
{
size_t v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2125_ = ((size_t)5ULL);
v___x_2126_ = lean_unsigned_to_nat(0u);
v___x_2127_ = lean_unsigned_to_nat(32u);
v___x_2128_ = lean_mk_empty_array_with_capacity(v___x_2127_);
v___x_2129_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_2130_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2130_, 0, v___x_2129_);
lean_ctor_set(v___x_2130_, 1, v___x_2128_);
lean_ctor_set(v___x_2130_, 2, v___x_2126_);
lean_ctor_set(v___x_2130_, 3, v___x_2126_);
lean_ctor_set_usize(v___x_2130_, 4, v___x_2125_);
return v___x_2130_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2131_ = lean_box(1);
v___x_2132_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_2133_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_2134_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2133_);
lean_ctor_set(v___x_2134_, 1, v___x_2132_);
lean_ctor_set(v___x_2134_, 2, v___x_2131_);
return v___x_2134_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; 
v___x_2136_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6));
v___x_2137_ = l_Lean_stringToMessageData(v___x_2136_);
return v___x_2137_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2139_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8));
v___x_2140_ = l_Lean_stringToMessageData(v___x_2139_);
return v___x_2140_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11(void){
_start:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2142_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10));
v___x_2143_ = l_Lean_stringToMessageData(v___x_2142_);
return v___x_2143_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13(void){
_start:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2145_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12));
v___x_2146_ = l_Lean_stringToMessageData(v___x_2145_);
return v___x_2146_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15(void){
_start:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14));
v___x_2149_ = l_Lean_stringToMessageData(v___x_2148_);
return v___x_2149_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17(void){
_start:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2151_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16));
v___x_2152_ = l_Lean_stringToMessageData(v___x_2151_);
return v___x_2152_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19(void){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__18));
v___x_2155_ = l_Lean_stringToMessageData(v___x_2154_);
return v___x_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_2156_, lean_object* v_declHint_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v_env_2162_; uint8_t v___x_2163_; 
v___x_2160_ = lean_box(0);
v___x_2161_ = lean_st_ref_get(v___y_2158_);
v_env_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc_ref(v_env_2162_);
lean_dec(v___x_2161_);
v___x_2163_ = l_Lean_Name_isAnonymous(v_declHint_2157_);
if (v___x_2163_ == 0)
{
uint8_t v_isExporting_2164_; 
v_isExporting_2164_ = lean_ctor_get_uint8(v_env_2162_, sizeof(void*)*13);
if (v_isExporting_2164_ == 0)
{
lean_object* v___x_2165_; 
lean_dec_ref(v_env_2162_);
lean_dec(v_declHint_2157_);
v___x_2165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2165_, 0, v_msg_2156_);
return v___x_2165_;
}
else
{
lean_object* v___x_2166_; uint8_t v___x_2167_; 
lean_inc_ref(v_env_2162_);
v___x_2166_ = l_Lean_Environment_setExporting(v_env_2162_, v___x_2163_);
lean_inc(v_declHint_2157_);
lean_inc_ref(v___x_2166_);
v___x_2167_ = l_Lean_Environment_contains(v___x_2166_, v_declHint_2157_, v_isExporting_2164_);
if (v___x_2167_ == 0)
{
lean_object* v___x_2168_; 
lean_dec_ref(v___x_2166_);
lean_dec_ref(v_env_2162_);
lean_dec(v_declHint_2157_);
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v_msg_2156_);
return v___x_2168_;
}
else
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v_c_2174_; lean_object* v___x_2175_; 
v___x_2169_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2);
v___x_2170_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5);
v___x_2171_ = l_Lean_Options_empty;
lean_inc_ref(v___x_2166_);
v___x_2172_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2166_);
lean_ctor_set(v___x_2172_, 1, v___x_2169_);
lean_ctor_set(v___x_2172_, 2, v___x_2170_);
lean_ctor_set(v___x_2172_, 3, v___x_2171_);
lean_inc(v_declHint_2157_);
v___x_2173_ = l_Lean_MessageData_ofConstName(v_declHint_2157_, v___x_2163_);
v_c_2174_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2174_, 0, v___x_2172_);
lean_ctor_set(v_c_2174_, 1, v___x_2173_);
v___x_2175_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_2166_, v_declHint_2157_);
lean_dec_ref(v___x_2166_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
lean_dec_ref(v_env_2162_);
lean_dec(v_declHint_2157_);
v___x_2176_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_2177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2176_);
lean_ctor_set(v___x_2177_, 1, v_c_2174_);
v___x_2178_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9);
v___x_2179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2177_);
lean_ctor_set(v___x_2179_, 1, v___x_2178_);
v___x_2180_ = l_Lean_MessageData_note(v___x_2179_);
v___x_2181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2181_, 0, v_msg_2156_);
lean_ctor_set(v___x_2181_, 1, v___x_2180_);
v___x_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
return v___x_2182_;
}
else
{
lean_object* v_val_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2217_; 
v_val_2183_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2185_ = v___x_2175_;
v_isShared_2186_ = v_isSharedCheck_2217_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_val_2183_);
lean_dec(v___x_2175_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2217_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2187_; lean_object* v_moduleNames_2188_; lean_object* v_mod_2189_; uint8_t v___x_2190_; 
v___x_2187_ = l_Lean_Environment_header(v_env_2162_);
lean_dec_ref(v_env_2162_);
v_moduleNames_2188_ = lean_ctor_get(v___x_2187_, 4);
lean_inc_ref(v_moduleNames_2188_);
lean_dec_ref(v___x_2187_);
v_mod_2189_ = lean_array_get(v___x_2160_, v_moduleNames_2188_, v_val_2183_);
lean_dec(v_val_2183_);
lean_dec_ref(v_moduleNames_2188_);
v___x_2190_ = l_Lean_isPrivateName(v_declHint_2157_);
lean_dec(v_declHint_2157_);
if (v___x_2190_ == 0)
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2202_; 
v___x_2191_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11);
v___x_2192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2191_);
lean_ctor_set(v___x_2192_, 1, v_c_2174_);
v___x_2193_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13);
v___x_2194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2192_);
lean_ctor_set(v___x_2194_, 1, v___x_2193_);
v___x_2195_ = l_Lean_MessageData_ofName(v_mod_2189_);
v___x_2196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2194_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15);
v___x_2198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2196_);
lean_ctor_set(v___x_2198_, 1, v___x_2197_);
v___x_2199_ = l_Lean_MessageData_note(v___x_2198_);
v___x_2200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2200_, 0, v_msg_2156_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
if (v_isShared_2186_ == 0)
{
lean_ctor_set_tag(v___x_2185_, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2200_);
v___x_2202_ = v___x_2185_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2200_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
else
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2215_; 
v___x_2204_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_2205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2204_);
lean_ctor_set(v___x_2205_, 1, v_c_2174_);
v___x_2206_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__17);
v___x_2207_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2205_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
v___x_2208_ = l_Lean_MessageData_ofName(v_mod_2189_);
v___x_2209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2207_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__19);
v___x_2211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2209_);
lean_ctor_set(v___x_2211_, 1, v___x_2210_);
v___x_2212_ = l_Lean_MessageData_note(v___x_2211_);
v___x_2213_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2213_, 0, v_msg_2156_);
lean_ctor_set(v___x_2213_, 1, v___x_2212_);
if (v_isShared_2186_ == 0)
{
lean_ctor_set_tag(v___x_2185_, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2213_);
v___x_2215_ = v___x_2185_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v___x_2213_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2218_; 
lean_dec_ref(v_env_2162_);
lean_dec(v_declHint_2157_);
v___x_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2218_, 0, v_msg_2156_);
return v___x_2218_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_2219_, lean_object* v_declHint_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_2219_, v_declHint_2220_, v___y_2221_);
lean_dec(v___y_2221_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_msg_2224_, lean_object* v_declHint_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
lean_object* v___x_2231_; lean_object* v_a_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2241_; 
v___x_2231_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_2224_, v_declHint_2225_, v___y_2229_);
v_a_2232_ = lean_ctor_get(v___x_2231_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2231_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2234_ = v___x_2231_;
v_isShared_2235_ = v_isSharedCheck_2241_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_a_2232_);
lean_dec(v___x_2231_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2241_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2239_; 
v___x_2236_ = l_Lean_unknownIdentifierMessageTag;
v___x_2237_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
lean_ctor_set(v___x_2237_, 1, v_a_2232_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 0, v___x_2237_);
v___x_2239_ = v___x_2234_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v___x_2237_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object* v_msg_2242_, lean_object* v_declHint_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_2242_, v_declHint_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_2250_, lean_object* v_msg_2251_, lean_object* v_declHint_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v___x_2258_; lean_object* v_a_2259_; lean_object* v___x_2260_; 
v___x_2258_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_2251_, v_declHint_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref(v___x_2258_);
v___x_2260_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2250_, v_a_2259_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_2261_, lean_object* v_msg_2262_, lean_object* v_declHint_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2261_, v_msg_2262_, v_declHint_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec(v_ref_2261_);
return v_res_2269_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_2272_ = l_Lean_stringToMessageData(v___x_2271_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_2273_, lean_object* v_constName_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v___x_2280_; uint8_t v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2280_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_2281_ = 0;
lean_inc(v_constName_2274_);
v___x_2282_ = l_Lean_MessageData_ofConstName(v_constName_2274_, v___x_2281_);
v___x_2283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2280_);
lean_ctor_set(v___x_2283_, 1, v___x_2282_);
v___x_2284_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1, &l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1_once, _init_l_Lean_getConstInfoRec___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f_spec__0___closed__1);
v___x_2285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2283_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2273_, v___x_2285_, v_constName_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_2287_, lean_object* v_constName_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg(v_ref_2287_, v_constName_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_);
lean_dec(v___y_2292_);
lean_dec_ref(v___y_2291_);
lean_dec(v___y_2290_);
lean_dec_ref(v___y_2289_);
lean_dec(v_ref_2287_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0___redArg(lean_object* v_constName_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_ref_2301_; lean_object* v___x_2302_; 
v_ref_2301_ = lean_ctor_get(v___y_2298_, 2);
v___x_2302_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg(v_ref_2301_, v_constName_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0___redArg___boxed(lean_object* v_constName_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0___redArg(v_constName_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
lean_dec(v___y_2307_);
lean_dec_ref(v___y_2306_);
lean_dec(v___y_2305_);
lean_dec_ref(v___y_2304_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0(lean_object* v_constName_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
lean_object* v___x_2316_; lean_object* v_env_2317_; uint8_t v___x_2318_; lean_object* v___x_2319_; 
v___x_2316_ = lean_st_ref_get(v___y_2314_);
v_env_2317_ = lean_ctor_get(v___x_2316_, 0);
lean_inc_ref(v_env_2317_);
lean_dec(v___x_2316_);
v___x_2318_ = 0;
lean_inc(v_constName_2310_);
v___x_2319_ = l_Lean_Environment_find_x3f(v_env_2317_, v_constName_2310_, v___x_2318_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v___x_2320_; 
v___x_2320_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0___redArg(v_constName_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
return v___x_2320_;
}
else
{
lean_object* v_val_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2328_; 
lean_dec(v_constName_2310_);
v_val_2321_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2323_ = v___x_2319_;
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_val_2321_);
lean_dec(v___x_2319_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
lean_ctor_set_tag(v___x_2323_, 0);
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_val_2321_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0___boxed(lean_object* v_constName_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0(v_constName_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore(lean_object* v_declName_2336_, lean_object* v_majorPos_x3f_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_){
_start:
{
lean_object* v___x_2343_; 
lean_inc(v_declName_2336_);
v___x_2343_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0(v_declName_2336_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2345_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2343_, 1);
lean_inc(v_declName_2336_);
v___x_2345_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_getMajorPosIfAuxRecursor_x3f(v_declName_2336_, v_majorPos_x3f_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; lean_object* v___f_2347_; lean_object* v___x_2348_; uint8_t v___x_2349_; lean_object* v___x_2350_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_a_2346_);
lean_dec_ref_known(v___x_2345_, 1);
lean_inc(v_a_2344_);
v___f_2347_ = lean_alloc_closure((void*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2347_, 0, v_declName_2336_);
lean_closure_set(v___f_2347_, 1, v_a_2346_);
lean_closure_set(v___f_2347_, 2, v_a_2344_);
v___x_2348_ = l_Lean_ConstantInfo_type(v_a_2344_);
lean_dec(v_a_2344_);
v___x_2349_ = 0;
v___x_2350_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_getProduceMotiveAndRecursive_spec__2___redArg(v___x_2348_, v___f_2347_, v___x_2349_, v___x_2349_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_);
return v___x_2350_;
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
lean_dec(v_a_2344_);
lean_dec(v_declName_2336_);
v_a_2351_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v___x_2345_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2345_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_a_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
else
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2366_; 
lean_dec(v_majorPos_x3f_2337_);
lean_dec(v_declName_2336_);
v_a_2359_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2361_ = v___x_2343_;
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v___x_2343_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2364_; 
if (v_isShared_2362_ == 0)
{
v___x_2364_ = v___x_2361_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_a_2359_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore___boxed(lean_object* v_declName_2367_, lean_object* v_majorPos_x3f_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore(v_declName_2367_, v_majorPos_x3f_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_);
lean_dec(v_a_2372_);
lean_dec_ref(v_a_2371_);
lean_dec(v_a_2370_);
lean_dec_ref(v_a_2369_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0(lean_object* v_00_u03b1_2375_, lean_object* v_constName_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v___x_2382_; 
v___x_2382_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0___redArg(v_constName_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2383_, lean_object* v_constName_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0(v_00_u03b1_2383_, v_constName_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2391_, lean_object* v_ref_2392_, lean_object* v_constName_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___redArg(v_ref_2392_, v_constName_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2400_, lean_object* v_ref_2401_, lean_object* v_constName_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1(v_00_u03b1_2400_, v_ref_2401_, v_constName_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v_ref_2401_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_2409_, lean_object* v_ref_2410_, lean_object* v_msg_2411_, lean_object* v_declHint_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_){
_start:
{
lean_object* v___x_2418_; 
v___x_2418_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2410_, v_msg_2411_, v_declHint_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_2419_, lean_object* v_ref_2420_, lean_object* v_msg_2421_, lean_object* v_declHint_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_2419_, v_ref_2420_, v_msg_2421_, v_declHint_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v_ref_2420_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object* v_msg_2429_, lean_object* v_declHint_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_){
_start:
{
lean_object* v___x_2436_; 
v___x_2436_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_2429_, v_declHint_2430_, v___y_2434_);
return v___x_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_2437_, lean_object* v_declHint_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(v_msg_2437_, v_declHint_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_2445_, lean_object* v_ref_2446_, lean_object* v_msg_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2446_, v_msg_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_2454_, lean_object* v_ref_2455_, lean_object* v_msg_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_2454_, v_ref_2455_, v_msg_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
lean_dec(v___y_2460_);
lean_dec_ref(v___y_2459_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec(v_ref_2455_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0_spec__1(lean_object* v_msgData_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_){
_start:
{
lean_object* v___x_2467_; lean_object* v_toCold_2468_; lean_object* v_env_2469_; lean_object* v_options_2470_; uint8_t v___x_2471_; lean_object* v_env_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2467_ = lean_st_ref_get(v___y_2465_);
v_toCold_2468_ = lean_ctor_get(v___y_2464_, 0);
v_env_2469_ = lean_ctor_get(v___x_2467_, 0);
lean_inc_ref(v_env_2469_);
lean_dec(v___x_2467_);
v_options_2470_ = lean_ctor_get(v_toCold_2468_, 2);
v___x_2471_ = 0;
v_env_2472_ = l_Lean_Environment_setRecordingDeps(v_env_2469_, v___x_2471_);
v___x_2473_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2);
v___x_2474_ = lean_unsigned_to_nat(32u);
v___x_2475_ = lean_mk_empty_array_with_capacity(v___x_2474_);
lean_dec_ref(v___x_2475_);
v___x_2476_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5);
lean_inc_ref(v_options_2470_);
v___x_2477_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2477_, 0, v_env_2472_);
lean_ctor_set(v___x_2477_, 1, v___x_2473_);
lean_ctor_set(v___x_2477_, 2, v___x_2476_);
lean_ctor_set(v___x_2477_, 3, v_options_2470_);
v___x_2478_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2477_);
lean_ctor_set(v___x_2478_, 1, v_msgData_2463_);
v___x_2479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0_spec__1(v_msgData_2480_, v___y_2481_, v___y_2482_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0___redArg(lean_object* v_msg_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_){
_start:
{
lean_object* v_ref_2489_; lean_object* v___x_2490_; lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2499_; 
v_ref_2489_ = lean_ctor_get(v___y_2486_, 2);
v___x_2490_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0_spec__1(v_msg_2485_, v___y_2486_, v___y_2487_);
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2493_ = v___x_2490_;
v_isShared_2494_ = v_isSharedCheck_2499_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2490_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2499_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2495_; lean_object* v___x_2497_; 
lean_inc(v_ref_2489_);
v___x_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2495_, 0, v_ref_2489_);
lean_ctor_set(v___x_2495_, 1, v_a_2491_);
if (v_isShared_2494_ == 0)
{
lean_ctor_set_tag(v___x_2493_, 1);
lean_ctor_set(v___x_2493_, 0, v___x_2495_);
v___x_2497_ = v___x_2493_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v___x_2495_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0___redArg___boxed(lean_object* v_msg_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0___redArg(v_msg_2500_, v___y_2501_, v___y_2502_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___redArg(lean_object* v_ref_2505_, lean_object* v_msg_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v_toCold_2510_; lean_object* v_currRecDepth_2511_; lean_object* v_ref_2512_; uint16_t v_optionFlags_2513_; uint8_t v_suppressElabErrors_2514_; uint8_t v_checkDeprecated_2515_; uint8_t v_isRecordingDeps_2516_; lean_object* v_ref_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v_toCold_2510_ = lean_ctor_get(v___y_2507_, 0);
v_currRecDepth_2511_ = lean_ctor_get(v___y_2507_, 1);
v_ref_2512_ = lean_ctor_get(v___y_2507_, 2);
v_optionFlags_2513_ = lean_ctor_get_uint16(v___y_2507_, sizeof(void*)*3);
v_suppressElabErrors_2514_ = lean_ctor_get_uint8(v___y_2507_, sizeof(void*)*3 + 2);
v_checkDeprecated_2515_ = lean_ctor_get_uint8(v___y_2507_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2516_ = lean_ctor_get_uint8(v___y_2507_, sizeof(void*)*3 + 4);
v_ref_2517_ = l_Lean_replaceRef(v_ref_2505_, v_ref_2512_);
lean_inc(v_currRecDepth_2511_);
lean_inc_ref(v_toCold_2510_);
v___x_2518_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2518_, 0, v_toCold_2510_);
lean_ctor_set(v___x_2518_, 1, v_currRecDepth_2511_);
lean_ctor_set(v___x_2518_, 2, v_ref_2517_);
lean_ctor_set_uint16(v___x_2518_, sizeof(void*)*3, v_optionFlags_2513_);
lean_ctor_set_uint8(v___x_2518_, sizeof(void*)*3 + 2, v_suppressElabErrors_2514_);
lean_ctor_set_uint8(v___x_2518_, sizeof(void*)*3 + 3, v_checkDeprecated_2515_);
lean_ctor_set_uint8(v___x_2518_, sizeof(void*)*3 + 4, v_isRecordingDeps_2516_);
v___x_2519_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0___redArg(v_msg_2506_, v___x_2518_, v___y_2508_);
lean_dec_ref_known(v___x_2518_, 3);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___redArg___boxed(lean_object* v_ref_2520_, lean_object* v_msg_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___redArg(v_ref_2520_, v_msg_2521_, v___y_2522_, v___y_2523_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec(v_ref_2520_);
return v_res_2525_;
}
}
static lean_object* _init_l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__6(void){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = ((lean_object*)(l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__5));
v___x_2537_ = l_Lean_stringToMessageData(v___x_2536_);
return v___x_2537_;
}
}
static lean_object* _init_l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__8(void){
_start:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2539_ = ((lean_object*)(l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__7));
v___x_2540_ = l_Lean_stringToMessageData(v___x_2539_);
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos(lean_object* v_stx_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; 
lean_inc(v_stx_2541_);
v___x_2545_ = l_Lean_Syntax_getKind(v_stx_2541_);
v___x_2546_ = ((lean_object*)(l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__4));
v___x_2547_ = lean_name_eq(v___x_2545_, v___x_2546_);
lean_dec(v___x_2545_);
if (v___x_2547_ == 0)
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = lean_obj_once(&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__6, &l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__6_once, _init_l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__6);
v___x_2549_ = l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___redArg(v_stx_2541_, v___x_2548_, v_a_2542_, v_a_2543_);
lean_dec(v_stx_2541_);
return v___x_2549_;
}
else
{
lean_object* v___x_2550_; lean_object* v___y_2552_; lean_object* v___y_2556_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2550_ = lean_unsigned_to_nat(1u);
v___x_2569_ = l_Lean_Syntax_getArg(v_stx_2541_, v___x_2550_);
v___x_2570_ = l_Lean_Syntax_isNatLit_x3f(v___x_2569_);
lean_dec(v___x_2569_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v___x_2571_; 
v___x_2571_ = lean_unsigned_to_nat(0u);
v___y_2556_ = v___x_2571_;
goto v___jp_2555_;
}
else
{
lean_object* v_val_2572_; 
v_val_2572_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_val_2572_);
lean_dec_ref_known(v___x_2570_, 1);
v___y_2556_ = v_val_2572_;
goto v___jp_2555_;
}
v___jp_2551_:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2553_ = lean_nat_sub(v___y_2552_, v___x_2550_);
lean_dec(v___y_2552_);
v___x_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2553_);
return v___x_2554_;
}
v___jp_2555_:
{
lean_object* v___x_2557_; uint8_t v___x_2558_; 
v___x_2557_ = lean_unsigned_to_nat(0u);
v___x_2558_ = lean_nat_dec_eq(v___y_2556_, v___x_2557_);
if (v___x_2558_ == 0)
{
lean_dec(v_stx_2541_);
v___y_2552_ = v___y_2556_;
goto v___jp_2551_;
}
else
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
lean_dec(v___y_2556_);
v___x_2559_ = lean_obj_once(&l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__8, &l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__8_once, _init_l_Lean_Meta_Attribute_Recursor_getMajorPos___closed__8);
v___x_2560_ = l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___redArg(v_stx_2541_, v___x_2559_, v_a_2542_, v_a_2543_);
lean_dec(v_stx_2541_);
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2560_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2560_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_a_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Attribute_Recursor_getMajorPos___boxed(lean_object* v_stx_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lean_Meta_Attribute_Recursor_getMajorPos(v_stx_2573_, v_a_2574_, v_a_2575_);
lean_dec(v_a_2575_);
lean_dec_ref(v_a_2574_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0(lean_object* v_00_u03b1_2578_, lean_object* v_ref_2579_, lean_object* v_msg_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v___x_2584_; 
v___x_2584_ = l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___redArg(v_ref_2579_, v_msg_2580_, v___y_2581_, v___y_2582_);
return v___x_2584_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0___boxed(lean_object* v_00_u03b1_2585_, lean_object* v_ref_2586_, lean_object* v_msg_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l_Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0(v_00_u03b1_2585_, v_ref_2586_, v_msg_2587_, v___y_2588_, v___y_2589_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec(v_ref_2586_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0(lean_object* v_00_u03b1_2592_, lean_object* v_msg_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
lean_object* v___x_2597_; 
v___x_2597_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0___redArg(v_msg_2593_, v___y_2594_, v___y_2595_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2598_, lean_object* v_msg_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Meta_Attribute_Recursor_getMajorPos_spec__0_spec__0(v_00_u03b1_2598_, v_msg_2599_, v___y_2600_, v___y_2601_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(lean_object* v_x_2604_, lean_object* v_stx_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v___x_2609_; 
v___x_2609_ = l_Lean_Meta_Attribute_Recursor_getMajorPos(v_stx_2605_, v___y_2606_, v___y_2607_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed(lean_object* v_x_2610_, lean_object* v_stx_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(v_x_2610_, v_stx_2611_, v___y_2612_, v___y_2613_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec(v_x_2610_);
return v_res_2615_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2616_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2616_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_2619_; 
v___x_2619_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v___dummy_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg();
return v_res_2621_;
}
}
static uint64_t _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2628_; uint64_t v___x_2629_; 
v___x_2628_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_));
v___x_2629_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2628_);
return v___x_2629_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2630_ = lean_uint64_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2631_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_));
v___x_2632_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
lean_ctor_set_uint64(v___x_2632_, sizeof(void*)*1, v___x_2630_);
return v___x_2632_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2633_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2633_);
return v___x_2634_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2635_ = lean_box(1);
v___x_2636_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_2637_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2638_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2637_);
lean_ctor_set(v___x_2638_, 1, v___x_2636_);
lean_ctor_set(v___x_2638_, 2, v___x_2635_);
return v___x_2638_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2641_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2642_ = lean_unsigned_to_nat(0u);
v___x_2643_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2642_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
lean_ctor_set(v___x_2643_, 2, v___x_2642_);
lean_ctor_set(v___x_2643_, 3, v___x_2642_);
lean_ctor_set(v___x_2643_, 4, v___x_2641_);
lean_ctor_set(v___x_2643_, 5, v___x_2641_);
lean_ctor_set(v___x_2643_, 6, v___x_2641_);
lean_ctor_set(v___x_2643_, 7, v___x_2641_);
lean_ctor_set(v___x_2643_, 8, v___x_2641_);
lean_ctor_set(v___x_2643_, 9, v___x_2641_);
lean_ctor_set(v___x_2643_, 10, v___x_2641_);
return v___x_2643_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2644_; 
v___x_2644_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0___redArg();
return v___x_2644_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2645_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
return v___x_2646_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2647_ = lean_unsigned_to_nat(0u);
v___x_2648_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2649_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2648_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
lean_ctor_set(v___x_2649_, 2, v___x_2647_);
return v___x_2649_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__10_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; 
v___x_2650_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2651_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__8_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2652_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2653_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2654_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2653_);
lean_ctor_set(v___x_2654_, 1, v___x_2652_);
lean_ctor_set(v___x_2654_, 2, v___x_2651_);
lean_ctor_set(v___x_2654_, 3, v___x_2652_);
lean_ctor_set(v___x_2654_, 4, v___x_2652_);
lean_ctor_set(v___x_2654_, 5, v___x_2652_);
lean_ctor_set(v___x_2654_, 6, v___x_2652_);
lean_ctor_set(v___x_2654_, 7, v___x_2650_);
return v___x_2654_;
}
}
static lean_object* _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__11_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2655_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
lean_ctor_set(v___x_2656_, 1, v___x_2655_);
lean_ctor_set(v___x_2656_, 2, v___x_2655_);
lean_ctor_set(v___x_2656_, 3, v___x_2655_);
lean_ctor_set(v___x_2656_, 4, v___x_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(lean_object* v___x_2657_, lean_object* v_declName_2658_, lean_object* v_majorPos_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v___x_2663_; uint8_t v___x_2664_; uint8_t v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2663_, 0, v_majorPos_2659_);
v___x_2664_ = 0;
v___x_2665_ = 1;
v___x_2666_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2667_ = lean_unsigned_to_nat(0u);
v___x_2668_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_2669_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2670_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_));
v___x_2671_ = lean_box(0);
lean_inc(v___x_2657_);
v___x_2672_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2672_, 0, v___x_2666_);
lean_ctor_set(v___x_2672_, 1, v___x_2657_);
lean_ctor_set(v___x_2672_, 2, v___x_2669_);
lean_ctor_set(v___x_2672_, 3, v___x_2670_);
lean_ctor_set(v___x_2672_, 4, v___x_2671_);
lean_ctor_set(v___x_2672_, 5, v___x_2667_);
lean_ctor_set(v___x_2672_, 6, v___x_2671_);
lean_ctor_set_uint8(v___x_2672_, sizeof(void*)*7, v___x_2664_);
lean_ctor_set_uint8(v___x_2672_, sizeof(void*)*7 + 1, v___x_2664_);
lean_ctor_set_uint8(v___x_2672_, sizeof(void*)*7 + 2, v___x_2664_);
lean_ctor_set_uint8(v___x_2672_, sizeof(void*)*7 + 3, v___x_2665_);
v___x_2673_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__6_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2674_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__10_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__10_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__10_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2675_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__11_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__11_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__11_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
v___x_2676_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2673_);
lean_ctor_set(v___x_2676_, 1, v___x_2674_);
lean_ctor_set(v___x_2676_, 2, v___x_2657_);
lean_ctor_set(v___x_2676_, 3, v___x_2668_);
lean_ctor_set(v___x_2676_, 4, v___x_2675_);
v___x_2677_ = lean_box(0);
v___x_2678_ = lean_st_mk_ref(v___x_2676_);
v___x_2679_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore(v_declName_2658_, v___x_2663_, v___x_2672_, v___x_2678_, v___y_2660_, v___y_2661_);
lean_dec_ref_known(v___x_2672_, 7);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2687_; 
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2687_ == 0)
{
lean_object* v_unused_2688_; 
v_unused_2688_ = lean_ctor_get(v___x_2679_, 0);
lean_dec(v_unused_2688_);
v___x_2681_ = v___x_2679_;
v_isShared_2682_ = v_isSharedCheck_2687_;
goto v_resetjp_2680_;
}
else
{
lean_dec(v___x_2679_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2687_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2683_; lean_object* v___x_2685_; 
v___x_2683_ = lean_st_ref_get(v___x_2678_);
lean_dec(v___x_2678_);
lean_dec(v___x_2683_);
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 0, v___x_2677_);
v___x_2685_ = v___x_2681_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v___x_2677_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
lean_dec(v___x_2678_);
v_a_2689_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2679_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2679_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed(lean_object* v___x_2697_, lean_object* v_declName_2698_, lean_object* v_majorPos_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v_res_2703_; 
v_res_2703_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(v___x_2697_, v_declName_2698_, v_majorPos_2699_, v___y_2700_, v___y_2701_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
return v_res_2703_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(uint8_t v___x_2704_, lean_object* v_env_2705_, lean_object* v_n_2706_, lean_object* v_x_2707_){
_start:
{
uint8_t v___x_2708_; 
v___x_2708_ = l_Lean_Environment_contains(v_env_2705_, v_n_2706_, v___x_2704_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed(lean_object* v___x_2709_, lean_object* v_env_2710_, lean_object* v_n_2711_, lean_object* v_x_2712_){
_start:
{
uint8_t v___x_787__boxed_2713_; uint8_t v_res_2714_; lean_object* v_r_2715_; 
v___x_787__boxed_2713_ = lean_unbox(v___x_2709_);
v_res_2714_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(v___x_787__boxed_2713_, v_env_2710_, v_n_2711_, v_x_2712_);
lean_dec(v_x_2712_);
v_r_2715_ = lean_box(v_res_2714_);
return v_r_2715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = ((lean_object*)(l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_));
v___x_2744_ = l_Lean_registerParametricAttribute___redArg(v___x_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2____boxed(lean_object* v_a_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_();
return v_res_2746_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_2747_){
_start:
{
lean_object* v___x_2748_; 
v___x_2748_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0___redArg(){
_start:
{
lean_object* v___x_2750_; 
v___x_2750_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v___dummy_2751_){
_start:
{
lean_object* v_res_2752_; 
v_res_2752_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0___redArg();
return v_res_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_2753_){
_start:
{
lean_object* v___x_2754_; 
v___x_2754_ = lean_obj_once(&l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_, &l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn___lam__1___closed__7_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_);
return v___x_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorPos_x3f(lean_object* v_env_2755_, lean_object* v_declName_2756_){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2757_ = lean_unsigned_to_nat(0u);
v___x_2758_ = l_Lean_Meta_recursorAttribute;
v___x_2759_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_2757_, v___x_2758_, v_env_2755_, v_declName_2756_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorInfo(lean_object* v_declName_2760_, lean_object* v_majorPos_x3f_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_){
_start:
{
lean_object* v___x_2767_; 
v___x_2767_ = lean_st_ref_get(v_a_2765_);
if (lean_obj_tag(v_majorPos_x3f_2761_) == 0)
{
lean_object* v_env_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v_env_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc_ref(v_env_2768_);
lean_dec(v___x_2767_);
lean_inc(v_declName_2760_);
v___x_2769_ = l_Lean_Meta_getMajorPos_x3f(v_env_2768_, v_declName_2760_);
v___x_2770_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore(v_declName_2760_, v___x_2769_, v_a_2762_, v_a_2763_, v_a_2764_, v_a_2765_);
return v___x_2770_;
}
else
{
lean_object* v___x_2771_; 
lean_dec(v___x_2767_);
v___x_2771_ = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_mkRecursorInfoCore(v_declName_2760_, v_majorPos_x3f_2761_, v_a_2762_, v_a_2763_, v_a_2764_, v_a_2765_);
return v___x_2771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorInfo___boxed(lean_object* v_declName_2772_, lean_object* v_majorPos_x3f_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lean_Meta_mkRecursorInfo(v_declName_2772_, v_majorPos_x3f_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_);
lean_dec(v_a_2777_);
lean_dec_ref(v_a_2776_);
lean_dec(v_a_2775_);
lean_dec_ref(v_a_2774_);
return v_res_2779_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_RecursorInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_RecursorInfo_0__Lean_Meta_initFn_00___x40_Lean_Meta_RecursorInfo_3248140585____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_recursorAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_recursorAttribute);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_RecursorInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_RecursorInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_RecursorInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_RecursorInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_RecursorInfo(builtin);
}
#ifdef __cplusplus
}
#endif
