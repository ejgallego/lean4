// Lean compiler output
// Module: Lean.Elab.Deriving.BEq
// Imports: public import Lean.Data.Options import Lean.Elab.Deriving.Basic import Lean.Elab.Deriving.Util import Lean.Meta.Constructions.CtorIdx import Lean.Meta.Constructions.CasesOnSameCtor import Lean.Meta.SameCtorUtils import Init.Data.Array.OfFn
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* l_Lean_InductiveVal_numTypeFormers(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_occursOrInType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_groupByMutualBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* l_Lean_mkCtorIdxName(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnSameCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Array_mkArray3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isInductiveCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerDerivingHandler(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "deriving"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "linear_construction_threshold"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(38, 127, 229, 132, 157, 42, 70, 134)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(155, 188, 150, 126, 202, 210, 87, 56)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(2, 35, 48, 234, 208, 30, 169, 118)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 350, .m_capacity = 350, .m_length = 349, .m_data = "If the inductive data type has this many or more constructors, use a different implementation for implementing `BEq` that avoids the quadratic code size produced by the default implementation.\n\nThe alternative construction compiles to less efficient code in some cases, so by default it is only used for inductive types with 10 or more constructors."};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(202, 58, 65, 192, 197, 114, 188, 72)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(254, 165, 225, 156, 115, 202, 230, 35)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__15_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(71, 221, 4, 81, 40, 1, 30, 26)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__16_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 242, 38, 149, 146, 119, 211, 138)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__17_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(120, 78, 208, 242, 44, 150, 100, 230)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__18_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(170, 129, 112, 189, 241, 241, 163, 103)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__19_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(222, 208, 129, 142, 173, 19, 33, 85)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(71, 160, 64, 149, 162, 78, 171, 187)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__21_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(38, 92, 31, 179, 36, 246, 140, 67)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__22_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 196, 248, 71, 32, 17, 147, 163)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_deriving_beq_linear__construction__threshold;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 214, 196, 140, 104, 187, 164, 111)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__8_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__14_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(47, 22, 244, 233, 226, 169, 241, 142)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_&&_"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(6, 195, 203, 117, 177, 125, 57, 22)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_==_"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__6_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(25, 251, 60, 160, 118, 54, 158, 27)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=="};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "&&"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__9_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "termDepIfThenElse"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__10_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(191, 94, 17, 11, 145, 108, 236, 173)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__11 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__11_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__12_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__13_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__14_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__14_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__15 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__15_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__17 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__17_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__18 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__18_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__19 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__19_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__20 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__20_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__22 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__22_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__23 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__23_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__24 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__24_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__24_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__26 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__26_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__26_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cases"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__28 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__28_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__28_value),LEAN_SCALAR_PTR_LITERAL(197, 49, 98, 208, 150, 151, 163, 74)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elimTarget"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__30 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__30_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(136, 63, 46, 91, 99, 29, 205, 171)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__32 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__32_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__34 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__34_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__34_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__36 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__36_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__37 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__37_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__37_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__38 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__38_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__39 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__39_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(230, 230, 99, 85, 138, 169, 166, 218)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(242, 26, 2, 19, 145, 121, 166, 213)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__41_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__42 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__42_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__43 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__43_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__44_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__43_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__44 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__44_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__44_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__45 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__45_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__46_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__46_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__46 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__46_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__46_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__47 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__47_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__47_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__48 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__48_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__45_value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__48_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__49 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__49_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__42_value),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__49_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__50 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__50_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__51 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__51_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__51_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_of_beq"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__53 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__53_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__54;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__53_value),LEAN_SCALAR_PTR_LITERAL(222, 43, 1, 254, 31, 20, 2, 112)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__55 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__55_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LawfulBEq"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__56 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__56_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__56_value),LEAN_SCALAR_PTR_LITERAL(198, 131, 20, 143, 70, 69, 65, 69)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__57_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__53_value),LEAN_SCALAR_PTR_LITERAL(55, 38, 224, 243, 7, 50, 169, 202)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__57 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__57_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__57_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__58 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__58_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__58_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__59 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__59_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__60 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__60_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__61 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__61_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__61_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__63 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__63_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__64 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__64_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__64_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__65 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__65_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "inaccessible"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__66 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__66_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__66_value),LEAN_SCALAR_PTR_LITERAL(243, 90, 7, 119, 108, 205, 19, 233)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".("};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__68 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__68_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__1;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(235, 97, 249, 134, 197, 220, 12, 91)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__3_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__3_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__4_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__8_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__10___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__3_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__47_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__45_value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__6_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__42_value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__7_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Elab.Deriving.BEq"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Elab.Deriving.BEq.0.Lean.Elab.Deriving.BEq.mkMatchNew"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: header.targetNames.size == 2\n\n  "};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__3;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "match_on_same_ctor"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__4_value),LEAN_SCALAR_PTR_LITERAL(78, 38, 237, 47, 106, 10, 11, 248)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__6_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Nat.decEq"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__9;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decEq"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__10_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__11_value),LEAN_SCALAR_PTR_LITERAL(13, 188, 70, 193, 211, 173, 121, 176)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__12_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__13_value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__15_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__16_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__17 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__17_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__19 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isTrue"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__20 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__20_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__21;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__20_value),LEAN_SCALAR_PTR_LITERAL(125, 82, 240, 34, 69, 121, 64, 234)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__22 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__23 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__23_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__23_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__24_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__20_value),LEAN_SCALAR_PTR_LITERAL(9, 43, 53, 182, 5, 16, 39, 1)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__24 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__24_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__25 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__25_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__26 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__26_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isFalse"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__27 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__27_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__28;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__27_value),LEAN_SCALAR_PTR_LITERAL(113, 70, 3, 12, 31, 103, 230, 247)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__29 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__29_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__23_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__30_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__27_value),LEAN_SCALAR_PTR_LITERAL(21, 55, 194, 143, 15, 194, 124, 204)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__30 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__31 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__31_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__31_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__32 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__32_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__33 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__33_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__34;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__33_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__35 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__35_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__35_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__36 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__36_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__37 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__37_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__1_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__5_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__8_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__10_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__12 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__12_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__16 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__4_value),LEAN_SCALAR_PTR_LITERAL(155, 20, 163, 238, 100, 115, 187, 44)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__17 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__17_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__18 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__19 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__16_value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__19_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__20 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__21 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__21_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__21_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__23 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__24 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__24_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__25 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__25_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__24_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__25_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__27 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__27_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__27_value),LEAN_SCALAR_PTR_LITERAL(103, 175, 198, 167, 172, 79, 14, 207)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mutual"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 205, 8, 5, 164, 77, 17, 1)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "set_option"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__2_value),LEAN_SCALAR_PTR_LITERAL(216, 223, 149, 245, 150, 86, 134, 198)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "match.ignoreUnusedAlts"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__5;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ignoreUnusedAlts"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__6 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 5, 219, 45, 43, 52, 169, 192)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__6_value),LEAN_SCALAR_PTR_LITERAL(49, 254, 67, 85, 227, 127, 91, 187)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1_value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__8_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(82, 204, 183, 225, 123, 221, 75, 96)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__3;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__3;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__5 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__6;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(72, 55, 55, 9, 143, 73, 230, 150)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__7 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__8 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__9 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__8_value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__9_value)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__10 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "x.ctorIdx"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__11 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__12;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ctorIdx"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__13 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(2, 247, 218, 116, 51, 159, 161, 152)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__14 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "y.ctorIdx"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__15 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__15_value;
static lean_once_cell_t l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__16;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(72, 55, 55, 9, 143, 73, 230, 150)}};
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(85, 37, 232, 186, 208, 254, 208, 112)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__17 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumCmd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 30, 18, 84, 71, 173, 185, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__8_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "method_specs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__11;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(101, 159, 225, 215, 58, 146, 25, 204)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__13_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__1(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1___boxed__const__1 = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__20_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 135, 164, 219, 193, 11, 15, 193)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__2_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 118, 133, 101, 222, 86, 142, 163)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__4_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(47, 129, 53, 81, 247, 98, 179, 247)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(145, 213, 169, 55, 145, 123, 160, 112)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__6_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(71, 28, 210, 8, 101, 35, 72, 179)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__7_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(103, 53, 125, 167, 22, 113, 17, 93)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__8_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),((lean_object*)(((size_t)(993467269) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(40, 184, 182, 130, 80, 10, 154, 25)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__9_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__10_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(143, 174, 45, 45, 68, 195, 231, 187)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__11_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__12_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 45, 241, 81, 166, 228, 249, 231)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__13_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(98, 175, 82, 143, 146, 81, 47, 25)}};
static const lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
lean_inc(v_defValue_5_);
v___x_8_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_8_, 0, v_defValue_5_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_9_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_9_, 0, v_name_1_);
lean_ctor_set(v___x_9_, 1, v_ref_3_);
lean_ctor_set(v___x_9_, 2, v___x_8_);
lean_ctor_set(v___x_9_, 3, v_descr_6_);
lean_ctor_set(v___x_9_, 4, v_deprecation_x3f_7_);
v___x_10_ = lean_register_option(v_name_1_, v___x_9_);
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_18_; 
v_isSharedCheck_18_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_18_ == 0)
{
lean_object* v_unused_19_; 
v_unused_19_ = lean_ctor_get(v___x_10_, 0);
lean_dec(v_unused_19_);
v___x_12_ = v___x_10_;
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
else
{
lean_dec(v___x_10_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_14_; lean_object* v___x_16_; 
lean_inc(v_defValue_5_);
v___x_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_14_, 0, v_name_1_);
lean_ctor_set(v___x_14_, 1, v_defValue_5_);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_14_);
v___x_16_ = v___x_12_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_14_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
return v___x_16_;
}
}
}
else
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
lean_dec(v_name_1_);
v_a_20_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v___x_10_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_10_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_20_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_28_, lean_object* v_decl_29_, lean_object* v_ref_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__spec__0(v_name_28_, v_decl_29_, v_ref_30_);
lean_dec_ref(v_decl_29_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_90_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__3_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_));
v___x_91_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__5_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_));
v___x_92_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__23_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_));
v___x_93_ = l_Lean_Option_register___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4__spec__0(v___x_90_, v___x_91_, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4____boxed(lean_object* v_a_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_();
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader(lean_object* v_indVal_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_106_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0));
v___x_107_ = lean_unsigned_to_nat(2u);
v___x_108_ = l_Lean_Elab_Deriving_mkHeader(v___x_106_, v___x_107_, v_indVal_98_, v_a_99_, v_a_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___boxed(lean_object* v_indVal_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader(v_indVal_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_, v_a_115_);
lean_dec(v_a_115_);
lean_dec_ref(v_a_114_);
lean_dec(v_a_113_);
lean_dec_ref(v_a_112_);
lean_dec(v_a_111_);
lean_dec_ref(v_a_110_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___lam__0(lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v_ref_125_; uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v_ref_125_ = lean_ctor_get(v___y_122_, 2);
v___x_126_ = 0;
v___x_127_ = l_Lean_SourceInfo_fromRef(v_ref_125_, v___x_126_);
v___x_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___lam__0___boxed(lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___lam__0(v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg(lean_object* v_upperBound_146_, lean_object* v_a_147_, lean_object* v_b_148_, lean_object* v___y_149_){
_start:
{
uint8_t v___x_151_; 
v___x_151_ = lean_nat_dec_lt(v_a_147_, v_upperBound_146_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
lean_dec(v_a_147_);
v___x_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_152_, 0, v_b_148_);
return v___x_152_;
}
else
{
lean_object* v_ref_153_; uint8_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v_ref_153_ = lean_ctor_get(v___y_149_, 2);
v___x_154_ = 0;
v___x_155_ = l_Lean_SourceInfo_fromRef(v_ref_153_, v___x_154_);
v___x_156_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3));
v___x_157_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__4));
lean_inc(v___x_155_);
v___x_158_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_155_);
lean_ctor_set(v___x_158_, 1, v___x_157_);
v___x_159_ = l_Lean_Syntax_node1(v___x_155_, v___x_156_, v___x_158_);
v___x_160_ = lean_array_push(v_b_148_, v___x_159_);
v___x_161_ = lean_unsigned_to_nat(1u);
v___x_162_ = lean_nat_add(v_a_147_, v___x_161_);
lean_dec(v_a_147_);
v_a_147_ = v___x_162_;
v_b_148_ = v___x_160_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___boxed(lean_object* v_upperBound_164_, lean_object* v_a_165_, lean_object* v_b_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg(v_upperBound_164_, v_a_165_, v_b_166_, v___y_167_);
lean_dec_ref(v___y_167_);
lean_dec(v_upperBound_164_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__0(size_t v_sz_170_, size_t v_i_171_, lean_object* v_bs_172_){
_start:
{
uint8_t v___x_173_; 
v___x_173_ = lean_usize_dec_lt(v_i_171_, v_sz_170_);
if (v___x_173_ == 0)
{
return v_bs_172_;
}
else
{
lean_object* v_v_174_; lean_object* v___x_175_; lean_object* v_bs_x27_176_; size_t v___x_177_; size_t v___x_178_; lean_object* v___x_179_; 
v_v_174_ = lean_array_uget(v_bs_172_, v_i_171_);
v___x_175_ = lean_unsigned_to_nat(0u);
v_bs_x27_176_ = lean_array_uset(v_bs_172_, v_i_171_, v___x_175_);
v___x_177_ = ((size_t)1ULL);
v___x_178_ = lean_usize_add(v_i_171_, v___x_177_);
v___x_179_ = lean_array_uset(v_bs_x27_176_, v_i_171_, v_v_174_);
v_i_171_ = v___x_178_;
v_bs_172_ = v___x_179_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__0___boxed(lean_object* v_sz_181_, lean_object* v_i_182_, lean_object* v_bs_183_){
_start:
{
size_t v_sz_boxed_184_; size_t v_i_boxed_185_; lean_object* v_res_186_; 
v_sz_boxed_184_ = lean_unbox_usize(v_sz_181_);
lean_dec(v_sz_181_);
v_i_boxed_185_ = lean_unbox_usize(v_i_182_);
lean_dec(v_i_182_);
v_res_186_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__0(v_sz_boxed_184_, v_i_boxed_185_, v_bs_183_);
return v_res_186_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__1));
v___x_191_ = l_String_toRawSubstring_x27(v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13(void){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Array_mkArray0___redArg();
return v___x_214_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__14));
v___x_217_ = l_Lean_mkAtom(v___x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt(lean_object* v_indVal_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_numIndices_227_; lean_object* v___x_228_; lean_object* v_patterns_229_; lean_object* v___x_230_; 
v_numIndices_227_ = lean_ctor_get(v_indVal_219_, 2);
v___x_228_ = lean_unsigned_to_nat(0u);
v_patterns_229_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__0));
v___x_230_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg(v_numIndices_227_, v___x_228_, v_patterns_229_, v_a_224_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v_toCold_232_; lean_object* v_ref_233_; uint8_t v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v_a_243_; lean_object* v_quotContext_244_; lean_object* v_currMacroScope_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_275_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_a_231_);
lean_dec_ref_known(v___x_230_, 1);
v_toCold_232_ = lean_ctor_get(v_a_224_, 0);
v_ref_233_ = lean_ctor_get(v_a_224_, 2);
v___x_234_ = 0;
v___x_235_ = l_Lean_SourceInfo_fromRef(v_ref_233_, v___x_234_);
v___x_236_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3));
v___x_237_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__4));
lean_inc(v___x_235_);
v___x_238_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_235_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = l_Lean_Syntax_node1(v___x_235_, v___x_236_, v___x_238_);
lean_inc(v___x_239_);
v___x_240_ = lean_array_push(v_a_231_, v___x_239_);
v___x_241_ = lean_array_push(v___x_240_, v___x_239_);
v___x_242_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___lam__0(v_a_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_);
v_a_243_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_a_243_);
lean_dec_ref(v___x_242_);
v_quotContext_244_ = lean_ctor_get(v_toCold_232_, 8);
v_currMacroScope_245_ = lean_ctor_get(v_toCold_232_, 9);
v___x_246_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2);
v___x_247_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__3));
lean_inc(v_currMacroScope_245_);
lean_inc(v_quotContext_244_);
v___x_248_ = l_Lean_addMacroScope(v_quotContext_244_, v___x_247_, v_currMacroScope_245_);
v___x_249_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__7));
v___x_250_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_250_, 0, v_a_243_);
lean_ctor_set(v___x_250_, 1, v___x_246_);
lean_ctor_set(v___x_250_, 2, v___x_248_);
lean_ctor_set(v___x_250_, 3, v___x_249_);
v___x_251_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___lam__0(v_a_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_);
v_a_252_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_275_ == 0)
{
v___x_254_ = v___x_251_;
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_251_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; size_t v_sz_261_; size_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_273_; 
v___x_256_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9));
v___x_257_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__10));
lean_inc_n(v_a_252_, 4);
v___x_258_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_258_, 0, v_a_252_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_260_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
v_sz_261_ = lean_array_size(v___x_241_);
v___x_262_ = ((size_t)0ULL);
v___x_263_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__0(v_sz_261_, v___x_262_, v___x_241_);
v___x_264_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15);
v___x_265_ = l_Lean_mkSepArray(v___x_263_, v___x_264_);
lean_dec_ref(v___x_263_);
v___x_266_ = l_Array_append___redArg(v___x_260_, v___x_265_);
lean_dec_ref(v___x_265_);
v___x_267_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_267_, 0, v_a_252_);
lean_ctor_set(v___x_267_, 1, v___x_259_);
lean_ctor_set(v___x_267_, 2, v___x_266_);
v___x_268_ = l_Lean_Syntax_node1(v_a_252_, v___x_259_, v___x_267_);
v___x_269_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__16));
v___x_270_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_270_, 0, v_a_252_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = l_Lean_Syntax_node4(v_a_252_, v___x_256_, v___x_258_, v___x_268_, v___x_270_, v___x_250_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 0, v___x_271_);
v___x_273_ = v___x_254_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
v_a_276_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_230_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_230_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___boxed(lean_object* v_indVal_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt(v_indVal_284_, v_a_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_);
lean_dec(v_a_290_);
lean_dec_ref(v_a_289_);
lean_dec(v_a_288_);
lean_dec_ref(v_a_287_);
lean_dec(v_a_286_);
lean_dec_ref(v_a_285_);
lean_dec_ref(v_indVal_284_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1(lean_object* v_upperBound_293_, lean_object* v_inst_294_, lean_object* v_R_295_, lean_object* v_a_296_, lean_object* v_b_297_, lean_object* v_c_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg(v_upperBound_293_, v_a_296_, v_b_297_, v___y_303_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___boxed(lean_object* v_upperBound_307_, lean_object* v_inst_308_, lean_object* v_R_309_, lean_object* v_a_310_, lean_object* v_b_311_, lean_object* v_c_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1(v_upperBound_307_, v_inst_308_, v_R_309_, v_a_310_, v_b_311_, v_c_312_, v___y_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
lean_dec(v___y_318_);
lean_dec_ref(v___y_317_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v_upperBound_307_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg___lam__0(lean_object* v_k_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v_b_324_, lean_object* v_c_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v___x_331_; 
lean_inc(v___y_329_);
lean_inc_ref(v___y_328_);
lean_inc(v___y_327_);
lean_inc_ref(v___y_326_);
lean_inc(v___y_323_);
lean_inc_ref(v___y_322_);
v___x_331_ = lean_apply_9(v_k_321_, v_b_324_, v_c_325_, v___y_322_, v___y_323_, v___y_326_, v___y_327_, v___y_328_, v___y_329_, lean_box(0));
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg___lam__0___boxed(lean_object* v_k_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v_b_335_, lean_object* v_c_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg___lam__0(v_k_332_, v___y_333_, v___y_334_, v_b_335_, v_c_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg(lean_object* v_type_343_, lean_object* v_k_344_, uint8_t v_cleanupAnnotations_345_, uint8_t v_whnfType_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v___f_354_; lean_object* v___x_355_; 
lean_inc(v___y_348_);
lean_inc_ref(v___y_347_);
v___f_354_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_354_, 0, v_k_344_);
lean_closure_set(v___f_354_, 1, v___y_347_);
lean_closure_set(v___f_354_, 2, v___y_348_);
v___x_355_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_343_, v___f_354_, v_cleanupAnnotations_345_, v_whnfType_346_, v___y_349_, v___y_350_, v___y_351_, v___y_352_);
if (lean_obj_tag(v___x_355_) == 0)
{
return v___x_355_;
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_355_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_355_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg___boxed(lean_object* v_type_364_, lean_object* v_k_365_, lean_object* v_cleanupAnnotations_366_, lean_object* v_whnfType_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_375_; uint8_t v_whnfType_boxed_376_; lean_object* v_res_377_; 
v_cleanupAnnotations_boxed_375_ = lean_unbox(v_cleanupAnnotations_366_);
v_whnfType_boxed_376_ = lean_unbox(v_whnfType_367_);
v_res_377_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg(v_type_364_, v_k_365_, v_cleanupAnnotations_boxed_375_, v_whnfType_boxed_376_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4(lean_object* v_00_u03b1_378_, lean_object* v_type_379_, lean_object* v_k_380_, uint8_t v_cleanupAnnotations_381_, uint8_t v_whnfType_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg(v_type_379_, v_k_380_, v_cleanupAnnotations_381_, v_whnfType_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___boxed(lean_object* v_00_u03b1_391_, lean_object* v_type_392_, lean_object* v_k_393_, lean_object* v_cleanupAnnotations_394_, lean_object* v_whnfType_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_403_; uint8_t v_whnfType_boxed_404_; lean_object* v_res_405_; 
v_cleanupAnnotations_boxed_403_ = lean_unbox(v_cleanupAnnotations_394_);
v_whnfType_boxed_404_ = lean_unbox(v_whnfType_395_);
v_res_405_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4(v_00_u03b1_391_, v_type_392_, v_k_393_, v_cleanupAnnotations_boxed_403_, v_whnfType_boxed_404_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2___redArg(lean_object* v___x_406_, lean_object* v_as_407_, size_t v_i_408_, size_t v_stop_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
uint8_t v___x_415_; 
v___x_415_ = lean_usize_dec_eq(v_i_408_, v_stop_409_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_array_uget_borrowed(v_as_407_, v_i_408_);
lean_inc(v___y_413_);
lean_inc_ref(v___y_412_);
lean_inc(v___y_411_);
lean_inc_ref(v___y_410_);
lean_inc(v___x_416_);
v___x_417_ = lean_infer_type(v___x_416_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_431_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_431_ == 0)
{
v___x_420_ = v___x_417_;
v_isShared_421_ = v_isSharedCheck_431_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_431_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = l_Lean_Expr_fvarId_x21(v___x_406_);
v___x_423_ = l_Lean_Expr_containsFVar(v_a_418_, v___x_422_);
lean_dec(v___x_422_);
lean_dec(v_a_418_);
if (v___x_423_ == 0)
{
size_t v___x_424_; size_t v___x_425_; 
lean_del_object(v___x_420_);
v___x_424_ = ((size_t)1ULL);
v___x_425_ = lean_usize_add(v_i_408_, v___x_424_);
v_i_408_ = v___x_425_;
goto _start;
}
else
{
lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_427_ = lean_box(v___x_423_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 0, v___x_427_);
v___x_429_ = v___x_420_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_a_432_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_417_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_417_);
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
else
{
uint8_t v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_440_ = 0;
v___x_441_ = lean_box(v___x_440_);
v___x_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
return v___x_442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2___redArg___boxed(lean_object* v___x_443_, lean_object* v_as_444_, lean_object* v_i_445_, lean_object* v_stop_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
size_t v_i_boxed_452_; size_t v_stop_boxed_453_; lean_object* v_res_454_; 
v_i_boxed_452_ = lean_unbox_usize(v_i_445_);
lean_dec(v_i_445_);
v_stop_boxed_453_ = lean_unbox_usize(v_stop_446_);
lean_dec(v_stop_446_);
v_res_454_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2___redArg(v___x_443_, v_as_444_, v_i_boxed_452_, v_stop_boxed_453_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec_ref(v_as_444_);
lean_dec_ref(v___x_443_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
lean_object* v_ref_462_; uint8_t v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_ref_462_ = lean_ctor_get(v___y_459_, 2);
v___x_463_ = 0;
v___x_464_ = l_Lean_SourceInfo_fromRef(v_ref_462_, v___x_463_);
v___x_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0___boxed(lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
return v_res_473_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__15));
v___x_498_ = l_String_toRawSubstring_x27(v___x_497_);
return v___x_498_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__39));
v___x_553_ = l_String_toRawSubstring_x27(v___x_552_);
return v___x_553_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__54(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__53));
v___x_590_ = l_String_toRawSubstring_x27(v___x_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg(lean_object* v_upperBound_624_, lean_object* v_indVal_625_, lean_object* v___x_626_, lean_object* v_xs_627_, lean_object* v_a_628_, lean_object* v_auxFunName_629_, lean_object* v_a_630_, lean_object* v_b_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v_a_640_; uint8_t v___x_644_; 
v___x_644_ = lean_nat_dec_lt(v_a_630_, v_upperBound_624_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; 
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v_b_631_);
return v___x_645_;
}
else
{
lean_object* v_snd_646_; lean_object* v_snd_647_; lean_object* v_fst_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_990_; 
v_snd_646_ = lean_ctor_get(v_b_631_, 1);
lean_inc(v_snd_646_);
v_snd_647_ = lean_ctor_get(v_snd_646_, 1);
lean_inc(v_snd_647_);
v_fst_648_ = lean_ctor_get(v_b_631_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v_b_631_);
if (v_isSharedCheck_990_ == 0)
{
lean_object* v_unused_991_; 
v_unused_991_ = lean_ctor_get(v_b_631_, 1);
lean_dec(v_unused_991_);
v___x_650_ = v_b_631_;
v_isShared_651_ = v_isSharedCheck_990_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_fst_648_);
lean_dec(v_b_631_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_990_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v_fst_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_988_; 
v_fst_652_ = lean_ctor_get(v_snd_646_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v_snd_646_);
if (v_isSharedCheck_988_ == 0)
{
lean_object* v_unused_989_; 
v_unused_989_ = lean_ctor_get(v_snd_646_, 1);
lean_dec(v_unused_989_);
v___x_654_ = v_snd_646_;
v_isShared_655_ = v_isSharedCheck_988_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_fst_652_);
lean_dec(v_snd_646_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_988_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v_fst_656_; lean_object* v_snd_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_987_; 
v_fst_656_ = lean_ctor_get(v_snd_647_, 0);
v_snd_657_ = lean_ctor_get(v_snd_647_, 1);
v_isSharedCheck_987_ = !lean_is_exclusive(v_snd_647_);
if (v_isSharedCheck_987_ == 0)
{
v___x_659_ = v_snd_647_;
v_isShared_660_ = v_isSharedCheck_987_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_snd_657_);
lean_inc(v_fst_656_);
lean_dec(v_snd_647_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_987_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v_toConstantVal_661_; lean_object* v_numParams_662_; lean_object* v_lctx_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v_toConstantVal_661_ = lean_ctor_get(v_indVal_625_, 0);
lean_inc_ref(v_toConstantVal_661_);
v_numParams_662_ = lean_ctor_get(v_indVal_625_, 1);
v_lctx_663_ = lean_ctor_get(v___y_634_, 2);
v___x_664_ = l_Lean_instInhabitedExpr;
v___x_665_ = lean_nat_add(v_numParams_662_, v___x_626_);
v___x_666_ = lean_nat_sub(v___x_665_, v_a_630_);
lean_dec(v___x_665_);
v___x_667_ = lean_unsigned_to_nat(1u);
v___x_668_ = lean_nat_sub(v___x_666_, v___x_667_);
lean_dec(v___x_666_);
v___x_669_ = lean_array_get_borrowed(v___x_664_, v_xs_627_, v___x_668_);
lean_inc(v___x_669_);
lean_inc_ref(v_lctx_663_);
v___x_670_ = l_Lean_Meta_occursOrInType(v_lctx_663_, v___x_669_, v_a_628_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__1));
v___x_672_ = l_Lean_Core_mkFreshUserName(v___x_671_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_672_, 1);
v___x_674_ = l_Lean_mkIdent(v_a_673_);
v___x_675_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__3));
v___x_676_ = l_Lean_Core_mkFreshUserName(v___x_675_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v_a_682_; lean_object* v___x_735_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_a_677_);
lean_dec_ref_known(v___x_676_, 1);
v___x_678_ = l_Lean_mkIdent(v_a_677_);
lean_inc(v___x_674_);
v___x_679_ = lean_array_push(v_fst_648_, v___x_674_);
lean_inc(v___x_678_);
v___x_680_ = lean_array_push(v_fst_652_, v___x_678_);
lean_inc(v___y_637_);
lean_inc_ref(v___y_636_);
lean_inc(v___y_635_);
lean_inc_ref(v___y_634_);
lean_inc(v___x_669_);
v___x_735_ = lean_infer_type(v___x_669_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_737_; 
v_a_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc_n(v_a_736_, 2);
lean_dec_ref_known(v___x_735_, 1);
v___x_737_ = l_Lean_Meta_isProp(v_a_736_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; uint8_t v___x_739_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = lean_unbox(v_a_738_);
if (v___x_739_ == 0)
{
lean_object* v_name_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_910_; 
v_name_740_ = lean_ctor_get(v_toConstantVal_661_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v_toConstantVal_661_);
if (v_isSharedCheck_910_ == 0)
{
lean_object* v_unused_911_; lean_object* v_unused_912_; 
v_unused_911_ = lean_ctor_get(v_toConstantVal_661_, 2);
lean_dec(v_unused_911_);
v_unused_912_ = lean_ctor_get(v_toConstantVal_661_, 1);
lean_dec(v_unused_912_);
v___x_742_ = v_toConstantVal_661_;
v_isShared_743_ = v_isSharedCheck_910_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_name_740_);
lean_dec(v_toConstantVal_661_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_910_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
uint8_t v___x_744_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v_lower_856_; lean_object* v_upper_857_; 
v___x_744_ = l_Lean_Expr_isAppOf(v_a_736_, v_name_740_);
lean_dec(v_name_740_);
lean_dec(v_a_736_);
if (v___x_744_ == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; uint8_t v___x_868_; 
lean_dec(v_a_738_);
v___x_865_ = lean_nat_add(v___x_668_, v___x_667_);
lean_dec(v___x_668_);
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = lean_array_get_size(v_xs_627_);
v___x_868_ = lean_nat_dec_le(v___x_865_, v___x_866_);
if (v___x_868_ == 0)
{
v_lower_856_ = v___x_865_;
v_upper_857_ = v___x_867_;
goto v___jp_855_;
}
else
{
lean_dec(v___x_865_);
v_lower_856_ = v___x_866_;
v_upper_857_ = v___x_867_;
goto v___jp_855_;
}
}
else
{
uint8_t v___x_869_; 
lean_del_object(v___x_742_);
lean_dec(v___x_668_);
lean_del_object(v___x_659_);
lean_del_object(v___x_654_);
lean_del_object(v___x_650_);
v___x_869_ = lean_unbox(v_snd_657_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; 
lean_dec(v_a_738_);
v___x_870_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc_n(v_a_871_, 4);
lean_dec_ref_known(v___x_870_, 1);
v___x_872_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__5));
v___x_873_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52));
lean_inc(v_auxFunName_629_);
v___x_874_ = l_Lean_mkIdent(v_auxFunName_629_);
v___x_875_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_876_ = l_Lean_Syntax_node2(v_a_871_, v___x_875_, v___x_674_, v___x_678_);
v___x_877_ = l_Lean_Syntax_node2(v_a_871_, v___x_873_, v___x_874_, v___x_876_);
v___x_878_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__9));
v___x_879_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_879_, 0, v_a_871_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = l_Lean_Syntax_node3(v_a_871_, v___x_872_, v___x_877_, v___x_879_, v_fst_656_);
v___x_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
lean_ctor_set(v___x_881_, 1, v_snd_657_);
v___x_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_680_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
v___x_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_679_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v_a_640_ = v___x_883_;
goto v___jp_639_;
}
else
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_679_);
lean_dec(v___x_678_);
lean_dec(v___x_674_);
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_884_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_870_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_870_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
else
{
lean_object* v___x_892_; 
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
v___x_892_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc_n(v_a_893_, 2);
lean_dec_ref_known(v___x_892_, 1);
v___x_894_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52));
lean_inc(v_auxFunName_629_);
v___x_895_ = l_Lean_mkIdent(v_auxFunName_629_);
v___x_896_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_897_ = l_Lean_Syntax_node2(v_a_893_, v___x_896_, v___x_674_, v___x_678_);
v___x_898_ = l_Lean_Syntax_node2(v_a_893_, v___x_894_, v___x_895_, v___x_897_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
lean_ctor_set(v___x_899_, 1, v_a_738_);
v___x_900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_680_);
lean_ctor_set(v___x_900_, 1, v___x_899_);
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_679_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v_a_640_ = v___x_901_;
goto v___jp_639_;
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec(v_a_738_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_679_);
lean_dec(v___x_678_);
lean_dec(v___x_674_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_902_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_892_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_892_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
v___jp_745_:
{
uint8_t v___x_749_; 
v___x_749_ = lean_nat_dec_lt(v___y_747_, v___y_748_);
if (v___x_749_ == 0)
{
lean_dec(v___y_748_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_del_object(v___x_742_);
v_a_682_ = v___x_749_;
goto v___jp_681_;
}
else
{
size_t v___x_750_; size_t v___x_751_; lean_object* v___x_752_; 
v___x_750_ = lean_usize_of_nat(v___y_747_);
lean_dec(v___y_747_);
v___x_751_ = lean_usize_of_nat(v___y_748_);
lean_dec(v___y_748_);
v___x_752_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2___redArg(v___x_669_, v___y_746_, v___x_750_, v___x_751_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
lean_dec_ref(v___y_746_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; uint8_t v___x_754_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
lean_inc(v_a_753_);
lean_dec_ref_known(v___x_752_, 1);
v___x_754_ = lean_unbox(v_a_753_);
if (v___x_754_ == 0)
{
uint8_t v___x_755_; 
lean_del_object(v___x_742_);
v___x_755_ = lean_unbox(v_a_753_);
lean_dec(v_a_753_);
v_a_682_ = v___x_755_;
goto v___jp_681_;
}
else
{
lean_object* v___x_756_; 
lean_dec(v_a_753_);
lean_del_object(v___x_659_);
lean_dec(v_snd_657_);
lean_del_object(v___x_654_);
lean_del_object(v___x_650_);
v___x_756_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_toCold_757_; lean_object* v_a_758_; lean_object* v_quotContext_759_; lean_object* v_currMacroScope_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
v_toCold_757_ = lean_ctor_get(v___y_636_, 0);
v_a_758_ = lean_ctor_get(v___x_756_, 0);
lean_inc_n(v_a_758_, 11);
lean_dec_ref_known(v___x_756_, 1);
v_quotContext_759_ = lean_ctor_get(v_toCold_757_, 8);
v_currMacroScope_760_ = lean_ctor_get(v_toCold_757_, 9);
v___x_761_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__11));
v___x_762_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__12));
v___x_763_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_763_, 0, v_a_758_);
lean_ctor_set(v___x_763_, 1, v___x_762_);
v___x_764_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__14));
v___x_765_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16);
v___x_766_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__17));
lean_inc(v_currMacroScope_760_);
lean_inc(v_quotContext_759_);
v___x_767_ = l_Lean_addMacroScope(v_quotContext_759_, v___x_766_, v_currMacroScope_760_);
v___x_768_ = lean_box(0);
v___x_769_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_769_, 0, v_a_758_);
lean_ctor_set(v___x_769_, 1, v___x_765_);
lean_ctor_set(v___x_769_, 2, v___x_767_);
lean_ctor_set(v___x_769_, 3, v___x_768_);
lean_inc_ref(v___x_769_);
v___x_770_ = l_Lean_Syntax_node1(v_a_758_, v___x_764_, v___x_769_);
v___x_771_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__18));
v___x_772_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_772_, 0, v_a_758_);
lean_ctor_set(v___x_772_, 1, v___x_771_);
v___x_773_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7));
v___x_774_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8));
v___x_775_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_775_, 0, v_a_758_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = l_Lean_Syntax_node3(v_a_758_, v___x_773_, v___x_674_, v___x_775_, v___x_678_);
v___x_777_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__19));
v___x_778_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_778_, 0, v_a_758_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21));
v___x_780_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__22));
v___x_781_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_781_, 0, v_a_758_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25));
v___x_783_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27));
v___x_784_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_785_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__28));
v___x_786_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29));
v___x_787_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_787_, 0, v_a_758_);
lean_ctor_set(v___x_787_, 1, v___x_785_);
v___x_788_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31));
v___x_789_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
if (v_isShared_743_ == 0)
{
lean_ctor_set_tag(v___x_742_, 1);
lean_ctor_set(v___x_742_, 2, v___x_789_);
lean_ctor_set(v___x_742_, 1, v___x_784_);
lean_ctor_set(v___x_742_, 0, v_a_758_);
v___x_791_ = v___x_742_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_a_758_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v___x_784_);
lean_ctor_set(v_reuseFailAlloc_838_, 2, v___x_789_);
v___x_791_ = v_reuseFailAlloc_838_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_792_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33));
v___x_793_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35));
v___x_794_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__36));
lean_inc_n(v_a_758_, 20);
v___x_795_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_795_, 0, v_a_758_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
v___x_796_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__38));
v___x_797_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40);
v___x_798_ = lean_box(0);
lean_inc_n(v_currMacroScope_760_, 3);
lean_inc_n(v_quotContext_759_, 3);
v___x_799_ = l_Lean_addMacroScope(v_quotContext_759_, v___x_798_, v_currMacroScope_760_);
v___x_800_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__50));
v___x_801_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_801_, 0, v_a_758_);
lean_ctor_set(v___x_801_, 1, v___x_797_);
lean_ctor_set(v___x_801_, 2, v___x_799_);
lean_ctor_set(v___x_801_, 3, v___x_800_);
v___x_802_ = l_Lean_Syntax_node1(v_a_758_, v___x_796_, v___x_801_);
v___x_803_ = l_Lean_Syntax_node2(v_a_758_, v___x_793_, v___x_795_, v___x_802_);
v___x_804_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52));
v___x_805_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__54, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__54_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__54);
v___x_806_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__55));
v___x_807_ = l_Lean_addMacroScope(v_quotContext_759_, v___x_806_, v_currMacroScope_760_);
v___x_808_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__59));
v___x_809_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_809_, 0, v_a_758_);
lean_ctor_set(v___x_809_, 1, v___x_805_);
lean_ctor_set(v___x_809_, 2, v___x_807_);
lean_ctor_set(v___x_809_, 3, v___x_808_);
v___x_810_ = l_Lean_Syntax_node1(v_a_758_, v___x_784_, v___x_769_);
v___x_811_ = l_Lean_Syntax_node2(v_a_758_, v___x_804_, v___x_809_, v___x_810_);
v___x_812_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__60));
v___x_813_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_813_, 0, v_a_758_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = l_Lean_Syntax_node3(v_a_758_, v___x_792_, v___x_803_, v___x_811_, v___x_813_);
lean_inc_ref_n(v___x_791_, 3);
v___x_815_ = l_Lean_Syntax_node2(v_a_758_, v___x_788_, v___x_791_, v___x_814_);
v___x_816_ = l_Lean_Syntax_node1(v_a_758_, v___x_784_, v___x_815_);
v___x_817_ = l_Lean_Syntax_node4(v_a_758_, v___x_786_, v___x_787_, v___x_816_, v___x_791_, v___x_791_);
v___x_818_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__61));
v___x_819_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62));
v___x_820_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_820_, 0, v_a_758_);
lean_ctor_set(v___x_820_, 1, v___x_818_);
v___x_821_ = l_Lean_Syntax_node2(v_a_758_, v___x_819_, v___x_820_, v_fst_656_);
v___x_822_ = l_Lean_Syntax_node3(v_a_758_, v___x_784_, v___x_817_, v___x_791_, v___x_821_);
v___x_823_ = l_Lean_Syntax_node1(v_a_758_, v___x_783_, v___x_822_);
v___x_824_ = l_Lean_Syntax_node1(v_a_758_, v___x_782_, v___x_823_);
v___x_825_ = l_Lean_Syntax_node2(v_a_758_, v___x_779_, v___x_781_, v___x_824_);
v___x_826_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__63));
v___x_827_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_827_, 0, v_a_758_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___x_828_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2);
v___x_829_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__3));
v___x_830_ = l_Lean_addMacroScope(v_quotContext_759_, v___x_829_, v_currMacroScope_760_);
v___x_831_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__65));
v___x_832_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_832_, 0, v_a_758_);
lean_ctor_set(v___x_832_, 1, v___x_828_);
lean_ctor_set(v___x_832_, 2, v___x_830_);
lean_ctor_set(v___x_832_, 3, v___x_831_);
v___x_833_ = l_Lean_Syntax_node8(v_a_758_, v___x_761_, v___x_763_, v___x_770_, v___x_772_, v___x_776_, v___x_778_, v___x_825_, v___x_827_, v___x_832_);
v___x_834_ = lean_box(v___x_744_);
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_833_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_680_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_679_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
v_a_640_ = v___x_837_;
goto v___jp_639_;
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_del_object(v___x_742_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_679_);
lean_dec(v___x_678_);
lean_dec(v___x_674_);
lean_dec(v_fst_656_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_839_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_756_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_756_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
lean_del_object(v___x_742_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_679_);
lean_dec(v___x_678_);
lean_dec(v___x_674_);
lean_del_object(v___x_659_);
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
lean_del_object(v___x_654_);
lean_del_object(v___x_650_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_847_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_752_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_752_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
}
v___jp_855_:
{
lean_object* v___x_858_; lean_object* v_array_859_; lean_object* v_start_860_; lean_object* v_stop_861_; uint8_t v___x_862_; 
lean_inc_ref(v_xs_627_);
v___x_858_ = l_Array_toSubarray___redArg(v_xs_627_, v_lower_856_, v_upper_857_);
v_array_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc_ref(v_array_859_);
v_start_860_ = lean_ctor_get(v___x_858_, 1);
lean_inc(v_start_860_);
v_stop_861_ = lean_ctor_get(v___x_858_, 2);
lean_inc(v_stop_861_);
lean_dec_ref(v___x_858_);
v___x_862_ = lean_nat_dec_lt(v_start_860_, v_stop_861_);
if (v___x_862_ == 0)
{
lean_dec(v_stop_861_);
lean_dec(v_start_860_);
lean_dec_ref(v_array_859_);
lean_del_object(v___x_742_);
v_a_682_ = v___x_862_;
goto v___jp_681_;
}
else
{
lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_863_ = lean_array_get_size(v_array_859_);
v___x_864_ = lean_nat_dec_le(v_stop_861_, v___x_863_);
if (v___x_864_ == 0)
{
lean_dec(v_stop_861_);
v___y_746_ = v_array_859_;
v___y_747_ = v_start_860_;
v___y_748_ = v___x_863_;
goto v___jp_745_;
}
else
{
v___y_746_ = v_array_859_;
v___y_747_ = v_start_860_;
v___y_748_ = v_stop_861_;
goto v___jp_745_;
}
}
}
}
}
else
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
lean_dec(v_a_738_);
lean_dec(v_a_736_);
lean_dec(v___x_678_);
lean_dec(v___x_674_);
lean_dec(v___x_668_);
lean_dec_ref(v_toConstantVal_661_);
lean_del_object(v___x_659_);
lean_del_object(v___x_654_);
lean_del_object(v___x_650_);
v___x_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_913_, 0, v_fst_656_);
lean_ctor_set(v___x_913_, 1, v_snd_657_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_680_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_679_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v_a_640_ = v___x_915_;
goto v___jp_639_;
}
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec(v_a_736_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_679_);
lean_dec(v___x_678_);
lean_dec(v___x_674_);
lean_dec(v___x_668_);
lean_dec_ref(v_toConstantVal_661_);
lean_del_object(v___x_659_);
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
lean_del_object(v___x_654_);
lean_del_object(v___x_650_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_916_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_737_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_737_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_679_);
lean_dec(v___x_678_);
lean_dec(v___x_674_);
lean_dec(v___x_668_);
lean_dec_ref(v_toConstantVal_661_);
lean_del_object(v___x_659_);
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
lean_del_object(v___x_654_);
lean_del_object(v___x_650_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_924_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_735_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_735_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
v___jp_681_:
{
uint8_t v___x_683_; 
v___x_683_ = lean_unbox(v_snd_657_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; 
v___x_684_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_695_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc_n(v_a_685_, 4);
lean_dec_ref_known(v___x_684_, 1);
v___x_686_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__5));
v___x_687_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7));
v___x_688_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8));
v___x_689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_689_, 0, v_a_685_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v___x_690_ = l_Lean_Syntax_node3(v_a_685_, v___x_687_, v___x_674_, v___x_689_, v___x_678_);
v___x_691_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__9));
v___x_692_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_692_, 0, v_a_685_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
v___x_693_ = l_Lean_Syntax_node3(v_a_685_, v___x_686_, v___x_690_, v___x_692_, v_fst_656_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 0, v___x_693_);
v___x_695_ = v___x_659_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_693_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v_snd_657_);
v___x_695_ = v_reuseFailAlloc_702_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_697_; 
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 1, v___x_695_);
lean_ctor_set(v___x_654_, 0, v___x_680_);
v___x_697_ = v___x_654_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v___x_695_);
v___x_697_ = v_reuseFailAlloc_701_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v___x_699_; 
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 1, v___x_697_);
lean_ctor_set(v___x_650_, 0, v___x_679_);
v___x_699_ = v___x_650_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
v_a_640_ = v___x_699_;
goto v___jp_639_;
}
}
}
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_679_);
lean_dec(v___x_678_);
lean_dec(v___x_674_);
lean_del_object(v___x_659_);
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
lean_del_object(v___x_654_);
lean_del_object(v___x_650_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_703_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_684_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_684_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
else
{
lean_object* v___x_711_; 
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
v___x_711_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_719_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
lean_inc_n(v_a_712_, 2);
lean_dec_ref_known(v___x_711_, 1);
v___x_713_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7));
v___x_714_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8));
v___x_715_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_715_, 0, v_a_712_);
lean_ctor_set(v___x_715_, 1, v___x_714_);
v___x_716_ = l_Lean_Syntax_node3(v_a_712_, v___x_713_, v___x_674_, v___x_715_, v___x_678_);
v___x_717_ = lean_box(v_a_682_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 1, v___x_717_);
lean_ctor_set(v___x_659_, 0, v___x_716_);
v___x_719_ = v___x_659_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v___x_717_);
v___x_719_ = v_reuseFailAlloc_726_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v___x_721_; 
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 1, v___x_719_);
lean_ctor_set(v___x_654_, 0, v___x_680_);
v___x_721_ = v___x_654_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v___x_719_);
v___x_721_ = v_reuseFailAlloc_725_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_723_; 
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 1, v___x_721_);
lean_ctor_set(v___x_650_, 0, v___x_679_);
v___x_723_ = v___x_650_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v___x_721_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
v_a_640_ = v___x_723_;
goto v___jp_639_;
}
}
}
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec_ref(v___x_680_);
lean_dec_ref(v___x_679_);
lean_dec(v___x_678_);
lean_dec(v___x_674_);
lean_del_object(v___x_659_);
lean_del_object(v___x_654_);
lean_del_object(v___x_650_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_727_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_711_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_711_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
}
else
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_939_; 
lean_dec(v___x_674_);
lean_dec(v___x_668_);
lean_dec_ref(v_toConstantVal_661_);
lean_del_object(v___x_659_);
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
lean_del_object(v___x_654_);
lean_dec(v_fst_652_);
lean_del_object(v___x_650_);
lean_dec(v_fst_648_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_932_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_939_ == 0)
{
v___x_934_ = v___x_676_;
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_676_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec(v___x_668_);
lean_dec_ref(v_toConstantVal_661_);
lean_del_object(v___x_659_);
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
lean_del_object(v___x_654_);
lean_dec(v_fst_652_);
lean_del_object(v___x_650_);
lean_dec(v_fst_648_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_940_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_672_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_672_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
else
{
lean_object* v___x_948_; lean_object* v___x_949_; 
lean_dec(v___x_668_);
lean_dec_ref(v_toConstantVal_661_);
v___x_948_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__1));
v___x_949_ = l_Lean_Core_mkFreshUserName(v___x_948_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_949_, 1);
v___x_951_ = l_Lean_mkIdent(v_a_950_);
lean_inc(v___x_951_);
v___x_952_ = lean_array_push(v_fst_648_, v___x_951_);
v___x_953_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc_n(v_a_954_, 3);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__67));
v___x_956_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__68));
v___x_957_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_957_, 0, v_a_954_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__60));
v___x_959_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_959_, 0, v_a_954_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = l_Lean_Syntax_node3(v_a_954_, v___x_955_, v___x_957_, v___x_951_, v___x_959_);
v___x_961_ = lean_array_push(v_fst_652_, v___x_960_);
if (v_isShared_660_ == 0)
{
v___x_963_ = v___x_659_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_fst_656_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v_snd_657_);
v___x_963_ = v_reuseFailAlloc_970_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_965_; 
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 1, v___x_963_);
lean_ctor_set(v___x_654_, 0, v___x_961_);
v___x_965_ = v___x_654_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_961_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_963_);
v___x_965_ = v_reuseFailAlloc_969_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_967_; 
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 1, v___x_965_);
lean_ctor_set(v___x_650_, 0, v___x_952_);
v___x_967_ = v___x_650_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v___x_965_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
v_a_640_ = v___x_967_;
goto v___jp_639_;
}
}
}
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
lean_dec_ref(v___x_952_);
lean_dec(v___x_951_);
lean_del_object(v___x_659_);
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
lean_del_object(v___x_654_);
lean_dec(v_fst_652_);
lean_del_object(v___x_650_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_971_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_953_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_953_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
else
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
lean_del_object(v___x_659_);
lean_dec(v_snd_657_);
lean_dec(v_fst_656_);
lean_del_object(v___x_654_);
lean_dec(v_fst_652_);
lean_del_object(v___x_650_);
lean_dec(v_fst_648_);
lean_dec(v_a_630_);
lean_dec(v_auxFunName_629_);
lean_dec_ref(v_xs_627_);
lean_dec_ref(v_indVal_625_);
v_a_979_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_949_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_949_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
}
}
}
}
v___jp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_unsigned_to_nat(1u);
v___x_642_ = lean_nat_add(v_a_630_, v___x_641_);
lean_dec(v_a_630_);
v_a_630_ = v___x_642_;
v_b_631_ = v_a_640_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___boxed(lean_object* v_upperBound_992_, lean_object* v_indVal_993_, lean_object* v___x_994_, lean_object* v_xs_995_, lean_object* v_a_996_, lean_object* v_auxFunName_997_, lean_object* v_a_998_, lean_object* v_b_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg(v_upperBound_992_, v_indVal_993_, v___x_994_, v_xs_995_, v_a_996_, v_auxFunName_997_, v_a_998_, v_b_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec_ref(v_a_996_);
lean_dec(v___x_994_);
lean_dec(v_upperBound_992_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg(lean_object* v_upperBound_1008_, lean_object* v_a_1009_, lean_object* v_b_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
uint8_t v___x_1018_; 
v___x_1018_ = lean_nat_dec_lt(v_a_1009_, v_upperBound_1008_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
lean_dec(v_a_1009_);
v___x_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1019_, 0, v_b_1010_);
return v___x_1019_;
}
else
{
lean_object* v_fst_1020_; lean_object* v_snd_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1059_; 
v_fst_1020_ = lean_ctor_get(v_b_1010_, 0);
v_snd_1021_ = lean_ctor_get(v_b_1010_, 1);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_b_1010_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1023_ = v_b_1010_;
v_isShared_1024_ = v_isSharedCheck_1059_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_snd_1021_);
lean_inc(v_fst_1020_);
lean_dec(v_b_1010_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1059_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc_n(v_a_1026_, 2);
lean_dec_ref_known(v___x_1025_, 1);
v___x_1027_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3));
v___x_1028_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__4));
v___x_1029_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1029_, 0, v_a_1026_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = l_Lean_Syntax_node1(v_a_1026_, v___x_1027_, v___x_1029_);
v___x_1031_ = lean_array_push(v_fst_1020_, v___x_1030_);
v___x_1032_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v_a_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1038_; 
v_a_1033_ = lean_ctor_get(v___x_1032_, 0);
lean_inc_n(v_a_1033_, 2);
lean_dec_ref_known(v___x_1032_, 1);
v___x_1034_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_a_1033_);
lean_ctor_set(v___x_1034_, 1, v___x_1028_);
v___x_1035_ = l_Lean_Syntax_node1(v_a_1033_, v___x_1027_, v___x_1034_);
v___x_1036_ = lean_array_push(v_snd_1021_, v___x_1035_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 1, v___x_1036_);
lean_ctor_set(v___x_1023_, 0, v___x_1031_);
v___x_1038_ = v___x_1023_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1031_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = lean_unsigned_to_nat(1u);
v___x_1040_ = lean_nat_add(v_a_1009_, v___x_1039_);
lean_dec(v_a_1009_);
v_a_1009_ = v___x_1040_;
v_b_1010_ = v___x_1038_;
goto _start;
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
lean_dec_ref(v___x_1031_);
lean_del_object(v___x_1023_);
lean_dec(v_snd_1021_);
lean_dec(v_a_1009_);
v_a_1043_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1032_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1032_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
lean_del_object(v___x_1023_);
lean_dec(v_snd_1021_);
lean_dec(v_fst_1020_);
lean_dec(v_a_1009_);
v_a_1051_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1025_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1025_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___boxed(lean_object* v_upperBound_1060_, lean_object* v_a_1061_, lean_object* v_b_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg(v_upperBound_1060_, v_a_1061_, v_b_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v_upperBound_1060_);
return v_res_1070_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__0));
v___x_1073_ = l_String_toRawSubstring_x27(v___x_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1(lean_object* v_indVal_1092_, lean_object* v___x_1093_, lean_object* v_alts_1094_, lean_object* v_numFields_1095_, lean_object* v_auxFunName_1096_, lean_object* v___f_1097_, lean_object* v_head_1098_, lean_object* v_xs_1099_, lean_object* v_type_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v___x_1108_; 
v___x_1108_ = l_Lean_Core_betaReduce(v_type_1100_, v___y_1105_, v___y_1106_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v_numParams_1110_; lean_object* v_numIndices_1111_; lean_object* v___x_1112_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
lean_inc(v_a_1109_);
lean_dec_ref_known(v___x_1108_, 1);
v_numParams_1110_ = lean_ctor_get(v_indVal_1092_, 1);
lean_inc(v_numParams_1110_);
v_numIndices_1111_ = lean_ctor_get(v_indVal_1092_, 2);
lean_inc_ref(v_alts_1094_);
lean_inc(v___x_1093_);
v___x_1112_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg(v_numIndices_1111_, v___x_1093_, v_alts_1094_, v___y_1105_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_toCold_1113_; lean_object* v_a_1114_; lean_object* v_ref_1115_; lean_object* v_quotContext_1116_; lean_object* v_currMacroScope_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; uint8_t v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v_toCold_1113_ = lean_ctor_get(v___y_1105_, 0);
v_a_1114_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1112_, 1);
v_ref_1115_ = lean_ctor_get(v___y_1105_, 2);
v_quotContext_1116_ = lean_ctor_get(v_toCold_1113_, 8);
v_currMacroScope_1117_ = lean_ctor_get(v_toCold_1113_, 9);
v___x_1118_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__1);
v___x_1119_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__2));
v___x_1120_ = 0;
v___x_1121_ = l_Lean_SourceInfo_fromRef(v_ref_1115_, v___x_1120_);
lean_inc(v_currMacroScope_1117_);
lean_inc(v_quotContext_1116_);
v___x_1122_ = l_Lean_addMacroScope(v_quotContext_1116_, v___x_1119_, v_currMacroScope_1117_);
v___x_1123_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__5));
v___x_1124_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1121_);
lean_ctor_set(v___x_1124_, 1, v___x_1118_);
lean_ctor_set(v___x_1124_, 2, v___x_1122_);
lean_ctor_set(v___x_1124_, 3, v___x_1123_);
v___x_1125_ = 1;
v___x_1126_ = lean_box(v___x_1125_);
v___x_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1124_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
lean_inc_ref(v_alts_1094_);
v___x_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1128_, 0, v_alts_1094_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1129_, 0, v_alts_1094_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
lean_inc(v___x_1093_);
v___x_1130_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg(v_numFields_1095_, v_indVal_1092_, v_numFields_1095_, v_xs_1099_, v_a_1109_, v_auxFunName_1096_, v___x_1093_, v___x_1129_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
lean_dec(v_a_1109_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v_snd_1132_; lean_object* v_snd_1133_; lean_object* v_fst_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1246_; 
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_a_1131_);
lean_dec_ref_known(v___x_1130_, 1);
v_snd_1132_ = lean_ctor_get(v_a_1131_, 1);
lean_inc(v_snd_1132_);
v_snd_1133_ = lean_ctor_get(v_snd_1132_, 1);
lean_inc(v_snd_1133_);
v_fst_1134_ = lean_ctor_get(v_a_1131_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v_a_1131_);
if (v_isSharedCheck_1246_ == 0)
{
lean_object* v_unused_1247_; 
v_unused_1247_ = lean_ctor_get(v_a_1131_, 1);
lean_dec(v_unused_1247_);
v___x_1136_ = v_a_1131_;
v_isShared_1137_ = v_isSharedCheck_1246_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_fst_1134_);
lean_dec(v_a_1131_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1246_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v_fst_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1244_; 
v_fst_1138_ = lean_ctor_get(v_snd_1132_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_snd_1132_);
if (v_isSharedCheck_1244_ == 0)
{
lean_object* v_unused_1245_; 
v_unused_1245_ = lean_ctor_get(v_snd_1132_, 1);
lean_dec(v_unused_1245_);
v___x_1140_ = v_snd_1132_;
v_isShared_1141_ = v_isSharedCheck_1244_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_fst_1138_);
lean_dec(v_snd_1132_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1244_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v_fst_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1242_; 
v_fst_1142_ = lean_ctor_get(v_snd_1133_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v_snd_1133_);
if (v_isSharedCheck_1242_ == 0)
{
lean_object* v_unused_1243_; 
v_unused_1243_ = lean_ctor_get(v_snd_1133_, 1);
lean_dec(v_unused_1243_);
v___x_1144_ = v_snd_1133_;
v_isShared_1145_ = v_isSharedCheck_1242_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_fst_1142_);
lean_dec(v_snd_1133_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1242_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 1, v_fst_1138_);
lean_ctor_set(v___x_1144_, 0, v_fst_1134_);
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_fst_1134_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v_fst_1138_);
v___x_1147_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg(v_numParams_1110_, v___x_1093_, v___x_1147_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
lean_dec(v_numParams_1110_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; lean_object* v_fst_1150_; lean_object* v_snd_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1232_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref_known(v___x_1148_, 1);
v_fst_1150_ = lean_ctor_get(v_a_1149_, 0);
v_snd_1151_ = lean_ctor_get(v_a_1149_, 1);
v_isSharedCheck_1232_ = !lean_is_exclusive(v_a_1149_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1153_ = v_a_1149_;
v_isShared_1154_ = v_isSharedCheck_1232_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_snd_1151_);
lean_inc(v_fst_1150_);
lean_dec(v_a_1149_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1232_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1155_; 
lean_inc_ref(v___f_1097_);
lean_inc(v___y_1106_);
lean_inc_ref(v___y_1105_);
lean_inc(v___y_1104_);
lean_inc_ref(v___y_1103_);
lean_inc(v___y_1102_);
lean_inc_ref(v___y_1101_);
v___x_1155_ = lean_apply_7(v___f_1097_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, lean_box(0));
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1161_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc_n(v_a_1156_, 2);
lean_dec_ref_known(v___x_1155_, 1);
v___x_1157_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52));
v___x_1158_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7));
v___x_1159_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__8));
if (v_isShared_1154_ == 0)
{
lean_ctor_set_tag(v___x_1153_, 2);
lean_ctor_set(v___x_1153_, 1, v___x_1159_);
lean_ctor_set(v___x_1153_, 0, v_a_1156_);
v___x_1161_ = v___x_1153_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1156_);
lean_ctor_set(v_reuseFailAlloc_1223_, 1, v___x_1159_);
v___x_1161_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1162_ = l_Lean_mkIdent(v_head_1098_);
lean_inc(v___x_1162_);
lean_inc_n(v_a_1156_, 2);
v___x_1163_ = l_Lean_Syntax_node2(v_a_1156_, v___x_1158_, v___x_1161_, v___x_1162_);
v___x_1164_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_1165_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
v___x_1166_ = l_Array_reverse___redArg(v_fst_1150_);
v___x_1167_ = l_Array_append___redArg(v___x_1165_, v___x_1166_);
lean_dec_ref(v___x_1166_);
v___x_1168_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1168_, 0, v_a_1156_);
lean_ctor_set(v___x_1168_, 1, v___x_1164_);
lean_ctor_set(v___x_1168_, 2, v___x_1167_);
v___x_1169_ = l_Lean_Syntax_node2(v_a_1156_, v___x_1157_, v___x_1163_, v___x_1168_);
v___x_1170_ = lean_array_push(v_a_1114_, v___x_1169_);
lean_inc_ref(v___f_1097_);
lean_inc(v___y_1106_);
lean_inc_ref(v___y_1105_);
lean_inc(v___y_1104_);
lean_inc_ref(v___y_1103_);
lean_inc(v___y_1102_);
lean_inc_ref(v___y_1101_);
v___x_1171_ = lean_apply_7(v___f_1097_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, lean_box(0));
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_object* v_a_1172_; lean_object* v___x_1174_; 
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
lean_inc_n(v_a_1172_, 2);
lean_dec_ref_known(v___x_1171_, 1);
if (v_isShared_1141_ == 0)
{
lean_ctor_set_tag(v___x_1140_, 2);
lean_ctor_set(v___x_1140_, 1, v___x_1159_);
lean_ctor_set(v___x_1140_, 0, v_a_1172_);
v___x_1174_ = v___x_1140_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1172_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v___x_1159_);
v___x_1174_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
lean_inc_n(v_a_1172_, 2);
v___x_1175_ = l_Lean_Syntax_node2(v_a_1172_, v___x_1158_, v___x_1174_, v___x_1162_);
v___x_1176_ = l_Array_reverse___redArg(v_snd_1151_);
v___x_1177_ = l_Array_append___redArg(v___x_1165_, v___x_1176_);
lean_dec_ref(v___x_1176_);
v___x_1178_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1178_, 0, v_a_1172_);
lean_ctor_set(v___x_1178_, 1, v___x_1164_);
lean_ctor_set(v___x_1178_, 2, v___x_1177_);
v___x_1179_ = l_Lean_Syntax_node2(v_a_1172_, v___x_1157_, v___x_1175_, v___x_1178_);
v___x_1180_ = lean_array_push(v___x_1170_, v___x_1179_);
lean_inc(v___y_1106_);
lean_inc_ref(v___y_1105_);
lean_inc(v___y_1104_);
lean_inc_ref(v___y_1103_);
lean_inc(v___y_1102_);
lean_inc_ref(v___y_1101_);
v___x_1181_ = lean_apply_7(v___f_1097_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, lean_box(0));
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1205_; 
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1184_ = v___x_1181_;
v_isShared_1185_ = v_isSharedCheck_1205_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1181_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1205_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1189_; 
v___x_1186_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9));
v___x_1187_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__10));
lean_inc(v_a_1182_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set_tag(v___x_1136_, 2);
lean_ctor_set(v___x_1136_, 1, v___x_1187_);
lean_ctor_set(v___x_1136_, 0, v_a_1182_);
v___x_1189_ = v___x_1136_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1182_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
size_t v_sz_1190_; size_t v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1202_; 
v_sz_1190_ = lean_array_size(v___x_1180_);
v___x_1191_ = ((size_t)0ULL);
v___x_1192_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__0(v_sz_1190_, v___x_1191_, v___x_1180_);
v___x_1193_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15);
v___x_1194_ = l_Lean_mkSepArray(v___x_1192_, v___x_1193_);
lean_dec_ref(v___x_1192_);
v___x_1195_ = l_Array_append___redArg(v___x_1165_, v___x_1194_);
lean_dec_ref(v___x_1194_);
lean_inc_n(v_a_1182_, 3);
v___x_1196_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1196_, 0, v_a_1182_);
lean_ctor_set(v___x_1196_, 1, v___x_1164_);
lean_ctor_set(v___x_1196_, 2, v___x_1195_);
v___x_1197_ = l_Lean_Syntax_node1(v_a_1182_, v___x_1164_, v___x_1196_);
v___x_1198_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__16));
v___x_1199_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1199_, 0, v_a_1182_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = l_Lean_Syntax_node4(v_a_1182_, v___x_1186_, v___x_1189_, v___x_1197_, v___x_1199_, v_fst_1142_);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1200_);
v___x_1202_ = v___x_1184_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1200_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_dec_ref(v___x_1180_);
lean_dec(v_fst_1142_);
lean_del_object(v___x_1136_);
v_a_1206_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1181_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1181_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
lean_dec_ref(v___x_1170_);
lean_dec(v___x_1162_);
lean_dec(v_snd_1151_);
lean_dec(v_fst_1142_);
lean_del_object(v___x_1140_);
lean_del_object(v___x_1136_);
lean_dec_ref(v___f_1097_);
v_a_1215_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1171_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1171_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1231_; 
lean_del_object(v___x_1153_);
lean_dec(v_snd_1151_);
lean_dec(v_fst_1150_);
lean_dec(v_fst_1142_);
lean_del_object(v___x_1140_);
lean_del_object(v___x_1136_);
lean_dec(v_a_1114_);
lean_dec(v_head_1098_);
lean_dec_ref(v___f_1097_);
v_a_1224_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1226_ = v___x_1155_;
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1155_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_a_1224_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec(v_fst_1142_);
lean_del_object(v___x_1140_);
lean_del_object(v___x_1136_);
lean_dec(v_a_1114_);
lean_dec(v_head_1098_);
lean_dec_ref(v___f_1097_);
v_a_1233_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1148_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1148_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
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
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
lean_dec(v_a_1114_);
lean_dec(v_numParams_1110_);
lean_dec(v_head_1098_);
lean_dec_ref(v___f_1097_);
lean_dec(v___x_1093_);
v_a_1248_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1130_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1130_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
lean_dec(v_numParams_1110_);
lean_dec(v_a_1109_);
lean_dec_ref(v_xs_1099_);
lean_dec(v_head_1098_);
lean_dec_ref(v___f_1097_);
lean_dec(v_auxFunName_1096_);
lean_dec_ref(v_alts_1094_);
lean_dec(v___x_1093_);
lean_dec_ref(v_indVal_1092_);
v_a_1256_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1112_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1112_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_dec_ref(v_xs_1099_);
lean_dec(v_head_1098_);
lean_dec_ref(v___f_1097_);
lean_dec(v_auxFunName_1096_);
lean_dec_ref(v_alts_1094_);
lean_dec(v___x_1093_);
lean_dec_ref(v_indVal_1092_);
v_a_1264_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1108_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1108_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___boxed(lean_object* v_indVal_1272_, lean_object* v___x_1273_, lean_object* v_alts_1274_, lean_object* v_numFields_1275_, lean_object* v_auxFunName_1276_, lean_object* v___f_1277_, lean_object* v_head_1278_, lean_object* v_xs_1279_, lean_object* v_type_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1(v_indVal_1272_, v___x_1273_, v_alts_1274_, v_numFields_1275_, v_auxFunName_1276_, v___f_1277_, v_head_1278_, v_xs_1279_, v_type_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v_numFields_1275_);
return v_res_1288_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = l_instMonadEIO___redArg();
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1(lean_object* v_msg_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v_toApplicative_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1397_; 
v___x_1304_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__0);
v___x_1305_ = l_StateRefT_x27_instMonad___redArg(v___x_1304_);
v_toApplicative_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1397_ == 0)
{
lean_object* v_unused_1398_; 
v_unused_1398_ = lean_ctor_get(v___x_1305_, 1);
lean_dec(v_unused_1398_);
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1397_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_toApplicative_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1397_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v_toFunctor_1310_; lean_object* v_toSeq_1311_; lean_object* v_toSeqLeft_1312_; lean_object* v_toSeqRight_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1395_; 
v_toFunctor_1310_ = lean_ctor_get(v_toApplicative_1306_, 0);
v_toSeq_1311_ = lean_ctor_get(v_toApplicative_1306_, 2);
v_toSeqLeft_1312_ = lean_ctor_get(v_toApplicative_1306_, 3);
v_toSeqRight_1313_ = lean_ctor_get(v_toApplicative_1306_, 4);
v_isSharedCheck_1395_ = !lean_is_exclusive(v_toApplicative_1306_);
if (v_isSharedCheck_1395_ == 0)
{
lean_object* v_unused_1396_; 
v_unused_1396_ = lean_ctor_get(v_toApplicative_1306_, 1);
lean_dec(v_unused_1396_);
v___x_1315_ = v_toApplicative_1306_;
v_isShared_1316_ = v_isSharedCheck_1395_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_toSeqRight_1313_);
lean_inc(v_toSeqLeft_1312_);
lean_inc(v_toSeq_1311_);
lean_inc(v_toFunctor_1310_);
lean_dec(v_toApplicative_1306_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1395_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___f_1317_; lean_object* v___f_1318_; lean_object* v___f_1319_; lean_object* v___f_1320_; lean_object* v___x_1321_; lean_object* v___f_1322_; lean_object* v___f_1323_; lean_object* v___f_1324_; lean_object* v___x_1326_; 
v___f_1317_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__1));
v___f_1318_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1310_);
v___f_1319_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1319_, 0, v_toFunctor_1310_);
v___f_1320_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1320_, 0, v_toFunctor_1310_);
v___x_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___f_1319_);
lean_ctor_set(v___x_1321_, 1, v___f_1320_);
v___f_1322_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1322_, 0, v_toSeqRight_1313_);
v___f_1323_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1323_, 0, v_toSeqLeft_1312_);
v___f_1324_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1324_, 0, v_toSeq_1311_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 4, v___f_1322_);
lean_ctor_set(v___x_1315_, 3, v___f_1323_);
lean_ctor_set(v___x_1315_, 2, v___f_1324_);
lean_ctor_set(v___x_1315_, 1, v___f_1317_);
lean_ctor_set(v___x_1315_, 0, v___x_1321_);
v___x_1326_ = v___x_1315_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1321_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v___f_1317_);
lean_ctor_set(v_reuseFailAlloc_1394_, 2, v___f_1324_);
lean_ctor_set(v_reuseFailAlloc_1394_, 3, v___f_1323_);
lean_ctor_set(v_reuseFailAlloc_1394_, 4, v___f_1322_);
v___x_1326_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1328_; 
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 1, v___f_1318_);
lean_ctor_set(v___x_1308_, 0, v___x_1326_);
v___x_1328_ = v___x_1308_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1393_, 1, v___f_1318_);
v___x_1328_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
lean_object* v___x_1329_; lean_object* v_toApplicative_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1391_; 
v___x_1329_ = l_StateRefT_x27_instMonad___redArg(v___x_1328_);
v_toApplicative_1330_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1391_ == 0)
{
lean_object* v_unused_1392_; 
v_unused_1392_ = lean_ctor_get(v___x_1329_, 1);
lean_dec(v_unused_1392_);
v___x_1332_ = v___x_1329_;
v_isShared_1333_ = v_isSharedCheck_1391_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_toApplicative_1330_);
lean_dec(v___x_1329_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1391_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v_toFunctor_1334_; lean_object* v_toSeq_1335_; lean_object* v_toSeqLeft_1336_; lean_object* v_toSeqRight_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1389_; 
v_toFunctor_1334_ = lean_ctor_get(v_toApplicative_1330_, 0);
v_toSeq_1335_ = lean_ctor_get(v_toApplicative_1330_, 2);
v_toSeqLeft_1336_ = lean_ctor_get(v_toApplicative_1330_, 3);
v_toSeqRight_1337_ = lean_ctor_get(v_toApplicative_1330_, 4);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_toApplicative_1330_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; 
v_unused_1390_ = lean_ctor_get(v_toApplicative_1330_, 1);
lean_dec(v_unused_1390_);
v___x_1339_ = v_toApplicative_1330_;
v_isShared_1340_ = v_isSharedCheck_1389_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_toSeqRight_1337_);
lean_inc(v_toSeqLeft_1336_);
lean_inc(v_toSeq_1335_);
lean_inc(v_toFunctor_1334_);
lean_dec(v_toApplicative_1330_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1389_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___f_1341_; lean_object* v___f_1342_; lean_object* v___f_1343_; lean_object* v___f_1344_; lean_object* v___x_1345_; lean_object* v___f_1346_; lean_object* v___f_1347_; lean_object* v___f_1348_; lean_object* v___x_1350_; 
v___f_1341_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__3));
v___f_1342_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1334_);
v___f_1343_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1343_, 0, v_toFunctor_1334_);
v___f_1344_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1344_, 0, v_toFunctor_1334_);
v___x_1345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1345_, 0, v___f_1343_);
lean_ctor_set(v___x_1345_, 1, v___f_1344_);
v___f_1346_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1346_, 0, v_toSeqRight_1337_);
v___f_1347_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1347_, 0, v_toSeqLeft_1336_);
v___f_1348_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1348_, 0, v_toSeq_1335_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 4, v___f_1346_);
lean_ctor_set(v___x_1339_, 3, v___f_1347_);
lean_ctor_set(v___x_1339_, 2, v___f_1348_);
lean_ctor_set(v___x_1339_, 1, v___f_1341_);
lean_ctor_set(v___x_1339_, 0, v___x_1345_);
v___x_1350_ = v___x_1339_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1345_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v___f_1341_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v___f_1348_);
lean_ctor_set(v_reuseFailAlloc_1388_, 3, v___f_1347_);
lean_ctor_set(v_reuseFailAlloc_1388_, 4, v___f_1346_);
v___x_1350_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
lean_object* v___x_1352_; 
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 1, v___f_1342_);
lean_ctor_set(v___x_1332_, 0, v___x_1350_);
v___x_1352_ = v___x_1332_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1350_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v___f_1342_);
v___x_1352_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1353_; lean_object* v_toApplicative_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1385_; 
v___x_1353_ = l_StateRefT_x27_instMonad___redArg(v___x_1352_);
v_toApplicative_1354_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1385_ == 0)
{
lean_object* v_unused_1386_; 
v_unused_1386_ = lean_ctor_get(v___x_1353_, 1);
lean_dec(v_unused_1386_);
v___x_1356_ = v___x_1353_;
v_isShared_1357_ = v_isSharedCheck_1385_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_toApplicative_1354_);
lean_dec(v___x_1353_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1385_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v_toFunctor_1358_; lean_object* v_toSeq_1359_; lean_object* v_toSeqLeft_1360_; lean_object* v_toSeqRight_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1383_; 
v_toFunctor_1358_ = lean_ctor_get(v_toApplicative_1354_, 0);
v_toSeq_1359_ = lean_ctor_get(v_toApplicative_1354_, 2);
v_toSeqLeft_1360_ = lean_ctor_get(v_toApplicative_1354_, 3);
v_toSeqRight_1361_ = lean_ctor_get(v_toApplicative_1354_, 4);
v_isSharedCheck_1383_ = !lean_is_exclusive(v_toApplicative_1354_);
if (v_isSharedCheck_1383_ == 0)
{
lean_object* v_unused_1384_; 
v_unused_1384_ = lean_ctor_get(v_toApplicative_1354_, 1);
lean_dec(v_unused_1384_);
v___x_1363_ = v_toApplicative_1354_;
v_isShared_1364_ = v_isSharedCheck_1383_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_toSeqRight_1361_);
lean_inc(v_toSeqLeft_1360_);
lean_inc(v_toSeq_1359_);
lean_inc(v_toFunctor_1358_);
lean_dec(v_toApplicative_1354_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1383_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___f_1365_; lean_object* v___f_1366_; lean_object* v___f_1367_; lean_object* v___f_1368_; lean_object* v___x_1369_; lean_object* v___f_1370_; lean_object* v___f_1371_; lean_object* v___f_1372_; lean_object* v___x_1374_; 
v___f_1365_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__5));
v___f_1366_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___closed__6));
lean_inc_ref(v_toFunctor_1358_);
v___f_1367_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1367_, 0, v_toFunctor_1358_);
v___f_1368_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1368_, 0, v_toFunctor_1358_);
v___x_1369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___f_1367_);
lean_ctor_set(v___x_1369_, 1, v___f_1368_);
v___f_1370_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1370_, 0, v_toSeqRight_1361_);
v___f_1371_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1371_, 0, v_toSeqLeft_1360_);
v___f_1372_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1372_, 0, v_toSeq_1359_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v___f_1370_);
lean_ctor_set(v___x_1363_, 3, v___f_1371_);
lean_ctor_set(v___x_1363_, 2, v___f_1372_);
lean_ctor_set(v___x_1363_, 1, v___f_1365_);
lean_ctor_set(v___x_1363_, 0, v___x_1369_);
v___x_1374_ = v___x_1363_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1369_);
lean_ctor_set(v_reuseFailAlloc_1382_, 1, v___f_1365_);
lean_ctor_set(v_reuseFailAlloc_1382_, 2, v___f_1372_);
lean_ctor_set(v_reuseFailAlloc_1382_, 3, v___f_1371_);
lean_ctor_set(v_reuseFailAlloc_1382_, 4, v___f_1370_);
v___x_1374_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___x_1376_; 
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 1, v___f_1366_);
lean_ctor_set(v___x_1356_, 0, v___x_1374_);
v___x_1376_ = v___x_1356_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v___x_1374_);
lean_ctor_set(v_reuseFailAlloc_1381_, 1, v___f_1366_);
v___x_1376_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_46861__overap_1379_; lean_object* v___x_1380_; 
v___x_1377_ = lean_box(0);
v___x_1378_ = l_instInhabitedOfMonad___redArg(v___x_1376_, v___x_1377_);
v___x_46861__overap_1379_ = lean_panic_fn_borrowed(v___x_1378_, v_msg_1296_);
lean_dec(v___x_1378_);
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1301_);
lean_inc(v___y_1300_);
lean_inc_ref(v___y_1299_);
lean_inc(v___y_1298_);
lean_inc_ref(v___y_1297_);
v___x_1380_ = lean_apply_7(v___x_46861__overap_1379_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, lean_box(0));
return v___x_1380_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1___boxed(lean_object* v_msg_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v_res_1407_; 
v_res_1407_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1(v_msg_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
return v_res_1407_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__10(lean_object* v_opts_1408_, lean_object* v_opt_1409_){
_start:
{
lean_object* v_name_1410_; lean_object* v_defValue_1411_; lean_object* v_map_1412_; lean_object* v___x_1413_; 
v_name_1410_ = lean_ctor_get(v_opt_1409_, 0);
v_defValue_1411_ = lean_ctor_get(v_opt_1409_, 1);
v_map_1412_ = lean_ctor_get(v_opts_1408_, 0);
v___x_1413_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1412_, v_name_1410_);
if (lean_obj_tag(v___x_1413_) == 0)
{
uint8_t v___x_1414_; 
v___x_1414_ = lean_unbox(v_defValue_1411_);
return v___x_1414_;
}
else
{
lean_object* v_val_1415_; 
v_val_1415_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_val_1415_);
lean_dec_ref_known(v___x_1413_, 1);
if (lean_obj_tag(v_val_1415_) == 1)
{
uint8_t v_v_1416_; 
v_v_1416_ = lean_ctor_get_uint8(v_val_1415_, 0);
lean_dec_ref_known(v_val_1415_, 0);
return v_v_1416_;
}
else
{
uint8_t v___x_1417_; 
lean_dec(v_val_1415_);
v___x_1417_ = lean_unbox(v_defValue_1411_);
return v___x_1417_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__10___boxed(lean_object* v_opts_1418_, lean_object* v_opt_1419_){
_start:
{
uint8_t v_res_1420_; lean_object* v_r_1421_; 
v_res_1420_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__10(v_opts_1418_, v_opt_1419_);
lean_dec_ref(v_opt_1419_);
lean_dec_ref(v_opts_1418_);
v_r_1421_ = lean_box(v_res_1420_);
return v_r_1421_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0(void){
_start:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1422_ = lean_box(1);
v___x_1423_ = l_Lean_MessageData_ofFormat(v___x_1422_);
return v___x_1423_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3(void){
_start:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1427_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__2));
v___x_1428_ = l_Lean_MessageData_ofFormat(v___x_1427_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11(lean_object* v_x_1429_, lean_object* v_x_1430_){
_start:
{
if (lean_obj_tag(v_x_1430_) == 0)
{
return v_x_1429_;
}
else
{
lean_object* v_head_1431_; lean_object* v_tail_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1454_; 
v_head_1431_ = lean_ctor_get(v_x_1430_, 0);
v_tail_1432_ = lean_ctor_get(v_x_1430_, 1);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_x_1430_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1434_ = v_x_1430_;
v_isShared_1435_ = v_isSharedCheck_1454_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_tail_1432_);
lean_inc(v_head_1431_);
lean_dec(v_x_1430_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1454_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v_before_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1452_; 
v_before_1436_ = lean_ctor_get(v_head_1431_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v_head_1431_);
if (v_isSharedCheck_1452_ == 0)
{
lean_object* v_unused_1453_; 
v_unused_1453_ = lean_ctor_get(v_head_1431_, 1);
lean_dec(v_unused_1453_);
v___x_1438_ = v_head_1431_;
v_isShared_1439_ = v_isSharedCheck_1452_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_before_1436_);
lean_dec(v_head_1431_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1452_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1440_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0);
if (v_isShared_1439_ == 0)
{
lean_ctor_set_tag(v___x_1438_, 7);
lean_ctor_set(v___x_1438_, 1, v___x_1440_);
lean_ctor_set(v___x_1438_, 0, v_x_1429_);
v___x_1442_ = v___x_1438_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_x_1429_);
lean_ctor_set(v_reuseFailAlloc_1451_, 1, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1443_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__3);
if (v_isShared_1435_ == 0)
{
lean_ctor_set_tag(v___x_1434_, 7);
lean_ctor_set(v___x_1434_, 1, v___x_1443_);
lean_ctor_set(v___x_1434_, 0, v___x_1442_);
v___x_1445_ = v___x_1434_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1446_ = l_Lean_MessageData_ofSyntax(v_before_1436_);
v___x_1447_ = l_Lean_indentD(v___x_1446_);
v___x_1448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1445_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
v_x_1429_ = v___x_1448_;
v_x_1430_ = v_tail_1432_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1458_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__1));
v___x_1459_ = l_Lean_MessageData_ofFormat(v___x_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(lean_object* v_msgData_1460_, lean_object* v_macroStack_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; uint8_t v___x_1466_; 
v___x_1464_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1462_);
v___x_1465_ = l_Lean_Elab_pp_macroStack;
v___x_1466_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__10(v___x_1464_, v___x_1465_);
lean_dec_ref(v___x_1464_);
if (v___x_1466_ == 0)
{
lean_object* v___x_1467_; 
lean_dec(v_macroStack_1461_);
v___x_1467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1467_, 0, v_msgData_1460_);
return v___x_1467_;
}
else
{
if (lean_obj_tag(v_macroStack_1461_) == 0)
{
lean_object* v___x_1468_; 
v___x_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1468_, 0, v_msgData_1460_);
return v___x_1468_;
}
else
{
lean_object* v_head_1469_; lean_object* v_after_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1485_; 
v_head_1469_ = lean_ctor_get(v_macroStack_1461_, 0);
lean_inc(v_head_1469_);
v_after_1470_ = lean_ctor_get(v_head_1469_, 1);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_head_1469_);
if (v_isSharedCheck_1485_ == 0)
{
lean_object* v_unused_1486_; 
v_unused_1486_ = lean_ctor_get(v_head_1469_, 0);
lean_dec(v_unused_1486_);
v___x_1472_ = v_head_1469_;
v_isShared_1473_ = v_isSharedCheck_1485_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_after_1470_);
lean_dec(v_head_1469_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1485_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; lean_object* v___x_1476_; 
v___x_1474_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0);
if (v_isShared_1473_ == 0)
{
lean_ctor_set_tag(v___x_1472_, 7);
lean_ctor_set(v___x_1472_, 1, v___x_1474_);
lean_ctor_set(v___x_1472_, 0, v_msgData_1460_);
v___x_1476_ = v___x_1472_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_msgData_1460_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v___x_1474_);
v___x_1476_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v_msgData_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1477_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2);
v___x_1478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1476_);
lean_ctor_set(v___x_1478_, 1, v___x_1477_);
v___x_1479_ = l_Lean_MessageData_ofSyntax(v_after_1470_);
v___x_1480_ = l_Lean_indentD(v___x_1479_);
v_msgData_1481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1481_, 0, v___x_1478_);
lean_ctor_set(v_msgData_1481_, 1, v___x_1480_);
v___x_1482_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11(v_msgData_1481_, v_macroStack_1461_);
v___x_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1482_);
return v___x_1483_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_msgData_1487_, lean_object* v_macroStack_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(v_msgData_1487_, v_macroStack_1488_, v___y_1489_);
lean_dec_ref(v___y_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(lean_object* v_msgData_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v___x_1498_; lean_object* v_env_1499_; uint8_t v___x_1500_; lean_object* v_env_1501_; lean_object* v___x_1502_; lean_object* v_toCold_1503_; lean_object* v_mctx_1504_; lean_object* v_lctx_1505_; lean_object* v_options_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1498_ = lean_st_ref_get(v___y_1496_);
v_env_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc_ref(v_env_1499_);
lean_dec(v___x_1498_);
v___x_1500_ = 0;
v_env_1501_ = l_Lean_Environment_setRecordingDeps(v_env_1499_, v___x_1500_);
v___x_1502_ = lean_st_ref_get(v___y_1494_);
v_toCold_1503_ = lean_ctor_get(v___y_1495_, 0);
v_mctx_1504_ = lean_ctor_get(v___x_1502_, 0);
lean_inc_ref(v_mctx_1504_);
lean_dec(v___x_1502_);
v_lctx_1505_ = lean_ctor_get(v___y_1493_, 2);
v_options_1506_ = lean_ctor_get(v_toCold_1503_, 2);
lean_inc_ref(v_options_1506_);
lean_inc_ref(v_lctx_1505_);
v___x_1507_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1507_, 0, v_env_1501_);
lean_ctor_set(v___x_1507_, 1, v_mctx_1504_);
lean_ctor_set(v___x_1507_, 2, v_lctx_1505_);
lean_ctor_set(v___x_1507_, 3, v_options_1506_);
v___x_1508_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1507_);
lean_ctor_set(v___x_1508_, 1, v_msgData_1492_);
v___x_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(v_msgData_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0___redArg(lean_object* v_msg_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v_ref_1525_; lean_object* v_macroStack_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v_a_1529_; lean_object* v___x_1530_; lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1539_; 
v_ref_1525_ = lean_ctor_get(v___y_1522_, 2);
v_macroStack_1526_ = lean_ctor_get(v___y_1518_, 1);
v___x_1527_ = l_Lean_Elab_getBetterRef(v_ref_1525_, v_macroStack_1526_);
v___x_1528_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(v_msg_1517_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1529_);
lean_dec_ref(v___x_1528_);
lean_inc(v_macroStack_1526_);
v___x_1530_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(v_a_1529_, v_macroStack_1526_, v___y_1522_);
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1533_ = v___x_1530_;
v_isShared_1534_ = v_isSharedCheck_1539_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1530_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1539_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1535_; lean_object* v___x_1537_; 
v___x_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1527_);
lean_ctor_set(v___x_1535_, 1, v_a_1531_);
if (v_isShared_1534_ == 0)
{
lean_ctor_set_tag(v___x_1533_, 1);
lean_ctor_set(v___x_1533_, 0, v___x_1535_);
v___x_1537_ = v___x_1533_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v___x_1535_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0___redArg___boxed(lean_object* v_msg_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0___redArg(v_msg_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
return v_res_1548_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__0));
v___x_1551_ = l_Lean_stringToMessageData(v___x_1550_);
return v___x_1551_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__2));
v___x_1554_ = l_Lean_stringToMessageData(v___x_1553_);
return v___x_1554_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1558_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__6));
v___x_1559_ = lean_unsigned_to_nat(11u);
v___x_1560_ = lean_unsigned_to_nat(122u);
v___x_1561_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__5));
v___x_1562_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__4));
v___x_1563_ = l_mkPanicMessageWithDecl(v___x_1562_, v___x_1561_, v___x_1560_, v___x_1559_, v___x_1558_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0(lean_object* v_constName_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
lean_object* v___x_1580_; lean_object* v_env_1581_; uint8_t v___x_1582_; lean_object* v___x_1583_; 
v___x_1580_ = lean_st_ref_get(v___y_1570_);
v_env_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc_ref(v_env_1581_);
lean_dec(v___x_1580_);
v___x_1582_ = 0;
lean_inc(v_constName_1564_);
v___x_1583_ = l_Lean_Environment_findAsync_x3f(v_env_1581_, v_constName_1564_, v___x_1582_);
if (lean_obj_tag(v___x_1583_) == 1)
{
lean_object* v_val_1584_; uint8_t v_kind_1585_; 
v_val_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_val_1584_);
lean_dec_ref_known(v___x_1583_, 1);
v_kind_1585_ = lean_ctor_get_uint8(v_val_1584_, sizeof(void*)*3);
if (v_kind_1585_ == 6)
{
lean_object* v___x_1586_; 
v___x_1586_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1584_);
if (lean_obj_tag(v___x_1586_) == 6)
{
lean_object* v_val_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
lean_dec(v_constName_1564_);
v_val_1587_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___x_1586_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_val_1587_);
lean_dec(v___x_1586_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
lean_ctor_set_tag(v___x_1589_, 0);
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_val_1587_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
else
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
lean_dec_ref(v___x_1586_);
v___x_1595_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__7);
v___x_1596_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__1(v___x_1595_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1605_; 
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1599_ = v___x_1596_;
v_isShared_1600_ = v_isSharedCheck_1605_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v___x_1596_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1605_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
if (lean_obj_tag(v_a_1597_) == 0)
{
lean_del_object(v___x_1599_);
goto v___jp_1572_;
}
else
{
lean_object* v_val_1601_; lean_object* v___x_1603_; 
lean_dec(v_constName_1564_);
v_val_1601_ = lean_ctor_get(v_a_1597_, 0);
lean_inc(v_val_1601_);
lean_dec_ref_known(v_a_1597_, 1);
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 0, v_val_1601_);
v___x_1603_ = v___x_1599_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_val_1601_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
lean_dec(v_constName_1564_);
v_a_1606_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1596_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1596_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
else
{
lean_dec(v_val_1584_);
goto v___jp_1572_;
}
}
else
{
lean_dec(v___x_1583_);
goto v___jp_1572_;
}
v___jp_1572_:
{
lean_object* v___x_1573_; uint8_t v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1573_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__1);
v___x_1574_ = 0;
v___x_1575_ = l_Lean_MessageData_ofConstName(v_constName_1564_, v___x_1574_);
v___x_1576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1573_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__3);
v___x_1578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1576_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
v___x_1579_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0___redArg(v___x_1578_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
return v___x_1579_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___boxed(lean_object* v_constName_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0(v_constName_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg(lean_object* v_indVal_1624_, lean_object* v_auxFunName_1625_, lean_object* v_as_x27_1626_, lean_object* v_b_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
if (lean_obj_tag(v_as_x27_1626_) == 0)
{
lean_object* v___x_1635_; 
lean_dec(v_auxFunName_1625_);
lean_dec_ref(v_indVal_1624_);
v___x_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1635_, 0, v_b_1627_);
return v___x_1635_;
}
else
{
lean_object* v_head_1636_; lean_object* v_tail_1637_; lean_object* v___f_1638_; lean_object* v___x_1639_; lean_object* v_alts_1640_; lean_object* v___x_1641_; 
v_head_1636_ = lean_ctor_get(v_as_x27_1626_, 0);
v_tail_1637_ = lean_ctor_get(v_as_x27_1626_, 1);
v___f_1638_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___closed__0));
v___x_1639_ = lean_unsigned_to_nat(0u);
v_alts_1640_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__0));
lean_inc(v_head_1636_);
v___x_1641_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0(v_head_1636_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v_toConstantVal_1643_; lean_object* v_numFields_1644_; lean_object* v_type_1645_; lean_object* v___f_1646_; uint8_t v___x_1647_; lean_object* v___x_1648_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1642_);
lean_dec_ref_known(v___x_1641_, 1);
v_toConstantVal_1643_ = lean_ctor_get(v_a_1642_, 0);
lean_inc_ref(v_toConstantVal_1643_);
v_numFields_1644_ = lean_ctor_get(v_a_1642_, 4);
lean_inc(v_numFields_1644_);
lean_dec(v_a_1642_);
v_type_1645_ = lean_ctor_get(v_toConstantVal_1643_, 2);
lean_inc_ref(v_type_1645_);
lean_dec_ref(v_toConstantVal_1643_);
lean_inc(v_head_1636_);
lean_inc(v_auxFunName_1625_);
lean_inc_ref(v_indVal_1624_);
v___f_1646_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___boxed), 16, 7);
lean_closure_set(v___f_1646_, 0, v_indVal_1624_);
lean_closure_set(v___f_1646_, 1, v___x_1639_);
lean_closure_set(v___f_1646_, 2, v_alts_1640_);
lean_closure_set(v___f_1646_, 3, v_numFields_1644_);
lean_closure_set(v___f_1646_, 4, v_auxFunName_1625_);
lean_closure_set(v___f_1646_, 5, v___f_1638_);
lean_closure_set(v___f_1646_, 6, v_head_1636_);
v___x_1647_ = 0;
v___x_1648_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg(v_type_1645_, v___f_1646_, v___x_1647_, v___x_1647_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1650_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
lean_inc(v_a_1649_);
lean_dec_ref_known(v___x_1648_, 1);
v___x_1650_ = lean_array_push(v_b_1627_, v_a_1649_);
v_as_x27_1626_ = v_tail_1637_;
v_b_1627_ = v___x_1650_;
goto _start;
}
else
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
lean_dec_ref(v_b_1627_);
lean_dec(v_auxFunName_1625_);
lean_dec_ref(v_indVal_1624_);
v_a_1652_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v___x_1648_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1648_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1657_; 
if (v_isShared_1655_ == 0)
{
v___x_1657_ = v___x_1654_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1652_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
lean_dec_ref(v_b_1627_);
lean_dec(v_auxFunName_1625_);
lean_dec_ref(v_indVal_1624_);
v_a_1660_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1641_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1641_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___boxed(lean_object* v_indVal_1668_, lean_object* v_auxFunName_1669_, lean_object* v_as_x27_1670_, lean_object* v_b_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg(v_indVal_1668_, v_auxFunName_1669_, v_as_x27_1670_, v_b_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v_as_x27_1670_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__6(size_t v_sz_1680_, size_t v_i_1681_, lean_object* v_bs_1682_){
_start:
{
uint8_t v___x_1683_; 
v___x_1683_ = lean_usize_dec_lt(v_i_1681_, v_sz_1680_);
if (v___x_1683_ == 0)
{
return v_bs_1682_;
}
else
{
lean_object* v_v_1684_; lean_object* v___x_1685_; lean_object* v_bs_x27_1686_; size_t v___x_1687_; size_t v___x_1688_; lean_object* v___x_1689_; 
v_v_1684_ = lean_array_uget(v_bs_1682_, v_i_1681_);
v___x_1685_ = lean_unsigned_to_nat(0u);
v_bs_x27_1686_ = lean_array_uset(v_bs_1682_, v_i_1681_, v___x_1685_);
v___x_1687_ = ((size_t)1ULL);
v___x_1688_ = lean_usize_add(v_i_1681_, v___x_1687_);
v___x_1689_ = lean_array_uset(v_bs_x27_1686_, v_i_1681_, v_v_1684_);
v_i_1681_ = v___x_1688_;
v_bs_1682_ = v___x_1689_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__6___boxed(lean_object* v_sz_1691_, lean_object* v_i_1692_, lean_object* v_bs_1693_){
_start:
{
size_t v_sz_boxed_1694_; size_t v_i_boxed_1695_; lean_object* v_res_1696_; 
v_sz_boxed_1694_ = lean_unbox_usize(v_sz_1691_);
lean_dec(v_sz_1691_);
v_i_boxed_1695_ = lean_unbox_usize(v_i_1692_);
lean_dec(v_i_1692_);
v_res_1696_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__6(v_sz_boxed_1694_, v_i_boxed_1695_, v_bs_1693_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts(lean_object* v_indVal_1697_, lean_object* v_auxFunName_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v_ctors_1706_; lean_object* v_alts_1707_; lean_object* v___x_1708_; 
v_ctors_1706_ = lean_ctor_get(v_indVal_1697_, 4);
v_alts_1707_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__0));
lean_inc_ref(v_indVal_1697_);
v___x_1708_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg(v_indVal_1697_, v_auxFunName_1698_, v_ctors_1706_, v_alts_1707_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v_a_1709_; lean_object* v___x_1710_; 
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_a_1709_);
lean_dec_ref_known(v___x_1708_, 1);
v___x_1710_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt(v_indVal_1697_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
lean_dec_ref(v_indVal_1697_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1722_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1713_ = v___x_1710_;
v_isShared_1714_ = v_isSharedCheck_1722_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1710_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1722_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1715_; size_t v_sz_1716_; size_t v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1715_ = lean_array_push(v_a_1709_, v_a_1711_);
v_sz_1716_ = lean_array_size(v___x_1715_);
v___x_1717_ = ((size_t)0ULL);
v___x_1718_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__6(v_sz_1716_, v___x_1717_, v___x_1715_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1718_);
v___x_1720_ = v___x_1713_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1718_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
lean_dec(v_a_1709_);
v_a_1723_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1710_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1710_);
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
else
{
lean_dec_ref(v_indVal_1697_);
return v___x_1708_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts___boxed(lean_object* v_indVal_1731_, lean_object* v_auxFunName_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts(v_indVal_1731_, v_auxFunName_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_);
lean_dec(v_a_1738_);
lean_dec_ref(v_a_1737_);
lean_dec(v_a_1736_);
lean_dec_ref(v_a_1735_);
lean_dec(v_a_1734_);
lean_dec_ref(v_a_1733_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1(lean_object* v_upperBound_1741_, lean_object* v_inst_1742_, lean_object* v_R_1743_, lean_object* v_a_1744_, lean_object* v_b_1745_, lean_object* v_c_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg(v_upperBound_1741_, v_a_1744_, v_b_1745_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___boxed(lean_object* v_upperBound_1755_, lean_object* v_inst_1756_, lean_object* v_R_1757_, lean_object* v_a_1758_, lean_object* v_b_1759_, lean_object* v_c_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1(v_upperBound_1755_, v_inst_1756_, v_R_1757_, v_a_1758_, v_b_1759_, v_c_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_);
lean_dec(v___y_1766_);
lean_dec_ref(v___y_1765_);
lean_dec(v___y_1764_);
lean_dec_ref(v___y_1763_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v_upperBound_1755_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2(lean_object* v___x_1769_, lean_object* v_as_1770_, size_t v_i_1771_, size_t v_stop_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2___redArg(v___x_1769_, v_as_1770_, v_i_1771_, v_stop_1772_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2___boxed(lean_object* v___x_1781_, lean_object* v_as_1782_, lean_object* v_i_1783_, lean_object* v_stop_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
size_t v_i_boxed_1792_; size_t v_stop_boxed_1793_; lean_object* v_res_1794_; 
v_i_boxed_1792_ = lean_unbox_usize(v_i_1783_);
lean_dec(v_i_1783_);
v_stop_boxed_1793_ = lean_unbox_usize(v_stop_1784_);
lean_dec(v_stop_1784_);
v_res_1794_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__2(v___x_1781_, v_as_1782_, v_i_boxed_1792_, v_stop_boxed_1793_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
lean_dec_ref(v_as_1782_);
lean_dec_ref(v___x_1781_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3(lean_object* v_upperBound_1795_, lean_object* v_indVal_1796_, lean_object* v___x_1797_, lean_object* v_xs_1798_, lean_object* v_a_1799_, lean_object* v_auxFunName_1800_, lean_object* v_inst_1801_, lean_object* v_R_1802_, lean_object* v_a_1803_, lean_object* v_b_1804_, lean_object* v_c_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg(v_upperBound_1795_, v_indVal_1796_, v___x_1797_, v_xs_1798_, v_a_1799_, v_auxFunName_1800_, v_a_1803_, v_b_1804_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___boxed(lean_object** _args){
lean_object* v_upperBound_1814_ = _args[0];
lean_object* v_indVal_1815_ = _args[1];
lean_object* v___x_1816_ = _args[2];
lean_object* v_xs_1817_ = _args[3];
lean_object* v_a_1818_ = _args[4];
lean_object* v_auxFunName_1819_ = _args[5];
lean_object* v_inst_1820_ = _args[6];
lean_object* v_R_1821_ = _args[7];
lean_object* v_a_1822_ = _args[8];
lean_object* v_b_1823_ = _args[9];
lean_object* v_c_1824_ = _args[10];
lean_object* v___y_1825_ = _args[11];
lean_object* v___y_1826_ = _args[12];
lean_object* v___y_1827_ = _args[13];
lean_object* v___y_1828_ = _args[14];
lean_object* v___y_1829_ = _args[15];
lean_object* v___y_1830_ = _args[16];
lean_object* v___y_1831_ = _args[17];
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3(v_upperBound_1814_, v_indVal_1815_, v___x_1816_, v_xs_1817_, v_a_1818_, v_auxFunName_1819_, v_inst_1820_, v_R_1821_, v_a_1822_, v_b_1823_, v_c_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec_ref(v_a_1818_);
lean_dec(v___x_1816_);
lean_dec(v_upperBound_1814_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5(lean_object* v_indVal_1833_, lean_object* v_auxFunName_1834_, lean_object* v_as_1835_, lean_object* v_as_x27_1836_, lean_object* v_b_1837_, lean_object* v_a_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg(v_indVal_1833_, v_auxFunName_1834_, v_as_x27_1836_, v_b_1837_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___boxed(lean_object* v_indVal_1847_, lean_object* v_auxFunName_1848_, lean_object* v_as_1849_, lean_object* v_as_x27_1850_, lean_object* v_b_1851_, lean_object* v_a_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v_res_1860_; 
v_res_1860_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5(v_indVal_1847_, v_auxFunName_1848_, v_as_1849_, v_as_x27_1850_, v_b_1851_, v_a_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v_as_x27_1850_);
lean_dec(v_as_1849_);
return v_res_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0(lean_object* v_00_u03b1_1861_, lean_object* v_msg_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0___redArg(v_msg_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1871_, lean_object* v_msg_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0(v_00_u03b1_1871_, v_msg_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
lean_dec(v___y_1878_);
lean_dec_ref(v___y_1877_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3(lean_object* v_msgData_1881_, lean_object* v_macroStack_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg(v_msgData_1881_, v_macroStack_1882_, v___y_1887_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___boxed(lean_object* v_msgData_1891_, lean_object* v_macroStack_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3(v_msgData_1891_, v_macroStack_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld(lean_object* v_header_1914_, lean_object* v_indVal_1915_, lean_object* v_auxFunName_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_){
_start:
{
lean_object* v___x_1924_; 
lean_inc_ref(v_indVal_1915_);
v___x_1924_ = l_Lean_Elab_Deriving_mkDiscrs(v_header_1914_, v_indVal_1915_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1926_; 
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc(v_a_1925_);
lean_dec_ref_known(v___x_1924_, 1);
v___x_1926_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts(v_indVal_1915_, v_auxFunName_1916_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1957_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1929_ = v___x_1926_;
v_isShared_1930_ = v_isSharedCheck_1957_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1926_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1957_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v_ref_1931_; uint8_t v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; size_t v_sz_1940_; size_t v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1955_; 
v_ref_1931_ = lean_ctor_get(v_a_1921_, 2);
v___x_1932_ = 0;
v___x_1933_ = l_Lean_SourceInfo_fromRef(v_ref_1931_, v___x_1932_);
v___x_1934_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__0));
v___x_1935_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1));
lean_inc_n(v___x_1933_, 6);
v___x_1936_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1933_);
lean_ctor_set(v___x_1936_, 1, v___x_1934_);
v___x_1937_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_1938_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
v___x_1939_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1933_);
lean_ctor_set(v___x_1939_, 1, v___x_1937_);
lean_ctor_set(v___x_1939_, 2, v___x_1938_);
v_sz_1940_ = lean_array_size(v_a_1925_);
v___x_1941_ = ((size_t)0ULL);
v___x_1942_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__0(v_sz_1940_, v___x_1941_, v_a_1925_);
v___x_1943_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__15);
v___x_1944_ = l_Lean_mkSepArray(v___x_1942_, v___x_1943_);
lean_dec_ref(v___x_1942_);
v___x_1945_ = l_Array_append___redArg(v___x_1938_, v___x_1944_);
lean_dec_ref(v___x_1944_);
v___x_1946_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1933_);
lean_ctor_set(v___x_1946_, 1, v___x_1937_);
lean_ctor_set(v___x_1946_, 2, v___x_1945_);
v___x_1947_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__2));
v___x_1948_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1933_);
lean_ctor_set(v___x_1948_, 1, v___x_1947_);
v___x_1949_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4));
v___x_1950_ = l_Array_append___redArg(v___x_1938_, v_a_1927_);
lean_dec(v_a_1927_);
v___x_1951_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1933_);
lean_ctor_set(v___x_1951_, 1, v___x_1937_);
lean_ctor_set(v___x_1951_, 2, v___x_1950_);
v___x_1952_ = l_Lean_Syntax_node1(v___x_1933_, v___x_1949_, v___x_1951_);
lean_inc_ref(v___x_1939_);
v___x_1953_ = l_Lean_Syntax_node6(v___x_1933_, v___x_1935_, v___x_1936_, v___x_1939_, v___x_1939_, v___x_1946_, v___x_1948_, v___x_1952_);
if (v_isShared_1930_ == 0)
{
lean_ctor_set(v___x_1929_, 0, v___x_1953_);
v___x_1955_ = v___x_1929_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v___x_1953_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_dec(v_a_1925_);
v_a_1958_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1926_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1926_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
else
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
lean_dec(v_auxFunName_1916_);
lean_dec_ref(v_indVal_1915_);
v_a_1966_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v___x_1924_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___x_1924_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1966_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___boxed(lean_object* v_header_1974_, lean_object* v_indVal_1975_, lean_object* v_auxFunName_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld(v_header_1974_, v_indVal_1975_, v_auxFunName_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_);
lean_dec(v_a_1982_);
lean_dec_ref(v_a_1981_);
lean_dec(v_a_1980_);
lean_dec_ref(v_a_1979_);
lean_dec(v_a_1978_);
lean_dec_ref(v_a_1977_);
return v_res_1984_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1985_; 
v___x_1985_ = l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0(lean_object* v_msg_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v___x_1994_; lean_object* v___x_39899__overap_1995_; lean_object* v___x_1996_; 
v___x_1994_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0___closed__0, &l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0___closed__0);
v___x_39899__overap_1995_ = lean_panic_fn_borrowed(v___x_1994_, v_msg_1986_);
lean_inc(v___y_1992_);
lean_inc_ref(v___y_1991_);
lean_inc(v___y_1990_);
lean_inc_ref(v___y_1989_);
lean_inc(v___y_1988_);
lean_inc_ref(v___y_1987_);
v___x_1996_ = lean_apply_7(v___x_39899__overap_1995_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, lean_box(0));
return v___x_1996_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0___boxed(lean_object* v_msg_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0(v_msg_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
lean_dec(v___y_2003_);
lean_dec_ref(v___y_2002_);
lean_dec(v___y_2001_);
lean_dec_ref(v___y_2000_);
lean_dec(v___y_1999_);
lean_dec_ref(v___y_1998_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1___redArg(lean_object* v___x_2006_, lean_object* v_as_2007_, size_t v_i_2008_, size_t v_stop_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
uint8_t v___x_2015_; 
v___x_2015_ = lean_usize_dec_eq(v_i_2008_, v_stop_2009_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_array_uget_borrowed(v_as_2007_, v_i_2008_);
lean_inc(v___y_2013_);
lean_inc_ref(v___y_2012_);
lean_inc(v___y_2011_);
lean_inc_ref(v___y_2010_);
lean_inc(v___x_2016_);
v___x_2017_ = lean_infer_type(v___x_2016_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2030_; 
v_a_2018_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2020_ = v___x_2017_;
v_isShared_2021_ = v_isSharedCheck_2030_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_2017_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2030_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
uint8_t v___x_2022_; 
v___x_2022_ = l_Lean_Expr_containsFVar(v_a_2018_, v___x_2006_);
lean_dec(v_a_2018_);
if (v___x_2022_ == 0)
{
size_t v___x_2023_; size_t v___x_2024_; 
lean_del_object(v___x_2020_);
v___x_2023_ = ((size_t)1ULL);
v___x_2024_ = lean_usize_add(v_i_2008_, v___x_2023_);
v_i_2008_ = v___x_2024_;
goto _start;
}
else
{
lean_object* v___x_2026_; lean_object* v___x_2028_; 
v___x_2026_ = lean_box(v___x_2022_);
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 0, v___x_2026_);
v___x_2028_ = v___x_2020_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2026_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
return v___x_2028_;
}
}
}
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
v_a_2031_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2017_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2017_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
else
{
uint8_t v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2039_ = 0;
v___x_2040_ = lean_box(v___x_2039_);
v___x_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
return v___x_2041_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1___redArg___boxed(lean_object* v___x_2042_, lean_object* v_as_2043_, lean_object* v_i_2044_, lean_object* v_stop_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
size_t v_i_boxed_2051_; size_t v_stop_boxed_2052_; lean_object* v_res_2053_; 
v_i_boxed_2051_ = lean_unbox_usize(v_i_2044_);
lean_dec(v_i_2044_);
v_stop_boxed_2052_ = lean_unbox_usize(v_stop_2045_);
lean_dec(v_stop_2045_);
v_res_2053_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1___redArg(v___x_2042_, v_as_2043_, v_i_boxed_2051_, v_stop_boxed_2052_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec_ref(v_as_2043_);
lean_dec(v___x_2042_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg(lean_object* v_upperBound_2055_, lean_object* v_indVal_2056_, lean_object* v___x_2057_, lean_object* v_xs_2058_, lean_object* v_a_2059_, lean_object* v___x_2060_, lean_object* v_auxFunName_2061_, lean_object* v_a_2062_, lean_object* v_b_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_){
_start:
{
uint8_t v___x_2071_; 
v___x_2071_ = lean_nat_dec_lt(v_a_2062_, v_upperBound_2055_);
if (v___x_2071_ == 0)
{
lean_object* v___x_2072_; 
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v___x_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2072_, 0, v_b_2063_);
return v___x_2072_;
}
else
{
lean_object* v_snd_2073_; lean_object* v_snd_2074_; lean_object* v_fst_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2406_; 
v_snd_2073_ = lean_ctor_get(v_b_2063_, 1);
lean_inc(v_snd_2073_);
v_snd_2074_ = lean_ctor_get(v_snd_2073_, 1);
lean_inc(v_snd_2074_);
v_fst_2075_ = lean_ctor_get(v_b_2063_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v_b_2063_);
if (v_isSharedCheck_2406_ == 0)
{
lean_object* v_unused_2407_; 
v_unused_2407_ = lean_ctor_get(v_b_2063_, 1);
lean_dec(v_unused_2407_);
v___x_2077_ = v_b_2063_;
v_isShared_2078_ = v_isSharedCheck_2406_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_fst_2075_);
lean_dec(v_b_2063_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2406_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v_fst_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2404_; 
v_fst_2079_ = lean_ctor_get(v_snd_2073_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v_snd_2073_);
if (v_isSharedCheck_2404_ == 0)
{
lean_object* v_unused_2405_; 
v_unused_2405_ = lean_ctor_get(v_snd_2073_, 1);
lean_dec(v_unused_2405_);
v___x_2081_ = v_snd_2073_;
v_isShared_2082_ = v_isSharedCheck_2404_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_fst_2079_);
lean_dec(v_snd_2073_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2404_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v_fst_2083_; lean_object* v_snd_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2403_; 
v_fst_2083_ = lean_ctor_get(v_snd_2074_, 0);
v_snd_2084_ = lean_ctor_get(v_snd_2074_, 1);
v_isSharedCheck_2403_ = !lean_is_exclusive(v_snd_2074_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2086_ = v_snd_2074_;
v_isShared_2087_ = v_isSharedCheck_2403_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_snd_2084_);
lean_inc(v_fst_2083_);
lean_dec(v_snd_2074_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2403_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v_numParams_2088_; lean_object* v___x_2089_; lean_object* v_a_2091_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; uint8_t v___x_2100_; 
v_numParams_2088_ = lean_ctor_get(v_indVal_2056_, 1);
v___x_2089_ = lean_unsigned_to_nat(1u);
v___x_2094_ = l_Lean_instInhabitedExpr;
v___x_2095_ = lean_nat_add(v_numParams_2088_, v___x_2057_);
v___x_2096_ = lean_nat_sub(v___x_2095_, v_a_2062_);
lean_dec(v___x_2095_);
v___x_2097_ = lean_nat_sub(v___x_2096_, v___x_2089_);
lean_dec(v___x_2096_);
v___x_2098_ = lean_array_get_borrowed(v___x_2094_, v_xs_2058_, v___x_2097_);
v___x_2099_ = l_Lean_Expr_fvarId_x21(v___x_2098_);
v___x_2100_ = l_Lean_Expr_containsFVar(v_a_2059_, v___x_2099_);
if (v___x_2100_ == 0)
{
lean_object* v___x_2101_; 
lean_inc(v___x_2099_);
v___x_2101_ = l_Lean_FVarId_getUserName___redArg(v___x_2099_, v___y_2066_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2103_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc_n(v_a_2102_, 2);
lean_dec_ref_known(v___x_2101_, 1);
v___x_2103_ = l_Lean_Core_mkFreshUserName(v_a_2102_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2104_);
lean_dec_ref_known(v___x_2103_, 1);
v___x_2105_ = l_Lean_mkIdent(v_a_2104_);
v___x_2106_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg___closed__0));
v___x_2107_ = lean_name_append_after(v_a_2102_, v___x_2106_);
v___x_2108_ = l_Lean_Core_mkFreshUserName(v___x_2107_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; uint8_t v_a_2114_; lean_object* v___x_2167_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2108_, 1);
v___x_2110_ = l_Lean_mkIdent(v_a_2109_);
lean_inc(v___x_2105_);
v___x_2111_ = lean_array_push(v_fst_2075_, v___x_2105_);
lean_inc(v___x_2110_);
v___x_2112_ = lean_array_push(v_fst_2079_, v___x_2110_);
lean_inc(v___y_2069_);
lean_inc_ref(v___y_2068_);
lean_inc(v___y_2067_);
lean_inc_ref(v___y_2066_);
lean_inc(v___x_2098_);
v___x_2167_ = lean_infer_type(v___x_2098_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v_a_2168_; lean_object* v___x_2169_; 
v_a_2168_ = lean_ctor_get(v___x_2167_, 0);
lean_inc_n(v_a_2168_, 2);
lean_dec_ref_known(v___x_2167_, 1);
v___x_2169_ = l_Lean_Meta_isProp(v_a_2168_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v_a_2170_; uint8_t v___x_2171_; 
v_a_2170_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_a_2170_);
lean_dec_ref_known(v___x_2169_, 1);
v___x_2171_ = lean_unbox(v_a_2170_);
if (v___x_2171_ == 0)
{
uint8_t v___x_2172_; lean_object* v___y_2174_; lean_object* v___y_2175_; lean_object* v___y_2176_; lean_object* v_lower_2282_; lean_object* v_upper_2283_; 
v___x_2172_ = l_Lean_Expr_isAppOf(v_a_2168_, v___x_2060_);
lean_dec(v_a_2168_);
if (v___x_2172_ == 0)
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; uint8_t v___x_2294_; 
lean_dec(v_a_2170_);
v___x_2291_ = lean_nat_add(v___x_2097_, v___x_2089_);
lean_dec(v___x_2097_);
v___x_2292_ = lean_unsigned_to_nat(0u);
v___x_2293_ = lean_array_get_size(v_xs_2058_);
v___x_2294_ = lean_nat_dec_le(v___x_2291_, v___x_2292_);
if (v___x_2294_ == 0)
{
v_lower_2282_ = v___x_2291_;
v_upper_2283_ = v___x_2293_;
goto v___jp_2281_;
}
else
{
lean_dec(v___x_2291_);
v_lower_2282_ = v___x_2292_;
v_upper_2283_ = v___x_2293_;
goto v___jp_2281_;
}
}
else
{
uint8_t v___x_2295_; 
lean_dec(v___x_2099_);
lean_dec(v___x_2097_);
lean_del_object(v___x_2086_);
lean_del_object(v___x_2081_);
lean_del_object(v___x_2077_);
v___x_2295_ = lean_unbox(v_snd_2084_);
if (v___x_2295_ == 0)
{
lean_object* v___x_2296_; 
lean_dec(v_a_2170_);
v___x_2296_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2296_) == 0)
{
lean_object* v_a_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v_a_2297_ = lean_ctor_get(v___x_2296_, 0);
lean_inc_n(v_a_2297_, 4);
lean_dec_ref_known(v___x_2296_, 1);
v___x_2298_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__5));
v___x_2299_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52));
lean_inc(v_auxFunName_2061_);
v___x_2300_ = l_Lean_mkIdent(v_auxFunName_2061_);
v___x_2301_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_2302_ = l_Lean_Syntax_node2(v_a_2297_, v___x_2301_, v___x_2105_, v___x_2110_);
v___x_2303_ = l_Lean_Syntax_node2(v_a_2297_, v___x_2299_, v___x_2300_, v___x_2302_);
v___x_2304_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__9));
v___x_2305_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2305_, 0, v_a_2297_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v___x_2306_ = l_Lean_Syntax_node3(v_a_2297_, v___x_2298_, v___x_2303_, v___x_2305_, v_fst_2083_);
v___x_2307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
lean_ctor_set(v___x_2307_, 1, v_snd_2084_);
v___x_2308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2112_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
v___x_2309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2111_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
v_a_2091_ = v___x_2309_;
goto v___jp_2090_;
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2317_; 
lean_dec_ref(v___x_2112_);
lean_dec_ref(v___x_2111_);
lean_dec(v___x_2110_);
lean_dec(v___x_2105_);
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2310_ = lean_ctor_get(v___x_2296_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2312_ = v___x_2296_;
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2296_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2310_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
else
{
lean_object* v___x_2318_; 
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
v___x_2318_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc_n(v_a_2319_, 2);
lean_dec_ref_known(v___x_2318_, 1);
v___x_2320_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52));
lean_inc(v_auxFunName_2061_);
v___x_2321_ = l_Lean_mkIdent(v_auxFunName_2061_);
v___x_2322_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_2323_ = l_Lean_Syntax_node2(v_a_2319_, v___x_2322_, v___x_2105_, v___x_2110_);
v___x_2324_ = l_Lean_Syntax_node2(v_a_2319_, v___x_2320_, v___x_2321_, v___x_2323_);
v___x_2325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2324_);
lean_ctor_set(v___x_2325_, 1, v_a_2170_);
v___x_2326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2112_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
v___x_2327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2111_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
v_a_2091_ = v___x_2327_;
goto v___jp_2090_;
}
else
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
lean_dec(v_a_2170_);
lean_dec_ref(v___x_2112_);
lean_dec_ref(v___x_2111_);
lean_dec(v___x_2110_);
lean_dec(v___x_2105_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2328_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2330_ = v___x_2318_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2318_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2331_ == 0)
{
v___x_2333_ = v___x_2330_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_a_2328_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
}
}
v___jp_2173_:
{
uint8_t v___x_2177_; 
v___x_2177_ = lean_nat_dec_lt(v___y_2174_, v___y_2176_);
if (v___x_2177_ == 0)
{
lean_dec(v___y_2176_);
lean_dec_ref(v___y_2175_);
lean_dec(v___y_2174_);
lean_dec(v___x_2099_);
v_a_2114_ = v___x_2177_;
goto v___jp_2113_;
}
else
{
size_t v___x_2178_; size_t v___x_2179_; lean_object* v___x_2180_; 
v___x_2178_ = lean_usize_of_nat(v___y_2174_);
lean_dec(v___y_2174_);
v___x_2179_ = lean_usize_of_nat(v___y_2176_);
lean_dec(v___y_2176_);
v___x_2180_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1___redArg(v___x_2099_, v___y_2175_, v___x_2178_, v___x_2179_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
lean_dec_ref(v___y_2175_);
lean_dec(v___x_2099_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v_a_2181_; uint8_t v___x_2182_; 
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_a_2181_);
lean_dec_ref_known(v___x_2180_, 1);
v___x_2182_ = lean_unbox(v_a_2181_);
if (v___x_2182_ == 0)
{
uint8_t v___x_2183_; 
v___x_2183_ = lean_unbox(v_a_2181_);
lean_dec(v_a_2181_);
v_a_2114_ = v___x_2183_;
goto v___jp_2113_;
}
else
{
lean_object* v___x_2184_; 
lean_dec(v_a_2181_);
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
lean_del_object(v___x_2081_);
lean_del_object(v___x_2077_);
v___x_2184_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_toCold_2185_; lean_object* v_a_2186_; lean_object* v_quotContext_2187_; lean_object* v_currMacroScope_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v_toCold_2185_ = lean_ctor_get(v___y_2068_, 0);
v_a_2186_ = lean_ctor_get(v___x_2184_, 0);
lean_inc_n(v_a_2186_, 31);
lean_dec_ref_known(v___x_2184_, 1);
v_quotContext_2187_ = lean_ctor_get(v_toCold_2185_, 8);
v_currMacroScope_2188_ = lean_ctor_get(v_toCold_2185_, 9);
v___x_2189_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__11));
v___x_2190_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__12));
v___x_2191_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2191_, 0, v_a_2186_);
lean_ctor_set(v___x_2191_, 1, v___x_2190_);
v___x_2192_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__14));
v___x_2193_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16);
v___x_2194_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__17));
lean_inc_n(v_currMacroScope_2188_, 4);
lean_inc_n(v_quotContext_2187_, 4);
v___x_2195_ = l_Lean_addMacroScope(v_quotContext_2187_, v___x_2194_, v_currMacroScope_2188_);
v___x_2196_ = lean_box(0);
v___x_2197_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2197_, 0, v_a_2186_);
lean_ctor_set(v___x_2197_, 1, v___x_2193_);
lean_ctor_set(v___x_2197_, 2, v___x_2195_);
lean_ctor_set(v___x_2197_, 3, v___x_2196_);
lean_inc_ref(v___x_2197_);
v___x_2198_ = l_Lean_Syntax_node1(v_a_2186_, v___x_2192_, v___x_2197_);
v___x_2199_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__18));
v___x_2200_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2200_, 0, v_a_2186_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
v___x_2201_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7));
v___x_2202_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8));
v___x_2203_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2203_, 0, v_a_2186_);
lean_ctor_set(v___x_2203_, 1, v___x_2202_);
v___x_2204_ = l_Lean_Syntax_node3(v_a_2186_, v___x_2201_, v___x_2105_, v___x_2203_, v___x_2110_);
v___x_2205_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__19));
v___x_2206_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2206_, 0, v_a_2186_);
lean_ctor_set(v___x_2206_, 1, v___x_2205_);
v___x_2207_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__21));
v___x_2208_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__22));
v___x_2209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2209_, 0, v_a_2186_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__25));
v___x_2211_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__27));
v___x_2212_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_2213_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__28));
v___x_2214_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__29));
v___x_2215_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2215_, 0, v_a_2186_);
lean_ctor_set(v___x_2215_, 1, v___x_2213_);
v___x_2216_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__31));
v___x_2217_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
v___x_2218_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2218_, 0, v_a_2186_);
lean_ctor_set(v___x_2218_, 1, v___x_2212_);
lean_ctor_set(v___x_2218_, 2, v___x_2217_);
v___x_2219_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33));
v___x_2220_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35));
v___x_2221_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__36));
v___x_2222_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2222_, 0, v_a_2186_);
lean_ctor_set(v___x_2222_, 1, v___x_2221_);
v___x_2223_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__38));
v___x_2224_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40);
v___x_2225_ = lean_box(0);
v___x_2226_ = l_Lean_addMacroScope(v_quotContext_2187_, v___x_2225_, v_currMacroScope_2188_);
v___x_2227_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__50));
v___x_2228_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2228_, 0, v_a_2186_);
lean_ctor_set(v___x_2228_, 1, v___x_2224_);
lean_ctor_set(v___x_2228_, 2, v___x_2226_);
lean_ctor_set(v___x_2228_, 3, v___x_2227_);
v___x_2229_ = l_Lean_Syntax_node1(v_a_2186_, v___x_2223_, v___x_2228_);
v___x_2230_ = l_Lean_Syntax_node2(v_a_2186_, v___x_2220_, v___x_2222_, v___x_2229_);
v___x_2231_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52));
v___x_2232_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__54, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__54_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__54);
v___x_2233_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__55));
v___x_2234_ = l_Lean_addMacroScope(v_quotContext_2187_, v___x_2233_, v_currMacroScope_2188_);
v___x_2235_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__59));
v___x_2236_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2236_, 0, v_a_2186_);
lean_ctor_set(v___x_2236_, 1, v___x_2232_);
lean_ctor_set(v___x_2236_, 2, v___x_2234_);
lean_ctor_set(v___x_2236_, 3, v___x_2235_);
v___x_2237_ = l_Lean_Syntax_node1(v_a_2186_, v___x_2212_, v___x_2197_);
v___x_2238_ = l_Lean_Syntax_node2(v_a_2186_, v___x_2231_, v___x_2236_, v___x_2237_);
v___x_2239_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__60));
v___x_2240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2240_, 0, v_a_2186_);
lean_ctor_set(v___x_2240_, 1, v___x_2239_);
v___x_2241_ = l_Lean_Syntax_node3(v_a_2186_, v___x_2219_, v___x_2230_, v___x_2238_, v___x_2240_);
lean_inc_ref_n(v___x_2218_, 3);
v___x_2242_ = l_Lean_Syntax_node2(v_a_2186_, v___x_2216_, v___x_2218_, v___x_2241_);
v___x_2243_ = l_Lean_Syntax_node1(v_a_2186_, v___x_2212_, v___x_2242_);
v___x_2244_ = l_Lean_Syntax_node4(v_a_2186_, v___x_2214_, v___x_2215_, v___x_2243_, v___x_2218_, v___x_2218_);
v___x_2245_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__61));
v___x_2246_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__62));
v___x_2247_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2247_, 0, v_a_2186_);
lean_ctor_set(v___x_2247_, 1, v___x_2245_);
v___x_2248_ = l_Lean_Syntax_node2(v_a_2186_, v___x_2246_, v___x_2247_, v_fst_2083_);
v___x_2249_ = l_Lean_Syntax_node3(v_a_2186_, v___x_2212_, v___x_2244_, v___x_2218_, v___x_2248_);
v___x_2250_ = l_Lean_Syntax_node1(v_a_2186_, v___x_2211_, v___x_2249_);
v___x_2251_ = l_Lean_Syntax_node1(v_a_2186_, v___x_2210_, v___x_2250_);
v___x_2252_ = l_Lean_Syntax_node2(v_a_2186_, v___x_2207_, v___x_2209_, v___x_2251_);
v___x_2253_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__63));
v___x_2254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2254_, 0, v_a_2186_);
lean_ctor_set(v___x_2254_, 1, v___x_2253_);
v___x_2255_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2);
v___x_2256_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__3));
v___x_2257_ = l_Lean_addMacroScope(v_quotContext_2187_, v___x_2256_, v_currMacroScope_2188_);
v___x_2258_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__65));
v___x_2259_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2259_, 0, v_a_2186_);
lean_ctor_set(v___x_2259_, 1, v___x_2255_);
lean_ctor_set(v___x_2259_, 2, v___x_2257_);
lean_ctor_set(v___x_2259_, 3, v___x_2258_);
v___x_2260_ = l_Lean_Syntax_node8(v_a_2186_, v___x_2189_, v___x_2191_, v___x_2198_, v___x_2200_, v___x_2204_, v___x_2206_, v___x_2252_, v___x_2254_, v___x_2259_);
v___x_2261_ = lean_box(v___x_2172_);
v___x_2262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2260_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2112_);
lean_ctor_set(v___x_2263_, 1, v___x_2262_);
v___x_2264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2111_);
lean_ctor_set(v___x_2264_, 1, v___x_2263_);
v_a_2091_ = v___x_2264_;
goto v___jp_2090_;
}
else
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2272_; 
lean_dec_ref(v___x_2112_);
lean_dec_ref(v___x_2111_);
lean_dec(v___x_2110_);
lean_dec(v___x_2105_);
lean_dec(v_fst_2083_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2265_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2267_ = v___x_2184_;
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v___x_2184_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2270_; 
if (v_isShared_2268_ == 0)
{
v___x_2270_ = v___x_2267_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2265_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
}
}
}
else
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2280_; 
lean_dec_ref(v___x_2112_);
lean_dec_ref(v___x_2111_);
lean_dec(v___x_2110_);
lean_dec(v___x_2105_);
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
lean_del_object(v___x_2081_);
lean_del_object(v___x_2077_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2273_ = lean_ctor_get(v___x_2180_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2275_ = v___x_2180_;
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2180_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2278_; 
if (v_isShared_2276_ == 0)
{
v___x_2278_ = v___x_2275_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_a_2273_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
}
}
}
v___jp_2281_:
{
lean_object* v___x_2284_; lean_object* v_array_2285_; lean_object* v_start_2286_; lean_object* v_stop_2287_; uint8_t v___x_2288_; 
lean_inc_ref(v_xs_2058_);
v___x_2284_ = l_Array_toSubarray___redArg(v_xs_2058_, v_lower_2282_, v_upper_2283_);
v_array_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc_ref(v_array_2285_);
v_start_2286_ = lean_ctor_get(v___x_2284_, 1);
lean_inc(v_start_2286_);
v_stop_2287_ = lean_ctor_get(v___x_2284_, 2);
lean_inc(v_stop_2287_);
lean_dec_ref(v___x_2284_);
v___x_2288_ = lean_nat_dec_lt(v_start_2286_, v_stop_2287_);
if (v___x_2288_ == 0)
{
lean_dec(v_stop_2287_);
lean_dec(v_start_2286_);
lean_dec_ref(v_array_2285_);
lean_dec(v___x_2099_);
v_a_2114_ = v___x_2288_;
goto v___jp_2113_;
}
else
{
lean_object* v___x_2289_; uint8_t v___x_2290_; 
v___x_2289_ = lean_array_get_size(v_array_2285_);
v___x_2290_ = lean_nat_dec_le(v_stop_2287_, v___x_2289_);
if (v___x_2290_ == 0)
{
lean_dec(v_stop_2287_);
v___y_2174_ = v_start_2286_;
v___y_2175_ = v_array_2285_;
v___y_2176_ = v___x_2289_;
goto v___jp_2173_;
}
else
{
v___y_2174_ = v_start_2286_;
v___y_2175_ = v_array_2285_;
v___y_2176_ = v_stop_2287_;
goto v___jp_2173_;
}
}
}
}
else
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
lean_dec(v_a_2170_);
lean_dec(v_a_2168_);
lean_dec(v___x_2110_);
lean_dec(v___x_2105_);
lean_dec(v___x_2099_);
lean_dec(v___x_2097_);
lean_del_object(v___x_2086_);
lean_del_object(v___x_2081_);
lean_del_object(v___x_2077_);
v___x_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2336_, 0, v_fst_2083_);
lean_ctor_set(v___x_2336_, 1, v_snd_2084_);
v___x_2337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2112_);
lean_ctor_set(v___x_2337_, 1, v___x_2336_);
v___x_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2111_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
v_a_2091_ = v___x_2338_;
goto v___jp_2090_;
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2346_; 
lean_dec(v_a_2168_);
lean_dec_ref(v___x_2112_);
lean_dec_ref(v___x_2111_);
lean_dec(v___x_2110_);
lean_dec(v___x_2105_);
lean_dec(v___x_2099_);
lean_dec(v___x_2097_);
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
lean_del_object(v___x_2081_);
lean_del_object(v___x_2077_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2339_ = lean_ctor_get(v___x_2169_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2341_ = v___x_2169_;
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2169_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2339_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
lean_dec_ref(v___x_2112_);
lean_dec_ref(v___x_2111_);
lean_dec(v___x_2110_);
lean_dec(v___x_2105_);
lean_dec(v___x_2099_);
lean_dec(v___x_2097_);
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
lean_del_object(v___x_2081_);
lean_del_object(v___x_2077_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2347_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v___x_2167_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2167_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
v___jp_2113_:
{
uint8_t v___x_2115_; 
v___x_2115_ = lean_unbox(v_snd_2084_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; 
v___x_2116_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2127_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc_n(v_a_2117_, 4);
lean_dec_ref_known(v___x_2116_, 1);
v___x_2118_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__5));
v___x_2119_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7));
v___x_2120_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8));
v___x_2121_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2121_, 0, v_a_2117_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = l_Lean_Syntax_node3(v_a_2117_, v___x_2119_, v___x_2105_, v___x_2121_, v___x_2110_);
v___x_2123_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__9));
v___x_2124_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2124_, 0, v_a_2117_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = l_Lean_Syntax_node3(v_a_2117_, v___x_2118_, v___x_2122_, v___x_2124_, v_fst_2083_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 0, v___x_2125_);
v___x_2127_ = v___x_2086_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2125_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v_snd_2084_);
v___x_2127_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_2129_; 
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 1, v___x_2127_);
lean_ctor_set(v___x_2081_, 0, v___x_2112_);
v___x_2129_ = v___x_2081_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2112_);
lean_ctor_set(v_reuseFailAlloc_2133_, 1, v___x_2127_);
v___x_2129_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
lean_object* v___x_2131_; 
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 1, v___x_2129_);
lean_ctor_set(v___x_2077_, 0, v___x_2111_);
v___x_2131_ = v___x_2077_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v___x_2111_);
lean_ctor_set(v_reuseFailAlloc_2132_, 1, v___x_2129_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
v_a_2091_ = v___x_2131_;
goto v___jp_2090_;
}
}
}
}
else
{
lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2142_; 
lean_dec_ref(v___x_2112_);
lean_dec_ref(v___x_2111_);
lean_dec(v___x_2110_);
lean_dec(v___x_2105_);
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
lean_del_object(v___x_2081_);
lean_del_object(v___x_2077_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2135_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2137_ = v___x_2116_;
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2116_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2140_; 
if (v_isShared_2138_ == 0)
{
v___x_2140_ = v___x_2137_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_a_2135_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
}
else
{
lean_object* v___x_2143_; 
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
v___x_2143_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v_a_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2151_; 
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc_n(v_a_2144_, 2);
lean_dec_ref_known(v___x_2143_, 1);
v___x_2145_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7));
v___x_2146_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8));
v___x_2147_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2147_, 0, v_a_2144_);
lean_ctor_set(v___x_2147_, 1, v___x_2146_);
v___x_2148_ = l_Lean_Syntax_node3(v_a_2144_, v___x_2145_, v___x_2105_, v___x_2147_, v___x_2110_);
v___x_2149_ = lean_box(v_a_2114_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 1, v___x_2149_);
lean_ctor_set(v___x_2086_, 0, v___x_2148_);
v___x_2151_ = v___x_2086_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2148_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v___x_2149_);
v___x_2151_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
lean_object* v___x_2153_; 
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 1, v___x_2151_);
lean_ctor_set(v___x_2081_, 0, v___x_2112_);
v___x_2153_ = v___x_2081_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v___x_2112_);
lean_ctor_set(v_reuseFailAlloc_2157_, 1, v___x_2151_);
v___x_2153_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
lean_object* v___x_2155_; 
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 1, v___x_2153_);
lean_ctor_set(v___x_2077_, 0, v___x_2111_);
v___x_2155_ = v___x_2077_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v___x_2111_);
lean_ctor_set(v_reuseFailAlloc_2156_, 1, v___x_2153_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
v_a_2091_ = v___x_2155_;
goto v___jp_2090_;
}
}
}
}
else
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec_ref(v___x_2112_);
lean_dec_ref(v___x_2111_);
lean_dec(v___x_2110_);
lean_dec(v___x_2105_);
lean_del_object(v___x_2086_);
lean_del_object(v___x_2081_);
lean_del_object(v___x_2077_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2159_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2143_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2143_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
}
}
}
else
{
lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2362_; 
lean_dec(v___x_2105_);
lean_dec(v___x_2099_);
lean_dec(v___x_2097_);
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
lean_del_object(v___x_2081_);
lean_dec(v_fst_2079_);
lean_del_object(v___x_2077_);
lean_dec(v_fst_2075_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2355_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2357_ = v___x_2108_;
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_dec(v___x_2108_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2358_ == 0)
{
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_a_2355_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
}
else
{
lean_object* v_a_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2370_; 
lean_dec(v_a_2102_);
lean_dec(v___x_2099_);
lean_dec(v___x_2097_);
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
lean_del_object(v___x_2081_);
lean_dec(v_fst_2079_);
lean_del_object(v___x_2077_);
lean_dec(v_fst_2075_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2363_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2365_ = v___x_2103_;
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_a_2363_);
lean_dec(v___x_2103_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2368_; 
if (v_isShared_2366_ == 0)
{
v___x_2368_ = v___x_2365_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_a_2363_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
else
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
lean_dec(v___x_2099_);
lean_dec(v___x_2097_);
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
lean_del_object(v___x_2081_);
lean_dec(v_fst_2079_);
lean_del_object(v___x_2077_);
lean_dec(v_fst_2075_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2371_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2373_ = v___x_2101_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v___x_2101_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2371_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
}
else
{
lean_object* v___x_2379_; 
lean_dec(v___x_2099_);
lean_dec(v___x_2097_);
v___x_2379_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__1___redArg___lam__0(v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc_n(v_a_2380_, 2);
lean_dec_ref_known(v___x_2379_, 1);
v___x_2381_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3));
v___x_2382_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__4));
v___x_2383_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2383_, 0, v_a_2380_);
lean_ctor_set(v___x_2383_, 1, v___x_2382_);
v___x_2384_ = l_Lean_Syntax_node1(v_a_2380_, v___x_2381_, v___x_2383_);
v___x_2385_ = lean_array_push(v_fst_2075_, v___x_2384_);
if (v_isShared_2087_ == 0)
{
v___x_2387_ = v___x_2086_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_fst_2083_);
lean_ctor_set(v_reuseFailAlloc_2394_, 1, v_snd_2084_);
v___x_2387_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
lean_object* v___x_2389_; 
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 1, v___x_2387_);
v___x_2389_ = v___x_2081_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_fst_2079_);
lean_ctor_set(v_reuseFailAlloc_2393_, 1, v___x_2387_);
v___x_2389_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
lean_object* v___x_2391_; 
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 1, v___x_2389_);
lean_ctor_set(v___x_2077_, 0, v___x_2385_);
v___x_2391_ = v___x_2077_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v___x_2385_);
lean_ctor_set(v_reuseFailAlloc_2392_, 1, v___x_2389_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
v_a_2091_ = v___x_2391_;
goto v___jp_2090_;
}
}
}
}
else
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
lean_del_object(v___x_2086_);
lean_dec(v_snd_2084_);
lean_dec(v_fst_2083_);
lean_del_object(v___x_2081_);
lean_dec(v_fst_2079_);
lean_del_object(v___x_2077_);
lean_dec(v_fst_2075_);
lean_dec(v_a_2062_);
lean_dec(v_auxFunName_2061_);
lean_dec_ref(v_xs_2058_);
v_a_2395_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2379_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2379_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
v___jp_2090_:
{
lean_object* v___x_2092_; 
v___x_2092_ = lean_nat_add(v_a_2062_, v___x_2089_);
lean_dec(v_a_2062_);
v_a_2062_ = v___x_2092_;
v_b_2063_ = v_a_2091_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg___boxed(lean_object* v_upperBound_2408_, lean_object* v_indVal_2409_, lean_object* v___x_2410_, lean_object* v_xs_2411_, lean_object* v_a_2412_, lean_object* v___x_2413_, lean_object* v_auxFunName_2414_, lean_object* v_a_2415_, lean_object* v_b_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg(v_upperBound_2408_, v_indVal_2409_, v___x_2410_, v_xs_2411_, v_a_2412_, v___x_2413_, v_auxFunName_2414_, v_a_2415_, v_b_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec(v___y_2418_);
lean_dec_ref(v___y_2417_);
lean_dec(v___x_2413_);
lean_dec_ref(v_a_2412_);
lean_dec(v___x_2410_);
lean_dec_ref(v_indVal_2409_);
lean_dec(v_upperBound_2408_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1(lean_object* v___x_2452_, uint8_t v___x_2453_, lean_object* v_numFields_2454_, lean_object* v_indVal_2455_, lean_object* v_name_2456_, lean_object* v_auxFunName_2457_, lean_object* v___f_2458_, lean_object* v_xs_2459_, lean_object* v_type_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v___x_2468_; 
v___x_2468_ = l_Lean_Core_betaReduce(v_type_2460_, v___y_2465_, v___y_2466_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v_toCold_2469_; lean_object* v_a_2470_; lean_object* v_ref_2471_; lean_object* v_quotContext_2472_; lean_object* v_currMacroScope_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; uint8_t v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v_toCold_2469_ = lean_ctor_get(v___y_2465_, 0);
v_a_2470_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_a_2470_);
lean_dec_ref_known(v___x_2468_, 1);
v_ref_2471_ = lean_ctor_get(v___y_2465_, 2);
v_quotContext_2472_ = lean_ctor_get(v_toCold_2469_, 8);
v_currMacroScope_2473_ = lean_ctor_get(v_toCold_2469_, 9);
v___x_2474_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__1);
v___x_2475_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__2));
v___x_2476_ = lean_mk_empty_array_with_capacity(v___x_2452_);
v___x_2477_ = 0;
v___x_2478_ = l_Lean_SourceInfo_fromRef(v_ref_2471_, v___x_2477_);
lean_inc(v_currMacroScope_2473_);
lean_inc(v_quotContext_2472_);
v___x_2479_ = l_Lean_addMacroScope(v_quotContext_2472_, v___x_2475_, v_currMacroScope_2473_);
v___x_2480_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__5));
v___x_2481_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2478_);
lean_ctor_set(v___x_2481_, 1, v___x_2474_);
lean_ctor_set(v___x_2481_, 2, v___x_2479_);
lean_ctor_set(v___x_2481_, 3, v___x_2480_);
v___x_2482_ = lean_box(v___x_2453_);
v___x_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2481_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
lean_inc_ref(v___x_2476_);
v___x_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2476_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
v___x_2485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2476_);
lean_ctor_set(v___x_2485_, 1, v___x_2484_);
lean_inc(v___x_2452_);
v___x_2486_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg(v_numFields_2454_, v_indVal_2455_, v_numFields_2454_, v_xs_2459_, v_a_2470_, v_name_2456_, v_auxFunName_2457_, v___x_2452_, v___x_2485_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
lean_dec(v_a_2470_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v_a_2487_; lean_object* v_snd_2488_; lean_object* v_snd_2489_; lean_object* v_fst_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2588_; 
v_a_2487_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2487_);
lean_dec_ref_known(v___x_2486_, 1);
v_snd_2488_ = lean_ctor_get(v_a_2487_, 1);
lean_inc(v_snd_2488_);
v_snd_2489_ = lean_ctor_get(v_snd_2488_, 1);
lean_inc(v_snd_2489_);
v_fst_2490_ = lean_ctor_get(v_a_2487_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v_a_2487_);
if (v_isSharedCheck_2588_ == 0)
{
lean_object* v_unused_2589_; 
v_unused_2589_ = lean_ctor_get(v_a_2487_, 1);
lean_dec(v_unused_2589_);
v___x_2492_ = v_a_2487_;
v_isShared_2493_ = v_isSharedCheck_2588_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_fst_2490_);
lean_dec(v_a_2487_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2588_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v_fst_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2586_; 
v_fst_2494_ = lean_ctor_get(v_snd_2488_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v_snd_2488_);
if (v_isSharedCheck_2586_ == 0)
{
lean_object* v_unused_2587_; 
v_unused_2587_ = lean_ctor_get(v_snd_2488_, 1);
lean_dec(v_unused_2587_);
v___x_2496_ = v_snd_2488_;
v_isShared_2497_ = v_isSharedCheck_2586_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_fst_2494_);
lean_dec(v_snd_2488_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2586_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v_fst_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2584_; 
v_fst_2498_ = lean_ctor_get(v_snd_2489_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v_snd_2489_);
if (v_isSharedCheck_2584_ == 0)
{
lean_object* v_unused_2585_; 
v_unused_2585_ = lean_ctor_get(v_snd_2489_, 1);
lean_dec(v_unused_2585_);
v___x_2500_ = v_snd_2489_;
v_isShared_2501_ = v_isSharedCheck_2584_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_fst_2498_);
lean_dec(v_snd_2489_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2584_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v_ctorArgs1_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___x_2553_; uint8_t v___x_2554_; 
v___x_2553_ = lean_array_get_size(v_fst_2490_);
v___x_2554_ = lean_nat_dec_eq(v___x_2553_, v___x_2452_);
lean_dec(v___x_2452_);
if (v___x_2554_ == 0)
{
v_ctorArgs1_2503_ = v_fst_2490_;
v___y_2504_ = v___y_2461_;
v___y_2505_ = v___y_2462_;
v___y_2506_ = v___y_2463_;
v___y_2507_ = v___y_2464_;
v___y_2508_ = v___y_2465_;
v___y_2509_ = v___y_2466_;
goto v___jp_2502_;
}
else
{
lean_object* v___x_2555_; 
lean_inc_ref(v___f_2458_);
lean_inc(v___y_2466_);
lean_inc_ref(v___y_2465_);
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
lean_inc(v___y_2462_);
lean_inc_ref(v___y_2461_);
v___x_2555_ = lean_apply_7(v___f_2458_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, lean_box(0));
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
lean_inc_n(v_a_2556_, 7);
lean_dec_ref_known(v___x_2555_, 1);
v___x_2557_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__5));
v___x_2558_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35));
v___x_2559_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__36));
v___x_2560_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2560_, 0, v_a_2556_);
lean_ctor_set(v___x_2560_, 1, v___x_2559_);
v___x_2561_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__38));
v___x_2562_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40);
v___x_2563_ = lean_box(0);
lean_inc(v_currMacroScope_2473_);
lean_inc(v_quotContext_2472_);
v___x_2564_ = l_Lean_addMacroScope(v_quotContext_2472_, v___x_2563_, v_currMacroScope_2473_);
v___x_2565_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__8));
v___x_2566_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2566_, 0, v_a_2556_);
lean_ctor_set(v___x_2566_, 1, v___x_2562_);
lean_ctor_set(v___x_2566_, 2, v___x_2564_);
lean_ctor_set(v___x_2566_, 3, v___x_2565_);
v___x_2567_ = l_Lean_Syntax_node1(v_a_2556_, v___x_2561_, v___x_2566_);
v___x_2568_ = l_Lean_Syntax_node2(v_a_2556_, v___x_2558_, v___x_2560_, v___x_2567_);
v___x_2569_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_2570_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
v___x_2571_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2571_, 0, v_a_2556_);
lean_ctor_set(v___x_2571_, 1, v___x_2569_);
lean_ctor_set(v___x_2571_, 2, v___x_2570_);
v___x_2572_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__60));
v___x_2573_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2573_, 0, v_a_2556_);
lean_ctor_set(v___x_2573_, 1, v___x_2572_);
v___x_2574_ = l_Lean_Syntax_node3(v_a_2556_, v___x_2557_, v___x_2568_, v___x_2571_, v___x_2573_);
v___x_2575_ = lean_array_push(v_fst_2490_, v___x_2574_);
v_ctorArgs1_2503_ = v___x_2575_;
v___y_2504_ = v___y_2461_;
v___y_2505_ = v___y_2462_;
v___y_2506_ = v___y_2463_;
v___y_2507_ = v___y_2464_;
v___y_2508_ = v___y_2465_;
v___y_2509_ = v___y_2466_;
goto v___jp_2502_;
}
else
{
lean_object* v_a_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2583_; 
lean_del_object(v___x_2500_);
lean_dec(v_fst_2498_);
lean_del_object(v___x_2496_);
lean_dec(v_fst_2494_);
lean_del_object(v___x_2492_);
lean_dec(v_fst_2490_);
lean_dec_ref(v___f_2458_);
v_a_2576_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2583_ == 0)
{
v___x_2578_ = v___x_2555_;
v_isShared_2579_ = v_isSharedCheck_2583_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_a_2576_);
lean_dec(v___x_2555_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2583_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
lean_object* v___x_2581_; 
if (v_isShared_2579_ == 0)
{
v___x_2581_ = v___x_2578_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_a_2576_);
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
v___jp_2502_:
{
lean_object* v___x_2510_; 
lean_inc(v___y_2509_);
lean_inc_ref(v___y_2508_);
lean_inc(v___y_2507_);
lean_inc_ref(v___y_2506_);
lean_inc(v___y_2505_);
lean_inc_ref(v___y_2504_);
v___x_2510_ = lean_apply_7(v___f_2458_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_, lean_box(0));
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2544_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2513_ = v___x_2510_;
v_isShared_2514_ = v_isSharedCheck_2544_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2510_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2544_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2518_; 
v___x_2515_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__7));
v___x_2516_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__8));
lean_inc(v_a_2511_);
if (v_isShared_2501_ == 0)
{
lean_ctor_set_tag(v___x_2500_, 2);
lean_ctor_set(v___x_2500_, 1, v___x_2516_);
lean_ctor_set(v___x_2500_, 0, v_a_2511_);
v___x_2518_ = v___x_2500_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_a_2511_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v___x_2516_);
v___x_2518_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2522_; 
v___x_2519_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__0));
v___x_2520_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__1));
lean_inc(v_a_2511_);
if (v_isShared_2497_ == 0)
{
lean_ctor_set_tag(v___x_2496_, 2);
lean_ctor_set(v___x_2496_, 1, v___x_2519_);
lean_ctor_set(v___x_2496_, 0, v_a_2511_);
v___x_2522_ = v___x_2496_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2511_);
lean_ctor_set(v_reuseFailAlloc_2542_, 1, v___x_2519_);
v___x_2522_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2534_; 
v___x_2523_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__3));
v___x_2524_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_2525_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
v___x_2526_ = l_Array_reverse___redArg(v_ctorArgs1_2503_);
v___x_2527_ = l_Array_append___redArg(v___x_2525_, v___x_2526_);
lean_dec_ref(v___x_2526_);
v___x_2528_ = l_Array_reverse___redArg(v_fst_2494_);
v___x_2529_ = l_Array_append___redArg(v___x_2527_, v___x_2528_);
lean_dec_ref(v___x_2528_);
lean_inc_n(v_a_2511_, 3);
v___x_2530_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2530_, 0, v_a_2511_);
lean_ctor_set(v___x_2530_, 1, v___x_2524_);
lean_ctor_set(v___x_2530_, 2, v___x_2529_);
v___x_2531_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2531_, 0, v_a_2511_);
lean_ctor_set(v___x_2531_, 1, v___x_2524_);
lean_ctor_set(v___x_2531_, 2, v___x_2525_);
v___x_2532_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__16));
if (v_isShared_2493_ == 0)
{
lean_ctor_set_tag(v___x_2492_, 2);
lean_ctor_set(v___x_2492_, 1, v___x_2532_);
lean_ctor_set(v___x_2492_, 0, v_a_2511_);
v___x_2534_ = v___x_2492_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2511_);
lean_ctor_set(v_reuseFailAlloc_2541_, 1, v___x_2532_);
v___x_2534_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2539_; 
lean_inc_n(v_a_2511_, 2);
v___x_2535_ = l_Lean_Syntax_node4(v_a_2511_, v___x_2523_, v___x_2530_, v___x_2531_, v___x_2534_, v_fst_2498_);
v___x_2536_ = l_Lean_Syntax_node2(v_a_2511_, v___x_2520_, v___x_2522_, v___x_2535_);
v___x_2537_ = l_Lean_Syntax_node2(v_a_2511_, v___x_2515_, v___x_2518_, v___x_2536_);
if (v_isShared_2514_ == 0)
{
lean_ctor_set(v___x_2513_, 0, v___x_2537_);
v___x_2539_ = v___x_2513_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2537_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
}
}
}
else
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2552_; 
lean_dec_ref(v_ctorArgs1_2503_);
lean_del_object(v___x_2500_);
lean_dec(v_fst_2498_);
lean_del_object(v___x_2496_);
lean_dec(v_fst_2494_);
lean_del_object(v___x_2492_);
v_a_2545_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2547_ = v___x_2510_;
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2510_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2550_; 
if (v_isShared_2548_ == 0)
{
v___x_2550_ = v___x_2547_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_a_2545_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
return v___x_2550_;
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
lean_object* v_a_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2597_; 
lean_dec_ref(v___f_2458_);
lean_dec(v___x_2452_);
v_a_2590_ = lean_ctor_get(v___x_2486_, 0);
v_isSharedCheck_2597_ = !lean_is_exclusive(v___x_2486_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2592_ = v___x_2486_;
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_a_2590_);
lean_dec(v___x_2486_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2595_; 
if (v_isShared_2593_ == 0)
{
v___x_2595_ = v___x_2592_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2590_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
}
}
else
{
lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2605_; 
lean_dec_ref(v_xs_2459_);
lean_dec_ref(v___f_2458_);
lean_dec(v_auxFunName_2457_);
lean_dec(v___x_2452_);
v_a_2598_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2600_ = v___x_2468_;
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_dec(v___x_2468_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2603_; 
if (v_isShared_2601_ == 0)
{
v___x_2603_ = v___x_2600_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_a_2598_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___boxed(lean_object* v___x_2606_, lean_object* v___x_2607_, lean_object* v_numFields_2608_, lean_object* v_indVal_2609_, lean_object* v_name_2610_, lean_object* v_auxFunName_2611_, lean_object* v___f_2612_, lean_object* v_xs_2613_, lean_object* v_type_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_){
_start:
{
uint8_t v___x_42963__boxed_2622_; lean_object* v_res_2623_; 
v___x_42963__boxed_2622_ = lean_unbox(v___x_2607_);
v_res_2623_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1(v___x_2606_, v___x_42963__boxed_2622_, v_numFields_2608_, v_indVal_2609_, v_name_2610_, v_auxFunName_2611_, v___f_2612_, v_xs_2613_, v_type_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec_ref(v___y_2615_);
lean_dec(v_name_2610_);
lean_dec_ref(v_indVal_2609_);
lean_dec(v_numFields_2608_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__0(lean_object* v___x_2624_, lean_object* v_ctors_2625_, lean_object* v___x_2626_, uint8_t v___x_2627_, lean_object* v_indVal_2628_, lean_object* v_name_2629_, lean_object* v_auxFunName_2630_, lean_object* v___f_2631_, lean_object* v_x_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2640_ = l_List_get_x21Internal___redArg(v___x_2624_, v_ctors_2625_, v_x_2632_);
v___x_2641_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0(v___x_2640_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; lean_object* v_toConstantVal_2643_; lean_object* v_numFields_2644_; lean_object* v_type_2645_; lean_object* v___x_2646_; lean_object* v___f_2647_; uint8_t v___x_2648_; lean_object* v___x_2649_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_a_2642_);
lean_dec_ref_known(v___x_2641_, 1);
v_toConstantVal_2643_ = lean_ctor_get(v_a_2642_, 0);
lean_inc_ref(v_toConstantVal_2643_);
v_numFields_2644_ = lean_ctor_get(v_a_2642_, 4);
lean_inc(v_numFields_2644_);
lean_dec(v_a_2642_);
v_type_2645_ = lean_ctor_get(v_toConstantVal_2643_, 2);
lean_inc_ref(v_type_2645_);
lean_dec_ref(v_toConstantVal_2643_);
v___x_2646_ = lean_box(v___x_2627_);
v___f_2647_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___boxed), 16, 7);
lean_closure_set(v___f_2647_, 0, v___x_2626_);
lean_closure_set(v___f_2647_, 1, v___x_2646_);
lean_closure_set(v___f_2647_, 2, v_numFields_2644_);
lean_closure_set(v___f_2647_, 3, v_indVal_2628_);
lean_closure_set(v___f_2647_, 4, v_name_2629_);
lean_closure_set(v___f_2647_, 5, v_auxFunName_2630_);
lean_closure_set(v___f_2647_, 6, v___f_2631_);
v___x_2648_ = 0;
v___x_2649_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__4___redArg(v_type_2645_, v___f_2647_, v___x_2648_, v___x_2648_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
return v___x_2649_;
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
lean_dec_ref(v___f_2631_);
lean_dec(v_auxFunName_2630_);
lean_dec(v_name_2629_);
lean_dec_ref(v_indVal_2628_);
lean_dec(v___x_2626_);
v_a_2650_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2641_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2641_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__0___boxed(lean_object* v___x_2658_, lean_object* v_ctors_2659_, lean_object* v___x_2660_, lean_object* v___x_2661_, lean_object* v_indVal_2662_, lean_object* v_name_2663_, lean_object* v_auxFunName_2664_, lean_object* v___f_2665_, lean_object* v_x_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
uint8_t v___x_43277__boxed_2674_; lean_object* v_res_2675_; 
v___x_43277__boxed_2674_ = lean_unbox(v___x_2661_);
v_res_2675_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__0(v___x_2658_, v_ctors_2659_, v___x_2660_, v___x_43277__boxed_2674_, v_indVal_2662_, v_name_2663_, v_auxFunName_2664_, v___f_2665_, v_x_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_);
lean_dec(v___y_2672_);
lean_dec_ref(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec_ref(v___y_2669_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec(v_ctors_2659_);
lean_dec(v___x_2658_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3___redArg(lean_object* v_f_2676_, lean_object* v_n_2677_, lean_object* v_x_2678_, lean_object* v_i_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
uint8_t v___x_2687_; 
v___x_2687_ = lean_nat_dec_lt(v_i_2679_, v_n_2677_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; 
lean_dec(v_i_2679_);
lean_dec_ref(v_f_2676_);
v___x_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2688_, 0, v_x_2678_);
return v___x_2688_;
}
else
{
lean_object* v___x_2689_; 
lean_inc_ref(v_f_2676_);
lean_inc(v___y_2685_);
lean_inc_ref(v___y_2684_);
lean_inc(v___y_2683_);
lean_inc_ref(v___y_2682_);
lean_inc(v___y_2681_);
lean_inc_ref(v___y_2680_);
lean_inc(v_i_2679_);
v___x_2689_ = lean_apply_8(v_f_2676_, v_i_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_, lean_box(0));
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_object* v_a_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
lean_inc(v_a_2690_);
lean_dec_ref_known(v___x_2689_, 1);
v___x_2691_ = lean_array_push(v_x_2678_, v_a_2690_);
v___x_2692_ = lean_unsigned_to_nat(1u);
v___x_2693_ = lean_nat_add(v_i_2679_, v___x_2692_);
lean_dec(v_i_2679_);
v_x_2678_ = v___x_2691_;
v_i_2679_ = v___x_2693_;
goto _start;
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec(v_i_2679_);
lean_dec_ref(v_x_2678_);
lean_dec_ref(v_f_2676_);
v_a_2695_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2689_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2689_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3___redArg___boxed(lean_object* v_f_2703_, lean_object* v_n_2704_, lean_object* v_x_2705_, lean_object* v_i_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3___redArg(v_f_2703_, v_n_2704_, v_x_2705_, v_i_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v_n_2704_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3___redArg(lean_object* v_n_2715_, lean_object* v_f_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v___x_2724_ = lean_mk_empty_array_with_capacity(v_n_2715_);
v___x_2725_ = lean_unsigned_to_nat(0u);
v___x_2726_ = l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3___redArg(v_f_2716_, v_n_2715_, v___x_2724_, v___x_2725_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3___redArg___boxed(lean_object* v_n_2727_, lean_object* v_f_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3___redArg(v_n_2727_, v_f_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
lean_dec(v___y_2734_);
lean_dec_ref(v___y_2733_);
lean_dec(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
lean_dec(v_n_2727_);
return v_res_2736_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__3(void){
_start:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; 
v___x_2740_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__2));
v___x_2741_ = lean_unsigned_to_nat(2u);
v___x_2742_ = lean_unsigned_to_nat(113u);
v___x_2743_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__1));
v___x_2744_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__0));
v___x_2745_ = l_mkPanicMessageWithDecl(v___x_2744_, v___x_2743_, v___x_2742_, v___x_2741_, v___x_2740_);
return v___x_2745_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__9(void){
_start:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2756_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__8));
v___x_2757_ = l_String_toRawSubstring_x27(v___x_2756_);
return v___x_2757_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__21(void){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2782_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__20));
v___x_2783_ = l_String_toRawSubstring_x27(v___x_2782_);
return v___x_2783_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__28(void){
_start:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2797_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__27));
v___x_2798_ = l_String_toRawSubstring_x27(v___x_2797_);
return v___x_2798_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__34(void){
_start:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2811_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__33));
v___x_2812_ = l_String_toRawSubstring_x27(v___x_2811_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew(lean_object* v_header_2821_, lean_object* v_indVal_2822_, lean_object* v_auxFunName_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_){
_start:
{
lean_object* v_targetNames_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_3026_; 
v_targetNames_2831_ = lean_ctor_get(v_header_2821_, 2);
v_isSharedCheck_3026_ = !lean_is_exclusive(v_header_2821_);
if (v_isSharedCheck_3026_ == 0)
{
lean_object* v_unused_3027_; lean_object* v_unused_3028_; lean_object* v_unused_3029_; 
v_unused_3027_ = lean_ctor_get(v_header_2821_, 3);
lean_dec(v_unused_3027_);
v_unused_3028_ = lean_ctor_get(v_header_2821_, 1);
lean_dec(v_unused_3028_);
v_unused_3029_ = lean_ctor_get(v_header_2821_, 0);
lean_dec(v_unused_3029_);
v___x_2833_ = v_header_2821_;
v_isShared_2834_ = v_isSharedCheck_3026_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_targetNames_2831_);
lean_dec(v_header_2821_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_3026_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; uint8_t v___x_2837_; 
v___x_2835_ = lean_array_get_size(v_targetNames_2831_);
v___x_2836_ = lean_unsigned_to_nat(2u);
v___x_2837_ = lean_nat_dec_eq(v___x_2835_, v___x_2836_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
lean_del_object(v___x_2833_);
lean_dec_ref(v_targetNames_2831_);
lean_dec(v_auxFunName_2823_);
lean_dec_ref(v_indVal_2822_);
v___x_2838_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__3, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__3_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__3);
v___x_2839_ = l_panic___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__0(v___x_2838_, v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_);
return v___x_2839_;
}
else
{
lean_object* v_toConstantVal_2840_; lean_object* v_ctors_2841_; lean_object* v_name_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_3023_; 
v_toConstantVal_2840_ = lean_ctor_get(v_indVal_2822_, 0);
lean_inc_ref(v_toConstantVal_2840_);
v_ctors_2841_ = lean_ctor_get(v_indVal_2822_, 4);
v_name_2842_ = lean_ctor_get(v_toConstantVal_2840_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_toConstantVal_2840_);
if (v_isSharedCheck_3023_ == 0)
{
lean_object* v_unused_3024_; lean_object* v_unused_3025_; 
v_unused_3024_ = lean_ctor_get(v_toConstantVal_2840_, 2);
lean_dec(v_unused_3024_);
v_unused_3025_ = lean_ctor_get(v_toConstantVal_2840_, 1);
lean_dec(v_unused_3025_);
v___x_2844_ = v_toConstantVal_2840_;
v_isShared_2845_ = v_isSharedCheck_3023_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_name_2842_);
lean_dec(v_toConstantVal_2840_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_3023_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___f_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v_x1_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v_x2_2853_; lean_object* v___x_2854_; lean_object* v___f_2855_; lean_object* v_ctorIdxName_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___f_2846_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___closed__0));
v___x_2847_ = lean_box(0);
v___x_2848_ = lean_unsigned_to_nat(0u);
v___x_2849_ = lean_array_get_borrowed(v___x_2847_, v_targetNames_2831_, v___x_2848_);
lean_inc(v___x_2849_);
v_x1_2850_ = l_Lean_mkIdent(v___x_2849_);
v___x_2851_ = lean_unsigned_to_nat(1u);
v___x_2852_ = lean_array_get(v___x_2847_, v_targetNames_2831_, v___x_2851_);
lean_dec_ref(v_targetNames_2831_);
v_x2_2853_ = l_Lean_mkIdent(v___x_2852_);
v___x_2854_ = lean_box(v___x_2837_);
lean_inc_n(v_name_2842_, 3);
lean_inc_ref(v_indVal_2822_);
lean_inc(v_ctors_2841_);
v___f_2855_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__0___boxed), 16, 8);
lean_closure_set(v___f_2855_, 0, v___x_2847_);
lean_closure_set(v___f_2855_, 1, v_ctors_2841_);
lean_closure_set(v___f_2855_, 2, v___x_2848_);
lean_closure_set(v___f_2855_, 3, v___x_2854_);
lean_closure_set(v___f_2855_, 4, v_indVal_2822_);
lean_closure_set(v___f_2855_, 5, v_name_2842_);
lean_closure_set(v___f_2855_, 6, v_auxFunName_2823_);
lean_closure_set(v___f_2855_, 7, v___f_2846_);
v_ctorIdxName_2856_ = l_Lean_mkCtorIdxName(v_name_2842_);
v___x_2857_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__5));
v___x_2858_ = l_Lean_Name_append(v_name_2842_, v___x_2857_);
v___x_2859_ = l_Lean_Core_mkFreshUserName(v___x_2858_, v_a_2828_, v_a_2829_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; lean_object* v___x_2861_; 
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
lean_inc_n(v_a_2860_, 2);
lean_dec_ref_known(v___x_2859_, 1);
v___x_2861_ = l_Lean_mkCasesOnSameCtor(v_a_2860_, v_name_2842_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_object* v___x_2862_; lean_object* v___x_2863_; 
lean_dec_ref_known(v___x_2861_, 1);
v___x_2862_ = l_Lean_InductiveVal_numCtors(v_indVal_2822_);
lean_dec_ref(v_indVal_2822_);
v___x_2863_ = l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3___redArg(v___x_2862_, v___f_2855_, v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2998_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2866_ = v___x_2863_;
v_isShared_2867_ = v_isSharedCheck_2998_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___x_2863_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2998_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
uint8_t v___x_2868_; 
v___x_2868_ = lean_nat_dec_eq(v___x_2862_, v___x_2851_);
lean_dec(v___x_2862_);
if (v___x_2868_ == 0)
{
lean_object* v_toCold_2869_; lean_object* v_ref_2870_; lean_object* v_quotContext_2871_; lean_object* v_currMacroScope_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2880_; 
v_toCold_2869_ = lean_ctor_get(v_a_2828_, 0);
v_ref_2870_ = lean_ctor_get(v_a_2828_, 2);
v_quotContext_2871_ = lean_ctor_get(v_toCold_2869_, 8);
v_currMacroScope_2872_ = lean_ctor_get(v_toCold_2869_, 9);
v___x_2873_ = l_Lean_SourceInfo_fromRef(v_ref_2870_, v___x_2868_);
v___x_2874_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__0));
v___x_2875_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__1));
lean_inc_n(v___x_2873_, 2);
v___x_2876_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2873_);
lean_ctor_set(v___x_2876_, 1, v___x_2874_);
v___x_2877_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_2878_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
if (v_isShared_2845_ == 0)
{
lean_ctor_set_tag(v___x_2844_, 1);
lean_ctor_set(v___x_2844_, 2, v___x_2878_);
lean_ctor_set(v___x_2844_, 1, v___x_2877_);
lean_ctor_set(v___x_2844_, 0, v___x_2873_);
v___x_2880_ = v___x_2844_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2873_);
lean_ctor_set(v_reuseFailAlloc_2972_, 1, v___x_2877_);
lean_ctor_set(v_reuseFailAlloc_2972_, 2, v___x_2878_);
v___x_2880_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2889_; 
v___x_2881_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__7));
v___x_2882_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52));
v___x_2883_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__9, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__9_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__9);
v___x_2884_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__12));
lean_inc(v_currMacroScope_2872_);
lean_inc(v_quotContext_2871_);
v___x_2885_ = l_Lean_addMacroScope(v_quotContext_2871_, v___x_2884_, v_currMacroScope_2872_);
v___x_2886_ = lean_box(0);
v___x_2887_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__16));
lean_inc(v___x_2873_);
if (v_isShared_2834_ == 0)
{
lean_ctor_set_tag(v___x_2833_, 3);
lean_ctor_set(v___x_2833_, 3, v___x_2887_);
lean_ctor_set(v___x_2833_, 2, v___x_2885_);
lean_ctor_set(v___x_2833_, 1, v___x_2883_);
lean_ctor_set(v___x_2833_, 0, v___x_2873_);
v___x_2889_ = v___x_2833_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v___x_2873_);
lean_ctor_set(v_reuseFailAlloc_2971_, 1, v___x_2883_);
lean_ctor_set(v_reuseFailAlloc_2971_, 2, v___x_2885_);
lean_ctor_set(v_reuseFailAlloc_2971_, 3, v___x_2887_);
v___x_2889_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2969_; 
v___x_2890_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__33));
v___x_2891_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__35));
v___x_2892_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__36));
lean_inc_n(v___x_2873_, 41);
v___x_2893_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2873_);
lean_ctor_set(v___x_2893_, 1, v___x_2892_);
v___x_2894_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__38));
v___x_2895_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__40);
lean_inc_n(v_currMacroScope_2872_, 5);
lean_inc_n(v_quotContext_2871_, 5);
v___x_2896_ = l_Lean_addMacroScope(v_quotContext_2871_, v___x_2847_, v_currMacroScope_2872_);
v___x_2897_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___lam__1___closed__8));
v___x_2898_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2873_);
lean_ctor_set(v___x_2898_, 1, v___x_2895_);
lean_ctor_set(v___x_2898_, 2, v___x_2896_);
lean_ctor_set(v___x_2898_, 3, v___x_2897_);
v___x_2899_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2894_, v___x_2898_);
v___x_2900_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2891_, v___x_2893_, v___x_2899_);
v___x_2901_ = l_Lean_mkCIdent(v_ctorIdxName_2856_);
lean_inc(v_x1_2850_);
v___x_2902_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2877_, v_x1_2850_);
lean_inc(v___x_2901_);
v___x_2903_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2882_, v___x_2901_, v___x_2902_);
v___x_2904_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__60));
v___x_2905_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2873_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
lean_inc_ref(v___x_2905_);
lean_inc(v___x_2900_);
v___x_2906_ = l_Lean_Syntax_node3(v___x_2873_, v___x_2890_, v___x_2900_, v___x_2903_, v___x_2905_);
lean_inc(v_x2_2853_);
v___x_2907_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2877_, v_x2_2853_);
v___x_2908_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2882_, v___x_2901_, v___x_2907_);
v___x_2909_ = l_Lean_Syntax_node3(v___x_2873_, v___x_2890_, v___x_2900_, v___x_2908_, v___x_2905_);
v___x_2910_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2877_, v___x_2906_, v___x_2909_);
v___x_2911_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2882_, v___x_2889_, v___x_2910_);
lean_inc_ref_n(v___x_2880_, 2);
v___x_2912_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2881_, v___x_2880_, v___x_2911_);
v___x_2913_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2877_, v___x_2912_);
v___x_2914_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__2));
v___x_2915_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2873_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
v___x_2916_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld___closed__4));
v___x_2917_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__9));
v___x_2918_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__10));
v___x_2919_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2873_);
lean_ctor_set(v___x_2919_, 1, v___x_2918_);
v___x_2920_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__18));
v___x_2921_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__19));
v___x_2922_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2873_);
lean_ctor_set(v___x_2922_, 1, v___x_2921_);
v___x_2923_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__21, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__21_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__21);
v___x_2924_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__22));
v___x_2925_ = l_Lean_addMacroScope(v_quotContext_2871_, v___x_2924_, v_currMacroScope_2872_);
v___x_2926_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__26));
v___x_2927_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2873_);
lean_ctor_set(v___x_2927_, 1, v___x_2923_);
lean_ctor_set(v___x_2927_, 2, v___x_2925_);
lean_ctor_set(v___x_2927_, 3, v___x_2926_);
lean_inc_ref(v___x_2922_);
v___x_2928_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2920_, v___x_2922_, v___x_2927_);
v___x_2929_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__16);
v___x_2930_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__17));
v___x_2931_ = l_Lean_addMacroScope(v_quotContext_2871_, v___x_2930_, v_currMacroScope_2872_);
v___x_2932_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2873_);
lean_ctor_set(v___x_2932_, 1, v___x_2929_);
lean_ctor_set(v___x_2932_, 2, v___x_2931_);
lean_ctor_set(v___x_2932_, 3, v___x_2886_);
lean_inc_ref(v___x_2932_);
v___x_2933_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2877_, v___x_2932_);
v___x_2934_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2882_, v___x_2928_, v___x_2933_);
v___x_2935_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2877_, v___x_2934_);
v___x_2936_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2877_, v___x_2935_);
v___x_2937_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__16));
v___x_2938_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2873_);
lean_ctor_set(v___x_2938_, 1, v___x_2937_);
v___x_2939_ = l_Lean_mkCIdent(v_a_2860_);
v___x_2940_ = l_Array_mkArray3___redArg(v_x1_2850_, v_x2_2853_, v___x_2932_);
v___x_2941_ = l_Array_append___redArg(v___x_2940_, v_a_2864_);
lean_dec(v_a_2864_);
v___x_2942_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2873_);
lean_ctor_set(v___x_2942_, 1, v___x_2877_);
lean_ctor_set(v___x_2942_, 2, v___x_2941_);
v___x_2943_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2882_, v___x_2939_, v___x_2942_);
lean_inc_ref(v___x_2938_);
lean_inc_ref(v___x_2919_);
v___x_2944_ = l_Lean_Syntax_node4(v___x_2873_, v___x_2917_, v___x_2919_, v___x_2936_, v___x_2938_, v___x_2943_);
v___x_2945_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__28, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__28_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__28);
v___x_2946_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__29));
v___x_2947_ = l_Lean_addMacroScope(v_quotContext_2871_, v___x_2946_, v_currMacroScope_2872_);
v___x_2948_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__32));
v___x_2949_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2873_);
lean_ctor_set(v___x_2949_, 1, v___x_2945_);
lean_ctor_set(v___x_2949_, 2, v___x_2947_);
lean_ctor_set(v___x_2949_, 3, v___x_2948_);
v___x_2950_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2920_, v___x_2922_, v___x_2949_);
v___x_2951_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__3));
v___x_2952_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt_spec__1___redArg___closed__4));
v___x_2953_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2873_);
lean_ctor_set(v___x_2953_, 1, v___x_2952_);
v___x_2954_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2951_, v___x_2953_);
v___x_2955_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2877_, v___x_2954_);
v___x_2956_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2882_, v___x_2950_, v___x_2955_);
v___x_2957_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2877_, v___x_2956_);
v___x_2958_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2877_, v___x_2957_);
v___x_2959_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__2);
v___x_2960_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__3));
v___x_2961_ = l_Lean_addMacroScope(v_quotContext_2871_, v___x_2960_, v_currMacroScope_2872_);
v___x_2962_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__7));
v___x_2963_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2873_);
lean_ctor_set(v___x_2963_, 1, v___x_2959_);
lean_ctor_set(v___x_2963_, 2, v___x_2961_);
lean_ctor_set(v___x_2963_, 3, v___x_2962_);
v___x_2964_ = l_Lean_Syntax_node4(v___x_2873_, v___x_2917_, v___x_2919_, v___x_2958_, v___x_2938_, v___x_2963_);
v___x_2965_ = l_Lean_Syntax_node2(v___x_2873_, v___x_2877_, v___x_2944_, v___x_2964_);
v___x_2966_ = l_Lean_Syntax_node1(v___x_2873_, v___x_2916_, v___x_2965_);
v___x_2967_ = l_Lean_Syntax_node6(v___x_2873_, v___x_2875_, v___x_2876_, v___x_2880_, v___x_2880_, v___x_2913_, v___x_2915_, v___x_2966_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 0, v___x_2967_);
v___x_2969_ = v___x_2866_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v___x_2967_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
else
{
lean_object* v_toCold_2973_; lean_object* v_ref_2974_; lean_object* v_quotContext_2975_; lean_object* v_currMacroScope_2976_; uint8_t v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2987_; 
lean_dec(v_ctorIdxName_2856_);
v_toCold_2973_ = lean_ctor_get(v_a_2828_, 0);
v_ref_2974_ = lean_ctor_get(v_a_2828_, 2);
v_quotContext_2975_ = lean_ctor_get(v_toCold_2973_, 8);
v_currMacroScope_2976_ = lean_ctor_get(v_toCold_2973_, 9);
v___x_2977_ = 0;
v___x_2978_ = l_Lean_SourceInfo_fromRef(v_ref_2974_, v___x_2977_);
v___x_2979_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__52));
v___x_2980_ = l_Lean_mkCIdent(v_a_2860_);
v___x_2981_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_2982_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__34, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__34_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__34);
v___x_2983_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__35));
lean_inc(v_currMacroScope_2976_);
lean_inc(v_quotContext_2975_);
v___x_2984_ = l_Lean_addMacroScope(v_quotContext_2975_, v___x_2983_, v_currMacroScope_2976_);
v___x_2985_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___closed__37));
lean_inc(v___x_2978_);
if (v_isShared_2834_ == 0)
{
lean_ctor_set_tag(v___x_2833_, 3);
lean_ctor_set(v___x_2833_, 3, v___x_2985_);
lean_ctor_set(v___x_2833_, 2, v___x_2984_);
lean_ctor_set(v___x_2833_, 1, v___x_2982_);
lean_ctor_set(v___x_2833_, 0, v___x_2978_);
v___x_2987_ = v___x_2833_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v___x_2978_);
lean_ctor_set(v_reuseFailAlloc_2997_, 1, v___x_2982_);
lean_ctor_set(v_reuseFailAlloc_2997_, 2, v___x_2984_);
lean_ctor_set(v_reuseFailAlloc_2997_, 3, v___x_2985_);
v___x_2987_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2991_; 
v___x_2988_ = l_Array_mkArray3___redArg(v_x1_2850_, v_x2_2853_, v___x_2987_);
v___x_2989_ = l_Array_append___redArg(v___x_2988_, v_a_2864_);
lean_dec(v_a_2864_);
lean_inc(v___x_2978_);
if (v_isShared_2845_ == 0)
{
lean_ctor_set_tag(v___x_2844_, 1);
lean_ctor_set(v___x_2844_, 2, v___x_2989_);
lean_ctor_set(v___x_2844_, 1, v___x_2981_);
lean_ctor_set(v___x_2844_, 0, v___x_2978_);
v___x_2991_ = v___x_2844_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2978_);
lean_ctor_set(v_reuseFailAlloc_2996_, 1, v___x_2981_);
lean_ctor_set(v_reuseFailAlloc_2996_, 2, v___x_2989_);
v___x_2991_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
lean_object* v___x_2992_; lean_object* v___x_2994_; 
v___x_2992_ = l_Lean_Syntax_node2(v___x_2978_, v___x_2979_, v___x_2980_, v___x_2991_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 0, v___x_2992_);
v___x_2994_ = v___x_2866_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v___x_2992_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
}
}
}
else
{
lean_object* v_a_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3006_; 
lean_dec(v___x_2862_);
lean_dec(v_a_2860_);
lean_dec(v_ctorIdxName_2856_);
lean_dec(v_x2_2853_);
lean_dec(v_x1_2850_);
lean_del_object(v___x_2844_);
lean_del_object(v___x_2833_);
v_a_2999_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_3006_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_3006_ == 0)
{
v___x_3001_ = v___x_2863_;
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_a_2999_);
lean_dec(v___x_2863_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v___x_3004_; 
if (v_isShared_3002_ == 0)
{
v___x_3004_ = v___x_3001_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v_a_2999_);
v___x_3004_ = v_reuseFailAlloc_3005_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
return v___x_3004_;
}
}
}
}
else
{
lean_object* v_a_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3014_; 
lean_dec(v_a_2860_);
lean_dec(v_ctorIdxName_2856_);
lean_dec_ref(v___f_2855_);
lean_dec(v_x2_2853_);
lean_dec(v_x1_2850_);
lean_del_object(v___x_2844_);
lean_del_object(v___x_2833_);
lean_dec_ref(v_indVal_2822_);
v_a_3007_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3009_ = v___x_2861_;
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_a_3007_);
lean_dec(v___x_2861_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3012_; 
if (v_isShared_3010_ == 0)
{
v___x_3012_ = v___x_3009_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_a_3007_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
lean_dec(v_ctorIdxName_2856_);
lean_dec_ref(v___f_2855_);
lean_dec(v_x2_2853_);
lean_dec(v_x1_2850_);
lean_del_object(v___x_2844_);
lean_dec(v_name_2842_);
lean_del_object(v___x_2833_);
lean_dec_ref(v_indVal_2822_);
v_a_3015_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_2859_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v___x_2859_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew___boxed(lean_object* v_header_3030_, lean_object* v_indVal_3031_, lean_object* v_auxFunName_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_){
_start:
{
lean_object* v_res_3040_; 
v_res_3040_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew(v_header_3030_, v_indVal_3031_, v_auxFunName_3032_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_);
lean_dec(v_a_3038_);
lean_dec_ref(v_a_3037_);
lean_dec(v_a_3036_);
lean_dec_ref(v_a_3035_);
lean_dec(v_a_3034_);
lean_dec_ref(v_a_3033_);
return v_res_3040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1(lean_object* v___x_3041_, lean_object* v_as_3042_, size_t v_i_3043_, size_t v_stop_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_){
_start:
{
lean_object* v___x_3052_; 
v___x_3052_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1___redArg(v___x_3041_, v_as_3042_, v_i_3043_, v_stop_3044_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1___boxed(lean_object* v___x_3053_, lean_object* v_as_3054_, lean_object* v_i_3055_, lean_object* v_stop_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_){
_start:
{
size_t v_i_boxed_3064_; size_t v_stop_boxed_3065_; lean_object* v_res_3066_; 
v_i_boxed_3064_ = lean_unbox_usize(v_i_3055_);
lean_dec(v_i_3055_);
v_stop_boxed_3065_ = lean_unbox_usize(v_stop_3056_);
lean_dec(v_stop_3056_);
v_res_3066_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__1(v___x_3053_, v_as_3054_, v_i_boxed_3064_, v_stop_boxed_3065_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_);
lean_dec(v___y_3062_);
lean_dec_ref(v___y_3061_);
lean_dec(v___y_3060_);
lean_dec_ref(v___y_3059_);
lean_dec(v___y_3058_);
lean_dec_ref(v___y_3057_);
lean_dec_ref(v_as_3054_);
lean_dec(v___x_3053_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2(lean_object* v_upperBound_3067_, lean_object* v_indVal_3068_, lean_object* v___x_3069_, lean_object* v_xs_3070_, lean_object* v_a_3071_, lean_object* v___x_3072_, lean_object* v_auxFunName_3073_, lean_object* v_inst_3074_, lean_object* v_R_3075_, lean_object* v_a_3076_, lean_object* v_b_3077_, lean_object* v_c_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_){
_start:
{
lean_object* v___x_3086_; 
v___x_3086_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___redArg(v_upperBound_3067_, v_indVal_3068_, v___x_3069_, v_xs_3070_, v_a_3071_, v___x_3072_, v_auxFunName_3073_, v_a_3076_, v_b_3077_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_, v___y_3084_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2___boxed(lean_object** _args){
lean_object* v_upperBound_3087_ = _args[0];
lean_object* v_indVal_3088_ = _args[1];
lean_object* v___x_3089_ = _args[2];
lean_object* v_xs_3090_ = _args[3];
lean_object* v_a_3091_ = _args[4];
lean_object* v___x_3092_ = _args[5];
lean_object* v_auxFunName_3093_ = _args[6];
lean_object* v_inst_3094_ = _args[7];
lean_object* v_R_3095_ = _args[8];
lean_object* v_a_3096_ = _args[9];
lean_object* v_b_3097_ = _args[10];
lean_object* v_c_3098_ = _args[11];
lean_object* v___y_3099_ = _args[12];
lean_object* v___y_3100_ = _args[13];
lean_object* v___y_3101_ = _args[14];
lean_object* v___y_3102_ = _args[15];
lean_object* v___y_3103_ = _args[16];
lean_object* v___y_3104_ = _args[17];
lean_object* v___y_3105_ = _args[18];
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__2(v_upperBound_3087_, v_indVal_3088_, v___x_3089_, v_xs_3090_, v_a_3091_, v___x_3092_, v_auxFunName_3093_, v_inst_3094_, v_R_3095_, v_a_3096_, v_b_3097_, v_c_3098_, v___y_3099_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3103_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
lean_dec(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec(v___x_3092_);
lean_dec_ref(v_a_3091_);
lean_dec(v___x_3089_);
lean_dec_ref(v_indVal_3088_);
lean_dec(v_upperBound_3087_);
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3(lean_object* v_00_u03b1_3107_, lean_object* v_n_3108_, lean_object* v_f_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_){
_start:
{
lean_object* v___x_3117_; 
v___x_3117_ = l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3___redArg(v_n_3108_, v_f_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_);
return v___x_3117_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3___boxed(lean_object* v_00_u03b1_3118_, lean_object* v_n_3119_, lean_object* v_f_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l_Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3(v_00_u03b1_3118_, v_n_3119_, v_f_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_);
lean_dec(v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v_n_3119_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3(lean_object* v_00_u03b1_3129_, lean_object* v_f_3130_, lean_object* v_n_3131_, lean_object* v_x_3132_, lean_object* v_i_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_){
_start:
{
lean_object* v___x_3141_; 
v___x_3141_ = l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3___redArg(v_f_3130_, v_n_3131_, v_x_3132_, v_i_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3___boxed(lean_object* v_00_u03b1_3142_, lean_object* v_f_3143_, lean_object* v_n_3144_, lean_object* v_x_3145_, lean_object* v_i_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l___private_Init_Data_Fin_Fold_0__Fin_foldlM_loop___at___00Array_ofFnM___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew_spec__3_spec__3(v_00_u03b1_3142_, v_f_3143_, v_n_3144_, v_x_3145_, v_i_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v___y_3150_);
lean_dec_ref(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
lean_dec(v_n_3144_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch_spec__0(lean_object* v_opts_3155_, lean_object* v_opt_3156_){
_start:
{
lean_object* v_name_3157_; lean_object* v_defValue_3158_; lean_object* v_map_3159_; lean_object* v___x_3160_; 
v_name_3157_ = lean_ctor_get(v_opt_3156_, 0);
v_defValue_3158_ = lean_ctor_get(v_opt_3156_, 1);
v_map_3159_ = lean_ctor_get(v_opts_3155_, 0);
v___x_3160_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3159_, v_name_3157_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_inc(v_defValue_3158_);
return v_defValue_3158_;
}
else
{
lean_object* v_val_3161_; 
v_val_3161_ = lean_ctor_get(v___x_3160_, 0);
lean_inc(v_val_3161_);
lean_dec_ref_known(v___x_3160_, 1);
if (lean_obj_tag(v_val_3161_) == 3)
{
lean_object* v_v_3162_; 
v_v_3162_ = lean_ctor_get(v_val_3161_, 0);
lean_inc(v_v_3162_);
lean_dec_ref_known(v_val_3161_, 1);
return v_v_3162_;
}
else
{
lean_dec(v_val_3161_);
lean_inc(v_defValue_3158_);
return v_defValue_3158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch_spec__0___boxed(lean_object* v_opts_3163_, lean_object* v_opt_3164_){
_start:
{
lean_object* v_res_3165_; 
v_res_3165_ = l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch_spec__0(v_opts_3163_, v_opt_3164_);
lean_dec_ref(v_opt_3164_);
lean_dec_ref(v_opts_3163_);
return v_res_3165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch(lean_object* v_header_3166_, lean_object* v_indVal_3167_, lean_object* v_auxFunName_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_, lean_object* v_a_3174_){
_start:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; uint8_t v___x_3180_; 
v___x_3176_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3173_);
v___x_3177_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_deriving_beq_linear__construction__threshold;
v___x_3178_ = l_Lean_Option_get___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch_spec__0(v___x_3176_, v___x_3177_);
lean_dec_ref(v___x_3176_);
v___x_3179_ = l_Lean_InductiveVal_numCtors(v_indVal_3167_);
v___x_3180_ = lean_nat_dec_le(v___x_3178_, v___x_3179_);
lean_dec(v___x_3179_);
lean_dec(v___x_3178_);
if (v___x_3180_ == 0)
{
lean_object* v___x_3181_; 
v___x_3181_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld(v_header_3166_, v_indVal_3167_, v_auxFunName_3168_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_, v_a_3173_, v_a_3174_);
return v___x_3181_;
}
else
{
lean_object* v___x_3182_; 
v___x_3182_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchNew(v_header_3166_, v_indVal_3167_, v_auxFunName_3168_, v_a_3169_, v_a_3170_, v_a_3171_, v_a_3172_, v_a_3173_, v_a_3174_);
return v___x_3182_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch___boxed(lean_object* v_header_3183_, lean_object* v_indVal_3184_, lean_object* v_auxFunName_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch(v_header_3183_, v_indVal_3184_, v_auxFunName_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_, v_a_3191_);
lean_dec(v_a_3191_);
lean_dec_ref(v_a_3190_);
lean_dec(v_a_3189_);
lean_dec_ref(v_a_3188_);
lean_dec(v_a_3187_);
lean_dec_ref(v_a_3186_);
return v_res_3193_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14(void){
_start:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3232_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__4));
v___x_3233_ = l_String_toRawSubstring_x27(v___x_3232_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction(lean_object* v_ctx_3270_, lean_object* v_i_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_){
_start:
{
lean_object* v_typeInfos_3279_; lean_object* v_auxFunNames_3280_; uint8_t v_usePartial_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v_auxFunName_3284_; lean_object* v_indVal_3285_; lean_object* v___x_3286_; 
v_typeInfos_3279_ = lean_ctor_get(v_ctx_3270_, 1);
v_auxFunNames_3280_ = lean_ctor_get(v_ctx_3270_, 2);
v_usePartial_3281_ = lean_ctor_get_uint8(v_ctx_3270_, sizeof(void*)*3);
v___x_3282_ = lean_box(0);
v___x_3283_ = l_Lean_instInhabitedInductiveVal_default;
v_auxFunName_3284_ = lean_array_get_borrowed(v___x_3282_, v_auxFunNames_3280_, v_i_3271_);
v_indVal_3285_ = lean_array_get_borrowed(v___x_3283_, v_typeInfos_3279_, v_i_3271_);
lean_inc(v_indVal_3285_);
v___x_3286_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader(v_indVal_3285_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
if (lean_obj_tag(v___x_3286_) == 0)
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3421_; 
v_a_3287_ = lean_ctor_get(v___x_3286_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3289_ = v___x_3286_;
v_isShared_3290_ = v_isSharedCheck_3421_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3286_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3421_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v_body_3292_; lean_object* v___y_3293_; lean_object* v___x_3404_; 
lean_inc(v_auxFunName_3284_);
lean_inc(v_indVal_3285_);
lean_inc(v_a_3287_);
v___x_3404_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatch(v_a_3287_, v_indVal_3285_, v_auxFunName_3284_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
if (lean_obj_tag(v___x_3404_) == 0)
{
if (v_usePartial_3281_ == 0)
{
lean_object* v_a_3405_; 
v_a_3405_ = lean_ctor_get(v___x_3404_, 0);
lean_inc(v_a_3405_);
lean_dec_ref_known(v___x_3404_, 1);
v_body_3292_ = v_a_3405_;
v___y_3293_ = v_a_3276_;
goto v___jp_3291_;
}
else
{
lean_object* v_a_3406_; lean_object* v_argNames_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
v_a_3406_ = lean_ctor_get(v___x_3404_, 0);
lean_inc(v_a_3406_);
lean_dec_ref_known(v___x_3404_, 1);
v_argNames_3407_ = lean_ctor_get(v_a_3287_, 1);
v___x_3408_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0));
lean_inc_ref(v_argNames_3407_);
v___x_3409_ = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(v_ctx_3270_, v___x_3408_, v_argNames_3407_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v_a_3410_; lean_object* v___x_3411_; 
v_a_3410_ = lean_ctor_get(v___x_3409_, 0);
lean_inc(v_a_3410_);
lean_dec_ref_known(v___x_3409_, 1);
v___x_3411_ = l_Lean_Elab_Deriving_mkLet(v_a_3410_, v_a_3406_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_);
lean_dec(v_a_3410_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3412_);
lean_dec_ref_known(v___x_3411_, 1);
v_body_3292_ = v_a_3412_;
v___y_3293_ = v_a_3276_;
goto v___jp_3291_;
}
else
{
lean_del_object(v___x_3289_);
lean_dec(v_a_3287_);
return v___x_3411_;
}
}
else
{
lean_object* v_a_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3420_; 
lean_dec(v_a_3406_);
lean_del_object(v___x_3289_);
lean_dec(v_a_3287_);
v_a_3413_ = lean_ctor_get(v___x_3409_, 0);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3415_ = v___x_3409_;
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_a_3413_);
lean_dec(v___x_3409_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3418_; 
if (v_isShared_3416_ == 0)
{
v___x_3418_ = v___x_3415_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_a_3413_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
}
}
}
else
{
lean_del_object(v___x_3289_);
lean_dec(v_a_3287_);
return v___x_3404_;
}
v___jp_3291_:
{
if (v_usePartial_3281_ == 0)
{
lean_object* v_toCold_3294_; lean_object* v_binders_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3342_; 
v_toCold_3294_ = lean_ctor_get(v___y_3293_, 0);
v_binders_3295_ = lean_ctor_get(v_a_3287_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v_a_3287_);
if (v_isSharedCheck_3342_ == 0)
{
lean_object* v_unused_3343_; lean_object* v_unused_3344_; lean_object* v_unused_3345_; 
v_unused_3343_ = lean_ctor_get(v_a_3287_, 3);
lean_dec(v_unused_3343_);
v_unused_3344_ = lean_ctor_get(v_a_3287_, 2);
lean_dec(v_unused_3344_);
v_unused_3345_ = lean_ctor_get(v_a_3287_, 1);
lean_dec(v_unused_3345_);
v___x_3297_ = v_a_3287_;
v_isShared_3298_ = v_isSharedCheck_3342_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_binders_3295_);
lean_dec(v_a_3287_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3342_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v_ref_3299_; lean_object* v_quotContext_3300_; lean_object* v_currMacroScope_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3326_; 
v_ref_3299_ = lean_ctor_get(v___y_3293_, 2);
v_quotContext_3300_ = lean_ctor_get(v_toCold_3294_, 8);
v_currMacroScope_3301_ = lean_ctor_get(v_toCold_3294_, 9);
v___x_3302_ = l_Lean_SourceInfo_fromRef(v_ref_3299_, v_usePartial_3281_);
v___x_3303_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2));
v___x_3304_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4));
v___x_3305_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_3306_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
lean_inc_n(v___x_3302_, 7);
v___x_3307_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3302_);
lean_ctor_set(v___x_3307_, 1, v___x_3305_);
lean_ctor_set(v___x_3307_, 2, v___x_3306_);
lean_inc_ref_n(v___x_3307_, 8);
v___x_3308_ = l_Lean_Syntax_node7(v___x_3302_, v___x_3304_, v___x_3307_, v___x_3307_, v___x_3307_, v___x_3307_, v___x_3307_, v___x_3307_, v___x_3307_);
v___x_3309_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6));
v___x_3310_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__7));
v___x_3311_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3302_);
lean_ctor_set(v___x_3311_, 1, v___x_3310_);
v___x_3312_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9));
lean_inc(v_auxFunName_3284_);
v___x_3313_ = l_Lean_mkIdent(v_auxFunName_3284_);
v___x_3314_ = l_Lean_Syntax_node2(v___x_3302_, v___x_3312_, v___x_3313_, v___x_3307_);
v___x_3315_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11));
v___x_3316_ = l_Array_append___redArg(v___x_3306_, v_binders_3295_);
lean_dec_ref(v_binders_3295_);
v___x_3317_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3302_);
lean_ctor_set(v___x_3317_, 1, v___x_3305_);
lean_ctor_set(v___x_3317_, 2, v___x_3316_);
v___x_3318_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13));
v___x_3319_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__18));
v___x_3320_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3302_);
lean_ctor_set(v___x_3320_, 1, v___x_3319_);
v___x_3321_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14);
v___x_3322_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__15));
lean_inc(v_currMacroScope_3301_);
lean_inc(v_quotContext_3300_);
v___x_3323_ = l_Lean_addMacroScope(v_quotContext_3300_, v___x_3322_, v_currMacroScope_3301_);
v___x_3324_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__20));
if (v_isShared_3298_ == 0)
{
lean_ctor_set_tag(v___x_3297_, 3);
lean_ctor_set(v___x_3297_, 3, v___x_3324_);
lean_ctor_set(v___x_3297_, 2, v___x_3323_);
lean_ctor_set(v___x_3297_, 1, v___x_3321_);
lean_ctor_set(v___x_3297_, 0, v___x_3302_);
v___x_3326_ = v___x_3297_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v___x_3302_);
lean_ctor_set(v_reuseFailAlloc_3341_, 1, v___x_3321_);
lean_ctor_set(v_reuseFailAlloc_3341_, 2, v___x_3323_);
lean_ctor_set(v_reuseFailAlloc_3341_, 3, v___x_3324_);
v___x_3326_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3339_; 
lean_inc_n(v___x_3302_, 7);
v___x_3327_ = l_Lean_Syntax_node2(v___x_3302_, v___x_3318_, v___x_3320_, v___x_3326_);
v___x_3328_ = l_Lean_Syntax_node1(v___x_3302_, v___x_3305_, v___x_3327_);
v___x_3329_ = l_Lean_Syntax_node2(v___x_3302_, v___x_3315_, v___x_3317_, v___x_3328_);
v___x_3330_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22));
v___x_3331_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__23));
v___x_3332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3302_);
lean_ctor_set(v___x_3332_, 1, v___x_3331_);
v___x_3333_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26));
lean_inc_ref_n(v___x_3307_, 3);
v___x_3334_ = l_Lean_Syntax_node2(v___x_3302_, v___x_3333_, v___x_3307_, v___x_3307_);
v___x_3335_ = l_Lean_Syntax_node4(v___x_3302_, v___x_3330_, v___x_3332_, v_body_3292_, v___x_3334_, v___x_3307_);
v___x_3336_ = l_Lean_Syntax_node5(v___x_3302_, v___x_3309_, v___x_3311_, v___x_3314_, v___x_3329_, v___x_3335_, v___x_3307_);
v___x_3337_ = l_Lean_Syntax_node2(v___x_3302_, v___x_3303_, v___x_3308_, v___x_3336_);
if (v_isShared_3290_ == 0)
{
lean_ctor_set(v___x_3289_, 0, v___x_3337_);
v___x_3339_ = v___x_3289_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
}
}
else
{
lean_object* v_toCold_3346_; lean_object* v_binders_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3400_; 
v_toCold_3346_ = lean_ctor_get(v___y_3293_, 0);
v_binders_3347_ = lean_ctor_get(v_a_3287_, 0);
v_isSharedCheck_3400_ = !lean_is_exclusive(v_a_3287_);
if (v_isSharedCheck_3400_ == 0)
{
lean_object* v_unused_3401_; lean_object* v_unused_3402_; lean_object* v_unused_3403_; 
v_unused_3401_ = lean_ctor_get(v_a_3287_, 3);
lean_dec(v_unused_3401_);
v_unused_3402_ = lean_ctor_get(v_a_3287_, 2);
lean_dec(v_unused_3402_);
v_unused_3403_ = lean_ctor_get(v_a_3287_, 1);
lean_dec(v_unused_3403_);
v___x_3349_ = v_a_3287_;
v_isShared_3350_ = v_isSharedCheck_3400_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_binders_3347_);
lean_dec(v_a_3287_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3400_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v_ref_3351_; lean_object* v_quotContext_3352_; lean_object* v_currMacroScope_3353_; uint8_t v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3384_; 
v_ref_3351_ = lean_ctor_get(v___y_3293_, 2);
v_quotContext_3352_ = lean_ctor_get(v_toCold_3346_, 8);
v_currMacroScope_3353_ = lean_ctor_get(v_toCold_3346_, 9);
v___x_3354_ = 0;
v___x_3355_ = l_Lean_SourceInfo_fromRef(v_ref_3351_, v___x_3354_);
v___x_3356_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2));
v___x_3357_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4));
v___x_3358_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_3359_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
lean_inc_n(v___x_3355_, 10);
v___x_3360_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3355_);
lean_ctor_set(v___x_3360_, 1, v___x_3358_);
lean_ctor_set(v___x_3360_, 2, v___x_3359_);
v___x_3361_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__27));
v___x_3362_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__28));
v___x_3363_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3355_);
lean_ctor_set(v___x_3363_, 1, v___x_3361_);
v___x_3364_ = l_Lean_Syntax_node1(v___x_3355_, v___x_3362_, v___x_3363_);
v___x_3365_ = l_Lean_Syntax_node1(v___x_3355_, v___x_3358_, v___x_3364_);
lean_inc_ref_n(v___x_3360_, 7);
v___x_3366_ = l_Lean_Syntax_node7(v___x_3355_, v___x_3357_, v___x_3360_, v___x_3360_, v___x_3360_, v___x_3360_, v___x_3360_, v___x_3360_, v___x_3365_);
v___x_3367_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6));
v___x_3368_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__7));
v___x_3369_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3355_);
lean_ctor_set(v___x_3369_, 1, v___x_3368_);
v___x_3370_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9));
lean_inc(v_auxFunName_3284_);
v___x_3371_ = l_Lean_mkIdent(v_auxFunName_3284_);
v___x_3372_ = l_Lean_Syntax_node2(v___x_3355_, v___x_3370_, v___x_3371_, v___x_3360_);
v___x_3373_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11));
v___x_3374_ = l_Array_append___redArg(v___x_3359_, v_binders_3347_);
lean_dec_ref(v_binders_3347_);
v___x_3375_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3355_);
lean_ctor_set(v___x_3375_, 1, v___x_3358_);
lean_ctor_set(v___x_3375_, 2, v___x_3374_);
v___x_3376_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13));
v___x_3377_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__18));
v___x_3378_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3378_, 0, v___x_3355_);
lean_ctor_set(v___x_3378_, 1, v___x_3377_);
v___x_3379_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14);
v___x_3380_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__15));
lean_inc(v_currMacroScope_3353_);
lean_inc(v_quotContext_3352_);
v___x_3381_ = l_Lean_addMacroScope(v_quotContext_3352_, v___x_3380_, v_currMacroScope_3353_);
v___x_3382_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__20));
if (v_isShared_3350_ == 0)
{
lean_ctor_set_tag(v___x_3349_, 3);
lean_ctor_set(v___x_3349_, 3, v___x_3382_);
lean_ctor_set(v___x_3349_, 2, v___x_3381_);
lean_ctor_set(v___x_3349_, 1, v___x_3379_);
lean_ctor_set(v___x_3349_, 0, v___x_3355_);
v___x_3384_ = v___x_3349_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v___x_3355_);
lean_ctor_set(v_reuseFailAlloc_3399_, 1, v___x_3379_);
lean_ctor_set(v_reuseFailAlloc_3399_, 2, v___x_3381_);
lean_ctor_set(v_reuseFailAlloc_3399_, 3, v___x_3382_);
v___x_3384_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3397_; 
lean_inc_n(v___x_3355_, 7);
v___x_3385_ = l_Lean_Syntax_node2(v___x_3355_, v___x_3376_, v___x_3378_, v___x_3384_);
v___x_3386_ = l_Lean_Syntax_node1(v___x_3355_, v___x_3358_, v___x_3385_);
v___x_3387_ = l_Lean_Syntax_node2(v___x_3355_, v___x_3373_, v___x_3375_, v___x_3386_);
v___x_3388_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22));
v___x_3389_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__23));
v___x_3390_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3355_);
lean_ctor_set(v___x_3390_, 1, v___x_3389_);
v___x_3391_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26));
lean_inc_ref_n(v___x_3360_, 3);
v___x_3392_ = l_Lean_Syntax_node2(v___x_3355_, v___x_3391_, v___x_3360_, v___x_3360_);
v___x_3393_ = l_Lean_Syntax_node4(v___x_3355_, v___x_3388_, v___x_3390_, v_body_3292_, v___x_3392_, v___x_3360_);
v___x_3394_ = l_Lean_Syntax_node5(v___x_3355_, v___x_3367_, v___x_3369_, v___x_3372_, v___x_3387_, v___x_3393_, v___x_3360_);
v___x_3395_ = l_Lean_Syntax_node2(v___x_3355_, v___x_3356_, v___x_3366_, v___x_3394_);
if (v_isShared_3290_ == 0)
{
lean_ctor_set(v___x_3289_, 0, v___x_3395_);
v___x_3397_ = v___x_3289_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v___x_3395_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3429_; 
v_a_3422_ = lean_ctor_get(v___x_3286_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3424_ = v___x_3286_;
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3286_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
if (v_isShared_3425_ == 0)
{
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v_a_3422_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___boxed(lean_object* v_ctx_3430_, lean_object* v_i_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_){
_start:
{
lean_object* v_res_3439_; 
v_res_3439_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction(v_ctx_3430_, v_i_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_, v_a_3436_, v_a_3437_);
lean_dec(v_a_3437_);
lean_dec_ref(v_a_3436_);
lean_dec(v_a_3435_);
lean_dec_ref(v_a_3434_);
lean_dec(v_a_3433_);
lean_dec_ref(v_a_3432_);
lean_dec(v_i_3431_);
lean_dec_ref(v_ctx_3430_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0___redArg(lean_object* v_upperBound_3440_, lean_object* v_ctx_3441_, lean_object* v_a_3442_, lean_object* v_b_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_){
_start:
{
uint8_t v___x_3451_; 
v___x_3451_ = lean_nat_dec_lt(v_a_3442_, v_upperBound_3440_);
if (v___x_3451_ == 0)
{
lean_object* v___x_3452_; 
lean_dec(v_a_3442_);
v___x_3452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3452_, 0, v_b_3443_);
return v___x_3452_;
}
else
{
lean_object* v___x_3453_; 
v___x_3453_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction(v_ctx_3441_, v_a_3442_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v_a_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v_a_3454_ = lean_ctor_get(v___x_3453_, 0);
lean_inc(v_a_3454_);
lean_dec_ref_known(v___x_3453_, 1);
v___x_3455_ = lean_array_push(v_b_3443_, v_a_3454_);
v___x_3456_ = lean_unsigned_to_nat(1u);
v___x_3457_ = lean_nat_add(v_a_3442_, v___x_3456_);
lean_dec(v_a_3442_);
v_a_3442_ = v___x_3457_;
v_b_3443_ = v___x_3455_;
goto _start;
}
else
{
lean_object* v_a_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3466_; 
lean_dec_ref(v_b_3443_);
lean_dec(v_a_3442_);
v_a_3459_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3461_ = v___x_3453_;
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_a_3459_);
lean_dec(v___x_3453_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3464_; 
if (v_isShared_3462_ == 0)
{
v___x_3464_ = v___x_3461_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_a_3459_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0___redArg___boxed(lean_object* v_upperBound_3467_, lean_object* v_ctx_3468_, lean_object* v_a_3469_, lean_object* v_b_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_){
_start:
{
lean_object* v_res_3478_; 
v_res_3478_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0___redArg(v_upperBound_3467_, v_ctx_3468_, v_a_3469_, v_b_3470_, v___y_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_);
lean_dec(v___y_3476_);
lean_dec_ref(v___y_3475_);
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
lean_dec(v___y_3472_);
lean_dec_ref(v___y_3471_);
lean_dec_ref(v_ctx_3468_);
lean_dec(v_upperBound_3467_);
return v_res_3478_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__5(void){
_start:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3492_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__4));
v___x_3493_ = l_String_toRawSubstring_x27(v___x_3492_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock(lean_object* v_ctx_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_){
_start:
{
lean_object* v_typeInfos_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v_auxDefs_3519_; lean_object* v___x_3520_; 
v_typeInfos_3516_ = lean_ctor_get(v_ctx_3508_, 1);
v___x_3517_ = lean_array_get_size(v_typeInfos_3516_);
v___x_3518_ = lean_unsigned_to_nat(0u);
v_auxDefs_3519_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__0));
v___x_3520_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0___redArg(v___x_3517_, v_ctx_3508_, v___x_3518_, v_auxDefs_3519_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v_toCold_3521_; lean_object* v_a_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3557_; 
v_toCold_3521_ = lean_ctor_get(v_a_3513_, 0);
v_a_3522_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3524_ = v___x_3520_;
v_isShared_3525_ = v_isSharedCheck_3557_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_a_3522_);
lean_dec(v___x_3520_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3557_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
lean_object* v_ref_3526_; lean_object* v_quotContext_3527_; lean_object* v_currMacroScope_3528_; uint8_t v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3555_; 
v_ref_3526_ = lean_ctor_get(v_a_3513_, 2);
v_quotContext_3527_ = lean_ctor_get(v_toCold_3521_, 8);
v_currMacroScope_3528_ = lean_ctor_get(v_toCold_3521_, 9);
v___x_3529_ = 0;
v___x_3530_ = l_Lean_SourceInfo_fromRef(v_ref_3526_, v___x_3529_);
v___x_3531_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__0));
v___x_3532_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__1));
lean_inc_n(v___x_3530_, 8);
v___x_3533_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3530_);
lean_ctor_set(v___x_3533_, 1, v___x_3531_);
v___x_3534_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_3535_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__2));
v___x_3536_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__3));
v___x_3537_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3530_);
lean_ctor_set(v___x_3537_, 1, v___x_3535_);
v___x_3538_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__5, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__5_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__5);
v___x_3539_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__7));
lean_inc(v_currMacroScope_3528_);
lean_inc(v_quotContext_3527_);
v___x_3540_ = l_Lean_addMacroScope(v_quotContext_3527_, v___x_3539_, v_currMacroScope_3528_);
v___x_3541_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__10));
v___x_3542_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3530_);
lean_ctor_set(v___x_3542_, 1, v___x_3538_);
lean_ctor_set(v___x_3542_, 2, v___x_3540_);
lean_ctor_set(v___x_3542_, 3, v___x_3541_);
v___x_3543_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
v___x_3544_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3530_);
lean_ctor_set(v___x_3544_, 1, v___x_3534_);
lean_ctor_set(v___x_3544_, 2, v___x_3543_);
v___x_3545_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__5___redArg___lam__1___closed__0));
v___x_3546_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3530_);
lean_ctor_set(v___x_3546_, 1, v___x_3545_);
v___x_3547_ = l_Lean_Syntax_node4(v___x_3530_, v___x_3536_, v___x_3537_, v___x_3542_, v___x_3544_, v___x_3546_);
v___x_3548_ = l_Array_mkArray1___redArg(v___x_3547_);
v___x_3549_ = l_Array_append___redArg(v___x_3548_, v_a_3522_);
lean_dec(v_a_3522_);
v___x_3550_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3530_);
lean_ctor_set(v___x_3550_, 1, v___x_3534_);
lean_ctor_set(v___x_3550_, 2, v___x_3549_);
v___x_3551_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___closed__11));
v___x_3552_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3530_);
lean_ctor_set(v___x_3552_, 1, v___x_3551_);
v___x_3553_ = l_Lean_Syntax_node3(v___x_3530_, v___x_3532_, v___x_3533_, v___x_3550_, v___x_3552_);
if (v_isShared_3525_ == 0)
{
lean_ctor_set(v___x_3524_, 0, v___x_3553_);
v___x_3555_ = v___x_3524_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v___x_3553_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
return v___x_3555_;
}
}
}
else
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3565_; 
v_a_3558_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3560_ = v___x_3520_;
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3520_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3563_; 
if (v_isShared_3561_ == 0)
{
v___x_3563_ = v___x_3560_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_a_3558_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock___boxed(lean_object* v_ctx_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_){
_start:
{
lean_object* v_res_3574_; 
v_res_3574_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock(v_ctx_3566_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_);
lean_dec(v_a_3572_);
lean_dec_ref(v_a_3571_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec_ref(v_ctx_3566_);
return v_res_3574_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0(lean_object* v_upperBound_3575_, lean_object* v_ctx_3576_, lean_object* v_inst_3577_, lean_object* v_R_3578_, lean_object* v_a_3579_, lean_object* v_b_3580_, lean_object* v_c_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_){
_start:
{
lean_object* v___x_3589_; 
v___x_3589_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0___redArg(v_upperBound_3575_, v_ctx_3576_, v_a_3579_, v_b_3580_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_);
return v___x_3589_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0___boxed(lean_object* v_upperBound_3590_, lean_object* v_ctx_3591_, lean_object* v_inst_3592_, lean_object* v_R_3593_, lean_object* v_a_3594_, lean_object* v_b_3595_, lean_object* v_c_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_){
_start:
{
lean_object* v_res_3604_; 
v_res_3604_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock_spec__0(v_upperBound_3590_, v_ctx_3591_, v_inst_3592_, v_R_3593_, v_a_3594_, v_b_3595_, v_c_3596_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_);
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec(v___y_3600_);
lean_dec_ref(v___y_3599_);
lean_dec(v___y_3598_);
lean_dec_ref(v___y_3597_);
lean_dec_ref(v_ctx_3591_);
lean_dec(v_upperBound_3590_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__0(lean_object* v_a_3605_, lean_object* v_a_3606_){
_start:
{
if (lean_obj_tag(v_a_3605_) == 0)
{
lean_object* v___x_3607_; 
v___x_3607_ = l_List_reverse___redArg(v_a_3606_);
return v___x_3607_;
}
else
{
lean_object* v_head_3608_; lean_object* v_tail_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3618_; 
v_head_3608_ = lean_ctor_get(v_a_3605_, 0);
v_tail_3609_ = lean_ctor_get(v_a_3605_, 1);
v_isSharedCheck_3618_ = !lean_is_exclusive(v_a_3605_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3611_ = v_a_3605_;
v_isShared_3612_ = v_isSharedCheck_3618_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_tail_3609_);
lean_inc(v_head_3608_);
lean_dec(v_a_3605_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3618_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3613_; lean_object* v___x_3615_; 
v___x_3613_ = l_Lean_MessageData_ofSyntax(v_head_3608_);
if (v_isShared_3612_ == 0)
{
lean_ctor_set(v___x_3611_, 1, v_a_3606_);
lean_ctor_set(v___x_3611_, 0, v___x_3613_);
v___x_3615_ = v___x_3611_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v___x_3613_);
lean_ctor_set(v_reuseFailAlloc_3617_, 1, v_a_3606_);
v___x_3615_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
v_a_3605_ = v_tail_3609_;
v_a_3606_ = v___x_3615_;
goto _start;
}
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_3619_; double v___x_3620_; 
v___x_3619_ = lean_unsigned_to_nat(0u);
v___x_3620_ = lean_float_of_nat(v___x_3619_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg(lean_object* v_cls_3623_, lean_object* v_msg_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
lean_object* v_ref_3630_; lean_object* v___x_3631_; lean_object* v_a_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3677_; 
v_ref_3630_ = lean_ctor_get(v___y_3627_, 2);
v___x_3631_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__2(v_msg_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_);
v_a_3632_ = lean_ctor_get(v___x_3631_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v___x_3631_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3634_ = v___x_3631_;
v_isShared_3635_ = v_isSharedCheck_3677_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_a_3632_);
lean_dec(v___x_3631_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3677_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3636_; lean_object* v_traceState_3637_; lean_object* v_env_3638_; lean_object* v_nextMacroScope_3639_; lean_object* v_ngen_3640_; lean_object* v_auxDeclNGen_3641_; lean_object* v_cache_3642_; lean_object* v_recordedDeps_3643_; lean_object* v_messages_3644_; lean_object* v_infoState_3645_; lean_object* v_snapshotTasks_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3676_; 
v___x_3636_ = lean_st_ref_take(v___y_3628_);
v_traceState_3637_ = lean_ctor_get(v___x_3636_, 4);
v_env_3638_ = lean_ctor_get(v___x_3636_, 0);
v_nextMacroScope_3639_ = lean_ctor_get(v___x_3636_, 1);
v_ngen_3640_ = lean_ctor_get(v___x_3636_, 2);
v_auxDeclNGen_3641_ = lean_ctor_get(v___x_3636_, 3);
v_cache_3642_ = lean_ctor_get(v___x_3636_, 5);
v_recordedDeps_3643_ = lean_ctor_get(v___x_3636_, 6);
v_messages_3644_ = lean_ctor_get(v___x_3636_, 7);
v_infoState_3645_ = lean_ctor_get(v___x_3636_, 8);
v_snapshotTasks_3646_ = lean_ctor_get(v___x_3636_, 9);
v_isSharedCheck_3676_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3648_ = v___x_3636_;
v_isShared_3649_ = v_isSharedCheck_3676_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_snapshotTasks_3646_);
lean_inc(v_infoState_3645_);
lean_inc(v_messages_3644_);
lean_inc(v_recordedDeps_3643_);
lean_inc(v_cache_3642_);
lean_inc(v_traceState_3637_);
lean_inc(v_auxDeclNGen_3641_);
lean_inc(v_ngen_3640_);
lean_inc(v_nextMacroScope_3639_);
lean_inc(v_env_3638_);
lean_dec(v___x_3636_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3676_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
uint64_t v_tid_3650_; lean_object* v_traces_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3675_; 
v_tid_3650_ = lean_ctor_get_uint64(v_traceState_3637_, sizeof(void*)*1);
v_traces_3651_ = lean_ctor_get(v_traceState_3637_, 0);
v_isSharedCheck_3675_ = !lean_is_exclusive(v_traceState_3637_);
if (v_isSharedCheck_3675_ == 0)
{
v___x_3653_ = v_traceState_3637_;
v_isShared_3654_ = v_isSharedCheck_3675_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_traces_3651_);
lean_dec(v_traceState_3637_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3675_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3655_; lean_object* v___x_3656_; double v___x_3657_; uint8_t v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3666_; 
v___x_3655_ = lean_box(0);
v___x_3656_ = lean_box(0);
v___x_3657_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__0);
v___x_3658_ = 0;
v___x_3659_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__39));
v___x_3660_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3660_, 0, v_cls_3623_);
lean_ctor_set(v___x_3660_, 1, v___x_3656_);
lean_ctor_set(v___x_3660_, 2, v___x_3659_);
lean_ctor_set_float(v___x_3660_, sizeof(void*)*3, v___x_3657_);
lean_ctor_set_float(v___x_3660_, sizeof(void*)*3 + 8, v___x_3657_);
lean_ctor_set_uint8(v___x_3660_, sizeof(void*)*3 + 16, v___x_3658_);
v___x_3661_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___closed__1));
v___x_3662_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3660_);
lean_ctor_set(v___x_3662_, 1, v_a_3632_);
lean_ctor_set(v___x_3662_, 2, v___x_3661_);
lean_inc(v_ref_3630_);
v___x_3663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3663_, 0, v_ref_3630_);
lean_ctor_set(v___x_3663_, 1, v___x_3662_);
v___x_3664_ = l_Lean_PersistentArray_push___redArg(v_traces_3651_, v___x_3663_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 0, v___x_3664_);
v___x_3666_ = v___x_3653_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v___x_3664_);
lean_ctor_set_uint64(v_reuseFailAlloc_3674_, sizeof(void*)*1, v_tid_3650_);
v___x_3666_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
lean_object* v___x_3668_; 
if (v_isShared_3649_ == 0)
{
lean_ctor_set(v___x_3648_, 4, v___x_3666_);
v___x_3668_ = v___x_3648_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v_env_3638_);
lean_ctor_set(v_reuseFailAlloc_3673_, 1, v_nextMacroScope_3639_);
lean_ctor_set(v_reuseFailAlloc_3673_, 2, v_ngen_3640_);
lean_ctor_set(v_reuseFailAlloc_3673_, 3, v_auxDeclNGen_3641_);
lean_ctor_set(v_reuseFailAlloc_3673_, 4, v___x_3666_);
lean_ctor_set(v_reuseFailAlloc_3673_, 5, v_cache_3642_);
lean_ctor_set(v_reuseFailAlloc_3673_, 6, v_recordedDeps_3643_);
lean_ctor_set(v_reuseFailAlloc_3673_, 7, v_messages_3644_);
lean_ctor_set(v_reuseFailAlloc_3673_, 8, v_infoState_3645_);
lean_ctor_set(v_reuseFailAlloc_3673_, 9, v_snapshotTasks_3646_);
v___x_3668_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
lean_object* v___x_3669_; lean_object* v___x_3671_; 
v___x_3669_ = lean_st_ref_put(v___y_3628_, v___x_3668_);
if (v_isShared_3635_ == 0)
{
lean_ctor_set(v___x_3634_, 0, v___x_3655_);
v___x_3671_ = v___x_3634_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v___x_3655_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg___boxed(lean_object* v_cls_3678_, lean_object* v_msg_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg(v_cls_3678_, v_msg_3679_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
return v_res_3685_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__3(void){
_start:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3693_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0));
v___x_3694_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__2));
v___x_3695_ = l_Lean_Name_append(v___x_3694_, v___x_3693_);
return v___x_3695_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__5(void){
_start:
{
lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3697_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__4));
v___x_3698_ = l_Lean_stringToMessageData(v___x_3697_);
return v___x_3698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds(lean_object* v_ctx_3699_, lean_object* v_declNames_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_){
_start:
{
lean_object* v___x_3708_; 
v___x_3708_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMutualBlock(v_ctx_3699_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_);
if (lean_obj_tag(v___x_3708_) == 0)
{
lean_object* v_a_3709_; lean_object* v___x_3710_; uint8_t v___x_3711_; lean_object* v___x_3712_; 
v_a_3709_ = lean_ctor_get(v___x_3708_, 0);
lean_inc(v_a_3709_);
lean_dec_ref_known(v___x_3708_, 1);
v___x_3710_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0));
v___x_3711_ = 1;
v___x_3712_ = l_Lean_Elab_Deriving_mkInstanceCmds(v_ctx_3699_, v___x_3710_, v_declNames_3700_, v___x_3711_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_toCold_3713_; lean_object* v_options_3714_; lean_object* v_a_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3757_; 
v_toCold_3713_ = lean_ctor_get(v_a_3705_, 0);
v_options_3714_ = lean_ctor_get(v_toCold_3713_, 2);
v_a_3715_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3717_ = v___x_3712_;
v_isShared_3718_ = v_isSharedCheck_3757_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_a_3715_);
lean_dec(v___x_3712_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3757_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v_inheritedTraceOptions_3719_; uint8_t v_hasTrace_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; 
v_inheritedTraceOptions_3719_ = lean_ctor_get(v_toCold_3713_, 11);
v_hasTrace_3720_ = lean_ctor_get_uint8(v_options_3714_, sizeof(void*)*1);
v___x_3721_ = lean_unsigned_to_nat(1u);
v___x_3722_ = lean_mk_empty_array_with_capacity(v___x_3721_);
v___x_3723_ = lean_array_push(v___x_3722_, v_a_3709_);
v___x_3724_ = l_Array_append___redArg(v___x_3723_, v_a_3715_);
lean_dec(v_a_3715_);
if (v_hasTrace_3720_ == 0)
{
lean_object* v___x_3726_; 
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 0, v___x_3724_);
v___x_3726_ = v___x_3717_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v___x_3724_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
else
{
lean_object* v___x_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; 
v___x_3728_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0));
v___x_3729_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__3, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__3_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__3);
v___x_3730_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3719_, v_options_3714_, v___x_3729_);
if (v___x_3730_ == 0)
{
lean_object* v___x_3732_; 
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 0, v___x_3724_);
v___x_3732_ = v___x_3717_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v___x_3724_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
else
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
lean_del_object(v___x_3717_);
v___x_3734_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__5, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__5_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__5);
lean_inc_ref(v___x_3724_);
v___x_3735_ = lean_array_to_list(v___x_3724_);
v___x_3736_ = lean_box(0);
v___x_3737_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__0(v___x_3735_, v___x_3736_);
v___x_3738_ = l_Lean_MessageData_ofList(v___x_3737_);
v___x_3739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3739_, 0, v___x_3734_);
lean_ctor_set(v___x_3739_, 1, v___x_3738_);
v___x_3740_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg(v___x_3728_, v___x_3739_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3747_; 
v_isSharedCheck_3747_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3747_ == 0)
{
lean_object* v_unused_3748_; 
v_unused_3748_ = lean_ctor_get(v___x_3740_, 0);
lean_dec(v_unused_3748_);
v___x_3742_ = v___x_3740_;
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
else
{
lean_dec(v___x_3740_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v___x_3745_; 
if (v_isShared_3743_ == 0)
{
lean_ctor_set(v___x_3742_, 0, v___x_3724_);
v___x_3745_ = v___x_3742_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v___x_3724_);
v___x_3745_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
return v___x_3745_;
}
}
}
else
{
lean_object* v_a_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3756_; 
lean_dec_ref(v___x_3724_);
v_a_3749_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3756_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3756_ == 0)
{
v___x_3751_ = v___x_3740_;
v_isShared_3752_ = v_isSharedCheck_3756_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_a_3749_);
lean_dec(v___x_3740_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3756_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3754_; 
if (v_isShared_3752_ == 0)
{
v___x_3754_ = v___x_3751_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3755_, 0, v_a_3749_);
v___x_3754_ = v_reuseFailAlloc_3755_;
goto v_reusejp_3753_;
}
v_reusejp_3753_:
{
return v___x_3754_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
lean_dec(v_a_3709_);
v_a_3758_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3712_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3712_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3763_; 
if (v_isShared_3761_ == 0)
{
v___x_3763_ = v___x_3760_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3758_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
else
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3773_; 
v_a_3766_ = lean_ctor_get(v___x_3708_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3708_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3768_ = v___x_3708_;
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3708_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3771_; 
if (v_isShared_3769_ == 0)
{
v___x_3771_ = v___x_3768_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3766_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___boxed(lean_object* v_ctx_3774_, lean_object* v_declNames_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_){
_start:
{
lean_object* v_res_3783_; 
v_res_3783_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds(v_ctx_3774_, v_declNames_3775_, v_a_3776_, v_a_3777_, v_a_3778_, v_a_3779_, v_a_3780_, v_a_3781_);
lean_dec(v_a_3781_);
lean_dec_ref(v_a_3780_);
lean_dec(v_a_3779_);
lean_dec_ref(v_a_3778_);
lean_dec(v_a_3777_);
lean_dec_ref(v_a_3776_);
lean_dec_ref(v_declNames_3775_);
lean_dec_ref(v_ctx_3774_);
return v_res_3783_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1(lean_object* v_cls_3784_, lean_object* v_msg_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg(v_cls_3784_, v_msg_3785_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___boxed(lean_object* v_cls_3794_, lean_object* v_msg_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_){
_start:
{
lean_object* v_res_3803_; 
v_res_3803_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1(v_cls_3794_, v_msg_3795_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_);
lean_dec(v___y_3801_);
lean_dec_ref(v___y_3800_);
lean_dec(v___y_3799_);
lean_dec_ref(v___y_3798_);
lean_dec(v___y_3797_);
lean_dec_ref(v___y_3796_);
return v_res_3803_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__3(void){
_start:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3811_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__2));
v___x_3812_ = l_String_toRawSubstring_x27(v___x_3811_);
return v___x_3812_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__6(void){
_start:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; 
v___x_3816_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__5));
v___x_3817_ = l_String_toRawSubstring_x27(v___x_3816_);
return v___x_3817_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__12(void){
_start:
{
lean_object* v___x_3830_; lean_object* v___x_3831_; 
v___x_3830_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__11));
v___x_3831_ = l_String_toRawSubstring_x27(v___x_3830_);
return v___x_3831_;
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__16(void){
_start:
{
lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3837_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__15));
v___x_3838_ = l_String_toRawSubstring_x27(v___x_3837_);
return v___x_3838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg(lean_object* v_ctx_3842_, lean_object* v_name_3843_, lean_object* v_a_3844_){
_start:
{
lean_object* v_toCold_3846_; lean_object* v_auxFunNames_3847_; lean_object* v_ref_3848_; lean_object* v_quotContext_3849_; lean_object* v_currMacroScope_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v_auxFunName_3853_; uint8_t v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; 
v_toCold_3846_ = lean_ctor_get(v_a_3844_, 0);
v_auxFunNames_3847_ = lean_ctor_get(v_ctx_3842_, 2);
v_ref_3848_ = lean_ctor_get(v_a_3844_, 2);
v_quotContext_3849_ = lean_ctor_get(v_toCold_3846_, 8);
v_currMacroScope_3850_ = lean_ctor_get(v_toCold_3846_, 9);
v___x_3851_ = lean_box(0);
v___x_3852_ = lean_unsigned_to_nat(0u);
v_auxFunName_3853_ = lean_array_get_borrowed(v___x_3851_, v_auxFunNames_3847_, v___x_3852_);
v___x_3854_ = 0;
v___x_3855_ = l_Lean_SourceInfo_fromRef(v_ref_3848_, v___x_3854_);
v___x_3856_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__2));
v___x_3857_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__4));
v___x_3858_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_3859_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
lean_inc_n(v___x_3855_, 25);
v___x_3860_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3855_);
lean_ctor_set(v___x_3860_, 1, v___x_3858_);
lean_ctor_set(v___x_3860_, 2, v___x_3859_);
lean_inc_ref_n(v___x_3860_, 12);
v___x_3861_ = l_Lean_Syntax_node7(v___x_3855_, v___x_3857_, v___x_3860_, v___x_3860_, v___x_3860_, v___x_3860_, v___x_3860_, v___x_3860_, v___x_3860_);
v___x_3862_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__6));
v___x_3863_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__7));
v___x_3864_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3864_, 0, v___x_3855_);
lean_ctor_set(v___x_3864_, 1, v___x_3863_);
v___x_3865_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__9));
lean_inc(v_auxFunName_3853_);
v___x_3866_ = l_Lean_mkIdent(v_auxFunName_3853_);
v___x_3867_ = l_Lean_Syntax_node2(v___x_3855_, v___x_3865_, v___x_3866_, v___x_3860_);
v___x_3868_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__11));
v___x_3869_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__1));
v___x_3870_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__36));
v___x_3871_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3871_, 0, v___x_3855_);
lean_ctor_set(v___x_3871_, 1, v___x_3870_);
v___x_3872_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__3, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__3_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__3);
v___x_3873_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__4));
lean_inc_n(v_currMacroScope_3850_, 5);
lean_inc_n(v_quotContext_3849_, 5);
v___x_3874_ = l_Lean_addMacroScope(v_quotContext_3849_, v___x_3873_, v_currMacroScope_3850_);
v___x_3875_ = lean_box(0);
v___x_3876_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3855_);
lean_ctor_set(v___x_3876_, 1, v___x_3872_);
lean_ctor_set(v___x_3876_, 2, v___x_3874_);
lean_ctor_set(v___x_3876_, 3, v___x_3875_);
v___x_3877_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__6, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__6_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__6);
v___x_3878_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__7));
v___x_3879_ = l_Lean_addMacroScope(v_quotContext_3849_, v___x_3878_, v_currMacroScope_3850_);
v___x_3880_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3855_);
lean_ctor_set(v___x_3880_, 1, v___x_3877_);
lean_ctor_set(v___x_3880_, 2, v___x_3879_);
lean_ctor_set(v___x_3880_, 3, v___x_3875_);
v___x_3881_ = l_Lean_Syntax_node2(v___x_3855_, v___x_3858_, v___x_3876_, v___x_3880_);
v___x_3882_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__18));
v___x_3883_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3855_);
lean_ctor_set(v___x_3883_, 1, v___x_3882_);
v___x_3884_ = l_Lean_mkCIdent(v_name_3843_);
lean_inc_ref(v___x_3883_);
v___x_3885_ = l_Lean_Syntax_node2(v___x_3855_, v___x_3858_, v___x_3883_, v___x_3884_);
v___x_3886_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__60));
v___x_3887_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3855_);
lean_ctor_set(v___x_3887_, 1, v___x_3886_);
v___x_3888_ = l_Lean_Syntax_node5(v___x_3855_, v___x_3869_, v___x_3871_, v___x_3881_, v___x_3885_, v___x_3860_, v___x_3887_);
v___x_3889_ = l_Lean_Syntax_node1(v___x_3855_, v___x_3858_, v___x_3888_);
v___x_3890_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__13));
v___x_3891_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__14);
v___x_3892_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__15));
v___x_3893_ = l_Lean_addMacroScope(v_quotContext_3849_, v___x_3892_, v_currMacroScope_3850_);
v___x_3894_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__10));
v___x_3895_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3855_);
lean_ctor_set(v___x_3895_, 1, v___x_3891_);
lean_ctor_set(v___x_3895_, 2, v___x_3893_);
lean_ctor_set(v___x_3895_, 3, v___x_3894_);
v___x_3896_ = l_Lean_Syntax_node2(v___x_3855_, v___x_3890_, v___x_3883_, v___x_3895_);
v___x_3897_ = l_Lean_Syntax_node1(v___x_3855_, v___x_3858_, v___x_3896_);
v___x_3898_ = l_Lean_Syntax_node2(v___x_3855_, v___x_3868_, v___x_3889_, v___x_3897_);
v___x_3899_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__22));
v___x_3900_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__23));
v___x_3901_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3855_);
lean_ctor_set(v___x_3901_, 1, v___x_3900_);
v___x_3902_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__7));
v___x_3903_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__12, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__12_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__12);
v___x_3904_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__14));
v___x_3905_ = l_Lean_addMacroScope(v_quotContext_3849_, v___x_3904_, v_currMacroScope_3850_);
v___x_3906_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3855_);
lean_ctor_set(v___x_3906_, 1, v___x_3903_);
lean_ctor_set(v___x_3906_, 2, v___x_3905_);
lean_ctor_set(v___x_3906_, 3, v___x_3875_);
v___x_3907_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__3___redArg___closed__8));
v___x_3908_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3855_);
lean_ctor_set(v___x_3908_, 1, v___x_3907_);
v___x_3909_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__16, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__16_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__16);
v___x_3910_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___closed__17));
v___x_3911_ = l_Lean_addMacroScope(v_quotContext_3849_, v___x_3910_, v_currMacroScope_3850_);
v___x_3912_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3855_);
lean_ctor_set(v___x_3912_, 1, v___x_3909_);
lean_ctor_set(v___x_3912_, 2, v___x_3911_);
lean_ctor_set(v___x_3912_, 3, v___x_3875_);
v___x_3913_ = l_Lean_Syntax_node3(v___x_3855_, v___x_3902_, v___x_3906_, v___x_3908_, v___x_3912_);
v___x_3914_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkAuxFunction___closed__26));
v___x_3915_ = l_Lean_Syntax_node2(v___x_3855_, v___x_3914_, v___x_3860_, v___x_3860_);
v___x_3916_ = l_Lean_Syntax_node4(v___x_3855_, v___x_3899_, v___x_3901_, v___x_3913_, v___x_3915_, v___x_3860_);
v___x_3917_ = l_Lean_Syntax_node5(v___x_3855_, v___x_3862_, v___x_3864_, v___x_3867_, v___x_3898_, v___x_3916_, v___x_3860_);
v___x_3918_ = l_Lean_Syntax_node2(v___x_3855_, v___x_3856_, v___x_3861_, v___x_3917_);
v___x_3919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3918_);
return v___x_3919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg___boxed(lean_object* v_ctx_3920_, lean_object* v_name_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_){
_start:
{
lean_object* v_res_3924_; 
v_res_3924_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg(v_ctx_3920_, v_name_3921_, v_a_3922_);
lean_dec_ref(v_a_3922_);
lean_dec_ref(v_ctx_3920_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun(lean_object* v_ctx_3925_, lean_object* v_name_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_){
_start:
{
lean_object* v___x_3934_; 
v___x_3934_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg(v_ctx_3925_, v_name_3926_, v_a_3931_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___boxed(lean_object* v_ctx_3935_, lean_object* v_name_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_, lean_object* v_a_3942_, lean_object* v_a_3943_){
_start:
{
lean_object* v_res_3944_; 
v_res_3944_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun(v_ctx_3935_, v_name_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
lean_dec(v_a_3942_);
lean_dec_ref(v_a_3941_);
lean_dec(v_a_3940_);
lean_dec_ref(v_a_3939_);
lean_dec(v_a_3938_);
lean_dec_ref(v_a_3937_);
lean_dec_ref(v_ctx_3935_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumCmd(lean_object* v_ctx_3945_, lean_object* v_name_3946_, lean_object* v_a_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_){
_start:
{
lean_object* v___x_3954_; lean_object* v_a_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; uint8_t v___x_3960_; lean_object* v___x_3961_; 
lean_inc(v_name_3946_);
v___x_3954_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumFun___redArg(v_ctx_3945_, v_name_3946_, v_a_3951_);
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_a_3955_);
lean_dec_ref(v___x_3954_);
v___x_3956_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0));
v___x_3957_ = lean_unsigned_to_nat(1u);
v___x_3958_ = lean_mk_empty_array_with_capacity(v___x_3957_);
lean_inc_ref(v___x_3958_);
v___x_3959_ = lean_array_push(v___x_3958_, v_name_3946_);
v___x_3960_ = 1;
v___x_3961_ = l_Lean_Elab_Deriving_mkInstanceCmds(v_ctx_3945_, v___x_3956_, v___x_3959_, v___x_3960_, v_a_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_, v_a_3952_);
lean_dec_ref(v___x_3959_);
if (lean_obj_tag(v___x_3961_) == 0)
{
lean_object* v_toCold_3962_; lean_object* v_options_3963_; lean_object* v_a_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_4004_; 
v_toCold_3962_ = lean_ctor_get(v_a_3951_, 0);
v_options_3963_ = lean_ctor_get(v_toCold_3962_, 2);
v_a_3964_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_4004_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3966_ = v___x_3961_;
v_isShared_3967_ = v_isSharedCheck_4004_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_a_3964_);
lean_dec(v___x_3961_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_4004_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
lean_object* v_inheritedTraceOptions_3968_; uint8_t v_hasTrace_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v_inheritedTraceOptions_3968_ = lean_ctor_get(v_toCold_3962_, 11);
v_hasTrace_3969_ = lean_ctor_get_uint8(v_options_3963_, sizeof(void*)*1);
v___x_3970_ = lean_array_push(v___x_3958_, v_a_3955_);
v___x_3971_ = l_Array_append___redArg(v___x_3970_, v_a_3964_);
lean_dec(v_a_3964_);
if (v_hasTrace_3969_ == 0)
{
lean_object* v___x_3973_; 
if (v_isShared_3967_ == 0)
{
lean_ctor_set(v___x_3966_, 0, v___x_3971_);
v___x_3973_ = v___x_3966_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v___x_3971_);
v___x_3973_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
return v___x_3973_;
}
}
else
{
lean_object* v___x_3975_; lean_object* v___x_3976_; uint8_t v___x_3977_; 
v___x_3975_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0));
v___x_3976_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__3, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__3_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__3);
v___x_3977_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3968_, v_options_3963_, v___x_3976_);
if (v___x_3977_ == 0)
{
lean_object* v___x_3979_; 
if (v_isShared_3967_ == 0)
{
lean_ctor_set(v___x_3966_, 0, v___x_3971_);
v___x_3979_ = v___x_3966_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v___x_3971_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
return v___x_3979_;
}
}
else
{
lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; 
lean_del_object(v___x_3966_);
v___x_3981_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__5, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__5_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__5);
lean_inc_ref(v___x_3971_);
v___x_3982_ = lean_array_to_list(v___x_3971_);
v___x_3983_ = lean_box(0);
v___x_3984_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__0(v___x_3982_, v___x_3983_);
v___x_3985_ = l_Lean_MessageData_ofList(v___x_3984_);
v___x_3986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3986_, 0, v___x_3981_);
lean_ctor_set(v___x_3986_, 1, v___x_3985_);
v___x_3987_ = l_Lean_addTrace___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds_spec__1___redArg(v___x_3975_, v___x_3986_, v_a_3949_, v_a_3950_, v_a_3951_, v_a_3952_);
if (lean_obj_tag(v___x_3987_) == 0)
{
lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_3994_; 
v_isSharedCheck_3994_ = !lean_is_exclusive(v___x_3987_);
if (v_isSharedCheck_3994_ == 0)
{
lean_object* v_unused_3995_; 
v_unused_3995_ = lean_ctor_get(v___x_3987_, 0);
lean_dec(v_unused_3995_);
v___x_3989_ = v___x_3987_;
v_isShared_3990_ = v_isSharedCheck_3994_;
goto v_resetjp_3988_;
}
else
{
lean_dec(v___x_3987_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_3994_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v___x_3992_; 
if (v_isShared_3990_ == 0)
{
lean_ctor_set(v___x_3989_, 0, v___x_3971_);
v___x_3992_ = v___x_3989_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v___x_3971_);
v___x_3992_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
return v___x_3992_;
}
}
}
else
{
lean_object* v_a_3996_; lean_object* v___x_3998_; uint8_t v_isShared_3999_; uint8_t v_isSharedCheck_4003_; 
lean_dec_ref(v___x_3971_);
v_a_3996_ = lean_ctor_get(v___x_3987_, 0);
v_isSharedCheck_4003_ = !lean_is_exclusive(v___x_3987_);
if (v_isSharedCheck_4003_ == 0)
{
v___x_3998_ = v___x_3987_;
v_isShared_3999_ = v_isSharedCheck_4003_;
goto v_resetjp_3997_;
}
else
{
lean_inc(v_a_3996_);
lean_dec(v___x_3987_);
v___x_3998_ = lean_box(0);
v_isShared_3999_ = v_isSharedCheck_4003_;
goto v_resetjp_3997_;
}
v_resetjp_3997_:
{
lean_object* v___x_4001_; 
if (v_isShared_3999_ == 0)
{
v___x_4001_ = v___x_3998_;
goto v_reusejp_4000_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v_a_3996_);
v___x_4001_ = v_reuseFailAlloc_4002_;
goto v_reusejp_4000_;
}
v_reusejp_4000_:
{
return v___x_4001_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4005_; lean_object* v___x_4007_; uint8_t v_isShared_4008_; uint8_t v_isSharedCheck_4012_; 
lean_dec_ref(v___x_3958_);
lean_dec(v_a_3955_);
v_a_4005_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_4012_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_4012_ == 0)
{
v___x_4007_ = v___x_3961_;
v_isShared_4008_ = v_isSharedCheck_4012_;
goto v_resetjp_4006_;
}
else
{
lean_inc(v_a_4005_);
lean_dec(v___x_3961_);
v___x_4007_ = lean_box(0);
v_isShared_4008_ = v_isSharedCheck_4012_;
goto v_resetjp_4006_;
}
v_resetjp_4006_:
{
lean_object* v___x_4010_; 
if (v_isShared_4008_ == 0)
{
v___x_4010_ = v___x_4007_;
goto v_reusejp_4009_;
}
else
{
lean_object* v_reuseFailAlloc_4011_; 
v_reuseFailAlloc_4011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4011_, 0, v_a_4005_);
v___x_4010_ = v_reuseFailAlloc_4011_;
goto v_reusejp_4009_;
}
v_reusejp_4009_:
{
return v___x_4010_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumCmd___boxed(lean_object* v_ctx_4013_, lean_object* v_name_4014_, lean_object* v_a_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_, lean_object* v_a_4021_){
_start:
{
lean_object* v_res_4022_; 
v_res_4022_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumCmd(v_ctx_4013_, v_name_4014_, v_a_4015_, v_a_4016_, v_a_4017_, v_a_4018_, v_a_4019_, v_a_4020_);
lean_dec(v_a_4020_);
lean_dec_ref(v_a_4019_);
lean_dec(v_a_4018_);
lean_dec_ref(v_a_4017_);
lean_dec(v_a_4016_);
lean_dec_ref(v_a_4015_);
lean_dec_ref(v_ctx_4013_);
return v_res_4022_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2___redArg(lean_object* v___y_4023_){
_start:
{
lean_object* v___x_4025_; lean_object* v_env_4026_; lean_object* v___x_4027_; lean_object* v_mainModule_4028_; lean_object* v___x_4029_; 
v___x_4025_ = lean_st_ref_get(v___y_4023_);
v_env_4026_ = lean_ctor_get(v___x_4025_, 0);
lean_inc_ref(v_env_4026_);
lean_dec(v___x_4025_);
v___x_4027_ = l_Lean_Environment_header(v_env_4026_);
lean_dec_ref(v_env_4026_);
v_mainModule_4028_ = lean_ctor_get(v___x_4027_, 0);
lean_inc(v_mainModule_4028_);
lean_dec_ref(v___x_4027_);
v___x_4029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4029_, 0, v_mainModule_4028_);
return v___x_4029_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2___redArg___boxed(lean_object* v___y_4030_, lean_object* v___y_4031_){
_start:
{
lean_object* v_res_4032_; 
v_res_4032_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2___redArg(v___y_4030_);
lean_dec(v___y_4030_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2(lean_object* v___y_4033_, lean_object* v___y_4034_){
_start:
{
lean_object* v___x_4036_; 
v___x_4036_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2___redArg(v___y_4034_);
return v___x_4036_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2___boxed(lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_){
_start:
{
lean_object* v_res_4040_; 
v_res_4040_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2(v___y_4037_, v___y_4038_);
lean_dec(v___y_4038_);
lean_dec_ref(v___y_4037_);
return v_res_4040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__0(uint8_t v_a_4041_, lean_object* v_a_4042_, lean_object* v_declNames_4043_, lean_object* v_declName_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
if (v_a_4041_ == 0)
{
lean_object* v___x_4052_; 
lean_dec(v_declName_4044_);
v___x_4052_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds(v_a_4042_, v_declNames_4043_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_);
return v___x_4052_;
}
else
{
lean_object* v___x_4053_; 
v___x_4053_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqEnumCmd(v_a_4042_, v_declName_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_);
return v___x_4053_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__0___boxed(lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_declNames_4056_, lean_object* v_declName_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_){
_start:
{
uint8_t v_a_7836__boxed_4065_; lean_object* v_res_4066_; 
v_a_7836__boxed_4065_ = lean_unbox(v_a_4054_);
v_res_4066_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__0(v_a_7836__boxed_4065_, v_a_4055_, v_declNames_4056_, v_declName_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_, v___y_4063_);
lean_dec(v___y_4063_);
lean_dec_ref(v___y_4062_);
lean_dec(v___y_4061_);
lean_dec_ref(v___y_4060_);
lean_dec(v___y_4059_);
lean_dec_ref(v___y_4058_);
lean_dec_ref(v_declNames_4056_);
lean_dec_ref(v_a_4055_);
return v_res_4066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__1(size_t v_sz_4067_, size_t v_i_4068_, lean_object* v_bs_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_){
_start:
{
uint8_t v___x_4077_; 
v___x_4077_ = lean_usize_dec_lt(v_i_4068_, v_sz_4067_);
if (v___x_4077_ == 0)
{
lean_object* v___x_4078_; 
v___x_4078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4078_, 0, v_bs_4069_);
return v___x_4078_;
}
else
{
lean_object* v___x_4079_; lean_object* v_v_4080_; lean_object* v___x_4081_; lean_object* v_bs_x27_4082_; lean_object* v___x_4083_; 
v___x_4079_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0));
v_v_4080_ = lean_array_uget(v_bs_4069_, v_i_4068_);
v___x_4081_ = lean_unsigned_to_nat(0u);
v_bs_x27_4082_ = lean_array_uset(v_bs_4069_, v_i_4068_, v___x_4081_);
v___x_4083_ = l_Lean_Elab_Deriving_mkInstName(v___x_4079_, v_v_4080_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_);
if (lean_obj_tag(v___x_4083_) == 0)
{
lean_object* v_a_4084_; size_t v___x_4085_; size_t v___x_4086_; lean_object* v___x_4087_; 
v_a_4084_ = lean_ctor_get(v___x_4083_, 0);
lean_inc(v_a_4084_);
lean_dec_ref_known(v___x_4083_, 1);
v___x_4085_ = ((size_t)1ULL);
v___x_4086_ = lean_usize_add(v_i_4068_, v___x_4085_);
v___x_4087_ = lean_array_uset(v_bs_x27_4082_, v_i_4068_, v_a_4084_);
v_i_4068_ = v___x_4086_;
v_bs_4069_ = v___x_4087_;
goto _start;
}
else
{
lean_object* v_a_4089_; lean_object* v___x_4091_; uint8_t v_isShared_4092_; uint8_t v_isSharedCheck_4096_; 
lean_dec_ref(v_bs_x27_4082_);
v_a_4089_ = lean_ctor_get(v___x_4083_, 0);
v_isSharedCheck_4096_ = !lean_is_exclusive(v___x_4083_);
if (v_isSharedCheck_4096_ == 0)
{
v___x_4091_ = v___x_4083_;
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
else
{
lean_inc(v_a_4089_);
lean_dec(v___x_4083_);
v___x_4091_ = lean_box(0);
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
v_resetjp_4090_:
{
lean_object* v___x_4094_; 
if (v_isShared_4092_ == 0)
{
v___x_4094_ = v___x_4091_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_a_4089_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__1___boxed(lean_object* v_sz_4097_, lean_object* v_i_4098_, lean_object* v_bs_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_){
_start:
{
size_t v_sz_boxed_4107_; size_t v_i_boxed_4108_; lean_object* v_res_4109_; 
v_sz_boxed_4107_ = lean_unbox_usize(v_sz_4097_);
lean_dec(v_sz_4097_);
v_i_boxed_4108_ = lean_unbox_usize(v_i_4098_);
lean_dec(v_i_4098_);
v_res_4109_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__1(v_sz_boxed_4107_, v_i_boxed_4108_, v_bs_4099_, v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec(v___y_4103_);
lean_dec_ref(v___y_4102_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
return v_res_4109_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__11(void){
_start:
{
lean_object* v___x_4137_; lean_object* v___x_4138_; 
v___x_4137_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__10));
v___x_4138_ = l_String_toRawSubstring_x27(v___x_4137_);
return v___x_4138_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3(uint8_t v___x_4142_, lean_object* v_as_4143_, size_t v_sz_4144_, size_t v_i_4145_, lean_object* v_b_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_){
_start:
{
uint8_t v___x_4150_; 
v___x_4150_ = lean_usize_dec_lt(v_i_4145_, v_sz_4144_);
if (v___x_4150_ == 0)
{
lean_object* v___x_4151_; 
v___x_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4151_, 0, v_b_4146_);
return v___x_4151_;
}
else
{
lean_object* v___x_4152_; lean_object* v_a_4153_; lean_object* v___x_4154_; 
v___x_4152_ = lean_box(0);
v_a_4153_ = lean_array_uget_borrowed(v_as_4143_, v_i_4145_);
v___x_4154_ = l_Lean_Elab_Command_getRef___redArg(v___y_4147_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
lean_inc(v_a_4155_);
lean_dec_ref_known(v___x_4154_, 1);
v___x_4156_ = l_Lean_SourceInfo_fromRef(v_a_4155_, v___x_4142_);
lean_dec(v_a_4155_);
v___x_4157_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_4147_);
if (lean_obj_tag(v___x_4157_) == 0)
{
lean_object* v_a_4158_; lean_object* v_a_4160_; lean_object* v_quotContext_x3f_4190_; 
v_a_4158_ = lean_ctor_get(v___x_4157_, 0);
lean_inc(v_a_4158_);
lean_dec_ref_known(v___x_4157_, 1);
v_quotContext_x3f_4190_ = lean_ctor_get(v___y_4147_, 5);
if (lean_obj_tag(v_quotContext_x3f_4190_) == 0)
{
lean_object* v___x_4191_; 
v___x_4191_ = l_Lean_getMainModule___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__2___redArg(v___y_4148_);
if (lean_obj_tag(v___x_4191_) == 0)
{
lean_object* v_a_4192_; 
v_a_4192_ = lean_ctor_get(v___x_4191_, 0);
lean_inc(v_a_4192_);
lean_dec_ref_known(v___x_4191_, 1);
v_a_4160_ = v_a_4192_;
goto v___jp_4159_;
}
else
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
lean_dec(v_a_4158_);
lean_dec(v___x_4156_);
v_a_4193_ = lean_ctor_get(v___x_4191_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4191_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_4191_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_4191_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4196_ == 0)
{
v___x_4198_ = v___x_4195_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
}
}
else
{
lean_object* v_val_4201_; 
v_val_4201_ = lean_ctor_get(v_quotContext_x3f_4190_, 0);
lean_inc(v_val_4201_);
v_a_4160_ = v_val_4201_;
goto v___jp_4159_;
}
v___jp_4159_:
{
lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; 
v___x_4161_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__0));
v___x_4162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__1));
lean_inc_n(v___x_4156_, 10);
v___x_4163_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4156_);
lean_ctor_set(v___x_4163_, 1, v___x_4161_);
v___x_4164_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__2));
v___x_4165_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4165_, 0, v___x_4156_);
lean_ctor_set(v___x_4165_, 1, v___x_4164_);
v___x_4166_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__12));
v___x_4167_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__4));
v___x_4168_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__6));
v___x_4169_ = lean_obj_once(&l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13, &l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13_once, _init_l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkElseAlt___closed__13);
v___x_4170_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4156_);
lean_ctor_set(v___x_4170_, 1, v___x_4166_);
lean_ctor_set(v___x_4170_, 2, v___x_4169_);
lean_inc_ref(v___x_4170_);
v___x_4171_ = l_Lean_Syntax_node1(v___x_4156_, v___x_4168_, v___x_4170_);
v___x_4172_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__9));
v___x_4173_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__11);
v___x_4174_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__12));
v___x_4175_ = l_Lean_addMacroScope(v_a_4160_, v___x_4174_, v_a_4158_);
v___x_4176_ = lean_box(0);
v___x_4177_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4177_, 0, v___x_4156_);
lean_ctor_set(v___x_4177_, 1, v___x_4173_);
lean_ctor_set(v___x_4177_, 2, v___x_4175_);
lean_ctor_set(v___x_4177_, 3, v___x_4176_);
v___x_4178_ = l_Lean_Syntax_node2(v___x_4156_, v___x_4172_, v___x_4177_, v___x_4170_);
v___x_4179_ = l_Lean_Syntax_node2(v___x_4156_, v___x_4167_, v___x_4171_, v___x_4178_);
v___x_4180_ = l_Lean_Syntax_node1(v___x_4156_, v___x_4166_, v___x_4179_);
v___x_4181_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___closed__13));
v___x_4182_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4182_, 0, v___x_4156_);
lean_ctor_set(v___x_4182_, 1, v___x_4181_);
lean_inc(v_a_4153_);
v___x_4183_ = l_Lean_mkIdent(v_a_4153_);
v___x_4184_ = l_Lean_Syntax_node1(v___x_4156_, v___x_4166_, v___x_4183_);
v___x_4185_ = l_Lean_Syntax_node5(v___x_4156_, v___x_4162_, v___x_4163_, v___x_4165_, v___x_4180_, v___x_4182_, v___x_4184_);
v___x_4186_ = l_Lean_Elab_Command_elabCommand(v___x_4185_, v___y_4147_, v___y_4148_);
if (lean_obj_tag(v___x_4186_) == 0)
{
size_t v___x_4187_; size_t v___x_4188_; 
lean_dec_ref_known(v___x_4186_, 1);
v___x_4187_ = ((size_t)1ULL);
v___x_4188_ = lean_usize_add(v_i_4145_, v___x_4187_);
v_i_4145_ = v___x_4188_;
v_b_4146_ = v___x_4152_;
goto _start;
}
else
{
return v___x_4186_;
}
}
}
else
{
lean_object* v_a_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4209_; 
lean_dec(v___x_4156_);
v_a_4202_ = lean_ctor_get(v___x_4157_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v___x_4157_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4204_ = v___x_4157_;
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_a_4202_);
lean_dec(v___x_4157_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v___x_4207_; 
if (v_isShared_4205_ == 0)
{
v___x_4207_ = v___x_4204_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v_a_4202_);
v___x_4207_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
return v___x_4207_;
}
}
}
}
else
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4217_; 
v_a_4210_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4217_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4212_ = v___x_4154_;
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v___x_4154_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4215_; 
if (v_isShared_4213_ == 0)
{
v___x_4215_ = v___x_4212_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v_a_4210_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
return v___x_4215_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3___boxed(lean_object* v___x_4218_, lean_object* v_as_4219_, lean_object* v_sz_4220_, lean_object* v_i_4221_, lean_object* v_b_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_){
_start:
{
uint8_t v___x_8000__boxed_4226_; size_t v_sz_boxed_4227_; size_t v_i_boxed_4228_; lean_object* v_res_4229_; 
v___x_8000__boxed_4226_ = lean_unbox(v___x_4218_);
v_sz_boxed_4227_ = lean_unbox_usize(v_sz_4220_);
lean_dec(v_sz_4220_);
v_i_boxed_4228_ = lean_unbox_usize(v_i_4221_);
lean_dec(v_i_4221_);
v_res_4229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3(v___x_8000__boxed_4226_, v_as_4219_, v_sz_boxed_4227_, v_i_boxed_4228_, v_b_4222_, v___y_4223_, v___y_4224_);
lean_dec(v___y_4224_);
lean_dec_ref(v___y_4223_);
lean_dec_ref(v_as_4219_);
return v_res_4229_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_4230_; 
v___x_4230_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4230_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; 
v___x_4231_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__0);
v___x_4232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4232_, 0, v___x_4231_);
return v___x_4232_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4233_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__1);
v___x_4234_ = lean_unsigned_to_nat(0u);
v___x_4235_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4234_);
lean_ctor_set(v___x_4235_, 1, v___x_4234_);
lean_ctor_set(v___x_4235_, 2, v___x_4234_);
lean_ctor_set(v___x_4235_, 3, v___x_4234_);
lean_ctor_set(v___x_4235_, 4, v___x_4233_);
lean_ctor_set(v___x_4235_, 5, v___x_4233_);
lean_ctor_set(v___x_4235_, 6, v___x_4233_);
lean_ctor_set(v___x_4235_, 7, v___x_4233_);
lean_ctor_set(v___x_4235_, 8, v___x_4233_);
lean_ctor_set(v___x_4235_, 9, v___x_4233_);
lean_ctor_set(v___x_4235_, 10, v___x_4233_);
return v___x_4235_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__3(void){
_start:
{
lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; 
v___x_4236_ = lean_unsigned_to_nat(32u);
v___x_4237_ = lean_mk_empty_array_with_capacity(v___x_4236_);
v___x_4238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4237_);
return v___x_4238_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__4(void){
_start:
{
size_t v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; 
v___x_4239_ = ((size_t)5ULL);
v___x_4240_ = lean_unsigned_to_nat(0u);
v___x_4241_ = lean_unsigned_to_nat(32u);
v___x_4242_ = lean_mk_empty_array_with_capacity(v___x_4241_);
v___x_4243_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__3);
v___x_4244_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4244_, 0, v___x_4243_);
lean_ctor_set(v___x_4244_, 1, v___x_4242_);
lean_ctor_set(v___x_4244_, 2, v___x_4240_);
lean_ctor_set(v___x_4244_, 3, v___x_4240_);
lean_ctor_set_usize(v___x_4244_, 4, v___x_4239_);
return v___x_4244_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__5(void){
_start:
{
lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
v___x_4245_ = lean_box(1);
v___x_4246_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__4);
v___x_4247_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__1);
v___x_4248_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4248_, 0, v___x_4247_);
lean_ctor_set(v___x_4248_, 1, v___x_4246_);
lean_ctor_set(v___x_4248_, 2, v___x_4245_);
return v___x_4248_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg(lean_object* v_msgData_4249_, lean_object* v___y_4250_){
_start:
{
lean_object* v___x_4252_; lean_object* v_env_4253_; uint8_t v___x_4254_; lean_object* v_env_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v_scopes_4258_; lean_object* v___x_4259_; lean_object* v_opts_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; 
v___x_4252_ = lean_st_ref_get(v___y_4250_);
v_env_4253_ = lean_ctor_get(v___x_4252_, 0);
lean_inc_ref(v_env_4253_);
lean_dec(v___x_4252_);
v___x_4254_ = 0;
v_env_4255_ = l_Lean_Environment_setRecordingDeps(v_env_4253_, v___x_4254_);
v___x_4256_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4257_ = lean_st_ref_get(v___y_4250_);
v_scopes_4258_ = lean_ctor_get(v___x_4257_, 2);
lean_inc(v_scopes_4258_);
lean_dec(v___x_4257_);
v___x_4259_ = l_List_head_x21___redArg(v___x_4256_, v_scopes_4258_);
lean_dec(v_scopes_4258_);
v_opts_4260_ = lean_ctor_get(v___x_4259_, 1);
lean_inc_ref(v_opts_4260_);
lean_dec(v___x_4259_);
v___x_4261_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__2);
v___x_4262_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__5);
v___x_4263_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4263_, 0, v_env_4255_);
lean_ctor_set(v___x_4263_, 1, v___x_4261_);
lean_ctor_set(v___x_4263_, 2, v___x_4262_);
lean_ctor_set(v___x_4263_, 3, v_opts_4260_);
v___x_4264_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4264_, 0, v___x_4263_);
lean_ctor_set(v___x_4264_, 1, v_msgData_4249_);
v___x_4265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4265_, 0, v___x_4264_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___boxed(lean_object* v_msgData_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_){
_start:
{
lean_object* v_res_4269_; 
v_res_4269_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg(v_msgData_4266_, v___y_4267_);
lean_dec(v___y_4267_);
return v_res_4269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14___redArg(lean_object* v_msgData_4270_, lean_object* v_macroStack_4271_, lean_object* v___y_4272_){
_start:
{
lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v_scopes_4276_; lean_object* v___x_4277_; lean_object* v_opts_4278_; lean_object* v___x_4279_; uint8_t v___x_4280_; 
v___x_4274_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4275_ = lean_st_ref_get(v___y_4272_);
v_scopes_4276_ = lean_ctor_get(v___x_4275_, 2);
lean_inc(v_scopes_4276_);
lean_dec(v___x_4275_);
v___x_4277_ = l_List_head_x21___redArg(v___x_4274_, v_scopes_4276_);
lean_dec(v_scopes_4276_);
v_opts_4278_ = lean_ctor_get(v___x_4277_, 1);
lean_inc_ref(v_opts_4278_);
lean_dec(v___x_4277_);
v___x_4279_ = l_Lean_Elab_pp_macroStack;
v___x_4280_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__10(v_opts_4278_, v___x_4279_);
lean_dec_ref(v_opts_4278_);
if (v___x_4280_ == 0)
{
lean_object* v___x_4281_; 
lean_dec(v_macroStack_4271_);
v___x_4281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4281_, 0, v_msgData_4270_);
return v___x_4281_;
}
else
{
if (lean_obj_tag(v_macroStack_4271_) == 0)
{
lean_object* v___x_4282_; 
v___x_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4282_, 0, v_msgData_4270_);
return v___x_4282_;
}
else
{
lean_object* v_head_4283_; lean_object* v_after_4284_; lean_object* v___x_4286_; uint8_t v_isShared_4287_; uint8_t v_isSharedCheck_4299_; 
v_head_4283_ = lean_ctor_get(v_macroStack_4271_, 0);
lean_inc(v_head_4283_);
v_after_4284_ = lean_ctor_get(v_head_4283_, 1);
v_isSharedCheck_4299_ = !lean_is_exclusive(v_head_4283_);
if (v_isSharedCheck_4299_ == 0)
{
lean_object* v_unused_4300_; 
v_unused_4300_ = lean_ctor_get(v_head_4283_, 0);
lean_dec(v_unused_4300_);
v___x_4286_ = v_head_4283_;
v_isShared_4287_ = v_isSharedCheck_4299_;
goto v_resetjp_4285_;
}
else
{
lean_inc(v_after_4284_);
lean_dec(v_head_4283_);
v___x_4286_ = lean_box(0);
v_isShared_4287_ = v_isSharedCheck_4299_;
goto v_resetjp_4285_;
}
v_resetjp_4285_:
{
lean_object* v___x_4288_; lean_object* v___x_4290_; 
v___x_4288_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11___closed__0);
if (v_isShared_4287_ == 0)
{
lean_ctor_set_tag(v___x_4286_, 7);
lean_ctor_set(v___x_4286_, 1, v___x_4288_);
lean_ctor_set(v___x_4286_, 0, v_msgData_4270_);
v___x_4290_ = v___x_4286_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4298_; 
v_reuseFailAlloc_4298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4298_, 0, v_msgData_4270_);
lean_ctor_set(v_reuseFailAlloc_4298_, 1, v___x_4288_);
v___x_4290_ = v_reuseFailAlloc_4298_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v_msgData_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; 
v___x_4291_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3___redArg___closed__2);
v___x_4292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4292_, 0, v___x_4290_);
lean_ctor_set(v___x_4292_, 1, v___x_4291_);
v___x_4293_ = l_Lean_MessageData_ofSyntax(v_after_4284_);
v___x_4294_ = l_Lean_indentD(v___x_4293_);
v_msgData_4295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_4295_, 0, v___x_4292_);
lean_ctor_set(v_msgData_4295_, 1, v___x_4294_);
v___x_4296_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0_spec__0_spec__3_spec__11(v_msgData_4295_, v_macroStack_4271_);
v___x_4297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
return v___x_4297_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14___redArg___boxed(lean_object* v_msgData_4301_, lean_object* v_macroStack_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_){
_start:
{
lean_object* v_res_4305_; 
v_res_4305_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14___redArg(v_msgData_4301_, v_macroStack_4302_, v___y_4303_);
lean_dec(v___y_4303_);
return v_res_4305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12___redArg(lean_object* v_msg_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_){
_start:
{
lean_object* v___x_4310_; 
v___x_4310_ = l_Lean_Elab_Command_getRef___redArg(v___y_4307_);
if (lean_obj_tag(v___x_4310_) == 0)
{
lean_object* v_a_4311_; lean_object* v_macroStack_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v_a_4315_; lean_object* v___x_4316_; lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4325_; 
v_a_4311_ = lean_ctor_get(v___x_4310_, 0);
lean_inc(v_a_4311_);
lean_dec_ref_known(v___x_4310_, 1);
v_macroStack_4312_ = lean_ctor_get(v___y_4307_, 4);
v___x_4313_ = l_Lean_Elab_getBetterRef(v_a_4311_, v_macroStack_4312_);
lean_dec(v_a_4311_);
v___x_4314_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg(v_msg_4306_, v___y_4308_);
v_a_4315_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4315_);
lean_dec_ref(v___x_4314_);
lean_inc(v_macroStack_4312_);
v___x_4316_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14___redArg(v_a_4315_, v_macroStack_4312_, v___y_4308_);
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4325_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4319_ = v___x_4316_;
v_isShared_4320_ = v_isSharedCheck_4325_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4316_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4325_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v___x_4321_; lean_object* v___x_4323_; 
v___x_4321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4321_, 0, v___x_4313_);
lean_ctor_set(v___x_4321_, 1, v_a_4317_);
if (v_isShared_4320_ == 0)
{
lean_ctor_set_tag(v___x_4319_, 1);
lean_ctor_set(v___x_4319_, 0, v___x_4321_);
v___x_4323_ = v___x_4319_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v___x_4321_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
return v___x_4323_;
}
}
}
else
{
lean_object* v_a_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4333_; 
lean_dec_ref(v_msg_4306_);
v_a_4326_ = lean_ctor_get(v___x_4310_, 0);
v_isSharedCheck_4333_ = !lean_is_exclusive(v___x_4310_);
if (v_isSharedCheck_4333_ == 0)
{
v___x_4328_ = v___x_4310_;
v_isShared_4329_ = v_isSharedCheck_4333_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_a_4326_);
lean_dec(v___x_4310_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4333_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v___x_4331_; 
if (v_isShared_4329_ == 0)
{
v___x_4331_ = v___x_4328_;
goto v_reusejp_4330_;
}
else
{
lean_object* v_reuseFailAlloc_4332_; 
v_reuseFailAlloc_4332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4332_, 0, v_a_4326_);
v___x_4331_ = v_reuseFailAlloc_4332_;
goto v_reusejp_4330_;
}
v_reusejp_4330_:
{
return v___x_4331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12___redArg___boxed(lean_object* v_msg_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_){
_start:
{
lean_object* v_res_4338_; 
v_res_4338_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12___redArg(v_msg_4334_, v___y_4335_, v___y_4336_);
lean_dec(v___y_4336_);
lean_dec_ref(v___y_4335_);
return v_res_4338_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10___redArg(lean_object* v_ref_4339_, lean_object* v_msg_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_){
_start:
{
lean_object* v___x_4344_; 
v___x_4344_ = l_Lean_Elab_Command_getRef___redArg(v___y_4341_);
if (lean_obj_tag(v___x_4344_) == 0)
{
lean_object* v_a_4345_; lean_object* v_fileName_4346_; lean_object* v_fileMap_4347_; lean_object* v_currRecDepth_4348_; lean_object* v_cmdPos_4349_; lean_object* v_macroStack_4350_; lean_object* v_quotContext_x3f_4351_; lean_object* v_currMacroScope_4352_; lean_object* v_snap_x3f_4353_; lean_object* v_cancelTk_x3f_4354_; uint8_t v_suppressElabErrors_4355_; uint8_t v_checkDeprecated_4356_; lean_object* v_ref_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; 
v_a_4345_ = lean_ctor_get(v___x_4344_, 0);
lean_inc(v_a_4345_);
lean_dec_ref_known(v___x_4344_, 1);
v_fileName_4346_ = lean_ctor_get(v___y_4341_, 0);
v_fileMap_4347_ = lean_ctor_get(v___y_4341_, 1);
v_currRecDepth_4348_ = lean_ctor_get(v___y_4341_, 2);
v_cmdPos_4349_ = lean_ctor_get(v___y_4341_, 3);
v_macroStack_4350_ = lean_ctor_get(v___y_4341_, 4);
v_quotContext_x3f_4351_ = lean_ctor_get(v___y_4341_, 5);
v_currMacroScope_4352_ = lean_ctor_get(v___y_4341_, 6);
v_snap_x3f_4353_ = lean_ctor_get(v___y_4341_, 8);
v_cancelTk_x3f_4354_ = lean_ctor_get(v___y_4341_, 9);
v_suppressElabErrors_4355_ = lean_ctor_get_uint8(v___y_4341_, sizeof(void*)*10);
v_checkDeprecated_4356_ = lean_ctor_get_uint8(v___y_4341_, sizeof(void*)*10 + 1);
v_ref_4357_ = l_Lean_replaceRef(v_ref_4339_, v_a_4345_);
lean_dec(v_a_4345_);
lean_inc(v_cancelTk_x3f_4354_);
lean_inc(v_snap_x3f_4353_);
lean_inc(v_currMacroScope_4352_);
lean_inc(v_quotContext_x3f_4351_);
lean_inc(v_macroStack_4350_);
lean_inc(v_cmdPos_4349_);
lean_inc(v_currRecDepth_4348_);
lean_inc_ref(v_fileMap_4347_);
lean_inc_ref(v_fileName_4346_);
v___x_4358_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_4358_, 0, v_fileName_4346_);
lean_ctor_set(v___x_4358_, 1, v_fileMap_4347_);
lean_ctor_set(v___x_4358_, 2, v_currRecDepth_4348_);
lean_ctor_set(v___x_4358_, 3, v_cmdPos_4349_);
lean_ctor_set(v___x_4358_, 4, v_macroStack_4350_);
lean_ctor_set(v___x_4358_, 5, v_quotContext_x3f_4351_);
lean_ctor_set(v___x_4358_, 6, v_currMacroScope_4352_);
lean_ctor_set(v___x_4358_, 7, v_ref_4357_);
lean_ctor_set(v___x_4358_, 8, v_snap_x3f_4353_);
lean_ctor_set(v___x_4358_, 9, v_cancelTk_x3f_4354_);
lean_ctor_set_uint8(v___x_4358_, sizeof(void*)*10, v_suppressElabErrors_4355_);
lean_ctor_set_uint8(v___x_4358_, sizeof(void*)*10 + 1, v_checkDeprecated_4356_);
v___x_4359_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12___redArg(v_msg_4340_, v___x_4358_, v___y_4342_);
lean_dec_ref_known(v___x_4358_, 10);
return v___x_4359_;
}
else
{
lean_object* v_a_4360_; lean_object* v___x_4362_; uint8_t v_isShared_4363_; uint8_t v_isSharedCheck_4367_; 
lean_dec_ref(v_msg_4340_);
v_a_4360_ = lean_ctor_get(v___x_4344_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___x_4344_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4362_ = v___x_4344_;
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
else
{
lean_inc(v_a_4360_);
lean_dec(v___x_4344_);
v___x_4362_ = lean_box(0);
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
v_resetjp_4361_:
{
lean_object* v___x_4365_; 
if (v_isShared_4363_ == 0)
{
v___x_4365_ = v___x_4362_;
goto v_reusejp_4364_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v_a_4360_);
v___x_4365_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4364_;
}
v_reusejp_4364_:
{
return v___x_4365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_ref_4368_, lean_object* v_msg_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_){
_start:
{
lean_object* v_res_4373_; 
v_res_4373_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10___redArg(v_ref_4368_, v_msg_4369_, v___y_4370_, v___y_4371_);
lean_dec(v___y_4371_);
lean_dec_ref(v___y_4370_);
lean_dec(v_ref_4368_);
return v_res_4373_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_4375_; lean_object* v___x_4376_; 
v___x_4375_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__0));
v___x_4376_ = l_Lean_stringToMessageData(v___x_4375_);
return v___x_4376_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4378_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__2));
v___x_4379_ = l_Lean_stringToMessageData(v___x_4378_);
return v___x_4379_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__5(void){
_start:
{
lean_object* v___x_4381_; lean_object* v___x_4382_; 
v___x_4381_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__4));
v___x_4382_ = l_Lean_stringToMessageData(v___x_4381_);
return v___x_4382_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__7(void){
_start:
{
lean_object* v___x_4384_; lean_object* v___x_4385_; 
v___x_4384_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__6));
v___x_4385_ = l_Lean_stringToMessageData(v___x_4384_);
return v___x_4385_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__9(void){
_start:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; 
v___x_4387_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__8));
v___x_4388_ = l_Lean_stringToMessageData(v___x_4387_);
return v___x_4388_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__11(void){
_start:
{
lean_object* v___x_4390_; lean_object* v___x_4391_; 
v___x_4390_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__10));
v___x_4391_ = l_Lean_stringToMessageData(v___x_4390_);
return v___x_4391_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__13(void){
_start:
{
lean_object* v___x_4393_; lean_object* v___x_4394_; 
v___x_4393_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__12));
v___x_4394_ = l_Lean_stringToMessageData(v___x_4393_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg(lean_object* v_msg_4395_, lean_object* v_declHint_4396_, lean_object* v___y_4397_){
_start:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v_env_4401_; uint8_t v___x_4402_; 
v___x_4399_ = lean_box(0);
v___x_4400_ = lean_st_ref_get(v___y_4397_);
v_env_4401_ = lean_ctor_get(v___x_4400_, 0);
lean_inc_ref(v_env_4401_);
lean_dec(v___x_4400_);
v___x_4402_ = l_Lean_Name_isAnonymous(v_declHint_4396_);
if (v___x_4402_ == 0)
{
uint8_t v_isExporting_4403_; 
v_isExporting_4403_ = lean_ctor_get_uint8(v_env_4401_, sizeof(void*)*13);
if (v_isExporting_4403_ == 0)
{
lean_object* v___x_4404_; 
lean_dec_ref(v_env_4401_);
lean_dec(v_declHint_4396_);
v___x_4404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4404_, 0, v_msg_4395_);
return v___x_4404_;
}
else
{
lean_object* v___x_4405_; uint8_t v___x_4406_; 
lean_inc_ref(v_env_4401_);
v___x_4405_ = l_Lean_Environment_setExporting(v_env_4401_, v___x_4402_);
lean_inc(v_declHint_4396_);
lean_inc_ref(v___x_4405_);
v___x_4406_ = l_Lean_Environment_contains(v___x_4405_, v_declHint_4396_, v_isExporting_4403_);
if (v___x_4406_ == 0)
{
lean_object* v___x_4407_; 
lean_dec_ref(v___x_4405_);
lean_dec_ref(v_env_4401_);
lean_dec(v_declHint_4396_);
v___x_4407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4407_, 0, v_msg_4395_);
return v___x_4407_;
}
else
{
lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v_c_4413_; lean_object* v___x_4414_; 
v___x_4408_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__2);
v___x_4409_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg___closed__5);
v___x_4410_ = l_Lean_Options_empty;
lean_inc_ref(v___x_4405_);
v___x_4411_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4411_, 0, v___x_4405_);
lean_ctor_set(v___x_4411_, 1, v___x_4408_);
lean_ctor_set(v___x_4411_, 2, v___x_4409_);
lean_ctor_set(v___x_4411_, 3, v___x_4410_);
lean_inc(v_declHint_4396_);
v___x_4412_ = l_Lean_MessageData_ofConstName(v_declHint_4396_, v___x_4402_);
v_c_4413_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_4413_, 0, v___x_4411_);
lean_ctor_set(v_c_4413_, 1, v___x_4412_);
v___x_4414_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_4405_, v_declHint_4396_);
lean_dec_ref(v___x_4405_);
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; 
lean_dec_ref(v_env_4401_);
lean_dec(v_declHint_4396_);
v___x_4415_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_4416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4416_, 0, v___x_4415_);
lean_ctor_set(v___x_4416_, 1, v_c_4413_);
v___x_4417_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__3);
v___x_4418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4418_, 0, v___x_4416_);
lean_ctor_set(v___x_4418_, 1, v___x_4417_);
v___x_4419_ = l_Lean_MessageData_note(v___x_4418_);
v___x_4420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4420_, 0, v_msg_4395_);
lean_ctor_set(v___x_4420_, 1, v___x_4419_);
v___x_4421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4421_, 0, v___x_4420_);
return v___x_4421_;
}
else
{
lean_object* v_val_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4456_; 
v_val_4422_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4424_ = v___x_4414_;
v_isShared_4425_ = v_isSharedCheck_4456_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_val_4422_);
lean_dec(v___x_4414_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4456_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v___x_4426_; lean_object* v_moduleNames_4427_; lean_object* v_mod_4428_; uint8_t v___x_4429_; 
v___x_4426_ = l_Lean_Environment_header(v_env_4401_);
lean_dec_ref(v_env_4401_);
v_moduleNames_4427_ = lean_ctor_get(v___x_4426_, 4);
lean_inc_ref(v_moduleNames_4427_);
lean_dec_ref(v___x_4426_);
v_mod_4428_ = lean_array_get(v___x_4399_, v_moduleNames_4427_, v_val_4422_);
lean_dec(v_val_4422_);
lean_dec_ref(v_moduleNames_4427_);
v___x_4429_ = l_Lean_isPrivateName(v_declHint_4396_);
lean_dec(v_declHint_4396_);
if (v___x_4429_ == 0)
{
lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4441_; 
v___x_4430_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__5);
v___x_4431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4430_);
lean_ctor_set(v___x_4431_, 1, v_c_4413_);
v___x_4432_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__7);
v___x_4433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4433_, 0, v___x_4431_);
lean_ctor_set(v___x_4433_, 1, v___x_4432_);
v___x_4434_ = l_Lean_MessageData_ofName(v_mod_4428_);
v___x_4435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4435_, 0, v___x_4433_);
lean_ctor_set(v___x_4435_, 1, v___x_4434_);
v___x_4436_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__9);
v___x_4437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4435_);
lean_ctor_set(v___x_4437_, 1, v___x_4436_);
v___x_4438_ = l_Lean_MessageData_note(v___x_4437_);
v___x_4439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4439_, 0, v_msg_4395_);
lean_ctor_set(v___x_4439_, 1, v___x_4438_);
if (v_isShared_4425_ == 0)
{
lean_ctor_set_tag(v___x_4424_, 0);
lean_ctor_set(v___x_4424_, 0, v___x_4439_);
v___x_4441_ = v___x_4424_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v___x_4439_);
v___x_4441_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
return v___x_4441_;
}
}
else
{
lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4454_; 
v___x_4443_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_4444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4444_, 0, v___x_4443_);
lean_ctor_set(v___x_4444_, 1, v_c_4413_);
v___x_4445_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__11);
v___x_4446_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4444_);
lean_ctor_set(v___x_4446_, 1, v___x_4445_);
v___x_4447_ = l_Lean_MessageData_ofName(v_mod_4428_);
v___x_4448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4446_);
lean_ctor_set(v___x_4448_, 1, v___x_4447_);
v___x_4449_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___closed__13);
v___x_4450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4450_, 0, v___x_4448_);
lean_ctor_set(v___x_4450_, 1, v___x_4449_);
v___x_4451_ = l_Lean_MessageData_note(v___x_4450_);
v___x_4452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4452_, 0, v_msg_4395_);
lean_ctor_set(v___x_4452_, 1, v___x_4451_);
if (v_isShared_4425_ == 0)
{
lean_ctor_set_tag(v___x_4424_, 0);
lean_ctor_set(v___x_4424_, 0, v___x_4452_);
v___x_4454_ = v___x_4424_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v___x_4452_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4457_; 
lean_dec_ref(v_env_4401_);
lean_dec(v_declHint_4396_);
v___x_4457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4457_, 0, v_msg_4395_);
return v___x_4457_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg___boxed(lean_object* v_msg_4458_, lean_object* v_declHint_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_){
_start:
{
lean_object* v_res_4462_; 
v_res_4462_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg(v_msg_4458_, v_declHint_4459_, v___y_4460_);
lean_dec(v___y_4460_);
return v_res_4462_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9(lean_object* v_msg_4463_, lean_object* v_declHint_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_){
_start:
{
lean_object* v___x_4468_; lean_object* v_a_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4478_; 
v___x_4468_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg(v_msg_4463_, v_declHint_4464_, v___y_4466_);
v_a_4469_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4478_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4478_ == 0)
{
v___x_4471_ = v___x_4468_;
v_isShared_4472_ = v_isSharedCheck_4478_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_a_4469_);
lean_dec(v___x_4468_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4478_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4476_; 
v___x_4473_ = l_Lean_unknownIdentifierMessageTag;
v___x_4474_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4474_, 0, v___x_4473_);
lean_ctor_set(v___x_4474_, 1, v_a_4469_);
if (v_isShared_4472_ == 0)
{
lean_ctor_set(v___x_4471_, 0, v___x_4474_);
v___x_4476_ = v___x_4471_;
goto v_reusejp_4475_;
}
else
{
lean_object* v_reuseFailAlloc_4477_; 
v_reuseFailAlloc_4477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4477_, 0, v___x_4474_);
v___x_4476_ = v_reuseFailAlloc_4477_;
goto v_reusejp_4475_;
}
v_reusejp_4475_:
{
return v___x_4476_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9___boxed(lean_object* v_msg_4479_, lean_object* v_declHint_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_){
_start:
{
lean_object* v_res_4484_; 
v_res_4484_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9(v_msg_4479_, v_declHint_4480_, v___y_4481_, v___y_4482_);
lean_dec(v___y_4482_);
lean_dec_ref(v___y_4481_);
return v_res_4484_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8___redArg(lean_object* v_ref_4485_, lean_object* v_msg_4486_, lean_object* v_declHint_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_){
_start:
{
lean_object* v___x_4491_; lean_object* v_a_4492_; lean_object* v___x_4493_; 
v___x_4491_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9(v_msg_4486_, v_declHint_4487_, v___y_4488_, v___y_4489_);
v_a_4492_ = lean_ctor_get(v___x_4491_, 0);
lean_inc(v_a_4492_);
lean_dec_ref(v___x_4491_);
v___x_4493_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10___redArg(v_ref_4485_, v_a_4492_, v___y_4488_, v___y_4489_);
return v___x_4493_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8___redArg___boxed(lean_object* v_ref_4494_, lean_object* v_msg_4495_, lean_object* v_declHint_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_){
_start:
{
lean_object* v_res_4500_; 
v_res_4500_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8___redArg(v_ref_4494_, v_msg_4495_, v_declHint_4496_, v___y_4497_, v___y_4498_);
lean_dec(v___y_4498_);
lean_dec_ref(v___y_4497_);
lean_dec(v_ref_4494_);
return v_res_4500_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_4502_; lean_object* v___x_4503_; 
v___x_4502_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__0));
v___x_4503_ = l_Lean_stringToMessageData(v___x_4502_);
return v___x_4503_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_ref_4504_, lean_object* v_constName_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_){
_start:
{
lean_object* v___x_4509_; uint8_t v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4509_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___closed__1);
v___x_4510_ = 0;
lean_inc(v_constName_4505_);
v___x_4511_ = l_Lean_MessageData_ofConstName(v_constName_4505_, v___x_4510_);
v___x_4512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4509_);
lean_ctor_set(v___x_4512_, 1, v___x_4511_);
v___x_4513_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkMatchOld_mkAlts_spec__0___closed__1);
v___x_4514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4512_);
lean_ctor_set(v___x_4514_, 1, v___x_4513_);
v___x_4515_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8___redArg(v_ref_4504_, v___x_4514_, v_constName_4505_, v___y_4506_, v___y_4507_);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_ref_4516_, lean_object* v_constName_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_){
_start:
{
lean_object* v_res_4521_; 
v_res_4521_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg(v_ref_4516_, v_constName_4517_, v___y_4518_, v___y_4519_);
lean_dec(v___y_4519_);
lean_dec_ref(v___y_4518_);
lean_dec(v_ref_4516_);
return v_res_4521_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2___redArg(lean_object* v_constName_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_){
_start:
{
lean_object* v___x_4526_; 
v___x_4526_ = l_Lean_Elab_Command_getRef___redArg(v___y_4523_);
if (lean_obj_tag(v___x_4526_) == 0)
{
lean_object* v_a_4527_; lean_object* v___x_4528_; 
v_a_4527_ = lean_ctor_get(v___x_4526_, 0);
lean_inc(v_a_4527_);
lean_dec_ref_known(v___x_4526_, 1);
v___x_4528_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg(v_a_4527_, v_constName_4522_, v___y_4523_, v___y_4524_);
lean_dec(v_a_4527_);
return v___x_4528_;
}
else
{
lean_object* v_a_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4536_; 
lean_dec(v_constName_4522_);
v_a_4529_ = lean_ctor_get(v___x_4526_, 0);
v_isSharedCheck_4536_ = !lean_is_exclusive(v___x_4526_);
if (v_isSharedCheck_4536_ == 0)
{
v___x_4531_ = v___x_4526_;
v_isShared_4532_ = v_isSharedCheck_4536_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_a_4529_);
lean_dec(v___x_4526_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4536_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4534_; 
if (v_isShared_4532_ == 0)
{
v___x_4534_ = v___x_4531_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v_a_4529_);
v___x_4534_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
return v___x_4534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_constName_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_){
_start:
{
lean_object* v_res_4541_; 
v_res_4541_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2___redArg(v_constName_4537_, v___y_4538_, v___y_4539_);
lean_dec(v___y_4539_);
lean_dec_ref(v___y_4538_);
return v_res_4541_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0(lean_object* v_constName_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_){
_start:
{
lean_object* v___x_4546_; lean_object* v_env_4547_; uint8_t v___x_4548_; lean_object* v___x_4549_; 
v___x_4546_ = lean_st_ref_get(v___y_4544_);
v_env_4547_ = lean_ctor_get(v___x_4546_, 0);
lean_inc_ref(v_env_4547_);
lean_dec(v___x_4546_);
v___x_4548_ = 0;
lean_inc(v_constName_4542_);
v___x_4549_ = l_Lean_Environment_find_x3f(v_env_4547_, v_constName_4542_, v___x_4548_);
if (lean_obj_tag(v___x_4549_) == 0)
{
lean_object* v___x_4550_; 
v___x_4550_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2___redArg(v_constName_4542_, v___y_4543_, v___y_4544_);
return v___x_4550_;
}
else
{
lean_object* v_val_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4558_; 
lean_dec(v_constName_4542_);
v_val_4551_ = lean_ctor_get(v___x_4549_, 0);
v_isSharedCheck_4558_ = !lean_is_exclusive(v___x_4549_);
if (v_isSharedCheck_4558_ == 0)
{
v___x_4553_ = v___x_4549_;
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_val_4551_);
lean_dec(v___x_4549_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4558_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4556_; 
if (v_isShared_4554_ == 0)
{
lean_ctor_set_tag(v___x_4553_, 0);
v___x_4556_ = v___x_4553_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_val_4551_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
return v___x_4556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0___boxed(lean_object* v_constName_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_){
_start:
{
lean_object* v_res_4563_; 
v_res_4563_ = l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0(v_constName_4559_, v___y_4560_, v___y_4561_);
lean_dec(v___y_4561_);
lean_dec_ref(v___y_4560_);
return v_res_4563_;
}
}
LEAN_EXPORT lean_object* l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__1(uint8_t v___x_4564_, lean_object* v_x_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_){
_start:
{
if (lean_obj_tag(v_x_4565_) == 0)
{
uint8_t v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4569_ = 1;
v___x_4570_ = lean_box(v___x_4569_);
v___x_4571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4571_, 0, v___x_4570_);
return v___x_4571_;
}
else
{
lean_object* v_head_4572_; lean_object* v_tail_4573_; lean_object* v___y_4575_; uint8_t v_a_4576_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
v_head_4572_ = lean_ctor_get(v_x_4565_, 0);
lean_inc(v_head_4572_);
v_tail_4573_ = lean_ctor_get(v_x_4565_, 1);
lean_inc(v_tail_4573_);
lean_dec_ref_known(v_x_4565_, 2);
v___x_4578_ = lean_unsigned_to_nat(0u);
v___x_4579_ = l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0(v_head_4572_, v___y_4566_, v___y_4567_);
if (lean_obj_tag(v___x_4579_) == 0)
{
lean_object* v_a_4580_; lean_object* v___x_4582_; uint8_t v_isShared_4583_; uint8_t v_isSharedCheck_4595_; 
v_a_4580_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_4595_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_4595_ == 0)
{
v___x_4582_ = v___x_4579_;
v_isShared_4583_ = v_isSharedCheck_4595_;
goto v_resetjp_4581_;
}
else
{
lean_inc(v_a_4580_);
lean_dec(v___x_4579_);
v___x_4582_ = lean_box(0);
v_isShared_4583_ = v_isSharedCheck_4595_;
goto v_resetjp_4581_;
}
v_resetjp_4581_:
{
if (lean_obj_tag(v_a_4580_) == 6)
{
lean_object* v_val_4584_; lean_object* v_numFields_4585_; uint8_t v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4589_; 
v_val_4584_ = lean_ctor_get(v_a_4580_, 0);
lean_inc_ref(v_val_4584_);
lean_dec_ref_known(v_a_4580_, 1);
v_numFields_4585_ = lean_ctor_get(v_val_4584_, 4);
lean_inc(v_numFields_4585_);
lean_dec_ref(v_val_4584_);
v___x_4586_ = lean_nat_dec_eq(v_numFields_4585_, v___x_4578_);
lean_dec(v_numFields_4585_);
v___x_4587_ = lean_box(v___x_4586_);
if (v_isShared_4583_ == 0)
{
lean_ctor_set(v___x_4582_, 0, v___x_4587_);
v___x_4589_ = v___x_4582_;
goto v_reusejp_4588_;
}
else
{
lean_object* v_reuseFailAlloc_4590_; 
v_reuseFailAlloc_4590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4590_, 0, v___x_4587_);
v___x_4589_ = v_reuseFailAlloc_4590_;
goto v_reusejp_4588_;
}
v_reusejp_4588_:
{
v___y_4575_ = v___x_4589_;
v_a_4576_ = v___x_4586_;
goto v___jp_4574_;
}
}
else
{
lean_object* v___x_4591_; lean_object* v___x_4593_; 
lean_dec(v_a_4580_);
v___x_4591_ = lean_box(v___x_4564_);
if (v_isShared_4583_ == 0)
{
lean_ctor_set(v___x_4582_, 0, v___x_4591_);
v___x_4593_ = v___x_4582_;
goto v_reusejp_4592_;
}
else
{
lean_object* v_reuseFailAlloc_4594_; 
v_reuseFailAlloc_4594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4594_, 0, v___x_4591_);
v___x_4593_ = v_reuseFailAlloc_4594_;
goto v_reusejp_4592_;
}
v_reusejp_4592_:
{
v___y_4575_ = v___x_4593_;
v_a_4576_ = v___x_4564_;
goto v___jp_4574_;
}
}
}
}
else
{
lean_object* v_a_4596_; lean_object* v___x_4598_; uint8_t v_isShared_4599_; uint8_t v_isSharedCheck_4603_; 
lean_dec(v_tail_4573_);
v_a_4596_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_4603_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_4603_ == 0)
{
v___x_4598_ = v___x_4579_;
v_isShared_4599_ = v_isSharedCheck_4603_;
goto v_resetjp_4597_;
}
else
{
lean_inc(v_a_4596_);
lean_dec(v___x_4579_);
v___x_4598_ = lean_box(0);
v_isShared_4599_ = v_isSharedCheck_4603_;
goto v_resetjp_4597_;
}
v_resetjp_4597_:
{
lean_object* v___x_4601_; 
if (v_isShared_4599_ == 0)
{
v___x_4601_ = v___x_4598_;
goto v_reusejp_4600_;
}
else
{
lean_object* v_reuseFailAlloc_4602_; 
v_reuseFailAlloc_4602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4602_, 0, v_a_4596_);
v___x_4601_ = v_reuseFailAlloc_4602_;
goto v_reusejp_4600_;
}
v_reusejp_4600_:
{
return v___x_4601_;
}
}
}
v___jp_4574_:
{
if (v_a_4576_ == 0)
{
lean_dec(v_tail_4573_);
return v___y_4575_;
}
else
{
lean_dec_ref(v___y_4575_);
v_x_4565_ = v_tail_4573_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__1___boxed(lean_object* v___x_4604_, lean_object* v_x_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_){
_start:
{
uint8_t v___x_8789__boxed_4609_; lean_object* v_res_4610_; 
v___x_8789__boxed_4609_ = lean_unbox(v___x_4604_);
v_res_4610_ = l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__1(v___x_8789__boxed_4609_, v_x_4605_, v___y_4606_, v___y_4607_);
lean_dec(v___y_4607_);
lean_dec_ref(v___y_4606_);
return v_res_4610_;
}
}
LEAN_EXPORT lean_object* l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0(lean_object* v_declName_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_){
_start:
{
lean_object* v___x_4615_; 
v___x_4615_ = l_Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0(v_declName_4611_, v___y_4612_, v___y_4613_);
if (lean_obj_tag(v___x_4615_) == 0)
{
lean_object* v_a_4616_; lean_object* v___x_4618_; uint8_t v_isShared_4619_; uint8_t v_isSharedCheck_4646_; 
v_a_4616_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4646_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4646_ == 0)
{
v___x_4618_ = v___x_4615_;
v_isShared_4619_ = v_isSharedCheck_4646_;
goto v_resetjp_4617_;
}
else
{
lean_inc(v_a_4616_);
lean_dec(v___x_4615_);
v___x_4618_ = lean_box(0);
v_isShared_4619_ = v_isSharedCheck_4646_;
goto v_resetjp_4617_;
}
v_resetjp_4617_:
{
if (lean_obj_tag(v_a_4616_) == 5)
{
lean_object* v_val_4626_; lean_object* v_toConstantVal_4627_; lean_object* v_numParams_4628_; lean_object* v_numIndices_4629_; lean_object* v_ctors_4630_; uint8_t v_isRec_4631_; uint8_t v_isUnsafe_4632_; lean_object* v_type_4633_; uint8_t v___x_4634_; 
v_val_4626_ = lean_ctor_get(v_a_4616_, 0);
lean_inc_ref(v_val_4626_);
lean_dec_ref_known(v_a_4616_, 1);
v_toConstantVal_4627_ = lean_ctor_get(v_val_4626_, 0);
v_numParams_4628_ = lean_ctor_get(v_val_4626_, 1);
lean_inc(v_numParams_4628_);
v_numIndices_4629_ = lean_ctor_get(v_val_4626_, 2);
lean_inc(v_numIndices_4629_);
v_ctors_4630_ = lean_ctor_get(v_val_4626_, 4);
lean_inc(v_ctors_4630_);
v_isRec_4631_ = lean_ctor_get_uint8(v_val_4626_, sizeof(void*)*6);
v_isUnsafe_4632_ = lean_ctor_get_uint8(v_val_4626_, sizeof(void*)*6 + 1);
v_type_4633_ = lean_ctor_get(v_toConstantVal_4627_, 2);
v___x_4634_ = l_Lean_Expr_isProp(v_type_4633_);
if (v___x_4634_ == 0)
{
lean_object* v___x_4635_; lean_object* v___x_4636_; uint8_t v___x_4637_; 
v___x_4635_ = l_Lean_InductiveVal_numTypeFormers(v_val_4626_);
lean_dec_ref(v_val_4626_);
v___x_4636_ = lean_unsigned_to_nat(1u);
v___x_4637_ = lean_nat_dec_eq(v___x_4635_, v___x_4636_);
lean_dec(v___x_4635_);
if (v___x_4637_ == 0)
{
lean_dec(v_ctors_4630_);
lean_dec(v_numIndices_4629_);
lean_dec(v_numParams_4628_);
goto v___jp_4620_;
}
else
{
lean_object* v___x_4638_; uint8_t v___x_4639_; 
v___x_4638_ = lean_unsigned_to_nat(0u);
v___x_4639_ = lean_nat_dec_eq(v_numIndices_4629_, v___x_4638_);
lean_dec(v_numIndices_4629_);
if (v___x_4639_ == 0)
{
lean_dec(v_ctors_4630_);
lean_dec(v_numParams_4628_);
goto v___jp_4620_;
}
else
{
uint8_t v___x_4640_; 
v___x_4640_ = lean_nat_dec_eq(v_numParams_4628_, v___x_4638_);
lean_dec(v_numParams_4628_);
if (v___x_4640_ == 0)
{
lean_dec(v_ctors_4630_);
goto v___jp_4620_;
}
else
{
uint8_t v___x_4641_; 
v___x_4641_ = l_List_isEmpty___redArg(v_ctors_4630_);
if (v___x_4641_ == 0)
{
if (v_isRec_4631_ == 0)
{
if (v_isUnsafe_4632_ == 0)
{
lean_object* v___x_4642_; 
lean_del_object(v___x_4618_);
v___x_4642_ = l_List_allM___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__1(v_isUnsafe_4632_, v_ctors_4630_, v___y_4612_, v___y_4613_);
return v___x_4642_;
}
else
{
lean_dec(v_ctors_4630_);
goto v___jp_4620_;
}
}
else
{
lean_dec(v_ctors_4630_);
goto v___jp_4620_;
}
}
else
{
lean_dec(v_ctors_4630_);
goto v___jp_4620_;
}
}
}
}
}
else
{
lean_dec(v_ctors_4630_);
lean_dec(v_numIndices_4629_);
lean_dec(v_numParams_4628_);
lean_dec_ref(v_val_4626_);
goto v___jp_4620_;
}
}
else
{
uint8_t v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
lean_del_object(v___x_4618_);
lean_dec(v_a_4616_);
v___x_4643_ = 0;
v___x_4644_ = lean_box(v___x_4643_);
v___x_4645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4645_, 0, v___x_4644_);
return v___x_4645_;
}
v___jp_4620_:
{
uint8_t v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4624_; 
v___x_4621_ = 0;
v___x_4622_ = lean_box(v___x_4621_);
if (v_isShared_4619_ == 0)
{
lean_ctor_set(v___x_4618_, 0, v___x_4622_);
v___x_4624_ = v___x_4618_;
goto v_reusejp_4623_;
}
else
{
lean_object* v_reuseFailAlloc_4625_; 
v_reuseFailAlloc_4625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4625_, 0, v___x_4622_);
v___x_4624_ = v_reuseFailAlloc_4625_;
goto v_reusejp_4623_;
}
v_reusejp_4623_:
{
return v___x_4624_;
}
}
}
}
else
{
lean_object* v_a_4647_; lean_object* v___x_4649_; uint8_t v_isShared_4650_; uint8_t v_isSharedCheck_4654_; 
v_a_4647_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4654_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4654_ == 0)
{
v___x_4649_ = v___x_4615_;
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
else
{
lean_inc(v_a_4647_);
lean_dec(v___x_4615_);
v___x_4649_ = lean_box(0);
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
v_resetjp_4648_:
{
lean_object* v___x_4652_; 
if (v_isShared_4650_ == 0)
{
v___x_4652_ = v___x_4649_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v_a_4647_);
v___x_4652_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
return v___x_4652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0___boxed(lean_object* v_declName_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_){
_start:
{
lean_object* v_res_4659_; 
v_res_4659_ = l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0(v_declName_4655_, v___y_4656_, v___y_4657_);
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
return v_res_4659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__4(lean_object* v_as_4660_, size_t v_i_4661_, size_t v_stop_4662_, lean_object* v_b_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_){
_start:
{
uint8_t v___x_4667_; 
v___x_4667_ = lean_usize_dec_eq(v_i_4661_, v_stop_4662_);
if (v___x_4667_ == 0)
{
lean_object* v___x_4668_; lean_object* v___x_4669_; 
v___x_4668_ = lean_array_uget_borrowed(v_as_4660_, v_i_4661_);
lean_inc(v___x_4668_);
v___x_4669_ = l_Lean_Elab_Command_elabCommand(v___x_4668_, v___y_4664_, v___y_4665_);
if (lean_obj_tag(v___x_4669_) == 0)
{
lean_object* v_a_4670_; size_t v___x_4671_; size_t v___x_4672_; 
v_a_4670_ = lean_ctor_get(v___x_4669_, 0);
lean_inc(v_a_4670_);
lean_dec_ref_known(v___x_4669_, 1);
v___x_4671_ = ((size_t)1ULL);
v___x_4672_ = lean_usize_add(v_i_4661_, v___x_4671_);
v_i_4661_ = v___x_4672_;
v_b_4663_ = v_a_4670_;
goto _start;
}
else
{
return v___x_4669_;
}
}
else
{
lean_object* v___x_4674_; 
v___x_4674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4674_, 0, v_b_4663_);
return v___x_4674_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__4___boxed(lean_object* v_as_4675_, lean_object* v_i_4676_, lean_object* v_stop_4677_, lean_object* v_b_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_){
_start:
{
size_t v_i_boxed_4682_; size_t v_stop_boxed_4683_; lean_object* v_res_4684_; 
v_i_boxed_4682_ = lean_unbox_usize(v_i_4676_);
lean_dec(v_i_4676_);
v_stop_boxed_4683_ = lean_unbox_usize(v_stop_4677_);
lean_dec(v_stop_4677_);
v_res_4684_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__4(v_as_4675_, v_i_boxed_4682_, v_stop_boxed_4683_, v_b_4678_, v___y_4679_, v___y_4680_);
lean_dec(v___y_4680_);
lean_dec_ref(v___y_4679_);
lean_dec_ref(v_as_4675_);
return v_res_4684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1(lean_object* v___x_4687_, lean_object* v_declName_4688_, lean_object* v_declNames_4689_, lean_object* v___x_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v___x_4694_; 
v___x_4694_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_4687_, v___y_4691_, v___y_4692_);
if (lean_obj_tag(v___x_4694_) == 0)
{
lean_object* v_a_4695_; lean_object* v___x_4696_; 
v_a_4695_ = lean_ctor_get(v___x_4694_, 0);
lean_inc(v_a_4695_);
lean_dec_ref_known(v___x_4694_, 1);
lean_inc(v_declName_4688_);
v___x_4696_ = l_Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0(v_declName_4688_, v___y_4691_, v___y_4692_);
if (lean_obj_tag(v___x_4696_) == 0)
{
lean_object* v_a_4697_; lean_object* v___y_4698_; lean_object* v___x_4699_; 
v_a_4697_ = lean_ctor_get(v___x_4696_, 0);
lean_inc(v_a_4697_);
lean_dec_ref_known(v___x_4696_, 1);
lean_inc_ref(v_declNames_4689_);
lean_inc(v_a_4695_);
v___y_4698_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__0___boxed), 11, 4);
lean_closure_set(v___y_4698_, 0, v_a_4697_);
lean_closure_set(v___y_4698_, 1, v_a_4695_);
lean_closure_set(v___y_4698_, 2, v_declNames_4689_);
lean_closure_set(v___y_4698_, 3, v_declName_4688_);
v___x_4699_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___y_4698_, v___y_4691_, v___y_4692_);
if (lean_obj_tag(v___x_4699_) == 0)
{
lean_object* v_a_4700_; size_t v_sz_4701_; size_t v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; 
v_a_4700_ = lean_ctor_get(v___x_4699_, 0);
lean_inc(v_a_4700_);
lean_dec_ref_known(v___x_4699_, 1);
v_sz_4701_ = lean_array_size(v_declNames_4689_);
v___x_4702_ = ((size_t)0ULL);
v___x_4703_ = lean_box_usize(v_sz_4701_);
v___x_4704_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1___boxed__const__1));
v___x_4705_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__1___boxed), 10, 3);
lean_closure_set(v___x_4705_, 0, v___x_4703_);
lean_closure_set(v___x_4705_, 1, v___x_4704_);
lean_closure_set(v___x_4705_, 2, v_declNames_4689_);
v___x_4706_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_4705_, v___y_4691_, v___y_4692_);
if (lean_obj_tag(v___x_4706_) == 0)
{
lean_object* v_a_4707_; lean_object* v___x_4709_; uint8_t v_isShared_4710_; uint8_t v_isSharedCheck_4733_; 
v_a_4707_ = lean_ctor_get(v___x_4706_, 0);
v_isSharedCheck_4733_ = !lean_is_exclusive(v___x_4706_);
if (v_isSharedCheck_4733_ == 0)
{
v___x_4709_ = v___x_4706_;
v_isShared_4710_ = v_isSharedCheck_4733_;
goto v_resetjp_4708_;
}
else
{
lean_inc(v_a_4707_);
lean_dec(v___x_4706_);
v___x_4709_ = lean_box(0);
v_isShared_4710_ = v_isSharedCheck_4733_;
goto v_resetjp_4708_;
}
v_resetjp_4708_:
{
lean_object* v___x_4728_; uint8_t v___x_4729_; 
v___x_4728_ = lean_array_get_size(v_a_4700_);
v___x_4729_ = lean_nat_dec_lt(v___x_4690_, v___x_4728_);
if (v___x_4729_ == 0)
{
lean_dec(v_a_4700_);
goto v___jp_4711_;
}
else
{
lean_object* v___x_4730_; size_t v___x_4731_; lean_object* v___x_4732_; 
v___x_4730_ = lean_box(0);
v___x_4731_ = lean_usize_of_nat(v___x_4728_);
v___x_4732_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__4(v_a_4700_, v___x_4702_, v___x_4731_, v___x_4730_, v___y_4691_, v___y_4692_);
lean_dec(v_a_4700_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_dec_ref_known(v___x_4732_, 1);
goto v___jp_4711_;
}
else
{
lean_del_object(v___x_4709_);
lean_dec(v_a_4707_);
lean_dec(v_a_4695_);
return v___x_4732_;
}
}
v___jp_4711_:
{
uint8_t v_usePartial_4712_; 
v_usePartial_4712_ = lean_ctor_get_uint8(v_a_4695_, sizeof(void*)*3);
lean_dec(v_a_4695_);
if (v_usePartial_4712_ == 0)
{
lean_object* v___x_4713_; size_t v_sz_4714_; lean_object* v___x_4715_; 
lean_del_object(v___x_4709_);
v___x_4713_ = lean_box(0);
v_sz_4714_ = lean_array_size(v_a_4707_);
v___x_4715_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__3(v_usePartial_4712_, v_a_4707_, v_sz_4714_, v___x_4702_, v___x_4713_, v___y_4691_, v___y_4692_);
lean_dec(v_a_4707_);
if (lean_obj_tag(v___x_4715_) == 0)
{
lean_object* v___x_4717_; uint8_t v_isShared_4718_; uint8_t v_isSharedCheck_4722_; 
v_isSharedCheck_4722_ = !lean_is_exclusive(v___x_4715_);
if (v_isSharedCheck_4722_ == 0)
{
lean_object* v_unused_4723_; 
v_unused_4723_ = lean_ctor_get(v___x_4715_, 0);
lean_dec(v_unused_4723_);
v___x_4717_ = v___x_4715_;
v_isShared_4718_ = v_isSharedCheck_4722_;
goto v_resetjp_4716_;
}
else
{
lean_dec(v___x_4715_);
v___x_4717_ = lean_box(0);
v_isShared_4718_ = v_isSharedCheck_4722_;
goto v_resetjp_4716_;
}
v_resetjp_4716_:
{
lean_object* v___x_4720_; 
if (v_isShared_4718_ == 0)
{
lean_ctor_set(v___x_4717_, 0, v___x_4713_);
v___x_4720_ = v___x_4717_;
goto v_reusejp_4719_;
}
else
{
lean_object* v_reuseFailAlloc_4721_; 
v_reuseFailAlloc_4721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4721_, 0, v___x_4713_);
v___x_4720_ = v_reuseFailAlloc_4721_;
goto v_reusejp_4719_;
}
v_reusejp_4719_:
{
return v___x_4720_;
}
}
}
else
{
return v___x_4715_;
}
}
else
{
lean_object* v___x_4724_; lean_object* v___x_4726_; 
lean_dec(v_a_4707_);
v___x_4724_ = lean_box(0);
if (v_isShared_4710_ == 0)
{
lean_ctor_set(v___x_4709_, 0, v___x_4724_);
v___x_4726_ = v___x_4709_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v___x_4724_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
return v___x_4726_;
}
}
}
}
}
else
{
lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4741_; 
lean_dec(v_a_4700_);
lean_dec(v_a_4695_);
v_a_4734_ = lean_ctor_get(v___x_4706_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4706_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4736_ = v___x_4706_;
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_dec(v___x_4706_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v___x_4739_; 
if (v_isShared_4737_ == 0)
{
v___x_4739_ = v___x_4736_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v_a_4734_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
}
else
{
lean_object* v_a_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4749_; 
lean_dec(v_a_4695_);
lean_dec_ref(v_declNames_4689_);
v_a_4742_ = lean_ctor_get(v___x_4699_, 0);
v_isSharedCheck_4749_ = !lean_is_exclusive(v___x_4699_);
if (v_isSharedCheck_4749_ == 0)
{
v___x_4744_ = v___x_4699_;
v_isShared_4745_ = v_isSharedCheck_4749_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_a_4742_);
lean_dec(v___x_4699_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4749_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
lean_object* v___x_4747_; 
if (v_isShared_4745_ == 0)
{
v___x_4747_ = v___x_4744_;
goto v_reusejp_4746_;
}
else
{
lean_object* v_reuseFailAlloc_4748_; 
v_reuseFailAlloc_4748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4748_, 0, v_a_4742_);
v___x_4747_ = v_reuseFailAlloc_4748_;
goto v_reusejp_4746_;
}
v_reusejp_4746_:
{
return v___x_4747_;
}
}
}
}
else
{
lean_object* v_a_4750_; lean_object* v___x_4752_; uint8_t v_isShared_4753_; uint8_t v_isSharedCheck_4757_; 
lean_dec(v_a_4695_);
lean_dec_ref(v_declNames_4689_);
lean_dec(v_declName_4688_);
v_a_4750_ = lean_ctor_get(v___x_4696_, 0);
v_isSharedCheck_4757_ = !lean_is_exclusive(v___x_4696_);
if (v_isSharedCheck_4757_ == 0)
{
v___x_4752_ = v___x_4696_;
v_isShared_4753_ = v_isSharedCheck_4757_;
goto v_resetjp_4751_;
}
else
{
lean_inc(v_a_4750_);
lean_dec(v___x_4696_);
v___x_4752_ = lean_box(0);
v_isShared_4753_ = v_isSharedCheck_4757_;
goto v_resetjp_4751_;
}
v_resetjp_4751_:
{
lean_object* v___x_4755_; 
if (v_isShared_4753_ == 0)
{
v___x_4755_ = v___x_4752_;
goto v_reusejp_4754_;
}
else
{
lean_object* v_reuseFailAlloc_4756_; 
v_reuseFailAlloc_4756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4756_, 0, v_a_4750_);
v___x_4755_ = v_reuseFailAlloc_4756_;
goto v_reusejp_4754_;
}
v_reusejp_4754_:
{
return v___x_4755_;
}
}
}
}
else
{
lean_object* v_a_4758_; lean_object* v___x_4760_; uint8_t v_isShared_4761_; uint8_t v_isSharedCheck_4765_; 
lean_dec_ref(v_declNames_4689_);
lean_dec(v_declName_4688_);
v_a_4758_ = lean_ctor_get(v___x_4694_, 0);
v_isSharedCheck_4765_ = !lean_is_exclusive(v___x_4694_);
if (v_isSharedCheck_4765_ == 0)
{
v___x_4760_ = v___x_4694_;
v_isShared_4761_ = v_isSharedCheck_4765_;
goto v_resetjp_4759_;
}
else
{
lean_inc(v_a_4758_);
lean_dec(v___x_4694_);
v___x_4760_ = lean_box(0);
v_isShared_4761_ = v_isSharedCheck_4765_;
goto v_resetjp_4759_;
}
v_resetjp_4759_:
{
lean_object* v___x_4763_; 
if (v_isShared_4761_ == 0)
{
v___x_4763_ = v___x_4760_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4764_; 
v_reuseFailAlloc_4764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4764_, 0, v_a_4758_);
v___x_4763_ = v_reuseFailAlloc_4764_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
return v___x_4763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1___boxed(lean_object* v___x_4766_, lean_object* v_declName_4767_, lean_object* v_declNames_4768_, lean_object* v___x_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1(v___x_4766_, v_declName_4767_, v_declNames_4768_, v___x_4769_, v___y_4770_, v___y_4771_);
lean_dec(v___y_4771_);
lean_dec_ref(v___y_4770_);
lean_dec(v___x_4769_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance(lean_object* v_declNames_4774_, lean_object* v_a_4775_, lean_object* v_a_4776_){
_start:
{
lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v_declName_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; uint8_t v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___f_4786_; lean_object* v___x_4787_; 
v___x_4778_ = lean_box(0);
v___x_4779_ = lean_unsigned_to_nat(0u);
v_declName_4780_ = lean_array_get_borrowed(v___x_4778_, v_declNames_4774_, v___x_4779_);
v___x_4781_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0));
v___x_4782_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__1_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_));
v___x_4783_ = 1;
v___x_4784_ = lean_box(v___x_4783_);
lean_inc_n(v_declName_4780_, 2);
v___x_4785_ = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkContext___boxed), 11, 4);
lean_closure_set(v___x_4785_, 0, v___x_4781_);
lean_closure_set(v___x_4785_, 1, v___x_4782_);
lean_closure_set(v___x_4785_, 2, v_declName_4780_);
lean_closure_set(v___x_4785_, 3, v___x_4784_);
lean_inc_ref(v_declNames_4774_);
v___f_4786_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___lam__1___boxed), 7, 4);
lean_closure_set(v___f_4786_, 0, v___x_4785_);
lean_closure_set(v___f_4786_, 1, v_declName_4780_);
lean_closure_set(v___f_4786_, 2, v_declNames_4774_);
lean_closure_set(v___f_4786_, 3, v___x_4779_);
v___x_4787_ = l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___redArg(v_declNames_4774_, v___f_4786_, v_a_4775_, v_a_4776_);
lean_dec_ref(v_declNames_4774_);
return v___x_4787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance___boxed(lean_object* v_declNames_4788_, lean_object* v_a_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_){
_start:
{
lean_object* v_res_4792_; 
v_res_4792_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance(v_declNames_4788_, v_a_4789_, v_a_4790_);
lean_dec(v_a_4790_);
lean_dec_ref(v_a_4789_);
return v_res_4792_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_4793_, lean_object* v_constName_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_){
_start:
{
lean_object* v___x_4798_; 
v___x_4798_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2___redArg(v_constName_4794_, v___y_4795_, v___y_4796_);
return v___x_4798_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_4799_, lean_object* v_constName_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_){
_start:
{
lean_object* v_res_4804_; 
v_res_4804_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2(v_00_u03b1_4799_, v_constName_4800_, v___y_4801_, v___y_4802_);
lean_dec(v___y_4802_);
lean_dec_ref(v___y_4801_);
return v_res_4804_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b1_4805_, lean_object* v_ref_4806_, lean_object* v_constName_4807_, lean_object* v___y_4808_, lean_object* v___y_4809_){
_start:
{
lean_object* v___x_4811_; 
v___x_4811_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___redArg(v_ref_4806_, v_constName_4807_, v___y_4808_, v___y_4809_);
return v___x_4811_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b1_4812_, lean_object* v_ref_4813_, lean_object* v_constName_4814_, lean_object* v___y_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_){
_start:
{
lean_object* v_res_4818_; 
v_res_4818_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6(v_00_u03b1_4812_, v_ref_4813_, v_constName_4814_, v___y_4815_, v___y_4816_);
lean_dec(v___y_4816_);
lean_dec_ref(v___y_4815_);
lean_dec(v_ref_4813_);
return v_res_4818_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8(lean_object* v_00_u03b1_4819_, lean_object* v_ref_4820_, lean_object* v_msg_4821_, lean_object* v_declHint_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_){
_start:
{
lean_object* v___x_4826_; 
v___x_4826_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8___redArg(v_ref_4820_, v_msg_4821_, v_declHint_4822_, v___y_4823_, v___y_4824_);
return v___x_4826_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8___boxed(lean_object* v_00_u03b1_4827_, lean_object* v_ref_4828_, lean_object* v_msg_4829_, lean_object* v_declHint_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_){
_start:
{
lean_object* v_res_4834_; 
v_res_4834_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8(v_00_u03b1_4827_, v_ref_4828_, v_msg_4829_, v_declHint_4830_, v___y_4831_, v___y_4832_);
lean_dec(v___y_4832_);
lean_dec_ref(v___y_4831_);
lean_dec(v_ref_4828_);
return v_res_4834_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10(lean_object* v_msg_4835_, lean_object* v_declHint_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_){
_start:
{
lean_object* v___x_4840_; 
v___x_4840_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___redArg(v_msg_4835_, v_declHint_4836_, v___y_4838_);
return v___x_4840_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10___boxed(lean_object* v_msg_4841_, lean_object* v_declHint_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_){
_start:
{
lean_object* v_res_4846_; 
v_res_4846_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__9_spec__10(v_msg_4841_, v_declHint_4842_, v___y_4843_, v___y_4844_);
lean_dec(v___y_4844_);
lean_dec_ref(v___y_4843_);
return v_res_4846_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10(lean_object* v_00_u03b1_4847_, lean_object* v_ref_4848_, lean_object* v_msg_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_){
_start:
{
lean_object* v___x_4853_; 
v___x_4853_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10___redArg(v_ref_4848_, v_msg_4849_, v___y_4850_, v___y_4851_);
return v___x_4853_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03b1_4854_, lean_object* v_ref_4855_, lean_object* v_msg_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_){
_start:
{
lean_object* v_res_4860_; 
v_res_4860_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10(v_00_u03b1_4854_, v_ref_4855_, v_msg_4856_, v___y_4857_, v___y_4858_);
lean_dec(v___y_4858_);
lean_dec_ref(v___y_4857_);
lean_dec(v_ref_4855_);
return v_res_4860_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13(lean_object* v_msgData_4861_, lean_object* v___y_4862_, lean_object* v___y_4863_){
_start:
{
lean_object* v___x_4865_; 
v___x_4865_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___redArg(v_msgData_4861_, v___y_4863_);
return v___x_4865_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13___boxed(lean_object* v_msgData_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__13(v_msgData_4866_, v___y_4867_, v___y_4868_);
lean_dec(v___y_4868_);
lean_dec_ref(v___y_4867_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12(lean_object* v_00_u03b1_4871_, lean_object* v_msg_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_){
_start:
{
lean_object* v___x_4876_; 
v___x_4876_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12___redArg(v_msg_4872_, v___y_4873_, v___y_4874_);
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12___boxed(lean_object* v_00_u03b1_4877_, lean_object* v_msg_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_){
_start:
{
lean_object* v_res_4882_; 
v_res_4882_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12(v_00_u03b1_4877_, v_msg_4878_, v___y_4879_, v___y_4880_);
lean_dec(v___y_4880_);
lean_dec_ref(v___y_4879_);
return v_res_4882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14(lean_object* v_msgData_4883_, lean_object* v_macroStack_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_){
_start:
{
lean_object* v___x_4888_; 
v___x_4888_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14___redArg(v_msgData_4883_, v_macroStack_4884_, v___y_4886_);
return v___x_4888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14___boxed(lean_object* v_msgData_4889_, lean_object* v_macroStack_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_){
_start:
{
lean_object* v_res_4894_; 
v_res_4894_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_isEnumType___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance_spec__0_spec__0_spec__2_spec__6_spec__8_spec__10_spec__12_spec__14(v_msgData_4889_, v_macroStack_4890_, v___y_4891_, v___y_4892_);
lean_dec(v___y_4892_);
lean_dec_ref(v___y_4891_);
return v_res_4894_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1___redArg(lean_object* v_declName_4895_, lean_object* v___y_4896_){
_start:
{
lean_object* v___x_4898_; lean_object* v_env_4899_; uint8_t v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; 
v___x_4898_ = lean_st_ref_get(v___y_4896_);
v_env_4899_ = lean_ctor_get(v___x_4898_, 0);
lean_inc_ref(v_env_4899_);
lean_dec(v___x_4898_);
v___x_4900_ = l_Lean_isInductiveCore(v_env_4899_, v_declName_4895_);
v___x_4901_ = lean_box(v___x_4900_);
v___x_4902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4902_, 0, v___x_4901_);
return v___x_4902_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1___redArg___boxed(lean_object* v_declName_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_){
_start:
{
lean_object* v_res_4906_; 
v_res_4906_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1___redArg(v_declName_4903_, v___y_4904_);
lean_dec(v___y_4904_);
return v_res_4906_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1(lean_object* v_declName_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_){
_start:
{
lean_object* v___x_4911_; 
v___x_4911_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1___redArg(v_declName_4907_, v___y_4909_);
return v___x_4911_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1___boxed(lean_object* v_declName_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_){
_start:
{
lean_object* v_res_4916_; 
v_res_4916_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1(v_declName_4912_, v___y_4913_, v___y_4914_);
lean_dec(v___y_4914_);
lean_dec_ref(v___y_4913_);
return v_res_4916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___lam__0(uint8_t v_____do__lift_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_){
_start:
{
if (v_____do__lift_4917_ == 0)
{
uint8_t v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; 
v___x_4921_ = 1;
v___x_4922_ = lean_box(v___x_4921_);
v___x_4923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4923_, 0, v___x_4922_);
return v___x_4923_;
}
else
{
uint8_t v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; 
v___x_4924_ = 0;
v___x_4925_ = lean_box(v___x_4924_);
v___x_4926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4926_, 0, v___x_4925_);
return v___x_4926_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___lam__0___boxed(lean_object* v_____do__lift_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_){
_start:
{
uint8_t v_____do__lift_1824__boxed_4931_; lean_object* v_res_4932_; 
v_____do__lift_1824__boxed_4931_ = lean_unbox(v_____do__lift_4927_);
v_res_4932_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___lam__0(v_____do__lift_1824__boxed_4931_, v___y_4928_, v___y_4929_);
lean_dec(v___y_4929_);
lean_dec_ref(v___y_4928_);
return v_res_4932_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__2(lean_object* v_as_4933_, size_t v_i_4934_, size_t v_stop_4935_, lean_object* v___y_4936_, lean_object* v___y_4937_){
_start:
{
uint8_t v___x_4939_; 
v___x_4939_ = lean_usize_dec_eq(v_i_4934_, v_stop_4935_);
if (v___x_4939_ == 0)
{
lean_object* v___x_4940_; lean_object* v___x_4941_; 
v___x_4940_ = lean_array_uget_borrowed(v_as_4933_, v_i_4934_);
lean_inc(v___x_4940_);
v___x_4941_ = l_Lean_isInductive___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__1___redArg(v___x_4940_, v___y_4937_);
if (lean_obj_tag(v___x_4941_) == 0)
{
lean_object* v_a_4942_; lean_object* v___x_4944_; uint8_t v_isShared_4945_; uint8_t v_isSharedCheck_4955_; 
v_a_4942_ = lean_ctor_get(v___x_4941_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v___x_4941_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4944_ = v___x_4941_;
v_isShared_4945_ = v_isSharedCheck_4955_;
goto v_resetjp_4943_;
}
else
{
lean_inc(v_a_4942_);
lean_dec(v___x_4941_);
v___x_4944_ = lean_box(0);
v_isShared_4945_ = v_isSharedCheck_4955_;
goto v_resetjp_4943_;
}
v_resetjp_4943_:
{
uint8_t v___x_4946_; 
v___x_4946_ = lean_unbox(v_a_4942_);
lean_dec(v_a_4942_);
if (v___x_4946_ == 0)
{
uint8_t v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4950_; 
v___x_4947_ = 1;
v___x_4948_ = lean_box(v___x_4947_);
if (v_isShared_4945_ == 0)
{
lean_ctor_set(v___x_4944_, 0, v___x_4948_);
v___x_4950_ = v___x_4944_;
goto v_reusejp_4949_;
}
else
{
lean_object* v_reuseFailAlloc_4951_; 
v_reuseFailAlloc_4951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4951_, 0, v___x_4948_);
v___x_4950_ = v_reuseFailAlloc_4951_;
goto v_reusejp_4949_;
}
v_reusejp_4949_:
{
return v___x_4950_;
}
}
else
{
size_t v___x_4952_; size_t v___x_4953_; 
lean_del_object(v___x_4944_);
v___x_4952_ = ((size_t)1ULL);
v___x_4953_ = lean_usize_add(v_i_4934_, v___x_4952_);
v_i_4934_ = v___x_4953_;
goto _start;
}
}
}
else
{
return v___x_4941_;
}
}
else
{
uint8_t v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; 
v___x_4956_ = 0;
v___x_4957_ = lean_box(v___x_4956_);
v___x_4958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4958_, 0, v___x_4957_);
return v___x_4958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__2___boxed(lean_object* v_as_4959_, lean_object* v_i_4960_, lean_object* v_stop_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_){
_start:
{
size_t v_i_boxed_4965_; size_t v_stop_boxed_4966_; lean_object* v_res_4967_; 
v_i_boxed_4965_ = lean_unbox_usize(v_i_4960_);
lean_dec(v_i_4960_);
v_stop_boxed_4966_ = lean_unbox_usize(v_stop_4961_);
lean_dec(v_stop_4961_);
v_res_4967_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__2(v_as_4959_, v_i_boxed_4965_, v_stop_boxed_4966_, v___y_4962_, v___y_4963_);
lean_dec(v___y_4963_);
lean_dec_ref(v___y_4962_);
lean_dec_ref(v_as_4959_);
return v_res_4967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__0(lean_object* v_as_4968_, size_t v_sz_4969_, size_t v_i_4970_, lean_object* v_b_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_){
_start:
{
uint8_t v___x_4975_; 
v___x_4975_ = lean_usize_dec_lt(v_i_4970_, v_sz_4969_);
if (v___x_4975_ == 0)
{
lean_object* v___x_4976_; 
v___x_4976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4976_, 0, v_b_4971_);
return v___x_4976_;
}
else
{
lean_object* v___x_4977_; lean_object* v_a_4978_; lean_object* v___x_4979_; 
v___x_4977_ = lean_box(0);
v_a_4978_ = lean_array_uget_borrowed(v_as_4968_, v_i_4970_);
lean_inc(v_a_4978_);
v___x_4979_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstance(v_a_4978_, v___y_4972_, v___y_4973_);
if (lean_obj_tag(v___x_4979_) == 0)
{
size_t v___x_4980_; size_t v___x_4981_; 
lean_dec_ref_known(v___x_4979_, 1);
v___x_4980_ = ((size_t)1ULL);
v___x_4981_ = lean_usize_add(v_i_4970_, v___x_4980_);
v_i_4970_ = v___x_4981_;
v_b_4971_ = v___x_4977_;
goto _start;
}
else
{
return v___x_4979_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__0___boxed(lean_object* v_as_4983_, lean_object* v_sz_4984_, lean_object* v_i_4985_, lean_object* v_b_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_){
_start:
{
size_t v_sz_boxed_4990_; size_t v_i_boxed_4991_; lean_object* v_res_4992_; 
v_sz_boxed_4990_ = lean_unbox_usize(v_sz_4984_);
lean_dec(v_sz_4984_);
v_i_boxed_4991_ = lean_unbox_usize(v_i_4985_);
lean_dec(v_i_4985_);
v_res_4992_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__0(v_as_4983_, v_sz_boxed_4990_, v_i_boxed_4991_, v_b_4986_, v___y_4987_, v___y_4988_);
lean_dec(v___y_4988_);
lean_dec_ref(v___y_4987_);
lean_dec_ref(v_as_4983_);
return v_res_4992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler(lean_object* v_declNames_4993_, lean_object* v_a_4994_, lean_object* v_a_4995_){
_start:
{
uint8_t v_a_4998_; lean_object* v___y_5032_; lean_object* v___x_5036_; lean_object* v___x_5037_; uint8_t v___x_5038_; 
v___x_5036_ = lean_unsigned_to_nat(0u);
v___x_5037_ = lean_array_get_size(v_declNames_4993_);
v___x_5038_ = lean_nat_dec_lt(v___x_5036_, v___x_5037_);
if (v___x_5038_ == 0)
{
lean_object* v___x_5039_; 
v___x_5039_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___lam__0(v___x_5038_, v_a_4994_, v_a_4995_);
v___y_5032_ = v___x_5039_;
goto v___jp_5031_;
}
else
{
if (v___x_5038_ == 0)
{
v_a_4998_ = v___x_5038_;
goto v___jp_4997_;
}
else
{
size_t v___x_5040_; size_t v___x_5041_; lean_object* v___x_5042_; 
v___x_5040_ = ((size_t)0ULL);
v___x_5041_ = lean_usize_of_nat(v___x_5037_);
v___x_5042_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__2(v_declNames_4993_, v___x_5040_, v___x_5041_, v_a_4994_, v_a_4995_);
if (lean_obj_tag(v___x_5042_) == 0)
{
lean_object* v_a_5043_; uint8_t v___x_5044_; lean_object* v___x_5045_; 
v_a_5043_ = lean_ctor_get(v___x_5042_, 0);
lean_inc(v_a_5043_);
lean_dec_ref_known(v___x_5042_, 1);
v___x_5044_ = lean_unbox(v_a_5043_);
lean_dec(v_a_5043_);
v___x_5045_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___lam__0(v___x_5044_, v_a_4994_, v_a_4995_);
v___y_5032_ = v___x_5045_;
goto v___jp_5031_;
}
else
{
lean_dec_ref(v_declNames_4993_);
return v___x_5042_;
}
}
}
v___jp_4997_:
{
lean_object* v___x_4999_; lean_object* v___x_5000_; 
v___x_4999_ = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_groupByMutualBlock___boxed), 4, 1);
lean_closure_set(v___x_4999_, 0, v_declNames_4993_);
v___x_5000_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_4999_, v_a_4994_, v_a_4995_);
if (lean_obj_tag(v___x_5000_) == 0)
{
lean_object* v_a_5001_; lean_object* v___x_5002_; size_t v_sz_5003_; size_t v___x_5004_; lean_object* v___x_5005_; 
v_a_5001_ = lean_ctor_get(v___x_5000_, 0);
lean_inc(v_a_5001_);
lean_dec_ref_known(v___x_5000_, 1);
v___x_5002_ = lean_box(0);
v_sz_5003_ = lean_array_size(v_a_5001_);
v___x_5004_ = ((size_t)0ULL);
v___x_5005_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler_spec__0(v_a_5001_, v_sz_5003_, v___x_5004_, v___x_5002_, v_a_4994_, v_a_4995_);
lean_dec(v_a_5001_);
if (lean_obj_tag(v___x_5005_) == 0)
{
lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5013_; 
v_isSharedCheck_5013_ = !lean_is_exclusive(v___x_5005_);
if (v_isSharedCheck_5013_ == 0)
{
lean_object* v_unused_5014_; 
v_unused_5014_ = lean_ctor_get(v___x_5005_, 0);
lean_dec(v_unused_5014_);
v___x_5007_ = v___x_5005_;
v_isShared_5008_ = v_isSharedCheck_5013_;
goto v_resetjp_5006_;
}
else
{
lean_dec(v___x_5005_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5013_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v___x_5009_; lean_object* v___x_5011_; 
v___x_5009_ = lean_box(v_a_4998_);
if (v_isShared_5008_ == 0)
{
lean_ctor_set(v___x_5007_, 0, v___x_5009_);
v___x_5011_ = v___x_5007_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5012_; 
v_reuseFailAlloc_5012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5012_, 0, v___x_5009_);
v___x_5011_ = v_reuseFailAlloc_5012_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
return v___x_5011_;
}
}
}
else
{
lean_object* v_a_5015_; lean_object* v___x_5017_; uint8_t v_isShared_5018_; uint8_t v_isSharedCheck_5022_; 
v_a_5015_ = lean_ctor_get(v___x_5005_, 0);
v_isSharedCheck_5022_ = !lean_is_exclusive(v___x_5005_);
if (v_isSharedCheck_5022_ == 0)
{
v___x_5017_ = v___x_5005_;
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
else
{
lean_inc(v_a_5015_);
lean_dec(v___x_5005_);
v___x_5017_ = lean_box(0);
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
v_resetjp_5016_:
{
lean_object* v___x_5020_; 
if (v_isShared_5018_ == 0)
{
v___x_5020_ = v___x_5017_;
goto v_reusejp_5019_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v_a_5015_);
v___x_5020_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5019_;
}
v_reusejp_5019_:
{
return v___x_5020_;
}
}
}
}
else
{
lean_object* v_a_5023_; lean_object* v___x_5025_; uint8_t v_isShared_5026_; uint8_t v_isSharedCheck_5030_; 
v_a_5023_ = lean_ctor_get(v___x_5000_, 0);
v_isSharedCheck_5030_ = !lean_is_exclusive(v___x_5000_);
if (v_isSharedCheck_5030_ == 0)
{
v___x_5025_ = v___x_5000_;
v_isShared_5026_ = v_isSharedCheck_5030_;
goto v_resetjp_5024_;
}
else
{
lean_inc(v_a_5023_);
lean_dec(v___x_5000_);
v___x_5025_ = lean_box(0);
v_isShared_5026_ = v_isSharedCheck_5030_;
goto v_resetjp_5024_;
}
v_resetjp_5024_:
{
lean_object* v___x_5028_; 
if (v_isShared_5026_ == 0)
{
v___x_5028_ = v___x_5025_;
goto v_reusejp_5027_;
}
else
{
lean_object* v_reuseFailAlloc_5029_; 
v_reuseFailAlloc_5029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5029_, 0, v_a_5023_);
v___x_5028_ = v_reuseFailAlloc_5029_;
goto v_reusejp_5027_;
}
v_reusejp_5027_:
{
return v___x_5028_;
}
}
}
}
v___jp_5031_:
{
lean_object* v_a_5033_; uint8_t v___x_5034_; 
v_a_5033_ = lean_ctor_get(v___y_5032_, 0);
v___x_5034_ = lean_unbox(v_a_5033_);
if (v___x_5034_ == 0)
{
lean_dec_ref(v_declNames_4993_);
return v___y_5032_;
}
else
{
uint8_t v___x_5035_; 
lean_inc(v_a_5033_);
lean_dec_ref(v___y_5032_);
v___x_5035_ = lean_unbox(v_a_5033_);
lean_dec(v_a_5033_);
v_a_4998_ = v___x_5035_;
goto v___jp_4997_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___boxed(lean_object* v_declNames_5046_, lean_object* v_a_5047_, lean_object* v_a_5048_, lean_object* v_a_5049_){
_start:
{
lean_object* v_res_5050_; 
v_res_5050_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceHandler(v_declNames_5046_, v_a_5047_, v_a_5048_);
lean_dec(v_a_5048_);
lean_dec_ref(v_a_5047_);
return v_res_5050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; 
v___x_5087_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqHeader___closed__0));
v___x_5088_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__0_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_));
v___x_5089_ = l_Lean_Elab_registerDerivingHandler(v___x_5087_, v___x_5088_);
if (lean_obj_tag(v___x_5089_) == 0)
{
lean_object* v___x_5090_; uint8_t v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; 
lean_dec_ref_known(v___x_5089_, 1);
v___x_5090_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___closed__0));
v___x_5091_ = 0;
v___x_5092_ = ((lean_object*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn___closed__14_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_));
v___x_5093_ = l_Lean_registerTraceClass(v___x_5090_, v___x_5091_, v___x_5092_);
return v___x_5093_;
}
else
{
return v___x_5089_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2____boxed(lean_object* v_a_5094_){
_start:
{
lean_object* v_res_5095_; 
v_res_5095_ = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_();
return v_res_5095_;
}
}
lean_object* runtime_initialize_Lean_Data_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_OfFn(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Deriving_BEq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_OfFn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_3666926342____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_deriving_beq_linear__construction__threshold = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_deriving_beq_linear__construction__threshold);
lean_dec_ref(res);
res = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_initFn_00___x40_Lean_Elab_Deriving_BEq_993467269____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Deriving_BEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Options(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin);
lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* initialize_Init_Data_Array_OfFn(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Deriving_BEq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_OfFn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_BEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Deriving_BEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Deriving_BEq(builtin);
}
#ifdef __cplusplus
}
#endif
