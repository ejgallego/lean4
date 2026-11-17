// Lean compiler output
// Module: Lean.Meta.Sym.SymM
// Imports: public import Lean.Meta.Sym.AlphaShareCommon public import Lean.Meta.CongrTheorems public import Lean.Meta.Transform import Lean.Meta.WHNF import Lean.Meta.AppBuilder
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
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_getStructureInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_mkProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Sym_isUnfoldReducibleCandidate(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_isProj___boxed(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqI(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sym"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(230, 3, 132, 38, 134, 149, 222, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 1, 190, 45, 30, 82, 81, 176)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__3_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "check invariants"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__3_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__3_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__4_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__3_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__4_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__4_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(243, 157, 148, 19, 62, 70, 252, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(254, 148, 146, 121, 82, 137, 202, 245)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(81, 198, 26, 180, 162, 99, 75, 86)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_sym_debug;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "issues"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(230, 3, 132, 38, 134, 149, 222, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 90, 109, 68, 195, 255, 174, 185)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__3_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__3_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__3_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__4_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__3_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__4_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__4_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__4_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(215, 84, 158, 71, 120, 158, 242, 63)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "SymM"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(62, 120, 93, 45, 98, 183, 49, 234)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__9_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(135, 107, 0, 166, 43, 148, 190, 162)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__9_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__9_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__10_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__9_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(250, 253, 133, 58, 166, 2, 152, 17)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__10_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__10_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__11_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__10_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(254, 230, 149, 24, 177, 0, 168, 74)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__11_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__11_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__12_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__11_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(247, 70, 210, 197, 64, 19, 25, 35)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__12_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__12_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__13_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__13_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__13_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__14_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__12_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__13_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 119, 254, 183, 253, 57, 73, 33)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__14_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__14_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__15_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__15_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__15_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__16_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__14_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__15_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(247, 29, 178, 129, 13, 184, 131, 91)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__16_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__16_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__17_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__16_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(138, 150, 153, 124, 1, 171, 141, 81)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__17_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__17_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__18_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__17_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(46, 97, 109, 246, 28, 99, 14, 68)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__18_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__18_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__19_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__18_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(231, 39, 117, 214, 12, 215, 126, 174)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__19_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__19_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__20_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__19_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(46, 149, 253, 44, 239, 131, 52, 47)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__20_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__20_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__21_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__21_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__22_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__22_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__22_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__23_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__23_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__24_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__24_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__24_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__25_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__25_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__26_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__26_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_SymExtensionStateSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_SymExtensionStateSpec___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_SymExtensionStateSpec___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_SymExtensionStateSpec = (const lean_object*)&l_Lean_Meta_Sym_SymExtensionStateSpec___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtensionState;
static const lean_string_object l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension(lean_object*);
static const lean_array_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_symExtensionsRef;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_registerSymExtension___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "failed to register `Sym` extension, extensions can only be registered during initialization"};
static const lean_object* l_Lean_Meta_Sym_registerSymExtension___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_registerSymExtension___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_registerSymExtension___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_registerSymExtension___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_registerSymExtension___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_registerSymExtension___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_registerSymExtension(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_registerSymExtension___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_SymExtensions_mkInitialStates_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_SymExtensions_mkInitialStates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtensions_mkInitialStates();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtensions_mkInitialStates___boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_instInhabitedProofInstArgInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_instInhabitedProofInstArgInfo_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedProofInstArgInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instInhabitedProofInstArgInfo_default = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedProofInstArgInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instInhabitedProofInstArgInfo = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedProofInstArgInfo_default___closed__0_value;
static const lean_array_object l_Lean_Meta_Sym_instInhabitedProofInstInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_instInhabitedProofInstInfo_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedProofInstInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instInhabitedProofInstInfo_default = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedProofInstInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instInhabitedProofInstInfo = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedProofInstInfo_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_none_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_none_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_fixedPrefix_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_fixedPrefix_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_interlaced_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_interlaced_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_congrTheorem_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_congrTheorem_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_instInhabitedConfig_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_instInhabitedConfig_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instInhabitedConfig_default = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instInhabitedConfig = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedConfig_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_unfoldReducibleStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_unfoldReducibleStep___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_unfoldReducibleStep___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducibleStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducibleStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducible___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducible___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__8(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_unfoldReducible___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_unfoldReducible___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_unfoldReducible___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_unfoldReducible___closed__0_value;
static const lean_closure_object l_Lean_Meta_Sym_unfoldReducible___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_unfoldReducibleStep___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_unfoldReducible___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_unfoldReducible___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_foldProjs___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_foldProjs___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_foldProjs___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__2;
static const lean_string_object l_Lean_Meta_Sym_foldProjs___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "found `Expr.proj` with invalid field index `"};
static const lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Sym_foldProjs___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__4;
static const lean_string_object l_Lean_Meta_Sym_foldProjs___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Sym_foldProjs___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__6;
static const lean_string_object l_Lean_Meta_Sym_foldProjs___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "found `Expr.proj` but `"};
static const lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Sym_foldProjs___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__8;
static const lean_string_object l_Lean_Meta_Sym_foldProjs___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` is not marked as structure"};
static const lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Sym_foldProjs___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__10;
static const lean_string_object l_Lean_Meta_Sym_foldProjs___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__11 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Sym_foldProjs___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___closed__12 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___lam__1___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_foldProjs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_isProj___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_foldProjs___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___closed__0_value;
static const lean_closure_object l_Lean_Meta_Sym_foldProjs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_foldProjs___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_foldProjs___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___closed__1_value;
static const lean_closure_object l_Lean_Meta_Sym_foldProjs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_foldProjs___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_foldProjs___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_foldProjs___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__2;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__3_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__5;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__6_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__7_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__8 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__9;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__6_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__10_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__11 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__13;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Ordering"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__14 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__15 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__14_value),LEAN_SCALAR_PTR_LITERAL(226, 44, 125, 228, 251, 150, 72, 72)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__15_value),LEAN_SCALAR_PTR_LITERAL(103, 150, 86, 2, 28, 163, 164, 77)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__16 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Sym_SymM_run_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Sym_SymM_run_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1(lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_SymM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_SymM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_SymM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_SymM_run___redArg___closed__1;
static const lean_string_object l_Lean_Meta_Sym_SymM_run___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Meta.Sym.SymM"};
static const lean_object* l_Lean_Meta_Sym_SymM_run___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_SymM_run___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_SymM_run___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.Sym.SymM.run"};
static const lean_object* l_Lean_Meta_Sym_SymM_run___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_SymM_run___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_SymM_run___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_Sym_SymM_run___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_SymM_run___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Sym_SymM_run___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_SymM_run___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getSharedExprs___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getSharedExprs___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getSharedExprs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getSharedExprs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getTrueExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getTrueExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isTrueExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isTrueExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getFalseExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getFalseExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isFalseExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isFalseExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolTrueExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolTrueExpr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolTrueExpr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolTrueExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolTrueExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolFalseExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolFalseExpr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolFalseExpr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolFalseExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolFalseExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getNatZeroExpr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getNatZeroExpr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getNatZeroExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getNatZeroExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getOrderingEqExpr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getOrderingEqExpr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getOrderingEqExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getOrderingEqExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIntExpr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIntExpr___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIntExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIntExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_runShareCommonM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_runShareCommonM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutShareCommonChecks___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_withoutShareCommonChecks___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_withoutShareCommonChecks___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_withoutShareCommonChecks___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_withoutShareCommonChecks___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutShareCommonChecks___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutShareCommonChecks(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Meta.Sym.shareCommonWithoutChecks"};
static const lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isMaxShared___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isMaxShared___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isMaxShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isMaxShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "internal error, expression has loose bound variables at `shareCommon`"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommon___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommon___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonInc___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonInc___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonInc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLetValueS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLetValueS_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_share(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_share___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDebugEnabled___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDebugEnabled___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDebugEnabled(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDebugEnabled___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_reportIssue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "issue"};
static const lean_object* l_Lean_Meta_Sym_reportIssue___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_reportIssue___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_reportIssue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_reportIssue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 190, 118, 187, 186, 110, 108, 236)}};
static const lean_object* l_Lean_Meta_Sym_reportIssue___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_reportIssue___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_reportIssue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_reportIssue___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportIssue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportIssueIfVerbose(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportIssueIfVerbose___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Sym.reportIssueIfVerbose"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__7;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "reportIssueIfVerbose"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__8 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(118, 254, 137, 8, 139, 198, 210, 169)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__8_value),LEAN_SCALAR_PTR_LITERAL(82, 43, 55, 72, 125, 82, 73, 158)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(243, 157, 148, 19, 62, 70, 252, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 165, 116, 130, 189, 215, 142, 41)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__11 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__12 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__13 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__14 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__15 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__15_value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__16 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__17 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__17_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__19 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__19_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__21 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__22 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__22_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__23 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__23_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__24;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__25_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(243, 157, 148, 19, 62, 70, 252, 55)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__25 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__25_value)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__26 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__26_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__27 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__27_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__28 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__28_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MessageData"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__29 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__29_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__30;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__29_value),LEAN_SCALAR_PTR_LITERAL(117, 193, 162, 252, 67, 31, 191, 159)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__31 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__31_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__32_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__29_value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__32 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__32_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__33 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__33_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__32_value)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__34 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__34_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__35 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__35_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__33_value),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__35_value)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__36 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__36_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__37 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__37_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termM!_"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__38 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__38_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__39_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__38_value),LEAN_SCALAR_PTR_LITERAL(241, 254, 249, 246, 41, 222, 210, 184)}};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__39 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__39_value;
static const lean_string_object l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "m!"};
static const lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__40 = (const lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__40_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "doElemReportIssue!__"};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__0 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(243, 157, 148, 19, 62, 70, 252, 55)}};
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 149, 154, 203, 214, 83, 169, 43)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__2 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__3 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reportIssue!"};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__4 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__4_value)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__5 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__6 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__7 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__7_value;
static const lean_string_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__8 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__9 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__9_value;
static const lean_string_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__10 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__10_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__10_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__11 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__11_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__12 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__12_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__9_value),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__12_value)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__13 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__13_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__7_value),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__13_value),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__12_value)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__14 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__14_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__3_value),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__5_value),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__14_value)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__15 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__15_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__15_value)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__16 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__16_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_doElemReportIssue_x21____ = (const lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportIssue_x21______1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportIssue_x21______1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportDbgIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportDbgIssue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Sym.reportDbgIssue"};
static const lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__1;
static const lean_string_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "reportDbgIssue"};
static const lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(118, 254, 137, 8, 139, 198, 210, 169)}};
static const lean_ctor_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(100, 136, 27, 81, 109, 98, 120, 61)}};
static const lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(243, 157, 148, 19, 62, 70, 252, 55)}};
static const lean_ctor_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(37, 182, 25, 82, 56, 230, 186, 254)}};
static const lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "doElemReportDbgIssue!__"};
static const lean_object* l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__0 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__5_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__6_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__7_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(243, 157, 148, 19, 62, 70, 252, 55)}};
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 81, 179, 30, 51, 192, 195, 77)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "reportDbgIssue!"};
static const lean_object* l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__2 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__2_value)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__3 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__3_value),((lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__3_value),((lean_object*)&l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__14_value)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__4 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__4_value)}};
static const lean_object* l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__5 = (const lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_doElemReportDbgIssue_x21____ = (const lean_object*)&l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportDbgIssue_x21______1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportDbgIssue_x21______1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIssues___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIssues___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIssues(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIssues___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDefEqI___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDefEqI___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDefEqI(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDefEqI___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__9;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__11;
static const lean_closure_object l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__12_value;
static const lean_closure_object l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__13_value;
static const lean_closure_object l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__14_value;
static const lean_closure_object l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__16;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__17;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__19;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__20;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__21;
static const lean_string_object l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "<SymM default value>"};
static const lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__22 = (const lean_object*)&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__22_value;
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__23;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_instInhabitedSymM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_instInhabitedSymM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymM(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtension_getState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtension_getState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtension_getState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtension_getState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_55_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__2_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_));
v___x_56_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__4_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_));
v___x_57_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__8_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_));
v___x_58_ = l_Lean_Option_register___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4__spec__0(v___x_55_, v___x_56_, v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4____boxed(lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_();
return v_res_60_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__21_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_114_ = lean_unsigned_to_nat(2410647589u);
v___x_115_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__20_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_));
v___x_116_ = l_Lean_Name_num___override(v___x_115_, v___x_114_);
return v___x_116_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__23_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_118_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__22_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_));
v___x_119_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__21_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__21_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__21_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_);
v___x_120_ = l_Lean_Name_str___override(v___x_119_, v___x_118_);
return v___x_120_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__25_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_122_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__24_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_));
v___x_123_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__23_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__23_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__23_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_);
v___x_124_ = l_Lean_Name_str___override(v___x_123_, v___x_122_);
return v___x_124_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__26_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_unsigned_to_nat(2u);
v___x_126_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__25_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__25_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__25_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_);
v___x_127_ = l_Lean_Name_num___override(v___x_126_, v___x_125_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_129_; uint8_t v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_129_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_));
v___x_130_ = 0;
v___x_131_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__26_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__26_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__26_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_);
v___x_132_ = l_Lean_registerTraceClass(v___x_129_, v___x_130_, v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2____boxed(lean_object* v_a_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_();
return v_res_134_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymExtensionState(void){
_start:
{
lean_object* v___x_138_; lean_object* v_snd_139_; 
v___x_138_ = ((lean_object*)(l_Lean_Meta_Sym_SymExtensionStateSpec));
v_snd_139_ = lean_ctor_get(v___x_138_, 1);
lean_inc(v_snd_139_);
return v_snd_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0(){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___closed__1));
v___x_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0___boxed(lean_object* v___y_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___lam__0();
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg(){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___closed__1));
return v___x_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg___boxed(lean_object* v___dummy_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg();
return v_res_155_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Lean_Meta_Sym_instInhabitedSymExtension_default___redArg();
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension_default(lean_object* v_00_u03c3_157_){
_start:
{
lean_object* v___x_158_; 
v___x_158_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0, &l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0_once, _init_l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension___redArg(){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0, &l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0_once, _init_l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension___redArg___boxed(lean_object* v___dummy_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lean_Meta_Sym_instInhabitedSymExtension___redArg();
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymExtension(lean_object* v_a_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0, &l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0_once, _init_l_Lean_Meta_Sym_instInhabitedSymExtension_default___closed__0);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__0_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2_));
v___x_169_ = lean_st_mk_ref(v___x_168_);
v___x_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2____boxed(lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2_();
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1___redArg(lean_object* v_ext_173_){
_start:
{
lean_inc_ref(v_ext_173_);
return v_ext_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1___redArg___boxed(lean_object* v_ext_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1___redArg(v_ext_174_);
lean_dec_ref(v_ext_174_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1(lean_object* v_00_u03c3_176_, lean_object* v_ext_177_){
_start:
{
lean_inc_ref(v_ext_177_);
return v_ext_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1___boxed(lean_object* v_00_u03c3_178_, lean_object* v_ext_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_registerSymExtension_unsafe__1(v_00_u03c3_178_, v_ext_179_);
lean_dec_ref(v_ext_179_);
return v_res_180_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_registerSymExtension___redArg___closed__1(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = ((lean_object*)(l_Lean_Meta_Sym_registerSymExtension___redArg___closed__0));
v___x_183_ = lean_mk_io_user_error(v___x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_registerSymExtension___redArg(lean_object* v_mkInitial_184_){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = l_Lean_initializing();
if (v___x_186_ == 0)
{
lean_object* v___x_187_; lean_object* v___x_188_; 
lean_dec_ref(v_mkInitial_184_);
v___x_187_ = lean_obj_once(&l_Lean_Meta_Sym_registerSymExtension___redArg___closed__1, &l_Lean_Meta_Sym_registerSymExtension___redArg___closed__1_once, _init_l_Lean_Meta_Sym_registerSymExtension___redArg___closed__1);
v___x_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
return v___x_188_;
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_189_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_symExtensionsRef;
v___x_190_ = lean_st_ref_get(v___x_189_);
v___x_191_ = lean_array_get_size(v___x_190_);
lean_dec(v___x_190_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v_mkInitial_184_);
v___x_193_ = lean_st_ref_take(v___x_189_);
lean_inc_ref(v___x_192_);
v___x_194_ = lean_array_push(v___x_193_, v___x_192_);
v___x_195_ = lean_st_ref_put(v___x_189_, v___x_194_);
v___x_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_196_, 0, v___x_192_);
return v___x_196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_registerSymExtension___redArg___boxed(lean_object* v_mkInitial_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lean_Meta_Sym_registerSymExtension___redArg(v_mkInitial_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_registerSymExtension(lean_object* v_00_u03c3_200_, lean_object* v_mkInitial_201_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_Meta_Sym_registerSymExtension___redArg(v_mkInitial_201_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_registerSymExtension___boxed(lean_object* v_00_u03c3_204_, lean_object* v_mkInitial_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lean_Meta_Sym_registerSymExtension(v_00_u03c3_204_, v_mkInitial_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_SymExtensions_mkInitialStates_spec__0(size_t v_sz_208_, size_t v_i_209_, lean_object* v_bs_210_){
_start:
{
uint8_t v___x_212_; 
v___x_212_ = lean_usize_dec_lt(v_i_209_, v_sz_208_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; 
v___x_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_213_, 0, v_bs_210_);
return v___x_213_;
}
else
{
lean_object* v_v_214_; lean_object* v_mkInitial_215_; lean_object* v___x_216_; lean_object* v_bs_x27_217_; lean_object* v___x_218_; 
v_v_214_ = lean_array_uget_borrowed(v_bs_210_, v_i_209_);
v_mkInitial_215_ = lean_ctor_get(v_v_214_, 1);
lean_inc_ref(v_mkInitial_215_);
v___x_216_ = lean_unsigned_to_nat(0u);
v_bs_x27_217_ = lean_array_uset(v_bs_210_, v_i_209_, v___x_216_);
v___x_218_ = lean_apply_1(v_mkInitial_215_, lean_box(0));
if (lean_obj_tag(v___x_218_) == 0)
{
lean_object* v_a_219_; size_t v___x_220_; size_t v___x_221_; lean_object* v___x_222_; 
v_a_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_a_219_);
lean_dec_ref_known(v___x_218_, 1);
v___x_220_ = ((size_t)1ULL);
v___x_221_ = lean_usize_add(v_i_209_, v___x_220_);
v___x_222_ = lean_array_uset(v_bs_x27_217_, v_i_209_, v_a_219_);
v_i_209_ = v___x_221_;
v_bs_210_ = v___x_222_;
goto _start;
}
else
{
lean_object* v_a_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_231_; 
lean_dec_ref(v_bs_x27_217_);
v_a_224_ = lean_ctor_get(v___x_218_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_231_ == 0)
{
v___x_226_ = v___x_218_;
v_isShared_227_ = v_isSharedCheck_231_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_a_224_);
lean_dec(v___x_218_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_231_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_229_; 
if (v_isShared_227_ == 0)
{
v___x_229_ = v___x_226_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_a_224_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_SymExtensions_mkInitialStates_spec__0___boxed(lean_object* v_sz_232_, lean_object* v_i_233_, lean_object* v_bs_234_, lean_object* v___y_235_){
_start:
{
size_t v_sz_boxed_236_; size_t v_i_boxed_237_; lean_object* v_res_238_; 
v_sz_boxed_236_ = lean_unbox_usize(v_sz_232_);
lean_dec(v_sz_232_);
v_i_boxed_237_ = lean_unbox_usize(v_i_233_);
lean_dec(v_i_233_);
v_res_238_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_SymExtensions_mkInitialStates_spec__0(v_sz_boxed_236_, v_i_boxed_237_, v_bs_234_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtensions_mkInitialStates(){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; size_t v_sz_242_; size_t v___x_243_; lean_object* v___x_244_; 
v___x_240_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_symExtensionsRef;
v___x_241_ = lean_st_ref_get(v___x_240_);
v_sz_242_ = lean_array_size(v___x_241_);
v___x_243_ = ((size_t)0ULL);
v___x_244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Sym_SymExtensions_mkInitialStates_spec__0(v_sz_242_, v___x_243_, v___x_241_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtensions_mkInitialStates___boxed(lean_object* v_a_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_Meta_Sym_SymExtensions_mkInitialStates();
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorIdx___impl(lean_object* v_x_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_obj_tag_nat(v_x_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorIdx___impl___boxed(lean_object* v_x_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_Meta_Sym_CongrInfo_ctorIdx___impl(v_x_257_);
lean_dec(v_x_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(lean_object* v_t_259_, lean_object* v_k_260_){
_start:
{
switch(lean_obj_tag(v_t_259_))
{
case 0:
{
return v_k_260_;
}
case 1:
{
lean_object* v_prefixSize_261_; lean_object* v_suffixSize_262_; lean_object* v___x_263_; 
v_prefixSize_261_ = lean_ctor_get(v_t_259_, 0);
lean_inc(v_prefixSize_261_);
v_suffixSize_262_ = lean_ctor_get(v_t_259_, 1);
lean_inc(v_suffixSize_262_);
lean_dec_ref_known(v_t_259_, 2);
v___x_263_ = lean_apply_2(v_k_260_, v_prefixSize_261_, v_suffixSize_262_);
return v___x_263_;
}
default: 
{
lean_object* v_rewritable_264_; lean_object* v___x_265_; 
v_rewritable_264_ = lean_ctor_get(v_t_259_, 0);
lean_inc_ref(v_rewritable_264_);
lean_dec(v_t_259_);
v___x_265_ = lean_apply_1(v_k_260_, v_rewritable_264_);
return v___x_265_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorElim(lean_object* v_motive_266_, lean_object* v_ctorIdx_267_, lean_object* v_t_268_, lean_object* v_h_269_, lean_object* v_k_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(v_t_268_, v_k_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_ctorElim___boxed(lean_object* v_motive_272_, lean_object* v_ctorIdx_273_, lean_object* v_t_274_, lean_object* v_h_275_, lean_object* v_k_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_Meta_Sym_CongrInfo_ctorElim(v_motive_272_, v_ctorIdx_273_, v_t_274_, v_h_275_, v_k_276_);
lean_dec(v_ctorIdx_273_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_none_elim___redArg(lean_object* v_t_278_, lean_object* v_none_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(v_t_278_, v_none_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_none_elim(lean_object* v_motive_281_, lean_object* v_t_282_, lean_object* v_h_283_, lean_object* v_none_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(v_t_282_, v_none_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_fixedPrefix_elim___redArg(lean_object* v_t_286_, lean_object* v_fixedPrefix_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(v_t_286_, v_fixedPrefix_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_fixedPrefix_elim(lean_object* v_motive_289_, lean_object* v_t_290_, lean_object* v_h_291_, lean_object* v_fixedPrefix_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(v_t_290_, v_fixedPrefix_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_interlaced_elim___redArg(lean_object* v_t_294_, lean_object* v_interlaced_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(v_t_294_, v_interlaced_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_interlaced_elim(lean_object* v_motive_297_, lean_object* v_t_298_, lean_object* v_h_299_, lean_object* v_interlaced_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(v_t_298_, v_interlaced_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_congrTheorem_elim___redArg(lean_object* v_t_302_, lean_object* v_congrTheorem_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(v_t_302_, v_congrTheorem_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_CongrInfo_congrTheorem_elim(lean_object* v_motive_305_, lean_object* v_t_306_, lean_object* v_h_307_, lean_object* v_congrTheorem_308_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lean_Meta_Sym_CongrInfo_ctorElim___redArg(v_t_306_, v_congrTheorem_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducibleStep(lean_object* v_e_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l_Lean_Expr_getAppFn(v_e_316_);
if (lean_obj_tag(v___x_322_) == 4)
{
lean_object* v_declName_323_; lean_object* v___x_324_; lean_object* v_env_325_; uint8_t v___x_326_; 
v_declName_323_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_declName_323_);
lean_dec_ref_known(v___x_322_, 2);
v___x_324_ = lean_st_ref_get(v_a_320_);
v_env_325_ = lean_ctor_get(v___x_324_, 0);
lean_inc_ref(v_env_325_);
lean_dec(v___x_324_);
v___x_326_ = l_Lean_Meta_Sym_isUnfoldReducibleCandidate(v_env_325_, v_declName_323_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; 
lean_dec_ref(v_e_316_);
v___x_327_ = ((lean_object*)(l_Lean_Meta_Sym_unfoldReducibleStep___closed__0));
v___x_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
return v___x_328_;
}
else
{
uint8_t v___x_329_; lean_object* v___x_330_; 
v___x_329_ = 0;
v___x_330_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_316_, v___x_329_, v_a_317_, v_a_318_, v_a_319_, v_a_320_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_350_; 
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_350_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_350_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_350_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
if (lean_obj_tag(v_a_331_) == 1)
{
lean_object* v_val_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_345_; 
v_val_335_ = lean_ctor_get(v_a_331_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v_a_331_);
if (v_isSharedCheck_345_ == 0)
{
v___x_337_ = v_a_331_;
v_isShared_338_ = v_isSharedCheck_345_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_val_335_);
lean_dec(v_a_331_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_345_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_val_335_);
v___x_340_ = v_reuseFailAlloc_344_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_342_; 
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_340_);
v___x_342_ = v___x_333_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
else
{
lean_object* v___x_346_; lean_object* v___x_348_; 
lean_dec(v_a_331_);
v___x_346_ = ((lean_object*)(l_Lean_Meta_Sym_unfoldReducibleStep___closed__0));
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_346_);
v___x_348_ = v___x_333_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_346_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
else
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_358_; 
v_a_351_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_358_ == 0)
{
v___x_353_ = v___x_330_;
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_330_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_a_351_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
}
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; 
lean_dec_ref(v___x_322_);
lean_dec_ref(v_e_316_);
v___x_359_ = ((lean_object*)(l_Lean_Meta_Sym_unfoldReducibleStep___closed__0));
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducibleStep___boxed(lean_object* v_e_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lean_Meta_Sym_unfoldReducibleStep(v_e_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
lean_dec(v_a_363_);
lean_dec_ref(v_a_362_);
return v_res_367_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg___lam__0(lean_object* v_env_368_, lean_object* v_e_369_){
_start:
{
if (lean_obj_tag(v_e_369_) == 4)
{
lean_object* v_declName_370_; uint8_t v___x_371_; 
v_declName_370_ = lean_ctor_get(v_e_369_, 0);
lean_inc(v_declName_370_);
lean_dec_ref_known(v_e_369_, 2);
v___x_371_ = l_Lean_Meta_Sym_isUnfoldReducibleCandidate(v_env_368_, v_declName_370_);
return v___x_371_;
}
else
{
uint8_t v___x_372_; 
lean_dec_ref(v_e_369_);
lean_dec_ref(v_env_368_);
v___x_372_ = 0;
return v___x_372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg___lam__0___boxed(lean_object* v_env_373_, lean_object* v_e_374_){
_start:
{
uint8_t v_res_375_; lean_object* v_r_376_; 
v_res_375_ = l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg___lam__0(v_env_373_, v_e_374_);
v_r_376_ = lean_box(v_res_375_);
return v_r_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg(lean_object* v_e_377_, lean_object* v_a_378_){
_start:
{
lean_object* v___x_380_; lean_object* v_env_381_; lean_object* v___f_382_; lean_object* v___x_383_; 
v___x_380_ = lean_st_ref_get(v_a_378_);
v_env_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc_ref(v_env_381_);
lean_dec(v___x_380_);
v___f_382_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_382_, 0, v_env_381_);
v___x_383_ = lean_find_expr(v___f_382_, v_e_377_);
lean_dec_ref(v___f_382_);
if (lean_obj_tag(v___x_383_) == 0)
{
uint8_t v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_384_ = 0;
v___x_385_ = lean_box(v___x_384_);
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
return v___x_386_;
}
else
{
lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_395_; 
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; 
v_unused_396_ = lean_ctor_get(v___x_383_, 0);
lean_dec(v_unused_396_);
v___x_388_ = v___x_383_;
v_isShared_389_ = v_isSharedCheck_395_;
goto v_resetjp_387_;
}
else
{
lean_dec(v___x_383_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_395_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
uint8_t v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_390_ = 1;
v___x_391_ = lean_box(v___x_390_);
if (v_isShared_389_ == 0)
{
lean_ctor_set_tag(v___x_388_, 0);
lean_ctor_set(v___x_388_, 0, v___x_391_);
v___x_393_ = v___x_388_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_391_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg___boxed(lean_object* v_e_397_, lean_object* v_a_398_, lean_object* v_a_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg(v_e_397_, v_a_398_);
lean_dec(v_a_398_);
lean_dec_ref(v_e_397_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget(lean_object* v_e_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg(v_e_401_, v_a_403_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleTarget___boxed(lean_object* v_e_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lean_Meta_Sym_isUnfoldReducibleTarget(v_e_406_, v_a_407_, v_a_408_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec_ref(v_e_406_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducible___lam__0(lean_object* v_e_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_417_, 0, v_e_411_);
v___x_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducible___lam__0___boxed(lean_object* v_e_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_Meta_Sym_unfoldReducible___lam__0(v_e_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___lam__0(lean_object* v_00_u03b1_426_, lean_object* v_x_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_433_ = lean_apply_1(v_x_427_, lean_box(0));
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___lam__0___boxed(lean_object* v_00_u03b1_435_, lean_object* v_x_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___lam__0(v_00_u03b1_435_, v_x_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
return v_res_442_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15___redArg(lean_object* v_a_443_, lean_object* v_x_444_){
_start:
{
if (lean_obj_tag(v_x_444_) == 0)
{
uint8_t v___x_445_; 
v___x_445_ = 0;
return v___x_445_;
}
else
{
lean_object* v_key_446_; lean_object* v_tail_447_; uint8_t v___x_448_; 
v_key_446_ = lean_ctor_get(v_x_444_, 0);
v_tail_447_ = lean_ctor_get(v_x_444_, 2);
v___x_448_ = l_Lean_ExprStructEq_beq(v_key_446_, v_a_443_);
if (v___x_448_ == 0)
{
v_x_444_ = v_tail_447_;
goto _start;
}
else
{
return v___x_448_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15___redArg___boxed(lean_object* v_a_450_, lean_object* v_x_451_){
_start:
{
uint8_t v_res_452_; lean_object* v_r_453_; 
v_res_452_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15___redArg(v_a_450_, v_x_451_);
lean_dec(v_x_451_);
lean_dec_ref(v_a_450_);
v_r_453_ = lean_box(v_res_452_);
return v_r_453_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18___redArg(lean_object* v_x_454_, lean_object* v_x_455_){
_start:
{
if (lean_obj_tag(v_x_455_) == 0)
{
return v_x_454_;
}
else
{
lean_object* v_key_456_; lean_object* v_value_457_; lean_object* v_tail_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_481_; 
v_key_456_ = lean_ctor_get(v_x_455_, 0);
v_value_457_ = lean_ctor_get(v_x_455_, 1);
v_tail_458_ = lean_ctor_get(v_x_455_, 2);
v_isSharedCheck_481_ = !lean_is_exclusive(v_x_455_);
if (v_isSharedCheck_481_ == 0)
{
v___x_460_ = v_x_455_;
v_isShared_461_ = v_isSharedCheck_481_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_tail_458_);
lean_inc(v_value_457_);
lean_inc(v_key_456_);
lean_dec(v_x_455_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_481_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; uint64_t v___x_463_; uint64_t v___x_464_; uint64_t v___x_465_; uint64_t v_fold_466_; uint64_t v___x_467_; uint64_t v___x_468_; uint64_t v___x_469_; size_t v___x_470_; size_t v___x_471_; size_t v___x_472_; size_t v___x_473_; size_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_477_; 
v___x_462_ = lean_array_get_size(v_x_454_);
v___x_463_ = l_Lean_ExprStructEq_hash(v_key_456_);
v___x_464_ = 32ULL;
v___x_465_ = lean_uint64_shift_right(v___x_463_, v___x_464_);
v_fold_466_ = lean_uint64_xor(v___x_463_, v___x_465_);
v___x_467_ = 16ULL;
v___x_468_ = lean_uint64_shift_right(v_fold_466_, v___x_467_);
v___x_469_ = lean_uint64_xor(v_fold_466_, v___x_468_);
v___x_470_ = lean_uint64_to_usize(v___x_469_);
v___x_471_ = lean_usize_of_nat(v___x_462_);
v___x_472_ = ((size_t)1ULL);
v___x_473_ = lean_usize_sub(v___x_471_, v___x_472_);
v___x_474_ = lean_usize_land(v___x_470_, v___x_473_);
v___x_475_ = lean_array_uget_borrowed(v_x_454_, v___x_474_);
lean_inc(v___x_475_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 2, v___x_475_);
v___x_477_ = v___x_460_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_key_456_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_value_457_);
lean_ctor_set(v_reuseFailAlloc_480_, 2, v___x_475_);
v___x_477_ = v_reuseFailAlloc_480_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
lean_object* v___x_478_; 
v___x_478_ = lean_array_uset(v_x_454_, v___x_474_, v___x_477_);
v_x_454_ = v___x_478_;
v_x_455_ = v_tail_458_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17___redArg(lean_object* v_i_482_, lean_object* v_source_483_, lean_object* v_target_484_){
_start:
{
lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_485_ = lean_array_get_size(v_source_483_);
v___x_486_ = lean_nat_dec_lt(v_i_482_, v___x_485_);
if (v___x_486_ == 0)
{
lean_dec_ref(v_source_483_);
lean_dec(v_i_482_);
return v_target_484_;
}
else
{
lean_object* v_es_487_; lean_object* v___x_488_; lean_object* v_source_489_; lean_object* v_target_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_es_487_ = lean_array_fget(v_source_483_, v_i_482_);
v___x_488_ = lean_box(0);
v_source_489_ = lean_array_fset(v_source_483_, v_i_482_, v___x_488_);
v_target_490_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18___redArg(v_target_484_, v_es_487_);
v___x_491_ = lean_unsigned_to_nat(1u);
v___x_492_ = lean_nat_add(v_i_482_, v___x_491_);
lean_dec(v_i_482_);
v_i_482_ = v___x_492_;
v_source_483_ = v_source_489_;
v_target_484_ = v_target_490_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16___redArg(lean_object* v_data_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v_nbuckets_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_495_ = lean_array_get_size(v_data_494_);
v___x_496_ = lean_unsigned_to_nat(2u);
v_nbuckets_497_ = lean_nat_mul(v___x_495_, v___x_496_);
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = lean_box(0);
v___x_500_ = lean_mk_array(v_nbuckets_497_, v___x_499_);
v___x_501_ = lean_array_propagate_mark(v_data_494_, v___x_500_);
v___x_502_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17___redArg(v___x_498_, v_data_494_, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__17___redArg(lean_object* v_a_503_, lean_object* v_b_504_, lean_object* v_x_505_){
_start:
{
if (lean_obj_tag(v_x_505_) == 0)
{
lean_dec(v_b_504_);
lean_dec_ref(v_a_503_);
return v_x_505_;
}
else
{
lean_object* v_key_506_; lean_object* v_value_507_; lean_object* v_tail_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_520_; 
v_key_506_ = lean_ctor_get(v_x_505_, 0);
v_value_507_ = lean_ctor_get(v_x_505_, 1);
v_tail_508_ = lean_ctor_get(v_x_505_, 2);
v_isSharedCheck_520_ = !lean_is_exclusive(v_x_505_);
if (v_isSharedCheck_520_ == 0)
{
v___x_510_ = v_x_505_;
v_isShared_511_ = v_isSharedCheck_520_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_tail_508_);
lean_inc(v_value_507_);
lean_inc(v_key_506_);
lean_dec(v_x_505_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_520_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
uint8_t v___x_512_; 
v___x_512_ = l_Lean_ExprStructEq_beq(v_key_506_, v_a_503_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; lean_object* v___x_515_; 
v___x_513_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__17___redArg(v_a_503_, v_b_504_, v_tail_508_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 2, v___x_513_);
v___x_515_ = v___x_510_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_key_506_);
lean_ctor_set(v_reuseFailAlloc_516_, 1, v_value_507_);
lean_ctor_set(v_reuseFailAlloc_516_, 2, v___x_513_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
else
{
lean_object* v___x_518_; 
lean_dec(v_value_507_);
lean_dec(v_key_506_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 1, v_b_504_);
lean_ctor_set(v___x_510_, 0, v_a_503_);
v___x_518_ = v___x_510_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_a_503_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_b_504_);
lean_ctor_set(v_reuseFailAlloc_519_, 2, v_tail_508_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10___redArg(lean_object* v_m_521_, lean_object* v_a_522_, lean_object* v_b_523_){
_start:
{
lean_object* v_size_524_; lean_object* v_buckets_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_568_; 
v_size_524_ = lean_ctor_get(v_m_521_, 0);
v_buckets_525_ = lean_ctor_get(v_m_521_, 1);
v_isSharedCheck_568_ = !lean_is_exclusive(v_m_521_);
if (v_isSharedCheck_568_ == 0)
{
v___x_527_ = v_m_521_;
v_isShared_528_ = v_isSharedCheck_568_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_buckets_525_);
lean_inc(v_size_524_);
lean_dec(v_m_521_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_568_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_529_; uint64_t v___x_530_; uint64_t v___x_531_; uint64_t v___x_532_; uint64_t v_fold_533_; uint64_t v___x_534_; uint64_t v___x_535_; uint64_t v___x_536_; size_t v___x_537_; size_t v___x_538_; size_t v___x_539_; size_t v___x_540_; size_t v___x_541_; lean_object* v_bkt_542_; uint8_t v___x_543_; 
v___x_529_ = lean_array_get_size(v_buckets_525_);
v___x_530_ = l_Lean_ExprStructEq_hash(v_a_522_);
v___x_531_ = 32ULL;
v___x_532_ = lean_uint64_shift_right(v___x_530_, v___x_531_);
v_fold_533_ = lean_uint64_xor(v___x_530_, v___x_532_);
v___x_534_ = 16ULL;
v___x_535_ = lean_uint64_shift_right(v_fold_533_, v___x_534_);
v___x_536_ = lean_uint64_xor(v_fold_533_, v___x_535_);
v___x_537_ = lean_uint64_to_usize(v___x_536_);
v___x_538_ = lean_usize_of_nat(v___x_529_);
v___x_539_ = ((size_t)1ULL);
v___x_540_ = lean_usize_sub(v___x_538_, v___x_539_);
v___x_541_ = lean_usize_land(v___x_537_, v___x_540_);
v_bkt_542_ = lean_array_uget_borrowed(v_buckets_525_, v___x_541_);
v___x_543_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15___redArg(v_a_522_, v_bkt_542_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; lean_object* v_size_x27_545_; lean_object* v___x_546_; lean_object* v_buckets_x27_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_544_ = lean_unsigned_to_nat(1u);
v_size_x27_545_ = lean_nat_add(v_size_524_, v___x_544_);
lean_dec(v_size_524_);
lean_inc(v_bkt_542_);
v___x_546_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_546_, 0, v_a_522_);
lean_ctor_set(v___x_546_, 1, v_b_523_);
lean_ctor_set(v___x_546_, 2, v_bkt_542_);
v_buckets_x27_547_ = lean_array_uset(v_buckets_525_, v___x_541_, v___x_546_);
v___x_548_ = lean_unsigned_to_nat(4u);
v___x_549_ = lean_nat_mul(v_size_x27_545_, v___x_548_);
v___x_550_ = lean_unsigned_to_nat(3u);
v___x_551_ = lean_nat_div(v___x_549_, v___x_550_);
lean_dec(v___x_549_);
v___x_552_ = lean_array_get_size(v_buckets_x27_547_);
v___x_553_ = lean_nat_dec_le(v___x_551_, v___x_552_);
lean_dec(v___x_551_);
if (v___x_553_ == 0)
{
lean_object* v_val_554_; lean_object* v___x_556_; 
v_val_554_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16___redArg(v_buckets_x27_547_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 1, v_val_554_);
lean_ctor_set(v___x_527_, 0, v_size_x27_545_);
v___x_556_ = v___x_527_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_size_x27_545_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_val_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
else
{
lean_object* v___x_559_; 
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 1, v_buckets_x27_547_);
lean_ctor_set(v___x_527_, 0, v_size_x27_545_);
v___x_559_ = v___x_527_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_size_x27_545_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_buckets_x27_547_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
else
{
lean_object* v___x_561_; lean_object* v_buckets_x27_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_566_; 
lean_inc(v_bkt_542_);
v___x_561_ = lean_box(0);
v_buckets_x27_562_ = lean_array_uset(v_buckets_525_, v___x_541_, v___x_561_);
v___x_563_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__17___redArg(v_a_522_, v_b_523_, v_bkt_542_);
v___x_564_ = lean_array_uset(v_buckets_x27_562_, v___x_541_, v___x_563_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 1, v___x_564_);
v___x_566_ = v___x_527_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_size_524_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v___x_564_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__2(lean_object* v_a_569_, lean_object* v_e_570_, lean_object* v_a_571_){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_573_ = lean_st_ref_take(v_a_569_);
v___x_574_ = lean_box(0);
v___x_575_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10___redArg(v___x_573_, v_e_570_, v_a_571_);
v___x_576_ = lean_st_ref_put(v_a_569_, v___x_575_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__2___boxed(lean_object* v_a_577_, lean_object* v_e_578_, lean_object* v_a_579_, lean_object* v___y_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__2(v_a_577_, v_e_578_, v_a_579_);
lean_dec(v_a_577_);
return v_res_581_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__3(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = l_Lean_maxRecDepthErrorMessage;
v___x_588_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
return v___x_588_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__4(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__3);
v___x_590_ = l_Lean_MessageData_ofFormat(v___x_589_);
return v___x_590_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__5(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_591_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__4);
v___x_592_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__2));
v___x_593_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
lean_ctor_set(v___x_593_, 1, v___x_591_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg(lean_object* v_ref_594_){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_596_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___closed__5);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_ref_594_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
v___x_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg___boxed(lean_object* v_ref_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg(v_ref_599_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9___redArg(lean_object* v_x_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v___y_610_; lean_object* v_toCold_619_; lean_object* v_currRecDepth_620_; lean_object* v_ref_621_; uint16_t v_optionFlags_622_; uint8_t v_suppressElabErrors_623_; uint8_t v_checkDeprecated_624_; uint8_t v_isRecordingDeps_625_; lean_object* v_maxRecDepth_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v_toCold_619_ = lean_ctor_get(v___y_606_, 0);
v_currRecDepth_620_ = lean_ctor_get(v___y_606_, 1);
v_ref_621_ = lean_ctor_get(v___y_606_, 2);
v_optionFlags_622_ = lean_ctor_get_uint16(v___y_606_, sizeof(void*)*3);
v_suppressElabErrors_623_ = lean_ctor_get_uint8(v___y_606_, sizeof(void*)*3 + 2);
v_checkDeprecated_624_ = lean_ctor_get_uint8(v___y_606_, sizeof(void*)*3 + 3);
v_isRecordingDeps_625_ = lean_ctor_get_uint8(v___y_606_, sizeof(void*)*3 + 4);
v_maxRecDepth_631_ = lean_ctor_get(v_toCold_619_, 3);
v___x_632_ = lean_unsigned_to_nat(0u);
v___x_633_ = lean_nat_dec_eq(v_maxRecDepth_631_, v___x_632_);
if (v___x_633_ == 0)
{
uint8_t v___x_634_; 
v___x_634_ = lean_nat_dec_eq(v_currRecDepth_620_, v_maxRecDepth_631_);
if (v___x_634_ == 0)
{
goto v___jp_626_;
}
else
{
lean_object* v___x_635_; 
lean_dec_ref(v_x_602_);
lean_inc(v_ref_621_);
v___x_635_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg(v_ref_621_);
v___y_610_ = v___x_635_;
goto v___jp_609_;
}
}
else
{
goto v___jp_626_;
}
v___jp_609_:
{
if (lean_obj_tag(v___y_610_) == 0)
{
return v___y_610_;
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_a_611_ = lean_ctor_get(v___y_610_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___y_610_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___y_610_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___y_610_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
v___jp_626_:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_627_ = lean_unsigned_to_nat(1u);
v___x_628_ = lean_nat_add(v_currRecDepth_620_, v___x_627_);
lean_inc(v_ref_621_);
lean_inc_ref(v_toCold_619_);
v___x_629_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_629_, 0, v_toCold_619_);
lean_ctor_set(v___x_629_, 1, v___x_628_);
lean_ctor_set(v___x_629_, 2, v_ref_621_);
lean_ctor_set_uint16(v___x_629_, sizeof(void*)*3, v_optionFlags_622_);
lean_ctor_set_uint8(v___x_629_, sizeof(void*)*3 + 2, v_suppressElabErrors_623_);
lean_ctor_set_uint8(v___x_629_, sizeof(void*)*3 + 3, v_checkDeprecated_624_);
lean_ctor_set_uint8(v___x_629_, sizeof(void*)*3 + 4, v_isRecordingDeps_625_);
lean_inc(v___y_607_);
lean_inc(v___y_605_);
lean_inc_ref(v___y_604_);
lean_inc(v___y_603_);
v___x_630_ = lean_apply_6(v_x_602_, v___y_603_, v___y_604_, v___y_605_, v___x_629_, v___y_607_, lean_box(0));
v___y_610_ = v___x_630_;
goto v___jp_609_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9___redArg___boxed(lean_object* v_x_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9___redArg(v_x_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_644_, lean_object* v_x_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_apply_1(v_x_645_, lean_box(0));
v___x_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_653_, lean_object* v_x_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__0(v_00_u03b1_653_, v_x_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5___redArg(lean_object* v_a_661_, lean_object* v_x_662_){
_start:
{
if (lean_obj_tag(v_x_662_) == 0)
{
lean_object* v___x_663_; 
v___x_663_ = lean_box(0);
return v___x_663_;
}
else
{
lean_object* v_key_664_; lean_object* v_value_665_; lean_object* v_tail_666_; uint8_t v___x_667_; 
v_key_664_ = lean_ctor_get(v_x_662_, 0);
v_value_665_ = lean_ctor_get(v_x_662_, 1);
v_tail_666_ = lean_ctor_get(v_x_662_, 2);
v___x_667_ = l_Lean_ExprStructEq_beq(v_key_664_, v_a_661_);
if (v___x_667_ == 0)
{
v_x_662_ = v_tail_666_;
goto _start;
}
else
{
lean_object* v___x_669_; 
lean_inc(v_value_665_);
v___x_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_669_, 0, v_value_665_);
return v___x_669_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object* v_a_670_, lean_object* v_x_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5___redArg(v_a_670_, v_x_671_);
lean_dec(v_x_671_);
lean_dec_ref(v_a_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4___redArg(lean_object* v_m_673_, lean_object* v_a_674_){
_start:
{
lean_object* v_buckets_675_; lean_object* v___x_676_; uint64_t v___x_677_; uint64_t v___x_678_; uint64_t v___x_679_; uint64_t v_fold_680_; uint64_t v___x_681_; uint64_t v___x_682_; uint64_t v___x_683_; size_t v___x_684_; size_t v___x_685_; size_t v___x_686_; size_t v___x_687_; size_t v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v_buckets_675_ = lean_ctor_get(v_m_673_, 1);
v___x_676_ = lean_array_get_size(v_buckets_675_);
v___x_677_ = l_Lean_ExprStructEq_hash(v_a_674_);
v___x_678_ = 32ULL;
v___x_679_ = lean_uint64_shift_right(v___x_677_, v___x_678_);
v_fold_680_ = lean_uint64_xor(v___x_677_, v___x_679_);
v___x_681_ = 16ULL;
v___x_682_ = lean_uint64_shift_right(v_fold_680_, v___x_681_);
v___x_683_ = lean_uint64_xor(v_fold_680_, v___x_682_);
v___x_684_ = lean_uint64_to_usize(v___x_683_);
v___x_685_ = lean_usize_of_nat(v___x_676_);
v___x_686_ = ((size_t)1ULL);
v___x_687_ = lean_usize_sub(v___x_685_, v___x_686_);
v___x_688_ = lean_usize_land(v___x_684_, v___x_687_);
v___x_689_ = lean_array_uget_borrowed(v_buckets_675_, v___x_688_);
v___x_690_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5___redArg(v_a_674_, v___x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_m_691_, lean_object* v_a_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4___redArg(v_m_691_, v_a_692_);
lean_dec_ref(v_a_692_);
lean_dec_ref(v_m_691_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__2(lean_object* v___x_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_694_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__2___boxed(lean_object* v___x_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__2(v___x_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg___lam__0(lean_object* v_k_708_, lean_object* v___y_709_, lean_object* v_b_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
lean_object* v___x_716_; 
lean_inc(v___y_714_);
lean_inc_ref(v___y_713_);
lean_inc(v___y_712_);
lean_inc_ref(v___y_711_);
lean_inc(v___y_709_);
v___x_716_ = lean_apply_7(v_k_708_, v_b_710_, v___y_709_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, lean_box(0));
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg___lam__0___boxed(lean_object* v_k_717_, lean_object* v___y_718_, lean_object* v_b_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg___lam__0(v_k_717_, v___y_718_, v_b_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec(v___y_718_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_name_726_, uint8_t v_bi_727_, lean_object* v_type_728_, lean_object* v_k_729_, uint8_t v_kind_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
lean_object* v___f_737_; lean_object* v___x_738_; 
lean_inc(v___y_731_);
v___f_737_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_737_, 0, v_k_729_);
lean_closure_set(v___f_737_, 1, v___y_731_);
v___x_738_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_726_, v_bi_727_, v_type_728_, v___f_737_, v_kind_730_, v___y_732_, v___y_733_, v___y_734_, v___y_735_);
if (lean_obj_tag(v___x_738_) == 0)
{
return v___x_738_;
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_738_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_738_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_name_747_, lean_object* v_bi_748_, lean_object* v_type_749_, lean_object* v_k_750_, lean_object* v_kind_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
uint8_t v_bi_boxed_758_; uint8_t v_kind_boxed_759_; lean_object* v_res_760_; 
v_bi_boxed_758_ = lean_unbox(v_bi_748_);
v_kind_boxed_759_ = lean_unbox(v_kind_751_);
v_res_760_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg(v_name_747_, v_bi_boxed_758_, v_type_749_, v_k_750_, v_kind_boxed_759_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10___redArg(lean_object* v_name_761_, lean_object* v_type_762_, lean_object* v_val_763_, lean_object* v_k_764_, uint8_t v_nondep_765_, uint8_t v_kind_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v___f_773_; lean_object* v___x_774_; 
lean_inc(v___y_767_);
v___f_773_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_773_, 0, v_k_764_);
lean_closure_set(v___f_773_, 1, v___y_767_);
v___x_774_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_761_, v_type_762_, v_val_763_, v___f_773_, v_nondep_765_, v_kind_766_, v___y_768_, v___y_769_, v___y_770_, v___y_771_);
if (lean_obj_tag(v___x_774_) == 0)
{
return v___x_774_;
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_774_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_774_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10___redArg___boxed(lean_object* v_name_783_, lean_object* v_type_784_, lean_object* v_val_785_, lean_object* v_k_786_, lean_object* v_nondep_787_, lean_object* v_kind_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
uint8_t v_nondep_boxed_795_; uint8_t v_kind_boxed_796_; lean_object* v_res_797_; 
v_nondep_boxed_795_ = lean_unbox(v_nondep_787_);
v_kind_boxed_796_ = lean_unbox(v_kind_788_);
v_res_797_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10___redArg(v_name_783_, v_type_784_, v_val_785_, v_k_786_, v_nondep_boxed_795_, v_kind_boxed_796_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_789_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5___lam__0___boxed(lean_object* v_fvars_798_, lean_object* v_pre_799_, lean_object* v_post_800_, lean_object* v_usedLetOnly_801_, lean_object* v_skipConstInApp_802_, lean_object* v_skipInstances_803_, lean_object* v_body_804_, lean_object* v_x_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
uint8_t v_usedLetOnly_boxed_812_; uint8_t v_skipConstInApp_boxed_813_; uint8_t v_skipInstances_boxed_814_; lean_object* v_res_815_; 
v_usedLetOnly_boxed_812_ = lean_unbox(v_usedLetOnly_801_);
v_skipConstInApp_boxed_813_ = lean_unbox(v_skipConstInApp_802_);
v_skipInstances_boxed_814_ = lean_unbox(v_skipInstances_803_);
v_res_815_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5___lam__0(v_fvars_798_, v_pre_799_, v_post_800_, v_usedLetOnly_boxed_812_, v_skipConstInApp_boxed_813_, v_skipInstances_boxed_814_, v_body_804_, v_x_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6___lam__0(lean_object* v_fvars_819_, lean_object* v_pre_820_, lean_object* v_post_821_, uint8_t v_usedLetOnly_822_, uint8_t v_skipConstInApp_823_, uint8_t v_skipInstances_824_, lean_object* v_body_825_, lean_object* v_x_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = lean_array_push(v_fvars_819_, v_x_826_);
v___x_834_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6(v_pre_820_, v_post_821_, v_usedLetOnly_822_, v_skipConstInApp_823_, v_skipInstances_824_, v___x_833_, v_body_825_, v___y_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6___lam__0___boxed(lean_object* v_fvars_835_, lean_object* v_pre_836_, lean_object* v_post_837_, lean_object* v_usedLetOnly_838_, lean_object* v_skipConstInApp_839_, lean_object* v_skipInstances_840_, lean_object* v_body_841_, lean_object* v_x_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
uint8_t v_usedLetOnly_boxed_849_; uint8_t v_skipConstInApp_boxed_850_; uint8_t v_skipInstances_boxed_851_; lean_object* v_res_852_; 
v_usedLetOnly_boxed_849_ = lean_unbox(v_usedLetOnly_838_);
v_skipConstInApp_boxed_850_ = lean_unbox(v_skipConstInApp_839_);
v_skipInstances_boxed_851_ = lean_unbox(v_skipInstances_840_);
v_res_852_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6___lam__0(v_fvars_835_, v_pre_836_, v_post_837_, v_usedLetOnly_boxed_849_, v_skipConstInApp_boxed_850_, v_skipInstances_boxed_851_, v_body_841_, v_x_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_843_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(lean_object* v_pre_853_, lean_object* v_post_854_, uint8_t v_usedLetOnly_855_, uint8_t v_skipConstInApp_856_, uint8_t v_skipInstances_857_, lean_object* v_e_858_, lean_object* v_a_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
lean_object* v___x_865_; 
lean_inc_ref(v_post_854_);
lean_inc(v___y_863_);
lean_inc_ref(v___y_862_);
lean_inc(v___y_861_);
lean_inc_ref(v___y_860_);
lean_inc_ref(v_e_858_);
v___x_865_ = lean_apply_6(v_post_854_, v_e_858_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, lean_box(0));
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_884_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_884_ == 0)
{
v___x_868_ = v___x_865_;
v_isShared_869_ = v_isSharedCheck_884_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_884_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
switch(lean_obj_tag(v_a_866_))
{
case 0:
{
lean_object* v_e_870_; lean_object* v___x_872_; 
lean_dec_ref(v_e_858_);
lean_dec_ref(v_post_854_);
lean_dec_ref(v_pre_853_);
v_e_870_ = lean_ctor_get(v_a_866_, 0);
lean_inc_ref(v_e_870_);
lean_dec_ref_known(v_a_866_, 1);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v_e_870_);
v___x_872_ = v___x_868_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_e_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
case 1:
{
lean_object* v_e_874_; lean_object* v___x_875_; 
lean_del_object(v___x_868_);
lean_dec_ref(v_e_858_);
v_e_874_ = lean_ctor_get(v_a_866_, 0);
lean_inc_ref(v_e_874_);
lean_dec_ref_known(v_a_866_, 1);
v___x_875_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_853_, v_post_854_, v_usedLetOnly_855_, v_skipConstInApp_856_, v_skipInstances_857_, v_e_874_, v_a_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_);
return v___x_875_;
}
default: 
{
lean_object* v_e_x3f_876_; 
lean_dec_ref(v_post_854_);
lean_dec_ref(v_pre_853_);
v_e_x3f_876_ = lean_ctor_get(v_a_866_, 0);
lean_inc(v_e_x3f_876_);
lean_dec_ref_known(v_a_866_, 1);
if (lean_obj_tag(v_e_x3f_876_) == 0)
{
lean_object* v___x_878_; 
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v_e_858_);
v___x_878_ = v___x_868_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_e_858_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
else
{
lean_object* v_val_880_; lean_object* v___x_882_; 
lean_dec_ref(v_e_858_);
v_val_880_ = lean_ctor_get(v_e_x3f_876_, 0);
lean_inc(v_val_880_);
lean_dec_ref_known(v_e_x3f_876_, 1);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v_val_880_);
v___x_882_ = v___x_868_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_val_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_892_; 
lean_dec_ref(v_e_858_);
lean_dec_ref(v_post_854_);
lean_dec_ref(v_pre_853_);
v_a_885_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_892_ == 0)
{
v___x_887_ = v___x_865_;
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_865_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_888_ == 0)
{
v___x_890_ = v___x_887_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_a_885_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6(lean_object* v_pre_893_, lean_object* v_post_894_, uint8_t v_usedLetOnly_895_, uint8_t v_skipConstInApp_896_, uint8_t v_skipInstances_897_, lean_object* v_fvars_898_, lean_object* v_e_899_, lean_object* v_a_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
if (lean_obj_tag(v_e_899_) == 6)
{
lean_object* v_binderName_906_; lean_object* v_binderType_907_; lean_object* v_body_908_; uint8_t v_binderInfo_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___f_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v_binderName_906_ = lean_ctor_get(v_e_899_, 0);
lean_inc(v_binderName_906_);
v_binderType_907_ = lean_ctor_get(v_e_899_, 1);
lean_inc_ref(v_binderType_907_);
v_body_908_ = lean_ctor_get(v_e_899_, 2);
lean_inc_ref(v_body_908_);
v_binderInfo_909_ = lean_ctor_get_uint8(v_e_899_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_899_, 3);
v___x_910_ = lean_box(v_usedLetOnly_895_);
v___x_911_ = lean_box(v_skipConstInApp_896_);
v___x_912_ = lean_box(v_skipInstances_897_);
lean_inc_ref(v_post_894_);
lean_inc_ref(v_pre_893_);
lean_inc_ref(v_fvars_898_);
v___f_913_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_913_, 0, v_fvars_898_);
lean_closure_set(v___f_913_, 1, v_pre_893_);
lean_closure_set(v___f_913_, 2, v_post_894_);
lean_closure_set(v___f_913_, 3, v___x_910_);
lean_closure_set(v___f_913_, 4, v___x_911_);
lean_closure_set(v___f_913_, 5, v___x_912_);
lean_closure_set(v___f_913_, 6, v_body_908_);
v___x_914_ = lean_expr_instantiate_rev(v_binderType_907_, v_fvars_898_);
lean_dec_ref(v_fvars_898_);
lean_dec_ref(v_binderType_907_);
v___x_915_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_893_, v_post_894_, v_usedLetOnly_895_, v_skipConstInApp_896_, v_skipInstances_897_, v___x_914_, v_a_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; uint8_t v___x_917_; lean_object* v___x_918_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_916_);
lean_dec_ref_known(v___x_915_, 1);
v___x_917_ = 0;
v___x_918_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg(v_binderName_906_, v_binderInfo_909_, v_a_916_, v___f_913_, v___x_917_, v_a_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
return v___x_918_;
}
else
{
lean_dec_ref(v___f_913_);
lean_dec(v_binderName_906_);
return v___x_915_;
}
}
else
{
lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_919_ = lean_expr_instantiate_rev(v_e_899_, v_fvars_898_);
lean_dec_ref(v_e_899_);
lean_inc_ref(v_post_894_);
lean_inc_ref(v_pre_893_);
v___x_920_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_893_, v_post_894_, v_usedLetOnly_895_, v_skipConstInApp_896_, v_skipInstances_897_, v___x_919_, v_a_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; uint8_t v___x_922_; uint8_t v___x_923_; uint8_t v___x_924_; lean_object* v___x_925_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref_known(v___x_920_, 1);
v___x_922_ = 0;
v___x_923_ = 1;
v___x_924_ = 1;
v___x_925_ = l_Lean_Meta_mkLambdaFVars(v_fvars_898_, v_a_921_, v___x_922_, v_usedLetOnly_895_, v___x_922_, v___x_923_, v___x_924_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec_ref(v_fvars_898_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; lean_object* v___x_927_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_925_, 1);
v___x_927_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_893_, v_post_894_, v_usedLetOnly_895_, v_skipConstInApp_896_, v_skipInstances_897_, v_a_926_, v_a_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
return v___x_927_;
}
else
{
lean_dec_ref(v_post_894_);
lean_dec_ref(v_pre_893_);
return v___x_925_;
}
}
else
{
lean_dec_ref(v_fvars_898_);
lean_dec_ref(v_post_894_);
lean_dec_ref(v_pre_893_);
return v___x_920_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7___lam__0(lean_object* v_fvars_928_, lean_object* v_pre_929_, lean_object* v_post_930_, uint8_t v_usedLetOnly_931_, uint8_t v_skipConstInApp_932_, uint8_t v_skipInstances_933_, lean_object* v_body_934_, lean_object* v_x_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_array_push(v_fvars_928_, v_x_935_);
v___x_943_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7(v_pre_929_, v_post_930_, v_usedLetOnly_931_, v_skipConstInApp_932_, v_skipInstances_933_, v___x_942_, v_body_934_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7___lam__0___boxed(lean_object* v_fvars_944_, lean_object* v_pre_945_, lean_object* v_post_946_, lean_object* v_usedLetOnly_947_, lean_object* v_skipConstInApp_948_, lean_object* v_skipInstances_949_, lean_object* v_body_950_, lean_object* v_x_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
uint8_t v_usedLetOnly_boxed_958_; uint8_t v_skipConstInApp_boxed_959_; uint8_t v_skipInstances_boxed_960_; lean_object* v_res_961_; 
v_usedLetOnly_boxed_958_ = lean_unbox(v_usedLetOnly_947_);
v_skipConstInApp_boxed_959_ = lean_unbox(v_skipConstInApp_948_);
v_skipInstances_boxed_960_ = lean_unbox(v_skipInstances_949_);
v_res_961_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7___lam__0(v_fvars_944_, v_pre_945_, v_post_946_, v_usedLetOnly_boxed_958_, v_skipConstInApp_boxed_959_, v_skipInstances_boxed_960_, v_body_950_, v_x_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7(lean_object* v_pre_962_, lean_object* v_post_963_, uint8_t v_usedLetOnly_964_, uint8_t v_skipConstInApp_965_, uint8_t v_skipInstances_966_, lean_object* v_fvars_967_, lean_object* v_e_968_, lean_object* v_a_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
if (lean_obj_tag(v_e_968_) == 8)
{
lean_object* v_declName_975_; lean_object* v_type_976_; lean_object* v_value_977_; lean_object* v_body_978_; uint8_t v_nondep_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___f_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v_declName_975_ = lean_ctor_get(v_e_968_, 0);
lean_inc(v_declName_975_);
v_type_976_ = lean_ctor_get(v_e_968_, 1);
lean_inc_ref(v_type_976_);
v_value_977_ = lean_ctor_get(v_e_968_, 2);
lean_inc_ref(v_value_977_);
v_body_978_ = lean_ctor_get(v_e_968_, 3);
lean_inc_ref(v_body_978_);
v_nondep_979_ = lean_ctor_get_uint8(v_e_968_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_968_, 4);
v___x_980_ = lean_box(v_usedLetOnly_964_);
v___x_981_ = lean_box(v_skipConstInApp_965_);
v___x_982_ = lean_box(v_skipInstances_966_);
lean_inc_ref_n(v_post_963_, 2);
lean_inc_ref_n(v_pre_962_, 2);
lean_inc_ref(v_fvars_967_);
v___f_983_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_983_, 0, v_fvars_967_);
lean_closure_set(v___f_983_, 1, v_pre_962_);
lean_closure_set(v___f_983_, 2, v_post_963_);
lean_closure_set(v___f_983_, 3, v___x_980_);
lean_closure_set(v___f_983_, 4, v___x_981_);
lean_closure_set(v___f_983_, 5, v___x_982_);
lean_closure_set(v___f_983_, 6, v_body_978_);
v___x_984_ = lean_expr_instantiate_rev(v_type_976_, v_fvars_967_);
lean_dec_ref(v_type_976_);
v___x_985_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_962_, v_post_963_, v_usedLetOnly_964_, v_skipConstInApp_965_, v_skipInstances_966_, v___x_984_, v_a_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_985_, 1);
v___x_987_ = lean_expr_instantiate_rev(v_value_977_, v_fvars_967_);
lean_dec_ref(v_fvars_967_);
lean_dec_ref(v_value_977_);
v___x_988_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_962_, v_post_963_, v_usedLetOnly_964_, v_skipConstInApp_965_, v_skipInstances_966_, v___x_987_, v_a_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; uint8_t v___x_990_; lean_object* v___x_991_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_988_, 1);
v___x_990_ = 0;
v___x_991_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10___redArg(v_declName_975_, v_a_986_, v_a_989_, v___f_983_, v_nondep_979_, v___x_990_, v_a_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
return v___x_991_;
}
else
{
lean_dec(v_a_986_);
lean_dec_ref(v___f_983_);
lean_dec(v_declName_975_);
return v___x_988_;
}
}
else
{
lean_dec_ref(v___f_983_);
lean_dec_ref(v_value_977_);
lean_dec(v_declName_975_);
lean_dec_ref(v_fvars_967_);
lean_dec_ref(v_post_963_);
lean_dec_ref(v_pre_962_);
return v___x_985_;
}
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lean_expr_instantiate_rev(v_e_968_, v_fvars_967_);
lean_dec_ref(v_e_968_);
lean_inc_ref(v_post_963_);
lean_inc_ref(v_pre_962_);
v___x_993_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_962_, v_post_963_, v_usedLetOnly_964_, v_skipConstInApp_965_, v_skipInstances_966_, v___x_992_, v_a_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; uint8_t v___x_995_; uint8_t v___x_996_; lean_object* v___x_997_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref_known(v___x_993_, 1);
v___x_995_ = 0;
v___x_996_ = 1;
v___x_997_ = l_Lean_Meta_mkLetFVars(v_fvars_967_, v_a_994_, v_usedLetOnly_964_, v___x_995_, v___x_996_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
lean_dec_ref(v_fvars_967_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_999_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_998_);
lean_dec_ref_known(v___x_997_, 1);
v___x_999_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_962_, v_post_963_, v_usedLetOnly_964_, v_skipConstInApp_965_, v_skipInstances_966_, v_a_998_, v_a_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
return v___x_999_;
}
else
{
lean_dec_ref(v_post_963_);
lean_dec_ref(v_pre_962_);
return v___x_997_;
}
}
else
{
lean_dec_ref(v_fvars_967_);
lean_dec_ref(v_post_963_);
lean_dec_ref(v_pre_962_);
return v___x_993_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1000_; lean_object* v_dummy_1001_; 
v___x_1000_ = lean_box(0);
v_dummy_1001_ = l_Lean_Expr_sort___override(v___x_1000_);
return v_dummy_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__1(lean_object* v_pre_1002_, lean_object* v_post_1003_, uint8_t v_usedLetOnly_1004_, uint8_t v_skipConstInApp_1005_, uint8_t v_skipInstances_1006_, size_t v_sz_1007_, size_t v_i_1008_, lean_object* v_bs_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
uint8_t v___x_1016_; 
v___x_1016_ = lean_usize_dec_lt(v_i_1008_, v_sz_1007_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; 
lean_dec_ref(v_post_1003_);
lean_dec_ref(v_pre_1002_);
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_bs_1009_);
return v___x_1017_;
}
else
{
lean_object* v_v_1018_; lean_object* v___x_1019_; lean_object* v_bs_x27_1020_; lean_object* v___x_1021_; 
v_v_1018_ = lean_array_uget(v_bs_1009_, v_i_1008_);
v___x_1019_ = lean_unsigned_to_nat(0u);
v_bs_x27_1020_ = lean_array_uset(v_bs_1009_, v_i_1008_, v___x_1019_);
lean_inc_ref(v_post_1003_);
lean_inc_ref(v_pre_1002_);
v___x_1021_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1002_, v_post_1003_, v_usedLetOnly_1004_, v_skipConstInApp_1005_, v_skipInstances_1006_, v_v_1018_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; size_t v___x_1023_; size_t v___x_1024_; lean_object* v___x_1025_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1023_ = ((size_t)1ULL);
v___x_1024_ = lean_usize_add(v_i_1008_, v___x_1023_);
v___x_1025_ = lean_array_uset(v_bs_x27_1020_, v_i_1008_, v_a_1022_);
v_i_1008_ = v___x_1024_;
v_bs_1009_ = v___x_1025_;
goto _start;
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec_ref(v_bs_x27_1020_);
lean_dec_ref(v_post_1003_);
lean_dec_ref(v_pre_1002_);
v_a_1027_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1021_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1021_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__0(lean_object* v_pre_1035_, lean_object* v_post_1036_, uint8_t v_usedLetOnly_1037_, uint8_t v_skipConstInApp_1038_, uint8_t v_skipInstances_1039_, lean_object* v___x_1040_, lean_object* v___y_1041_, lean_object* v_b_1042_, lean_object* v_a_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v___x_1049_; 
v___x_1049_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1035_, v_post_1036_, v_usedLetOnly_1037_, v_skipConstInApp_1038_, v_skipInstances_1039_, v___x_1040_, v___y_1041_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1059_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1052_ = v___x_1049_;
v_isShared_1053_ = v_isSharedCheck_1059_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1049_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1059_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1057_; 
v___x_1054_ = lean_array_fset(v_b_1042_, v_a_1043_, v_a_1050_);
v___x_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v___x_1055_);
v___x_1057_ = v___x_1052_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
lean_dec_ref(v_b_1042_);
v_a_1060_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1049_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1049_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object* v_pre_1068_, lean_object* v_post_1069_, lean_object* v_usedLetOnly_1070_, lean_object* v_skipConstInApp_1071_, lean_object* v_skipInstances_1072_, lean_object* v___x_1073_, lean_object* v___y_1074_, lean_object* v_b_1075_, lean_object* v_a_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
uint8_t v_usedLetOnly_boxed_1082_; uint8_t v_skipConstInApp_boxed_1083_; uint8_t v_skipInstances_boxed_1084_; lean_object* v_res_1085_; 
v_usedLetOnly_boxed_1082_ = lean_unbox(v_usedLetOnly_1070_);
v_skipConstInApp_boxed_1083_ = lean_unbox(v_skipConstInApp_1071_);
v_skipInstances_boxed_1084_ = lean_unbox(v_skipInstances_1072_);
v_res_1085_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__0(v_pre_1068_, v_post_1069_, v_usedLetOnly_boxed_1082_, v_skipConstInApp_boxed_1083_, v_skipInstances_boxed_1084_, v___x_1073_, v___y_1074_, v_b_1075_, v_a_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v_a_1076_);
lean_dec(v___y_1074_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg(lean_object* v_upperBound_1086_, lean_object* v___x_1087_, lean_object* v_pre_1088_, lean_object* v_post_1089_, uint8_t v_usedLetOnly_1090_, uint8_t v_skipConstInApp_1091_, uint8_t v_skipInstances_1092_, lean_object* v_a_1093_, lean_object* v_b_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v___y_1102_; uint8_t v___x_1125_; 
v___x_1125_ = lean_nat_dec_lt(v_a_1093_, v_upperBound_1086_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; 
lean_dec(v_a_1093_);
lean_dec_ref(v_post_1089_);
lean_dec_ref(v_pre_1088_);
v___x_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1126_, 0, v_b_1094_);
return v___x_1126_;
}
else
{
lean_object* v___x_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; 
v___x_1127_ = lean_array_fget_borrowed(v_b_1094_, v_a_1093_);
v___x_1128_ = lean_array_get_size(v___x_1087_);
v___x_1129_ = lean_nat_dec_lt(v_a_1093_, v___x_1128_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___f_1133_; 
lean_inc(v___x_1127_);
v___x_1130_ = lean_box(v_usedLetOnly_1090_);
v___x_1131_ = lean_box(v_skipConstInApp_1091_);
v___x_1132_ = lean_box(v_skipInstances_1092_);
lean_inc(v_a_1093_);
lean_inc(v___y_1095_);
lean_inc_ref(v_post_1089_);
lean_inc_ref(v_pre_1088_);
v___f_1133_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1133_, 0, v_pre_1088_);
lean_closure_set(v___f_1133_, 1, v_post_1089_);
lean_closure_set(v___f_1133_, 2, v___x_1130_);
lean_closure_set(v___f_1133_, 3, v___x_1131_);
lean_closure_set(v___f_1133_, 4, v___x_1132_);
lean_closure_set(v___f_1133_, 5, v___x_1127_);
lean_closure_set(v___f_1133_, 6, v___y_1095_);
lean_closure_set(v___f_1133_, 7, v_b_1094_);
lean_closure_set(v___f_1133_, 8, v_a_1093_);
v___y_1102_ = v___f_1133_;
goto v___jp_1101_;
}
else
{
lean_object* v___x_1134_; uint8_t v_isInstance_1135_; 
v___x_1134_ = lean_array_fget_borrowed(v___x_1087_, v_a_1093_);
v_isInstance_1135_ = lean_ctor_get_uint8(v___x_1134_, sizeof(void*)*1 + 4);
if (v_isInstance_1135_ == 0)
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___f_1139_; 
lean_inc(v___x_1127_);
v___x_1136_ = lean_box(v_usedLetOnly_1090_);
v___x_1137_ = lean_box(v_skipConstInApp_1091_);
v___x_1138_ = lean_box(v_skipInstances_1092_);
lean_inc(v_a_1093_);
lean_inc(v___y_1095_);
lean_inc_ref(v_post_1089_);
lean_inc_ref(v_pre_1088_);
v___f_1139_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1139_, 0, v_pre_1088_);
lean_closure_set(v___f_1139_, 1, v_post_1089_);
lean_closure_set(v___f_1139_, 2, v___x_1136_);
lean_closure_set(v___f_1139_, 3, v___x_1137_);
lean_closure_set(v___f_1139_, 4, v___x_1138_);
lean_closure_set(v___f_1139_, 5, v___x_1127_);
lean_closure_set(v___f_1139_, 6, v___y_1095_);
lean_closure_set(v___f_1139_, 7, v_b_1094_);
lean_closure_set(v___f_1139_, 8, v_a_1093_);
v___y_1102_ = v___f_1139_;
goto v___jp_1101_;
}
else
{
lean_object* v___x_1140_; lean_object* v___f_1141_; 
v___x_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1140_, 0, v_b_1094_);
v___f_1141_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1141_, 0, v___x_1140_);
v___y_1102_ = v___f_1141_;
goto v___jp_1101_;
}
}
}
v___jp_1101_:
{
lean_object* v___x_1103_; 
lean_inc(v___y_1099_);
lean_inc_ref(v___y_1098_);
lean_inc(v___y_1097_);
lean_inc_ref(v___y_1096_);
v___x_1103_ = lean_apply_5(v___y_1102_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, lean_box(0));
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1116_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1106_ = v___x_1103_;
v_isShared_1107_ = v_isSharedCheck_1116_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1103_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1116_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
if (lean_obj_tag(v_a_1104_) == 0)
{
lean_object* v_a_1108_; lean_object* v___x_1110_; 
lean_dec(v_a_1093_);
lean_dec_ref(v_post_1089_);
lean_dec_ref(v_pre_1088_);
v_a_1108_ = lean_ctor_get(v_a_1104_, 0);
lean_inc(v_a_1108_);
lean_dec_ref_known(v_a_1104_, 1);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 0, v_a_1108_);
v___x_1110_ = v___x_1106_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1108_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
lean_del_object(v___x_1106_);
v_a_1112_ = lean_ctor_get(v_a_1104_, 0);
lean_inc(v_a_1112_);
lean_dec_ref_known(v_a_1104_, 1);
v___x_1113_ = lean_unsigned_to_nat(1u);
v___x_1114_ = lean_nat_add(v_a_1093_, v___x_1113_);
lean_dec(v_a_1093_);
v_a_1093_ = v___x_1114_;
v_b_1094_ = v_a_1112_;
goto _start;
}
}
}
else
{
lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
lean_dec(v_a_1093_);
lean_dec_ref(v_post_1089_);
lean_dec_ref(v_pre_1088_);
v_a_1117_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1119_ = v___x_1103_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v___x_1103_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1117_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__8(uint8_t v_skipInstances_1142_, lean_object* v_pre_1143_, lean_object* v_post_1144_, uint8_t v_usedLetOnly_1145_, uint8_t v_skipConstInApp_1146_, lean_object* v_x_1147_, lean_object* v_x_1148_, lean_object* v_x_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v_f_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; 
if (lean_obj_tag(v_x_1147_) == 5)
{
lean_object* v_fn_1205_; lean_object* v_arg_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_fn_1205_ = lean_ctor_get(v_x_1147_, 0);
lean_inc_ref(v_fn_1205_);
v_arg_1206_ = lean_ctor_get(v_x_1147_, 1);
lean_inc_ref(v_arg_1206_);
lean_dec_ref_known(v_x_1147_, 2);
v___x_1207_ = lean_array_set(v_x_1148_, v_x_1149_, v_arg_1206_);
v___x_1208_ = lean_unsigned_to_nat(1u);
v___x_1209_ = lean_nat_sub(v_x_1149_, v___x_1208_);
lean_dec(v_x_1149_);
v_x_1147_ = v_fn_1205_;
v_x_1148_ = v___x_1207_;
v_x_1149_ = v___x_1209_;
goto _start;
}
else
{
lean_dec(v_x_1149_);
if (v_skipConstInApp_1146_ == 0)
{
goto v___jp_1202_;
}
else
{
uint8_t v___x_1211_; 
v___x_1211_ = l_Lean_Expr_isConst(v_x_1147_);
if (v___x_1211_ == 0)
{
goto v___jp_1202_;
}
else
{
v_f_1157_ = v_x_1147_;
v___y_1158_ = v___y_1150_;
v___y_1159_ = v___y_1151_;
v___y_1160_ = v___y_1152_;
v___y_1161_ = v___y_1153_;
v___y_1162_ = v___y_1154_;
goto v___jp_1156_;
}
}
}
v___jp_1156_:
{
if (v_skipInstances_1142_ == 0)
{
size_t v_sz_1163_; size_t v___x_1164_; lean_object* v___x_1165_; 
v_sz_1163_ = lean_array_size(v_x_1148_);
v___x_1164_ = ((size_t)0ULL);
lean_inc_ref(v_post_1144_);
lean_inc_ref(v_pre_1143_);
v___x_1165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__1(v_pre_1143_, v_post_1144_, v_usedLetOnly_1145_, v_skipConstInApp_1146_, v_skipInstances_1142_, v_sz_1163_, v___x_1164_, v_x_1148_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v_a_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v_a_1166_ = lean_ctor_get(v___x_1165_, 0);
lean_inc(v_a_1166_);
lean_dec_ref_known(v___x_1165_, 1);
v___x_1167_ = l_Lean_mkAppN(v_f_1157_, v_a_1166_);
lean_dec(v_a_1166_);
v___x_1168_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_1143_, v_post_1144_, v_usedLetOnly_1145_, v_skipConstInApp_1146_, v_skipInstances_1142_, v___x_1167_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
return v___x_1168_;
}
else
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec_ref(v_f_1157_);
lean_dec_ref(v_post_1144_);
lean_dec_ref(v_pre_1143_);
v_a_1169_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1165_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1165_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1169_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
else
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = lean_array_get_size(v_x_1148_);
lean_inc_ref(v_f_1157_);
v___x_1178_ = l_Lean_Meta_getFunInfoNArgs(v_f_1157_, v___x_1177_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v_paramInfo_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_a_1179_);
lean_dec_ref_known(v___x_1178_, 1);
v_paramInfo_1180_ = lean_ctor_get(v_a_1179_, 0);
lean_inc_ref(v_paramInfo_1180_);
lean_dec(v_a_1179_);
v___x_1181_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1144_);
lean_inc_ref(v_pre_1143_);
v___x_1182_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg(v___x_1177_, v_paramInfo_1180_, v_pre_1143_, v_post_1144_, v_usedLetOnly_1145_, v_skipConstInApp_1146_, v_skipInstances_1142_, v___x_1181_, v_x_1148_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec_ref(v_paramInfo_1180_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1182_, 1);
v___x_1184_ = l_Lean_mkAppN(v_f_1157_, v_a_1183_);
lean_dec(v_a_1183_);
v___x_1185_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_1143_, v_post_1144_, v_usedLetOnly_1145_, v_skipConstInApp_1146_, v_skipInstances_1142_, v___x_1184_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
return v___x_1185_;
}
else
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
lean_dec_ref(v_f_1157_);
lean_dec_ref(v_post_1144_);
lean_dec_ref(v_pre_1143_);
v_a_1186_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1182_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1182_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
lean_dec_ref(v_f_1157_);
lean_dec_ref(v_x_1148_);
lean_dec_ref(v_post_1144_);
lean_dec_ref(v_pre_1143_);
v_a_1194_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1178_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1178_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
}
v___jp_1202_:
{
lean_object* v___x_1203_; 
lean_inc_ref(v_post_1144_);
lean_inc_ref(v_pre_1143_);
v___x_1203_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1143_, v_post_1144_, v_usedLetOnly_1145_, v_skipConstInApp_1146_, v_skipInstances_1142_, v_x_1147_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_);
if (lean_obj_tag(v___x_1203_) == 0)
{
lean_object* v_a_1204_; 
v_a_1204_ = lean_ctor_get(v___x_1203_, 0);
lean_inc(v_a_1204_);
lean_dec_ref_known(v___x_1203_, 1);
v_f_1157_ = v_a_1204_;
v___y_1158_ = v___y_1150_;
v___y_1159_ = v___y_1151_;
v___y_1160_ = v___y_1152_;
v___y_1161_ = v___y_1153_;
v___y_1162_ = v___y_1154_;
goto v___jp_1156_;
}
else
{
lean_dec_ref(v_x_1148_);
lean_dec_ref(v_post_1144_);
lean_dec_ref(v_pre_1143_);
return v___x_1203_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1(lean_object* v___x_1212_, lean_object* v_pre_1213_, lean_object* v_e_1214_, lean_object* v_post_1215_, uint8_t v_usedLetOnly_1216_, uint8_t v_skipConstInApp_1217_, uint8_t v_skipInstances_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Lean_Core_checkSystem(v___x_1212_, v___y_1222_, v___y_1223_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v___x_1226_; 
lean_dec_ref_known(v___x_1225_, 1);
lean_inc_ref(v_pre_1213_);
lean_inc(v___y_1223_);
lean_inc_ref(v___y_1222_);
lean_inc(v___y_1221_);
lean_inc_ref(v___y_1220_);
lean_inc_ref(v_e_1214_);
v___x_1226_ = lean_apply_6(v_pre_1213_, v_e_1214_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, lean_box(0));
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1275_; 
v_a_1227_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1229_ = v___x_1226_;
v_isShared_1230_ = v_isSharedCheck_1275_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1226_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1275_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___y_1232_; 
switch(lean_obj_tag(v_a_1227_))
{
case 0:
{
lean_object* v_e_1267_; lean_object* v___x_1269_; 
lean_dec_ref(v_post_1215_);
lean_dec_ref(v_e_1214_);
lean_dec_ref(v_pre_1213_);
v_e_1267_ = lean_ctor_get(v_a_1227_, 0);
lean_inc_ref(v_e_1267_);
lean_dec_ref_known(v_a_1227_, 1);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v_e_1267_);
v___x_1269_ = v___x_1229_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_e_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
case 1:
{
lean_object* v_e_1271_; lean_object* v___x_1272_; 
lean_del_object(v___x_1229_);
lean_dec_ref(v_e_1214_);
v_e_1271_ = lean_ctor_get(v_a_1227_, 0);
lean_inc_ref(v_e_1271_);
lean_dec_ref_known(v_a_1227_, 1);
v___x_1272_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v_e_1271_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1272_;
}
default: 
{
lean_object* v_e_x3f_1273_; 
lean_del_object(v___x_1229_);
v_e_x3f_1273_ = lean_ctor_get(v_a_1227_, 0);
lean_inc(v_e_x3f_1273_);
lean_dec_ref_known(v_a_1227_, 1);
if (lean_obj_tag(v_e_x3f_1273_) == 0)
{
v___y_1232_ = v_e_1214_;
goto v___jp_1231_;
}
else
{
lean_object* v_val_1274_; 
lean_dec_ref(v_e_1214_);
v_val_1274_ = lean_ctor_get(v_e_x3f_1273_, 0);
lean_inc(v_val_1274_);
lean_dec_ref_known(v_e_x3f_1273_, 1);
v___y_1232_ = v_val_1274_;
goto v___jp_1231_;
}
}
}
v___jp_1231_:
{
switch(lean_obj_tag(v___y_1232_))
{
case 7:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__0));
v___x_1234_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v___x_1233_, v___y_1232_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1234_;
}
case 6:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1235_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__0));
v___x_1236_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v___x_1235_, v___y_1232_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1236_;
}
case 8:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__0));
v___x_1238_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v___x_1237_, v___y_1232_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1238_;
}
case 5:
{
lean_object* v_dummy_1239_; lean_object* v_nargs_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v_dummy_1239_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___closed__1);
v_nargs_1240_ = l_Lean_Expr_getAppNumArgs(v___y_1232_);
lean_inc(v_nargs_1240_);
v___x_1241_ = lean_mk_array(v_nargs_1240_, v_dummy_1239_);
v___x_1242_ = lean_unsigned_to_nat(1u);
v___x_1243_ = lean_nat_sub(v_nargs_1240_, v___x_1242_);
lean_dec(v_nargs_1240_);
v___x_1244_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__8(v_skipInstances_1218_, v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v___y_1232_, v___x_1241_, v___x_1243_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1244_;
}
case 10:
{
lean_object* v_data_1245_; lean_object* v_expr_1246_; lean_object* v___x_1247_; 
v_data_1245_ = lean_ctor_get(v___y_1232_, 0);
v_expr_1246_ = lean_ctor_get(v___y_1232_, 1);
lean_inc_ref(v_expr_1246_);
lean_inc_ref(v_post_1215_);
lean_inc_ref(v_pre_1213_);
v___x_1247_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v_expr_1246_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v_a_1248_; size_t v___x_1249_; size_t v___x_1250_; uint8_t v___x_1251_; 
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
lean_inc(v_a_1248_);
lean_dec_ref_known(v___x_1247_, 1);
v___x_1249_ = lean_ptr_addr(v_expr_1246_);
v___x_1250_ = lean_ptr_addr(v_a_1248_);
v___x_1251_ = lean_usize_dec_eq(v___x_1249_, v___x_1250_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
lean_inc(v_data_1245_);
lean_dec_ref_known(v___y_1232_, 2);
v___x_1252_ = l_Lean_Expr_mdata___override(v_data_1245_, v_a_1248_);
v___x_1253_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v___x_1252_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1253_;
}
else
{
lean_object* v___x_1254_; 
lean_dec(v_a_1248_);
v___x_1254_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v___y_1232_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1254_;
}
}
else
{
lean_dec_ref_known(v___y_1232_, 2);
lean_dec_ref(v_post_1215_);
lean_dec_ref(v_pre_1213_);
return v___x_1247_;
}
}
case 11:
{
lean_object* v_typeName_1255_; lean_object* v_idx_1256_; lean_object* v_struct_1257_; lean_object* v___x_1258_; 
v_typeName_1255_ = lean_ctor_get(v___y_1232_, 0);
v_idx_1256_ = lean_ctor_get(v___y_1232_, 1);
v_struct_1257_ = lean_ctor_get(v___y_1232_, 2);
lean_inc_ref(v_struct_1257_);
lean_inc_ref(v_post_1215_);
lean_inc_ref(v_pre_1213_);
v___x_1258_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v_struct_1257_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; size_t v___x_1260_; size_t v___x_1261_; uint8_t v___x_1262_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_a_1259_);
lean_dec_ref_known(v___x_1258_, 1);
v___x_1260_ = lean_ptr_addr(v_struct_1257_);
v___x_1261_ = lean_ptr_addr(v_a_1259_);
v___x_1262_ = lean_usize_dec_eq(v___x_1260_, v___x_1261_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
lean_inc(v_idx_1256_);
lean_inc(v_typeName_1255_);
lean_dec_ref_known(v___y_1232_, 3);
v___x_1263_ = l_Lean_Expr_proj___override(v_typeName_1255_, v_idx_1256_, v_a_1259_);
v___x_1264_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v___x_1263_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1264_;
}
else
{
lean_object* v___x_1265_; 
lean_dec(v_a_1259_);
v___x_1265_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v___y_1232_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1265_;
}
}
else
{
lean_dec_ref_known(v___y_1232_, 3);
lean_dec_ref(v_post_1215_);
lean_dec_ref(v_pre_1213_);
return v___x_1258_;
}
}
default: 
{
lean_object* v___x_1266_; 
v___x_1266_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_1213_, v_post_1215_, v_usedLetOnly_1216_, v_skipConstInApp_1217_, v_skipInstances_1218_, v___y_1232_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1266_;
}
}
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v_post_1215_);
lean_dec_ref(v_e_1214_);
lean_dec_ref(v_pre_1213_);
v_a_1276_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1226_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1226_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1291_; 
lean_dec_ref(v_post_1215_);
lean_dec_ref(v_e_1214_);
lean_dec_ref(v_pre_1213_);
v_a_1284_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1291_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1286_ = v___x_1225_;
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___x_1225_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1291_;
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
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_a_1284_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___boxed(lean_object* v___x_1292_, lean_object* v_pre_1293_, lean_object* v_e_1294_, lean_object* v_post_1295_, lean_object* v_usedLetOnly_1296_, lean_object* v_skipConstInApp_1297_, lean_object* v_skipInstances_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
uint8_t v_usedLetOnly_boxed_1305_; uint8_t v_skipConstInApp_boxed_1306_; uint8_t v_skipInstances_boxed_1307_; lean_object* v_res_1308_; 
v_usedLetOnly_boxed_1305_ = lean_unbox(v_usedLetOnly_1296_);
v_skipConstInApp_boxed_1306_ = lean_unbox(v_skipConstInApp_1297_);
v_skipInstances_boxed_1307_ = lean_unbox(v_skipInstances_1298_);
v_res_1308_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1(v___x_1292_, v_pre_1293_, v_e_1294_, v_post_1295_, v_usedLetOnly_boxed_1305_, v_skipConstInApp_boxed_1306_, v_skipInstances_boxed_1307_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(lean_object* v_pre_1309_, lean_object* v_post_1310_, uint8_t v_usedLetOnly_1311_, uint8_t v_skipConstInApp_1312_, uint8_t v_skipInstances_1313_, lean_object* v_e_1314_, lean_object* v_a_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
lean_inc(v_a_1315_);
v___x_1321_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1321_, 0, lean_box(0));
lean_closure_set(v___x_1321_, 1, lean_box(0));
lean_closure_set(v___x_1321_, 2, v_a_1315_);
v___x_1322_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__0(lean_box(0), v___x_1321_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1357_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1325_ = v___x_1322_;
v_isShared_1326_ = v_isSharedCheck_1357_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1322_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1357_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; 
v___x_1327_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4___redArg(v_a_1323_, v_e_1314_);
lean_dec(v_a_1323_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___f_1332_; lean_object* v___x_1333_; 
lean_del_object(v___x_1325_);
v___x_1328_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___closed__0));
v___x_1329_ = lean_box(v_usedLetOnly_1311_);
v___x_1330_ = lean_box(v_skipConstInApp_1312_);
v___x_1331_ = lean_box(v_skipInstances_1313_);
lean_inc_ref(v_e_1314_);
v___f_1332_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__1___boxed), 13, 7);
lean_closure_set(v___f_1332_, 0, v___x_1328_);
lean_closure_set(v___f_1332_, 1, v_pre_1309_);
lean_closure_set(v___f_1332_, 2, v_e_1314_);
lean_closure_set(v___f_1332_, 3, v_post_1310_);
lean_closure_set(v___f_1332_, 4, v___x_1329_);
lean_closure_set(v___f_1332_, 5, v___x_1330_);
lean_closure_set(v___f_1332_, 6, v___x_1331_);
v___x_1333_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9___redArg(v___f_1332_, v_a_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v___f_1335_; lean_object* v___x_1336_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc_n(v_a_1334_, 2);
lean_dec_ref_known(v___x_1333_, 1);
lean_inc(v_a_1315_);
v___f_1335_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1335_, 0, v_a_1315_);
lean_closure_set(v___f_1335_, 1, v_e_1314_);
lean_closure_set(v___f_1335_, 2, v_a_1334_);
v___x_1336_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___lam__0(lean_box(0), v___f_1335_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1343_; 
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1343_ == 0)
{
lean_object* v_unused_1344_; 
v_unused_1344_ = lean_ctor_get(v___x_1336_, 0);
lean_dec(v_unused_1344_);
v___x_1338_ = v___x_1336_;
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
else
{
lean_dec(v___x_1336_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 0, v_a_1334_);
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1334_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
lean_dec(v_a_1334_);
v_a_1345_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1336_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1336_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1350_; 
if (v_isShared_1348_ == 0)
{
v___x_1350_ = v___x_1347_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1345_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
}
else
{
lean_dec_ref(v_e_1314_);
return v___x_1333_;
}
}
else
{
lean_object* v_val_1353_; lean_object* v___x_1355_; 
lean_dec_ref(v_e_1314_);
lean_dec_ref(v_post_1310_);
lean_dec_ref(v_pre_1309_);
v_val_1353_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_val_1353_);
lean_dec_ref_known(v___x_1327_, 1);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 0, v_val_1353_);
v___x_1355_ = v___x_1325_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_val_1353_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
}
else
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
lean_dec_ref(v_e_1314_);
lean_dec_ref(v_post_1310_);
lean_dec_ref(v_pre_1309_);
v_a_1358_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___x_1322_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___x_1322_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5(lean_object* v_pre_1366_, lean_object* v_post_1367_, uint8_t v_usedLetOnly_1368_, uint8_t v_skipConstInApp_1369_, uint8_t v_skipInstances_1370_, lean_object* v_fvars_1371_, lean_object* v_e_1372_, lean_object* v_a_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
if (lean_obj_tag(v_e_1372_) == 7)
{
lean_object* v_binderName_1379_; lean_object* v_binderType_1380_; lean_object* v_body_1381_; uint8_t v_binderInfo_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___f_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v_binderName_1379_ = lean_ctor_get(v_e_1372_, 0);
lean_inc(v_binderName_1379_);
v_binderType_1380_ = lean_ctor_get(v_e_1372_, 1);
lean_inc_ref(v_binderType_1380_);
v_body_1381_ = lean_ctor_get(v_e_1372_, 2);
lean_inc_ref(v_body_1381_);
v_binderInfo_1382_ = lean_ctor_get_uint8(v_e_1372_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1372_, 3);
v___x_1383_ = lean_box(v_usedLetOnly_1368_);
v___x_1384_ = lean_box(v_skipConstInApp_1369_);
v___x_1385_ = lean_box(v_skipInstances_1370_);
lean_inc_ref(v_post_1367_);
lean_inc_ref(v_pre_1366_);
lean_inc_ref(v_fvars_1371_);
v___f_1386_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1386_, 0, v_fvars_1371_);
lean_closure_set(v___f_1386_, 1, v_pre_1366_);
lean_closure_set(v___f_1386_, 2, v_post_1367_);
lean_closure_set(v___f_1386_, 3, v___x_1383_);
lean_closure_set(v___f_1386_, 4, v___x_1384_);
lean_closure_set(v___f_1386_, 5, v___x_1385_);
lean_closure_set(v___f_1386_, 6, v_body_1381_);
v___x_1387_ = lean_expr_instantiate_rev(v_binderType_1380_, v_fvars_1371_);
lean_dec_ref(v_fvars_1371_);
lean_dec_ref(v_binderType_1380_);
v___x_1388_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1366_, v_post_1367_, v_usedLetOnly_1368_, v_skipConstInApp_1369_, v_skipInstances_1370_, v___x_1387_, v_a_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; uint8_t v___x_1390_; lean_object* v___x_1391_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
lean_inc(v_a_1389_);
lean_dec_ref_known(v___x_1388_, 1);
v___x_1390_ = 0;
v___x_1391_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg(v_binderName_1379_, v_binderInfo_1382_, v_a_1389_, v___f_1386_, v___x_1390_, v_a_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
return v___x_1391_;
}
else
{
lean_dec_ref(v___f_1386_);
lean_dec(v_binderName_1379_);
return v___x_1388_;
}
}
else
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1392_ = lean_expr_instantiate_rev(v_e_1372_, v_fvars_1371_);
lean_dec_ref(v_e_1372_);
lean_inc_ref(v_post_1367_);
lean_inc_ref(v_pre_1366_);
v___x_1393_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1366_, v_post_1367_, v_usedLetOnly_1368_, v_skipConstInApp_1369_, v_skipInstances_1370_, v___x_1392_, v_a_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; uint8_t v___x_1395_; uint8_t v___x_1396_; uint8_t v___x_1397_; lean_object* v___x_1398_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref_known(v___x_1393_, 1);
v___x_1395_ = 0;
v___x_1396_ = 1;
v___x_1397_ = 1;
v___x_1398_ = l_Lean_Meta_mkForallFVars(v_fvars_1371_, v_a_1394_, v___x_1395_, v_usedLetOnly_1368_, v___x_1396_, v___x_1397_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec_ref(v_fvars_1371_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1400_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_a_1399_);
lean_dec_ref_known(v___x_1398_, 1);
v___x_1400_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_1366_, v_post_1367_, v_usedLetOnly_1368_, v_skipConstInApp_1369_, v_skipInstances_1370_, v_a_1399_, v_a_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
return v___x_1400_;
}
else
{
lean_dec_ref(v_post_1367_);
lean_dec_ref(v_pre_1366_);
return v___x_1398_;
}
}
else
{
lean_dec_ref(v_fvars_1371_);
lean_dec_ref(v_post_1367_);
lean_dec_ref(v_pre_1366_);
return v___x_1393_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5___lam__0(lean_object* v_fvars_1401_, lean_object* v_pre_1402_, lean_object* v_post_1403_, uint8_t v_usedLetOnly_1404_, uint8_t v_skipConstInApp_1405_, uint8_t v_skipInstances_1406_, lean_object* v_body_1407_, lean_object* v_x_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1415_ = lean_array_push(v_fvars_1401_, v_x_1408_);
v___x_1416_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5(v_pre_1402_, v_post_1403_, v_usedLetOnly_1404_, v_skipConstInApp_1405_, v_skipInstances_1406_, v___x_1415_, v_body_1407_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1417_, lean_object* v_post_1418_, lean_object* v_usedLetOnly_1419_, lean_object* v_skipConstInApp_1420_, lean_object* v_skipInstances_1421_, lean_object* v_e_1422_, lean_object* v_a_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
uint8_t v_usedLetOnly_boxed_1429_; uint8_t v_skipConstInApp_boxed_1430_; uint8_t v_skipInstances_boxed_1431_; lean_object* v_res_1432_; 
v_usedLetOnly_boxed_1429_ = lean_unbox(v_usedLetOnly_1419_);
v_skipConstInApp_boxed_1430_ = lean_unbox(v_skipConstInApp_1420_);
v_skipInstances_boxed_1431_ = lean_unbox(v_skipInstances_1421_);
v_res_1432_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1418_, v_usedLetOnly_boxed_1429_, v_skipConstInApp_boxed_1430_, v_skipInstances_boxed_1431_, v_e_1422_, v_a_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
lean_dec(v_a_1423_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_1433_, lean_object* v_post_1434_, lean_object* v_usedLetOnly_1435_, lean_object* v_skipConstInApp_1436_, lean_object* v_skipInstances_1437_, lean_object* v_sz_1438_, lean_object* v_i_1439_, lean_object* v_bs_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
uint8_t v_usedLetOnly_boxed_1447_; uint8_t v_skipConstInApp_boxed_1448_; uint8_t v_skipInstances_boxed_1449_; size_t v_sz_boxed_1450_; size_t v_i_boxed_1451_; lean_object* v_res_1452_; 
v_usedLetOnly_boxed_1447_ = lean_unbox(v_usedLetOnly_1435_);
v_skipConstInApp_boxed_1448_ = lean_unbox(v_skipConstInApp_1436_);
v_skipInstances_boxed_1449_ = lean_unbox(v_skipInstances_1437_);
v_sz_boxed_1450_ = lean_unbox_usize(v_sz_1438_);
lean_dec(v_sz_1438_);
v_i_boxed_1451_ = lean_unbox_usize(v_i_1439_);
lean_dec(v_i_1439_);
v_res_1452_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__1(v_pre_1433_, v_post_1434_, v_usedLetOnly_boxed_1447_, v_skipConstInApp_boxed_1448_, v_skipInstances_boxed_1449_, v_sz_boxed_1450_, v_i_boxed_1451_, v_bs_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v___y_1441_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0___boxed(lean_object* v_pre_1453_, lean_object* v_post_1454_, lean_object* v_usedLetOnly_1455_, lean_object* v_skipConstInApp_1456_, lean_object* v_skipInstances_1457_, lean_object* v_e_1458_, lean_object* v_a_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
uint8_t v_usedLetOnly_boxed_1465_; uint8_t v_skipConstInApp_boxed_1466_; uint8_t v_skipInstances_boxed_1467_; lean_object* v_res_1468_; 
v_usedLetOnly_boxed_1465_ = lean_unbox(v_usedLetOnly_1455_);
v_skipConstInApp_boxed_1466_ = lean_unbox(v_skipConstInApp_1456_);
v_skipInstances_boxed_1467_ = lean_unbox(v_skipInstances_1457_);
v_res_1468_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1453_, v_post_1454_, v_usedLetOnly_boxed_1465_, v_skipConstInApp_boxed_1466_, v_skipInstances_boxed_1467_, v_e_1458_, v_a_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v_a_1459_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5___boxed(lean_object* v_pre_1469_, lean_object* v_post_1470_, lean_object* v_usedLetOnly_1471_, lean_object* v_skipConstInApp_1472_, lean_object* v_skipInstances_1473_, lean_object* v_fvars_1474_, lean_object* v_e_1475_, lean_object* v_a_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
uint8_t v_usedLetOnly_boxed_1482_; uint8_t v_skipConstInApp_boxed_1483_; uint8_t v_skipInstances_boxed_1484_; lean_object* v_res_1485_; 
v_usedLetOnly_boxed_1482_ = lean_unbox(v_usedLetOnly_1471_);
v_skipConstInApp_boxed_1483_ = lean_unbox(v_skipConstInApp_1472_);
v_skipInstances_boxed_1484_ = lean_unbox(v_skipInstances_1473_);
v_res_1485_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5(v_pre_1469_, v_post_1470_, v_usedLetOnly_boxed_1482_, v_skipConstInApp_boxed_1483_, v_skipInstances_boxed_1484_, v_fvars_1474_, v_e_1475_, v_a_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v_a_1476_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6___boxed(lean_object* v_pre_1486_, lean_object* v_post_1487_, lean_object* v_usedLetOnly_1488_, lean_object* v_skipConstInApp_1489_, lean_object* v_skipInstances_1490_, lean_object* v_fvars_1491_, lean_object* v_e_1492_, lean_object* v_a_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
uint8_t v_usedLetOnly_boxed_1499_; uint8_t v_skipConstInApp_boxed_1500_; uint8_t v_skipInstances_boxed_1501_; lean_object* v_res_1502_; 
v_usedLetOnly_boxed_1499_ = lean_unbox(v_usedLetOnly_1488_);
v_skipConstInApp_boxed_1500_ = lean_unbox(v_skipConstInApp_1489_);
v_skipInstances_boxed_1501_ = lean_unbox(v_skipInstances_1490_);
v_res_1502_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__6(v_pre_1486_, v_post_1487_, v_usedLetOnly_boxed_1499_, v_skipConstInApp_boxed_1500_, v_skipInstances_boxed_1501_, v_fvars_1491_, v_e_1492_, v_a_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec(v_a_1493_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7___boxed(lean_object* v_pre_1503_, lean_object* v_post_1504_, lean_object* v_usedLetOnly_1505_, lean_object* v_skipConstInApp_1506_, lean_object* v_skipInstances_1507_, lean_object* v_fvars_1508_, lean_object* v_e_1509_, lean_object* v_a_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
uint8_t v_usedLetOnly_boxed_1516_; uint8_t v_skipConstInApp_boxed_1517_; uint8_t v_skipInstances_boxed_1518_; lean_object* v_res_1519_; 
v_usedLetOnly_boxed_1516_ = lean_unbox(v_usedLetOnly_1505_);
v_skipConstInApp_boxed_1517_ = lean_unbox(v_skipConstInApp_1506_);
v_skipInstances_boxed_1518_ = lean_unbox(v_skipInstances_1507_);
v_res_1519_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7(v_pre_1503_, v_post_1504_, v_usedLetOnly_boxed_1516_, v_skipConstInApp_boxed_1517_, v_skipInstances_boxed_1518_, v_fvars_1508_, v_e_1509_, v_a_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
lean_dec(v_a_1510_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_upperBound_1520_, lean_object* v___x_1521_, lean_object* v_pre_1522_, lean_object* v_post_1523_, lean_object* v_usedLetOnly_1524_, lean_object* v_skipConstInApp_1525_, lean_object* v_skipInstances_1526_, lean_object* v_a_1527_, lean_object* v_b_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
uint8_t v_usedLetOnly_boxed_1535_; uint8_t v_skipConstInApp_boxed_1536_; uint8_t v_skipInstances_boxed_1537_; lean_object* v_res_1538_; 
v_usedLetOnly_boxed_1535_ = lean_unbox(v_usedLetOnly_1524_);
v_skipConstInApp_boxed_1536_ = lean_unbox(v_skipConstInApp_1525_);
v_skipInstances_boxed_1537_ = lean_unbox(v_skipInstances_1526_);
v_res_1538_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg(v_upperBound_1520_, v___x_1521_, v_pre_1522_, v_post_1523_, v_usedLetOnly_boxed_1535_, v_skipConstInApp_boxed_1536_, v_skipInstances_boxed_1537_, v_a_1527_, v_b_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec_ref(v___x_1521_);
lean_dec(v_upperBound_1520_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__8___boxed(lean_object* v_skipInstances_1539_, lean_object* v_pre_1540_, lean_object* v_post_1541_, lean_object* v_usedLetOnly_1542_, lean_object* v_skipConstInApp_1543_, lean_object* v_x_1544_, lean_object* v_x_1545_, lean_object* v_x_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
uint8_t v_skipInstances_boxed_1553_; uint8_t v_usedLetOnly_boxed_1554_; uint8_t v_skipConstInApp_boxed_1555_; lean_object* v_res_1556_; 
v_skipInstances_boxed_1553_ = lean_unbox(v_skipInstances_1539_);
v_usedLetOnly_boxed_1554_ = lean_unbox(v_usedLetOnly_1542_);
v_skipConstInApp_boxed_1555_ = lean_unbox(v_skipConstInApp_1543_);
v_res_1556_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__8(v_skipInstances_boxed_1553_, v_pre_1540_, v_post_1541_, v_usedLetOnly_boxed_1554_, v_skipConstInApp_boxed_1555_, v_x_1544_, v_x_1545_, v_x_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
return v_res_1556_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1557_ = lean_box(0);
v___x_1558_ = lean_unsigned_to_nat(16u);
v___x_1559_ = lean_mk_array(v___x_1558_, v___x_1557_);
return v___x_1559_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1560_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__0);
v___x_1561_ = lean_unsigned_to_nat(0u);
v___x_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
lean_ctor_set(v___x_1562_, 1, v___x_1560_);
return v___x_1562_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1);
v___x_1564_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1564_, 0, lean_box(0));
lean_closure_set(v___x_1564_, 1, lean_box(0));
lean_closure_set(v___x_1564_, 2, v___x_1563_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0(lean_object* v_input_1565_, lean_object* v_pre_1566_, lean_object* v_post_1567_, uint8_t v_usedLetOnly_1568_, uint8_t v_skipConstInApp_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
uint8_t v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v_a_1578_; lean_object* v___x_1579_; 
v___x_1575_ = 0;
v___x_1576_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__2);
v___x_1577_ = l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___lam__0(lean_box(0), v___x_1576_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1578_);
lean_dec_ref(v___x_1577_);
v___x_1579_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0(v_pre_1566_, v_post_1567_, v_usedLetOnly_1568_, v_skipConstInApp_1569_, v___x_1575_, v_input_1565_, v_a_1578_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1580_);
lean_dec_ref_known(v___x_1579_, 1);
v___x_1581_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1581_, 0, lean_box(0));
lean_closure_set(v___x_1581_, 1, lean_box(0));
lean_closure_set(v___x_1581_, 2, v_a_1578_);
v___x_1582_ = l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___lam__0(lean_box(0), v___x_1581_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1589_ == 0)
{
lean_object* v_unused_1590_; 
v_unused_1590_ = lean_ctor_get(v___x_1582_, 0);
lean_dec(v_unused_1590_);
v___x_1584_ = v___x_1582_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_dec(v___x_1582_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v_a_1580_);
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1580_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
else
{
lean_dec(v_a_1578_);
return v___x_1579_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___boxed(lean_object* v_input_1591_, lean_object* v_pre_1592_, lean_object* v_post_1593_, lean_object* v_usedLetOnly_1594_, lean_object* v_skipConstInApp_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
uint8_t v_usedLetOnly_boxed_1601_; uint8_t v_skipConstInApp_boxed_1602_; lean_object* v_res_1603_; 
v_usedLetOnly_boxed_1601_ = lean_unbox(v_usedLetOnly_1594_);
v_skipConstInApp_boxed_1602_ = lean_unbox(v_skipConstInApp_1595_);
v_res_1603_ = l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0(v_input_1591_, v_pre_1592_, v_post_1593_, v_usedLetOnly_boxed_1601_, v_skipConstInApp_boxed_1602_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object* v_e_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_){
_start:
{
lean_object* v___f_1612_; lean_object* v___x_1613_; lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1625_; 
v___f_1612_ = ((lean_object*)(l_Lean_Meta_Sym_unfoldReducible___closed__0));
v___x_1613_ = l_Lean_Meta_Sym_isUnfoldReducibleTarget___redArg(v_e_1606_, v_a_1610_);
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1616_ = v___x_1613_;
v_isShared_1617_ = v_isSharedCheck_1625_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1613_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1625_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
uint8_t v___x_1618_; 
v___x_1618_ = lean_unbox(v_a_1614_);
lean_dec(v_a_1614_);
if (v___x_1618_ == 0)
{
lean_object* v___x_1620_; 
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 0, v_e_1606_);
v___x_1620_ = v___x_1616_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_e_1606_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
else
{
uint8_t v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
lean_del_object(v___x_1616_);
v___x_1622_ = 0;
v___x_1623_ = ((lean_object*)(l_Lean_Meta_Sym_unfoldReducible___closed__1));
v___x_1624_ = l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0(v_e_1606_, v___x_1623_, v___f_1612_, v___x_1622_, v___x_1622_, v_a_1607_, v_a_1608_, v_a_1609_, v_a_1610_);
return v___x_1624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_unfoldReducible___boxed(lean_object* v_e_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_Meta_Sym_unfoldReducible(v_e_1626_, v_a_1627_, v_a_1628_, v_a_1629_, v_a_1630_);
lean_dec(v_a_1630_);
lean_dec_ref(v_a_1629_);
lean_dec(v_a_1628_);
lean_dec_ref(v_a_1627_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3(lean_object* v_upperBound_1633_, lean_object* v___x_1634_, lean_object* v_pre_1635_, lean_object* v_post_1636_, uint8_t v_usedLetOnly_1637_, uint8_t v_skipConstInApp_1638_, uint8_t v_skipInstances_1639_, lean_object* v___x_1640_, lean_object* v_inst_1641_, lean_object* v_R_1642_, lean_object* v_a_1643_, lean_object* v_b_1644_, lean_object* v_c_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___redArg(v_upperBound_1633_, v___x_1634_, v_pre_1635_, v_post_1636_, v_usedLetOnly_1637_, v_skipConstInApp_1638_, v_skipInstances_1639_, v_a_1643_, v_b_1644_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3___boxed(lean_object** _args){
lean_object* v_upperBound_1653_ = _args[0];
lean_object* v___x_1654_ = _args[1];
lean_object* v_pre_1655_ = _args[2];
lean_object* v_post_1656_ = _args[3];
lean_object* v_usedLetOnly_1657_ = _args[4];
lean_object* v_skipConstInApp_1658_ = _args[5];
lean_object* v_skipInstances_1659_ = _args[6];
lean_object* v___x_1660_ = _args[7];
lean_object* v_inst_1661_ = _args[8];
lean_object* v_R_1662_ = _args[9];
lean_object* v_a_1663_ = _args[10];
lean_object* v_b_1664_ = _args[11];
lean_object* v_c_1665_ = _args[12];
lean_object* v___y_1666_ = _args[13];
lean_object* v___y_1667_ = _args[14];
lean_object* v___y_1668_ = _args[15];
lean_object* v___y_1669_ = _args[16];
lean_object* v___y_1670_ = _args[17];
lean_object* v___y_1671_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_1672_; uint8_t v_skipConstInApp_boxed_1673_; uint8_t v_skipInstances_boxed_1674_; lean_object* v_res_1675_; 
v_usedLetOnly_boxed_1672_ = lean_unbox(v_usedLetOnly_1657_);
v_skipConstInApp_boxed_1673_ = lean_unbox(v_skipConstInApp_1658_);
v_skipInstances_boxed_1674_ = lean_unbox(v_skipInstances_1659_);
v_res_1675_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__3(v_upperBound_1653_, v___x_1654_, v_pre_1655_, v_post_1656_, v_usedLetOnly_boxed_1672_, v_skipConstInApp_boxed_1673_, v_skipInstances_boxed_1674_, v___x_1660_, v_inst_1661_, v_R_1662_, v_a_1663_, v_b_1664_, v_c_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
lean_dec(v___y_1666_);
lean_dec(v___x_1660_);
lean_dec_ref(v___x_1654_);
lean_dec(v_upperBound_1653_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_1676_, lean_object* v_m_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4___redArg(v_m_1677_, v_a_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_1680_, lean_object* v_m_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4(v_00_u03b2_1680_, v_m_1681_, v_a_1682_);
lean_dec_ref(v_a_1682_);
lean_dec_ref(v_m_1681_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1684_, lean_object* v_name_1685_, uint8_t v_bi_1686_, lean_object* v_type_1687_, lean_object* v_k_1688_, uint8_t v_kind_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___redArg(v_name_1685_, v_bi_1686_, v_type_1687_, v_k_1688_, v_kind_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1697_, lean_object* v_name_1698_, lean_object* v_bi_1699_, lean_object* v_type_1700_, lean_object* v_k_1701_, lean_object* v_kind_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_){
_start:
{
uint8_t v_bi_boxed_1709_; uint8_t v_kind_boxed_1710_; lean_object* v_res_1711_; 
v_bi_boxed_1709_ = lean_unbox(v_bi_1699_);
v_kind_boxed_1710_ = lean_unbox(v_kind_1702_);
v_res_1711_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1697_, v_name_1698_, v_bi_boxed_1709_, v_type_1700_, v_k_1701_, v_kind_boxed_1710_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
lean_dec(v___y_1703_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10(lean_object* v_00_u03b1_1712_, lean_object* v_name_1713_, lean_object* v_type_1714_, lean_object* v_val_1715_, lean_object* v_k_1716_, uint8_t v_nondep_1717_, uint8_t v_kind_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10___redArg(v_name_1713_, v_type_1714_, v_val_1715_, v_k_1716_, v_nondep_1717_, v_kind_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10___boxed(lean_object* v_00_u03b1_1726_, lean_object* v_name_1727_, lean_object* v_type_1728_, lean_object* v_val_1729_, lean_object* v_k_1730_, lean_object* v_nondep_1731_, lean_object* v_kind_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
uint8_t v_nondep_boxed_1739_; uint8_t v_kind_boxed_1740_; lean_object* v_res_1741_; 
v_nondep_boxed_1739_ = lean_unbox(v_nondep_1731_);
v_kind_boxed_1740_ = lean_unbox(v_kind_1732_);
v_res_1741_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__7_spec__10(v_00_u03b1_1726_, v_name_1727_, v_type_1728_, v_val_1729_, v_k_1730_, v_nondep_boxed_1739_, v_kind_boxed_1740_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
lean_dec(v___y_1733_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13(lean_object* v_00_u03b1_1742_, lean_object* v_ref_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v___x_1749_; 
v___x_1749_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___redArg(v_ref_1743_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13___boxed(lean_object* v_00_u03b1_1750_, lean_object* v_ref_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9_spec__13(v_00_u03b1_1750_, v_ref_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
lean_dec(v___y_1755_);
lean_dec_ref(v___y_1754_);
lean_dec(v___y_1753_);
lean_dec_ref(v___y_1752_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9(lean_object* v_00_u03b1_1758_, lean_object* v_x_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9___redArg(v_x_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9___boxed(lean_object* v_00_u03b1_1767_, lean_object* v_x_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__9(v_00_u03b1_1767_, v_x_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec(v___y_1769_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10(lean_object* v_00_u03b2_1776_, lean_object* v_m_1777_, lean_object* v_a_1778_, lean_object* v_b_1779_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10___redArg(v_m_1777_, v_a_1778_, v_b_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5(lean_object* v_00_u03b2_1781_, lean_object* v_a_1782_, lean_object* v_x_1783_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5___redArg(v_a_1782_, v_x_1783_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5___boxed(lean_object* v_00_u03b2_1785_, lean_object* v_a_1786_, lean_object* v_x_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__4_spec__5(v_00_u03b2_1785_, v_a_1786_, v_x_1787_);
lean_dec(v_x_1787_);
lean_dec_ref(v_a_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15(lean_object* v_00_u03b2_1789_, lean_object* v_a_1790_, lean_object* v_x_1791_){
_start:
{
uint8_t v___x_1792_; 
v___x_1792_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15___redArg(v_a_1790_, v_x_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15___boxed(lean_object* v_00_u03b2_1793_, lean_object* v_a_1794_, lean_object* v_x_1795_){
_start:
{
uint8_t v_res_1796_; lean_object* v_r_1797_; 
v_res_1796_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__15(v_00_u03b2_1793_, v_a_1794_, v_x_1795_);
lean_dec(v_x_1795_);
lean_dec_ref(v_a_1794_);
v_r_1797_ = lean_box(v_res_1796_);
return v_r_1797_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16(lean_object* v_00_u03b2_1798_, lean_object* v_data_1799_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16___redArg(v_data_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__17(lean_object* v_00_u03b2_1801_, lean_object* v_a_1802_, lean_object* v_b_1803_, lean_object* v_x_1804_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__17___redArg(v_a_1802_, v_b_1803_, v_x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17(lean_object* v_00_u03b2_1806_, lean_object* v_i_1807_, lean_object* v_source_1808_, lean_object* v_target_1809_){
_start:
{
lean_object* v___x_1810_; 
v___x_1810_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17___redArg(v_i_1807_, v_source_1808_, v_target_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18(lean_object* v_00_u03b2_1811_, lean_object* v_x_1812_, lean_object* v_x_1813_){
_start:
{
lean_object* v___x_1814_; 
v___x_1814_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18___redArg(v_x_1812_, v_x_1813_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___lam__0(lean_object* v_x_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1821_ = ((lean_object*)(l_Lean_Meta_Sym_unfoldReducibleStep___closed__0));
v___x_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___lam__0___boxed(lean_object* v_x_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lean_Meta_Sym_foldProjs___lam__0(v_x_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
lean_dec(v___y_1825_);
lean_dec_ref(v___y_1824_);
lean_dec_ref(v_x_1823_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0_spec__0(lean_object* v_msgData_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
lean_object* v___x_1836_; lean_object* v_env_1837_; uint8_t v___x_1838_; lean_object* v_env_1839_; lean_object* v___x_1840_; lean_object* v_toCold_1841_; lean_object* v_mctx_1842_; lean_object* v_lctx_1843_; lean_object* v_options_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1836_ = lean_st_ref_get(v___y_1834_);
v_env_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc_ref(v_env_1837_);
lean_dec(v___x_1836_);
v___x_1838_ = 0;
v_env_1839_ = l_Lean_Environment_setRecordingDeps(v_env_1837_, v___x_1838_);
v___x_1840_ = lean_st_ref_get(v___y_1832_);
v_toCold_1841_ = lean_ctor_get(v___y_1833_, 0);
v_mctx_1842_ = lean_ctor_get(v___x_1840_, 0);
lean_inc_ref(v_mctx_1842_);
lean_dec(v___x_1840_);
v_lctx_1843_ = lean_ctor_get(v___y_1831_, 2);
v_options_1844_ = lean_ctor_get(v_toCold_1841_, 2);
lean_inc_ref(v_options_1844_);
lean_inc_ref(v_lctx_1843_);
v___x_1845_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1845_, 0, v_env_1839_);
lean_ctor_set(v___x_1845_, 1, v_mctx_1842_);
lean_ctor_set(v___x_1845_, 2, v_lctx_1843_);
lean_ctor_set(v___x_1845_, 3, v_options_1844_);
v___x_1846_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
lean_ctor_set(v___x_1846_, 1, v_msgData_1830_);
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0_spec__0___boxed(lean_object* v_msgData_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0_spec__0(v_msgData_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
lean_dec(v___y_1850_);
lean_dec_ref(v___y_1849_);
return v_res_1854_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1855_; double v___x_1856_; 
v___x_1855_ = lean_unsigned_to_nat(0u);
v___x_1856_ = lean_float_of_nat(v___x_1855_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0(lean_object* v_cls_1860_, lean_object* v_msg_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
lean_object* v_ref_1867_; lean_object* v___x_1868_; lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1914_; 
v_ref_1867_ = lean_ctor_get(v___y_1864_, 2);
v___x_1868_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0_spec__0(v_msg_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
v_a_1869_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1871_ = v___x_1868_;
v_isShared_1872_ = v_isSharedCheck_1914_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1868_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1914_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1873_; lean_object* v_traceState_1874_; lean_object* v_env_1875_; lean_object* v_nextMacroScope_1876_; lean_object* v_ngen_1877_; lean_object* v_auxDeclNGen_1878_; lean_object* v_cache_1879_; lean_object* v_recordedDeps_1880_; lean_object* v_messages_1881_; lean_object* v_infoState_1882_; lean_object* v_snapshotTasks_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1913_; 
v___x_1873_ = lean_st_ref_take(v___y_1865_);
v_traceState_1874_ = lean_ctor_get(v___x_1873_, 4);
v_env_1875_ = lean_ctor_get(v___x_1873_, 0);
v_nextMacroScope_1876_ = lean_ctor_get(v___x_1873_, 1);
v_ngen_1877_ = lean_ctor_get(v___x_1873_, 2);
v_auxDeclNGen_1878_ = lean_ctor_get(v___x_1873_, 3);
v_cache_1879_ = lean_ctor_get(v___x_1873_, 5);
v_recordedDeps_1880_ = lean_ctor_get(v___x_1873_, 6);
v_messages_1881_ = lean_ctor_get(v___x_1873_, 7);
v_infoState_1882_ = lean_ctor_get(v___x_1873_, 8);
v_snapshotTasks_1883_ = lean_ctor_get(v___x_1873_, 9);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1885_ = v___x_1873_;
v_isShared_1886_ = v_isSharedCheck_1913_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_snapshotTasks_1883_);
lean_inc(v_infoState_1882_);
lean_inc(v_messages_1881_);
lean_inc(v_recordedDeps_1880_);
lean_inc(v_cache_1879_);
lean_inc(v_traceState_1874_);
lean_inc(v_auxDeclNGen_1878_);
lean_inc(v_ngen_1877_);
lean_inc(v_nextMacroScope_1876_);
lean_inc(v_env_1875_);
lean_dec(v___x_1873_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1913_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
uint64_t v_tid_1887_; lean_object* v_traces_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1912_; 
v_tid_1887_ = lean_ctor_get_uint64(v_traceState_1874_, sizeof(void*)*1);
v_traces_1888_ = lean_ctor_get(v_traceState_1874_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v_traceState_1874_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1890_ = v_traceState_1874_;
v_isShared_1891_ = v_isSharedCheck_1912_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_traces_1888_);
lean_dec(v_traceState_1874_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1912_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; double v___x_1894_; uint8_t v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1892_ = lean_box(0);
v___x_1893_ = lean_box(0);
v___x_1894_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0);
v___x_1895_ = 0;
v___x_1896_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__1));
v___x_1897_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1897_, 0, v_cls_1860_);
lean_ctor_set(v___x_1897_, 1, v___x_1893_);
lean_ctor_set(v___x_1897_, 2, v___x_1896_);
lean_ctor_set_float(v___x_1897_, sizeof(void*)*3, v___x_1894_);
lean_ctor_set_float(v___x_1897_, sizeof(void*)*3 + 8, v___x_1894_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*3 + 16, v___x_1895_);
v___x_1898_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__2));
v___x_1899_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1897_);
lean_ctor_set(v___x_1899_, 1, v_a_1869_);
lean_ctor_set(v___x_1899_, 2, v___x_1898_);
lean_inc(v_ref_1867_);
v___x_1900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1900_, 0, v_ref_1867_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = l_Lean_PersistentArray_push___redArg(v_traces_1888_, v___x_1900_);
if (v_isShared_1891_ == 0)
{
lean_ctor_set(v___x_1890_, 0, v___x_1901_);
v___x_1903_ = v___x_1890_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1901_);
lean_ctor_set_uint64(v_reuseFailAlloc_1911_, sizeof(void*)*1, v_tid_1887_);
v___x_1903_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
lean_object* v___x_1905_; 
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 4, v___x_1903_);
v___x_1905_ = v___x_1885_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_env_1875_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v_nextMacroScope_1876_);
lean_ctor_set(v_reuseFailAlloc_1910_, 2, v_ngen_1877_);
lean_ctor_set(v_reuseFailAlloc_1910_, 3, v_auxDeclNGen_1878_);
lean_ctor_set(v_reuseFailAlloc_1910_, 4, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1910_, 5, v_cache_1879_);
lean_ctor_set(v_reuseFailAlloc_1910_, 6, v_recordedDeps_1880_);
lean_ctor_set(v_reuseFailAlloc_1910_, 7, v_messages_1881_);
lean_ctor_set(v_reuseFailAlloc_1910_, 8, v_infoState_1882_);
lean_ctor_set(v_reuseFailAlloc_1910_, 9, v_snapshotTasks_1883_);
v___x_1905_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1906_ = lean_st_ref_put(v___y_1865_, v___x_1905_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 0, v___x_1892_);
v___x_1908_ = v___x_1871_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1892_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___boxed(lean_object* v_cls_1915_, lean_object* v_msg_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0(v_cls_1915_, v_msg_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
return v_res_1922_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1926_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_));
v___x_1927_ = ((lean_object*)(l_Lean_Meta_Sym_foldProjs___lam__1___closed__1));
v___x_1928_ = l_Lean_Name_append(v___x_1927_, v___x_1926_);
return v___x_1928_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1930_ = ((lean_object*)(l_Lean_Meta_Sym_foldProjs___lam__1___closed__3));
v___x_1931_ = l_Lean_stringToMessageData(v___x_1930_);
return v___x_1931_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1933_ = ((lean_object*)(l_Lean_Meta_Sym_foldProjs___lam__1___closed__5));
v___x_1934_ = l_Lean_stringToMessageData(v___x_1933_);
return v___x_1934_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__8(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = ((lean_object*)(l_Lean_Meta_Sym_foldProjs___lam__1___closed__7));
v___x_1937_ = l_Lean_stringToMessageData(v___x_1936_);
return v___x_1937_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__10(void){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1939_ = ((lean_object*)(l_Lean_Meta_Sym_foldProjs___lam__1___closed__9));
v___x_1940_ = l_Lean_stringToMessageData(v___x_1939_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___lam__1(lean_object* v_e_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v___y_1954_; 
if (lean_obj_tag(v_e_1944_) == 11)
{
lean_object* v_typeName_1972_; lean_object* v_idx_1973_; lean_object* v_struct_1974_; lean_object* v___x_2057_; uint8_t v___x_2058_; 
v_typeName_1972_ = lean_ctor_get(v_e_1944_, 0);
v_idx_1973_ = lean_ctor_get(v_e_1944_, 1);
v_struct_1974_ = lean_ctor_get(v_e_1944_, 2);
v___x_2057_ = ((lean_object*)(l_Lean_Meta_Sym_foldProjs___lam__1___closed__12));
v___x_2058_ = lean_name_eq(v_typeName_1972_, v___x_2057_);
if (v___x_2058_ == 0)
{
goto v___jp_1975_;
}
else
{
lean_object* v___x_2059_; uint8_t v___x_2060_; 
v___x_2059_ = lean_unsigned_to_nat(0u);
v___x_2060_ = lean_nat_dec_eq(v_idx_1973_, v___x_2059_);
if (v___x_2060_ == 0)
{
goto v___jp_1975_;
}
else
{
goto v___jp_1950_;
}
}
v___jp_1975_:
{
lean_object* v___x_1976_; lean_object* v_env_1977_; lean_object* v___x_1978_; 
v___x_1976_ = lean_st_ref_get(v___y_1948_);
v_env_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc_ref(v_env_1977_);
lean_dec(v___x_1976_);
lean_inc(v_typeName_1972_);
v___x_1978_ = l_Lean_getStructureInfo_x3f(v_env_1977_, v_typeName_1972_);
if (lean_obj_tag(v___x_1978_) == 1)
{
lean_object* v_val_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_2033_; 
v_val_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_2033_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_val_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_2033_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v_fieldNames_1983_; lean_object* v___x_1984_; uint8_t v___x_1985_; 
v_fieldNames_1983_ = lean_ctor_get(v_val_1979_, 1);
lean_inc_ref(v_fieldNames_1983_);
lean_dec(v_val_1979_);
v___x_1984_ = lean_array_get_size(v_fieldNames_1983_);
v___x_1985_ = lean_nat_dec_lt(v_idx_1973_, v___x_1984_);
if (v___x_1985_ == 0)
{
lean_object* v_toCold_1986_; lean_object* v_options_1987_; uint8_t v_hasTrace_1988_; 
lean_dec_ref(v_fieldNames_1983_);
v_toCold_1986_ = lean_ctor_get(v___y_1947_, 0);
v_options_1987_ = lean_ctor_get(v_toCold_1986_, 2);
v_hasTrace_1988_ = lean_ctor_get_uint8(v_options_1987_, sizeof(void*)*1);
if (v_hasTrace_1988_ == 0)
{
lean_del_object(v___x_1981_);
goto v___jp_1950_;
}
else
{
lean_object* v_inheritedTraceOptions_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; uint8_t v___x_1992_; 
v_inheritedTraceOptions_1989_ = lean_ctor_get(v_toCold_1986_, 11);
v___x_1990_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_));
v___x_1991_ = lean_obj_once(&l_Lean_Meta_Sym_foldProjs___lam__1___closed__2, &l_Lean_Meta_Sym_foldProjs___lam__1___closed__2_once, _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__2);
v___x_1992_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1989_, v_options_1987_, v___x_1991_);
if (v___x_1992_ == 0)
{
lean_del_object(v___x_1981_);
goto v___jp_1950_;
}
else
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1996_; 
v___x_1993_ = lean_obj_once(&l_Lean_Meta_Sym_foldProjs___lam__1___closed__4, &l_Lean_Meta_Sym_foldProjs___lam__1___closed__4_once, _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__4);
lean_inc(v_idx_1973_);
v___x_1994_ = l_Nat_reprFast(v_idx_1973_);
if (v_isShared_1982_ == 0)
{
lean_ctor_set_tag(v___x_1981_, 3);
lean_ctor_set(v___x_1981_, 0, v___x_1994_);
v___x_1996_ = v___x_1981_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_1994_);
v___x_1996_ = v_reuseFailAlloc_2012_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_1997_ = l_Lean_MessageData_ofFormat(v___x_1996_);
v___x_1998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1993_);
lean_ctor_set(v___x_1998_, 1, v___x_1997_);
v___x_1999_ = lean_obj_once(&l_Lean_Meta_Sym_foldProjs___lam__1___closed__6, &l_Lean_Meta_Sym_foldProjs___lam__1___closed__6_once, _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__6);
v___x_2000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1998_);
lean_ctor_set(v___x_2000_, 1, v___x_1999_);
lean_inc_ref(v_e_1944_);
v___x_2001_ = l_Lean_indentExpr(v_e_1944_);
v___x_2002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2000_);
lean_ctor_set(v___x_2002_, 1, v___x_2001_);
v___x_2003_ = l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0(v___x_1990_, v___x_2002_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_dec_ref_known(v___x_2003_, 1);
goto v___jp_1950_;
}
else
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2011_; 
lean_dec_ref_known(v_e_1944_, 3);
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2006_ = v___x_2003_;
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_2003_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2007_ == 0)
{
v___x_2009_ = v___x_2006_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_2004_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2013_; uint8_t v_transparency_2014_; lean_object* v___x_2015_; uint8_t v___x_2016_; uint8_t v___x_2017_; 
lean_inc_ref(v_struct_1974_);
lean_inc(v_idx_1973_);
lean_del_object(v___x_1981_);
lean_dec_ref_known(v_e_1944_, 3);
v___x_2013_ = l_Lean_Meta_Context_config(v___y_1945_);
v_transparency_2014_ = lean_ctor_get_uint8(v___x_2013_, 9);
lean_dec_ref(v___x_2013_);
v___x_2015_ = lean_array_fget(v_fieldNames_1983_, v_idx_1973_);
lean_dec(v_idx_1973_);
lean_dec_ref(v_fieldNames_1983_);
v___x_2016_ = 1;
v___x_2017_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2014_, v___x_2016_);
if (v___x_2017_ == 0)
{
lean_object* v_keyedConfig_2018_; uint8_t v_trackZetaDelta_2019_; lean_object* v_zetaDeltaSet_2020_; lean_object* v_lctx_2021_; lean_object* v_localInstances_2022_; lean_object* v_defEqCtx_x3f_2023_; lean_object* v_synthPendingDepth_2024_; lean_object* v_customCanUnfoldPredicate_x3f_2025_; uint8_t v_univApprox_2026_; uint8_t v_inTypeClassResolution_2027_; uint8_t v_cacheInferType_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v_keyedConfig_2018_ = lean_ctor_get(v___y_1945_, 0);
v_trackZetaDelta_2019_ = lean_ctor_get_uint8(v___y_1945_, sizeof(void*)*7);
v_zetaDeltaSet_2020_ = lean_ctor_get(v___y_1945_, 1);
v_lctx_2021_ = lean_ctor_get(v___y_1945_, 2);
v_localInstances_2022_ = lean_ctor_get(v___y_1945_, 3);
v_defEqCtx_x3f_2023_ = lean_ctor_get(v___y_1945_, 4);
v_synthPendingDepth_2024_ = lean_ctor_get(v___y_1945_, 5);
v_customCanUnfoldPredicate_x3f_2025_ = lean_ctor_get(v___y_1945_, 6);
v_univApprox_2026_ = lean_ctor_get_uint8(v___y_1945_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2027_ = lean_ctor_get_uint8(v___y_1945_, sizeof(void*)*7 + 2);
v_cacheInferType_2028_ = lean_ctor_get_uint8(v___y_1945_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2018_);
v___x_2029_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2016_, v_keyedConfig_2018_);
lean_inc(v_customCanUnfoldPredicate_x3f_2025_);
lean_inc(v_synthPendingDepth_2024_);
lean_inc(v_defEqCtx_x3f_2023_);
lean_inc_ref(v_localInstances_2022_);
lean_inc_ref(v_lctx_2021_);
lean_inc(v_zetaDeltaSet_2020_);
v___x_2030_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2030_, 0, v___x_2029_);
lean_ctor_set(v___x_2030_, 1, v_zetaDeltaSet_2020_);
lean_ctor_set(v___x_2030_, 2, v_lctx_2021_);
lean_ctor_set(v___x_2030_, 3, v_localInstances_2022_);
lean_ctor_set(v___x_2030_, 4, v_defEqCtx_x3f_2023_);
lean_ctor_set(v___x_2030_, 5, v_synthPendingDepth_2024_);
lean_ctor_set(v___x_2030_, 6, v_customCanUnfoldPredicate_x3f_2025_);
lean_ctor_set_uint8(v___x_2030_, sizeof(void*)*7, v_trackZetaDelta_2019_);
lean_ctor_set_uint8(v___x_2030_, sizeof(void*)*7 + 1, v_univApprox_2026_);
lean_ctor_set_uint8(v___x_2030_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2027_);
lean_ctor_set_uint8(v___x_2030_, sizeof(void*)*7 + 3, v_cacheInferType_2028_);
v___x_2031_ = l_Lean_Meta_mkProjection(v_struct_1974_, v___x_2015_, v___x_2030_, v___y_1946_, v___y_1947_, v___y_1948_);
lean_dec_ref_known(v___x_2030_, 7);
v___y_1954_ = v___x_2031_;
goto v___jp_1953_;
}
else
{
lean_object* v___x_2032_; 
v___x_2032_ = l_Lean_Meta_mkProjection(v_struct_1974_, v___x_2015_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
v___y_1954_ = v___x_2032_;
goto v___jp_1953_;
}
}
}
}
else
{
lean_object* v_toCold_2034_; lean_object* v_options_2035_; uint8_t v_hasTrace_2036_; 
lean_dec(v___x_1978_);
v_toCold_2034_ = lean_ctor_get(v___y_1947_, 0);
v_options_2035_ = lean_ctor_get(v_toCold_2034_, 2);
v_hasTrace_2036_ = lean_ctor_get_uint8(v_options_2035_, sizeof(void*)*1);
if (v_hasTrace_2036_ == 0)
{
goto v___jp_1950_;
}
else
{
lean_object* v_inheritedTraceOptions_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; 
v_inheritedTraceOptions_2037_ = lean_ctor_get(v_toCold_2034_, 11);
v___x_2038_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_));
v___x_2039_ = lean_obj_once(&l_Lean_Meta_Sym_foldProjs___lam__1___closed__2, &l_Lean_Meta_Sym_foldProjs___lam__1___closed__2_once, _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__2);
v___x_2040_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2037_, v_options_2035_, v___x_2039_);
if (v___x_2040_ == 0)
{
goto v___jp_1950_;
}
else
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2041_ = lean_obj_once(&l_Lean_Meta_Sym_foldProjs___lam__1___closed__8, &l_Lean_Meta_Sym_foldProjs___lam__1___closed__8_once, _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__8);
lean_inc(v_typeName_1972_);
v___x_2042_ = l_Lean_MessageData_ofName(v_typeName_1972_);
v___x_2043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2041_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
v___x_2044_ = lean_obj_once(&l_Lean_Meta_Sym_foldProjs___lam__1___closed__10, &l_Lean_Meta_Sym_foldProjs___lam__1___closed__10_once, _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__10);
v___x_2045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2043_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
lean_inc_ref(v_e_1944_);
v___x_2046_ = l_Lean_indentExpr(v_e_1944_);
v___x_2047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2045_);
lean_ctor_set(v___x_2047_, 1, v___x_2046_);
v___x_2048_ = l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0(v___x_2038_, v___x_2047_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_dec_ref_known(v___x_2048_, 1);
goto v___jp_1950_;
}
else
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
lean_dec_ref_known(v_e_1944_, 3);
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_2048_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2048_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
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
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2061_, 0, v_e_1944_);
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
return v___x_2062_;
}
v___jp_1950_:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1951_, 0, v_e_1944_);
v___x_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
return v___x_1952_;
}
v___jp_1953_:
{
if (lean_obj_tag(v___y_1954_) == 0)
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1963_; 
v_a_1955_ = lean_ctor_get(v___y_1954_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___y_1954_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1957_ = v___y_1954_;
v_isShared_1958_ = v_isSharedCheck_1963_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___y_1954_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1963_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1959_; lean_object* v___x_1961_; 
v___x_1959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1959_, 0, v_a_1955_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 0, v___x_1959_);
v___x_1961_ = v___x_1957_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v___x_1959_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
else
{
lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
v_a_1964_ = lean_ctor_get(v___y_1954_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___y_1954_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___y_1954_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_dec(v___y_1954_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___lam__1___boxed(lean_object* v_e_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v_res_2069_; 
v_res_2069_ = l_Lean_Meta_Sym_foldProjs___lam__1(v_e_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs(lean_object* v_e_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_){
_start:
{
lean_object* v___f_2079_; lean_object* v___x_2080_; 
v___f_2079_ = ((lean_object*)(l_Lean_Meta_Sym_foldProjs___closed__0));
v___x_2080_ = lean_find_expr(v___f_2079_, v_e_2073_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v___x_2081_; 
v___x_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2081_, 0, v_e_2073_);
return v___x_2081_;
}
else
{
lean_object* v___f_2082_; lean_object* v_post_2083_; uint8_t v___x_2084_; lean_object* v___x_2085_; 
lean_dec_ref_known(v___x_2080_, 1);
v___f_2082_ = ((lean_object*)(l_Lean_Meta_Sym_foldProjs___closed__1));
v_post_2083_ = ((lean_object*)(l_Lean_Meta_Sym_foldProjs___closed__2));
v___x_2084_ = 0;
v___x_2085_ = l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0(v_e_2073_, v___f_2082_, v_post_2083_, v___x_2084_, v___x_2084_, v_a_2074_, v_a_2075_, v_a_2076_, v_a_2077_);
return v___x_2085_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_foldProjs___boxed(lean_object* v_e_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_){
_start:
{
lean_object* v_res_2092_; 
v_res_2092_ = l_Lean_Meta_Sym_foldProjs(v_e_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_);
lean_dec(v_a_2090_);
lean_dec_ref(v_a_2089_);
lean_dec(v_a_2088_);
lean_dec_ref(v_a_2087_);
return v_res_2092_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__2(void){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2096_ = lean_box(0);
v___x_2097_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__1));
v___x_2098_ = l_Lean_mkConst(v___x_2097_, v___x_2096_);
return v___x_2098_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__5(void){
_start:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2102_ = lean_box(0);
v___x_2103_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__4));
v___x_2104_ = l_Lean_mkConst(v___x_2103_, v___x_2102_);
return v___x_2104_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__9(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2110_ = lean_box(0);
v___x_2111_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__8));
v___x_2112_ = l_Lean_mkConst(v___x_2111_, v___x_2110_);
return v___x_2112_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__12(void){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2117_ = lean_box(0);
v___x_2118_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__11));
v___x_2119_ = l_Lean_mkConst(v___x_2118_, v___x_2117_);
return v___x_2119_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__13(void){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2120_ = lean_unsigned_to_nat(0u);
v___x_2121_ = l_Lean_mkNatLit(v___x_2120_);
return v___x_2121_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__17(void){
_start:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2127_ = lean_box(0);
v___x_2128_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__16));
v___x_2129_ = l_Lean_mkConst(v___x_2128_, v___x_2127_);
return v___x_2129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs(lean_object* v_a_2130_, lean_object* v_a_2131_){
_start:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2132_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__2, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__2_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__2);
v___x_2133_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v___x_2132_, v_a_2130_, v_a_2131_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; lean_object* v_a_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
v_a_2135_ = lean_ctor_get(v___x_2133_, 1);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2133_, 2);
v___x_2136_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__5, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__5_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__5);
v___x_2137_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v___x_2136_, v_a_2130_, v_a_2135_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v_a_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
v_a_2139_ = lean_ctor_get(v___x_2137_, 1);
lean_inc(v_a_2139_);
lean_dec_ref_known(v___x_2137_, 2);
v___x_2140_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__9, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__9_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__9);
v___x_2141_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v___x_2140_, v_a_2130_, v_a_2139_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; lean_object* v_a_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
v_a_2143_ = lean_ctor_get(v___x_2141_, 1);
lean_inc(v_a_2143_);
lean_dec_ref_known(v___x_2141_, 2);
v___x_2144_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__12, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__12_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__12);
v___x_2145_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v___x_2144_, v_a_2130_, v_a_2143_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v_a_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2146_);
v_a_2147_ = lean_ctor_get(v___x_2145_, 1);
lean_inc(v_a_2147_);
lean_dec_ref_known(v___x_2145_, 2);
v___x_2148_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__13, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__13_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__13);
v___x_2149_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v___x_2148_, v_a_2130_, v_a_2147_);
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_object* v_a_2150_; lean_object* v_a_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2150_);
v_a_2151_ = lean_ctor_get(v___x_2149_, 1);
lean_inc(v_a_2151_);
lean_dec_ref_known(v___x_2149_, 2);
v___x_2152_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__17, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__17_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___closed__17);
v___x_2153_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v___x_2152_, v_a_2130_, v_a_2151_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v_a_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v_a_2154_ = lean_ctor_get(v___x_2153_, 0);
lean_inc(v_a_2154_);
v_a_2155_ = lean_ctor_get(v___x_2153_, 1);
lean_inc(v_a_2155_);
lean_dec_ref_known(v___x_2153_, 2);
v___x_2156_ = l_Lean_Int_mkType;
v___x_2157_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v___x_2156_, v_a_2130_, v_a_2155_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2167_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
v_a_2159_ = lean_ctor_get(v___x_2157_, 1);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2161_ = v___x_2157_;
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_inc(v_a_2158_);
lean_dec(v___x_2157_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2163_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_2163_, 0, v_a_2138_);
lean_ctor_set(v___x_2163_, 1, v_a_2134_);
lean_ctor_set(v___x_2163_, 2, v_a_2150_);
lean_ctor_set(v___x_2163_, 3, v_a_2146_);
lean_ctor_set(v___x_2163_, 4, v_a_2142_);
lean_ctor_set(v___x_2163_, 5, v_a_2154_);
lean_ctor_set(v___x_2163_, 6, v_a_2158_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2163_);
v___x_2165_ = v___x_2161_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2163_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v_a_2159_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
else
{
lean_object* v_a_2168_; lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2176_; 
lean_dec(v_a_2154_);
lean_dec(v_a_2150_);
lean_dec(v_a_2146_);
lean_dec(v_a_2142_);
lean_dec(v_a_2138_);
lean_dec(v_a_2134_);
v_a_2168_ = lean_ctor_get(v___x_2157_, 0);
v_a_2169_ = lean_ctor_get(v___x_2157_, 1);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2171_ = v___x_2157_;
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_inc(v_a_2168_);
lean_dec(v___x_2157_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_a_2168_);
lean_ctor_set(v_reuseFailAlloc_2175_, 1, v_a_2169_);
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
else
{
lean_object* v_a_2177_; lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2185_; 
lean_dec(v_a_2150_);
lean_dec(v_a_2146_);
lean_dec(v_a_2142_);
lean_dec(v_a_2138_);
lean_dec(v_a_2134_);
v_a_2177_ = lean_ctor_get(v___x_2153_, 0);
v_a_2178_ = lean_ctor_get(v___x_2153_, 1);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2180_ = v___x_2153_;
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_inc(v_a_2177_);
lean_dec(v___x_2153_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2183_; 
if (v_isShared_2181_ == 0)
{
v___x_2183_ = v___x_2180_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_a_2177_);
lean_ctor_set(v_reuseFailAlloc_2184_, 1, v_a_2178_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
else
{
lean_object* v_a_2186_; lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2194_; 
lean_dec(v_a_2146_);
lean_dec(v_a_2142_);
lean_dec(v_a_2138_);
lean_dec(v_a_2134_);
v_a_2186_ = lean_ctor_get(v___x_2149_, 0);
v_a_2187_ = lean_ctor_get(v___x_2149_, 1);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2189_ = v___x_2149_;
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_inc(v_a_2186_);
lean_dec(v___x_2149_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_a_2186_);
lean_ctor_set(v_reuseFailAlloc_2193_, 1, v_a_2187_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
}
else
{
lean_object* v_a_2195_; lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2203_; 
lean_dec(v_a_2142_);
lean_dec(v_a_2138_);
lean_dec(v_a_2134_);
v_a_2195_ = lean_ctor_get(v___x_2145_, 0);
v_a_2196_ = lean_ctor_get(v___x_2145_, 1);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2198_ = v___x_2145_;
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_inc(v_a_2195_);
lean_dec(v___x_2145_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2201_; 
if (v_isShared_2199_ == 0)
{
v___x_2201_ = v___x_2198_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_a_2195_);
lean_ctor_set(v_reuseFailAlloc_2202_, 1, v_a_2196_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
}
else
{
lean_object* v_a_2204_; lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2212_; 
lean_dec(v_a_2138_);
lean_dec(v_a_2134_);
v_a_2204_ = lean_ctor_get(v___x_2141_, 0);
v_a_2205_ = lean_ctor_get(v___x_2141_, 1);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2207_ = v___x_2141_;
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_inc(v_a_2204_);
lean_dec(v___x_2141_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2210_; 
if (v_isShared_2208_ == 0)
{
v___x_2210_ = v___x_2207_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2204_);
lean_ctor_set(v_reuseFailAlloc_2211_, 1, v_a_2205_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
else
{
lean_object* v_a_2213_; lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
lean_dec(v_a_2134_);
v_a_2213_ = lean_ctor_get(v___x_2137_, 0);
v_a_2214_ = lean_ctor_get(v___x_2137_, 1);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2137_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_inc(v_a_2213_);
lean_dec(v___x_2137_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2213_);
lean_ctor_set(v_reuseFailAlloc_2220_, 1, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
else
{
lean_object* v_a_2222_; lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
v_a_2222_ = lean_ctor_get(v___x_2133_, 0);
v_a_2223_ = lean_ctor_get(v___x_2133_, 1);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2133_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_inc(v_a_2222_);
lean_dec(v___x_2133_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2222_);
lean_ctor_set(v_reuseFailAlloc_2229_, 1, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs___boxed(lean_object* v_a_2231_, lean_object* v_a_2232_){
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs(v_a_2231_, v_a_2232_);
lean_dec_ref(v_a_2231_);
return v_res_2233_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Sym_SymM_run_spec__0(lean_object* v_opts_2234_, lean_object* v_opt_2235_){
_start:
{
lean_object* v_name_2236_; lean_object* v_defValue_2237_; lean_object* v_map_2238_; lean_object* v___x_2239_; 
v_name_2236_ = lean_ctor_get(v_opt_2235_, 0);
v_defValue_2237_ = lean_ctor_get(v_opt_2235_, 1);
v_map_2238_ = lean_ctor_get(v_opts_2234_, 0);
v___x_2239_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2238_, v_name_2236_);
if (lean_obj_tag(v___x_2239_) == 0)
{
uint8_t v___x_2240_; 
v___x_2240_ = lean_unbox(v_defValue_2237_);
return v___x_2240_;
}
else
{
lean_object* v_val_2241_; 
v_val_2241_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_val_2241_);
lean_dec_ref_known(v___x_2239_, 1);
if (lean_obj_tag(v_val_2241_) == 1)
{
uint8_t v_v_2242_; 
v_v_2242_ = lean_ctor_get_uint8(v_val_2241_, 0);
lean_dec_ref_known(v_val_2241_, 0);
return v_v_2242_;
}
else
{
uint8_t v___x_2243_; 
lean_dec(v_val_2241_);
v___x_2243_ = lean_unbox(v_defValue_2237_);
return v___x_2243_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Sym_SymM_run_spec__0___boxed(lean_object* v_opts_2244_, lean_object* v_opt_2245_){
_start:
{
uint8_t v_res_2246_; lean_object* v_r_2247_; 
v_res_2246_ = l_Lean_Option_get___at___00Lean_Meta_Sym_SymM_run_spec__0(v_opts_2244_, v_opt_2245_);
lean_dec_ref(v_opt_2245_);
lean_dec_ref(v_opts_2244_);
v_r_2247_ = lean_box(v_res_2246_);
return v_r_2247_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2248_; 
v___x_2248_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2248_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2249_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__0);
v___x_2250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2249_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg(){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__1);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___boxed(lean_object* v___dummy_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg();
return v_res_2254_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2255_; 
v___x_2255_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg();
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1(lean_object* v_00_u03b2_2256_){
_start:
{
lean_object* v___x_2257_; 
v___x_2257_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2(lean_object* v_msg_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_){
_start:
{
lean_object* v___f_2265_; lean_object* v___x_2211__overap_2266_; lean_object* v___x_2267_; 
v___f_2265_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2___closed__0));
v___x_2211__overap_2266_ = lean_panic_fn_borrowed(v___f_2265_, v_msg_2259_);
lean_inc(v___y_2263_);
lean_inc_ref(v___y_2262_);
lean_inc(v___y_2261_);
lean_inc_ref(v___y_2260_);
v___x_2267_ = lean_apply_5(v___x_2211__overap_2266_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_, lean_box(0));
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2___boxed(lean_object* v_msg_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
lean_object* v_res_2274_; 
v_res_2274_ = l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2(v_msg_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
return v_res_2274_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_SymM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2275_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___redArg___closed__0);
v___x_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
return v___x_2276_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_SymM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2277_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1);
v___x_2278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
lean_ctor_set(v___x_2278_, 1, v___x_2277_);
return v___x_2278_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_SymM_run___redArg___closed__5(void){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2282_ = ((lean_object*)(l_Lean_Meta_Sym_SymM_run___redArg___closed__4));
v___x_2283_ = lean_unsigned_to_nat(19u);
v___x_2284_ = lean_unsigned_to_nat(310u);
v___x_2285_ = ((lean_object*)(l_Lean_Meta_Sym_SymM_run___redArg___closed__3));
v___x_2286_ = ((lean_object*)(l_Lean_Meta_Sym_SymM_run___redArg___closed__2));
v___x_2287_ = l_mkPanicMessageWithDecl(v___x_2286_, v___x_2285_, v___x_2284_, v___x_2283_, v___x_2282_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymM_run___redArg(lean_object* v_x_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v_fst_2295_; lean_object* v_snd_2296_; lean_object* v___y_2297_; lean_object* v___y_2298_; lean_object* v___y_2299_; lean_object* v___y_2300_; lean_object* v___x_2336_; lean_object* v_env_2337_; uint8_t v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2336_ = lean_st_ref_get(v_a_2292_);
v_env_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc_ref(v_env_2337_);
lean_dec(v___x_2336_);
v___x_2338_ = 0;
v___x_2339_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2339_, 0, v_env_2337_);
lean_ctor_set_uint8(v___x_2339_, sizeof(void*)*1, v___x_2338_);
lean_ctor_set_uint8(v___x_2339_, sizeof(void*)*1 + 1, v___x_2338_);
v___x_2340_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0);
v___x_2341_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_mkSharedExprs(v___x_2339_, v___x_2340_);
lean_dec_ref_known(v___x_2339_, 1);
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_object* v_a_2342_; lean_object* v_a_2343_; 
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_a_2342_);
v_a_2343_ = lean_ctor_get(v___x_2341_, 1);
lean_inc(v_a_2343_);
lean_dec_ref_known(v___x_2341_, 2);
v_fst_2295_ = v_a_2342_;
v_snd_2296_ = v_a_2343_;
v___y_2297_ = v_a_2289_;
v___y_2298_ = v_a_2290_;
v___y_2299_ = v_a_2291_;
v___y_2300_ = v_a_2292_;
goto v___jp_2294_;
}
else
{
lean_object* v___x_2344_; lean_object* v___x_2345_; 
lean_dec_ref_known(v___x_2341_, 2);
v___x_2344_ = lean_obj_once(&l_Lean_Meta_Sym_SymM_run___redArg___closed__5, &l_Lean_Meta_Sym_SymM_run___redArg___closed__5_once, _init_l_Lean_Meta_Sym_SymM_run___redArg___closed__5);
v___x_2345_ = l_panic___at___00Lean_Meta_Sym_SymM_run_spec__2(v___x_2344_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; lean_object* v_fst_2347_; lean_object* v_snd_2348_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_a_2346_);
lean_dec_ref_known(v___x_2345_, 1);
v_fst_2347_ = lean_ctor_get(v_a_2346_, 0);
lean_inc(v_fst_2347_);
v_snd_2348_ = lean_ctor_get(v_a_2346_, 1);
lean_inc(v_snd_2348_);
lean_dec(v_a_2346_);
v_fst_2295_ = v_fst_2347_;
v_snd_2296_ = v_snd_2348_;
v___y_2297_ = v_a_2289_;
v___y_2298_ = v_a_2290_;
v___y_2299_ = v_a_2291_;
v___y_2300_ = v_a_2292_;
goto v___jp_2294_;
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
lean_dec_ref(v_x_2288_);
v_a_2349_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2345_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2345_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
v___jp_2294_:
{
lean_object* v_ref_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; uint8_t v___x_2304_; lean_object* v___x_2305_; 
v_ref_2301_ = lean_ctor_get(v___y_2299_, 2);
v___x_2302_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2299_);
v___x_2303_ = l_Lean_Meta_Sym_sym_debug;
v___x_2304_ = l_Lean_Option_get___at___00Lean_Meta_Sym_SymM_run_spec__0(v___x_2302_, v___x_2303_);
lean_dec_ref(v___x_2302_);
v___x_2305_ = l_Lean_Meta_Sym_SymExtensions_mkInitialStates();
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2306_);
lean_dec_ref_known(v___x_2305_, 1);
v___x_2307_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedConfig_default___closed__0));
v___x_2308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2308_, 0, v_fst_2295_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
v___x_2309_ = lean_obj_once(&l_Lean_Meta_Sym_SymM_run___redArg___closed__0, &l_Lean_Meta_Sym_SymM_run___redArg___closed__0_once, _init_l_Lean_Meta_Sym_SymM_run___redArg___closed__0);
v___x_2310_ = lean_box(0);
v___x_2311_ = lean_obj_once(&l_Lean_Meta_Sym_SymM_run___redArg___closed__1, &l_Lean_Meta_Sym_SymM_run___redArg___closed__1_once, _init_l_Lean_Meta_Sym_SymM_run___redArg___closed__1);
v___x_2312_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v___x_2312_, 0, v_snd_2296_);
lean_ctor_set(v___x_2312_, 1, v___x_2309_);
lean_ctor_set(v___x_2312_, 2, v___x_2309_);
lean_ctor_set(v___x_2312_, 3, v___x_2309_);
lean_ctor_set(v___x_2312_, 4, v___x_2309_);
lean_ctor_set(v___x_2312_, 5, v___x_2309_);
lean_ctor_set(v___x_2312_, 6, v___x_2309_);
lean_ctor_set(v___x_2312_, 7, v___x_2309_);
lean_ctor_set(v___x_2312_, 8, v___x_2309_);
lean_ctor_set(v___x_2312_, 9, v_a_2306_);
lean_ctor_set(v___x_2312_, 10, v___x_2310_);
lean_ctor_set(v___x_2312_, 11, v___x_2311_);
lean_ctor_set(v___x_2312_, 12, v___x_2309_);
lean_ctor_set_uint8(v___x_2312_, sizeof(void*)*13, v___x_2304_);
v___x_2313_ = lean_st_mk_ref(v___x_2312_);
lean_inc(v___y_2300_);
lean_inc_ref(v___y_2299_);
lean_inc(v___y_2298_);
lean_inc_ref(v___y_2297_);
lean_inc(v___x_2313_);
v___x_2314_ = lean_apply_7(v_x_2288_, v___x_2308_, v___x_2313_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, lean_box(0));
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2323_; 
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2317_ = v___x_2314_;
v_isShared_2318_ = v_isSharedCheck_2323_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2314_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2323_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2319_; lean_object* v___x_2321_; 
v___x_2319_ = lean_st_ref_get(v___x_2313_);
lean_dec(v___x_2313_);
lean_dec(v___x_2319_);
if (v_isShared_2318_ == 0)
{
v___x_2321_ = v___x_2317_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2315_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
else
{
lean_dec(v___x_2313_);
return v___x_2314_;
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2335_; 
lean_dec_ref(v_snd_2296_);
lean_dec_ref(v_fst_2295_);
lean_dec_ref(v_x_2288_);
v_a_2324_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2326_ = v___x_2305_;
v_isShared_2327_ = v_isSharedCheck_2335_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2305_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2335_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2333_; 
v___x_2328_ = lean_io_error_to_string(v_a_2324_);
v___x_2329_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2328_);
v___x_2330_ = l_Lean_MessageData_ofFormat(v___x_2329_);
lean_inc(v_ref_2301_);
v___x_2331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2331_, 0, v_ref_2301_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 0, v___x_2331_);
v___x_2333_ = v___x_2326_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v___x_2331_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymM_run___redArg___boxed(lean_object* v_x_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lean_Meta_Sym_SymM_run___redArg(v_x_2357_, v_a_2358_, v_a_2359_, v_a_2360_, v_a_2361_);
lean_dec(v_a_2361_);
lean_dec_ref(v_a_2360_);
lean_dec(v_a_2359_);
lean_dec_ref(v_a_2358_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymM_run(lean_object* v_00_u03b1_2364_, lean_object* v_x_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = l_Lean_Meta_Sym_SymM_run___redArg(v_x_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymM_run___boxed(lean_object* v_00_u03b1_2372_, lean_object* v_x_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l_Lean_Meta_Sym_SymM_run(v_00_u03b1_2372_, v_x_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_);
lean_dec(v_a_2377_);
lean_dec_ref(v_a_2376_);
lean_dec(v_a_2375_);
lean_dec_ref(v_a_2374_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getSharedExprs___redArg(lean_object* v_a_2380_){
_start:
{
lean_object* v_sharedExprs_2382_; lean_object* v___x_2383_; 
v_sharedExprs_2382_ = lean_ctor_get(v_a_2380_, 0);
lean_inc_ref(v_sharedExprs_2382_);
v___x_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2383_, 0, v_sharedExprs_2382_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getSharedExprs___redArg___boxed(lean_object* v_a_2384_, lean_object* v_a_2385_){
_start:
{
lean_object* v_res_2386_; 
v_res_2386_ = l_Lean_Meta_Sym_getSharedExprs___redArg(v_a_2384_);
lean_dec_ref(v_a_2384_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getSharedExprs(lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_Lean_Meta_Sym_getSharedExprs___redArg(v_a_2387_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getSharedExprs___boxed(lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lean_Meta_Sym_getSharedExprs(v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_);
lean_dec(v_a_2400_);
lean_dec_ref(v_a_2399_);
lean_dec(v_a_2398_);
lean_dec_ref(v_a_2397_);
lean_dec(v_a_2396_);
lean_dec_ref(v_a_2395_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object* v_a_2403_){
_start:
{
lean_object* v___x_2405_; lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2414_; 
v___x_2405_ = l_Lean_Meta_Sym_getSharedExprs___redArg(v_a_2403_);
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2408_ = v___x_2405_;
v_isShared_2409_ = v_isSharedCheck_2414_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2405_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2414_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v_trueExpr_2410_; lean_object* v___x_2412_; 
v_trueExpr_2410_ = lean_ctor_get(v_a_2406_, 0);
lean_inc_ref(v_trueExpr_2410_);
lean_dec(v_a_2406_);
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v_trueExpr_2410_);
v___x_2412_ = v___x_2408_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_trueExpr_2410_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg___boxed(lean_object* v_a_2415_, lean_object* v_a_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_2415_);
lean_dec_ref(v_a_2415_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getTrueExpr(lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_){
_start:
{
lean_object* v___x_2425_; 
v___x_2425_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_2418_);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getTrueExpr___boxed(lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l_Lean_Meta_Sym_getTrueExpr(v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_, v_a_2431_);
lean_dec(v_a_2431_);
lean_dec_ref(v_a_2430_);
lean_dec(v_a_2429_);
lean_dec_ref(v_a_2428_);
lean_dec(v_a_2427_);
lean_dec_ref(v_a_2426_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg(lean_object* v_e_2434_, lean_object* v_a_2435_){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_2435_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2449_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2440_ = v___x_2437_;
v_isShared_2441_ = v_isSharedCheck_2449_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_a_2438_);
lean_dec(v___x_2437_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2449_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
size_t v___x_2442_; size_t v___x_2443_; uint8_t v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2447_; 
v___x_2442_ = lean_ptr_addr(v_e_2434_);
v___x_2443_ = lean_ptr_addr(v_a_2438_);
lean_dec(v_a_2438_);
v___x_2444_ = lean_usize_dec_eq(v___x_2442_, v___x_2443_);
v___x_2445_ = lean_box(v___x_2444_);
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v___x_2445_);
v___x_2447_ = v___x_2440_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v___x_2445_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
else
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2457_; 
v_a_2450_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2452_ = v___x_2437_;
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2437_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2455_; 
if (v_isShared_2453_ == 0)
{
v___x_2455_ = v___x_2452_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_a_2450_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg___boxed(lean_object* v_e_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_2458_, v_a_2459_);
lean_dec_ref(v_a_2459_);
lean_dec_ref(v_e_2458_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isTrueExpr(lean_object* v_e_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_2462_, v_a_2463_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isTrueExpr___boxed(lean_object* v_e_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l_Lean_Meta_Sym_isTrueExpr(v_e_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_);
lean_dec(v_a_2477_);
lean_dec_ref(v_a_2476_);
lean_dec(v_a_2475_);
lean_dec_ref(v_a_2474_);
lean_dec(v_a_2473_);
lean_dec_ref(v_a_2472_);
lean_dec_ref(v_e_2471_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object* v_a_2480_){
_start:
{
lean_object* v___x_2482_; lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2491_; 
v___x_2482_ = l_Lean_Meta_Sym_getSharedExprs___redArg(v_a_2480_);
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2485_ = v___x_2482_;
v_isShared_2486_ = v_isSharedCheck_2491_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2482_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2491_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v_falseExpr_2487_; lean_object* v___x_2489_; 
v_falseExpr_2487_ = lean_ctor_get(v_a_2483_, 1);
lean_inc_ref(v_falseExpr_2487_);
lean_dec(v_a_2483_);
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 0, v_falseExpr_2487_);
v___x_2489_ = v___x_2485_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_falseExpr_2487_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg___boxed(lean_object* v_a_2492_, lean_object* v_a_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_2492_);
lean_dec_ref(v_a_2492_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getFalseExpr(lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_){
_start:
{
lean_object* v___x_2502_; 
v___x_2502_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_2495_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getFalseExpr___boxed(lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_){
_start:
{
lean_object* v_res_2510_; 
v_res_2510_ = l_Lean_Meta_Sym_getFalseExpr(v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
lean_dec(v_a_2508_);
lean_dec_ref(v_a_2507_);
lean_dec(v_a_2506_);
lean_dec_ref(v_a_2505_);
lean_dec(v_a_2504_);
lean_dec_ref(v_a_2503_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object* v_e_2511_, lean_object* v_a_2512_){
_start:
{
lean_object* v___x_2514_; 
v___x_2514_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_2512_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2526_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2517_ = v___x_2514_;
v_isShared_2518_ = v_isSharedCheck_2526_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2514_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2526_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
size_t v___x_2519_; size_t v___x_2520_; uint8_t v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2524_; 
v___x_2519_ = lean_ptr_addr(v_e_2511_);
v___x_2520_ = lean_ptr_addr(v_a_2515_);
lean_dec(v_a_2515_);
v___x_2521_ = lean_usize_dec_eq(v___x_2519_, v___x_2520_);
v___x_2522_ = lean_box(v___x_2521_);
if (v_isShared_2518_ == 0)
{
lean_ctor_set(v___x_2517_, 0, v___x_2522_);
v___x_2524_ = v___x_2517_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v___x_2522_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
else
{
lean_object* v_a_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2534_; 
v_a_2527_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2529_ = v___x_2514_;
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_a_2527_);
lean_dec(v___x_2514_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2532_; 
if (v_isShared_2530_ == 0)
{
v___x_2532_ = v___x_2529_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_a_2527_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg___boxed(lean_object* v_e_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_2535_, v_a_2536_);
lean_dec_ref(v_a_2536_);
lean_dec_ref(v_e_2535_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isFalseExpr(lean_object* v_e_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_){
_start:
{
lean_object* v___x_2547_; 
v___x_2547_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_2539_, v_a_2540_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isFalseExpr___boxed(lean_object* v_e_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_){
_start:
{
lean_object* v_res_2556_; 
v_res_2556_ = l_Lean_Meta_Sym_isFalseExpr(v_e_2548_, v_a_2549_, v_a_2550_, v_a_2551_, v_a_2552_, v_a_2553_, v_a_2554_);
lean_dec(v_a_2554_);
lean_dec_ref(v_a_2553_);
lean_dec(v_a_2552_);
lean_dec_ref(v_a_2551_);
lean_dec(v_a_2550_);
lean_dec_ref(v_a_2549_);
lean_dec_ref(v_e_2548_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object* v_a_2557_){
_start:
{
lean_object* v___x_2559_; lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2568_; 
v___x_2559_ = l_Lean_Meta_Sym_getSharedExprs___redArg(v_a_2557_);
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2562_ = v___x_2559_;
v_isShared_2563_ = v_isSharedCheck_2568_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v___x_2559_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2568_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v_btrueExpr_2564_; lean_object* v___x_2566_; 
v_btrueExpr_2564_ = lean_ctor_get(v_a_2560_, 3);
lean_inc_ref(v_btrueExpr_2564_);
lean_dec(v_a_2560_);
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 0, v_btrueExpr_2564_);
v___x_2566_ = v___x_2562_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_btrueExpr_2564_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg___boxed(lean_object* v_a_2569_, lean_object* v_a_2570_){
_start:
{
lean_object* v_res_2571_; 
v_res_2571_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_2569_);
lean_dec_ref(v_a_2569_);
return v_res_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolTrueExpr(lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_){
_start:
{
lean_object* v___x_2579_; 
v___x_2579_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_2572_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___boxed(lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l_Lean_Meta_Sym_getBoolTrueExpr(v_a_2580_, v_a_2581_, v_a_2582_, v_a_2583_, v_a_2584_, v_a_2585_);
lean_dec(v_a_2585_);
lean_dec_ref(v_a_2584_);
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
lean_dec(v_a_2581_);
lean_dec_ref(v_a_2580_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolTrueExpr___redArg(lean_object* v_e_2588_, lean_object* v_a_2589_){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_2589_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_a_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2603_; 
v_a_2592_ = lean_ctor_get(v___x_2591_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2594_ = v___x_2591_;
v_isShared_2595_ = v_isSharedCheck_2603_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_a_2592_);
lean_dec(v___x_2591_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2603_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
size_t v___x_2596_; size_t v___x_2597_; uint8_t v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2601_; 
v___x_2596_ = lean_ptr_addr(v_e_2588_);
v___x_2597_ = lean_ptr_addr(v_a_2592_);
lean_dec(v_a_2592_);
v___x_2598_ = lean_usize_dec_eq(v___x_2596_, v___x_2597_);
v___x_2599_ = lean_box(v___x_2598_);
if (v_isShared_2595_ == 0)
{
lean_ctor_set(v___x_2594_, 0, v___x_2599_);
v___x_2601_ = v___x_2594_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v___x_2599_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2611_; 
v_a_2604_ = lean_ctor_get(v___x_2591_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2606_ = v___x_2591_;
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_a_2604_);
lean_dec(v___x_2591_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2609_; 
if (v_isShared_2607_ == 0)
{
v___x_2609_ = v___x_2606_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2604_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolTrueExpr___redArg___boxed(lean_object* v_e_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lean_Meta_Sym_isBoolTrueExpr___redArg(v_e_2612_, v_a_2613_);
lean_dec_ref(v_a_2613_);
lean_dec_ref(v_e_2612_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolTrueExpr(lean_object* v_e_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_){
_start:
{
lean_object* v___x_2624_; 
v___x_2624_ = l_Lean_Meta_Sym_isBoolTrueExpr___redArg(v_e_2616_, v_a_2617_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolTrueExpr___boxed(lean_object* v_e_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_, lean_object* v_a_2631_, lean_object* v_a_2632_){
_start:
{
lean_object* v_res_2633_; 
v_res_2633_ = l_Lean_Meta_Sym_isBoolTrueExpr(v_e_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_, v_a_2631_);
lean_dec(v_a_2631_);
lean_dec_ref(v_a_2630_);
lean_dec(v_a_2629_);
lean_dec_ref(v_a_2628_);
lean_dec(v_a_2627_);
lean_dec_ref(v_a_2626_);
lean_dec_ref(v_e_2625_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object* v_a_2634_){
_start:
{
lean_object* v___x_2636_; lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2645_; 
v___x_2636_ = l_Lean_Meta_Sym_getSharedExprs___redArg(v_a_2634_);
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2639_ = v___x_2636_;
v_isShared_2640_ = v_isSharedCheck_2645_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2636_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2645_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v_bfalseExpr_2641_; lean_object* v___x_2643_; 
v_bfalseExpr_2641_ = lean_ctor_get(v_a_2637_, 4);
lean_inc_ref(v_bfalseExpr_2641_);
lean_dec(v_a_2637_);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v_bfalseExpr_2641_);
v___x_2643_ = v___x_2639_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_bfalseExpr_2641_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg___boxed(lean_object* v_a_2646_, lean_object* v_a_2647_){
_start:
{
lean_object* v_res_2648_; 
v_res_2648_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_2646_);
lean_dec_ref(v_a_2646_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolFalseExpr(lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v___x_2656_; 
v___x_2656_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_2649_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___boxed(lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_){
_start:
{
lean_object* v_res_2664_; 
v_res_2664_ = l_Lean_Meta_Sym_getBoolFalseExpr(v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_);
lean_dec(v_a_2662_);
lean_dec_ref(v_a_2661_);
lean_dec(v_a_2660_);
lean_dec_ref(v_a_2659_);
lean_dec(v_a_2658_);
lean_dec_ref(v_a_2657_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolFalseExpr___redArg(lean_object* v_e_2665_, lean_object* v_a_2666_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_2666_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2680_; 
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2680_ == 0)
{
v___x_2671_ = v___x_2668_;
v_isShared_2672_ = v_isSharedCheck_2680_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2668_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2680_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
size_t v___x_2673_; size_t v___x_2674_; uint8_t v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2678_; 
v___x_2673_ = lean_ptr_addr(v_e_2665_);
v___x_2674_ = lean_ptr_addr(v_a_2669_);
lean_dec(v_a_2669_);
v___x_2675_ = lean_usize_dec_eq(v___x_2673_, v___x_2674_);
v___x_2676_ = lean_box(v___x_2675_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 0, v___x_2676_);
v___x_2678_ = v___x_2671_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v___x_2676_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
}
}
}
else
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
v_a_2681_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2668_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2668_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolFalseExpr___redArg___boxed(lean_object* v_e_2689_, lean_object* v_a_2690_, lean_object* v_a_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l_Lean_Meta_Sym_isBoolFalseExpr___redArg(v_e_2689_, v_a_2690_);
lean_dec_ref(v_a_2690_);
lean_dec_ref(v_e_2689_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolFalseExpr(lean_object* v_e_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_){
_start:
{
lean_object* v___x_2701_; 
v___x_2701_ = l_Lean_Meta_Sym_isBoolFalseExpr___redArg(v_e_2693_, v_a_2694_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isBoolFalseExpr___boxed(lean_object* v_e_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l_Lean_Meta_Sym_isBoolFalseExpr(v_e_2702_, v_a_2703_, v_a_2704_, v_a_2705_, v_a_2706_, v_a_2707_, v_a_2708_);
lean_dec(v_a_2708_);
lean_dec_ref(v_a_2707_);
lean_dec(v_a_2706_);
lean_dec_ref(v_a_2705_);
lean_dec(v_a_2704_);
lean_dec_ref(v_a_2703_);
lean_dec_ref(v_e_2702_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getNatZeroExpr___redArg(lean_object* v_a_2711_){
_start:
{
lean_object* v___x_2713_; lean_object* v_a_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2722_; 
v___x_2713_ = l_Lean_Meta_Sym_getSharedExprs___redArg(v_a_2711_);
v_a_2714_ = lean_ctor_get(v___x_2713_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v___x_2713_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2716_ = v___x_2713_;
v_isShared_2717_ = v_isSharedCheck_2722_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_a_2714_);
lean_dec(v___x_2713_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2722_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
lean_object* v_natZExpr_2718_; lean_object* v___x_2720_; 
v_natZExpr_2718_ = lean_ctor_get(v_a_2714_, 2);
lean_inc_ref(v_natZExpr_2718_);
lean_dec(v_a_2714_);
if (v_isShared_2717_ == 0)
{
lean_ctor_set(v___x_2716_, 0, v_natZExpr_2718_);
v___x_2720_ = v___x_2716_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_natZExpr_2718_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getNatZeroExpr___redArg___boxed(lean_object* v_a_2723_, lean_object* v_a_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l_Lean_Meta_Sym_getNatZeroExpr___redArg(v_a_2723_);
lean_dec_ref(v_a_2723_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getNatZeroExpr(lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_){
_start:
{
lean_object* v___x_2733_; 
v___x_2733_ = l_Lean_Meta_Sym_getNatZeroExpr___redArg(v_a_2726_);
return v___x_2733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getNatZeroExpr___boxed(lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l_Lean_Meta_Sym_getNatZeroExpr(v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_);
lean_dec(v_a_2739_);
lean_dec_ref(v_a_2738_);
lean_dec(v_a_2737_);
lean_dec_ref(v_a_2736_);
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
return v_res_2741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getOrderingEqExpr___redArg(lean_object* v_a_2742_){
_start:
{
lean_object* v___x_2744_; lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2753_; 
v___x_2744_ = l_Lean_Meta_Sym_getSharedExprs___redArg(v_a_2742_);
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2747_ = v___x_2744_;
v_isShared_2748_ = v_isSharedCheck_2753_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2744_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2753_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v_ordEqExpr_2749_; lean_object* v___x_2751_; 
v_ordEqExpr_2749_ = lean_ctor_get(v_a_2745_, 5);
lean_inc_ref(v_ordEqExpr_2749_);
lean_dec(v_a_2745_);
if (v_isShared_2748_ == 0)
{
lean_ctor_set(v___x_2747_, 0, v_ordEqExpr_2749_);
v___x_2751_ = v___x_2747_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_ordEqExpr_2749_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getOrderingEqExpr___redArg___boxed(lean_object* v_a_2754_, lean_object* v_a_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l_Lean_Meta_Sym_getOrderingEqExpr___redArg(v_a_2754_);
lean_dec_ref(v_a_2754_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getOrderingEqExpr(lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_){
_start:
{
lean_object* v___x_2764_; 
v___x_2764_ = l_Lean_Meta_Sym_getOrderingEqExpr___redArg(v_a_2757_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getOrderingEqExpr___boxed(lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_){
_start:
{
lean_object* v_res_2772_; 
v_res_2772_ = l_Lean_Meta_Sym_getOrderingEqExpr(v_a_2765_, v_a_2766_, v_a_2767_, v_a_2768_, v_a_2769_, v_a_2770_);
lean_dec(v_a_2770_);
lean_dec_ref(v_a_2769_);
lean_dec(v_a_2768_);
lean_dec_ref(v_a_2767_);
lean_dec(v_a_2766_);
lean_dec_ref(v_a_2765_);
return v_res_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIntExpr___redArg(lean_object* v_a_2773_){
_start:
{
lean_object* v___x_2775_; lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2784_; 
v___x_2775_ = l_Lean_Meta_Sym_getSharedExprs___redArg(v_a_2773_);
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2778_ = v___x_2775_;
v_isShared_2779_ = v_isSharedCheck_2784_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2775_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2784_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v_intExpr_2780_; lean_object* v___x_2782_; 
v_intExpr_2780_ = lean_ctor_get(v_a_2776_, 6);
lean_inc_ref(v_intExpr_2780_);
lean_dec(v_a_2776_);
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 0, v_intExpr_2780_);
v___x_2782_ = v___x_2778_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_intExpr_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIntExpr___redArg___boxed(lean_object* v_a_2785_, lean_object* v_a_2786_){
_start:
{
lean_object* v_res_2787_; 
v_res_2787_ = l_Lean_Meta_Sym_getIntExpr___redArg(v_a_2785_);
lean_dec_ref(v_a_2785_);
return v_res_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIntExpr(lean_object* v_a_2788_, lean_object* v_a_2789_, lean_object* v_a_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_){
_start:
{
lean_object* v___x_2795_; 
v___x_2795_ = l_Lean_Meta_Sym_getIntExpr___redArg(v_a_2788_);
return v___x_2795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIntExpr___boxed(lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Lean_Meta_Sym_getIntExpr(v_a_2796_, v_a_2797_, v_a_2798_, v_a_2799_, v_a_2800_, v_a_2801_);
lean_dec(v_a_2801_);
lean_dec_ref(v_a_2800_);
lean_dec(v_a_2799_);
lean_dec_ref(v_a_2798_);
lean_dec(v_a_2797_);
lean_dec_ref(v_a_2796_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg(lean_object* v_k_2804_, lean_object* v_ctx_2805_, lean_object* v_a_2806_){
_start:
{
lean_object* v___x_2808_; lean_object* v_share_2809_; lean_object* v_maxFVar_2810_; lean_object* v_proofInstInfo_2811_; lean_object* v_proofInstInfoFVar_2812_; lean_object* v_letValue_2813_; lean_object* v_inferType_2814_; lean_object* v_getLevel_2815_; lean_object* v_congrInfo_2816_; lean_object* v_defEqI_2817_; lean_object* v_extensions_2818_; lean_object* v_issues_2819_; lean_object* v_canon_2820_; lean_object* v_instanceOverrides_2821_; uint8_t v_debug_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2886_; 
v___x_2808_ = lean_st_ref_take(v_a_2806_);
v_share_2809_ = lean_ctor_get(v___x_2808_, 0);
v_maxFVar_2810_ = lean_ctor_get(v___x_2808_, 1);
v_proofInstInfo_2811_ = lean_ctor_get(v___x_2808_, 2);
v_proofInstInfoFVar_2812_ = lean_ctor_get(v___x_2808_, 3);
v_letValue_2813_ = lean_ctor_get(v___x_2808_, 4);
v_inferType_2814_ = lean_ctor_get(v___x_2808_, 5);
v_getLevel_2815_ = lean_ctor_get(v___x_2808_, 6);
v_congrInfo_2816_ = lean_ctor_get(v___x_2808_, 7);
v_defEqI_2817_ = lean_ctor_get(v___x_2808_, 8);
v_extensions_2818_ = lean_ctor_get(v___x_2808_, 9);
v_issues_2819_ = lean_ctor_get(v___x_2808_, 10);
v_canon_2820_ = lean_ctor_get(v___x_2808_, 11);
v_instanceOverrides_2821_ = lean_ctor_get(v___x_2808_, 12);
v_debug_2822_ = lean_ctor_get_uint8(v___x_2808_, sizeof(void*)*13);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2824_ = v___x_2808_;
v_isShared_2825_ = v_isSharedCheck_2886_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_instanceOverrides_2821_);
lean_inc(v_canon_2820_);
lean_inc(v_issues_2819_);
lean_inc(v_extensions_2818_);
lean_inc(v_defEqI_2817_);
lean_inc(v_congrInfo_2816_);
lean_inc(v_getLevel_2815_);
lean_inc(v_inferType_2814_);
lean_inc(v_letValue_2813_);
lean_inc(v_proofInstInfoFVar_2812_);
lean_inc(v_proofInstInfo_2811_);
lean_inc(v_maxFVar_2810_);
lean_inc(v_share_2809_);
lean_dec(v___x_2808_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2886_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2826_; lean_object* v___x_2828_; 
v___x_2826_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Sym_SymM_run_spec__1___closed__0);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v___x_2826_);
v___x_2828_ = v___x_2824_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v___x_2826_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v_maxFVar_2810_);
lean_ctor_set(v_reuseFailAlloc_2885_, 2, v_proofInstInfo_2811_);
lean_ctor_set(v_reuseFailAlloc_2885_, 3, v_proofInstInfoFVar_2812_);
lean_ctor_set(v_reuseFailAlloc_2885_, 4, v_letValue_2813_);
lean_ctor_set(v_reuseFailAlloc_2885_, 5, v_inferType_2814_);
lean_ctor_set(v_reuseFailAlloc_2885_, 6, v_getLevel_2815_);
lean_ctor_set(v_reuseFailAlloc_2885_, 7, v_congrInfo_2816_);
lean_ctor_set(v_reuseFailAlloc_2885_, 8, v_defEqI_2817_);
lean_ctor_set(v_reuseFailAlloc_2885_, 9, v_extensions_2818_);
lean_ctor_set(v_reuseFailAlloc_2885_, 10, v_issues_2819_);
lean_ctor_set(v_reuseFailAlloc_2885_, 11, v_canon_2820_);
lean_ctor_set(v_reuseFailAlloc_2885_, 12, v_instanceOverrides_2821_);
lean_ctor_set_uint8(v_reuseFailAlloc_2885_, sizeof(void*)*13, v_debug_2822_);
v___x_2828_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; 
v___x_2829_ = lean_st_ref_put(v_a_2806_, v___x_2828_);
v___x_2830_ = lean_apply_2(v_k_2804_, v_ctx_2805_, v_share_2809_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v_a_2831_; lean_object* v_a_2832_; lean_object* v___x_2833_; lean_object* v_maxFVar_2834_; lean_object* v_proofInstInfo_2835_; lean_object* v_proofInstInfoFVar_2836_; lean_object* v_letValue_2837_; lean_object* v_inferType_2838_; lean_object* v_getLevel_2839_; lean_object* v_congrInfo_2840_; lean_object* v_defEqI_2841_; lean_object* v_extensions_2842_; lean_object* v_issues_2843_; lean_object* v_canon_2844_; lean_object* v_instanceOverrides_2845_; uint8_t v_debug_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2856_; 
v_a_2831_ = lean_ctor_get(v___x_2830_, 0);
lean_inc(v_a_2831_);
v_a_2832_ = lean_ctor_get(v___x_2830_, 1);
lean_inc(v_a_2832_);
lean_dec_ref_known(v___x_2830_, 2);
v___x_2833_ = lean_st_ref_take(v_a_2806_);
v_maxFVar_2834_ = lean_ctor_get(v___x_2833_, 1);
v_proofInstInfo_2835_ = lean_ctor_get(v___x_2833_, 2);
v_proofInstInfoFVar_2836_ = lean_ctor_get(v___x_2833_, 3);
v_letValue_2837_ = lean_ctor_get(v___x_2833_, 4);
v_inferType_2838_ = lean_ctor_get(v___x_2833_, 5);
v_getLevel_2839_ = lean_ctor_get(v___x_2833_, 6);
v_congrInfo_2840_ = lean_ctor_get(v___x_2833_, 7);
v_defEqI_2841_ = lean_ctor_get(v___x_2833_, 8);
v_extensions_2842_ = lean_ctor_get(v___x_2833_, 9);
v_issues_2843_ = lean_ctor_get(v___x_2833_, 10);
v_canon_2844_ = lean_ctor_get(v___x_2833_, 11);
v_instanceOverrides_2845_ = lean_ctor_get(v___x_2833_, 12);
v_debug_2846_ = lean_ctor_get_uint8(v___x_2833_, sizeof(void*)*13);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2856_ == 0)
{
lean_object* v_unused_2857_; 
v_unused_2857_ = lean_ctor_get(v___x_2833_, 0);
lean_dec(v_unused_2857_);
v___x_2848_ = v___x_2833_;
v_isShared_2849_ = v_isSharedCheck_2856_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_instanceOverrides_2845_);
lean_inc(v_canon_2844_);
lean_inc(v_issues_2843_);
lean_inc(v_extensions_2842_);
lean_inc(v_defEqI_2841_);
lean_inc(v_congrInfo_2840_);
lean_inc(v_getLevel_2839_);
lean_inc(v_inferType_2838_);
lean_inc(v_letValue_2837_);
lean_inc(v_proofInstInfoFVar_2836_);
lean_inc(v_proofInstInfo_2835_);
lean_inc(v_maxFVar_2834_);
lean_dec(v___x_2833_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2856_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2851_; 
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 0, v_a_2832_);
v___x_2851_ = v___x_2848_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2832_);
lean_ctor_set(v_reuseFailAlloc_2855_, 1, v_maxFVar_2834_);
lean_ctor_set(v_reuseFailAlloc_2855_, 2, v_proofInstInfo_2835_);
lean_ctor_set(v_reuseFailAlloc_2855_, 3, v_proofInstInfoFVar_2836_);
lean_ctor_set(v_reuseFailAlloc_2855_, 4, v_letValue_2837_);
lean_ctor_set(v_reuseFailAlloc_2855_, 5, v_inferType_2838_);
lean_ctor_set(v_reuseFailAlloc_2855_, 6, v_getLevel_2839_);
lean_ctor_set(v_reuseFailAlloc_2855_, 7, v_congrInfo_2840_);
lean_ctor_set(v_reuseFailAlloc_2855_, 8, v_defEqI_2841_);
lean_ctor_set(v_reuseFailAlloc_2855_, 9, v_extensions_2842_);
lean_ctor_set(v_reuseFailAlloc_2855_, 10, v_issues_2843_);
lean_ctor_set(v_reuseFailAlloc_2855_, 11, v_canon_2844_);
lean_ctor_set(v_reuseFailAlloc_2855_, 12, v_instanceOverrides_2845_);
lean_ctor_set_uint8(v_reuseFailAlloc_2855_, sizeof(void*)*13, v_debug_2846_);
v___x_2851_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; 
v___x_2852_ = lean_st_ref_put(v_a_2806_, v___x_2851_);
v___x_2853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2853_, 0, v_a_2831_);
v___x_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2853_);
return v___x_2854_;
}
}
}
else
{
lean_object* v_a_2858_; lean_object* v_a_2859_; lean_object* v___x_2860_; lean_object* v_maxFVar_2861_; lean_object* v_proofInstInfo_2862_; lean_object* v_proofInstInfoFVar_2863_; lean_object* v_letValue_2864_; lean_object* v_inferType_2865_; lean_object* v_getLevel_2866_; lean_object* v_congrInfo_2867_; lean_object* v_defEqI_2868_; lean_object* v_extensions_2869_; lean_object* v_issues_2870_; lean_object* v_canon_2871_; lean_object* v_instanceOverrides_2872_; uint8_t v_debug_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2883_; 
v_a_2858_ = lean_ctor_get(v___x_2830_, 0);
lean_inc(v_a_2858_);
v_a_2859_ = lean_ctor_get(v___x_2830_, 1);
lean_inc(v_a_2859_);
lean_dec_ref_known(v___x_2830_, 2);
v___x_2860_ = lean_st_ref_take(v_a_2806_);
v_maxFVar_2861_ = lean_ctor_get(v___x_2860_, 1);
v_proofInstInfo_2862_ = lean_ctor_get(v___x_2860_, 2);
v_proofInstInfoFVar_2863_ = lean_ctor_get(v___x_2860_, 3);
v_letValue_2864_ = lean_ctor_get(v___x_2860_, 4);
v_inferType_2865_ = lean_ctor_get(v___x_2860_, 5);
v_getLevel_2866_ = lean_ctor_get(v___x_2860_, 6);
v_congrInfo_2867_ = lean_ctor_get(v___x_2860_, 7);
v_defEqI_2868_ = lean_ctor_get(v___x_2860_, 8);
v_extensions_2869_ = lean_ctor_get(v___x_2860_, 9);
v_issues_2870_ = lean_ctor_get(v___x_2860_, 10);
v_canon_2871_ = lean_ctor_get(v___x_2860_, 11);
v_instanceOverrides_2872_ = lean_ctor_get(v___x_2860_, 12);
v_debug_2873_ = lean_ctor_get_uint8(v___x_2860_, sizeof(void*)*13);
v_isSharedCheck_2883_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2883_ == 0)
{
lean_object* v_unused_2884_; 
v_unused_2884_ = lean_ctor_get(v___x_2860_, 0);
lean_dec(v_unused_2884_);
v___x_2875_ = v___x_2860_;
v_isShared_2876_ = v_isSharedCheck_2883_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_instanceOverrides_2872_);
lean_inc(v_canon_2871_);
lean_inc(v_issues_2870_);
lean_inc(v_extensions_2869_);
lean_inc(v_defEqI_2868_);
lean_inc(v_congrInfo_2867_);
lean_inc(v_getLevel_2866_);
lean_inc(v_inferType_2865_);
lean_inc(v_letValue_2864_);
lean_inc(v_proofInstInfoFVar_2863_);
lean_inc(v_proofInstInfo_2862_);
lean_inc(v_maxFVar_2861_);
lean_dec(v___x_2860_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2883_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
lean_ctor_set(v___x_2875_, 0, v_a_2859_);
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v_a_2859_);
lean_ctor_set(v_reuseFailAlloc_2882_, 1, v_maxFVar_2861_);
lean_ctor_set(v_reuseFailAlloc_2882_, 2, v_proofInstInfo_2862_);
lean_ctor_set(v_reuseFailAlloc_2882_, 3, v_proofInstInfoFVar_2863_);
lean_ctor_set(v_reuseFailAlloc_2882_, 4, v_letValue_2864_);
lean_ctor_set(v_reuseFailAlloc_2882_, 5, v_inferType_2865_);
lean_ctor_set(v_reuseFailAlloc_2882_, 6, v_getLevel_2866_);
lean_ctor_set(v_reuseFailAlloc_2882_, 7, v_congrInfo_2867_);
lean_ctor_set(v_reuseFailAlloc_2882_, 8, v_defEqI_2868_);
lean_ctor_set(v_reuseFailAlloc_2882_, 9, v_extensions_2869_);
lean_ctor_set(v_reuseFailAlloc_2882_, 10, v_issues_2870_);
lean_ctor_set(v_reuseFailAlloc_2882_, 11, v_canon_2871_);
lean_ctor_set(v_reuseFailAlloc_2882_, 12, v_instanceOverrides_2872_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*13, v_debug_2873_);
v___x_2878_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2879_ = lean_st_ref_put(v_a_2806_, v___x_2878_);
v___x_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2880_, 0, v_a_2858_);
v___x_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2880_);
return v___x_2881_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg___boxed(lean_object* v_k_2887_, lean_object* v_ctx_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_){
_start:
{
lean_object* v_res_2891_; 
v_res_2891_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v_k_2887_, v_ctx_2888_, v_a_2889_);
lean_dec(v_a_2889_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_runShareCommonM(lean_object* v_00_u03b1_2892_, lean_object* v_k_2893_, lean_object* v_ctx_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_){
_start:
{
lean_object* v___x_2902_; 
v___x_2902_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v_k_2893_, v_ctx_2894_, v_a_2896_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_runShareCommonM___boxed(lean_object* v_00_u03b1_2903_, lean_object* v_k_2904_, lean_object* v_ctx_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l_Lean_Meta_Sym_runShareCommonM(v_00_u03b1_2903_, v_k_2904_, v_ctx_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_);
lean_dec(v_a_2911_);
lean_dec_ref(v_a_2910_);
lean_dec(v_a_2909_);
lean_dec_ref(v_a_2908_);
lean_dec(v_a_2907_);
lean_dec_ref(v_a_2906_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg___lam__0(lean_object* v_ctx_2914_){
_start:
{
lean_object* v_config_2915_; lean_object* v_sharedExprs_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2933_; 
v_config_2915_ = lean_ctor_get(v_ctx_2914_, 1);
v_sharedExprs_2916_ = lean_ctor_get(v_ctx_2914_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v_ctx_2914_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2918_ = v_ctx_2914_;
v_isShared_2919_ = v_isSharedCheck_2933_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_config_2915_);
lean_inc(v_sharedExprs_2916_);
lean_dec(v_ctx_2914_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2933_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
uint8_t v_verbose_2920_; uint8_t v_enforceUnfoldReducible_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2932_; 
v_verbose_2920_ = lean_ctor_get_uint8(v_config_2915_, 0);
v_enforceUnfoldReducible_2921_ = lean_ctor_get_uint8(v_config_2915_, 1);
v_isSharedCheck_2932_ = !lean_is_exclusive(v_config_2915_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2923_ = v_config_2915_;
v_isShared_2924_ = v_isSharedCheck_2932_;
goto v_resetjp_2922_;
}
else
{
lean_dec(v_config_2915_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2932_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
uint8_t v___x_2925_; lean_object* v___x_2927_; 
v___x_2925_ = 0;
if (v_isShared_2924_ == 0)
{
v___x_2927_ = v___x_2923_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_2931_, 0, v_verbose_2920_);
lean_ctor_set_uint8(v_reuseFailAlloc_2931_, 1, v_enforceUnfoldReducible_2921_);
v___x_2927_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
lean_object* v___x_2929_; 
lean_ctor_set_uint8(v___x_2927_, 2, v___x_2925_);
if (v_isShared_2919_ == 0)
{
lean_ctor_set(v___x_2918_, 1, v___x_2927_);
v___x_2929_ = v___x_2918_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_sharedExprs_2916_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v___x_2927_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg(lean_object* v_inst_2935_, lean_object* v_x_2936_){
_start:
{
lean_object* v___f_2937_; lean_object* v___x_2938_; 
v___f_2937_ = ((lean_object*)(l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg___closed__0));
v___x_2938_ = lean_apply_3(v_inst_2935_, lean_box(0), v___f_2937_, v_x_2936_);
return v___x_2938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutFoldProjsCheck(lean_object* v_m_2939_, lean_object* v_00_u03b1_2940_, lean_object* v_inst_2941_, lean_object* v_x_2942_){
_start:
{
lean_object* v___x_2943_; 
v___x_2943_ = l_Lean_Meta_Sym_withoutFoldProjsCheck___redArg(v_inst_2941_, v_x_2942_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutShareCommonChecks___redArg___lam__0(lean_object* v_ctx_2944_){
_start:
{
lean_object* v_config_2945_; lean_object* v_sharedExprs_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2962_; 
v_config_2945_ = lean_ctor_get(v_ctx_2944_, 1);
v_sharedExprs_2946_ = lean_ctor_get(v_ctx_2944_, 0);
v_isSharedCheck_2962_ = !lean_is_exclusive(v_ctx_2944_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2948_ = v_ctx_2944_;
v_isShared_2949_ = v_isSharedCheck_2962_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_config_2945_);
lean_inc(v_sharedExprs_2946_);
lean_dec(v_ctx_2944_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2962_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
uint8_t v_verbose_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2961_; 
v_verbose_2950_ = lean_ctor_get_uint8(v_config_2945_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_config_2945_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2952_ = v_config_2945_;
v_isShared_2953_ = v_isSharedCheck_2961_;
goto v_resetjp_2951_;
}
else
{
lean_dec(v_config_2945_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2961_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
uint8_t v___x_2954_; lean_object* v___x_2956_; 
v___x_2954_ = 0;
if (v_isShared_2953_ == 0)
{
v___x_2956_ = v___x_2952_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_2960_, 0, v_verbose_2950_);
v___x_2956_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
lean_object* v___x_2958_; 
lean_ctor_set_uint8(v___x_2956_, 1, v___x_2954_);
lean_ctor_set_uint8(v___x_2956_, 2, v___x_2954_);
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 1, v___x_2956_);
v___x_2958_ = v___x_2948_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v_sharedExprs_2946_);
lean_ctor_set(v_reuseFailAlloc_2959_, 1, v___x_2956_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutShareCommonChecks___redArg(lean_object* v_inst_2964_, lean_object* v_x_2965_){
_start:
{
lean_object* v___f_2966_; lean_object* v___x_2967_; 
v___f_2966_ = ((lean_object*)(l_Lean_Meta_Sym_withoutShareCommonChecks___redArg___closed__0));
v___x_2967_ = lean_apply_3(v_inst_2964_, lean_box(0), v___f_2966_, v_x_2965_);
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withoutShareCommonChecks(lean_object* v_m_2968_, lean_object* v_00_u03b1_2969_, lean_object* v_inst_2970_, lean_object* v_x_2971_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_Lean_Meta_Sym_withoutShareCommonChecks___redArg(v_inst_2970_, v_x_2971_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___redArg(lean_object* v_a_2973_, lean_object* v_a_2974_){
_start:
{
lean_object* v_config_2976_; lean_object* v___x_2977_; lean_object* v_env_2978_; uint8_t v_enforceUnfoldReducible_2979_; uint8_t v_enforceFoldProjs_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v_config_2976_ = lean_ctor_get(v_a_2973_, 1);
v___x_2977_ = lean_st_ref_get(v_a_2974_);
v_env_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc_ref(v_env_2978_);
lean_dec(v___x_2977_);
v_enforceUnfoldReducible_2979_ = lean_ctor_get_uint8(v_config_2976_, 1);
v_enforceFoldProjs_2980_ = lean_ctor_get_uint8(v_config_2976_, 2);
v___x_2981_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2981_, 0, v_env_2978_);
lean_ctor_set_uint8(v___x_2981_, sizeof(void*)*1, v_enforceUnfoldReducible_2979_);
lean_ctor_set_uint8(v___x_2981_, sizeof(void*)*1 + 1, v_enforceFoldProjs_2980_);
v___x_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2981_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___redArg___boxed(lean_object* v_a_2983_, lean_object* v_a_2984_, lean_object* v_a_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___redArg(v_a_2983_, v_a_2984_);
lean_dec(v_a_2984_);
lean_dec_ref(v_a_2983_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx(lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_){
_start:
{
lean_object* v___x_2994_; 
v___x_2994_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___redArg(v_a_2987_, v_a_2992_);
return v___x_2994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___boxed(lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_){
_start:
{
lean_object* v_res_3002_; 
v_res_3002_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx(v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_);
lean_dec(v_a_3000_);
lean_dec_ref(v_a_2999_);
lean_dec(v_a_2998_);
lean_dec_ref(v_a_2997_);
lean_dec(v_a_2996_);
lean_dec_ref(v_a_2995_);
return v_res_3002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation___redArg(lean_object* v_e_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_){
_start:
{
lean_object* v_config_3010_; uint8_t v_enforceUnfoldReducible_3011_; uint8_t v_enforceFoldProjs_3012_; lean_object* v_e_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; lean_object* v_e_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; 
v_config_3010_ = lean_ctor_get(v_a_3004_, 1);
v_enforceUnfoldReducible_3011_ = lean_ctor_get_uint8(v_config_3010_, 1);
v_enforceFoldProjs_3012_ = lean_ctor_get_uint8(v_config_3010_, 2);
if (v_enforceUnfoldReducible_3011_ == 0)
{
v_e_3022_ = v_e_3003_;
v___y_3023_ = v_a_3005_;
v___y_3024_ = v_a_3006_;
v___y_3025_ = v_a_3007_;
v___y_3026_ = v_a_3008_;
goto v___jp_3021_;
}
else
{
lean_object* v___x_3029_; 
v___x_3029_ = l_Lean_Meta_Sym_unfoldReducible(v_e_3003_, v_a_3005_, v_a_3006_, v_a_3007_, v_a_3008_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v_a_3030_; 
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_a_3030_);
lean_dec_ref_known(v___x_3029_, 1);
v_e_3022_ = v_a_3030_;
v___y_3023_ = v_a_3005_;
v___y_3024_ = v_a_3006_;
v___y_3025_ = v_a_3007_;
v___y_3026_ = v_a_3008_;
goto v___jp_3021_;
}
else
{
return v___x_3029_;
}
}
v___jp_3013_:
{
if (v_enforceUnfoldReducible_3011_ == 0)
{
lean_object* v___x_3019_; 
v___x_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3019_, 0, v_e_3014_);
return v___x_3019_;
}
else
{
lean_object* v___x_3020_; 
v___x_3020_ = l_Lean_Meta_Sym_unfoldReducible(v_e_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_);
return v___x_3020_;
}
}
v___jp_3021_:
{
if (v_enforceFoldProjs_3012_ == 0)
{
v_e_3014_ = v_e_3022_;
v___y_3015_ = v___y_3023_;
v___y_3016_ = v___y_3024_;
v___y_3017_ = v___y_3025_;
v___y_3018_ = v___y_3026_;
goto v___jp_3013_;
}
else
{
lean_object* v___x_3027_; 
v___x_3027_ = l_Lean_Meta_Sym_foldProjs(v_e_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; 
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
lean_inc(v_a_3028_);
lean_dec_ref_known(v___x_3027_, 1);
v_e_3014_ = v_a_3028_;
v___y_3015_ = v___y_3023_;
v___y_3016_ = v___y_3024_;
v___y_3017_ = v___y_3025_;
v___y_3018_ = v___y_3026_;
goto v___jp_3013_;
}
else
{
return v___x_3027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation___redArg___boxed(lean_object* v_e_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_){
_start:
{
lean_object* v_res_3038_; 
v_res_3038_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation___redArg(v_e_3031_, v_a_3032_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_);
lean_dec(v_a_3036_);
lean_dec_ref(v_a_3035_);
lean_dec(v_a_3034_);
lean_dec_ref(v_a_3033_);
lean_dec_ref(v_a_3032_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation(lean_object* v_e_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_){
_start:
{
lean_object* v___x_3047_; 
v___x_3047_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation___redArg(v_e_3039_, v_a_3040_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation___boxed(lean_object* v_e_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation(v_e_3048_, v_a_3049_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_);
lean_dec(v_a_3054_);
lean_dec_ref(v_a_3053_);
lean_dec(v_a_3052_);
lean_dec_ref(v_a_3051_);
lean_dec(v_a_3050_);
lean_dec_ref(v_a_3049_);
return v_res_3056_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3057_; 
v___x_3057_ = l_instMonadEIO___redArg();
return v___x_3057_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1(lean_object* v_msg_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_){
_start:
{
lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v_toApplicative_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3135_; 
v___x_3070_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__0, &l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__0);
v___x_3071_ = l_StateRefT_x27_instMonad___redArg(v___x_3070_);
v_toApplicative_3072_ = lean_ctor_get(v___x_3071_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3071_);
if (v_isSharedCheck_3135_ == 0)
{
lean_object* v_unused_3136_; 
v_unused_3136_ = lean_ctor_get(v___x_3071_, 1);
lean_dec(v_unused_3136_);
v___x_3074_ = v___x_3071_;
v_isShared_3075_ = v_isSharedCheck_3135_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_toApplicative_3072_);
lean_dec(v___x_3071_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3135_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v_toFunctor_3076_; lean_object* v_toSeq_3077_; lean_object* v_toSeqLeft_3078_; lean_object* v_toSeqRight_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3133_; 
v_toFunctor_3076_ = lean_ctor_get(v_toApplicative_3072_, 0);
v_toSeq_3077_ = lean_ctor_get(v_toApplicative_3072_, 2);
v_toSeqLeft_3078_ = lean_ctor_get(v_toApplicative_3072_, 3);
v_toSeqRight_3079_ = lean_ctor_get(v_toApplicative_3072_, 4);
v_isSharedCheck_3133_ = !lean_is_exclusive(v_toApplicative_3072_);
if (v_isSharedCheck_3133_ == 0)
{
lean_object* v_unused_3134_; 
v_unused_3134_ = lean_ctor_get(v_toApplicative_3072_, 1);
lean_dec(v_unused_3134_);
v___x_3081_ = v_toApplicative_3072_;
v_isShared_3082_ = v_isSharedCheck_3133_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_toSeqRight_3079_);
lean_inc(v_toSeqLeft_3078_);
lean_inc(v_toSeq_3077_);
lean_inc(v_toFunctor_3076_);
lean_dec(v_toApplicative_3072_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3133_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___f_3083_; lean_object* v___f_3084_; lean_object* v___f_3085_; lean_object* v___f_3086_; lean_object* v___x_3087_; lean_object* v___f_3088_; lean_object* v___f_3089_; lean_object* v___f_3090_; lean_object* v___x_3092_; 
v___f_3083_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__1));
v___f_3084_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__2));
lean_inc_ref(v_toFunctor_3076_);
v___f_3085_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3085_, 0, v_toFunctor_3076_);
v___f_3086_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3086_, 0, v_toFunctor_3076_);
v___x_3087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___f_3085_);
lean_ctor_set(v___x_3087_, 1, v___f_3086_);
v___f_3088_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3088_, 0, v_toSeqRight_3079_);
v___f_3089_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3089_, 0, v_toSeqLeft_3078_);
v___f_3090_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3090_, 0, v_toSeq_3077_);
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 4, v___f_3088_);
lean_ctor_set(v___x_3081_, 3, v___f_3089_);
lean_ctor_set(v___x_3081_, 2, v___f_3090_);
lean_ctor_set(v___x_3081_, 1, v___f_3083_);
lean_ctor_set(v___x_3081_, 0, v___x_3087_);
v___x_3092_ = v___x_3081_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v___x_3087_);
lean_ctor_set(v_reuseFailAlloc_3132_, 1, v___f_3083_);
lean_ctor_set(v_reuseFailAlloc_3132_, 2, v___f_3090_);
lean_ctor_set(v_reuseFailAlloc_3132_, 3, v___f_3089_);
lean_ctor_set(v_reuseFailAlloc_3132_, 4, v___f_3088_);
v___x_3092_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
lean_object* v___x_3094_; 
if (v_isShared_3075_ == 0)
{
lean_ctor_set(v___x_3074_, 1, v___f_3084_);
lean_ctor_set(v___x_3074_, 0, v___x_3092_);
v___x_3094_ = v___x_3074_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v___x_3092_);
lean_ctor_set(v_reuseFailAlloc_3131_, 1, v___f_3084_);
v___x_3094_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
lean_object* v___x_3095_; lean_object* v_toApplicative_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3129_; 
v___x_3095_ = l_StateRefT_x27_instMonad___redArg(v___x_3094_);
v_toApplicative_3096_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3129_ == 0)
{
lean_object* v_unused_3130_; 
v_unused_3130_ = lean_ctor_get(v___x_3095_, 1);
lean_dec(v_unused_3130_);
v___x_3098_ = v___x_3095_;
v_isShared_3099_ = v_isSharedCheck_3129_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_toApplicative_3096_);
lean_dec(v___x_3095_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3129_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v_toFunctor_3100_; lean_object* v_toSeq_3101_; lean_object* v_toSeqLeft_3102_; lean_object* v_toSeqRight_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3127_; 
v_toFunctor_3100_ = lean_ctor_get(v_toApplicative_3096_, 0);
v_toSeq_3101_ = lean_ctor_get(v_toApplicative_3096_, 2);
v_toSeqLeft_3102_ = lean_ctor_get(v_toApplicative_3096_, 3);
v_toSeqRight_3103_ = lean_ctor_get(v_toApplicative_3096_, 4);
v_isSharedCheck_3127_ = !lean_is_exclusive(v_toApplicative_3096_);
if (v_isSharedCheck_3127_ == 0)
{
lean_object* v_unused_3128_; 
v_unused_3128_ = lean_ctor_get(v_toApplicative_3096_, 1);
lean_dec(v_unused_3128_);
v___x_3105_ = v_toApplicative_3096_;
v_isShared_3106_ = v_isSharedCheck_3127_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_toSeqRight_3103_);
lean_inc(v_toSeqLeft_3102_);
lean_inc(v_toSeq_3101_);
lean_inc(v_toFunctor_3100_);
lean_dec(v_toApplicative_3096_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3127_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___f_3107_; lean_object* v___f_3108_; lean_object* v___f_3109_; lean_object* v___f_3110_; lean_object* v___x_3111_; lean_object* v___f_3112_; lean_object* v___f_3113_; lean_object* v___f_3114_; lean_object* v___x_3116_; 
v___f_3107_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__3));
v___f_3108_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__4));
lean_inc_ref(v_toFunctor_3100_);
v___f_3109_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3109_, 0, v_toFunctor_3100_);
v___f_3110_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3110_, 0, v_toFunctor_3100_);
v___x_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___f_3109_);
lean_ctor_set(v___x_3111_, 1, v___f_3110_);
v___f_3112_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3112_, 0, v_toSeqRight_3103_);
v___f_3113_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3113_, 0, v_toSeqLeft_3102_);
v___f_3114_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3114_, 0, v_toSeq_3101_);
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 4, v___f_3112_);
lean_ctor_set(v___x_3105_, 3, v___f_3113_);
lean_ctor_set(v___x_3105_, 2, v___f_3114_);
lean_ctor_set(v___x_3105_, 1, v___f_3107_);
lean_ctor_set(v___x_3105_, 0, v___x_3111_);
v___x_3116_ = v___x_3105_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3111_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v___f_3107_);
lean_ctor_set(v_reuseFailAlloc_3126_, 2, v___f_3114_);
lean_ctor_set(v_reuseFailAlloc_3126_, 3, v___f_3113_);
lean_ctor_set(v_reuseFailAlloc_3126_, 4, v___f_3112_);
v___x_3116_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
lean_object* v___x_3118_; 
if (v_isShared_3099_ == 0)
{
lean_ctor_set(v___x_3098_, 1, v___f_3108_);
lean_ctor_set(v___x_3098_, 0, v___x_3116_);
v___x_3118_ = v___x_3098_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3116_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v___f_3108_);
v___x_3118_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___f_3122_; lean_object* v___x_925__overap_3123_; lean_object* v___x_3124_; 
v___x_3119_ = l_StateRefT_x27_instMonad___redArg(v___x_3118_);
v___x_3120_ = l_Lean_instInhabitedExpr;
v___x_3121_ = l_instInhabitedOfMonad___redArg(v___x_3119_, v___x_3120_);
v___f_3122_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3122_, 0, v___x_3121_);
v___x_925__overap_3123_ = lean_panic_fn_borrowed(v___f_3122_, v_msg_3062_);
lean_dec_ref(v___f_3122_);
lean_inc(v___y_3068_);
lean_inc_ref(v___y_3067_);
lean_inc(v___y_3066_);
lean_inc_ref(v___y_3065_);
lean_inc(v___y_3064_);
lean_inc_ref(v___y_3063_);
v___x_3124_ = lean_apply_7(v___x_925__overap_3123_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, lean_box(0));
return v___x_3124_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___boxed(lean_object* v_msg_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1(v_msg_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_3146_, lean_object* v_vals_3147_, lean_object* v_i_3148_, lean_object* v_k_3149_){
_start:
{
lean_object* v___x_3150_; uint8_t v___x_3151_; 
v___x_3150_ = lean_array_get_size(v_keys_3146_);
v___x_3151_ = lean_nat_dec_lt(v_i_3148_, v___x_3150_);
if (v___x_3151_ == 0)
{
lean_object* v___x_3152_; 
lean_dec(v_i_3148_);
v___x_3152_ = lean_box(0);
return v___x_3152_;
}
else
{
lean_object* v_k_x27_3153_; uint8_t v___x_3154_; 
v_k_x27_3153_ = lean_array_fget_borrowed(v_keys_3146_, v_i_3148_);
v___x_3154_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_3149_, v_k_x27_3153_);
if (v___x_3154_ == 0)
{
lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3155_ = lean_unsigned_to_nat(1u);
v___x_3156_ = lean_nat_add(v_i_3148_, v___x_3155_);
lean_dec(v_i_3148_);
v_i_3148_ = v___x_3156_;
goto _start;
}
else
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3158_ = lean_array_fget_borrowed(v_vals_3147_, v_i_3148_);
lean_dec(v_i_3148_);
lean_inc(v___x_3158_);
lean_inc(v_k_x27_3153_);
v___x_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3159_, 0, v_k_x27_3153_);
lean_ctor_set(v___x_3159_, 1, v___x_3158_);
v___x_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3159_);
return v___x_3160_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_3161_, lean_object* v_vals_3162_, lean_object* v_i_3163_, lean_object* v_k_3164_){
_start:
{
lean_object* v_res_3165_; 
v_res_3165_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2___redArg(v_keys_3161_, v_vals_3162_, v_i_3163_, v_k_3164_);
lean_dec_ref(v_k_3164_);
lean_dec_ref(v_vals_3162_);
lean_dec_ref(v_keys_3161_);
return v_res_3165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0___redArg(lean_object* v_x_3166_, size_t v_x_3167_, lean_object* v_x_3168_){
_start:
{
if (lean_obj_tag(v_x_3166_) == 0)
{
lean_object* v_es_3169_; lean_object* v___x_3170_; size_t v___x_3171_; size_t v___x_3172_; lean_object* v_j_3173_; lean_object* v___x_3174_; 
v_es_3169_ = lean_ctor_get(v_x_3166_, 0);
v___x_3170_ = lean_box(2);
v___x_3171_ = ((size_t)31ULL);
v___x_3172_ = lean_usize_land(v_x_3167_, v___x_3171_);
v_j_3173_ = lean_usize_to_nat(v___x_3172_);
v___x_3174_ = lean_array_get_borrowed(v___x_3170_, v_es_3169_, v_j_3173_);
lean_dec(v_j_3173_);
switch(lean_obj_tag(v___x_3174_))
{
case 0:
{
lean_object* v_key_3175_; lean_object* v_val_3176_; uint8_t v___x_3177_; 
v_key_3175_ = lean_ctor_get(v___x_3174_, 0);
v_val_3176_ = lean_ctor_get(v___x_3174_, 1);
v___x_3177_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_3168_, v_key_3175_);
if (v___x_3177_ == 0)
{
lean_object* v___x_3178_; 
v___x_3178_ = lean_box(0);
return v___x_3178_;
}
else
{
lean_object* v___x_3179_; lean_object* v___x_3180_; 
lean_inc(v_val_3176_);
lean_inc(v_key_3175_);
v___x_3179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3179_, 0, v_key_3175_);
lean_ctor_set(v___x_3179_, 1, v_val_3176_);
v___x_3180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3179_);
return v___x_3180_;
}
}
case 1:
{
lean_object* v_node_3181_; size_t v___x_3182_; size_t v___x_3183_; 
v_node_3181_ = lean_ctor_get(v___x_3174_, 0);
v___x_3182_ = ((size_t)5ULL);
v___x_3183_ = lean_usize_shift_right(v_x_3167_, v___x_3182_);
v_x_3166_ = v_node_3181_;
v_x_3167_ = v___x_3183_;
goto _start;
}
default: 
{
lean_object* v___x_3185_; 
v___x_3185_ = lean_box(0);
return v___x_3185_;
}
}
}
else
{
lean_object* v_ks_3186_; lean_object* v_vs_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
v_ks_3186_ = lean_ctor_get(v_x_3166_, 0);
v_vs_3187_ = lean_ctor_get(v_x_3166_, 1);
v___x_3188_ = lean_unsigned_to_nat(0u);
v___x_3189_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2___redArg(v_ks_3186_, v_vs_3187_, v___x_3188_, v_x_3168_);
return v___x_3189_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0___redArg___boxed(lean_object* v_x_3190_, lean_object* v_x_3191_, lean_object* v_x_3192_){
_start:
{
size_t v_x_1247__boxed_3193_; lean_object* v_res_3194_; 
v_x_1247__boxed_3193_ = lean_unbox_usize(v_x_3191_);
lean_dec(v_x_3191_);
v_res_3194_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0___redArg(v_x_3190_, v_x_1247__boxed_3193_, v_x_3192_);
lean_dec_ref(v_x_3192_);
lean_dec_ref(v_x_3190_);
return v_res_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___redArg(lean_object* v_x_3195_, lean_object* v_x_3196_){
_start:
{
uint64_t v___x_3197_; size_t v___x_3198_; lean_object* v___x_3199_; 
v___x_3197_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_3196_);
v___x_3198_ = lean_uint64_to_usize(v___x_3197_);
v___x_3199_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0___redArg(v_x_3195_, v___x_3198_, v_x_3196_);
return v___x_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___redArg___boxed(lean_object* v_x_3200_, lean_object* v_x_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___redArg(v_x_3200_, v_x_3201_);
lean_dec_ref(v_x_3201_);
lean_dec_ref(v_x_3200_);
return v_res_3202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks___lam__0(lean_object* v_e_3203_, lean_object* v_cache_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_){
_start:
{
lean_object* v___x_3207_; 
v___x_3207_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___redArg(v___y_3206_, v_e_3203_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3208_, 0, v_cache_3204_);
lean_ctor_set(v___x_3208_, 1, v___y_3206_);
v___x_3209_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_e_3203_, v___y_3205_, v___x_3208_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v_a_3210_; lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3219_; 
v_a_3210_ = lean_ctor_get(v___x_3209_, 1);
v_a_3211_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3213_ = v___x_3209_;
v_isShared_3214_ = v_isSharedCheck_3219_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3210_);
lean_inc(v_a_3211_);
lean_dec(v___x_3209_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3219_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v_set_3215_; lean_object* v___x_3217_; 
v_set_3215_ = lean_ctor_get(v_a_3210_, 1);
lean_inc_ref(v_set_3215_);
lean_dec(v_a_3210_);
if (v_isShared_3214_ == 0)
{
lean_ctor_set(v___x_3213_, 1, v_set_3215_);
v___x_3217_ = v___x_3213_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3211_);
lean_ctor_set(v_reuseFailAlloc_3218_, 1, v_set_3215_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3229_; 
v_a_3220_ = lean_ctor_get(v___x_3209_, 1);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3229_ == 0)
{
lean_object* v_unused_3230_; 
v_unused_3230_ = lean_ctor_get(v___x_3209_, 0);
lean_dec(v_unused_3230_);
v___x_3222_ = v___x_3209_;
v_isShared_3223_ = v_isSharedCheck_3229_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3209_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3229_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v_map_3224_; lean_object* v_set_3225_; lean_object* v___x_3227_; 
v_map_3224_ = lean_ctor_get(v_a_3220_, 0);
lean_inc_ref(v_map_3224_);
v_set_3225_ = lean_ctor_get(v_a_3220_, 1);
lean_inc_ref(v_set_3225_);
lean_dec(v_a_3220_);
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 1, v_set_3225_);
lean_ctor_set(v___x_3222_, 0, v_map_3224_);
v___x_3227_ = v___x_3222_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_map_3224_);
lean_ctor_set(v_reuseFailAlloc_3228_, 1, v_set_3225_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
}
else
{
lean_object* v_val_3231_; lean_object* v_fst_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3239_; 
lean_dec_ref(v_cache_3204_);
lean_dec_ref(v_e_3203_);
v_val_3231_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_val_3231_);
lean_dec_ref_known(v___x_3207_, 1);
v_fst_3232_ = lean_ctor_get(v_val_3231_, 0);
v_isSharedCheck_3239_ = !lean_is_exclusive(v_val_3231_);
if (v_isSharedCheck_3239_ == 0)
{
lean_object* v_unused_3240_; 
v_unused_3240_ = lean_ctor_get(v_val_3231_, 1);
lean_dec(v_unused_3240_);
v___x_3234_ = v_val_3231_;
v_isShared_3235_ = v_isSharedCheck_3239_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_fst_3232_);
lean_dec(v_val_3231_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3239_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v___x_3237_; 
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 1, v___y_3206_);
v___x_3237_ = v___x_3234_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v_fst_3232_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v___y_3206_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
return v___x_3237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks___lam__0___boxed(lean_object* v_e_3241_, lean_object* v_cache_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_){
_start:
{
lean_object* v_res_3245_; 
v_res_3245_ = l_Lean_Meta_Sym_shareCommonWithoutChecks___lam__0(v_e_3241_, v_cache_3242_, v___y_3243_, v___y_3244_);
lean_dec_ref(v___y_3243_);
return v_res_3245_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__1(void){
_start:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3247_ = ((lean_object*)(l_Lean_Meta_Sym_SymM_run___redArg___closed__4));
v___x_3248_ = lean_unsigned_to_nat(16u);
v___x_3249_ = lean_unsigned_to_nat(404u);
v___x_3250_ = ((lean_object*)(l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__0));
v___x_3251_ = ((lean_object*)(l_Lean_Meta_Sym_SymM_run___redArg___closed__2));
v___x_3252_ = l_mkPanicMessageWithDecl(v___x_3251_, v___x_3250_, v___x_3249_, v___x_3248_, v___x_3247_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks(lean_object* v_e_3253_, lean_object* v_cache_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_, lean_object* v_a_3260_){
_start:
{
lean_object* v___f_3262_; lean_object* v___x_3263_; lean_object* v_env_3264_; uint8_t v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v_a_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3278_; 
v___f_3262_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_shareCommonWithoutChecks___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3262_, 0, v_e_3253_);
lean_closure_set(v___f_3262_, 1, v_cache_3254_);
v___x_3263_ = lean_st_ref_get(v_a_3260_);
v_env_3264_ = lean_ctor_get(v___x_3263_, 0);
lean_inc_ref(v_env_3264_);
lean_dec(v___x_3263_);
v___x_3265_ = 0;
v___x_3266_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3266_, 0, v_env_3264_);
lean_ctor_set_uint8(v___x_3266_, sizeof(void*)*1, v___x_3265_);
lean_ctor_set_uint8(v___x_3266_, sizeof(void*)*1 + 1, v___x_3265_);
v___x_3267_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_3262_, v___x_3266_, v_a_3256_);
v_a_3268_ = lean_ctor_get(v___x_3267_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3267_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3270_ = v___x_3267_;
v_isShared_3271_ = v_isSharedCheck_3278_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_a_3268_);
lean_dec(v___x_3267_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3278_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
if (lean_obj_tag(v_a_3268_) == 0)
{
lean_object* v___x_3272_; lean_object* v___x_3273_; 
lean_dec_ref_known(v_a_3268_, 1);
lean_del_object(v___x_3270_);
v___x_3272_ = lean_obj_once(&l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__1, &l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__1_once, _init_l_Lean_Meta_Sym_shareCommonWithoutChecks___closed__1);
v___x_3273_ = l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1(v___x_3272_, v_a_3255_, v_a_3256_, v_a_3257_, v_a_3258_, v_a_3259_, v_a_3260_);
return v___x_3273_;
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; 
v_a_3274_ = lean_ctor_get(v_a_3268_, 0);
lean_inc(v_a_3274_);
lean_dec_ref_known(v_a_3268_, 1);
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 0, v_a_3274_);
v___x_3276_ = v___x_3270_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_a_3274_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks___boxed(lean_object* v_e_3279_, lean_object* v_cache_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_){
_start:
{
lean_object* v_res_3288_; 
v_res_3288_ = l_Lean_Meta_Sym_shareCommonWithoutChecks(v_e_3279_, v_cache_3280_, v_a_3281_, v_a_3282_, v_a_3283_, v_a_3284_, v_a_3285_, v_a_3286_);
lean_dec(v_a_3286_);
lean_dec_ref(v_a_3285_);
lean_dec(v_a_3284_);
lean_dec_ref(v_a_3283_);
lean_dec(v_a_3282_);
lean_dec_ref(v_a_3281_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0(lean_object* v_00_u03b2_3289_, lean_object* v_x_3290_, lean_object* v_x_3291_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___redArg(v_x_3290_, v_x_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___boxed(lean_object* v_00_u03b2_3293_, lean_object* v_x_3294_, lean_object* v_x_3295_){
_start:
{
lean_object* v_res_3296_; 
v_res_3296_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0(v_00_u03b2_3293_, v_x_3294_, v_x_3295_);
lean_dec_ref(v_x_3295_);
lean_dec_ref(v_x_3294_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0(lean_object* v_00_u03b2_3297_, lean_object* v_x_3298_, size_t v_x_3299_, lean_object* v_x_3300_){
_start:
{
lean_object* v___x_3301_; 
v___x_3301_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0___redArg(v_x_3298_, v_x_3299_, v_x_3300_);
return v___x_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3302_, lean_object* v_x_3303_, lean_object* v_x_3304_, lean_object* v_x_3305_){
_start:
{
size_t v_x_1452__boxed_3306_; lean_object* v_res_3307_; 
v_x_1452__boxed_3306_ = lean_unbox_usize(v_x_3304_);
lean_dec(v_x_3304_);
v_res_3307_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0(v_00_u03b2_3302_, v_x_3303_, v_x_1452__boxed_3306_, v_x_3305_);
lean_dec_ref(v_x_3305_);
lean_dec_ref(v_x_3303_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_3308_, lean_object* v_keys_3309_, lean_object* v_vals_3310_, lean_object* v_heq_3311_, lean_object* v_i_3312_, lean_object* v_k_3313_){
_start:
{
lean_object* v___x_3314_; 
v___x_3314_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2___redArg(v_keys_3309_, v_vals_3310_, v_i_3312_, v_k_3313_);
return v___x_3314_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_3315_, lean_object* v_keys_3316_, lean_object* v_vals_3317_, lean_object* v_heq_3318_, lean_object* v_i_3319_, lean_object* v_k_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0_spec__0_spec__2(v_00_u03b2_3315_, v_keys_3316_, v_vals_3317_, v_heq_3318_, v_i_3319_, v_k_3320_);
lean_dec_ref(v_k_3320_);
lean_dec_ref(v_vals_3317_);
lean_dec_ref(v_keys_3316_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isMaxShared___redArg(lean_object* v_e_3322_, lean_object* v_a_3323_){
_start:
{
lean_object* v___x_3325_; lean_object* v_share_3326_; lean_object* v___x_3327_; 
v___x_3325_ = lean_st_ref_get(v_a_3323_);
v_share_3326_ = lean_ctor_get(v___x_3325_, 0);
lean_inc_ref(v_share_3326_);
lean_dec(v___x_3325_);
v___x_3327_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___redArg(v_share_3326_, v_e_3322_);
lean_dec_ref(v_share_3326_);
if (lean_obj_tag(v___x_3327_) == 0)
{
uint8_t v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; 
v___x_3328_ = 0;
v___x_3329_ = lean_box(v___x_3328_);
v___x_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3329_);
return v___x_3330_;
}
else
{
lean_object* v_val_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3343_; 
v_val_3331_ = lean_ctor_get(v___x_3327_, 0);
v_isSharedCheck_3343_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3343_ == 0)
{
v___x_3333_ = v___x_3327_;
v_isShared_3334_ = v_isSharedCheck_3343_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_val_3331_);
lean_dec(v___x_3327_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3343_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v_fst_3335_; size_t v___x_3336_; size_t v___x_3337_; uint8_t v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3341_; 
v_fst_3335_ = lean_ctor_get(v_val_3331_, 0);
lean_inc(v_fst_3335_);
lean_dec(v_val_3331_);
v___x_3336_ = lean_ptr_addr(v_fst_3335_);
lean_dec(v_fst_3335_);
v___x_3337_ = lean_ptr_addr(v_e_3322_);
v___x_3338_ = lean_usize_dec_eq(v___x_3336_, v___x_3337_);
v___x_3339_ = lean_box(v___x_3338_);
if (v_isShared_3334_ == 0)
{
lean_ctor_set_tag(v___x_3333_, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3339_);
v___x_3341_ = v___x_3333_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v___x_3339_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isMaxShared___redArg___boxed(lean_object* v_e_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_){
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = l_Lean_Meta_Sym_isMaxShared___redArg(v_e_3344_, v_a_3345_);
lean_dec(v_a_3345_);
lean_dec_ref(v_e_3344_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isMaxShared(lean_object* v_e_3348_, lean_object* v_a_3349_, lean_object* v_a_3350_, lean_object* v_a_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_){
_start:
{
lean_object* v___x_3356_; 
v___x_3356_ = l_Lean_Meta_Sym_isMaxShared___redArg(v_e_3348_, v_a_3350_);
return v___x_3356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isMaxShared___boxed(lean_object* v_e_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_, lean_object* v_a_3360_, lean_object* v_a_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_){
_start:
{
lean_object* v_res_3365_; 
v_res_3365_ = l_Lean_Meta_Sym_isMaxShared(v_e_3357_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_, v_a_3362_, v_a_3363_);
lean_dec(v_a_3363_);
lean_dec_ref(v_a_3362_);
lean_dec(v_a_3361_);
lean_dec_ref(v_a_3360_);
lean_dec(v_a_3359_);
lean_dec_ref(v_a_3358_);
lean_dec_ref(v_e_3357_);
return v_res_3365_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0___redArg(lean_object* v_msg_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_){
_start:
{
lean_object* v_ref_3372_; lean_object* v___x_3373_; lean_object* v_a_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3382_; 
v_ref_3372_ = lean_ctor_get(v___y_3369_, 2);
v___x_3373_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0_spec__0(v_msg_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3376_ = v___x_3373_;
v_isShared_3377_ = v_isSharedCheck_3382_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_a_3374_);
lean_dec(v___x_3373_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3382_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3378_; lean_object* v___x_3380_; 
lean_inc(v_ref_3372_);
v___x_3378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3378_, 0, v_ref_3372_);
lean_ctor_set(v___x_3378_, 1, v_a_3374_);
if (v_isShared_3377_ == 0)
{
lean_ctor_set_tag(v___x_3376_, 1);
lean_ctor_set(v___x_3376_, 0, v___x_3378_);
v___x_3380_ = v___x_3376_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v___x_3378_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
return v___x_3380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0___redArg___boxed(lean_object* v_msg_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0___redArg(v_msg_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
return v_res_3389_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__1(void){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3391_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__0));
v___x_3392_ = l_Lean_stringToMessageData(v___x_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare(lean_object* v_e_3393_, lean_object* v_cache_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_){
_start:
{
lean_object* v___y_3403_; lean_object* v___y_3404_; lean_object* v___y_3405_; lean_object* v___y_3406_; lean_object* v___y_3407_; lean_object* v___y_3408_; uint8_t v___x_3412_; 
v___x_3412_ = l_Lean_Expr_hasLooseBVars(v_e_3393_);
if (v___x_3412_ == 0)
{
v___y_3403_ = v_a_3395_;
v___y_3404_ = v_a_3396_;
v___y_3405_ = v_a_3397_;
v___y_3406_ = v_a_3398_;
v___y_3407_ = v_a_3399_;
v___y_3408_ = v_a_3400_;
goto v___jp_3402_;
}
else
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3424_; 
lean_dec_ref(v_cache_3394_);
v___x_3413_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__1, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__1_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___closed__1);
v___x_3414_ = l_Lean_indentExpr(v_e_3393_);
v___x_3415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3413_);
lean_ctor_set(v___x_3415_, 1, v___x_3414_);
v___x_3416_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0___redArg(v___x_3415_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_);
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3419_ = v___x_3416_;
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3416_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3422_; 
if (v_isShared_3420_ == 0)
{
v___x_3422_ = v___x_3419_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v_a_3417_);
v___x_3422_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
return v___x_3422_;
}
}
}
v___jp_3402_:
{
lean_object* v___x_3409_; 
v___x_3409_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairShareViolation___redArg(v_e_3393_, v___y_3403_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_);
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v_a_3410_; lean_object* v___x_3411_; 
v_a_3410_ = lean_ctor_get(v___x_3409_, 0);
lean_inc(v_a_3410_);
lean_dec_ref_known(v___x_3409_, 1);
v___x_3411_ = l_Lean_Meta_Sym_shareCommonWithoutChecks(v_a_3410_, v_cache_3394_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_);
return v___x_3411_;
}
else
{
lean_dec_ref(v_cache_3394_);
return v___x_3409_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare___boxed(lean_object* v_e_3425_, lean_object* v_cache_3426_, lean_object* v_a_3427_, lean_object* v_a_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare(v_e_3425_, v_cache_3426_, v_a_3427_, v_a_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_);
lean_dec(v_a_3432_);
lean_dec_ref(v_a_3431_);
lean_dec(v_a_3430_);
lean_dec_ref(v_a_3429_);
lean_dec(v_a_3428_);
lean_dec_ref(v_a_3427_);
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0(lean_object* v_00_u03b1_3435_, lean_object* v_msg_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0___redArg(v_msg_3436_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0___boxed(lean_object* v_00_u03b1_3445_, lean_object* v_msg_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare_spec__0(v_00_u03b1_3445_, v_msg_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
lean_dec(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3448_);
lean_dec_ref(v___y_3447_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommon___lam__0(lean_object* v_e_3455_, lean_object* v___x_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_){
_start:
{
lean_object* v___x_3459_; 
v___x_3459_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__0___redArg(v___y_3458_, v_e_3455_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v___x_3460_; lean_object* v___x_3461_; 
v___x_3460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3456_);
lean_ctor_set(v___x_3460_, 1, v___y_3458_);
v___x_3461_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_e_3455_, v___y_3457_, v___x_3460_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3471_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 1);
v_a_3463_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3465_ = v___x_3461_;
v_isShared_3466_ = v_isSharedCheck_3471_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3462_);
lean_inc(v_a_3463_);
lean_dec(v___x_3461_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3471_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v_set_3467_; lean_object* v___x_3469_; 
v_set_3467_ = lean_ctor_get(v_a_3462_, 1);
lean_inc_ref(v_set_3467_);
lean_dec(v_a_3462_);
if (v_isShared_3466_ == 0)
{
lean_ctor_set(v___x_3465_, 1, v_set_3467_);
v___x_3469_ = v___x_3465_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_a_3463_);
lean_ctor_set(v_reuseFailAlloc_3470_, 1, v_set_3467_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
else
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3481_; 
v_a_3472_ = lean_ctor_get(v___x_3461_, 1);
v_isSharedCheck_3481_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3481_ == 0)
{
lean_object* v_unused_3482_; 
v_unused_3482_ = lean_ctor_get(v___x_3461_, 0);
lean_dec(v_unused_3482_);
v___x_3474_ = v___x_3461_;
v_isShared_3475_ = v_isSharedCheck_3481_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3461_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3481_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v_map_3476_; lean_object* v_set_3477_; lean_object* v___x_3479_; 
v_map_3476_ = lean_ctor_get(v_a_3472_, 0);
lean_inc_ref(v_map_3476_);
v_set_3477_ = lean_ctor_get(v_a_3472_, 1);
lean_inc_ref(v_set_3477_);
lean_dec(v_a_3472_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 1, v_set_3477_);
lean_ctor_set(v___x_3474_, 0, v_map_3476_);
v___x_3479_ = v___x_3474_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_map_3476_);
lean_ctor_set(v_reuseFailAlloc_3480_, 1, v_set_3477_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
return v___x_3479_;
}
}
}
}
else
{
lean_object* v_val_3483_; lean_object* v_fst_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3491_; 
lean_dec_ref(v___x_3456_);
lean_dec_ref(v_e_3455_);
v_val_3483_ = lean_ctor_get(v___x_3459_, 0);
lean_inc(v_val_3483_);
lean_dec_ref_known(v___x_3459_, 1);
v_fst_3484_ = lean_ctor_get(v_val_3483_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v_val_3483_);
if (v_isSharedCheck_3491_ == 0)
{
lean_object* v_unused_3492_; 
v_unused_3492_ = lean_ctor_get(v_val_3483_, 1);
lean_dec(v_unused_3492_);
v___x_3486_ = v_val_3483_;
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_fst_3484_);
lean_dec(v_val_3483_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
if (v_isShared_3487_ == 0)
{
lean_ctor_set(v___x_3486_, 1, v___y_3458_);
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v_fst_3484_);
lean_ctor_set(v_reuseFailAlloc_3490_, 1, v___y_3458_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommon___lam__0___boxed(lean_object* v_e_3493_, lean_object* v___x_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_){
_start:
{
lean_object* v_res_3497_; 
v_res_3497_ = l_Lean_Meta_Sym_shareCommon___lam__0(v_e_3493_, v___x_3494_, v___y_3495_, v___y_3496_);
lean_dec_ref(v___y_3495_);
return v_res_3497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommon(lean_object* v_e_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_){
_start:
{
lean_object* v___x_3506_; lean_object* v_a_3507_; lean_object* v___x_3508_; lean_object* v___f_3509_; lean_object* v___x_3510_; lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3521_; 
v___x_3506_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___redArg(v_a_3499_, v_a_3504_);
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
lean_dec_ref(v___x_3506_);
v___x_3508_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1);
lean_inc_ref(v_e_3498_);
v___f_3509_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_shareCommon___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3509_, 0, v_e_3498_);
lean_closure_set(v___f_3509_, 1, v___x_3508_);
v___x_3510_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_3509_, v_a_3507_, v_a_3500_);
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3513_ = v___x_3510_;
v_isShared_3514_ = v_isSharedCheck_3521_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3510_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3521_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
if (lean_obj_tag(v_a_3511_) == 0)
{
lean_object* v_a_3515_; lean_object* v___x_3516_; 
lean_del_object(v___x_3513_);
v_a_3515_ = lean_ctor_get(v_a_3511_, 0);
lean_inc(v_a_3515_);
lean_dec_ref_known(v_a_3511_, 1);
v___x_3516_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare(v_e_3498_, v_a_3515_, v_a_3499_, v_a_3500_, v_a_3501_, v_a_3502_, v_a_3503_, v_a_3504_);
return v___x_3516_;
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; 
lean_dec_ref(v_e_3498_);
v_a_3517_ = lean_ctor_get(v_a_3511_, 0);
lean_inc(v_a_3517_);
lean_dec_ref_known(v_a_3511_, 1);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 0, v_a_3517_);
v___x_3519_ = v___x_3513_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3517_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommon___boxed(lean_object* v_e_3522_, lean_object* v_a_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_, lean_object* v_a_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_){
_start:
{
lean_object* v_res_3530_; 
v_res_3530_ = l_Lean_Meta_Sym_shareCommon(v_e_3522_, v_a_3523_, v_a_3524_, v_a_3525_, v_a_3526_, v_a_3527_, v_a_3528_);
lean_dec(v_a_3528_);
lean_dec_ref(v_a_3527_);
lean_dec(v_a_3526_);
lean_dec_ref(v_a_3525_);
lean_dec(v_a_3524_);
lean_dec_ref(v_a_3523_);
return v_res_3530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonInc___lam__0(lean_object* v_e_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_){
_start:
{
lean_object* v___x_3534_; 
v___x_3534_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_e_3531_, v___y_3532_, v___y_3533_);
return v___x_3534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonInc___lam__0___boxed(lean_object* v_e_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_){
_start:
{
lean_object* v_res_3538_; 
v_res_3538_ = l_Lean_Meta_Sym_shareCommonInc___lam__0(v_e_3535_, v___y_3536_, v___y_3537_);
lean_dec_ref(v___y_3536_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object* v_e_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_){
_start:
{
lean_object* v___f_3547_; lean_object* v___x_3548_; lean_object* v_a_3549_; lean_object* v___x_3550_; lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3561_; 
lean_inc_ref(v_e_3539_);
v___f_3547_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_shareCommonInc___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3547_, 0, v_e_3539_);
v___x_3548_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_checkedShareCtx___redArg(v_a_3540_, v_a_3545_);
v_a_3549_ = lean_ctor_get(v___x_3548_, 0);
lean_inc(v_a_3549_);
lean_dec_ref(v___x_3548_);
v___x_3550_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_3547_, v_a_3549_, v_a_3541_);
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3553_ = v___x_3550_;
v_isShared_3554_ = v_isSharedCheck_3561_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v___x_3550_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3561_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
if (lean_obj_tag(v_a_3551_) == 0)
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
lean_dec_ref_known(v_a_3551_, 1);
lean_del_object(v___x_3553_);
v___x_3555_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_Sym_unfoldReducible_spec__0___closed__1);
v___x_3556_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_repairAndShare(v_e_3539_, v___x_3555_, v_a_3540_, v_a_3541_, v_a_3542_, v_a_3543_, v_a_3544_, v_a_3545_);
return v___x_3556_;
}
else
{
lean_object* v_a_3557_; lean_object* v___x_3559_; 
lean_dec_ref(v_e_3539_);
v_a_3557_ = lean_ctor_get(v_a_3551_, 0);
lean_inc(v_a_3557_);
lean_dec_ref_known(v_a_3551_, 1);
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 0, v_a_3557_);
v___x_3559_ = v___x_3553_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v_a_3557_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonInc___boxed(lean_object* v_e_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_){
_start:
{
lean_object* v_res_3570_; 
v_res_3570_ = l_Lean_Meta_Sym_shareCommonInc(v_e_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
lean_dec_ref(v_a_3563_);
return v_res_3570_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_3571_, lean_object* v_vals_3572_, lean_object* v_i_3573_, lean_object* v_k_3574_){
_start:
{
lean_object* v___x_3575_; uint8_t v___x_3576_; 
v___x_3575_ = lean_array_get_size(v_keys_3571_);
v___x_3576_ = lean_nat_dec_lt(v_i_3573_, v___x_3575_);
if (v___x_3576_ == 0)
{
lean_object* v___x_3577_; 
lean_dec(v_i_3573_);
v___x_3577_ = lean_box(0);
return v___x_3577_;
}
else
{
lean_object* v_k_x27_3578_; uint8_t v___x_3579_; 
v_k_x27_3578_ = lean_array_fget_borrowed(v_keys_3571_, v_i_3573_);
v___x_3579_ = l_Lean_instBEqFVarId_beq(v_k_3574_, v_k_x27_3578_);
if (v___x_3579_ == 0)
{
lean_object* v___x_3580_; lean_object* v___x_3581_; 
v___x_3580_ = lean_unsigned_to_nat(1u);
v___x_3581_ = lean_nat_add(v_i_3573_, v___x_3580_);
lean_dec(v_i_3573_);
v_i_3573_ = v___x_3581_;
goto _start;
}
else
{
lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3583_ = lean_array_fget_borrowed(v_vals_3572_, v_i_3573_);
lean_dec(v_i_3573_);
lean_inc(v___x_3583_);
v___x_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3584_, 0, v___x_3583_);
return v___x_3584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_3585_, lean_object* v_vals_3586_, lean_object* v_i_3587_, lean_object* v_k_3588_){
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1___redArg(v_keys_3585_, v_vals_3586_, v_i_3587_, v_k_3588_);
lean_dec(v_k_3588_);
lean_dec_ref(v_vals_3586_);
lean_dec_ref(v_keys_3585_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0___redArg(lean_object* v_x_3590_, size_t v_x_3591_, lean_object* v_x_3592_){
_start:
{
if (lean_obj_tag(v_x_3590_) == 0)
{
lean_object* v_es_3593_; lean_object* v___x_3594_; size_t v___x_3595_; size_t v___x_3596_; lean_object* v_j_3597_; lean_object* v___x_3598_; 
v_es_3593_ = lean_ctor_get(v_x_3590_, 0);
v___x_3594_ = lean_box(2);
v___x_3595_ = ((size_t)31ULL);
v___x_3596_ = lean_usize_land(v_x_3591_, v___x_3595_);
v_j_3597_ = lean_usize_to_nat(v___x_3596_);
v___x_3598_ = lean_array_get_borrowed(v___x_3594_, v_es_3593_, v_j_3597_);
lean_dec(v_j_3597_);
switch(lean_obj_tag(v___x_3598_))
{
case 0:
{
lean_object* v_key_3599_; lean_object* v_val_3600_; uint8_t v___x_3601_; 
v_key_3599_ = lean_ctor_get(v___x_3598_, 0);
v_val_3600_ = lean_ctor_get(v___x_3598_, 1);
v___x_3601_ = l_Lean_instBEqFVarId_beq(v_x_3592_, v_key_3599_);
if (v___x_3601_ == 0)
{
lean_object* v___x_3602_; 
v___x_3602_ = lean_box(0);
return v___x_3602_;
}
else
{
lean_object* v___x_3603_; 
lean_inc(v_val_3600_);
v___x_3603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3603_, 0, v_val_3600_);
return v___x_3603_;
}
}
case 1:
{
lean_object* v_node_3604_; size_t v___x_3605_; size_t v___x_3606_; 
v_node_3604_ = lean_ctor_get(v___x_3598_, 0);
v___x_3605_ = ((size_t)5ULL);
v___x_3606_ = lean_usize_shift_right(v_x_3591_, v___x_3605_);
v_x_3590_ = v_node_3604_;
v_x_3591_ = v___x_3606_;
goto _start;
}
default: 
{
lean_object* v___x_3608_; 
v___x_3608_ = lean_box(0);
return v___x_3608_;
}
}
}
else
{
lean_object* v_ks_3609_; lean_object* v_vs_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
v_ks_3609_ = lean_ctor_get(v_x_3590_, 0);
v_vs_3610_ = lean_ctor_get(v_x_3590_, 1);
v___x_3611_ = lean_unsigned_to_nat(0u);
v___x_3612_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1___redArg(v_ks_3609_, v_vs_3610_, v___x_3611_, v_x_3592_);
return v___x_3612_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_3613_, lean_object* v_x_3614_, lean_object* v_x_3615_){
_start:
{
size_t v_x_4285__boxed_3616_; lean_object* v_res_3617_; 
v_x_4285__boxed_3616_ = lean_unbox_usize(v_x_3614_);
lean_dec(v_x_3614_);
v_res_3617_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0___redArg(v_x_3613_, v_x_4285__boxed_3616_, v_x_3615_);
lean_dec(v_x_3615_);
lean_dec_ref(v_x_3613_);
return v_res_3617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0___redArg(lean_object* v_x_3618_, lean_object* v_x_3619_){
_start:
{
uint64_t v___x_3620_; size_t v___x_3621_; lean_object* v___x_3622_; 
v___x_3620_ = l_Lean_instHashableFVarId_hash(v_x_3619_);
v___x_3621_ = lean_uint64_to_usize(v___x_3620_);
v___x_3622_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0___redArg(v_x_3618_, v___x_3621_, v_x_3619_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0___redArg___boxed(lean_object* v_x_3623_, lean_object* v_x_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0___redArg(v_x_3623_, v_x_3624_);
lean_dec(v_x_3624_);
lean_dec_ref(v_x_3623_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_3626_, lean_object* v_x_3627_, lean_object* v_x_3628_, lean_object* v_x_3629_){
_start:
{
lean_object* v_ks_3630_; lean_object* v_vs_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3655_; 
v_ks_3630_ = lean_ctor_get(v_x_3626_, 0);
v_vs_3631_ = lean_ctor_get(v_x_3626_, 1);
v_isSharedCheck_3655_ = !lean_is_exclusive(v_x_3626_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3633_ = v_x_3626_;
v_isShared_3634_ = v_isSharedCheck_3655_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_vs_3631_);
lean_inc(v_ks_3630_);
lean_dec(v_x_3626_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3655_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3635_; uint8_t v___x_3636_; 
v___x_3635_ = lean_array_get_size(v_ks_3630_);
v___x_3636_ = lean_nat_dec_lt(v_x_3627_, v___x_3635_);
if (v___x_3636_ == 0)
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3640_; 
lean_dec(v_x_3627_);
v___x_3637_ = lean_array_push(v_ks_3630_, v_x_3628_);
v___x_3638_ = lean_array_push(v_vs_3631_, v_x_3629_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 1, v___x_3638_);
lean_ctor_set(v___x_3633_, 0, v___x_3637_);
v___x_3640_ = v___x_3633_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v___x_3637_);
lean_ctor_set(v_reuseFailAlloc_3641_, 1, v___x_3638_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
else
{
lean_object* v_k_x27_3642_; uint8_t v___x_3643_; 
v_k_x27_3642_ = lean_array_fget_borrowed(v_ks_3630_, v_x_3627_);
v___x_3643_ = l_Lean_instBEqFVarId_beq(v_x_3628_, v_k_x27_3642_);
if (v___x_3643_ == 0)
{
lean_object* v___x_3645_; 
if (v_isShared_3634_ == 0)
{
v___x_3645_ = v___x_3633_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_ks_3630_);
lean_ctor_set(v_reuseFailAlloc_3649_, 1, v_vs_3631_);
v___x_3645_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3646_ = lean_unsigned_to_nat(1u);
v___x_3647_ = lean_nat_add(v_x_3627_, v___x_3646_);
lean_dec(v_x_3627_);
v_x_3626_ = v___x_3645_;
v_x_3627_ = v___x_3647_;
goto _start;
}
}
else
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3653_; 
v___x_3650_ = lean_array_fset(v_ks_3630_, v_x_3627_, v_x_3628_);
v___x_3651_ = lean_array_fset(v_vs_3631_, v_x_3627_, v_x_3629_);
lean_dec(v_x_3627_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 1, v___x_3651_);
lean_ctor_set(v___x_3633_, 0, v___x_3650_);
v___x_3653_ = v___x_3633_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v___x_3650_);
lean_ctor_set(v_reuseFailAlloc_3654_, 1, v___x_3651_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4___redArg(lean_object* v_n_3656_, lean_object* v_k_3657_, lean_object* v_v_3658_){
_start:
{
lean_object* v___x_3659_; lean_object* v___x_3660_; 
v___x_3659_ = lean_unsigned_to_nat(0u);
v___x_3660_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4_spec__5___redArg(v_n_3656_, v___x_3659_, v_k_3657_, v_v_3658_);
return v___x_3660_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_3661_; 
v___x_3661_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3661_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg(lean_object* v_x_3662_, size_t v_x_3663_, size_t v_x_3664_, lean_object* v_x_3665_, lean_object* v_x_3666_){
_start:
{
if (lean_obj_tag(v_x_3662_) == 0)
{
lean_object* v_es_3667_; size_t v___x_3668_; size_t v___x_3669_; lean_object* v_j_3670_; lean_object* v___x_3671_; uint8_t v___x_3672_; 
v_es_3667_ = lean_ctor_get(v_x_3662_, 0);
v___x_3668_ = ((size_t)31ULL);
v___x_3669_ = lean_usize_land(v_x_3663_, v___x_3668_);
v_j_3670_ = lean_usize_to_nat(v___x_3669_);
v___x_3671_ = lean_array_get_size(v_es_3667_);
v___x_3672_ = lean_nat_dec_lt(v_j_3670_, v___x_3671_);
if (v___x_3672_ == 0)
{
lean_dec(v_j_3670_);
lean_dec(v_x_3666_);
lean_dec(v_x_3665_);
return v_x_3662_;
}
else
{
lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3711_; 
lean_inc_ref(v_es_3667_);
v_isSharedCheck_3711_ = !lean_is_exclusive(v_x_3662_);
if (v_isSharedCheck_3711_ == 0)
{
lean_object* v_unused_3712_; 
v_unused_3712_ = lean_ctor_get(v_x_3662_, 0);
lean_dec(v_unused_3712_);
v___x_3674_ = v_x_3662_;
v_isShared_3675_ = v_isSharedCheck_3711_;
goto v_resetjp_3673_;
}
else
{
lean_dec(v_x_3662_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3711_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v_v_3676_; lean_object* v___x_3677_; lean_object* v_xs_x27_3678_; lean_object* v___y_3680_; 
v_v_3676_ = lean_array_fget(v_es_3667_, v_j_3670_);
v___x_3677_ = lean_box(0);
v_xs_x27_3678_ = lean_array_fset(v_es_3667_, v_j_3670_, v___x_3677_);
switch(lean_obj_tag(v_v_3676_))
{
case 0:
{
lean_object* v_key_3685_; lean_object* v_val_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3696_; 
v_key_3685_ = lean_ctor_get(v_v_3676_, 0);
v_val_3686_ = lean_ctor_get(v_v_3676_, 1);
v_isSharedCheck_3696_ = !lean_is_exclusive(v_v_3676_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3688_ = v_v_3676_;
v_isShared_3689_ = v_isSharedCheck_3696_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_val_3686_);
lean_inc(v_key_3685_);
lean_dec(v_v_3676_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3696_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
uint8_t v___x_3690_; 
v___x_3690_ = l_Lean_instBEqFVarId_beq(v_x_3665_, v_key_3685_);
if (v___x_3690_ == 0)
{
lean_object* v___x_3691_; lean_object* v___x_3692_; 
lean_del_object(v___x_3688_);
v___x_3691_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3685_, v_val_3686_, v_x_3665_, v_x_3666_);
v___x_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3691_);
v___y_3680_ = v___x_3692_;
goto v___jp_3679_;
}
else
{
lean_object* v___x_3694_; 
lean_dec(v_val_3686_);
lean_dec(v_key_3685_);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 1, v_x_3666_);
lean_ctor_set(v___x_3688_, 0, v_x_3665_);
v___x_3694_ = v___x_3688_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_x_3665_);
lean_ctor_set(v_reuseFailAlloc_3695_, 1, v_x_3666_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
v___y_3680_ = v___x_3694_;
goto v___jp_3679_;
}
}
}
}
case 1:
{
lean_object* v_node_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3709_; 
v_node_3697_ = lean_ctor_get(v_v_3676_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v_v_3676_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3699_ = v_v_3676_;
v_isShared_3700_ = v_isSharedCheck_3709_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_node_3697_);
lean_dec(v_v_3676_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3709_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
size_t v___x_3701_; size_t v___x_3702_; size_t v___x_3703_; size_t v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3707_; 
v___x_3701_ = ((size_t)5ULL);
v___x_3702_ = lean_usize_shift_right(v_x_3663_, v___x_3701_);
v___x_3703_ = ((size_t)1ULL);
v___x_3704_ = lean_usize_add(v_x_3664_, v___x_3703_);
v___x_3705_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg(v_node_3697_, v___x_3702_, v___x_3704_, v_x_3665_, v_x_3666_);
if (v_isShared_3700_ == 0)
{
lean_ctor_set(v___x_3699_, 0, v___x_3705_);
v___x_3707_ = v___x_3699_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v___x_3705_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
v___y_3680_ = v___x_3707_;
goto v___jp_3679_;
}
}
}
default: 
{
lean_object* v___x_3710_; 
v___x_3710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3710_, 0, v_x_3665_);
lean_ctor_set(v___x_3710_, 1, v_x_3666_);
v___y_3680_ = v___x_3710_;
goto v___jp_3679_;
}
}
v___jp_3679_:
{
lean_object* v___x_3681_; lean_object* v___x_3683_; 
v___x_3681_ = lean_array_fset(v_xs_x27_3678_, v_j_3670_, v___y_3680_);
lean_dec(v_j_3670_);
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 0, v___x_3681_);
v___x_3683_ = v___x_3674_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v___x_3681_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
}
}
else
{
lean_object* v_ks_3713_; lean_object* v_vs_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3732_; 
v_ks_3713_ = lean_ctor_get(v_x_3662_, 0);
v_vs_3714_ = lean_ctor_get(v_x_3662_, 1);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_x_3662_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3716_ = v_x_3662_;
v_isShared_3717_ = v_isSharedCheck_3732_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_vs_3714_);
lean_inc(v_ks_3713_);
lean_dec(v_x_3662_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3732_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3719_; 
if (v_isShared_3717_ == 0)
{
v___x_3719_ = v___x_3716_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v_ks_3713_);
lean_ctor_set(v_reuseFailAlloc_3731_, 1, v_vs_3714_);
v___x_3719_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
lean_object* v_newNode_3720_; size_t v___x_3721_; uint8_t v___x_3722_; 
v_newNode_3720_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4___redArg(v___x_3719_, v_x_3665_, v_x_3666_);
v___x_3721_ = ((size_t)7ULL);
v___x_3722_ = lean_usize_dec_le(v___x_3721_, v_x_3664_);
if (v___x_3722_ == 0)
{
lean_object* v___x_3723_; lean_object* v___x_3724_; uint8_t v___x_3725_; 
v___x_3723_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3720_);
v___x_3724_ = lean_unsigned_to_nat(4u);
v___x_3725_ = lean_nat_dec_lt(v___x_3723_, v___x_3724_);
lean_dec(v___x_3723_);
if (v___x_3725_ == 0)
{
lean_object* v_ks_3726_; lean_object* v_vs_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; 
v_ks_3726_ = lean_ctor_get(v_newNode_3720_, 0);
lean_inc_ref(v_ks_3726_);
v_vs_3727_ = lean_ctor_get(v_newNode_3720_, 1);
lean_inc_ref(v_vs_3727_);
lean_dec_ref(v_newNode_3720_);
v___x_3728_ = lean_unsigned_to_nat(0u);
v___x_3729_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___closed__0);
v___x_3730_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5___redArg(v_x_3664_, v_ks_3726_, v_vs_3727_, v___x_3728_, v___x_3729_);
lean_dec_ref(v_vs_3727_);
lean_dec_ref(v_ks_3726_);
return v___x_3730_;
}
else
{
return v_newNode_3720_;
}
}
else
{
return v_newNode_3720_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5___redArg(size_t v_depth_3733_, lean_object* v_keys_3734_, lean_object* v_vals_3735_, lean_object* v_i_3736_, lean_object* v_entries_3737_){
_start:
{
lean_object* v___x_3738_; uint8_t v___x_3739_; 
v___x_3738_ = lean_array_get_size(v_keys_3734_);
v___x_3739_ = lean_nat_dec_lt(v_i_3736_, v___x_3738_);
if (v___x_3739_ == 0)
{
lean_dec(v_i_3736_);
return v_entries_3737_;
}
else
{
lean_object* v_k_3740_; lean_object* v_v_3741_; uint64_t v___x_3742_; size_t v_h_3743_; size_t v___x_3744_; lean_object* v___x_3745_; size_t v___x_3746_; size_t v___x_3747_; size_t v___x_3748_; size_t v_h_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; 
v_k_3740_ = lean_array_fget_borrowed(v_keys_3734_, v_i_3736_);
v_v_3741_ = lean_array_fget_borrowed(v_vals_3735_, v_i_3736_);
v___x_3742_ = l_Lean_instHashableFVarId_hash(v_k_3740_);
v_h_3743_ = lean_uint64_to_usize(v___x_3742_);
v___x_3744_ = ((size_t)5ULL);
v___x_3745_ = lean_unsigned_to_nat(1u);
v___x_3746_ = ((size_t)1ULL);
v___x_3747_ = lean_usize_sub(v_depth_3733_, v___x_3746_);
v___x_3748_ = lean_usize_mul(v___x_3744_, v___x_3747_);
v_h_3749_ = lean_usize_shift_right(v_h_3743_, v___x_3748_);
v___x_3750_ = lean_nat_add(v_i_3736_, v___x_3745_);
lean_dec(v_i_3736_);
lean_inc(v_v_3741_);
lean_inc(v_k_3740_);
v___x_3751_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg(v_entries_3737_, v_h_3749_, v_depth_3733_, v_k_3740_, v_v_3741_);
v_i_3736_ = v___x_3750_;
v_entries_3737_ = v___x_3751_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_3753_, lean_object* v_keys_3754_, lean_object* v_vals_3755_, lean_object* v_i_3756_, lean_object* v_entries_3757_){
_start:
{
size_t v_depth_boxed_3758_; lean_object* v_res_3759_; 
v_depth_boxed_3758_ = lean_unbox_usize(v_depth_3753_);
lean_dec(v_depth_3753_);
v_res_3759_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5___redArg(v_depth_boxed_3758_, v_keys_3754_, v_vals_3755_, v_i_3756_, v_entries_3757_);
lean_dec_ref(v_vals_3755_);
lean_dec_ref(v_keys_3754_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_x_3760_, lean_object* v_x_3761_, lean_object* v_x_3762_, lean_object* v_x_3763_, lean_object* v_x_3764_){
_start:
{
size_t v_x_4420__boxed_3765_; size_t v_x_4421__boxed_3766_; lean_object* v_res_3767_; 
v_x_4420__boxed_3765_ = lean_unbox_usize(v_x_3761_);
lean_dec(v_x_3761_);
v_x_4421__boxed_3766_ = lean_unbox_usize(v_x_3762_);
lean_dec(v_x_3762_);
v_res_3767_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg(v_x_3760_, v_x_4420__boxed_3765_, v_x_4421__boxed_3766_, v_x_3763_, v_x_3764_);
return v_res_3767_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1___redArg(lean_object* v_x_3768_, lean_object* v_x_3769_, lean_object* v_x_3770_){
_start:
{
uint64_t v___x_3771_; size_t v___x_3772_; size_t v___x_3773_; lean_object* v___x_3774_; 
v___x_3771_ = l_Lean_instHashableFVarId_hash(v_x_3769_);
v___x_3772_ = lean_uint64_to_usize(v___x_3771_);
v___x_3773_ = ((size_t)1ULL);
v___x_3774_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg(v_x_3768_, v___x_3772_, v___x_3773_, v_x_3769_, v_x_3770_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLetValueS_x3f(lean_object* v_fvarId_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_){
_start:
{
uint8_t v___x_3783_; lean_object* v___x_3784_; 
v___x_3783_ = 0;
lean_inc(v_fvarId_3775_);
v___x_3784_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_3775_, v___x_3783_, v_a_3778_, v_a_3780_, v_a_3781_);
if (lean_obj_tag(v___x_3784_) == 0)
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3859_; 
v_a_3785_ = lean_ctor_get(v___x_3784_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3784_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3787_ = v___x_3784_;
v_isShared_3788_ = v_isSharedCheck_3859_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3784_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3859_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
if (lean_obj_tag(v_a_3785_) == 1)
{
lean_object* v_val_3789_; lean_object* v___x_3790_; lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3854_; 
lean_del_object(v___x_3787_);
v_val_3789_ = lean_ctor_get(v_a_3785_, 0);
v___x_3790_ = l_Lean_Meta_Sym_isMaxShared___redArg(v_val_3789_, v_a_3777_);
v_a_3791_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3793_ = v___x_3790_;
v_isShared_3794_ = v_isSharedCheck_3854_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3790_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3854_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
uint8_t v___x_3795_; 
v___x_3795_ = lean_unbox(v_a_3791_);
lean_dec(v_a_3791_);
if (v___x_3795_ == 0)
{
lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3849_; 
lean_inc(v_val_3789_);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_a_3785_);
if (v_isSharedCheck_3849_ == 0)
{
lean_object* v_unused_3850_; 
v_unused_3850_ = lean_ctor_get(v_a_3785_, 0);
lean_dec(v_unused_3850_);
v___x_3797_ = v_a_3785_;
v_isShared_3798_ = v_isSharedCheck_3849_;
goto v_resetjp_3796_;
}
else
{
lean_dec(v_a_3785_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3849_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3799_; lean_object* v_letValue_3800_; lean_object* v___x_3801_; 
v___x_3799_ = lean_st_ref_get(v_a_3777_);
v_letValue_3800_ = lean_ctor_get(v___x_3799_, 4);
lean_inc_ref(v_letValue_3800_);
lean_dec(v___x_3799_);
v___x_3801_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0___redArg(v_letValue_3800_, v_fvarId_3775_);
lean_dec_ref(v_letValue_3800_);
if (lean_obj_tag(v___x_3801_) == 1)
{
lean_object* v___x_3803_; 
lean_del_object(v___x_3797_);
lean_dec(v_val_3789_);
lean_dec(v_fvarId_3775_);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 0, v___x_3801_);
v___x_3803_ = v___x_3793_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v___x_3801_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
else
{
lean_object* v___x_3805_; 
lean_dec(v___x_3801_);
lean_del_object(v___x_3793_);
v___x_3805_ = l_Lean_Meta_Sym_shareCommon(v_val_3789_, v_a_3776_, v_a_3777_, v_a_3778_, v_a_3779_, v_a_3780_, v_a_3781_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3840_; 
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3808_ = v___x_3805_;
v_isShared_3809_ = v_isSharedCheck_3840_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_a_3806_);
lean_dec(v___x_3805_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3840_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
lean_object* v___x_3810_; lean_object* v_share_3811_; lean_object* v_maxFVar_3812_; lean_object* v_proofInstInfo_3813_; lean_object* v_proofInstInfoFVar_3814_; lean_object* v_letValue_3815_; lean_object* v_inferType_3816_; lean_object* v_getLevel_3817_; lean_object* v_congrInfo_3818_; lean_object* v_defEqI_3819_; lean_object* v_extensions_3820_; lean_object* v_issues_3821_; lean_object* v_canon_3822_; lean_object* v_instanceOverrides_3823_; uint8_t v_debug_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3839_; 
v___x_3810_ = lean_st_ref_take(v_a_3777_);
v_share_3811_ = lean_ctor_get(v___x_3810_, 0);
v_maxFVar_3812_ = lean_ctor_get(v___x_3810_, 1);
v_proofInstInfo_3813_ = lean_ctor_get(v___x_3810_, 2);
v_proofInstInfoFVar_3814_ = lean_ctor_get(v___x_3810_, 3);
v_letValue_3815_ = lean_ctor_get(v___x_3810_, 4);
v_inferType_3816_ = lean_ctor_get(v___x_3810_, 5);
v_getLevel_3817_ = lean_ctor_get(v___x_3810_, 6);
v_congrInfo_3818_ = lean_ctor_get(v___x_3810_, 7);
v_defEqI_3819_ = lean_ctor_get(v___x_3810_, 8);
v_extensions_3820_ = lean_ctor_get(v___x_3810_, 9);
v_issues_3821_ = lean_ctor_get(v___x_3810_, 10);
v_canon_3822_ = lean_ctor_get(v___x_3810_, 11);
v_instanceOverrides_3823_ = lean_ctor_get(v___x_3810_, 12);
v_debug_3824_ = lean_ctor_get_uint8(v___x_3810_, sizeof(void*)*13);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3810_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3826_ = v___x_3810_;
v_isShared_3827_ = v_isSharedCheck_3839_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_instanceOverrides_3823_);
lean_inc(v_canon_3822_);
lean_inc(v_issues_3821_);
lean_inc(v_extensions_3820_);
lean_inc(v_defEqI_3819_);
lean_inc(v_congrInfo_3818_);
lean_inc(v_getLevel_3817_);
lean_inc(v_inferType_3816_);
lean_inc(v_letValue_3815_);
lean_inc(v_proofInstInfoFVar_3814_);
lean_inc(v_proofInstInfo_3813_);
lean_inc(v_maxFVar_3812_);
lean_inc(v_share_3811_);
lean_dec(v___x_3810_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3839_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3828_; lean_object* v___x_3830_; 
lean_inc(v_a_3806_);
v___x_3828_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1___redArg(v_letValue_3815_, v_fvarId_3775_, v_a_3806_);
if (v_isShared_3827_ == 0)
{
lean_ctor_set(v___x_3826_, 4, v___x_3828_);
v___x_3830_ = v___x_3826_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_share_3811_);
lean_ctor_set(v_reuseFailAlloc_3838_, 1, v_maxFVar_3812_);
lean_ctor_set(v_reuseFailAlloc_3838_, 2, v_proofInstInfo_3813_);
lean_ctor_set(v_reuseFailAlloc_3838_, 3, v_proofInstInfoFVar_3814_);
lean_ctor_set(v_reuseFailAlloc_3838_, 4, v___x_3828_);
lean_ctor_set(v_reuseFailAlloc_3838_, 5, v_inferType_3816_);
lean_ctor_set(v_reuseFailAlloc_3838_, 6, v_getLevel_3817_);
lean_ctor_set(v_reuseFailAlloc_3838_, 7, v_congrInfo_3818_);
lean_ctor_set(v_reuseFailAlloc_3838_, 8, v_defEqI_3819_);
lean_ctor_set(v_reuseFailAlloc_3838_, 9, v_extensions_3820_);
lean_ctor_set(v_reuseFailAlloc_3838_, 10, v_issues_3821_);
lean_ctor_set(v_reuseFailAlloc_3838_, 11, v_canon_3822_);
lean_ctor_set(v_reuseFailAlloc_3838_, 12, v_instanceOverrides_3823_);
lean_ctor_set_uint8(v_reuseFailAlloc_3838_, sizeof(void*)*13, v_debug_3824_);
v___x_3830_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
lean_object* v___x_3831_; lean_object* v___x_3833_; 
v___x_3831_ = lean_st_ref_put(v_a_3777_, v___x_3830_);
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 0, v_a_3806_);
v___x_3833_ = v___x_3797_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v_a_3806_);
v___x_3833_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
lean_object* v___x_3835_; 
if (v_isShared_3809_ == 0)
{
lean_ctor_set(v___x_3808_, 0, v___x_3833_);
v___x_3835_ = v___x_3808_;
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
}
}
}
else
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3848_; 
lean_del_object(v___x_3797_);
lean_dec(v_fvarId_3775_);
v_a_3841_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3843_ = v___x_3805_;
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v___x_3805_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v_a_3841_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
return v___x_3846_;
}
}
}
}
}
}
else
{
lean_object* v___x_3852_; 
lean_dec(v_fvarId_3775_);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 0, v_a_3785_);
v___x_3852_ = v___x_3793_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v_a_3785_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
else
{
lean_object* v___x_3855_; lean_object* v___x_3857_; 
lean_dec(v_a_3785_);
lean_dec(v_fvarId_3775_);
v___x_3855_ = lean_box(0);
if (v_isShared_3788_ == 0)
{
lean_ctor_set(v___x_3787_, 0, v___x_3855_);
v___x_3857_ = v___x_3787_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v___x_3855_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
else
{
lean_dec(v_fvarId_3775_);
return v___x_3784_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getLetValueS_x3f___boxed(lean_object* v_fvarId_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_){
_start:
{
lean_object* v_res_3868_; 
v_res_3868_ = l_Lean_Meta_Sym_getLetValueS_x3f(v_fvarId_3860_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
lean_dec(v_a_3866_);
lean_dec_ref(v_a_3865_);
lean_dec(v_a_3864_);
lean_dec_ref(v_a_3863_);
lean_dec(v_a_3862_);
lean_dec_ref(v_a_3861_);
return v_res_3868_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0(lean_object* v_00_u03b2_3869_, lean_object* v_x_3870_, lean_object* v_x_3871_){
_start:
{
lean_object* v___x_3872_; 
v___x_3872_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0___redArg(v_x_3870_, v_x_3871_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0___boxed(lean_object* v_00_u03b2_3873_, lean_object* v_x_3874_, lean_object* v_x_3875_){
_start:
{
lean_object* v_res_3876_; 
v_res_3876_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0(v_00_u03b2_3873_, v_x_3874_, v_x_3875_);
lean_dec(v_x_3875_);
lean_dec_ref(v_x_3874_);
return v_res_3876_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1(lean_object* v_00_u03b2_3877_, lean_object* v_x_3878_, lean_object* v_x_3879_, lean_object* v_x_3880_){
_start:
{
lean_object* v___x_3881_; 
v___x_3881_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1___redArg(v_x_3878_, v_x_3879_, v_x_3880_);
return v___x_3881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0(lean_object* v_00_u03b2_3882_, lean_object* v_x_3883_, size_t v_x_3884_, lean_object* v_x_3885_){
_start:
{
lean_object* v___x_3886_; 
v___x_3886_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0___redArg(v_x_3883_, v_x_3884_, v_x_3885_);
return v___x_3886_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3887_, lean_object* v_x_3888_, lean_object* v_x_3889_, lean_object* v_x_3890_){
_start:
{
size_t v_x_4732__boxed_3891_; lean_object* v_res_3892_; 
v_x_4732__boxed_3891_ = lean_unbox_usize(v_x_3889_);
lean_dec(v_x_3889_);
v_res_3892_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0(v_00_u03b2_3887_, v_x_3888_, v_x_4732__boxed_3891_, v_x_3890_);
lean_dec(v_x_3890_);
lean_dec_ref(v_x_3888_);
return v_res_3892_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2(lean_object* v_00_u03b2_3893_, lean_object* v_x_3894_, size_t v_x_3895_, size_t v_x_3896_, lean_object* v_x_3897_, lean_object* v_x_3898_){
_start:
{
lean_object* v___x_3899_; 
v___x_3899_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg(v_x_3894_, v_x_3895_, v_x_3896_, v_x_3897_, v_x_3898_);
return v___x_3899_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3900_, lean_object* v_x_3901_, lean_object* v_x_3902_, lean_object* v_x_3903_, lean_object* v_x_3904_, lean_object* v_x_3905_){
_start:
{
size_t v_x_4743__boxed_3906_; size_t v_x_4744__boxed_3907_; lean_object* v_res_3908_; 
v_x_4743__boxed_3906_ = lean_unbox_usize(v_x_3902_);
lean_dec(v_x_3902_);
v_x_4744__boxed_3907_ = lean_unbox_usize(v_x_3903_);
lean_dec(v_x_3903_);
v_res_3908_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2(v_00_u03b2_3900_, v_x_3901_, v_x_4743__boxed_3906_, v_x_4744__boxed_3907_, v_x_3904_, v_x_3905_);
return v_res_3908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3909_, lean_object* v_keys_3910_, lean_object* v_vals_3911_, lean_object* v_heq_3912_, lean_object* v_i_3913_, lean_object* v_k_3914_){
_start:
{
lean_object* v___x_3915_; 
v___x_3915_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1___redArg(v_keys_3910_, v_vals_3911_, v_i_3913_, v_k_3914_);
return v___x_3915_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3916_, lean_object* v_keys_3917_, lean_object* v_vals_3918_, lean_object* v_heq_3919_, lean_object* v_i_3920_, lean_object* v_k_3921_){
_start:
{
lean_object* v_res_3922_; 
v_res_3922_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__0_spec__0_spec__1(v_00_u03b2_3916_, v_keys_3917_, v_vals_3918_, v_heq_3919_, v_i_3920_, v_k_3921_);
lean_dec(v_k_3921_);
lean_dec_ref(v_vals_3918_);
lean_dec_ref(v_keys_3917_);
return v_res_3922_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_3923_, lean_object* v_n_3924_, lean_object* v_k_3925_, lean_object* v_v_3926_){
_start:
{
lean_object* v___x_3927_; 
v___x_3927_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4___redArg(v_n_3924_, v_k_3925_, v_v_3926_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_3928_, size_t v_depth_3929_, lean_object* v_keys_3930_, lean_object* v_vals_3931_, lean_object* v_heq_3932_, lean_object* v_i_3933_, lean_object* v_entries_3934_){
_start:
{
lean_object* v___x_3935_; 
v___x_3935_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5___redArg(v_depth_3929_, v_keys_3930_, v_vals_3931_, v_i_3933_, v_entries_3934_);
return v___x_3935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_3936_, lean_object* v_depth_3937_, lean_object* v_keys_3938_, lean_object* v_vals_3939_, lean_object* v_heq_3940_, lean_object* v_i_3941_, lean_object* v_entries_3942_){
_start:
{
size_t v_depth_boxed_3943_; lean_object* v_res_3944_; 
v_depth_boxed_3943_ = lean_unbox_usize(v_depth_3937_);
lean_dec(v_depth_3937_);
v_res_3944_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__5(v_00_u03b2_3936_, v_depth_boxed_3943_, v_keys_3938_, v_vals_3939_, v_heq_3940_, v_i_3941_, v_entries_3942_);
lean_dec_ref(v_vals_3939_);
lean_dec_ref(v_keys_3938_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_3945_, lean_object* v_x_3946_, lean_object* v_x_3947_, lean_object* v_x_3948_, lean_object* v_x_3949_){
_start:
{
lean_object* v___x_3950_; 
v___x_3950_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2_spec__4_spec__5___redArg(v_x_3946_, v_x_3947_, v_x_3948_, v_x_3949_);
return v___x_3950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_share(lean_object* v_e_3951_, lean_object* v_a_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_, lean_object* v_a_3955_, lean_object* v_a_3956_, lean_object* v_a_3957_){
_start:
{
lean_object* v___x_3959_; 
v___x_3959_ = l_Lean_Meta_Sym_shareCommonInc(v_e_3951_, v_a_3952_, v_a_3953_, v_a_3954_, v_a_3955_, v_a_3956_, v_a_3957_);
return v___x_3959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_share___boxed(lean_object* v_e_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v_a_3964_, lean_object* v_a_3965_, lean_object* v_a_3966_, lean_object* v_a_3967_){
_start:
{
lean_object* v_res_3968_; 
v_res_3968_ = l_Lean_Meta_Sym_share(v_e_3960_, v_a_3961_, v_a_3962_, v_a_3963_, v_a_3964_, v_a_3965_, v_a_3966_);
lean_dec(v_a_3966_);
lean_dec_ref(v_a_3965_);
lean_dec(v_a_3964_);
lean_dec_ref(v_a_3963_);
lean_dec(v_a_3962_);
lean_dec_ref(v_a_3961_);
return v_res_3968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDebugEnabled___redArg(lean_object* v_a_3969_){
_start:
{
lean_object* v___x_3971_; uint8_t v_debug_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; 
v___x_3971_ = lean_st_ref_get(v_a_3969_);
v_debug_3972_ = lean_ctor_get_uint8(v___x_3971_, sizeof(void*)*13);
lean_dec(v___x_3971_);
v___x_3973_ = lean_box(v_debug_3972_);
v___x_3974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3973_);
return v___x_3974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDebugEnabled___redArg___boxed(lean_object* v_a_3975_, lean_object* v_a_3976_){
_start:
{
lean_object* v_res_3977_; 
v_res_3977_ = l_Lean_Meta_Sym_isDebugEnabled___redArg(v_a_3975_);
lean_dec(v_a_3975_);
return v_res_3977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDebugEnabled(lean_object* v_a_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_){
_start:
{
lean_object* v___x_3985_; uint8_t v_debug_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; 
v___x_3985_ = lean_st_ref_get(v_a_3979_);
v_debug_3986_ = lean_ctor_get_uint8(v___x_3985_, sizeof(void*)*13);
lean_dec(v___x_3985_);
v___x_3987_ = lean_box(v_debug_3986_);
v___x_3988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3987_);
return v___x_3988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDebugEnabled___boxed(lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Lean_Meta_Sym_isDebugEnabled(v_a_3989_, v_a_3990_, v_a_3991_, v_a_3992_, v_a_3993_, v_a_3994_);
lean_dec(v_a_3994_);
lean_dec_ref(v_a_3993_);
lean_dec(v_a_3992_);
lean_dec_ref(v_a_3991_);
lean_dec(v_a_3990_);
lean_dec_ref(v_a_3989_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object* v_a_3997_){
_start:
{
lean_object* v_config_3999_; lean_object* v___x_4000_; 
v_config_3999_ = lean_ctor_get(v_a_3997_, 1);
lean_inc_ref(v_config_3999_);
v___x_4000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4000_, 0, v_config_3999_);
return v___x_4000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getConfig___redArg___boxed(lean_object* v_a_4001_, lean_object* v_a_4002_){
_start:
{
lean_object* v_res_4003_; 
v_res_4003_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_4001_);
lean_dec_ref(v_a_4001_);
return v_res_4003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getConfig(lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_){
_start:
{
lean_object* v___x_4011_; 
v___x_4011_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_4004_);
return v___x_4011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getConfig___boxed(lean_object* v_a_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_, lean_object* v_a_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_){
_start:
{
lean_object* v_res_4019_; 
v_res_4019_ = l_Lean_Meta_Sym_getConfig(v_a_4012_, v_a_4013_, v_a_4014_, v_a_4015_, v_a_4016_, v_a_4017_);
lean_dec(v_a_4017_);
lean_dec_ref(v_a_4016_);
lean_dec(v_a_4015_);
lean_dec_ref(v_a_4014_);
lean_dec(v_a_4013_);
lean_dec_ref(v_a_4012_);
return v_res_4019_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0___redArg(lean_object* v_cls_4020_, lean_object* v_msg_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_){
_start:
{
lean_object* v_ref_4027_; lean_object* v___x_4028_; lean_object* v_a_4029_; lean_object* v___x_4031_; uint8_t v_isShared_4032_; uint8_t v_isSharedCheck_4074_; 
v_ref_4027_ = lean_ctor_get(v___y_4024_, 2);
v___x_4028_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0_spec__0(v_msg_4021_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_);
v_a_4029_ = lean_ctor_get(v___x_4028_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4031_ = v___x_4028_;
v_isShared_4032_ = v_isSharedCheck_4074_;
goto v_resetjp_4030_;
}
else
{
lean_inc(v_a_4029_);
lean_dec(v___x_4028_);
v___x_4031_ = lean_box(0);
v_isShared_4032_ = v_isSharedCheck_4074_;
goto v_resetjp_4030_;
}
v_resetjp_4030_:
{
lean_object* v___x_4033_; lean_object* v_traceState_4034_; lean_object* v_env_4035_; lean_object* v_nextMacroScope_4036_; lean_object* v_ngen_4037_; lean_object* v_auxDeclNGen_4038_; lean_object* v_cache_4039_; lean_object* v_recordedDeps_4040_; lean_object* v_messages_4041_; lean_object* v_infoState_4042_; lean_object* v_snapshotTasks_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4073_; 
v___x_4033_ = lean_st_ref_take(v___y_4025_);
v_traceState_4034_ = lean_ctor_get(v___x_4033_, 4);
v_env_4035_ = lean_ctor_get(v___x_4033_, 0);
v_nextMacroScope_4036_ = lean_ctor_get(v___x_4033_, 1);
v_ngen_4037_ = lean_ctor_get(v___x_4033_, 2);
v_auxDeclNGen_4038_ = lean_ctor_get(v___x_4033_, 3);
v_cache_4039_ = lean_ctor_get(v___x_4033_, 5);
v_recordedDeps_4040_ = lean_ctor_get(v___x_4033_, 6);
v_messages_4041_ = lean_ctor_get(v___x_4033_, 7);
v_infoState_4042_ = lean_ctor_get(v___x_4033_, 8);
v_snapshotTasks_4043_ = lean_ctor_get(v___x_4033_, 9);
v_isSharedCheck_4073_ = !lean_is_exclusive(v___x_4033_);
if (v_isSharedCheck_4073_ == 0)
{
v___x_4045_ = v___x_4033_;
v_isShared_4046_ = v_isSharedCheck_4073_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_snapshotTasks_4043_);
lean_inc(v_infoState_4042_);
lean_inc(v_messages_4041_);
lean_inc(v_recordedDeps_4040_);
lean_inc(v_cache_4039_);
lean_inc(v_traceState_4034_);
lean_inc(v_auxDeclNGen_4038_);
lean_inc(v_ngen_4037_);
lean_inc(v_nextMacroScope_4036_);
lean_inc(v_env_4035_);
lean_dec(v___x_4033_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4073_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
uint64_t v_tid_4047_; lean_object* v_traces_4048_; lean_object* v___x_4050_; uint8_t v_isShared_4051_; uint8_t v_isSharedCheck_4072_; 
v_tid_4047_ = lean_ctor_get_uint64(v_traceState_4034_, sizeof(void*)*1);
v_traces_4048_ = lean_ctor_get(v_traceState_4034_, 0);
v_isSharedCheck_4072_ = !lean_is_exclusive(v_traceState_4034_);
if (v_isSharedCheck_4072_ == 0)
{
v___x_4050_ = v_traceState_4034_;
v_isShared_4051_ = v_isSharedCheck_4072_;
goto v_resetjp_4049_;
}
else
{
lean_inc(v_traces_4048_);
lean_dec(v_traceState_4034_);
v___x_4050_ = lean_box(0);
v_isShared_4051_ = v_isSharedCheck_4072_;
goto v_resetjp_4049_;
}
v_resetjp_4049_:
{
lean_object* v___x_4052_; lean_object* v___x_4053_; double v___x_4054_; uint8_t v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4063_; 
v___x_4052_ = lean_box(0);
v___x_4053_ = lean_box(0);
v___x_4054_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0);
v___x_4055_ = 0;
v___x_4056_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__1));
v___x_4057_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4057_, 0, v_cls_4020_);
lean_ctor_set(v___x_4057_, 1, v___x_4053_);
lean_ctor_set(v___x_4057_, 2, v___x_4056_);
lean_ctor_set_float(v___x_4057_, sizeof(void*)*3, v___x_4054_);
lean_ctor_set_float(v___x_4057_, sizeof(void*)*3 + 8, v___x_4054_);
lean_ctor_set_uint8(v___x_4057_, sizeof(void*)*3 + 16, v___x_4055_);
v___x_4058_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__2));
v___x_4059_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4057_);
lean_ctor_set(v___x_4059_, 1, v_a_4029_);
lean_ctor_set(v___x_4059_, 2, v___x_4058_);
lean_inc(v_ref_4027_);
v___x_4060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4060_, 0, v_ref_4027_);
lean_ctor_set(v___x_4060_, 1, v___x_4059_);
v___x_4061_ = l_Lean_PersistentArray_push___redArg(v_traces_4048_, v___x_4060_);
if (v_isShared_4051_ == 0)
{
lean_ctor_set(v___x_4050_, 0, v___x_4061_);
v___x_4063_ = v___x_4050_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v___x_4061_);
lean_ctor_set_uint64(v_reuseFailAlloc_4071_, sizeof(void*)*1, v_tid_4047_);
v___x_4063_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
lean_object* v___x_4065_; 
if (v_isShared_4046_ == 0)
{
lean_ctor_set(v___x_4045_, 4, v___x_4063_);
v___x_4065_ = v___x_4045_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v_env_4035_);
lean_ctor_set(v_reuseFailAlloc_4070_, 1, v_nextMacroScope_4036_);
lean_ctor_set(v_reuseFailAlloc_4070_, 2, v_ngen_4037_);
lean_ctor_set(v_reuseFailAlloc_4070_, 3, v_auxDeclNGen_4038_);
lean_ctor_set(v_reuseFailAlloc_4070_, 4, v___x_4063_);
lean_ctor_set(v_reuseFailAlloc_4070_, 5, v_cache_4039_);
lean_ctor_set(v_reuseFailAlloc_4070_, 6, v_recordedDeps_4040_);
lean_ctor_set(v_reuseFailAlloc_4070_, 7, v_messages_4041_);
lean_ctor_set(v_reuseFailAlloc_4070_, 8, v_infoState_4042_);
lean_ctor_set(v_reuseFailAlloc_4070_, 9, v_snapshotTasks_4043_);
v___x_4065_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
lean_object* v___x_4066_; lean_object* v___x_4068_; 
v___x_4066_ = lean_st_ref_put(v___y_4025_, v___x_4065_);
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 0, v___x_4052_);
v___x_4068_ = v___x_4031_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v___x_4052_);
v___x_4068_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
return v___x_4068_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0___redArg___boxed(lean_object* v_cls_4075_, lean_object* v_msg_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v_res_4082_; 
v_res_4082_ = l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0___redArg(v_cls_4075_, v_msg_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec(v___y_4078_);
lean_dec_ref(v___y_4077_);
return v_res_4082_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_reportIssue___closed__2(void){
_start:
{
lean_object* v___x_4086_; uint8_t v___x_4087_; double v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v___x_4086_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__1));
v___x_4087_ = 1;
v___x_4088_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__0);
v___x_4089_ = lean_box(0);
v___x_4090_ = ((lean_object*)(l_Lean_Meta_Sym_reportIssue___closed__1));
v___x_4091_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4091_, 0, v___x_4090_);
lean_ctor_set(v___x_4091_, 1, v___x_4089_);
lean_ctor_set(v___x_4091_, 2, v___x_4086_);
lean_ctor_set_float(v___x_4091_, sizeof(void*)*3, v___x_4088_);
lean_ctor_set_float(v___x_4091_, sizeof(void*)*3 + 8, v___x_4088_);
lean_ctor_set_uint8(v___x_4091_, sizeof(void*)*3 + 16, v___x_4087_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportIssue(lean_object* v_msg_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_, lean_object* v_a_4098_){
_start:
{
lean_object* v___x_4103_; lean_object* v_a_4104_; lean_object* v___x_4105_; lean_object* v_share_4106_; lean_object* v_maxFVar_4107_; lean_object* v_proofInstInfo_4108_; lean_object* v_proofInstInfoFVar_4109_; lean_object* v_letValue_4110_; lean_object* v_inferType_4111_; lean_object* v_getLevel_4112_; lean_object* v_congrInfo_4113_; lean_object* v_defEqI_4114_; lean_object* v_extensions_4115_; lean_object* v_issues_4116_; lean_object* v_canon_4117_; lean_object* v_instanceOverrides_4118_; uint8_t v_debug_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4139_; 
v___x_4103_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0_spec__0(v_msg_4092_, v_a_4095_, v_a_4096_, v_a_4097_, v_a_4098_);
v_a_4104_ = lean_ctor_get(v___x_4103_, 0);
lean_inc(v_a_4104_);
lean_dec_ref(v___x_4103_);
v___x_4105_ = lean_st_ref_take(v_a_4094_);
v_share_4106_ = lean_ctor_get(v___x_4105_, 0);
v_maxFVar_4107_ = lean_ctor_get(v___x_4105_, 1);
v_proofInstInfo_4108_ = lean_ctor_get(v___x_4105_, 2);
v_proofInstInfoFVar_4109_ = lean_ctor_get(v___x_4105_, 3);
v_letValue_4110_ = lean_ctor_get(v___x_4105_, 4);
v_inferType_4111_ = lean_ctor_get(v___x_4105_, 5);
v_getLevel_4112_ = lean_ctor_get(v___x_4105_, 6);
v_congrInfo_4113_ = lean_ctor_get(v___x_4105_, 7);
v_defEqI_4114_ = lean_ctor_get(v___x_4105_, 8);
v_extensions_4115_ = lean_ctor_get(v___x_4105_, 9);
v_issues_4116_ = lean_ctor_get(v___x_4105_, 10);
v_canon_4117_ = lean_ctor_get(v___x_4105_, 11);
v_instanceOverrides_4118_ = lean_ctor_get(v___x_4105_, 12);
v_debug_4119_ = lean_ctor_get_uint8(v___x_4105_, sizeof(void*)*13);
v_isSharedCheck_4139_ = !lean_is_exclusive(v___x_4105_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4121_ = v___x_4105_;
v_isShared_4122_ = v_isSharedCheck_4139_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_instanceOverrides_4118_);
lean_inc(v_canon_4117_);
lean_inc(v_issues_4116_);
lean_inc(v_extensions_4115_);
lean_inc(v_defEqI_4114_);
lean_inc(v_congrInfo_4113_);
lean_inc(v_getLevel_4112_);
lean_inc(v_inferType_4111_);
lean_inc(v_letValue_4110_);
lean_inc(v_proofInstInfoFVar_4109_);
lean_inc(v_proofInstInfo_4108_);
lean_inc(v_maxFVar_4107_);
lean_inc(v_share_4106_);
lean_dec(v___x_4105_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4139_;
goto v_resetjp_4120_;
}
v___jp_4100_:
{
lean_object* v___x_4101_; lean_object* v___x_4102_; 
v___x_4101_ = lean_box(0);
v___x_4102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4102_, 0, v___x_4101_);
return v___x_4102_;
}
v_resetjp_4120_:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4128_; 
v___x_4123_ = lean_obj_once(&l_Lean_Meta_Sym_reportIssue___closed__2, &l_Lean_Meta_Sym_reportIssue___closed__2_once, _init_l_Lean_Meta_Sym_reportIssue___closed__2);
v___x_4124_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__2));
lean_inc(v_a_4104_);
v___x_4125_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4125_, 0, v___x_4123_);
lean_ctor_set(v___x_4125_, 1, v_a_4104_);
lean_ctor_set(v___x_4125_, 2, v___x_4124_);
v___x_4126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4125_);
lean_ctor_set(v___x_4126_, 1, v_issues_4116_);
if (v_isShared_4122_ == 0)
{
lean_ctor_set(v___x_4121_, 10, v___x_4126_);
v___x_4128_ = v___x_4121_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_share_4106_);
lean_ctor_set(v_reuseFailAlloc_4138_, 1, v_maxFVar_4107_);
lean_ctor_set(v_reuseFailAlloc_4138_, 2, v_proofInstInfo_4108_);
lean_ctor_set(v_reuseFailAlloc_4138_, 3, v_proofInstInfoFVar_4109_);
lean_ctor_set(v_reuseFailAlloc_4138_, 4, v_letValue_4110_);
lean_ctor_set(v_reuseFailAlloc_4138_, 5, v_inferType_4111_);
lean_ctor_set(v_reuseFailAlloc_4138_, 6, v_getLevel_4112_);
lean_ctor_set(v_reuseFailAlloc_4138_, 7, v_congrInfo_4113_);
lean_ctor_set(v_reuseFailAlloc_4138_, 8, v_defEqI_4114_);
lean_ctor_set(v_reuseFailAlloc_4138_, 9, v_extensions_4115_);
lean_ctor_set(v_reuseFailAlloc_4138_, 10, v___x_4126_);
lean_ctor_set(v_reuseFailAlloc_4138_, 11, v_canon_4117_);
lean_ctor_set(v_reuseFailAlloc_4138_, 12, v_instanceOverrides_4118_);
lean_ctor_set_uint8(v_reuseFailAlloc_4138_, sizeof(void*)*13, v_debug_4119_);
v___x_4128_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
lean_object* v___x_4129_; lean_object* v_toCold_4130_; lean_object* v_options_4131_; uint8_t v_hasTrace_4132_; 
v___x_4129_ = lean_st_ref_put(v_a_4094_, v___x_4128_);
v_toCold_4130_ = lean_ctor_get(v_a_4097_, 0);
v_options_4131_ = lean_ctor_get(v_toCold_4130_, 2);
v_hasTrace_4132_ = lean_ctor_get_uint8(v_options_4131_, sizeof(void*)*1);
if (v_hasTrace_4132_ == 0)
{
lean_dec(v_a_4104_);
goto v___jp_4100_;
}
else
{
lean_object* v_inheritedTraceOptions_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; uint8_t v___x_4136_; 
v_inheritedTraceOptions_4133_ = lean_ctor_get(v_toCold_4130_, 11);
v___x_4134_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn___closed__1_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_));
v___x_4135_ = lean_obj_once(&l_Lean_Meta_Sym_foldProjs___lam__1___closed__2, &l_Lean_Meta_Sym_foldProjs___lam__1___closed__2_once, _init_l_Lean_Meta_Sym_foldProjs___lam__1___closed__2);
v___x_4136_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4133_, v_options_4131_, v___x_4135_);
if (v___x_4136_ == 0)
{
lean_dec(v_a_4104_);
goto v___jp_4100_;
}
else
{
lean_object* v___x_4137_; 
v___x_4137_ = l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0___redArg(v___x_4134_, v_a_4104_, v_a_4095_, v_a_4096_, v_a_4097_, v_a_4098_);
return v___x_4137_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportIssue___boxed(lean_object* v_msg_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_){
_start:
{
lean_object* v_res_4148_; 
v_res_4148_ = l_Lean_Meta_Sym_reportIssue(v_msg_4140_, v_a_4141_, v_a_4142_, v_a_4143_, v_a_4144_, v_a_4145_, v_a_4146_);
lean_dec(v_a_4146_);
lean_dec_ref(v_a_4145_);
lean_dec(v_a_4144_);
lean_dec_ref(v_a_4143_);
lean_dec(v_a_4142_);
lean_dec_ref(v_a_4141_);
return v_res_4148_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0(lean_object* v_cls_4149_, lean_object* v_msg_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_){
_start:
{
lean_object* v___x_4158_; 
v___x_4158_ = l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0___redArg(v_cls_4149_, v_msg_4150_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_);
return v___x_4158_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0___boxed(lean_object* v_cls_4159_, lean_object* v_msg_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_){
_start:
{
lean_object* v_res_4168_; 
v_res_4168_ = l_Lean_addTrace___at___00Lean_Meta_Sym_reportIssue_spec__0(v_cls_4159_, v_msg_4160_, v___y_4161_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_);
lean_dec(v___y_4166_);
lean_dec_ref(v___y_4165_);
lean_dec(v___y_4164_);
lean_dec_ref(v___y_4163_);
lean_dec(v___y_4162_);
lean_dec_ref(v___y_4161_);
return v_res_4168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportIssueIfVerbose(lean_object* v_msg_4169_, lean_object* v_a_4170_, lean_object* v_a_4171_, lean_object* v_a_4172_, lean_object* v_a_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_){
_start:
{
lean_object* v___x_4177_; lean_object* v_a_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4188_; 
v___x_4177_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_4170_);
v_a_4178_ = lean_ctor_get(v___x_4177_, 0);
v_isSharedCheck_4188_ = !lean_is_exclusive(v___x_4177_);
if (v_isSharedCheck_4188_ == 0)
{
v___x_4180_ = v___x_4177_;
v_isShared_4181_ = v_isSharedCheck_4188_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_a_4178_);
lean_dec(v___x_4177_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4188_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
uint8_t v_verbose_4182_; 
v_verbose_4182_ = lean_ctor_get_uint8(v_a_4178_, 0);
lean_dec(v_a_4178_);
if (v_verbose_4182_ == 0)
{
lean_object* v___x_4183_; lean_object* v___x_4185_; 
lean_dec_ref(v_msg_4169_);
v___x_4183_ = lean_box(0);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 0, v___x_4183_);
v___x_4185_ = v___x_4180_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v___x_4183_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
else
{
lean_object* v___x_4187_; 
lean_del_object(v___x_4180_);
v___x_4187_ = l_Lean_Meta_Sym_reportIssue(v_msg_4169_, v_a_4170_, v_a_4171_, v_a_4172_, v_a_4173_, v_a_4174_, v_a_4175_);
return v___x_4187_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportIssueIfVerbose___boxed(lean_object* v_msg_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_){
_start:
{
lean_object* v_res_4197_; 
v_res_4197_ = l_Lean_Meta_Sym_reportIssueIfVerbose(v_msg_4189_, v_a_4190_, v_a_4191_, v_a_4192_, v_a_4193_, v_a_4194_, v_a_4195_);
lean_dec(v_a_4195_);
lean_dec_ref(v_a_4194_);
lean_dec(v_a_4193_);
lean_dec_ref(v_a_4192_);
lean_dec(v_a_4191_);
lean_dec_ref(v_a_4190_);
return v_res_4197_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__7(void){
_start:
{
lean_object* v___x_4213_; lean_object* v___x_4214_; 
v___x_4213_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__6));
v___x_4214_ = l_String_toRawSubstring_x27(v___x_4213_);
return v___x_4214_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__24(void){
_start:
{
lean_object* v___x_4252_; lean_object* v___x_4253_; 
v___x_4252_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Sym_foldProjs_spec__0___closed__1));
v___x_4253_ = l_String_toRawSubstring_x27(v___x_4252_);
return v___x_4253_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__30(void){
_start:
{
lean_object* v___x_4265_; lean_object* v___x_4266_; 
v___x_4265_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__29));
v___x_4266_ = l_String_toRawSubstring_x27(v___x_4265_);
return v___x_4266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro(lean_object* v_s_4289_, lean_object* v_a_4290_, lean_object* v_a_4291_){
_start:
{
lean_object* v_msg_4293_; lean_object* v_quotContext_4294_; lean_object* v_currMacroScope_4295_; lean_object* v_ref_4296_; lean_object* v___y_4297_; lean_object* v___x_4312_; lean_object* v___x_4313_; uint8_t v___x_4314_; 
lean_inc(v_s_4289_);
v___x_4312_ = l_Lean_Syntax_getKind(v_s_4289_);
v___x_4313_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__16));
v___x_4314_ = lean_name_eq(v___x_4312_, v___x_4313_);
lean_dec(v___x_4312_);
if (v___x_4314_ == 0)
{
lean_object* v_quotContext_4315_; lean_object* v_currMacroScope_4316_; lean_object* v_ref_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; 
v_quotContext_4315_ = lean_ctor_get(v_a_4290_, 1);
v_currMacroScope_4316_ = lean_ctor_get(v_a_4290_, 2);
v_ref_4317_ = lean_ctor_get(v_a_4290_, 5);
v___x_4318_ = l_Lean_SourceInfo_fromRef(v_ref_4317_, v___x_4314_);
v___x_4319_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18));
v___x_4320_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20));
v___x_4321_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__21));
lean_inc_n(v___x_4318_, 8);
v___x_4322_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4322_, 0, v___x_4318_);
lean_ctor_set(v___x_4322_, 1, v___x_4321_);
v___x_4323_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__23));
v___x_4324_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__24, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__24_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__24);
v___x_4325_ = lean_box(0);
lean_inc_n(v_currMacroScope_4316_, 3);
lean_inc_n(v_quotContext_4315_, 3);
v___x_4326_ = l_Lean_addMacroScope(v_quotContext_4315_, v___x_4325_, v_currMacroScope_4316_);
v___x_4327_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__27));
v___x_4328_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4318_);
lean_ctor_set(v___x_4328_, 1, v___x_4324_);
lean_ctor_set(v___x_4328_, 2, v___x_4326_);
lean_ctor_set(v___x_4328_, 3, v___x_4327_);
v___x_4329_ = l_Lean_Syntax_node1(v___x_4318_, v___x_4323_, v___x_4328_);
v___x_4330_ = l_Lean_Syntax_node2(v___x_4318_, v___x_4320_, v___x_4322_, v___x_4329_);
v___x_4331_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__28));
v___x_4332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4332_, 0, v___x_4318_);
lean_ctor_set(v___x_4332_, 1, v___x_4331_);
v___x_4333_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__14));
v___x_4334_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__30, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__30_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__30);
v___x_4335_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__31));
v___x_4336_ = l_Lean_addMacroScope(v_quotContext_4315_, v___x_4335_, v_currMacroScope_4316_);
v___x_4337_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__36));
v___x_4338_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4338_, 0, v___x_4318_);
lean_ctor_set(v___x_4338_, 1, v___x_4334_);
lean_ctor_set(v___x_4338_, 2, v___x_4336_);
lean_ctor_set(v___x_4338_, 3, v___x_4337_);
v___x_4339_ = l_Lean_Syntax_node1(v___x_4318_, v___x_4333_, v___x_4338_);
v___x_4340_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__37));
v___x_4341_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4341_, 0, v___x_4318_);
lean_ctor_set(v___x_4341_, 1, v___x_4340_);
v___x_4342_ = l_Lean_Syntax_node5(v___x_4318_, v___x_4319_, v___x_4330_, v_s_4289_, v___x_4332_, v___x_4339_, v___x_4341_);
v_msg_4293_ = v___x_4342_;
v_quotContext_4294_ = v_quotContext_4315_;
v_currMacroScope_4295_ = v_currMacroScope_4316_;
v_ref_4296_ = v_ref_4317_;
v___y_4297_ = v_a_4291_;
goto v___jp_4292_;
}
else
{
lean_object* v_quotContext_4343_; lean_object* v_currMacroScope_4344_; lean_object* v_ref_4345_; uint8_t v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; 
v_quotContext_4343_ = lean_ctor_get(v_a_4290_, 1);
v_currMacroScope_4344_ = lean_ctor_get(v_a_4290_, 2);
v_ref_4345_ = lean_ctor_get(v_a_4290_, 5);
v___x_4346_ = 0;
v___x_4347_ = l_Lean_SourceInfo_fromRef(v_ref_4345_, v___x_4346_);
v___x_4348_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__39));
v___x_4349_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__40));
lean_inc(v___x_4347_);
v___x_4350_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4350_, 0, v___x_4347_);
lean_ctor_set(v___x_4350_, 1, v___x_4349_);
v___x_4351_ = l_Lean_Syntax_node2(v___x_4347_, v___x_4348_, v___x_4350_, v_s_4289_);
lean_inc(v_currMacroScope_4344_);
lean_inc(v_quotContext_4343_);
v_msg_4293_ = v___x_4351_;
v_quotContext_4294_ = v_quotContext_4343_;
v_currMacroScope_4295_ = v_currMacroScope_4344_;
v_ref_4296_ = v_ref_4345_;
v___y_4297_ = v_a_4291_;
goto v___jp_4292_;
}
v___jp_4292_:
{
uint8_t v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; 
v___x_4298_ = 0;
v___x_4299_ = l_Lean_SourceInfo_fromRef(v_ref_4296_, v___x_4298_);
v___x_4300_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3));
v___x_4301_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5));
v___x_4302_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__7, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__7_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__7);
v___x_4303_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__9));
v___x_4304_ = l_Lean_addMacroScope(v_quotContext_4294_, v___x_4303_, v_currMacroScope_4295_);
v___x_4305_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__12));
lean_inc_n(v___x_4299_, 3);
v___x_4306_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4306_, 0, v___x_4299_);
lean_ctor_set(v___x_4306_, 1, v___x_4302_);
lean_ctor_set(v___x_4306_, 2, v___x_4304_);
lean_ctor_set(v___x_4306_, 3, v___x_4305_);
v___x_4307_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__14));
v___x_4308_ = l_Lean_Syntax_node1(v___x_4299_, v___x_4307_, v_msg_4293_);
v___x_4309_ = l_Lean_Syntax_node2(v___x_4299_, v___x_4301_, v___x_4306_, v___x_4308_);
v___x_4310_ = l_Lean_Syntax_node1(v___x_4299_, v___x_4300_, v___x_4309_);
v___x_4311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4311_, 0, v___x_4310_);
lean_ctor_set(v___x_4311_, 1, v___y_4297_);
return v___x_4311_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___boxed(lean_object* v_s_4352_, lean_object* v_a_4353_, lean_object* v_a_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro(v_s_4352_, v_a_4353_, v_a_4354_);
lean_dec_ref(v_a_4353_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportIssue_x21______1(lean_object* v_x_4396_, lean_object* v_a_4397_, lean_object* v_a_4398_){
_start:
{
lean_object* v___x_4399_; uint8_t v___x_4400_; 
v___x_4399_ = ((lean_object*)(l_Lean_Meta_Sym_doElemReportIssue_x21_____00__closed__1));
lean_inc(v_x_4396_);
v___x_4400_ = l_Lean_Syntax_isOfKind(v_x_4396_, v___x_4399_);
if (v___x_4400_ == 0)
{
lean_object* v___x_4401_; lean_object* v___x_4402_; 
lean_dec(v_x_4396_);
v___x_4401_ = lean_box(1);
v___x_4402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4402_, 0, v___x_4401_);
lean_ctor_set(v___x_4402_, 1, v_a_4398_);
return v___x_4402_;
}
else
{
lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v_a_4406_; lean_object* v_a_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4414_; 
v___x_4403_ = lean_unsigned_to_nat(1u);
v___x_4404_ = l_Lean_Syntax_getArg(v_x_4396_, v___x_4403_);
lean_dec(v_x_4396_);
v___x_4405_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro(v___x_4404_, v_a_4397_, v_a_4398_);
v_a_4406_ = lean_ctor_get(v___x_4405_, 0);
v_a_4407_ = lean_ctor_get(v___x_4405_, 1);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4405_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4409_ = v___x_4405_;
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_a_4407_);
lean_inc(v_a_4406_);
lean_dec(v___x_4405_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v___x_4412_; 
if (v_isShared_4410_ == 0)
{
v___x_4412_ = v___x_4409_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v_a_4406_);
lean_ctor_set(v_reuseFailAlloc_4413_, 1, v_a_4407_);
v___x_4412_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
return v___x_4412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportIssue_x21______1___boxed(lean_object* v_x_4415_, lean_object* v_a_4416_, lean_object* v_a_4417_){
_start:
{
lean_object* v_res_4418_; 
v_res_4418_ = l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportIssue_x21______1(v_x_4415_, v_a_4416_, v_a_4417_);
lean_dec_ref(v_a_4416_);
return v_res_4418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportDbgIssue(lean_object* v_msg_4419_, lean_object* v_a_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_, lean_object* v_a_4425_){
_start:
{
lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v_a_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4447_; 
v___x_4427_ = l_Lean_KVMap_instValueBool;
v___x_4428_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_4420_);
v_a_4429_ = lean_ctor_get(v___x_4428_, 0);
v_isSharedCheck_4447_ = !lean_is_exclusive(v___x_4428_);
if (v_isSharedCheck_4447_ == 0)
{
v___x_4431_ = v___x_4428_;
v_isShared_4432_ = v_isSharedCheck_4447_;
goto v_resetjp_4430_;
}
else
{
lean_inc(v_a_4429_);
lean_dec(v___x_4428_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4447_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
uint8_t v_verbose_4433_; 
v_verbose_4433_ = lean_ctor_get_uint8(v_a_4429_, 0);
lean_dec(v_a_4429_);
if (v_verbose_4433_ == 0)
{
lean_object* v___x_4434_; lean_object* v___x_4436_; 
lean_dec_ref(v_msg_4419_);
v___x_4434_ = lean_box(0);
if (v_isShared_4432_ == 0)
{
lean_ctor_set(v___x_4431_, 0, v___x_4434_);
v___x_4436_ = v___x_4431_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v___x_4434_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
return v___x_4436_;
}
}
else
{
lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; uint8_t v___x_4441_; 
v___x_4438_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_4424_);
v___x_4439_ = l_Lean_Meta_Sym_sym_debug;
v___x_4440_ = l_Lean_Option_get___redArg(v___x_4427_, v___x_4438_, v___x_4439_);
lean_dec_ref(v___x_4438_);
v___x_4441_ = lean_unbox(v___x_4440_);
lean_dec(v___x_4440_);
if (v___x_4441_ == 0)
{
lean_object* v___x_4442_; lean_object* v___x_4444_; 
lean_dec_ref(v_msg_4419_);
v___x_4442_ = lean_box(0);
if (v_isShared_4432_ == 0)
{
lean_ctor_set(v___x_4431_, 0, v___x_4442_);
v___x_4444_ = v___x_4431_;
goto v_reusejp_4443_;
}
else
{
lean_object* v_reuseFailAlloc_4445_; 
v_reuseFailAlloc_4445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4445_, 0, v___x_4442_);
v___x_4444_ = v_reuseFailAlloc_4445_;
goto v_reusejp_4443_;
}
v_reusejp_4443_:
{
return v___x_4444_;
}
}
else
{
lean_object* v___x_4446_; 
lean_del_object(v___x_4431_);
v___x_4446_ = l_Lean_Meta_Sym_reportIssue(v_msg_4419_, v_a_4420_, v_a_4421_, v_a_4422_, v_a_4423_, v_a_4424_, v_a_4425_);
return v___x_4446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_reportDbgIssue___boxed(lean_object* v_msg_4448_, lean_object* v_a_4449_, lean_object* v_a_4450_, lean_object* v_a_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_){
_start:
{
lean_object* v_res_4456_; 
v_res_4456_ = l_Lean_Meta_Sym_reportDbgIssue(v_msg_4448_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_);
lean_dec(v_a_4454_);
lean_dec_ref(v_a_4453_);
lean_dec(v_a_4452_);
lean_dec_ref(v_a_4451_);
lean_dec(v_a_4450_);
lean_dec_ref(v_a_4449_);
return v_res_4456_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__1(void){
_start:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; 
v___x_4458_ = ((lean_object*)(l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__0));
v___x_4459_ = l_String_toRawSubstring_x27(v___x_4458_);
return v___x_4459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro(lean_object* v_s_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_){
_start:
{
lean_object* v_msg_4479_; lean_object* v_quotContext_4480_; lean_object* v_currMacroScope_4481_; lean_object* v_ref_4482_; lean_object* v___y_4483_; lean_object* v___x_4498_; lean_object* v___x_4499_; uint8_t v___x_4500_; 
lean_inc(v_s_4475_);
v___x_4498_ = l_Lean_Syntax_getKind(v_s_4475_);
v___x_4499_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__16));
v___x_4500_ = lean_name_eq(v___x_4498_, v___x_4499_);
lean_dec(v___x_4498_);
if (v___x_4500_ == 0)
{
lean_object* v_quotContext_4501_; lean_object* v_currMacroScope_4502_; lean_object* v_ref_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; 
v_quotContext_4501_ = lean_ctor_get(v_a_4476_, 1);
v_currMacroScope_4502_ = lean_ctor_get(v_a_4476_, 2);
v_ref_4503_ = lean_ctor_get(v_a_4476_, 5);
v___x_4504_ = l_Lean_SourceInfo_fromRef(v_ref_4503_, v___x_4500_);
v___x_4505_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__18));
v___x_4506_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__20));
v___x_4507_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__21));
lean_inc_n(v___x_4504_, 8);
v___x_4508_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4508_, 0, v___x_4504_);
lean_ctor_set(v___x_4508_, 1, v___x_4507_);
v___x_4509_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__23));
v___x_4510_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__24, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__24_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__24);
v___x_4511_ = lean_box(0);
lean_inc_n(v_currMacroScope_4502_, 3);
lean_inc_n(v_quotContext_4501_, 3);
v___x_4512_ = l_Lean_addMacroScope(v_quotContext_4501_, v___x_4511_, v_currMacroScope_4502_);
v___x_4513_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__27));
v___x_4514_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4504_);
lean_ctor_set(v___x_4514_, 1, v___x_4510_);
lean_ctor_set(v___x_4514_, 2, v___x_4512_);
lean_ctor_set(v___x_4514_, 3, v___x_4513_);
v___x_4515_ = l_Lean_Syntax_node1(v___x_4504_, v___x_4509_, v___x_4514_);
v___x_4516_ = l_Lean_Syntax_node2(v___x_4504_, v___x_4506_, v___x_4508_, v___x_4515_);
v___x_4517_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__28));
v___x_4518_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4504_);
lean_ctor_set(v___x_4518_, 1, v___x_4517_);
v___x_4519_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__14));
v___x_4520_ = lean_obj_once(&l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__30, &l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__30_once, _init_l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__30);
v___x_4521_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__31));
v___x_4522_ = l_Lean_addMacroScope(v_quotContext_4501_, v___x_4521_, v_currMacroScope_4502_);
v___x_4523_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__36));
v___x_4524_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4504_);
lean_ctor_set(v___x_4524_, 1, v___x_4520_);
lean_ctor_set(v___x_4524_, 2, v___x_4522_);
lean_ctor_set(v___x_4524_, 3, v___x_4523_);
v___x_4525_ = l_Lean_Syntax_node1(v___x_4504_, v___x_4519_, v___x_4524_);
v___x_4526_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__37));
v___x_4527_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4504_);
lean_ctor_set(v___x_4527_, 1, v___x_4526_);
v___x_4528_ = l_Lean_Syntax_node5(v___x_4504_, v___x_4505_, v___x_4516_, v_s_4475_, v___x_4518_, v___x_4525_, v___x_4527_);
v_msg_4479_ = v___x_4528_;
v_quotContext_4480_ = v_quotContext_4501_;
v_currMacroScope_4481_ = v_currMacroScope_4502_;
v_ref_4482_ = v_ref_4503_;
v___y_4483_ = v_a_4477_;
goto v___jp_4478_;
}
else
{
lean_object* v_quotContext_4529_; lean_object* v_currMacroScope_4530_; lean_object* v_ref_4531_; uint8_t v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v_quotContext_4529_ = lean_ctor_get(v_a_4476_, 1);
v_currMacroScope_4530_ = lean_ctor_get(v_a_4476_, 2);
v_ref_4531_ = lean_ctor_get(v_a_4476_, 5);
v___x_4532_ = 0;
v___x_4533_ = l_Lean_SourceInfo_fromRef(v_ref_4531_, v___x_4532_);
v___x_4534_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__39));
v___x_4535_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__40));
lean_inc(v___x_4533_);
v___x_4536_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4536_, 0, v___x_4533_);
lean_ctor_set(v___x_4536_, 1, v___x_4535_);
v___x_4537_ = l_Lean_Syntax_node2(v___x_4533_, v___x_4534_, v___x_4536_, v_s_4475_);
lean_inc(v_currMacroScope_4530_);
lean_inc(v_quotContext_4529_);
v_msg_4479_ = v___x_4537_;
v_quotContext_4480_ = v_quotContext_4529_;
v_currMacroScope_4481_ = v_currMacroScope_4530_;
v_ref_4482_ = v_ref_4531_;
v___y_4483_ = v_a_4477_;
goto v___jp_4478_;
}
v___jp_4478_:
{
uint8_t v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; 
v___x_4484_ = 0;
v___x_4485_ = l_Lean_SourceInfo_fromRef(v_ref_4482_, v___x_4484_);
v___x_4486_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__3));
v___x_4487_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__5));
v___x_4488_ = lean_obj_once(&l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__1, &l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__1_once, _init_l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__1);
v___x_4489_ = ((lean_object*)(l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__3));
v___x_4490_ = l_Lean_addMacroScope(v_quotContext_4480_, v___x_4489_, v_currMacroScope_4481_);
v___x_4491_ = ((lean_object*)(l_Lean_Meta_Sym_expandReportDbgIssueMacro___closed__6));
lean_inc_n(v___x_4485_, 3);
v___x_4492_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4492_, 0, v___x_4485_);
lean_ctor_set(v___x_4492_, 1, v___x_4488_);
lean_ctor_set(v___x_4492_, 2, v___x_4490_);
lean_ctor_set(v___x_4492_, 3, v___x_4491_);
v___x_4493_ = ((lean_object*)(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_expandReportIssueMacro___closed__14));
v___x_4494_ = l_Lean_Syntax_node1(v___x_4485_, v___x_4493_, v_msg_4479_);
v___x_4495_ = l_Lean_Syntax_node2(v___x_4485_, v___x_4487_, v___x_4492_, v___x_4494_);
v___x_4496_ = l_Lean_Syntax_node1(v___x_4485_, v___x_4486_, v___x_4495_);
v___x_4497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4497_, 0, v___x_4496_);
lean_ctor_set(v___x_4497_, 1, v___y_4483_);
return v___x_4497_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_expandReportDbgIssueMacro___boxed(lean_object* v_s_4538_, lean_object* v_a_4539_, lean_object* v_a_4540_){
_start:
{
lean_object* v_res_4541_; 
v_res_4541_ = l_Lean_Meta_Sym_expandReportDbgIssueMacro(v_s_4538_, v_a_4539_, v_a_4540_);
lean_dec_ref(v_a_4539_);
return v_res_4541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportDbgIssue_x21______1(lean_object* v_x_4560_, lean_object* v_a_4561_, lean_object* v_a_4562_){
_start:
{
lean_object* v___x_4563_; uint8_t v___x_4564_; 
v___x_4563_ = ((lean_object*)(l_Lean_Meta_Sym_doElemReportDbgIssue_x21_____00__closed__1));
lean_inc(v_x_4560_);
v___x_4564_ = l_Lean_Syntax_isOfKind(v_x_4560_, v___x_4563_);
if (v___x_4564_ == 0)
{
lean_object* v___x_4565_; lean_object* v___x_4566_; 
lean_dec(v_x_4560_);
v___x_4565_ = lean_box(1);
v___x_4566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4566_, 0, v___x_4565_);
lean_ctor_set(v___x_4566_, 1, v_a_4562_);
return v___x_4566_;
}
else
{
lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v_a_4570_; lean_object* v_a_4571_; lean_object* v___x_4573_; uint8_t v_isShared_4574_; uint8_t v_isSharedCheck_4578_; 
v___x_4567_ = lean_unsigned_to_nat(1u);
v___x_4568_ = l_Lean_Syntax_getArg(v_x_4560_, v___x_4567_);
lean_dec(v_x_4560_);
v___x_4569_ = l_Lean_Meta_Sym_expandReportDbgIssueMacro(v___x_4568_, v_a_4561_, v_a_4562_);
v_a_4570_ = lean_ctor_get(v___x_4569_, 0);
v_a_4571_ = lean_ctor_get(v___x_4569_, 1);
v_isSharedCheck_4578_ = !lean_is_exclusive(v___x_4569_);
if (v_isSharedCheck_4578_ == 0)
{
v___x_4573_ = v___x_4569_;
v_isShared_4574_ = v_isSharedCheck_4578_;
goto v_resetjp_4572_;
}
else
{
lean_inc(v_a_4571_);
lean_inc(v_a_4570_);
lean_dec(v___x_4569_);
v___x_4573_ = lean_box(0);
v_isShared_4574_ = v_isSharedCheck_4578_;
goto v_resetjp_4572_;
}
v_resetjp_4572_:
{
lean_object* v___x_4576_; 
if (v_isShared_4574_ == 0)
{
v___x_4576_ = v___x_4573_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4577_; 
v_reuseFailAlloc_4577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4577_, 0, v_a_4570_);
lean_ctor_set(v_reuseFailAlloc_4577_, 1, v_a_4571_);
v___x_4576_ = v_reuseFailAlloc_4577_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
return v___x_4576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportDbgIssue_x21______1___boxed(lean_object* v_x_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_){
_start:
{
lean_object* v_res_4582_; 
v_res_4582_ = l_Lean_Meta_Sym___aux__Lean__Meta__Sym__SymM______macroRules__Lean__Meta__Sym__doElemReportDbgIssue_x21______1(v_x_4579_, v_a_4580_, v_a_4581_);
lean_dec_ref(v_a_4580_);
return v_res_4582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIssues___redArg(lean_object* v_a_4583_){
_start:
{
lean_object* v___x_4585_; lean_object* v_issues_4586_; lean_object* v___x_4587_; 
v___x_4585_ = lean_st_ref_get(v_a_4583_);
v_issues_4586_ = lean_ctor_get(v___x_4585_, 10);
lean_inc(v_issues_4586_);
lean_dec(v___x_4585_);
v___x_4587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4587_, 0, v_issues_4586_);
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIssues___redArg___boxed(lean_object* v_a_4588_, lean_object* v_a_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l_Lean_Meta_Sym_getIssues___redArg(v_a_4588_);
lean_dec(v_a_4588_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIssues(lean_object* v_a_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_){
_start:
{
lean_object* v___x_4598_; 
v___x_4598_ = l_Lean_Meta_Sym_getIssues___redArg(v_a_4592_);
return v___x_4598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getIssues___boxed(lean_object* v_a_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_){
_start:
{
lean_object* v_res_4606_; 
v_res_4606_ = l_Lean_Meta_Sym_getIssues(v_a_4599_, v_a_4600_, v_a_4601_, v_a_4602_, v_a_4603_, v_a_4604_);
lean_dec(v_a_4604_);
lean_dec_ref(v_a_4603_);
lean_dec(v_a_4602_);
lean_dec_ref(v_a_4601_);
lean_dec(v_a_4600_);
lean_dec_ref(v_a_4599_);
return v_res_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___redArg___lam__0(lean_object* v_a_4607_, lean_object* v_issues_4608_, lean_object* v_a_x3f_4609_){
_start:
{
lean_object* v___x_4611_; lean_object* v_share_4612_; lean_object* v_maxFVar_4613_; lean_object* v_proofInstInfo_4614_; lean_object* v_proofInstInfoFVar_4615_; lean_object* v_letValue_4616_; lean_object* v_inferType_4617_; lean_object* v_getLevel_4618_; lean_object* v_congrInfo_4619_; lean_object* v_defEqI_4620_; lean_object* v_extensions_4621_; lean_object* v_issues_4622_; lean_object* v_canon_4623_; lean_object* v_instanceOverrides_4624_; uint8_t v_debug_4625_; lean_object* v___x_4627_; uint8_t v_isShared_4628_; uint8_t v_isSharedCheck_4636_; 
v___x_4611_ = lean_st_ref_take(v_a_4607_);
v_share_4612_ = lean_ctor_get(v___x_4611_, 0);
v_maxFVar_4613_ = lean_ctor_get(v___x_4611_, 1);
v_proofInstInfo_4614_ = lean_ctor_get(v___x_4611_, 2);
v_proofInstInfoFVar_4615_ = lean_ctor_get(v___x_4611_, 3);
v_letValue_4616_ = lean_ctor_get(v___x_4611_, 4);
v_inferType_4617_ = lean_ctor_get(v___x_4611_, 5);
v_getLevel_4618_ = lean_ctor_get(v___x_4611_, 6);
v_congrInfo_4619_ = lean_ctor_get(v___x_4611_, 7);
v_defEqI_4620_ = lean_ctor_get(v___x_4611_, 8);
v_extensions_4621_ = lean_ctor_get(v___x_4611_, 9);
v_issues_4622_ = lean_ctor_get(v___x_4611_, 10);
v_canon_4623_ = lean_ctor_get(v___x_4611_, 11);
v_instanceOverrides_4624_ = lean_ctor_get(v___x_4611_, 12);
v_debug_4625_ = lean_ctor_get_uint8(v___x_4611_, sizeof(void*)*13);
v_isSharedCheck_4636_ = !lean_is_exclusive(v___x_4611_);
if (v_isSharedCheck_4636_ == 0)
{
v___x_4627_ = v___x_4611_;
v_isShared_4628_ = v_isSharedCheck_4636_;
goto v_resetjp_4626_;
}
else
{
lean_inc(v_instanceOverrides_4624_);
lean_inc(v_canon_4623_);
lean_inc(v_issues_4622_);
lean_inc(v_extensions_4621_);
lean_inc(v_defEqI_4620_);
lean_inc(v_congrInfo_4619_);
lean_inc(v_getLevel_4618_);
lean_inc(v_inferType_4617_);
lean_inc(v_letValue_4616_);
lean_inc(v_proofInstInfoFVar_4615_);
lean_inc(v_proofInstInfo_4614_);
lean_inc(v_maxFVar_4613_);
lean_inc(v_share_4612_);
lean_dec(v___x_4611_);
v___x_4627_ = lean_box(0);
v_isShared_4628_ = v_isSharedCheck_4636_;
goto v_resetjp_4626_;
}
v_resetjp_4626_:
{
lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4632_; 
v___x_4629_ = lean_box(0);
v___x_4630_ = l_List_appendTR___redArg(v_issues_4622_, v_issues_4608_);
if (v_isShared_4628_ == 0)
{
lean_ctor_set(v___x_4627_, 10, v___x_4630_);
v___x_4632_ = v___x_4627_;
goto v_reusejp_4631_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v_share_4612_);
lean_ctor_set(v_reuseFailAlloc_4635_, 1, v_maxFVar_4613_);
lean_ctor_set(v_reuseFailAlloc_4635_, 2, v_proofInstInfo_4614_);
lean_ctor_set(v_reuseFailAlloc_4635_, 3, v_proofInstInfoFVar_4615_);
lean_ctor_set(v_reuseFailAlloc_4635_, 4, v_letValue_4616_);
lean_ctor_set(v_reuseFailAlloc_4635_, 5, v_inferType_4617_);
lean_ctor_set(v_reuseFailAlloc_4635_, 6, v_getLevel_4618_);
lean_ctor_set(v_reuseFailAlloc_4635_, 7, v_congrInfo_4619_);
lean_ctor_set(v_reuseFailAlloc_4635_, 8, v_defEqI_4620_);
lean_ctor_set(v_reuseFailAlloc_4635_, 9, v_extensions_4621_);
lean_ctor_set(v_reuseFailAlloc_4635_, 10, v___x_4630_);
lean_ctor_set(v_reuseFailAlloc_4635_, 11, v_canon_4623_);
lean_ctor_set(v_reuseFailAlloc_4635_, 12, v_instanceOverrides_4624_);
lean_ctor_set_uint8(v_reuseFailAlloc_4635_, sizeof(void*)*13, v_debug_4625_);
v___x_4632_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4631_;
}
v_reusejp_4631_:
{
lean_object* v___x_4633_; lean_object* v___x_4634_; 
v___x_4633_ = lean_st_ref_put(v_a_4607_, v___x_4632_);
v___x_4634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4629_);
return v___x_4634_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___redArg___lam__0___boxed(lean_object* v_a_4637_, lean_object* v_issues_4638_, lean_object* v_a_x3f_4639_, lean_object* v___y_4640_){
_start:
{
lean_object* v_res_4641_; 
v_res_4641_ = l_Lean_Meta_Sym_withNewIssueContext___redArg___lam__0(v_a_4637_, v_issues_4638_, v_a_x3f_4639_);
lean_dec(v_a_x3f_4639_);
lean_dec(v_a_4637_);
return v_res_4641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___redArg(lean_object* v_x_4642_, lean_object* v_a_4643_, lean_object* v_a_4644_, lean_object* v_a_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_){
_start:
{
lean_object* v___x_4650_; lean_object* v_issues_4651_; lean_object* v___x_4652_; lean_object* v_share_4653_; lean_object* v_maxFVar_4654_; lean_object* v_proofInstInfo_4655_; lean_object* v_proofInstInfoFVar_4656_; lean_object* v_letValue_4657_; lean_object* v_inferType_4658_; lean_object* v_getLevel_4659_; lean_object* v_congrInfo_4660_; lean_object* v_defEqI_4661_; lean_object* v_extensions_4662_; lean_object* v_canon_4663_; lean_object* v_instanceOverrides_4664_; uint8_t v_debug_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4703_; 
v___x_4650_ = lean_st_ref_get(v_a_4644_);
v_issues_4651_ = lean_ctor_get(v___x_4650_, 10);
lean_inc(v_issues_4651_);
lean_dec(v___x_4650_);
v___x_4652_ = lean_st_ref_take(v_a_4644_);
v_share_4653_ = lean_ctor_get(v___x_4652_, 0);
v_maxFVar_4654_ = lean_ctor_get(v___x_4652_, 1);
v_proofInstInfo_4655_ = lean_ctor_get(v___x_4652_, 2);
v_proofInstInfoFVar_4656_ = lean_ctor_get(v___x_4652_, 3);
v_letValue_4657_ = lean_ctor_get(v___x_4652_, 4);
v_inferType_4658_ = lean_ctor_get(v___x_4652_, 5);
v_getLevel_4659_ = lean_ctor_get(v___x_4652_, 6);
v_congrInfo_4660_ = lean_ctor_get(v___x_4652_, 7);
v_defEqI_4661_ = lean_ctor_get(v___x_4652_, 8);
v_extensions_4662_ = lean_ctor_get(v___x_4652_, 9);
v_canon_4663_ = lean_ctor_get(v___x_4652_, 11);
v_instanceOverrides_4664_ = lean_ctor_get(v___x_4652_, 12);
v_debug_4665_ = lean_ctor_get_uint8(v___x_4652_, sizeof(void*)*13);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4652_);
if (v_isSharedCheck_4703_ == 0)
{
lean_object* v_unused_4704_; 
v_unused_4704_ = lean_ctor_get(v___x_4652_, 10);
lean_dec(v_unused_4704_);
v___x_4667_ = v___x_4652_;
v_isShared_4668_ = v_isSharedCheck_4703_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_instanceOverrides_4664_);
lean_inc(v_canon_4663_);
lean_inc(v_extensions_4662_);
lean_inc(v_defEqI_4661_);
lean_inc(v_congrInfo_4660_);
lean_inc(v_getLevel_4659_);
lean_inc(v_inferType_4658_);
lean_inc(v_letValue_4657_);
lean_inc(v_proofInstInfoFVar_4656_);
lean_inc(v_proofInstInfo_4655_);
lean_inc(v_maxFVar_4654_);
lean_inc(v_share_4653_);
lean_dec(v___x_4652_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4703_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4669_; lean_object* v___x_4671_; 
v___x_4669_ = lean_box(0);
if (v_isShared_4668_ == 0)
{
lean_ctor_set(v___x_4667_, 10, v___x_4669_);
v___x_4671_ = v___x_4667_;
goto v_reusejp_4670_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_share_4653_);
lean_ctor_set(v_reuseFailAlloc_4702_, 1, v_maxFVar_4654_);
lean_ctor_set(v_reuseFailAlloc_4702_, 2, v_proofInstInfo_4655_);
lean_ctor_set(v_reuseFailAlloc_4702_, 3, v_proofInstInfoFVar_4656_);
lean_ctor_set(v_reuseFailAlloc_4702_, 4, v_letValue_4657_);
lean_ctor_set(v_reuseFailAlloc_4702_, 5, v_inferType_4658_);
lean_ctor_set(v_reuseFailAlloc_4702_, 6, v_getLevel_4659_);
lean_ctor_set(v_reuseFailAlloc_4702_, 7, v_congrInfo_4660_);
lean_ctor_set(v_reuseFailAlloc_4702_, 8, v_defEqI_4661_);
lean_ctor_set(v_reuseFailAlloc_4702_, 9, v_extensions_4662_);
lean_ctor_set(v_reuseFailAlloc_4702_, 10, v___x_4669_);
lean_ctor_set(v_reuseFailAlloc_4702_, 11, v_canon_4663_);
lean_ctor_set(v_reuseFailAlloc_4702_, 12, v_instanceOverrides_4664_);
lean_ctor_set_uint8(v_reuseFailAlloc_4702_, sizeof(void*)*13, v_debug_4665_);
v___x_4671_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4670_;
}
v_reusejp_4670_:
{
lean_object* v___x_4672_; lean_object* v_r_4673_; 
v___x_4672_ = lean_st_ref_put(v_a_4644_, v___x_4671_);
lean_inc(v_a_4648_);
lean_inc_ref(v_a_4647_);
lean_inc(v_a_4646_);
lean_inc_ref(v_a_4645_);
lean_inc(v_a_4644_);
lean_inc_ref(v_a_4643_);
v_r_4673_ = lean_apply_7(v_x_4642_, v_a_4643_, v_a_4644_, v_a_4645_, v_a_4646_, v_a_4647_, v_a_4648_, lean_box(0));
if (lean_obj_tag(v_r_4673_) == 0)
{
lean_object* v_a_4674_; lean_object* v___x_4676_; uint8_t v_isShared_4677_; uint8_t v_isSharedCheck_4690_; 
v_a_4674_ = lean_ctor_get(v_r_4673_, 0);
v_isSharedCheck_4690_ = !lean_is_exclusive(v_r_4673_);
if (v_isSharedCheck_4690_ == 0)
{
v___x_4676_ = v_r_4673_;
v_isShared_4677_ = v_isSharedCheck_4690_;
goto v_resetjp_4675_;
}
else
{
lean_inc(v_a_4674_);
lean_dec(v_r_4673_);
v___x_4676_ = lean_box(0);
v_isShared_4677_ = v_isSharedCheck_4690_;
goto v_resetjp_4675_;
}
v_resetjp_4675_:
{
lean_object* v___x_4679_; 
lean_inc(v_a_4674_);
if (v_isShared_4677_ == 0)
{
lean_ctor_set_tag(v___x_4676_, 1);
v___x_4679_ = v___x_4676_;
goto v_reusejp_4678_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v_a_4674_);
v___x_4679_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4678_;
}
v_reusejp_4678_:
{
lean_object* v___x_4680_; lean_object* v___x_4682_; uint8_t v_isShared_4683_; uint8_t v_isSharedCheck_4687_; 
v___x_4680_ = l_Lean_Meta_Sym_withNewIssueContext___redArg___lam__0(v_a_4644_, v_issues_4651_, v___x_4679_);
lean_dec_ref(v___x_4679_);
v_isSharedCheck_4687_ = !lean_is_exclusive(v___x_4680_);
if (v_isSharedCheck_4687_ == 0)
{
lean_object* v_unused_4688_; 
v_unused_4688_ = lean_ctor_get(v___x_4680_, 0);
lean_dec(v_unused_4688_);
v___x_4682_ = v___x_4680_;
v_isShared_4683_ = v_isSharedCheck_4687_;
goto v_resetjp_4681_;
}
else
{
lean_dec(v___x_4680_);
v___x_4682_ = lean_box(0);
v_isShared_4683_ = v_isSharedCheck_4687_;
goto v_resetjp_4681_;
}
v_resetjp_4681_:
{
lean_object* v___x_4685_; 
if (v_isShared_4683_ == 0)
{
lean_ctor_set(v___x_4682_, 0, v_a_4674_);
v___x_4685_ = v___x_4682_;
goto v_reusejp_4684_;
}
else
{
lean_object* v_reuseFailAlloc_4686_; 
v_reuseFailAlloc_4686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4686_, 0, v_a_4674_);
v___x_4685_ = v_reuseFailAlloc_4686_;
goto v_reusejp_4684_;
}
v_reusejp_4684_:
{
return v___x_4685_;
}
}
}
}
}
else
{
lean_object* v_a_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4700_; 
v_a_4691_ = lean_ctor_get(v_r_4673_, 0);
lean_inc(v_a_4691_);
lean_dec_ref_known(v_r_4673_, 1);
v___x_4692_ = lean_box(0);
v___x_4693_ = l_Lean_Meta_Sym_withNewIssueContext___redArg___lam__0(v_a_4644_, v_issues_4651_, v___x_4692_);
v_isSharedCheck_4700_ = !lean_is_exclusive(v___x_4693_);
if (v_isSharedCheck_4700_ == 0)
{
lean_object* v_unused_4701_; 
v_unused_4701_ = lean_ctor_get(v___x_4693_, 0);
lean_dec(v_unused_4701_);
v___x_4695_ = v___x_4693_;
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
else
{
lean_dec(v___x_4693_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4698_; 
if (v_isShared_4696_ == 0)
{
lean_ctor_set_tag(v___x_4695_, 1);
lean_ctor_set(v___x_4695_, 0, v_a_4691_);
v___x_4698_ = v___x_4695_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4699_; 
v_reuseFailAlloc_4699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4699_, 0, v_a_4691_);
v___x_4698_ = v_reuseFailAlloc_4699_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
return v___x_4698_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___redArg___boxed(lean_object* v_x_4705_, lean_object* v_a_4706_, lean_object* v_a_4707_, lean_object* v_a_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_){
_start:
{
lean_object* v_res_4713_; 
v_res_4713_ = l_Lean_Meta_Sym_withNewIssueContext___redArg(v_x_4705_, v_a_4706_, v_a_4707_, v_a_4708_, v_a_4709_, v_a_4710_, v_a_4711_);
lean_dec(v_a_4711_);
lean_dec_ref(v_a_4710_);
lean_dec(v_a_4709_);
lean_dec_ref(v_a_4708_);
lean_dec(v_a_4707_);
lean_dec_ref(v_a_4706_);
return v_res_4713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext(lean_object* v_00_u03b1_4714_, lean_object* v_x_4715_, lean_object* v_a_4716_, lean_object* v_a_4717_, lean_object* v_a_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_){
_start:
{
lean_object* v___x_4723_; 
v___x_4723_ = l_Lean_Meta_Sym_withNewIssueContext___redArg(v_x_4715_, v_a_4716_, v_a_4717_, v_a_4718_, v_a_4719_, v_a_4720_, v_a_4721_);
return v___x_4723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withNewIssueContext___boxed(lean_object* v_00_u03b1_4724_, lean_object* v_x_4725_, lean_object* v_a_4726_, lean_object* v_a_4727_, lean_object* v_a_4728_, lean_object* v_a_4729_, lean_object* v_a_4730_, lean_object* v_a_4731_, lean_object* v_a_4732_){
_start:
{
lean_object* v_res_4733_; 
v_res_4733_ = l_Lean_Meta_Sym_withNewIssueContext(v_00_u03b1_4724_, v_x_4725_, v_a_4726_, v_a_4727_, v_a_4728_, v_a_4729_, v_a_4730_, v_a_4731_);
lean_dec(v_a_4731_);
lean_dec_ref(v_a_4730_);
lean_dec(v_a_4729_);
lean_dec_ref(v_a_4728_);
lean_dec(v_a_4727_);
lean_dec_ref(v_a_4726_);
return v_res_4733_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_4734_, lean_object* v_vals_4735_, lean_object* v_i_4736_, lean_object* v_k_4737_){
_start:
{
lean_object* v___x_4742_; uint8_t v___x_4743_; 
v___x_4742_ = lean_array_get_size(v_keys_4734_);
v___x_4743_ = lean_nat_dec_lt(v_i_4736_, v___x_4742_);
if (v___x_4743_ == 0)
{
lean_object* v___x_4744_; 
lean_dec(v_i_4736_);
v___x_4744_ = lean_box(0);
return v___x_4744_;
}
else
{
lean_object* v_fst_4745_; lean_object* v_snd_4746_; lean_object* v_k_x27_4747_; lean_object* v_fst_4748_; lean_object* v_snd_4749_; size_t v___x_4750_; size_t v___x_4751_; uint8_t v___x_4752_; 
v_fst_4745_ = lean_ctor_get(v_k_4737_, 0);
v_snd_4746_ = lean_ctor_get(v_k_4737_, 1);
v_k_x27_4747_ = lean_array_fget_borrowed(v_keys_4734_, v_i_4736_);
v_fst_4748_ = lean_ctor_get(v_k_x27_4747_, 0);
v_snd_4749_ = lean_ctor_get(v_k_x27_4747_, 1);
v___x_4750_ = lean_ptr_addr(v_fst_4745_);
v___x_4751_ = lean_ptr_addr(v_fst_4748_);
v___x_4752_ = lean_usize_dec_eq(v___x_4750_, v___x_4751_);
if (v___x_4752_ == 0)
{
goto v___jp_4738_;
}
else
{
size_t v___x_4753_; size_t v___x_4754_; uint8_t v___x_4755_; 
v___x_4753_ = lean_ptr_addr(v_snd_4746_);
v___x_4754_ = lean_ptr_addr(v_snd_4749_);
v___x_4755_ = lean_usize_dec_eq(v___x_4753_, v___x_4754_);
if (v___x_4755_ == 0)
{
goto v___jp_4738_;
}
else
{
lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4756_ = lean_array_fget_borrowed(v_vals_4735_, v_i_4736_);
lean_dec(v_i_4736_);
lean_inc(v___x_4756_);
v___x_4757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4757_, 0, v___x_4756_);
return v___x_4757_;
}
}
}
v___jp_4738_:
{
lean_object* v___x_4739_; lean_object* v___x_4740_; 
v___x_4739_ = lean_unsigned_to_nat(1u);
v___x_4740_ = lean_nat_add(v_i_4736_, v___x_4739_);
lean_dec(v_i_4736_);
v_i_4736_ = v___x_4740_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_4758_, lean_object* v_vals_4759_, lean_object* v_i_4760_, lean_object* v_k_4761_){
_start:
{
lean_object* v_res_4762_; 
v_res_4762_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1___redArg(v_keys_4758_, v_vals_4759_, v_i_4760_, v_k_4761_);
lean_dec_ref(v_k_4761_);
lean_dec_ref(v_vals_4759_);
lean_dec_ref(v_keys_4758_);
return v_res_4762_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0___redArg(lean_object* v_x_4763_, size_t v_x_4764_, lean_object* v_x_4765_){
_start:
{
if (lean_obj_tag(v_x_4763_) == 0)
{
lean_object* v_es_4766_; lean_object* v___x_4767_; size_t v___x_4768_; size_t v___x_4769_; lean_object* v_j_4770_; lean_object* v___x_4771_; 
v_es_4766_ = lean_ctor_get(v_x_4763_, 0);
v___x_4767_ = lean_box(2);
v___x_4768_ = ((size_t)31ULL);
v___x_4769_ = lean_usize_land(v_x_4764_, v___x_4768_);
v_j_4770_ = lean_usize_to_nat(v___x_4769_);
v___x_4771_ = lean_array_get_borrowed(v___x_4767_, v_es_4766_, v_j_4770_);
lean_dec(v_j_4770_);
switch(lean_obj_tag(v___x_4771_))
{
case 0:
{
lean_object* v_key_4772_; lean_object* v_val_4773_; lean_object* v_fst_4774_; lean_object* v_snd_4775_; lean_object* v_fst_4776_; lean_object* v_snd_4777_; size_t v___x_4778_; size_t v___x_4779_; uint8_t v___x_4780_; 
v_key_4772_ = lean_ctor_get(v___x_4771_, 0);
v_val_4773_ = lean_ctor_get(v___x_4771_, 1);
v_fst_4774_ = lean_ctor_get(v_x_4765_, 0);
v_snd_4775_ = lean_ctor_get(v_x_4765_, 1);
v_fst_4776_ = lean_ctor_get(v_key_4772_, 0);
v_snd_4777_ = lean_ctor_get(v_key_4772_, 1);
v___x_4778_ = lean_ptr_addr(v_fst_4774_);
v___x_4779_ = lean_ptr_addr(v_fst_4776_);
v___x_4780_ = lean_usize_dec_eq(v___x_4778_, v___x_4779_);
if (v___x_4780_ == 0)
{
lean_object* v___x_4781_; 
v___x_4781_ = lean_box(0);
return v___x_4781_;
}
else
{
size_t v___x_4782_; size_t v___x_4783_; uint8_t v___x_4784_; 
v___x_4782_ = lean_ptr_addr(v_snd_4775_);
v___x_4783_ = lean_ptr_addr(v_snd_4777_);
v___x_4784_ = lean_usize_dec_eq(v___x_4782_, v___x_4783_);
if (v___x_4784_ == 0)
{
lean_object* v___x_4785_; 
v___x_4785_ = lean_box(0);
return v___x_4785_;
}
else
{
lean_object* v___x_4786_; 
lean_inc(v_val_4773_);
v___x_4786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4786_, 0, v_val_4773_);
return v___x_4786_;
}
}
}
case 1:
{
lean_object* v_node_4787_; size_t v___x_4788_; size_t v___x_4789_; 
v_node_4787_ = lean_ctor_get(v___x_4771_, 0);
v___x_4788_ = ((size_t)5ULL);
v___x_4789_ = lean_usize_shift_right(v_x_4764_, v___x_4788_);
v_x_4763_ = v_node_4787_;
v_x_4764_ = v___x_4789_;
goto _start;
}
default: 
{
lean_object* v___x_4791_; 
v___x_4791_ = lean_box(0);
return v___x_4791_;
}
}
}
else
{
lean_object* v_ks_4792_; lean_object* v_vs_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; 
v_ks_4792_ = lean_ctor_get(v_x_4763_, 0);
v_vs_4793_ = lean_ctor_get(v_x_4763_, 1);
v___x_4794_ = lean_unsigned_to_nat(0u);
v___x_4795_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1___redArg(v_ks_4792_, v_vs_4793_, v___x_4794_, v_x_4765_);
return v___x_4795_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0___redArg___boxed(lean_object* v_x_4796_, lean_object* v_x_4797_, lean_object* v_x_4798_){
_start:
{
size_t v_x_2905__boxed_4799_; lean_object* v_res_4800_; 
v_x_2905__boxed_4799_ = lean_unbox_usize(v_x_4797_);
lean_dec(v_x_4797_);
v_res_4800_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0___redArg(v_x_4796_, v_x_2905__boxed_4799_, v_x_4798_);
lean_dec_ref(v_x_4798_);
lean_dec_ref(v_x_4796_);
return v_res_4800_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0___redArg(lean_object* v_x_4801_, lean_object* v_x_4802_){
_start:
{
lean_object* v_fst_4803_; lean_object* v_snd_4804_; size_t v___x_4805_; size_t v___x_4806_; size_t v___x_4807_; uint64_t v___x_4808_; size_t v___x_4809_; size_t v___x_4810_; uint64_t v___x_4811_; uint64_t v___x_4812_; size_t v___x_4813_; lean_object* v___x_4814_; 
v_fst_4803_ = lean_ctor_get(v_x_4802_, 0);
v_snd_4804_ = lean_ctor_get(v_x_4802_, 1);
v___x_4805_ = lean_ptr_addr(v_fst_4803_);
v___x_4806_ = ((size_t)3ULL);
v___x_4807_ = lean_usize_shift_right(v___x_4805_, v___x_4806_);
v___x_4808_ = lean_usize_to_uint64(v___x_4807_);
v___x_4809_ = lean_ptr_addr(v_snd_4804_);
v___x_4810_ = lean_usize_shift_right(v___x_4809_, v___x_4806_);
v___x_4811_ = lean_usize_to_uint64(v___x_4810_);
v___x_4812_ = lean_uint64_mix_hash(v___x_4808_, v___x_4811_);
v___x_4813_ = lean_uint64_to_usize(v___x_4812_);
v___x_4814_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0___redArg(v_x_4801_, v___x_4813_, v_x_4802_);
return v___x_4814_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0___redArg___boxed(lean_object* v_x_4815_, lean_object* v_x_4816_){
_start:
{
lean_object* v_res_4817_; 
v_res_4817_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0___redArg(v_x_4815_, v_x_4816_);
lean_dec_ref(v_x_4816_);
lean_dec_ref(v_x_4815_);
return v_res_4817_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_4818_, lean_object* v_x_4819_, lean_object* v_x_4820_, lean_object* v_x_4821_){
_start:
{
lean_object* v_ks_4822_; lean_object* v_vs_4823_; lean_object* v___x_4825_; uint8_t v_isShared_4826_; uint8_t v_isSharedCheck_4859_; 
v_ks_4822_ = lean_ctor_get(v_x_4818_, 0);
v_vs_4823_ = lean_ctor_get(v_x_4818_, 1);
v_isSharedCheck_4859_ = !lean_is_exclusive(v_x_4818_);
if (v_isSharedCheck_4859_ == 0)
{
v___x_4825_ = v_x_4818_;
v_isShared_4826_ = v_isSharedCheck_4859_;
goto v_resetjp_4824_;
}
else
{
lean_inc(v_vs_4823_);
lean_inc(v_ks_4822_);
lean_dec(v_x_4818_);
v___x_4825_ = lean_box(0);
v_isShared_4826_ = v_isSharedCheck_4859_;
goto v_resetjp_4824_;
}
v_resetjp_4824_:
{
lean_object* v___x_4834_; uint8_t v___x_4835_; 
v___x_4834_ = lean_array_get_size(v_ks_4822_);
v___x_4835_ = lean_nat_dec_lt(v_x_4819_, v___x_4834_);
if (v___x_4835_ == 0)
{
lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; 
lean_del_object(v___x_4825_);
lean_dec(v_x_4819_);
v___x_4836_ = lean_array_push(v_ks_4822_, v_x_4820_);
v___x_4837_ = lean_array_push(v_vs_4823_, v_x_4821_);
v___x_4838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4838_, 0, v___x_4836_);
lean_ctor_set(v___x_4838_, 1, v___x_4837_);
return v___x_4838_;
}
else
{
lean_object* v_fst_4839_; lean_object* v_snd_4840_; lean_object* v_k_x27_4841_; lean_object* v_fst_4842_; lean_object* v_snd_4843_; lean_object* v___x_4845_; uint8_t v_isShared_4846_; uint8_t v_isSharedCheck_4858_; 
v_fst_4839_ = lean_ctor_get(v_x_4820_, 0);
v_snd_4840_ = lean_ctor_get(v_x_4820_, 1);
v_k_x27_4841_ = lean_array_fget(v_ks_4822_, v_x_4819_);
v_fst_4842_ = lean_ctor_get(v_k_x27_4841_, 0);
v_snd_4843_ = lean_ctor_get(v_k_x27_4841_, 1);
v_isSharedCheck_4858_ = !lean_is_exclusive(v_k_x27_4841_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4845_ = v_k_x27_4841_;
v_isShared_4846_ = v_isSharedCheck_4858_;
goto v_resetjp_4844_;
}
else
{
lean_inc(v_snd_4843_);
lean_inc(v_fst_4842_);
lean_dec(v_k_x27_4841_);
v___x_4845_ = lean_box(0);
v_isShared_4846_ = v_isSharedCheck_4858_;
goto v_resetjp_4844_;
}
v_resetjp_4844_:
{
size_t v___x_4847_; size_t v___x_4848_; uint8_t v___x_4849_; 
v___x_4847_ = lean_ptr_addr(v_fst_4839_);
v___x_4848_ = lean_ptr_addr(v_fst_4842_);
lean_dec(v_fst_4842_);
v___x_4849_ = lean_usize_dec_eq(v___x_4847_, v___x_4848_);
if (v___x_4849_ == 0)
{
lean_del_object(v___x_4845_);
lean_dec(v_snd_4843_);
goto v___jp_4827_;
}
else
{
size_t v___x_4850_; size_t v___x_4851_; uint8_t v___x_4852_; 
v___x_4850_ = lean_ptr_addr(v_snd_4840_);
v___x_4851_ = lean_ptr_addr(v_snd_4843_);
lean_dec(v_snd_4843_);
v___x_4852_ = lean_usize_dec_eq(v___x_4850_, v___x_4851_);
if (v___x_4852_ == 0)
{
lean_del_object(v___x_4845_);
goto v___jp_4827_;
}
else
{
lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4856_; 
lean_del_object(v___x_4825_);
v___x_4853_ = lean_array_fset(v_ks_4822_, v_x_4819_, v_x_4820_);
v___x_4854_ = lean_array_fset(v_vs_4823_, v_x_4819_, v_x_4821_);
lean_dec(v_x_4819_);
if (v_isShared_4846_ == 0)
{
lean_ctor_set_tag(v___x_4845_, 1);
lean_ctor_set(v___x_4845_, 1, v___x_4854_);
lean_ctor_set(v___x_4845_, 0, v___x_4853_);
v___x_4856_ = v___x_4845_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v___x_4853_);
lean_ctor_set(v_reuseFailAlloc_4857_, 1, v___x_4854_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
return v___x_4856_;
}
}
}
}
}
v___jp_4827_:
{
lean_object* v___x_4829_; 
if (v_isShared_4826_ == 0)
{
v___x_4829_ = v___x_4825_;
goto v_reusejp_4828_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v_ks_4822_);
lean_ctor_set(v_reuseFailAlloc_4833_, 1, v_vs_4823_);
v___x_4829_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4828_;
}
v_reusejp_4828_:
{
lean_object* v___x_4830_; lean_object* v___x_4831_; 
v___x_4830_ = lean_unsigned_to_nat(1u);
v___x_4831_ = lean_nat_add(v_x_4819_, v___x_4830_);
lean_dec(v_x_4819_);
v_x_4818_ = v___x_4829_;
v_x_4819_ = v___x_4831_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4___redArg(lean_object* v_n_4860_, lean_object* v_k_4861_, lean_object* v_v_4862_){
_start:
{
lean_object* v___x_4863_; lean_object* v___x_4864_; 
v___x_4863_ = lean_unsigned_to_nat(0u);
v___x_4864_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4_spec__5___redArg(v_n_4860_, v___x_4863_, v_k_4861_, v_v_4862_);
return v___x_4864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___redArg(lean_object* v_x_4865_, size_t v_x_4866_, size_t v_x_4867_, lean_object* v_x_4868_, lean_object* v_x_4869_){
_start:
{
if (lean_obj_tag(v_x_4865_) == 0)
{
lean_object* v_es_4870_; size_t v___x_4871_; size_t v___x_4872_; lean_object* v_j_4873_; lean_object* v___x_4874_; uint8_t v___x_4875_; 
v_es_4870_ = lean_ctor_get(v_x_4865_, 0);
v___x_4871_ = ((size_t)31ULL);
v___x_4872_ = lean_usize_land(v_x_4866_, v___x_4871_);
v_j_4873_ = lean_usize_to_nat(v___x_4872_);
v___x_4874_ = lean_array_get_size(v_es_4870_);
v___x_4875_ = lean_nat_dec_lt(v_j_4873_, v___x_4874_);
if (v___x_4875_ == 0)
{
lean_dec(v_j_4873_);
lean_dec(v_x_4869_);
lean_dec_ref(v_x_4868_);
return v_x_4865_;
}
else
{
lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_4924_; 
lean_inc_ref(v_es_4870_);
v_isSharedCheck_4924_ = !lean_is_exclusive(v_x_4865_);
if (v_isSharedCheck_4924_ == 0)
{
lean_object* v_unused_4925_; 
v_unused_4925_ = lean_ctor_get(v_x_4865_, 0);
lean_dec(v_unused_4925_);
v___x_4877_ = v_x_4865_;
v_isShared_4878_ = v_isSharedCheck_4924_;
goto v_resetjp_4876_;
}
else
{
lean_dec(v_x_4865_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_4924_;
goto v_resetjp_4876_;
}
v_resetjp_4876_:
{
lean_object* v_v_4879_; lean_object* v___x_4880_; lean_object* v_xs_x27_4881_; lean_object* v___y_4883_; 
v_v_4879_ = lean_array_fget(v_es_4870_, v_j_4873_);
v___x_4880_ = lean_box(0);
v_xs_x27_4881_ = lean_array_fset(v_es_4870_, v_j_4873_, v___x_4880_);
switch(lean_obj_tag(v_v_4879_))
{
case 0:
{
lean_object* v_key_4888_; lean_object* v_val_4889_; lean_object* v___x_4891_; uint8_t v_isShared_4892_; uint8_t v_isSharedCheck_4909_; 
v_key_4888_ = lean_ctor_get(v_v_4879_, 0);
v_val_4889_ = lean_ctor_get(v_v_4879_, 1);
v_isSharedCheck_4909_ = !lean_is_exclusive(v_v_4879_);
if (v_isSharedCheck_4909_ == 0)
{
v___x_4891_ = v_v_4879_;
v_isShared_4892_ = v_isSharedCheck_4909_;
goto v_resetjp_4890_;
}
else
{
lean_inc(v_val_4889_);
lean_inc(v_key_4888_);
lean_dec(v_v_4879_);
v___x_4891_ = lean_box(0);
v_isShared_4892_ = v_isSharedCheck_4909_;
goto v_resetjp_4890_;
}
v_resetjp_4890_:
{
lean_object* v_fst_4896_; lean_object* v_snd_4897_; lean_object* v_fst_4898_; lean_object* v_snd_4899_; size_t v___x_4900_; size_t v___x_4901_; uint8_t v___x_4902_; 
v_fst_4896_ = lean_ctor_get(v_x_4868_, 0);
v_snd_4897_ = lean_ctor_get(v_x_4868_, 1);
v_fst_4898_ = lean_ctor_get(v_key_4888_, 0);
v_snd_4899_ = lean_ctor_get(v_key_4888_, 1);
v___x_4900_ = lean_ptr_addr(v_fst_4896_);
v___x_4901_ = lean_ptr_addr(v_fst_4898_);
v___x_4902_ = lean_usize_dec_eq(v___x_4900_, v___x_4901_);
if (v___x_4902_ == 0)
{
lean_del_object(v___x_4891_);
goto v___jp_4893_;
}
else
{
size_t v___x_4903_; size_t v___x_4904_; uint8_t v___x_4905_; 
v___x_4903_ = lean_ptr_addr(v_snd_4897_);
v___x_4904_ = lean_ptr_addr(v_snd_4899_);
v___x_4905_ = lean_usize_dec_eq(v___x_4903_, v___x_4904_);
if (v___x_4905_ == 0)
{
lean_del_object(v___x_4891_);
goto v___jp_4893_;
}
else
{
lean_object* v___x_4907_; 
lean_dec(v_val_4889_);
lean_dec(v_key_4888_);
if (v_isShared_4892_ == 0)
{
lean_ctor_set(v___x_4891_, 1, v_x_4869_);
lean_ctor_set(v___x_4891_, 0, v_x_4868_);
v___x_4907_ = v___x_4891_;
goto v_reusejp_4906_;
}
else
{
lean_object* v_reuseFailAlloc_4908_; 
v_reuseFailAlloc_4908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4908_, 0, v_x_4868_);
lean_ctor_set(v_reuseFailAlloc_4908_, 1, v_x_4869_);
v___x_4907_ = v_reuseFailAlloc_4908_;
goto v_reusejp_4906_;
}
v_reusejp_4906_:
{
v___y_4883_ = v___x_4907_;
goto v___jp_4882_;
}
}
}
v___jp_4893_:
{
lean_object* v___x_4894_; lean_object* v___x_4895_; 
v___x_4894_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_4888_, v_val_4889_, v_x_4868_, v_x_4869_);
v___x_4895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4895_, 0, v___x_4894_);
v___y_4883_ = v___x_4895_;
goto v___jp_4882_;
}
}
}
case 1:
{
lean_object* v_node_4910_; lean_object* v___x_4912_; uint8_t v_isShared_4913_; uint8_t v_isSharedCheck_4922_; 
v_node_4910_ = lean_ctor_get(v_v_4879_, 0);
v_isSharedCheck_4922_ = !lean_is_exclusive(v_v_4879_);
if (v_isSharedCheck_4922_ == 0)
{
v___x_4912_ = v_v_4879_;
v_isShared_4913_ = v_isSharedCheck_4922_;
goto v_resetjp_4911_;
}
else
{
lean_inc(v_node_4910_);
lean_dec(v_v_4879_);
v___x_4912_ = lean_box(0);
v_isShared_4913_ = v_isSharedCheck_4922_;
goto v_resetjp_4911_;
}
v_resetjp_4911_:
{
size_t v___x_4914_; size_t v___x_4915_; size_t v___x_4916_; size_t v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4920_; 
v___x_4914_ = ((size_t)5ULL);
v___x_4915_ = lean_usize_shift_right(v_x_4866_, v___x_4914_);
v___x_4916_ = ((size_t)1ULL);
v___x_4917_ = lean_usize_add(v_x_4867_, v___x_4916_);
v___x_4918_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___redArg(v_node_4910_, v___x_4915_, v___x_4917_, v_x_4868_, v_x_4869_);
if (v_isShared_4913_ == 0)
{
lean_ctor_set(v___x_4912_, 0, v___x_4918_);
v___x_4920_ = v___x_4912_;
goto v_reusejp_4919_;
}
else
{
lean_object* v_reuseFailAlloc_4921_; 
v_reuseFailAlloc_4921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4921_, 0, v___x_4918_);
v___x_4920_ = v_reuseFailAlloc_4921_;
goto v_reusejp_4919_;
}
v_reusejp_4919_:
{
v___y_4883_ = v___x_4920_;
goto v___jp_4882_;
}
}
}
default: 
{
lean_object* v___x_4923_; 
v___x_4923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4923_, 0, v_x_4868_);
lean_ctor_set(v___x_4923_, 1, v_x_4869_);
v___y_4883_ = v___x_4923_;
goto v___jp_4882_;
}
}
v___jp_4882_:
{
lean_object* v___x_4884_; lean_object* v___x_4886_; 
v___x_4884_ = lean_array_fset(v_xs_x27_4881_, v_j_4873_, v___y_4883_);
lean_dec(v_j_4873_);
if (v_isShared_4878_ == 0)
{
lean_ctor_set(v___x_4877_, 0, v___x_4884_);
v___x_4886_ = v___x_4877_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4887_; 
v_reuseFailAlloc_4887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4887_, 0, v___x_4884_);
v___x_4886_ = v_reuseFailAlloc_4887_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
return v___x_4886_;
}
}
}
}
}
else
{
lean_object* v_ks_4926_; lean_object* v_vs_4927_; lean_object* v___x_4929_; uint8_t v_isShared_4930_; uint8_t v_isSharedCheck_4945_; 
v_ks_4926_ = lean_ctor_get(v_x_4865_, 0);
v_vs_4927_ = lean_ctor_get(v_x_4865_, 1);
v_isSharedCheck_4945_ = !lean_is_exclusive(v_x_4865_);
if (v_isSharedCheck_4945_ == 0)
{
v___x_4929_ = v_x_4865_;
v_isShared_4930_ = v_isSharedCheck_4945_;
goto v_resetjp_4928_;
}
else
{
lean_inc(v_vs_4927_);
lean_inc(v_ks_4926_);
lean_dec(v_x_4865_);
v___x_4929_ = lean_box(0);
v_isShared_4930_ = v_isSharedCheck_4945_;
goto v_resetjp_4928_;
}
v_resetjp_4928_:
{
lean_object* v___x_4932_; 
if (v_isShared_4930_ == 0)
{
v___x_4932_ = v___x_4929_;
goto v_reusejp_4931_;
}
else
{
lean_object* v_reuseFailAlloc_4944_; 
v_reuseFailAlloc_4944_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4944_, 0, v_ks_4926_);
lean_ctor_set(v_reuseFailAlloc_4944_, 1, v_vs_4927_);
v___x_4932_ = v_reuseFailAlloc_4944_;
goto v_reusejp_4931_;
}
v_reusejp_4931_:
{
lean_object* v_newNode_4933_; size_t v___x_4934_; uint8_t v___x_4935_; 
v_newNode_4933_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4___redArg(v___x_4932_, v_x_4868_, v_x_4869_);
v___x_4934_ = ((size_t)7ULL);
v___x_4935_ = lean_usize_dec_le(v___x_4934_, v_x_4867_);
if (v___x_4935_ == 0)
{
lean_object* v___x_4936_; lean_object* v___x_4937_; uint8_t v___x_4938_; 
v___x_4936_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_4933_);
v___x_4937_ = lean_unsigned_to_nat(4u);
v___x_4938_ = lean_nat_dec_lt(v___x_4936_, v___x_4937_);
lean_dec(v___x_4936_);
if (v___x_4938_ == 0)
{
lean_object* v_ks_4939_; lean_object* v_vs_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; 
v_ks_4939_ = lean_ctor_get(v_newNode_4933_, 0);
lean_inc_ref(v_ks_4939_);
v_vs_4940_ = lean_ctor_get(v_newNode_4933_, 1);
lean_inc_ref(v_vs_4940_);
lean_dec_ref(v_newNode_4933_);
v___x_4941_ = lean_unsigned_to_nat(0u);
v___x_4942_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getLetValueS_x3f_spec__1_spec__2___redArg___closed__0);
v___x_4943_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5___redArg(v_x_4867_, v_ks_4939_, v_vs_4940_, v___x_4941_, v___x_4942_);
lean_dec_ref(v_vs_4940_);
lean_dec_ref(v_ks_4939_);
return v___x_4943_;
}
else
{
return v_newNode_4933_;
}
}
else
{
return v_newNode_4933_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5___redArg(size_t v_depth_4946_, lean_object* v_keys_4947_, lean_object* v_vals_4948_, lean_object* v_i_4949_, lean_object* v_entries_4950_){
_start:
{
lean_object* v___x_4951_; uint8_t v___x_4952_; 
v___x_4951_ = lean_array_get_size(v_keys_4947_);
v___x_4952_ = lean_nat_dec_lt(v_i_4949_, v___x_4951_);
if (v___x_4952_ == 0)
{
lean_dec(v_i_4949_);
return v_entries_4950_;
}
else
{
lean_object* v_k_4953_; lean_object* v_fst_4954_; lean_object* v_snd_4955_; lean_object* v_v_4956_; size_t v___x_4957_; size_t v___x_4958_; size_t v___x_4959_; uint64_t v___x_4960_; size_t v___x_4961_; size_t v___x_4962_; uint64_t v___x_4963_; uint64_t v___x_4964_; size_t v_h_4965_; size_t v___x_4966_; lean_object* v___x_4967_; size_t v___x_4968_; size_t v___x_4969_; size_t v___x_4970_; size_t v_h_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; 
v_k_4953_ = lean_array_fget_borrowed(v_keys_4947_, v_i_4949_);
v_fst_4954_ = lean_ctor_get(v_k_4953_, 0);
v_snd_4955_ = lean_ctor_get(v_k_4953_, 1);
v_v_4956_ = lean_array_fget_borrowed(v_vals_4948_, v_i_4949_);
v___x_4957_ = lean_ptr_addr(v_fst_4954_);
v___x_4958_ = ((size_t)3ULL);
v___x_4959_ = lean_usize_shift_right(v___x_4957_, v___x_4958_);
v___x_4960_ = lean_usize_to_uint64(v___x_4959_);
v___x_4961_ = lean_ptr_addr(v_snd_4955_);
v___x_4962_ = lean_usize_shift_right(v___x_4961_, v___x_4958_);
v___x_4963_ = lean_usize_to_uint64(v___x_4962_);
v___x_4964_ = lean_uint64_mix_hash(v___x_4960_, v___x_4963_);
v_h_4965_ = lean_uint64_to_usize(v___x_4964_);
v___x_4966_ = ((size_t)5ULL);
v___x_4967_ = lean_unsigned_to_nat(1u);
v___x_4968_ = ((size_t)1ULL);
v___x_4969_ = lean_usize_sub(v_depth_4946_, v___x_4968_);
v___x_4970_ = lean_usize_mul(v___x_4966_, v___x_4969_);
v_h_4971_ = lean_usize_shift_right(v_h_4965_, v___x_4970_);
v___x_4972_ = lean_nat_add(v_i_4949_, v___x_4967_);
lean_dec(v_i_4949_);
lean_inc(v_v_4956_);
lean_inc(v_k_4953_);
v___x_4973_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___redArg(v_entries_4950_, v_h_4971_, v_depth_4946_, v_k_4953_, v_v_4956_);
v_i_4949_ = v___x_4972_;
v_entries_4950_ = v___x_4973_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_4975_, lean_object* v_keys_4976_, lean_object* v_vals_4977_, lean_object* v_i_4978_, lean_object* v_entries_4979_){
_start:
{
size_t v_depth_boxed_4980_; lean_object* v_res_4981_; 
v_depth_boxed_4980_ = lean_unbox_usize(v_depth_4975_);
lean_dec(v_depth_4975_);
v_res_4981_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5___redArg(v_depth_boxed_4980_, v_keys_4976_, v_vals_4977_, v_i_4978_, v_entries_4979_);
lean_dec_ref(v_vals_4977_);
lean_dec_ref(v_keys_4976_);
return v_res_4981_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___redArg___boxed(lean_object* v_x_4982_, lean_object* v_x_4983_, lean_object* v_x_4984_, lean_object* v_x_4985_, lean_object* v_x_4986_){
_start:
{
size_t v_x_3110__boxed_4987_; size_t v_x_3111__boxed_4988_; lean_object* v_res_4989_; 
v_x_3110__boxed_4987_ = lean_unbox_usize(v_x_4983_);
lean_dec(v_x_4983_);
v_x_3111__boxed_4988_ = lean_unbox_usize(v_x_4984_);
lean_dec(v_x_4984_);
v_res_4989_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___redArg(v_x_4982_, v_x_3110__boxed_4987_, v_x_3111__boxed_4988_, v_x_4985_, v_x_4986_);
return v_res_4989_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1___redArg(lean_object* v_x_4990_, lean_object* v_x_4991_, lean_object* v_x_4992_){
_start:
{
lean_object* v_fst_4993_; lean_object* v_snd_4994_; size_t v___x_4995_; size_t v___x_4996_; size_t v___x_4997_; uint64_t v___x_4998_; size_t v___x_4999_; size_t v___x_5000_; uint64_t v___x_5001_; uint64_t v___x_5002_; size_t v___x_5003_; size_t v___x_5004_; lean_object* v___x_5005_; 
v_fst_4993_ = lean_ctor_get(v_x_4991_, 0);
v_snd_4994_ = lean_ctor_get(v_x_4991_, 1);
v___x_4995_ = lean_ptr_addr(v_fst_4993_);
v___x_4996_ = ((size_t)3ULL);
v___x_4997_ = lean_usize_shift_right(v___x_4995_, v___x_4996_);
v___x_4998_ = lean_usize_to_uint64(v___x_4997_);
v___x_4999_ = lean_ptr_addr(v_snd_4994_);
v___x_5000_ = lean_usize_shift_right(v___x_4999_, v___x_4996_);
v___x_5001_ = lean_usize_to_uint64(v___x_5000_);
v___x_5002_ = lean_uint64_mix_hash(v___x_4998_, v___x_5001_);
v___x_5003_ = lean_uint64_to_usize(v___x_5002_);
v___x_5004_ = ((size_t)1ULL);
v___x_5005_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___redArg(v_x_4990_, v___x_5003_, v___x_5004_, v_x_4991_, v_x_4992_);
return v___x_5005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDefEqI___redArg(lean_object* v_s_5006_, lean_object* v_t_5007_, lean_object* v_a_5008_, lean_object* v_a_5009_, lean_object* v_a_5010_, lean_object* v_a_5011_, lean_object* v_a_5012_){
_start:
{
lean_object* v_key_5014_; lean_object* v___x_5015_; lean_object* v_defEqI_5016_; lean_object* v___x_5017_; 
lean_inc_ref(v_t_5007_);
lean_inc_ref(v_s_5006_);
v_key_5014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_5014_, 0, v_s_5006_);
lean_ctor_set(v_key_5014_, 1, v_t_5007_);
v___x_5015_ = lean_st_ref_get(v_a_5008_);
v_defEqI_5016_ = lean_ctor_get(v___x_5015_, 8);
lean_inc_ref(v_defEqI_5016_);
lean_dec(v___x_5015_);
v___x_5017_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0___redArg(v_defEqI_5016_, v_key_5014_);
lean_dec_ref(v_defEqI_5016_);
if (lean_obj_tag(v___x_5017_) == 1)
{
lean_object* v_val_5018_; lean_object* v___x_5020_; uint8_t v_isShared_5021_; uint8_t v_isSharedCheck_5025_; 
lean_dec_ref_known(v_key_5014_, 2);
lean_dec_ref(v_t_5007_);
lean_dec_ref(v_s_5006_);
v_val_5018_ = lean_ctor_get(v___x_5017_, 0);
v_isSharedCheck_5025_ = !lean_is_exclusive(v___x_5017_);
if (v_isSharedCheck_5025_ == 0)
{
v___x_5020_ = v___x_5017_;
v_isShared_5021_ = v_isSharedCheck_5025_;
goto v_resetjp_5019_;
}
else
{
lean_inc(v_val_5018_);
lean_dec(v___x_5017_);
v___x_5020_ = lean_box(0);
v_isShared_5021_ = v_isSharedCheck_5025_;
goto v_resetjp_5019_;
}
v_resetjp_5019_:
{
lean_object* v___x_5023_; 
if (v_isShared_5021_ == 0)
{
lean_ctor_set_tag(v___x_5020_, 0);
v___x_5023_ = v___x_5020_;
goto v_reusejp_5022_;
}
else
{
lean_object* v_reuseFailAlloc_5024_; 
v_reuseFailAlloc_5024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5024_, 0, v_val_5018_);
v___x_5023_ = v_reuseFailAlloc_5024_;
goto v_reusejp_5022_;
}
v_reusejp_5022_:
{
return v___x_5023_;
}
}
}
else
{
lean_object* v___x_5026_; 
lean_dec(v___x_5017_);
v___x_5026_ = l_Lean_Meta_isDefEqI(v_s_5006_, v_t_5007_, v_a_5009_, v_a_5010_, v_a_5011_, v_a_5012_);
if (lean_obj_tag(v___x_5026_) == 0)
{
lean_object* v_a_5027_; lean_object* v___x_5029_; uint8_t v_isShared_5030_; uint8_t v_isSharedCheck_5058_; 
v_a_5027_ = lean_ctor_get(v___x_5026_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v___x_5026_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5029_ = v___x_5026_;
v_isShared_5030_ = v_isSharedCheck_5058_;
goto v_resetjp_5028_;
}
else
{
lean_inc(v_a_5027_);
lean_dec(v___x_5026_);
v___x_5029_ = lean_box(0);
v_isShared_5030_ = v_isSharedCheck_5058_;
goto v_resetjp_5028_;
}
v_resetjp_5028_:
{
lean_object* v___x_5031_; lean_object* v_share_5032_; lean_object* v_maxFVar_5033_; lean_object* v_proofInstInfo_5034_; lean_object* v_proofInstInfoFVar_5035_; lean_object* v_letValue_5036_; lean_object* v_inferType_5037_; lean_object* v_getLevel_5038_; lean_object* v_congrInfo_5039_; lean_object* v_defEqI_5040_; lean_object* v_extensions_5041_; lean_object* v_issues_5042_; lean_object* v_canon_5043_; lean_object* v_instanceOverrides_5044_; uint8_t v_debug_5045_; lean_object* v___x_5047_; uint8_t v_isShared_5048_; uint8_t v_isSharedCheck_5057_; 
v___x_5031_ = lean_st_ref_take(v_a_5008_);
v_share_5032_ = lean_ctor_get(v___x_5031_, 0);
v_maxFVar_5033_ = lean_ctor_get(v___x_5031_, 1);
v_proofInstInfo_5034_ = lean_ctor_get(v___x_5031_, 2);
v_proofInstInfoFVar_5035_ = lean_ctor_get(v___x_5031_, 3);
v_letValue_5036_ = lean_ctor_get(v___x_5031_, 4);
v_inferType_5037_ = lean_ctor_get(v___x_5031_, 5);
v_getLevel_5038_ = lean_ctor_get(v___x_5031_, 6);
v_congrInfo_5039_ = lean_ctor_get(v___x_5031_, 7);
v_defEqI_5040_ = lean_ctor_get(v___x_5031_, 8);
v_extensions_5041_ = lean_ctor_get(v___x_5031_, 9);
v_issues_5042_ = lean_ctor_get(v___x_5031_, 10);
v_canon_5043_ = lean_ctor_get(v___x_5031_, 11);
v_instanceOverrides_5044_ = lean_ctor_get(v___x_5031_, 12);
v_debug_5045_ = lean_ctor_get_uint8(v___x_5031_, sizeof(void*)*13);
v_isSharedCheck_5057_ = !lean_is_exclusive(v___x_5031_);
if (v_isSharedCheck_5057_ == 0)
{
v___x_5047_ = v___x_5031_;
v_isShared_5048_ = v_isSharedCheck_5057_;
goto v_resetjp_5046_;
}
else
{
lean_inc(v_instanceOverrides_5044_);
lean_inc(v_canon_5043_);
lean_inc(v_issues_5042_);
lean_inc(v_extensions_5041_);
lean_inc(v_defEqI_5040_);
lean_inc(v_congrInfo_5039_);
lean_inc(v_getLevel_5038_);
lean_inc(v_inferType_5037_);
lean_inc(v_letValue_5036_);
lean_inc(v_proofInstInfoFVar_5035_);
lean_inc(v_proofInstInfo_5034_);
lean_inc(v_maxFVar_5033_);
lean_inc(v_share_5032_);
lean_dec(v___x_5031_);
v___x_5047_ = lean_box(0);
v_isShared_5048_ = v_isSharedCheck_5057_;
goto v_resetjp_5046_;
}
v_resetjp_5046_:
{
lean_object* v___x_5049_; lean_object* v___x_5051_; 
lean_inc(v_a_5027_);
v___x_5049_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1___redArg(v_defEqI_5040_, v_key_5014_, v_a_5027_);
if (v_isShared_5048_ == 0)
{
lean_ctor_set(v___x_5047_, 8, v___x_5049_);
v___x_5051_ = v___x_5047_;
goto v_reusejp_5050_;
}
else
{
lean_object* v_reuseFailAlloc_5056_; 
v_reuseFailAlloc_5056_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_5056_, 0, v_share_5032_);
lean_ctor_set(v_reuseFailAlloc_5056_, 1, v_maxFVar_5033_);
lean_ctor_set(v_reuseFailAlloc_5056_, 2, v_proofInstInfo_5034_);
lean_ctor_set(v_reuseFailAlloc_5056_, 3, v_proofInstInfoFVar_5035_);
lean_ctor_set(v_reuseFailAlloc_5056_, 4, v_letValue_5036_);
lean_ctor_set(v_reuseFailAlloc_5056_, 5, v_inferType_5037_);
lean_ctor_set(v_reuseFailAlloc_5056_, 6, v_getLevel_5038_);
lean_ctor_set(v_reuseFailAlloc_5056_, 7, v_congrInfo_5039_);
lean_ctor_set(v_reuseFailAlloc_5056_, 8, v___x_5049_);
lean_ctor_set(v_reuseFailAlloc_5056_, 9, v_extensions_5041_);
lean_ctor_set(v_reuseFailAlloc_5056_, 10, v_issues_5042_);
lean_ctor_set(v_reuseFailAlloc_5056_, 11, v_canon_5043_);
lean_ctor_set(v_reuseFailAlloc_5056_, 12, v_instanceOverrides_5044_);
lean_ctor_set_uint8(v_reuseFailAlloc_5056_, sizeof(void*)*13, v_debug_5045_);
v___x_5051_ = v_reuseFailAlloc_5056_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
lean_object* v___x_5052_; lean_object* v___x_5054_; 
v___x_5052_ = lean_st_ref_put(v_a_5008_, v___x_5051_);
if (v_isShared_5030_ == 0)
{
v___x_5054_ = v___x_5029_;
goto v_reusejp_5053_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v_a_5027_);
v___x_5054_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5053_;
}
v_reusejp_5053_:
{
return v___x_5054_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_5014_, 2);
return v___x_5026_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDefEqI___redArg___boxed(lean_object* v_s_5059_, lean_object* v_t_5060_, lean_object* v_a_5061_, lean_object* v_a_5062_, lean_object* v_a_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_){
_start:
{
lean_object* v_res_5067_; 
v_res_5067_ = l_Lean_Meta_Sym_isDefEqI___redArg(v_s_5059_, v_t_5060_, v_a_5061_, v_a_5062_, v_a_5063_, v_a_5064_, v_a_5065_);
lean_dec(v_a_5065_);
lean_dec_ref(v_a_5064_);
lean_dec(v_a_5063_);
lean_dec_ref(v_a_5062_);
lean_dec(v_a_5061_);
return v_res_5067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDefEqI(lean_object* v_s_5068_, lean_object* v_t_5069_, lean_object* v_a_5070_, lean_object* v_a_5071_, lean_object* v_a_5072_, lean_object* v_a_5073_, lean_object* v_a_5074_, lean_object* v_a_5075_){
_start:
{
lean_object* v___x_5077_; 
v___x_5077_ = l_Lean_Meta_Sym_isDefEqI___redArg(v_s_5068_, v_t_5069_, v_a_5071_, v_a_5072_, v_a_5073_, v_a_5074_, v_a_5075_);
return v___x_5077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isDefEqI___boxed(lean_object* v_s_5078_, lean_object* v_t_5079_, lean_object* v_a_5080_, lean_object* v_a_5081_, lean_object* v_a_5082_, lean_object* v_a_5083_, lean_object* v_a_5084_, lean_object* v_a_5085_, lean_object* v_a_5086_){
_start:
{
lean_object* v_res_5087_; 
v_res_5087_ = l_Lean_Meta_Sym_isDefEqI(v_s_5078_, v_t_5079_, v_a_5080_, v_a_5081_, v_a_5082_, v_a_5083_, v_a_5084_, v_a_5085_);
lean_dec(v_a_5085_);
lean_dec_ref(v_a_5084_);
lean_dec(v_a_5083_);
lean_dec_ref(v_a_5082_);
lean_dec(v_a_5081_);
lean_dec_ref(v_a_5080_);
return v_res_5087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0(lean_object* v_00_u03b2_5088_, lean_object* v_x_5089_, lean_object* v_x_5090_){
_start:
{
lean_object* v___x_5091_; 
v___x_5091_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0___redArg(v_x_5089_, v_x_5090_);
return v___x_5091_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0___boxed(lean_object* v_00_u03b2_5092_, lean_object* v_x_5093_, lean_object* v_x_5094_){
_start:
{
lean_object* v_res_5095_; 
v_res_5095_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0(v_00_u03b2_5092_, v_x_5093_, v_x_5094_);
lean_dec_ref(v_x_5094_);
lean_dec_ref(v_x_5093_);
return v_res_5095_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1(lean_object* v_00_u03b2_5096_, lean_object* v_x_5097_, lean_object* v_x_5098_, lean_object* v_x_5099_){
_start:
{
lean_object* v___x_5100_; 
v___x_5100_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1___redArg(v_x_5097_, v_x_5098_, v_x_5099_);
return v___x_5100_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0(lean_object* v_00_u03b2_5101_, lean_object* v_x_5102_, size_t v_x_5103_, lean_object* v_x_5104_){
_start:
{
lean_object* v___x_5105_; 
v___x_5105_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0___redArg(v_x_5102_, v_x_5103_, v_x_5104_);
return v___x_5105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5106_, lean_object* v_x_5107_, lean_object* v_x_5108_, lean_object* v_x_5109_){
_start:
{
size_t v_x_3405__boxed_5110_; lean_object* v_res_5111_; 
v_x_3405__boxed_5110_ = lean_unbox_usize(v_x_5108_);
lean_dec(v_x_5108_);
v_res_5111_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0(v_00_u03b2_5106_, v_x_5107_, v_x_3405__boxed_5110_, v_x_5109_);
lean_dec_ref(v_x_5109_);
lean_dec_ref(v_x_5107_);
return v_res_5111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2(lean_object* v_00_u03b2_5112_, lean_object* v_x_5113_, size_t v_x_5114_, size_t v_x_5115_, lean_object* v_x_5116_, lean_object* v_x_5117_){
_start:
{
lean_object* v___x_5118_; 
v___x_5118_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___redArg(v_x_5113_, v_x_5114_, v_x_5115_, v_x_5116_, v_x_5117_);
return v___x_5118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2___boxed(lean_object* v_00_u03b2_5119_, lean_object* v_x_5120_, lean_object* v_x_5121_, lean_object* v_x_5122_, lean_object* v_x_5123_, lean_object* v_x_5124_){
_start:
{
size_t v_x_3416__boxed_5125_; size_t v_x_3417__boxed_5126_; lean_object* v_res_5127_; 
v_x_3416__boxed_5125_ = lean_unbox_usize(v_x_5121_);
lean_dec(v_x_5121_);
v_x_3417__boxed_5126_ = lean_unbox_usize(v_x_5122_);
lean_dec(v_x_5122_);
v_res_5127_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2(v_00_u03b2_5119_, v_x_5120_, v_x_3416__boxed_5125_, v_x_3417__boxed_5126_, v_x_5123_, v_x_5124_);
return v_res_5127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5128_, lean_object* v_keys_5129_, lean_object* v_vals_5130_, lean_object* v_heq_5131_, lean_object* v_i_5132_, lean_object* v_k_5133_){
_start:
{
lean_object* v___x_5134_; 
v___x_5134_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1___redArg(v_keys_5129_, v_vals_5130_, v_i_5132_, v_k_5133_);
return v___x_5134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5135_, lean_object* v_keys_5136_, lean_object* v_vals_5137_, lean_object* v_heq_5138_, lean_object* v_i_5139_, lean_object* v_k_5140_){
_start:
{
lean_object* v_res_5141_; 
v_res_5141_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_isDefEqI_spec__0_spec__0_spec__1(v_00_u03b2_5135_, v_keys_5136_, v_vals_5137_, v_heq_5138_, v_i_5139_, v_k_5140_);
lean_dec_ref(v_k_5140_);
lean_dec_ref(v_vals_5137_);
lean_dec_ref(v_keys_5136_);
return v_res_5141_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_5142_, lean_object* v_n_5143_, lean_object* v_k_5144_, lean_object* v_v_5145_){
_start:
{
lean_object* v___x_5146_; 
v___x_5146_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4___redArg(v_n_5143_, v_k_5144_, v_v_5145_);
return v___x_5146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_5147_, size_t v_depth_5148_, lean_object* v_keys_5149_, lean_object* v_vals_5150_, lean_object* v_heq_5151_, lean_object* v_i_5152_, lean_object* v_entries_5153_){
_start:
{
lean_object* v___x_5154_; 
v___x_5154_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5___redArg(v_depth_5148_, v_keys_5149_, v_vals_5150_, v_i_5152_, v_entries_5153_);
return v___x_5154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_5155_, lean_object* v_depth_5156_, lean_object* v_keys_5157_, lean_object* v_vals_5158_, lean_object* v_heq_5159_, lean_object* v_i_5160_, lean_object* v_entries_5161_){
_start:
{
size_t v_depth_boxed_5162_; lean_object* v_res_5163_; 
v_depth_boxed_5162_ = lean_unbox_usize(v_depth_5156_);
lean_dec(v_depth_5156_);
v_res_5163_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__5(v_00_u03b2_5155_, v_depth_boxed_5162_, v_keys_5157_, v_vals_5158_, v_heq_5159_, v_i_5160_, v_entries_5161_);
lean_dec_ref(v_vals_5158_);
lean_dec_ref(v_keys_5157_);
return v_res_5163_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_5164_, lean_object* v_x_5165_, lean_object* v_x_5166_, lean_object* v_x_5167_, lean_object* v_x_5168_){
_start:
{
lean_object* v___x_5169_; 
v___x_5169_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_isDefEqI_spec__1_spec__2_spec__4_spec__5___redArg(v_x_5165_, v_x_5166_, v_x_5167_, v_x_5168_);
return v___x_5169_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__0(void){
_start:
{
lean_object* v___x_5170_; lean_object* v___f_5171_; 
v___x_5170_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_5171_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5171_, 0, v___x_5170_);
return v___f_5171_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__1(void){
_start:
{
lean_object* v___x_5172_; lean_object* v___f_5173_; 
v___x_5172_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_5173_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_5173_, 0, v___x_5172_);
return v___f_5173_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__2(void){
_start:
{
lean_object* v___f_5174_; lean_object* v___f_5175_; lean_object* v___x_5176_; 
v___f_5174_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__1, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__1_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__1);
v___f_5175_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__0, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__0_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__0);
v___x_5176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5176_, 0, v___f_5175_);
lean_ctor_set(v___x_5176_, 1, v___f_5174_);
return v___x_5176_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__3(void){
_start:
{
lean_object* v___x_5177_; lean_object* v___f_5178_; 
v___x_5177_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__2, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__2_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__2);
v___f_5178_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5178_, 0, v___x_5177_);
return v___f_5178_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__4(void){
_start:
{
lean_object* v___x_5179_; lean_object* v___f_5180_; 
v___x_5179_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__2, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__2_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__2);
v___f_5180_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_5180_, 0, v___x_5179_);
return v___f_5180_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__5(void){
_start:
{
lean_object* v___f_5181_; lean_object* v___f_5182_; lean_object* v___x_5183_; 
v___f_5181_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__4, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__4_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__4);
v___f_5182_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__3, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__3_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__3);
v___x_5183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5183_, 0, v___f_5182_);
lean_ctor_set(v___x_5183_, 1, v___f_5181_);
return v___x_5183_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__6(void){
_start:
{
lean_object* v___x_5184_; lean_object* v___f_5185_; 
v___x_5184_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__5, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__5_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__5);
v___f_5185_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5185_, 0, v___x_5184_);
return v___f_5185_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__7(void){
_start:
{
lean_object* v___x_5186_; lean_object* v___f_5187_; 
v___x_5186_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__5, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__5_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__5);
v___f_5187_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_5187_, 0, v___x_5186_);
return v___f_5187_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__8(void){
_start:
{
lean_object* v___f_5188_; lean_object* v___f_5189_; lean_object* v___x_5190_; 
v___f_5188_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__7, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__7_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__7);
v___f_5189_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__6, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__6_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__6);
v___x_5190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5190_, 0, v___f_5189_);
lean_ctor_set(v___x_5190_, 1, v___f_5188_);
return v___x_5190_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__9(void){
_start:
{
lean_object* v___x_5191_; lean_object* v___f_5192_; 
v___x_5191_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__8, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__8_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__8);
v___f_5192_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5192_, 0, v___x_5191_);
return v___f_5192_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__10(void){
_start:
{
lean_object* v___x_5193_; lean_object* v___f_5194_; 
v___x_5193_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__8, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__8_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__8);
v___f_5194_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_5194_, 0, v___x_5193_);
return v___f_5194_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__11(void){
_start:
{
lean_object* v___f_5195_; lean_object* v___f_5196_; lean_object* v___x_5197_; 
v___f_5195_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__10, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__10_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__10);
v___f_5196_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__9, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__9_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__9);
v___x_5197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5197_, 0, v___f_5196_);
lean_ctor_set(v___x_5197_, 1, v___f_5195_);
return v___x_5197_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__16(void){
_start:
{
lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; 
v___x_5202_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_5203_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__15));
v___x_5204_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__14));
v___x_5205_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_5204_, v___x_5203_, v___x_5202_);
return v___x_5205_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__17(void){
_start:
{
lean_object* v___x_5206_; lean_object* v___f_5207_; lean_object* v___f_5208_; lean_object* v___x_5209_; 
v___x_5206_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__16, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__16_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__16);
v___f_5207_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__13));
v___f_5208_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__12));
v___x_5209_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_5208_, v___f_5207_, v___x_5206_);
return v___x_5209_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__18(void){
_start:
{
lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; 
v___x_5210_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__17, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__17_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__17);
v___x_5211_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__15));
v___x_5212_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__14));
v___x_5213_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_5212_, v___x_5211_, v___x_5210_);
return v___x_5213_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__19(void){
_start:
{
lean_object* v___x_5214_; lean_object* v___f_5215_; lean_object* v___f_5216_; lean_object* v___x_5217_; 
v___x_5214_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__18, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__18_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__18);
v___f_5215_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__13));
v___f_5216_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__12));
v___x_5217_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_5216_, v___f_5215_, v___x_5214_);
return v___x_5217_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__20(void){
_start:
{
lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___f_5220_; 
v___x_5218_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__15));
v___x_5219_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_5220_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5220_, 0, v___x_5219_);
lean_closure_set(v___f_5220_, 1, v___x_5218_);
return v___f_5220_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__21(void){
_start:
{
lean_object* v___f_5221_; lean_object* v___f_5222_; lean_object* v___f_5223_; 
v___f_5221_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__13));
v___f_5222_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__20, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__20_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__20);
v___f_5223_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5223_, 0, v___f_5222_);
lean_closure_set(v___f_5223_, 1, v___f_5221_);
return v___f_5223_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__23(void){
_start:
{
lean_object* v___x_5225_; lean_object* v___x_5226_; 
v___x_5225_ = ((lean_object*)(l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__22));
v___x_5226_ = l_Lean_stringToMessageData(v___x_5225_);
return v___x_5226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg(){
_start:
{
lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v_toApplicative_5230_; lean_object* v___x_5232_; uint8_t v_isShared_5233_; uint8_t v_isSharedCheck_5297_; 
v___x_5228_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__0, &l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__0);
v___x_5229_ = l_StateRefT_x27_instMonad___redArg(v___x_5228_);
v_toApplicative_5230_ = lean_ctor_get(v___x_5229_, 0);
v_isSharedCheck_5297_ = !lean_is_exclusive(v___x_5229_);
if (v_isSharedCheck_5297_ == 0)
{
lean_object* v_unused_5298_; 
v_unused_5298_ = lean_ctor_get(v___x_5229_, 1);
lean_dec(v_unused_5298_);
v___x_5232_ = v___x_5229_;
v_isShared_5233_ = v_isSharedCheck_5297_;
goto v_resetjp_5231_;
}
else
{
lean_inc(v_toApplicative_5230_);
lean_dec(v___x_5229_);
v___x_5232_ = lean_box(0);
v_isShared_5233_ = v_isSharedCheck_5297_;
goto v_resetjp_5231_;
}
v_resetjp_5231_:
{
lean_object* v_toFunctor_5234_; lean_object* v_toSeq_5235_; lean_object* v_toSeqLeft_5236_; lean_object* v_toSeqRight_5237_; lean_object* v___x_5239_; uint8_t v_isShared_5240_; uint8_t v_isSharedCheck_5295_; 
v_toFunctor_5234_ = lean_ctor_get(v_toApplicative_5230_, 0);
v_toSeq_5235_ = lean_ctor_get(v_toApplicative_5230_, 2);
v_toSeqLeft_5236_ = lean_ctor_get(v_toApplicative_5230_, 3);
v_toSeqRight_5237_ = lean_ctor_get(v_toApplicative_5230_, 4);
v_isSharedCheck_5295_ = !lean_is_exclusive(v_toApplicative_5230_);
if (v_isSharedCheck_5295_ == 0)
{
lean_object* v_unused_5296_; 
v_unused_5296_ = lean_ctor_get(v_toApplicative_5230_, 1);
lean_dec(v_unused_5296_);
v___x_5239_ = v_toApplicative_5230_;
v_isShared_5240_ = v_isSharedCheck_5295_;
goto v_resetjp_5238_;
}
else
{
lean_inc(v_toSeqRight_5237_);
lean_inc(v_toSeqLeft_5236_);
lean_inc(v_toSeq_5235_);
lean_inc(v_toFunctor_5234_);
lean_dec(v_toApplicative_5230_);
v___x_5239_ = lean_box(0);
v_isShared_5240_ = v_isSharedCheck_5295_;
goto v_resetjp_5238_;
}
v_resetjp_5238_:
{
lean_object* v___f_5241_; lean_object* v___f_5242_; lean_object* v___f_5243_; lean_object* v___f_5244_; lean_object* v___x_5245_; lean_object* v___f_5246_; lean_object* v___f_5247_; lean_object* v___f_5248_; lean_object* v___x_5250_; 
v___f_5241_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__1));
v___f_5242_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__2));
lean_inc_ref(v_toFunctor_5234_);
v___f_5243_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5243_, 0, v_toFunctor_5234_);
v___f_5244_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5244_, 0, v_toFunctor_5234_);
v___x_5245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5245_, 0, v___f_5243_);
lean_ctor_set(v___x_5245_, 1, v___f_5244_);
v___f_5246_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5246_, 0, v_toSeqRight_5237_);
v___f_5247_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5247_, 0, v_toSeqLeft_5236_);
v___f_5248_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5248_, 0, v_toSeq_5235_);
if (v_isShared_5240_ == 0)
{
lean_ctor_set(v___x_5239_, 4, v___f_5246_);
lean_ctor_set(v___x_5239_, 3, v___f_5247_);
lean_ctor_set(v___x_5239_, 2, v___f_5248_);
lean_ctor_set(v___x_5239_, 1, v___f_5241_);
lean_ctor_set(v___x_5239_, 0, v___x_5245_);
v___x_5250_ = v___x_5239_;
goto v_reusejp_5249_;
}
else
{
lean_object* v_reuseFailAlloc_5294_; 
v_reuseFailAlloc_5294_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5294_, 0, v___x_5245_);
lean_ctor_set(v_reuseFailAlloc_5294_, 1, v___f_5241_);
lean_ctor_set(v_reuseFailAlloc_5294_, 2, v___f_5248_);
lean_ctor_set(v_reuseFailAlloc_5294_, 3, v___f_5247_);
lean_ctor_set(v_reuseFailAlloc_5294_, 4, v___f_5246_);
v___x_5250_ = v_reuseFailAlloc_5294_;
goto v_reusejp_5249_;
}
v_reusejp_5249_:
{
lean_object* v___x_5252_; 
if (v_isShared_5233_ == 0)
{
lean_ctor_set(v___x_5232_, 1, v___f_5242_);
lean_ctor_set(v___x_5232_, 0, v___x_5250_);
v___x_5252_ = v___x_5232_;
goto v_reusejp_5251_;
}
else
{
lean_object* v_reuseFailAlloc_5293_; 
v_reuseFailAlloc_5293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5293_, 0, v___x_5250_);
lean_ctor_set(v_reuseFailAlloc_5293_, 1, v___f_5242_);
v___x_5252_ = v_reuseFailAlloc_5293_;
goto v_reusejp_5251_;
}
v_reusejp_5251_:
{
lean_object* v___x_5253_; lean_object* v_toApplicative_5254_; lean_object* v___x_5256_; uint8_t v_isShared_5257_; uint8_t v_isSharedCheck_5291_; 
v___x_5253_ = l_StateRefT_x27_instMonad___redArg(v___x_5252_);
v_toApplicative_5254_ = lean_ctor_get(v___x_5253_, 0);
v_isSharedCheck_5291_ = !lean_is_exclusive(v___x_5253_);
if (v_isSharedCheck_5291_ == 0)
{
lean_object* v_unused_5292_; 
v_unused_5292_ = lean_ctor_get(v___x_5253_, 1);
lean_dec(v_unused_5292_);
v___x_5256_ = v___x_5253_;
v_isShared_5257_ = v_isSharedCheck_5291_;
goto v_resetjp_5255_;
}
else
{
lean_inc(v_toApplicative_5254_);
lean_dec(v___x_5253_);
v___x_5256_ = lean_box(0);
v_isShared_5257_ = v_isSharedCheck_5291_;
goto v_resetjp_5255_;
}
v_resetjp_5255_:
{
lean_object* v_toFunctor_5258_; lean_object* v_toSeq_5259_; lean_object* v_toSeqLeft_5260_; lean_object* v_toSeqRight_5261_; lean_object* v___x_5263_; uint8_t v_isShared_5264_; uint8_t v_isSharedCheck_5289_; 
v_toFunctor_5258_ = lean_ctor_get(v_toApplicative_5254_, 0);
v_toSeq_5259_ = lean_ctor_get(v_toApplicative_5254_, 2);
v_toSeqLeft_5260_ = lean_ctor_get(v_toApplicative_5254_, 3);
v_toSeqRight_5261_ = lean_ctor_get(v_toApplicative_5254_, 4);
v_isSharedCheck_5289_ = !lean_is_exclusive(v_toApplicative_5254_);
if (v_isSharedCheck_5289_ == 0)
{
lean_object* v_unused_5290_; 
v_unused_5290_ = lean_ctor_get(v_toApplicative_5254_, 1);
lean_dec(v_unused_5290_);
v___x_5263_ = v_toApplicative_5254_;
v_isShared_5264_ = v_isSharedCheck_5289_;
goto v_resetjp_5262_;
}
else
{
lean_inc(v_toSeqRight_5261_);
lean_inc(v_toSeqLeft_5260_);
lean_inc(v_toSeq_5259_);
lean_inc(v_toFunctor_5258_);
lean_dec(v_toApplicative_5254_);
v___x_5263_ = lean_box(0);
v_isShared_5264_ = v_isSharedCheck_5289_;
goto v_resetjp_5262_;
}
v_resetjp_5262_:
{
lean_object* v___f_5265_; lean_object* v___f_5266_; lean_object* v___f_5267_; lean_object* v___f_5268_; lean_object* v___x_5269_; lean_object* v___f_5270_; lean_object* v___f_5271_; lean_object* v___f_5272_; lean_object* v___x_5274_; 
v___f_5265_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__3));
v___f_5266_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_shareCommonWithoutChecks_spec__1___closed__4));
lean_inc_ref(v_toFunctor_5258_);
v___f_5267_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5267_, 0, v_toFunctor_5258_);
v___f_5268_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5268_, 0, v_toFunctor_5258_);
v___x_5269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5269_, 0, v___f_5267_);
lean_ctor_set(v___x_5269_, 1, v___f_5268_);
v___f_5270_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5270_, 0, v_toSeqRight_5261_);
v___f_5271_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5271_, 0, v_toSeqLeft_5260_);
v___f_5272_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5272_, 0, v_toSeq_5259_);
if (v_isShared_5264_ == 0)
{
lean_ctor_set(v___x_5263_, 4, v___f_5270_);
lean_ctor_set(v___x_5263_, 3, v___f_5271_);
lean_ctor_set(v___x_5263_, 2, v___f_5272_);
lean_ctor_set(v___x_5263_, 1, v___f_5265_);
lean_ctor_set(v___x_5263_, 0, v___x_5269_);
v___x_5274_ = v___x_5263_;
goto v_reusejp_5273_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v___x_5269_);
lean_ctor_set(v_reuseFailAlloc_5288_, 1, v___f_5265_);
lean_ctor_set(v_reuseFailAlloc_5288_, 2, v___f_5272_);
lean_ctor_set(v_reuseFailAlloc_5288_, 3, v___f_5271_);
lean_ctor_set(v_reuseFailAlloc_5288_, 4, v___f_5270_);
v___x_5274_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5273_;
}
v_reusejp_5273_:
{
lean_object* v___x_5276_; 
if (v_isShared_5257_ == 0)
{
lean_ctor_set(v___x_5256_, 1, v___f_5266_);
lean_ctor_set(v___x_5256_, 0, v___x_5274_);
v___x_5276_ = v___x_5256_;
goto v_reusejp_5275_;
}
else
{
lean_object* v_reuseFailAlloc_5287_; 
v_reuseFailAlloc_5287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5287_, 0, v___x_5274_);
lean_ctor_set(v_reuseFailAlloc_5287_, 1, v___f_5266_);
v___x_5276_ = v_reuseFailAlloc_5287_;
goto v_reusejp_5275_;
}
v_reusejp_5275_:
{
lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v_toMonadRef_5281_; lean_object* v___f_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; 
v___x_5277_ = l_StateRefT_x27_instMonad___redArg(v___x_5276_);
v___x_5278_ = l_ReaderT_instMonad___redArg(v___x_5277_);
v___x_5279_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__11, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__11_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__11);
v___x_5280_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__19, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__19_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__19);
v_toMonadRef_5281_ = lean_ctor_get(v___x_5280_, 0);
v___f_5282_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__21, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__21_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__21);
lean_inc_ref(v___x_5278_);
v___x_5283_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___f_5282_, v___x_5278_);
lean_inc_ref(v_toMonadRef_5281_);
v___x_5284_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5284_, 0, v___x_5279_);
lean_ctor_set(v___x_5284_, 1, v_toMonadRef_5281_);
lean_ctor_set(v___x_5284_, 2, v___x_5283_);
v___x_5285_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__23, &l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__23_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___redArg___closed__23);
v___x_5286_ = l_Lean_throwError___redArg(v___x_5278_, v___x_5284_, v___x_5285_);
return v___x_5286_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg___boxed(lean_object* v___dummy_5299_){
_start:
{
lean_object* v_res_5300_; 
v_res_5300_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v_res_5300_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_instInhabitedSymM___closed__0(void){
_start:
{
lean_object* v___x_5301_; 
v___x_5301_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_5301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instInhabitedSymM(lean_object* v_00_u03b1_5302_){
_start:
{
lean_object* v___x_5303_; 
v___x_5303_ = lean_obj_once(&l_Lean_Meta_Sym_instInhabitedSymM___closed__0, &l_Lean_Meta_Sym_instInhabitedSymM___closed__0_once, _init_l_Lean_Meta_Sym_instInhabitedSymM___closed__0);
return v___x_5303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl___redArg(lean_object* v_ext_5304_, lean_object* v_extensions_5305_){
_start:
{
lean_object* v_id_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; 
v_id_5307_ = lean_ctor_get(v_ext_5304_, 0);
v___x_5308_ = l_Lean_Meta_Sym_instInhabitedSymExtensionState;
v___x_5309_ = lean_array_get_borrowed(v___x_5308_, v_extensions_5305_, v_id_5307_);
lean_inc(v___x_5309_);
v___x_5310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5310_, 0, v___x_5309_);
return v___x_5310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl___redArg___boxed(lean_object* v_ext_5311_, lean_object* v_extensions_5312_, lean_object* v_a_5313_){
_start:
{
lean_object* v_res_5314_; 
v_res_5314_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl___redArg(v_ext_5311_, v_extensions_5312_);
lean_dec_ref(v_extensions_5312_);
lean_dec_ref(v_ext_5311_);
return v_res_5314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl(lean_object* v_00_u03c3_5315_, lean_object* v_ext_5316_, lean_object* v_extensions_5317_){
_start:
{
lean_object* v___x_5319_; 
v___x_5319_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl___redArg(v_ext_5316_, v_extensions_5317_);
return v___x_5319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl___boxed(lean_object* v_00_u03c3_5320_, lean_object* v_ext_5321_, lean_object* v_extensions_5322_, lean_object* v_a_5323_){
_start:
{
lean_object* v_res_5324_; 
v_res_5324_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl(v_00_u03c3_5320_, v_ext_5321_, v_extensions_5322_);
lean_dec_ref(v_extensions_5322_);
lean_dec_ref(v_ext_5321_);
return v_res_5324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtension_getState___redArg(lean_object* v_ext_5325_, lean_object* v_a_5326_, lean_object* v_a_5327_){
_start:
{
lean_object* v___x_5329_; lean_object* v_extensions_5330_; lean_object* v_ref_5331_; lean_object* v___x_5332_; 
v___x_5329_ = lean_st_ref_get(v_a_5326_);
v_extensions_5330_ = lean_ctor_get(v___x_5329_, 9);
lean_inc_ref(v_extensions_5330_);
lean_dec(v___x_5329_);
v_ref_5331_ = lean_ctor_get(v_a_5327_, 2);
v___x_5332_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_getStateCoreImpl___redArg(v_ext_5325_, v_extensions_5330_);
lean_dec_ref(v_extensions_5330_);
if (lean_obj_tag(v___x_5332_) == 0)
{
lean_object* v_a_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5340_; 
v_a_5333_ = lean_ctor_get(v___x_5332_, 0);
v_isSharedCheck_5340_ = !lean_is_exclusive(v___x_5332_);
if (v_isSharedCheck_5340_ == 0)
{
v___x_5335_ = v___x_5332_;
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_a_5333_);
lean_dec(v___x_5332_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v___x_5338_; 
if (v_isShared_5336_ == 0)
{
v___x_5338_ = v___x_5335_;
goto v_reusejp_5337_;
}
else
{
lean_object* v_reuseFailAlloc_5339_; 
v_reuseFailAlloc_5339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5339_, 0, v_a_5333_);
v___x_5338_ = v_reuseFailAlloc_5339_;
goto v_reusejp_5337_;
}
v_reusejp_5337_:
{
return v___x_5338_;
}
}
}
else
{
lean_object* v_a_5341_; lean_object* v___x_5343_; uint8_t v_isShared_5344_; uint8_t v_isSharedCheck_5352_; 
v_a_5341_ = lean_ctor_get(v___x_5332_, 0);
v_isSharedCheck_5352_ = !lean_is_exclusive(v___x_5332_);
if (v_isSharedCheck_5352_ == 0)
{
v___x_5343_ = v___x_5332_;
v_isShared_5344_ = v_isSharedCheck_5352_;
goto v_resetjp_5342_;
}
else
{
lean_inc(v_a_5341_);
lean_dec(v___x_5332_);
v___x_5343_ = lean_box(0);
v_isShared_5344_ = v_isSharedCheck_5352_;
goto v_resetjp_5342_;
}
v_resetjp_5342_:
{
lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5350_; 
v___x_5345_ = lean_io_error_to_string(v_a_5341_);
v___x_5346_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5346_, 0, v___x_5345_);
v___x_5347_ = l_Lean_MessageData_ofFormat(v___x_5346_);
lean_inc(v_ref_5331_);
v___x_5348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5348_, 0, v_ref_5331_);
lean_ctor_set(v___x_5348_, 1, v___x_5347_);
if (v_isShared_5344_ == 0)
{
lean_ctor_set(v___x_5343_, 0, v___x_5348_);
v___x_5350_ = v___x_5343_;
goto v_reusejp_5349_;
}
else
{
lean_object* v_reuseFailAlloc_5351_; 
v_reuseFailAlloc_5351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5351_, 0, v___x_5348_);
v___x_5350_ = v_reuseFailAlloc_5351_;
goto v_reusejp_5349_;
}
v_reusejp_5349_:
{
return v___x_5350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtension_getState___redArg___boxed(lean_object* v_ext_5353_, lean_object* v_a_5354_, lean_object* v_a_5355_, lean_object* v_a_5356_){
_start:
{
lean_object* v_res_5357_; 
v_res_5357_ = l_Lean_Meta_Sym_SymExtension_getState___redArg(v_ext_5353_, v_a_5354_, v_a_5355_);
lean_dec_ref(v_a_5355_);
lean_dec(v_a_5354_);
lean_dec_ref(v_ext_5353_);
return v_res_5357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtension_getState(lean_object* v_00_u03c3_5358_, lean_object* v_ext_5359_, lean_object* v_a_5360_, lean_object* v_a_5361_, lean_object* v_a_5362_, lean_object* v_a_5363_, lean_object* v_a_5364_, lean_object* v_a_5365_){
_start:
{
lean_object* v___x_5367_; 
v___x_5367_ = l_Lean_Meta_Sym_SymExtension_getState___redArg(v_ext_5359_, v_a_5361_, v_a_5364_);
return v___x_5367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_SymExtension_getState___boxed(lean_object* v_00_u03c3_5368_, lean_object* v_ext_5369_, lean_object* v_a_5370_, lean_object* v_a_5371_, lean_object* v_a_5372_, lean_object* v_a_5373_, lean_object* v_a_5374_, lean_object* v_a_5375_, lean_object* v_a_5376_){
_start:
{
lean_object* v_res_5377_; 
v_res_5377_ = l_Lean_Meta_Sym_SymExtension_getState(v_00_u03c3_5368_, v_ext_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5373_, v_a_5374_, v_a_5375_);
lean_dec(v_a_5375_);
lean_dec_ref(v_a_5374_);
lean_dec(v_a_5373_);
lean_dec_ref(v_a_5372_);
lean_dec(v_a_5371_);
lean_dec_ref(v_a_5370_);
lean_dec_ref(v_ext_5369_);
return v_res_5377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(lean_object* v_ext_5378_, lean_object* v_f_5379_, lean_object* v_a_5380_){
_start:
{
lean_object* v___x_5382_; lean_object* v_share_5383_; lean_object* v_maxFVar_5384_; lean_object* v_proofInstInfo_5385_; lean_object* v_proofInstInfoFVar_5386_; lean_object* v_letValue_5387_; lean_object* v_inferType_5388_; lean_object* v_getLevel_5389_; lean_object* v_congrInfo_5390_; lean_object* v_defEqI_5391_; lean_object* v_extensions_5392_; lean_object* v_issues_5393_; lean_object* v_canon_5394_; lean_object* v_instanceOverrides_5395_; uint8_t v_debug_5396_; lean_object* v___x_5398_; uint8_t v_isShared_5399_; uint8_t v_isSharedCheck_5415_; 
v___x_5382_ = lean_st_ref_take(v_a_5380_);
v_share_5383_ = lean_ctor_get(v___x_5382_, 0);
v_maxFVar_5384_ = lean_ctor_get(v___x_5382_, 1);
v_proofInstInfo_5385_ = lean_ctor_get(v___x_5382_, 2);
v_proofInstInfoFVar_5386_ = lean_ctor_get(v___x_5382_, 3);
v_letValue_5387_ = lean_ctor_get(v___x_5382_, 4);
v_inferType_5388_ = lean_ctor_get(v___x_5382_, 5);
v_getLevel_5389_ = lean_ctor_get(v___x_5382_, 6);
v_congrInfo_5390_ = lean_ctor_get(v___x_5382_, 7);
v_defEqI_5391_ = lean_ctor_get(v___x_5382_, 8);
v_extensions_5392_ = lean_ctor_get(v___x_5382_, 9);
v_issues_5393_ = lean_ctor_get(v___x_5382_, 10);
v_canon_5394_ = lean_ctor_get(v___x_5382_, 11);
v_instanceOverrides_5395_ = lean_ctor_get(v___x_5382_, 12);
v_debug_5396_ = lean_ctor_get_uint8(v___x_5382_, sizeof(void*)*13);
v_isSharedCheck_5415_ = !lean_is_exclusive(v___x_5382_);
if (v_isSharedCheck_5415_ == 0)
{
v___x_5398_ = v___x_5382_;
v_isShared_5399_ = v_isSharedCheck_5415_;
goto v_resetjp_5397_;
}
else
{
lean_inc(v_instanceOverrides_5395_);
lean_inc(v_canon_5394_);
lean_inc(v_issues_5393_);
lean_inc(v_extensions_5392_);
lean_inc(v_defEqI_5391_);
lean_inc(v_congrInfo_5390_);
lean_inc(v_getLevel_5389_);
lean_inc(v_inferType_5388_);
lean_inc(v_letValue_5387_);
lean_inc(v_proofInstInfoFVar_5386_);
lean_inc(v_proofInstInfo_5385_);
lean_inc(v_maxFVar_5384_);
lean_inc(v_share_5383_);
lean_dec(v___x_5382_);
v___x_5398_ = lean_box(0);
v_isShared_5399_ = v_isSharedCheck_5415_;
goto v_resetjp_5397_;
}
v_resetjp_5397_:
{
lean_object* v_id_5400_; lean_object* v___x_5401_; lean_object* v___y_5403_; lean_object* v___x_5409_; uint8_t v___x_5410_; 
v_id_5400_ = lean_ctor_get(v_ext_5378_, 0);
v___x_5401_ = lean_box(0);
v___x_5409_ = lean_array_get_size(v_extensions_5392_);
v___x_5410_ = lean_nat_dec_lt(v_id_5400_, v___x_5409_);
if (v___x_5410_ == 0)
{
lean_dec(v_f_5379_);
v___y_5403_ = v_extensions_5392_;
goto v___jp_5402_;
}
else
{
lean_object* v_v_5411_; lean_object* v_xs_x27_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; 
v_v_5411_ = lean_array_fget(v_extensions_5392_, v_id_5400_);
v_xs_x27_5412_ = lean_array_fset(v_extensions_5392_, v_id_5400_, v___x_5401_);
v___x_5413_ = lean_apply_1(v_f_5379_, v_v_5411_);
v___x_5414_ = lean_array_fset(v_xs_x27_5412_, v_id_5400_, v___x_5413_);
v___y_5403_ = v___x_5414_;
goto v___jp_5402_;
}
v___jp_5402_:
{
lean_object* v___x_5405_; 
if (v_isShared_5399_ == 0)
{
lean_ctor_set(v___x_5398_, 9, v___y_5403_);
v___x_5405_ = v___x_5398_;
goto v_reusejp_5404_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v_share_5383_);
lean_ctor_set(v_reuseFailAlloc_5408_, 1, v_maxFVar_5384_);
lean_ctor_set(v_reuseFailAlloc_5408_, 2, v_proofInstInfo_5385_);
lean_ctor_set(v_reuseFailAlloc_5408_, 3, v_proofInstInfoFVar_5386_);
lean_ctor_set(v_reuseFailAlloc_5408_, 4, v_letValue_5387_);
lean_ctor_set(v_reuseFailAlloc_5408_, 5, v_inferType_5388_);
lean_ctor_set(v_reuseFailAlloc_5408_, 6, v_getLevel_5389_);
lean_ctor_set(v_reuseFailAlloc_5408_, 7, v_congrInfo_5390_);
lean_ctor_set(v_reuseFailAlloc_5408_, 8, v_defEqI_5391_);
lean_ctor_set(v_reuseFailAlloc_5408_, 9, v___y_5403_);
lean_ctor_set(v_reuseFailAlloc_5408_, 10, v_issues_5393_);
lean_ctor_set(v_reuseFailAlloc_5408_, 11, v_canon_5394_);
lean_ctor_set(v_reuseFailAlloc_5408_, 12, v_instanceOverrides_5395_);
lean_ctor_set_uint8(v_reuseFailAlloc_5408_, sizeof(void*)*13, v_debug_5396_);
v___x_5405_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5404_;
}
v_reusejp_5404_:
{
lean_object* v___x_5406_; lean_object* v___x_5407_; 
v___x_5406_ = lean_st_ref_put(v_a_5380_, v___x_5405_);
v___x_5407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5407_, 0, v___x_5401_);
return v___x_5407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg___boxed(lean_object* v_ext_5416_, lean_object* v_f_5417_, lean_object* v_a_5418_, lean_object* v_a_5419_){
_start:
{
lean_object* v_res_5420_; 
v_res_5420_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(v_ext_5416_, v_f_5417_, v_a_5418_);
lean_dec(v_a_5418_);
lean_dec_ref(v_ext_5416_);
return v_res_5420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl(lean_object* v_00_u03c3_5421_, lean_object* v_ext_5422_, lean_object* v_f_5423_, lean_object* v_a_5424_, lean_object* v_a_5425_, lean_object* v_a_5426_, lean_object* v_a_5427_, lean_object* v_a_5428_, lean_object* v_a_5429_){
_start:
{
lean_object* v___x_5431_; 
v___x_5431_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(v_ext_5422_, v_f_5423_, v_a_5425_);
return v___x_5431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___boxed(lean_object* v_00_u03c3_5432_, lean_object* v_ext_5433_, lean_object* v_f_5434_, lean_object* v_a_5435_, lean_object* v_a_5436_, lean_object* v_a_5437_, lean_object* v_a_5438_, lean_object* v_a_5439_, lean_object* v_a_5440_, lean_object* v_a_5441_){
_start:
{
lean_object* v_res_5442_; 
v_res_5442_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl(v_00_u03c3_5432_, v_ext_5433_, v_f_5434_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
lean_dec(v_a_5440_);
lean_dec_ref(v_a_5439_);
lean_dec(v_a_5438_);
lean_dec_ref(v_a_5437_);
lean_dec(v_a_5436_);
lean_dec_ref(v_a_5435_);
lean_dec_ref(v_ext_5433_);
return v_res_5442_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CongrTheorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_3481378630____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Sym_sym_debug = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Sym_sym_debug);
lean_dec_ref(res);
res = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_2410647589____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_instInhabitedSymExtensionState = _init_l_Lean_Meta_Sym_instInhabitedSymExtensionState();
lean_mark_persistent(l_Lean_Meta_Sym_instInhabitedSymExtensionState);
res = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_initFn_00___x40_Lean_Meta_Sym_SymM_1317853661____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_symExtensionsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_symExtensionsRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_SymM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin);
lean_object* initialize_Lean_Meta_CongrTheorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_SymM(builtin);
}
#ifdef __cplusplus
}
#endif
