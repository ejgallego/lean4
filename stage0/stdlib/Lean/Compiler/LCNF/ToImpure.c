// Lean compiler output
// Module: Lean.Compiler.LCNF.ToImpure
// Imports: import Lean.Compiler.LCNF.ToImpureType public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.PhaseExt import Init.Data.Format.Macro
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
lean_object* l_Lean_Compiler_LCNF_toImpureType(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addParam(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isVoid(lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_liftIOCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(uint8_t, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Compiler_LCNF_Nat_isPossibleRef(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_getCtorLayout(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CtorFieldInfo_spillDepth(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_spillLinkIdx;
lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedLetDecl_default___redArg();
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(uint8_t, lean_object*, lean_object*, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Compiler_LCNF_nameToImpureType(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_numSpillObjs(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_spillCtorInfo(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CtorInfo_type(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LitValue_impureTypeScalarNumLit(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tagged_return"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(42, 116, 83, 63, 133, 144, 27, 22)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "mark extern definition to always return tagged values"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ToImpure"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(104, 151, 203, 144, 27, 18, 236, 68)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(65, 46, 141, 239, 133, 91, 141, 199)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(228, 234, 69, 211, 145, 232, 229, 254)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 187, 249, 147, 190, 91, 90, 40)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(183, 4, 28, 224, 230, 52, 114, 252)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "taggedReturnAttr"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(243, 95, 219, 231, 93, 109, 209, 250)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 149, .m_capacity = 149, .m_length = 148, .m_data = "Marks an extern definition to be guaranteed to always return tagged values.\nThis information is used to optimize reference counting in the compiler."};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__1_value),((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__4_value),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__1;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__2_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__3_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__4_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__5_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__6_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__7_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__8_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_liftIOCore___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__9_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__10_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__11_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__12 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__12_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__12_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__11_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__13 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__13_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__13_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__10_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__14 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__14_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__14_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__9_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__15 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__15_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__15_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__8_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__16 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__16_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__16_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__7_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__17 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__17_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_get___boxed, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__17_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__18 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_spill"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(213, 149, 131, 37, 1, 72, 252, 34)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "obj"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(240, 235, 44, 74, 242, 121, 239, 90)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__3_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lcErased"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 218, 234, 194, 194, 57, 75, 5)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__3;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "USize"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__4_value),LEAN_SCALAR_PTR_LITERAL(109, 217, 26, 131, 232, 198, 207, 245)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__5_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__6;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lcVoid"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__7_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__7_value),LEAN_SCALAR_PTR_LITERAL(68, 180, 59, 167, 252, 217, 37, 174)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__8_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__9;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__10;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.ToImpure"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Compiler.LCNF.ToImpure.0.Lean.Compiler.LCNF.lowerResultType.resultTypeForArity"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid arity"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__3;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_lowerResultType(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_lowerResultType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tagged"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 57, 252, 162, 142, 133, 51, 193)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__2;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__3_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__3_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__5;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__6_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__6_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__7_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__8;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__9_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__9_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__10_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__11;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__12 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__12_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__12_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__13 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__13_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__14;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__15 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__15_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__15_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__16 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__16_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__0;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__1;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12_spec__17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12_spec__17___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12_spec__17(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "projection of non-structure type"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "_private.Lean.Compiler.LCNF.ToImpure.0.Lean.Compiler.LCNF.lowerLet"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueErased(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "overap"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkFap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkPap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkApplication(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "reference to unbound name"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__3_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__4;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "ToImpure: unexpected use of noncomputable declaration `"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__5_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`; please report this issue"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__7_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__7_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__8_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__9;
static const lean_array_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "code generator does not support recursor `"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__10_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__11_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "` yet, consider using 'match ... with' and/or structural recursion"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__12 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__12_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__12_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__13 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 38, .m_data = "all local functions should be λ-lifted"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "_private.Lean.Compiler.LCNF.ToImpure.0.Lean.Compiler.LCNF.Code.toImpure"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__2;
static const lean_array_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__3_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__5;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "assertion violation: c.alts.size == 1\n      "};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__6_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__7;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: ctorName == info.ctorName\n      "};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__8_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__9;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: info.fieldIdx < ps.size\n      "};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__10_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__11;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__12 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__12_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__13;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "mismatched fields and params"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "_private.Lean.Compiler.LCNF.ToImpure.0.Lean.Compiler.LCNF.Alt.toImpure.loop"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkPap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkFap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkApplication___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Error while compiling function '"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__1;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "': @[tagged_return] is only valid for extern declarations"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__3;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "@[tagged_return] on function '"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__5;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "' with scalar return type "};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__6_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toImpure_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toImpure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_toImpure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_toImpure___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_toImpure___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_toImpure___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_toImpure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toImpure"};
static const lean_object* l_Lean_Compiler_LCNF_toImpure___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_toImpure___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_toImpure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_toImpure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(136, 181, 13, 187, 73, 36, 105, 247)}};
static const lean_object* l_Lean_Compiler_LCNF_toImpure___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_toImpure___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_toImpure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_toImpure___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_toImpure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 2, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_toImpure___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_toImpure___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_toImpure = (const lean_object*)&l_Lean_Compiler_LCNF_toImpure___closed__3_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_toImpure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(198, 36, 7, 136, 133, 159, 176, 55)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 198, 164, 214, 24, 238, 231, 213)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 168, 178, 247, 202, 119, 73, 243)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(202, 77, 105, 21, 218, 121, 239, 197)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 184, 169, 248, 178, 143, 79, 195)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(209, 14, 162, 97, 10, 113, 167, 163)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(88, 160, 236, 105, 16, 144, 54, 23)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),((lean_object*)(((size_t)(6355896) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(233, 87, 80, 162, 250, 65, 116, 159)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 254, 170, 235, 80, 165, 179, 171)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 19, 111, 73, 147, 106, 206, 64)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(135, 181, 11, 188, 89, 247, 207, 91)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_box(0);
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2____boxed(lean_object* v_x_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_(v_x_7_, v___y_8_, v___y_9_);
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
lean_dec(v_x_7_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; uint8_t v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; lean_object* v___x_61_; 
v___f_54_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_));
v___x_55_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_));
v___x_56_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_));
v___x_57_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_));
v___x_58_ = 0;
v___x_59_ = lean_box(2);
v___x_60_ = 0;
v___x_61_ = l_Lean_registerTagAttribute(v___x_55_, v___x_56_, v___f_54_, v___x_57_, v___x_58_, v___x_59_, v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2____boxed(lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_();
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1(){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_));
v___x_67_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1___closed__0));
v___x_68_ = l_Lean_addBuiltinDocString(v___x_66_, v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1___boxed(lean_object* v_a_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1();
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3(){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_));
v___x_98_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___closed__6));
v___x_99_ = l_Lean_addBuiltinDeclarationRanges(v___x_97_, v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3___boxed(lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3();
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___lam__0(lean_object* v_____do__lift_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_subst_109_; lean_object* v___x_110_; 
v_subst_109_ = lean_ctor_get(v_____do__lift_102_, 0);
lean_inc_ref(v_subst_109_);
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v_subst_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___lam__0___boxed(lean_object* v_____do__lift_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___lam__0(v_____do__lift_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
lean_dec_ref(v_____do__lift_111_);
return v_res_118_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__0(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_instMonadEIO___redArg();
return v___x_119_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__1(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__0, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__0);
v___x_121_ = l_StateRefT_x27_instMonad___redArg(v___x_120_);
return v___x_121_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue(void){
_start:
{
lean_object* v___x_150_; lean_object* v_toApplicative_151_; lean_object* v_toFunctor_152_; lean_object* v_toSeq_153_; lean_object* v_toSeqLeft_154_; lean_object* v_toSeqRight_155_; lean_object* v___f_156_; lean_object* v___f_157_; lean_object* v___f_158_; lean_object* v___f_159_; lean_object* v___x_160_; lean_object* v___f_161_; lean_object* v___f_162_; lean_object* v___f_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v_toApplicative_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_197_; 
v___x_150_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__1, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__1);
v_toApplicative_151_ = lean_ctor_get(v___x_150_, 0);
v_toFunctor_152_ = lean_ctor_get(v_toApplicative_151_, 0);
v_toSeq_153_ = lean_ctor_get(v_toApplicative_151_, 2);
v_toSeqLeft_154_ = lean_ctor_get(v_toApplicative_151_, 3);
v_toSeqRight_155_ = lean_ctor_get(v_toApplicative_151_, 4);
v___f_156_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__2));
v___f_157_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__3));
lean_inc_ref_n(v_toFunctor_152_, 2);
v___f_158_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_158_, 0, v_toFunctor_152_);
v___f_159_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_159_, 0, v_toFunctor_152_);
v___x_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_160_, 0, v___f_158_);
lean_ctor_set(v___x_160_, 1, v___f_159_);
lean_inc(v_toSeqRight_155_);
v___f_161_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_161_, 0, v_toSeqRight_155_);
lean_inc(v_toSeqLeft_154_);
v___f_162_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_162_, 0, v_toSeqLeft_154_);
lean_inc(v_toSeq_153_);
v___f_163_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_163_, 0, v_toSeq_153_);
v___x_164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_164_, 0, v___x_160_);
lean_ctor_set(v___x_164_, 1, v___f_156_);
lean_ctor_set(v___x_164_, 2, v___f_163_);
lean_ctor_set(v___x_164_, 3, v___f_162_);
lean_ctor_set(v___x_164_, 4, v___f_161_);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___f_157_);
v___x_166_ = l_StateRefT_x27_instMonad___redArg(v___x_165_);
v_toApplicative_167_ = lean_ctor_get(v___x_166_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_166_);
if (v_isSharedCheck_197_ == 0)
{
lean_object* v_unused_198_; 
v_unused_198_ = lean_ctor_get(v___x_166_, 1);
lean_dec(v_unused_198_);
v___x_169_ = v___x_166_;
v_isShared_170_ = v_isSharedCheck_197_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_toApplicative_167_);
lean_dec(v___x_166_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_197_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v_toFunctor_171_; lean_object* v_toSeq_172_; lean_object* v_toSeqLeft_173_; lean_object* v_toSeqRight_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_195_; 
v_toFunctor_171_ = lean_ctor_get(v_toApplicative_167_, 0);
v_toSeq_172_ = lean_ctor_get(v_toApplicative_167_, 2);
v_toSeqLeft_173_ = lean_ctor_get(v_toApplicative_167_, 3);
v_toSeqRight_174_ = lean_ctor_get(v_toApplicative_167_, 4);
v_isSharedCheck_195_ = !lean_is_exclusive(v_toApplicative_167_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; 
v_unused_196_ = lean_ctor_get(v_toApplicative_167_, 1);
lean_dec(v_unused_196_);
v___x_176_ = v_toApplicative_167_;
v_isShared_177_ = v_isSharedCheck_195_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_toSeqRight_174_);
lean_inc(v_toSeqLeft_173_);
lean_inc(v_toSeq_172_);
lean_inc(v_toFunctor_171_);
lean_dec(v_toApplicative_167_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_195_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___f_178_; lean_object* v___f_179_; lean_object* v___f_180_; lean_object* v___f_181_; lean_object* v___f_182_; lean_object* v___x_183_; lean_object* v___f_184_; lean_object* v___f_185_; lean_object* v___f_186_; lean_object* v___x_188_; 
v___f_178_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__4));
v___f_179_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__5));
v___f_180_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__6));
lean_inc_ref(v_toFunctor_171_);
v___f_181_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_181_, 0, v_toFunctor_171_);
v___f_182_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_182_, 0, v_toFunctor_171_);
v___x_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_183_, 0, v___f_181_);
lean_ctor_set(v___x_183_, 1, v___f_182_);
v___f_184_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_184_, 0, v_toSeqRight_174_);
v___f_185_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_185_, 0, v_toSeqLeft_173_);
v___f_186_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_186_, 0, v_toSeq_172_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 4, v___f_184_);
lean_ctor_set(v___x_176_, 3, v___f_185_);
lean_ctor_set(v___x_176_, 2, v___f_186_);
lean_ctor_set(v___x_176_, 1, v___f_179_);
lean_ctor_set(v___x_176_, 0, v___x_183_);
v___x_188_ = v___x_176_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_183_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v___f_179_);
lean_ctor_set(v_reuseFailAlloc_194_, 2, v___f_186_);
lean_ctor_set(v_reuseFailAlloc_194_, 3, v___f_185_);
lean_ctor_set(v_reuseFailAlloc_194_, 4, v___f_184_);
v___x_188_ = v_reuseFailAlloc_194_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_190_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 1, v___f_180_);
lean_ctor_set(v___x_169_, 0, v___x_188_);
v___x_190_ = v___x_169_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_188_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v___f_180_);
v___x_190_ = v_reuseFailAlloc_193_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__18));
v___x_192_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_192_, 0, lean_box(0));
lean_closure_set(v___x_192_, 1, lean_box(0));
lean_closure_set(v___x_192_, 2, v___x_190_);
lean_closure_set(v___x_192_, 3, lean_box(0));
lean_closure_set(v___x_192_, 4, lean_box(0));
lean_closure_set(v___x_192_, 5, v___x_191_);
lean_closure_set(v___x_192_, 6, v___f_178_);
return v___x_192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___lam__0(lean_object* v_f_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v___x_206_; lean_object* v_subst_207_; lean_object* v_jpParamMask_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_219_; 
v___x_206_ = lean_st_ref_take(v___y_200_);
v_subst_207_ = lean_ctor_get(v___x_206_, 0);
v_jpParamMask_208_ = lean_ctor_get(v___x_206_, 1);
v_isSharedCheck_219_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_219_ == 0)
{
v___x_210_ = v___x_206_;
v_isShared_211_ = v_isSharedCheck_219_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_jpParamMask_208_);
lean_inc(v_subst_207_);
lean_dec(v___x_206_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_219_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_212_ = lean_box(0);
v___x_213_ = lean_apply_1(v_f_199_, v_subst_207_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v___x_213_);
v___x_215_ = v___x_210_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v___x_213_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v_jpParamMask_208_);
v___x_215_ = v_reuseFailAlloc_218_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_st_ref_put(v___y_200_, v___x_215_);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_212_);
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___lam__0___boxed(lean_object* v_f_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstStateToImpureMPure___lam__0(v_f_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__2___redArg(lean_object* v_a_230_, lean_object* v_b_231_, lean_object* v_x_232_){
_start:
{
if (lean_obj_tag(v_x_232_) == 0)
{
lean_dec(v_b_231_);
lean_dec(v_a_230_);
return v_x_232_;
}
else
{
lean_object* v_key_233_; lean_object* v_value_234_; lean_object* v_tail_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_247_; 
v_key_233_ = lean_ctor_get(v_x_232_, 0);
v_value_234_ = lean_ctor_get(v_x_232_, 1);
v_tail_235_ = lean_ctor_get(v_x_232_, 2);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_232_);
if (v_isSharedCheck_247_ == 0)
{
v___x_237_ = v_x_232_;
v_isShared_238_ = v_isSharedCheck_247_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_tail_235_);
lean_inc(v_value_234_);
lean_inc(v_key_233_);
lean_dec(v_x_232_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_247_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
uint8_t v___x_239_; 
v___x_239_ = l_Lean_instBEqFVarId_beq(v_key_233_, v_a_230_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_240_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__2___redArg(v_a_230_, v_b_231_, v_tail_235_);
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 2, v___x_240_);
v___x_242_ = v___x_237_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_key_233_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_value_234_);
lean_ctor_set(v_reuseFailAlloc_243_, 2, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
else
{
lean_object* v___x_245_; 
lean_dec(v_value_234_);
lean_dec(v_key_233_);
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 1, v_b_231_);
lean_ctor_set(v___x_237_, 0, v_a_230_);
v___x_245_ = v___x_237_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_a_230_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_b_231_);
lean_ctor_set(v_reuseFailAlloc_246_, 2, v_tail_235_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_248_, lean_object* v_x_249_){
_start:
{
if (lean_obj_tag(v_x_249_) == 0)
{
return v_x_248_;
}
else
{
lean_object* v_key_250_; lean_object* v_value_251_; lean_object* v_tail_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_275_; 
v_key_250_ = lean_ctor_get(v_x_249_, 0);
v_value_251_ = lean_ctor_get(v_x_249_, 1);
v_tail_252_ = lean_ctor_get(v_x_249_, 2);
v_isSharedCheck_275_ = !lean_is_exclusive(v_x_249_);
if (v_isSharedCheck_275_ == 0)
{
v___x_254_ = v_x_249_;
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_tail_252_);
lean_inc(v_value_251_);
lean_inc(v_key_250_);
lean_dec(v_x_249_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_275_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; uint64_t v___x_257_; uint64_t v___x_258_; uint64_t v___x_259_; uint64_t v_fold_260_; uint64_t v___x_261_; uint64_t v___x_262_; uint64_t v___x_263_; size_t v___x_264_; size_t v___x_265_; size_t v___x_266_; size_t v___x_267_; size_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_271_; 
v___x_256_ = lean_array_get_size(v_x_248_);
v___x_257_ = l_Lean_instHashableFVarId_hash(v_key_250_);
v___x_258_ = 32ULL;
v___x_259_ = lean_uint64_shift_right(v___x_257_, v___x_258_);
v_fold_260_ = lean_uint64_xor(v___x_257_, v___x_259_);
v___x_261_ = 16ULL;
v___x_262_ = lean_uint64_shift_right(v_fold_260_, v___x_261_);
v___x_263_ = lean_uint64_xor(v_fold_260_, v___x_262_);
v___x_264_ = lean_uint64_to_usize(v___x_263_);
v___x_265_ = lean_usize_of_nat(v___x_256_);
v___x_266_ = ((size_t)1ULL);
v___x_267_ = lean_usize_sub(v___x_265_, v___x_266_);
v___x_268_ = lean_usize_land(v___x_264_, v___x_267_);
v___x_269_ = lean_array_uget_borrowed(v_x_248_, v___x_268_);
lean_inc(v___x_269_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 2, v___x_269_);
v___x_271_ = v___x_254_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_key_250_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v_value_251_);
lean_ctor_set(v_reuseFailAlloc_274_, 2, v___x_269_);
v___x_271_ = v_reuseFailAlloc_274_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
lean_object* v___x_272_; 
v___x_272_ = lean_array_uset(v_x_248_, v___x_268_, v___x_271_);
v_x_248_ = v___x_272_;
v_x_249_ = v_tail_252_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2___redArg(lean_object* v_i_276_, lean_object* v_source_277_, lean_object* v_target_278_){
_start:
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_array_get_size(v_source_277_);
v___x_280_ = lean_nat_dec_lt(v_i_276_, v___x_279_);
if (v___x_280_ == 0)
{
lean_dec_ref(v_source_277_);
lean_dec(v_i_276_);
return v_target_278_;
}
else
{
lean_object* v_es_281_; lean_object* v___x_282_; lean_object* v_source_283_; lean_object* v_target_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_es_281_ = lean_array_fget(v_source_277_, v_i_276_);
v___x_282_ = lean_box(0);
v_source_283_ = lean_array_fset(v_source_277_, v_i_276_, v___x_282_);
v_target_284_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2_spec__3___redArg(v_target_278_, v_es_281_);
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_nat_add(v_i_276_, v___x_285_);
lean_dec(v_i_276_);
v_i_276_ = v___x_286_;
v_source_277_ = v_source_283_;
v_target_278_ = v_target_284_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1___redArg(lean_object* v_data_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v_nbuckets_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_289_ = lean_array_get_size(v_data_288_);
v___x_290_ = lean_unsigned_to_nat(2u);
v_nbuckets_291_ = lean_nat_mul(v___x_289_, v___x_290_);
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_box(0);
v___x_294_ = lean_mk_array(v_nbuckets_291_, v___x_293_);
v___x_295_ = lean_array_propagate_mark(v_data_288_, v___x_294_);
v___x_296_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2___redArg(v___x_292_, v_data_288_, v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0___redArg(lean_object* v_a_297_, lean_object* v_x_298_){
_start:
{
if (lean_obj_tag(v_x_298_) == 0)
{
uint8_t v___x_299_; 
v___x_299_ = 0;
return v___x_299_;
}
else
{
lean_object* v_key_300_; lean_object* v_tail_301_; uint8_t v___x_302_; 
v_key_300_ = lean_ctor_get(v_x_298_, 0);
v_tail_301_ = lean_ctor_get(v_x_298_, 2);
v___x_302_ = l_Lean_instBEqFVarId_beq(v_key_300_, v_a_297_);
if (v___x_302_ == 0)
{
v_x_298_ = v_tail_301_;
goto _start;
}
else
{
return v___x_302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0___redArg___boxed(lean_object* v_a_304_, lean_object* v_x_305_){
_start:
{
uint8_t v_res_306_; lean_object* v_r_307_; 
v_res_306_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0___redArg(v_a_304_, v_x_305_);
lean_dec(v_x_305_);
lean_dec(v_a_304_);
v_r_307_ = lean_box(v_res_306_);
return v_r_307_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(lean_object* v_m_308_, lean_object* v_a_309_, lean_object* v_b_310_){
_start:
{
lean_object* v_size_311_; lean_object* v_buckets_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_355_; 
v_size_311_ = lean_ctor_get(v_m_308_, 0);
v_buckets_312_ = lean_ctor_get(v_m_308_, 1);
v_isSharedCheck_355_ = !lean_is_exclusive(v_m_308_);
if (v_isSharedCheck_355_ == 0)
{
v___x_314_ = v_m_308_;
v_isShared_315_ = v_isSharedCheck_355_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_buckets_312_);
lean_inc(v_size_311_);
lean_dec(v_m_308_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_355_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; uint64_t v___x_317_; uint64_t v___x_318_; uint64_t v___x_319_; uint64_t v_fold_320_; uint64_t v___x_321_; uint64_t v___x_322_; uint64_t v___x_323_; size_t v___x_324_; size_t v___x_325_; size_t v___x_326_; size_t v___x_327_; size_t v___x_328_; lean_object* v_bkt_329_; uint8_t v___x_330_; 
v___x_316_ = lean_array_get_size(v_buckets_312_);
v___x_317_ = l_Lean_instHashableFVarId_hash(v_a_309_);
v___x_318_ = 32ULL;
v___x_319_ = lean_uint64_shift_right(v___x_317_, v___x_318_);
v_fold_320_ = lean_uint64_xor(v___x_317_, v___x_319_);
v___x_321_ = 16ULL;
v___x_322_ = lean_uint64_shift_right(v_fold_320_, v___x_321_);
v___x_323_ = lean_uint64_xor(v_fold_320_, v___x_322_);
v___x_324_ = lean_uint64_to_usize(v___x_323_);
v___x_325_ = lean_usize_of_nat(v___x_316_);
v___x_326_ = ((size_t)1ULL);
v___x_327_ = lean_usize_sub(v___x_325_, v___x_326_);
v___x_328_ = lean_usize_land(v___x_324_, v___x_327_);
v_bkt_329_ = lean_array_uget_borrowed(v_buckets_312_, v___x_328_);
v___x_330_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0___redArg(v_a_309_, v_bkt_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; lean_object* v_size_x27_332_; lean_object* v___x_333_; lean_object* v_buckets_x27_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_331_ = lean_unsigned_to_nat(1u);
v_size_x27_332_ = lean_nat_add(v_size_311_, v___x_331_);
lean_dec(v_size_311_);
lean_inc(v_bkt_329_);
v___x_333_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_333_, 0, v_a_309_);
lean_ctor_set(v___x_333_, 1, v_b_310_);
lean_ctor_set(v___x_333_, 2, v_bkt_329_);
v_buckets_x27_334_ = lean_array_uset(v_buckets_312_, v___x_328_, v___x_333_);
v___x_335_ = lean_unsigned_to_nat(4u);
v___x_336_ = lean_nat_mul(v_size_x27_332_, v___x_335_);
v___x_337_ = lean_unsigned_to_nat(3u);
v___x_338_ = lean_nat_div(v___x_336_, v___x_337_);
lean_dec(v___x_336_);
v___x_339_ = lean_array_get_size(v_buckets_x27_334_);
v___x_340_ = lean_nat_dec_le(v___x_338_, v___x_339_);
lean_dec(v___x_338_);
if (v___x_340_ == 0)
{
lean_object* v_val_341_; lean_object* v___x_343_; 
v_val_341_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1___redArg(v_buckets_x27_334_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v_val_341_);
lean_ctor_set(v___x_314_, 0, v_size_x27_332_);
v___x_343_ = v___x_314_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_size_x27_332_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_val_341_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
else
{
lean_object* v___x_346_; 
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v_buckets_x27_334_);
lean_ctor_set(v___x_314_, 0, v_size_x27_332_);
v___x_346_ = v___x_314_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_size_x27_332_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v_buckets_x27_334_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
else
{
lean_object* v___x_348_; lean_object* v_buckets_x27_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
lean_inc(v_bkt_329_);
v___x_348_ = lean_box(0);
v_buckets_x27_349_ = lean_array_uset(v_buckets_312_, v___x_328_, v___x_348_);
v___x_350_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__2___redArg(v_a_309_, v_b_310_, v_bkt_329_);
v___x_351_ = lean_array_uset(v_buckets_x27_349_, v___x_328_, v___x_350_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v___x_351_);
v___x_353_ = v___x_314_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_size_311_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure___redArg(lean_object* v_p_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_fvarId_362_; lean_object* v_binderName_363_; lean_object* v_type_364_; uint8_t v_borrow_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_420_; 
v_fvarId_362_ = lean_ctor_get(v_p_356_, 0);
v_binderName_363_ = lean_ctor_get(v_p_356_, 1);
v_type_364_ = lean_ctor_get(v_p_356_, 2);
v_borrow_365_ = lean_ctor_get_uint8(v_p_356_, sizeof(void*)*3);
v_isSharedCheck_420_ = !lean_is_exclusive(v_p_356_);
if (v_isSharedCheck_420_ == 0)
{
v___x_367_ = v_p_356_;
v_isShared_368_ = v_isSharedCheck_420_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_type_364_);
lean_inc(v_binderName_363_);
lean_inc(v_fvarId_362_);
lean_dec(v_p_356_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_420_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; 
v___x_369_ = l_Lean_Compiler_LCNF_toImpureType(v_type_364_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_411_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_411_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_411_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_411_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___y_375_; uint8_t v___x_409_; 
v___x_409_ = l_Lean_Expr_isVoid(v_a_370_);
if (v___x_409_ == 0)
{
uint8_t v___x_410_; 
v___x_410_ = l_Lean_Expr_isErased(v_a_370_);
if (v___x_410_ == 0)
{
v___y_375_ = v_a_358_;
goto v___jp_374_;
}
else
{
goto v___jp_395_;
}
}
else
{
goto v___jp_395_;
}
v___jp_374_:
{
uint8_t v___x_376_; lean_object* v___x_378_; 
v___x_376_ = 1;
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 2, v_a_370_);
v___x_378_ = v___x_367_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_fvarId_362_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_binderName_363_);
lean_ctor_set(v_reuseFailAlloc_394_, 2, v_a_370_);
lean_ctor_set_uint8(v_reuseFailAlloc_394_, sizeof(void*)*3, v_borrow_365_);
v___x_378_ = v_reuseFailAlloc_394_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v_lctx_380_; lean_object* v_nextIdx_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_393_; 
v___x_379_ = lean_st_ref_take(v___y_375_);
v_lctx_380_ = lean_ctor_get(v___x_379_, 0);
v_nextIdx_381_ = lean_ctor_get(v___x_379_, 1);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_393_ == 0)
{
v___x_383_ = v___x_379_;
v_isShared_384_ = v_isSharedCheck_393_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_nextIdx_381_);
lean_inc(v_lctx_380_);
lean_dec(v___x_379_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_393_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_385_; lean_object* v___x_387_; 
lean_inc_ref(v___x_378_);
v___x_385_ = l_Lean_Compiler_LCNF_LCtx_addParam(v___x_376_, v_lctx_380_, v___x_378_);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 0, v___x_385_);
v___x_387_ = v___x_383_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_nextIdx_381_);
v___x_387_ = v_reuseFailAlloc_392_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_388_; lean_object* v___x_390_; 
v___x_388_ = lean_st_ref_put(v___y_375_, v___x_387_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_378_);
v___x_390_ = v___x_372_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_378_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
v___jp_395_:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v_subst_398_; lean_object* v_jpParamMask_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_408_; 
v___x_396_ = lean_box(0);
v___x_397_ = lean_st_ref_take(v_a_357_);
v_subst_398_ = lean_ctor_get(v___x_397_, 0);
v_jpParamMask_399_ = lean_ctor_get(v___x_397_, 1);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_408_ == 0)
{
v___x_401_ = v___x_397_;
v_isShared_402_ = v_isSharedCheck_408_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_jpParamMask_399_);
lean_inc(v_subst_398_);
lean_dec(v___x_397_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_408_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_403_; lean_object* v___x_405_; 
lean_inc(v_fvarId_362_);
v___x_403_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_subst_398_, v_fvarId_362_, v___x_396_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v___x_403_);
v___x_405_ = v___x_401_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_403_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_jpParamMask_399_);
v___x_405_ = v_reuseFailAlloc_407_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v___x_406_; 
v___x_406_ = lean_st_ref_put(v_a_357_, v___x_405_);
v___y_375_ = v_a_358_;
goto v___jp_374_;
}
}
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
lean_del_object(v___x_367_);
lean_dec(v_binderName_363_);
lean_dec(v_fvarId_362_);
v_a_412_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_369_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_369_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure___redArg___boxed(lean_object* v_p_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure___redArg(v_p_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec(v_a_422_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure(lean_object* v_p_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure___redArg(v_p_428_, v_a_429_, v_a_431_, v_a_432_, v_a_433_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure___boxed(lean_object* v_p_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure(v_p_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_);
lean_dec(v_a_441_);
lean_dec_ref(v_a_440_);
lean_dec(v_a_439_);
lean_dec_ref(v_a_438_);
lean_dec(v_a_437_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0(lean_object* v_00_u03b2_444_, lean_object* v_m_445_, lean_object* v_a_446_, lean_object* v_b_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_m_445_, v_a_446_, v_b_447_);
return v___x_448_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0(lean_object* v_00_u03b2_449_, lean_object* v_a_450_, lean_object* v_x_451_){
_start:
{
uint8_t v___x_452_; 
v___x_452_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0___redArg(v_a_450_, v_x_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0___boxed(lean_object* v_00_u03b2_453_, lean_object* v_a_454_, lean_object* v_x_455_){
_start:
{
uint8_t v_res_456_; lean_object* v_r_457_; 
v_res_456_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__0(v_00_u03b2_453_, v_a_454_, v_x_455_);
lean_dec(v_x_455_);
lean_dec(v_a_454_);
v_r_457_ = lean_box(v_res_456_);
return v_r_457_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1(lean_object* v_00_u03b2_458_, lean_object* v_data_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1___redArg(v_data_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__2(lean_object* v_00_u03b2_461_, lean_object* v_a_462_, lean_object* v_b_463_, lean_object* v_x_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__2___redArg(v_a_462_, v_b_463_, v_x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_466_, lean_object* v_i_467_, lean_object* v_source_468_, lean_object* v_target_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2___redArg(v_i_467_, v_source_468_, v_target_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_471_, lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0_spec__1_spec__2_spec__3___redArg(v_x_472_, v_x_473_);
return v___x_474_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = lean_box(0);
v___x_482_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__3));
v___x_483_ = l_Lean_Expr_const___override(v___x_482_, v___x_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg(lean_object* v_upperBound_484_, lean_object* v_a_485_, lean_object* v_b_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = lean_nat_dec_lt(v_a_485_, v_upperBound_484_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; 
lean_dec(v_a_485_);
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v_b_486_);
return v___x_493_;
}
else
{
lean_object* v_fst_494_; lean_object* v_snd_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_532_; 
v_fst_494_ = lean_ctor_get(v_b_486_, 0);
v_snd_495_ = lean_ctor_get(v_b_486_, 1);
v_isSharedCheck_532_ = !lean_is_exclusive(v_b_486_);
if (v_isSharedCheck_532_ == 0)
{
v___x_497_ = v_b_486_;
v_isShared_498_ = v_isSharedCheck_532_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_snd_495_);
lean_inc(v_fst_494_);
lean_dec(v_b_486_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_532_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__1));
v___x_500_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_499_, v___y_488_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_a_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_501_);
lean_dec_ref_known(v___x_500_, 1);
v___x_502_ = 1;
v___x_503_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4);
v___x_504_ = l_Lean_Compiler_LCNF_spillLinkIdx;
v___x_505_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
lean_ctor_set(v___x_505_, 1, v_snd_495_);
v___x_506_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_502_, v_a_501_, v___x_503_, v___x_505_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v_fvarId_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_507_);
lean_dec_ref_known(v___x_506_, 1);
v_fvarId_508_ = lean_ctor_get(v_a_507_, 0);
lean_inc(v_fvarId_508_);
v___x_509_ = lean_array_push(v_fst_494_, v_a_507_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 1, v_fvarId_508_);
lean_ctor_set(v___x_497_, 0, v___x_509_);
v___x_511_ = v___x_497_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_509_);
lean_ctor_set(v_reuseFailAlloc_515_, 1, v_fvarId_508_);
v___x_511_ = v_reuseFailAlloc_515_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = lean_nat_add(v_a_485_, v___x_512_);
lean_dec(v_a_485_);
v_a_485_ = v___x_513_;
v_b_486_ = v___x_511_;
goto _start;
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_del_object(v___x_497_);
lean_dec(v_fst_494_);
lean_dec(v_a_485_);
v_a_516_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_506_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_506_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
lean_del_object(v___x_497_);
lean_dec(v_snd_495_);
lean_dec(v_fst_494_);
lean_dec(v_a_485_);
v_a_524_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_500_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_500_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___boxed(lean_object* v_upperBound_533_, lean_object* v_a_534_, lean_object* v_b_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg(v_upperBound_533_, v_a_534_, v_b_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec(v_upperBound_533_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs(lean_object* v_base_544_, lean_object* v_depth_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v___x_551_; lean_object* v_decls_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_551_ = lean_unsigned_to_nat(0u);
v_decls_552_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs___closed__0));
v___x_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_553_, 0, v_decls_552_);
lean_ctor_set(v___x_553_, 1, v_base_544_);
v___x_554_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg(v_depth_545_, v___x_551_, v___x_553_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_563_; 
v_a_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_563_ == 0)
{
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_563_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_563_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v_fst_559_; lean_object* v___x_561_; 
v_fst_559_ = lean_ctor_get(v_a_555_, 0);
lean_inc(v_fst_559_);
lean_dec(v_a_555_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v_fst_559_);
v___x_561_ = v___x_557_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_fst_559_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
v_a_564_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_554_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_554_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs___boxed(lean_object* v_base_572_, lean_object* v_depth_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs(v_base_572_, v_depth_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_);
lean_dec(v_a_577_);
lean_dec_ref(v_a_576_);
lean_dec(v_a_575_);
lean_dec_ref(v_a_574_);
lean_dec(v_depth_573_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0(lean_object* v_upperBound_580_, lean_object* v_inst_581_, lean_object* v_R_582_, lean_object* v_a_583_, lean_object* v_b_584_, lean_object* v_c_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg(v_upperBound_580_, v_a_583_, v_b_584_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___boxed(lean_object* v_upperBound_592_, lean_object* v_inst_593_, lean_object* v_R_594_, lean_object* v_a_595_, lean_object* v_b_596_, lean_object* v_c_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0(v_upperBound_592_, v_inst_593_, v_R_594_, v_a_595_, v_b_596_, v_c_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v_upperBound_592_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0___redArg(lean_object* v_ctorName_604_, lean_object* v_as_x27_605_, lean_object* v_b_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
if (lean_obj_tag(v_as_x27_605_) == 0)
{
lean_object* v___x_612_; 
lean_dec(v_ctorName_604_);
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v_b_606_);
return v___x_612_;
}
else
{
lean_object* v_head_613_; lean_object* v_tail_614_; lean_object* v_fst_615_; lean_object* v_snd_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_662_; 
v_head_613_ = lean_ctor_get(v_as_x27_605_, 0);
v_tail_614_ = lean_ctor_get(v_as_x27_605_, 1);
v_fst_615_ = lean_ctor_get(v_b_606_, 0);
v_snd_616_ = lean_ctor_get(v_b_606_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v_b_606_);
if (v_isSharedCheck_662_ == 0)
{
v___x_618_ = v_b_606_;
v_isShared_619_ = v_isSharedCheck_662_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_snd_616_);
lean_inc(v_fst_615_);
lean_dec(v_b_606_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_662_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_620_ = lean_unsigned_to_nat(1u);
v___x_621_ = lean_nat_add(v_head_613_, v___x_620_);
v___x_622_ = l_Lean_Compiler_LCNF_spillLinkIdx;
v___x_623_ = lean_nat_mul(v___x_621_, v___x_622_);
lean_dec(v___x_621_);
v___x_624_ = lean_array_get_size(v_snd_616_);
lean_inc(v___x_623_);
v___x_625_ = l_Array_extract___redArg(v_snd_616_, v___x_623_, v___x_624_);
v___x_626_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__1));
v___x_627_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_626_, v___y_608_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_a_628_; uint8_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v_a_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_a_628_);
lean_dec_ref_known(v___x_627_, 1);
v___x_629_ = 1;
v___x_630_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4);
v___x_631_ = lean_array_get_size(v___x_625_);
lean_inc(v_ctorName_604_);
v___x_632_ = l_Lean_Compiler_LCNF_spillCtorInfo(v_ctorName_604_, v___x_631_);
v___x_633_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
lean_ctor_set(v___x_633_, 1, v___x_625_);
v___x_634_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_629_, v_a_628_, v___x_630_, v___x_633_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; lean_object* v_fvarId_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_643_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v___x_634_, 1);
v_fvarId_636_ = lean_ctor_get(v_a_635_, 0);
lean_inc(v_fvarId_636_);
v___x_637_ = lean_array_push(v_fst_615_, v_a_635_);
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = l_Array_extract___redArg(v_snd_616_, v___x_638_, v___x_623_);
lean_dec(v_snd_616_);
v___x_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_640_, 0, v_fvarId_636_);
v___x_641_ = lean_array_push(v___x_639_, v___x_640_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v___x_641_);
lean_ctor_set(v___x_618_, 0, v___x_637_);
v___x_643_ = v___x_618_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v___x_641_);
v___x_643_ = v_reuseFailAlloc_645_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
v_as_x27_605_ = v_tail_614_;
v_b_606_ = v___x_643_;
goto _start;
}
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec(v___x_623_);
lean_del_object(v___x_618_);
lean_dec(v_snd_616_);
lean_dec(v_fst_615_);
lean_dec(v_ctorName_604_);
v_a_646_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_634_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_634_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_dec_ref(v___x_625_);
lean_dec(v___x_623_);
lean_del_object(v___x_618_);
lean_dec(v_snd_616_);
lean_dec(v_fst_615_);
lean_dec(v_ctorName_604_);
v_a_654_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_627_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_627_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0___redArg___boxed(lean_object* v_ctorName_663_, lean_object* v_as_x27_664_, lean_object* v_b_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0___redArg(v_ctorName_663_, v_as_x27_664_, v_b_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec(v_as_x27_664_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs(lean_object* v_ctorName_672_, lean_object* v_objArgs_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
lean_object* v_decls_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_decls_679_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs___closed__0));
v___x_680_ = lean_array_get_size(v_objArgs_673_);
v___x_681_ = l_Lean_Compiler_LCNF_numSpillObjs(v___x_680_);
v___x_682_ = l_List_range(v___x_681_);
v___x_683_ = l_List_reverse___redArg(v___x_682_);
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v_decls_679_);
lean_ctor_set(v___x_684_, 1, v_objArgs_673_);
v___x_685_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0___redArg(v_ctorName_672_, v___x_683_, v___x_684_, v_a_674_, v_a_675_, v_a_676_, v_a_677_);
lean_dec(v___x_683_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_702_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_702_ == 0)
{
v___x_688_ = v___x_685_;
v_isShared_689_ = v_isSharedCheck_702_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_685_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_702_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v_fst_690_; lean_object* v_snd_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_701_; 
v_fst_690_ = lean_ctor_get(v_a_686_, 0);
v_snd_691_ = lean_ctor_get(v_a_686_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v_a_686_);
if (v_isSharedCheck_701_ == 0)
{
v___x_693_ = v_a_686_;
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_snd_691_);
lean_inc(v_fst_690_);
lean_dec(v_a_686_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_696_; 
if (v_isShared_694_ == 0)
{
v___x_696_ = v___x_693_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_fst_690_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_snd_691_);
v___x_696_ = v_reuseFailAlloc_700_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
lean_object* v___x_698_; 
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_696_);
v___x_698_ = v___x_688_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
else
{
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs___boxed(lean_object* v_ctorName_703_, lean_object* v_objArgs_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs(v_ctorName_703_, v_objArgs_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_);
lean_dec(v_a_708_);
lean_dec_ref(v_a_707_);
lean_dec(v_a_706_);
lean_dec_ref(v_a_705_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0(lean_object* v_ctorName_711_, lean_object* v_as_712_, lean_object* v_as_x27_713_, lean_object* v_b_714_, lean_object* v_a_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0___redArg(v_ctorName_711_, v_as_x27_713_, v_b_714_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0___boxed(lean_object* v_ctorName_722_, lean_object* v_as_723_, lean_object* v_as_x27_724_, lean_object* v_b_725_, lean_object* v_a_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_List_forIn_x27_loop___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs_spec__0(v_ctorName_722_, v_as_723_, v_as_x27_724_, v_b_725_, v_a_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
lean_dec(v_as_x27_724_);
lean_dec(v_as_723_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls_spec__0(lean_object* v_as_733_, size_t v_i_734_, size_t v_stop_735_, lean_object* v_b_736_){
_start:
{
uint8_t v___x_737_; 
v___x_737_ = lean_usize_dec_eq(v_i_734_, v_stop_735_);
if (v___x_737_ == 0)
{
size_t v___x_738_; size_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_738_ = ((size_t)1ULL);
v___x_739_ = lean_usize_sub(v_i_734_, v___x_738_);
v___x_740_ = lean_array_uget_borrowed(v_as_733_, v___x_739_);
lean_inc(v___x_740_);
v___x_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
lean_ctor_set(v___x_741_, 1, v_b_736_);
v_i_734_ = v___x_739_;
v_b_736_ = v___x_741_;
goto _start;
}
else
{
return v_b_736_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls_spec__0___boxed(lean_object* v_as_743_, lean_object* v_i_744_, lean_object* v_stop_745_, lean_object* v_b_746_){
_start:
{
size_t v_i_boxed_747_; size_t v_stop_boxed_748_; lean_object* v_res_749_; 
v_i_boxed_747_ = lean_unbox_usize(v_i_744_);
lean_dec(v_i_744_);
v_stop_boxed_748_ = lean_unbox_usize(v_stop_745_);
lean_dec(v_stop_745_);
v_res_749_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls_spec__0(v_as_743_, v_i_boxed_747_, v_stop_boxed_748_, v_b_746_);
lean_dec_ref(v_as_743_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls(lean_object* v_decls_750_, lean_object* v_code_751_){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v___x_752_ = lean_array_get_size(v_decls_750_);
v___x_753_ = lean_unsigned_to_nat(0u);
v___x_754_ = lean_nat_dec_lt(v___x_753_, v___x_752_);
if (v___x_754_ == 0)
{
return v_code_751_;
}
else
{
size_t v___x_755_; size_t v___x_756_; lean_object* v___x_757_; 
v___x_755_ = lean_usize_of_nat(v___x_752_);
v___x_756_ = ((size_t)0ULL);
v___x_757_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls_spec__0(v_decls_750_, v___x_755_, v___x_756_, v_code_751_);
return v___x_757_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls___boxed(lean_object* v_decls_758_, lean_object* v_code_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls(v_decls_758_, v_code_759_);
lean_dec_ref(v_decls_758_);
return v_res_760_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__2(void){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_764_ = lean_box(0);
v___x_765_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__1));
v___x_766_ = l_Lean_Expr_const___override(v___x_765_, v___x_764_);
return v___x_766_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__3(void){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_767_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__2, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__2);
v___x_768_ = lean_box(1);
v___x_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
lean_ctor_set(v___x_769_, 1, v___x_767_);
return v___x_769_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__6(void){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_773_ = lean_box(0);
v___x_774_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__5));
v___x_775_ = l_Lean_Expr_const___override(v___x_774_, v___x_773_);
return v___x_775_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__9(void){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_779_ = lean_box(0);
v___x_780_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__8));
v___x_781_ = l_Lean_Expr_const___override(v___x_780_, v___x_779_);
return v___x_781_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__10(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_782_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__9, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__9_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__9);
v___x_783_ = lean_box(1);
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
lean_ctor_set(v___x_784_, 1, v___x_782_);
return v___x_784_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__11(void){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = l_Lean_Compiler_LCNF_instInhabitedLetDecl_default___redArg();
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj(lean_object* v_base_786_, lean_object* v_spills_787_, lean_object* v_ctorInfo_788_, lean_object* v_field_789_){
_start:
{
switch(lean_obj_tag(v_field_789_))
{
case 0:
{
lean_object* v___x_790_; 
lean_dec(v_base_786_);
v___x_790_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__3, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__3);
return v___x_790_;
}
case 1:
{
lean_object* v_i_791_; lean_object* v_type_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_800_; 
v_i_791_ = lean_ctor_get(v_field_789_, 0);
v_type_792_ = lean_ctor_get(v_field_789_, 1);
v_isSharedCheck_800_ = !lean_is_exclusive(v_field_789_);
if (v_isSharedCheck_800_ == 0)
{
v___x_794_ = v_field_789_;
v_isShared_795_ = v_isSharedCheck_800_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_type_792_);
lean_inc(v_i_791_);
lean_dec(v_field_789_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_800_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_795_ == 0)
{
lean_ctor_set_tag(v___x_794_, 6);
lean_ctor_set(v___x_794_, 1, v_base_786_);
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_i_791_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v_base_786_);
v___x_797_ = v_reuseFailAlloc_799_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
lean_object* v___x_798_; 
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
lean_ctor_set(v___x_798_, 1, v_type_792_);
return v___x_798_;
}
}
}
case 2:
{
lean_object* v_i_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v_i_801_ = lean_ctor_get(v_field_789_, 0);
lean_inc(v_i_801_);
lean_dec_ref_known(v_field_789_, 1);
v___x_802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_802_, 0, v_i_801_);
lean_ctor_set(v___x_802_, 1, v_base_786_);
v___x_803_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__6, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__6_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__6);
v___x_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_802_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
return v___x_804_;
}
case 3:
{
lean_object* v_offset_805_; lean_object* v_type_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_817_; 
v_offset_805_ = lean_ctor_get(v_field_789_, 1);
v_type_806_ = lean_ctor_get(v_field_789_, 2);
v_isSharedCheck_817_ = !lean_is_exclusive(v_field_789_);
if (v_isSharedCheck_817_ == 0)
{
lean_object* v_unused_818_; 
v_unused_818_ = lean_ctor_get(v_field_789_, 0);
lean_dec(v_unused_818_);
v___x_808_ = v_field_789_;
v_isShared_809_ = v_isSharedCheck_817_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_type_806_);
lean_inc(v_offset_805_);
lean_dec(v_field_789_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_817_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v_size_810_; lean_object* v_usize_811_; lean_object* v___x_812_; lean_object* v___x_814_; 
v_size_810_ = lean_ctor_get(v_ctorInfo_788_, 2);
v_usize_811_ = lean_ctor_get(v_ctorInfo_788_, 3);
v___x_812_ = lean_nat_add(v_size_810_, v_usize_811_);
if (v_isShared_809_ == 0)
{
lean_ctor_set_tag(v___x_808_, 8);
lean_ctor_set(v___x_808_, 2, v_base_786_);
lean_ctor_set(v___x_808_, 0, v___x_812_);
v___x_814_ = v___x_808_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(8, 3, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_812_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_offset_805_);
lean_ctor_set(v_reuseFailAlloc_816_, 2, v_base_786_);
v___x_814_ = v_reuseFailAlloc_816_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
lean_object* v___x_815_; 
v___x_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
lean_ctor_set(v___x_815_, 1, v_type_806_);
return v___x_815_;
}
}
}
case 4:
{
lean_object* v___x_819_; 
lean_dec(v_base_786_);
v___x_819_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__10, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__10_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__10);
return v___x_819_;
}
default: 
{
lean_object* v_depth_820_; lean_object* v_i_821_; lean_object* v_type_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v_fvarId_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
lean_dec(v_base_786_);
v_depth_820_ = lean_ctor_get(v_field_789_, 0);
lean_inc(v_depth_820_);
v_i_821_ = lean_ctor_get(v_field_789_, 1);
lean_inc(v_i_821_);
v_type_822_ = lean_ctor_get(v_field_789_, 2);
lean_inc_ref(v_type_822_);
lean_dec_ref_known(v_field_789_, 3);
v___x_823_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__11, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__11_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__11);
v___x_824_ = lean_unsigned_to_nat(1u);
v___x_825_ = lean_nat_sub(v_depth_820_, v___x_824_);
lean_dec(v_depth_820_);
v___x_826_ = lean_array_get_borrowed(v___x_823_, v_spills_787_, v___x_825_);
lean_dec(v___x_825_);
v_fvarId_827_ = lean_ctor_get(v___x_826_, 0);
lean_inc(v_fvarId_827_);
v___x_828_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_828_, 0, v_i_821_);
lean_ctor_set(v___x_828_, 1, v_fvarId_827_);
v___x_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
lean_ctor_set(v___x_829_, 1, v_type_822_);
return v___x_829_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___boxed(lean_object* v_base_830_, lean_object* v_spills_831_, lean_object* v_ctorInfo_832_, lean_object* v_field_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj(v_base_830_, v_spills_831_, v_ctorInfo_832_, v_field_833_);
lean_dec_ref(v_ctorInfo_832_);
lean_dec_ref(v_spills_831_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___redArg(lean_object* v_arg_835_, lean_object* v_a_836_){
_start:
{
uint8_t v___x_838_; uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v_subst_841_; lean_object* v___x_842_; 
v___x_838_ = 0;
v___x_839_ = 1;
v___x_840_ = lean_st_ref_get(v_a_836_);
v_subst_841_ = lean_ctor_get(v___x_840_, 0);
lean_inc_ref(v_subst_841_);
lean_dec(v___x_840_);
v___x_842_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v___x_838_, v_subst_841_, v_arg_835_, v___x_839_);
lean_dec_ref(v_subst_841_);
if (lean_obj_tag(v___x_842_) == 1)
{
lean_object* v_fvarId_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_851_; 
v_fvarId_843_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_851_ == 0)
{
v___x_845_ = v___x_842_;
v_isShared_846_ = v_isSharedCheck_851_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_fvarId_843_);
lean_dec(v___x_842_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_851_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_fvarId_843_);
v___x_848_ = v_reuseFailAlloc_850_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
lean_object* v___x_849_; 
v___x_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
return v___x_849_;
}
}
}
else
{
lean_object* v___x_852_; lean_object* v___x_853_; 
lean_dec(v___x_842_);
v___x_852_ = lean_box(0);
v___x_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
return v___x_853_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___redArg___boxed(lean_object* v_arg_854_, lean_object* v_a_855_, lean_object* v_a_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___redArg(v_arg_854_, v_a_855_);
lean_dec(v_a_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure(lean_object* v_arg_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___redArg(v_arg_858_, v_a_859_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___boxed(lean_object* v_arg_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure(v_arg_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_);
lean_dec(v_a_871_);
lean_dec_ref(v_a_870_);
lean_dec(v_a_869_);
lean_dec_ref(v_a_868_);
lean_dec(v_a_867_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity_spec__0(lean_object* v_msg_874_){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = l_Lean_instInhabitedExpr;
v___x_876_ = lean_panic_fn_borrowed(v___x_875_, v_msg_874_);
return v___x_876_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__3(void){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_880_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__2));
v___x_881_ = lean_unsigned_to_nat(11u);
v___x_882_ = lean_unsigned_to_nat(115u);
v___x_883_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__1));
v___x_884_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0));
v___x_885_ = l_mkPanicMessageWithDecl(v___x_884_, v___x_883_, v___x_882_, v___x_881_, v___x_880_);
return v___x_885_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__4(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_886_ = lean_box(0);
v___x_887_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__1));
v___x_888_ = l_Lean_mkConst(v___x_887_, v___x_886_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity(lean_object* v_type_889_, lean_object* v_arity_890_){
_start:
{
lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_894_ = lean_unsigned_to_nat(0u);
v___x_895_ = lean_nat_dec_eq(v_arity_890_, v___x_894_);
if (v___x_895_ == 0)
{
switch(lean_obj_tag(v_type_889_))
{
case 7:
{
lean_object* v_body_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v_body_896_ = lean_ctor_get(v_type_889_, 2);
v___x_897_ = lean_unsigned_to_nat(1u);
v___x_898_ = lean_nat_sub(v_arity_890_, v___x_897_);
lean_dec(v_arity_890_);
v_type_889_ = v_body_896_;
v_arity_890_ = v___x_898_;
goto _start;
}
case 4:
{
lean_object* v_declName_900_; 
lean_dec(v_arity_890_);
v_declName_900_ = lean_ctor_get(v_type_889_, 0);
if (lean_obj_tag(v_declName_900_) == 1)
{
lean_object* v_pre_901_; 
v_pre_901_ = lean_ctor_get(v_declName_900_, 0);
if (lean_obj_tag(v_pre_901_) == 0)
{
lean_object* v_str_902_; lean_object* v___x_903_; uint8_t v___x_904_; 
v_str_902_ = lean_ctor_get(v_declName_900_, 1);
v___x_903_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__0));
v___x_904_ = lean_string_dec_eq(v_str_902_, v___x_903_);
if (v___x_904_ == 0)
{
goto v___jp_891_;
}
else
{
lean_object* v___x_905_; 
v___x_905_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__4, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__4);
return v___x_905_;
}
}
else
{
goto v___jp_891_;
}
}
else
{
goto v___jp_891_;
}
}
default: 
{
lean_dec(v_arity_890_);
goto v___jp_891_;
}
}
}
else
{
lean_dec(v_arity_890_);
lean_inc_ref(v_type_889_);
return v_type_889_;
}
v___jp_891_:
{
lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_892_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__3, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__3);
v___x_893_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity_spec__0(v___x_892_);
return v___x_893_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___boxed(lean_object* v_type_906_, lean_object* v_arity_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity(v_type_906_, v_arity_907_);
lean_dec_ref(v_type_906_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_lowerResultType(lean_object* v_type_909_, lean_object* v_arity_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity(v_type_909_, v_arity_910_);
v___x_915_ = l_Lean_Compiler_LCNF_toImpureType(v___x_914_, v_a_911_, v_a_912_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_lowerResultType___boxed(lean_object* v_type_916_, lean_object* v_arity_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lean_Compiler_LCNF_lowerResultType(v_type_916_, v_arity_917_, v_a_918_, v_a_919_);
lean_dec(v_a_919_);
lean_dec_ref(v_a_918_);
lean_dec_ref(v_type_916_);
return v_res_921_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__2(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_925_ = lean_box(0);
v___x_926_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__1));
v___x_927_ = l_Lean_Expr_const___override(v___x_926_, v___x_925_);
return v___x_927_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__5(void){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_931_ = lean_box(0);
v___x_932_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__4));
v___x_933_ = l_Lean_Expr_const___override(v___x_932_, v___x_931_);
return v___x_933_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__8(void){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_937_ = lean_box(0);
v___x_938_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__7));
v___x_939_ = l_Lean_Expr_const___override(v___x_938_, v___x_937_);
return v___x_939_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__11(void){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_943_ = lean_box(0);
v___x_944_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__10));
v___x_945_ = l_Lean_Expr_const___override(v___x_944_, v___x_943_);
return v___x_945_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__14(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_949_ = lean_box(0);
v___x_950_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__13));
v___x_951_ = l_Lean_Expr_const___override(v___x_950_, v___x_949_);
return v___x_951_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__17(void){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_955_ = lean_box(0);
v___x_956_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__16));
v___x_957_ = l_Lean_Expr_const___override(v___x_956_, v___x_955_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType(lean_object* v_v_958_){
_start:
{
switch(lean_obj_tag(v_v_958_))
{
case 0:
{
lean_object* v_val_959_; uint8_t v___x_960_; 
v_val_959_ = lean_ctor_get(v_v_958_, 0);
v___x_960_ = l_Lean_Compiler_LCNF_Nat_isPossibleRef(v_val_959_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; 
v___x_961_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__2, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__2);
return v___x_961_;
}
else
{
lean_object* v___x_962_; 
v___x_962_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__5, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__5);
return v___x_962_;
}
}
case 1:
{
lean_object* v___x_963_; 
v___x_963_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4);
return v___x_963_;
}
case 2:
{
lean_object* v___x_964_; 
v___x_964_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__8, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__8_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__8);
return v___x_964_;
}
case 3:
{
lean_object* v___x_965_; 
v___x_965_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__11, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__11_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__11);
return v___x_965_;
}
case 4:
{
lean_object* v___x_966_; 
v___x_966_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__14, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__14_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__14);
return v___x_966_;
}
case 5:
{
lean_object* v___x_967_; 
v___x_967_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__17, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__17_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__17);
return v___x_967_;
}
default: 
{
lean_object* v___x_968_; 
v___x_968_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__6, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__6_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj___closed__6);
return v___x_968_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___boxed(lean_object* v_v_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType(v_v_969_);
lean_dec_ref(v_v_969_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__4(lean_object* v_as_971_, size_t v_i_972_, size_t v_stop_973_, lean_object* v_b_974_){
_start:
{
lean_object* v___y_976_; uint8_t v___x_980_; 
v___x_980_ = lean_usize_dec_eq(v_i_972_, v_stop_973_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; lean_object* v_snd_982_; uint8_t v___x_983_; 
v___x_981_ = lean_array_uget_borrowed(v_as_971_, v_i_972_);
v_snd_982_ = lean_ctor_get(v___x_981_, 1);
v___x_983_ = lean_unbox(v_snd_982_);
if (v___x_983_ == 0)
{
v___y_976_ = v_b_974_;
goto v___jp_975_;
}
else
{
lean_object* v_fst_984_; lean_object* v___x_985_; 
v_fst_984_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_fst_984_);
v___x_985_ = lean_array_push(v_b_974_, v_fst_984_);
v___y_976_ = v___x_985_;
goto v___jp_975_;
}
}
else
{
return v_b_974_;
}
v___jp_975_:
{
size_t v___x_977_; size_t v___x_978_; 
v___x_977_ = ((size_t)1ULL);
v___x_978_ = lean_usize_add(v_i_972_, v___x_977_);
v_i_972_ = v___x_978_;
v_b_974_ = v___y_976_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__4___boxed(lean_object* v_as_986_, lean_object* v_i_987_, lean_object* v_stop_988_, lean_object* v_b_989_){
_start:
{
size_t v_i_boxed_990_; size_t v_stop_boxed_991_; lean_object* v_res_992_; 
v_i_boxed_990_ = lean_unbox_usize(v_i_987_);
lean_dec(v_i_987_);
v_stop_boxed_991_ = lean_unbox_usize(v_stop_988_);
lean_dec(v_stop_988_);
v_res_992_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__4(v_as_986_, v_i_boxed_990_, v_stop_boxed_991_, v_b_989_);
lean_dec_ref(v_as_986_);
return v_res_992_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0___closed__0(void){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(lean_object* v_msg_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___x_1001_; lean_object* v_toApplicative_1002_; lean_object* v_toFunctor_1003_; lean_object* v_toSeq_1004_; lean_object* v_toSeqLeft_1005_; lean_object* v_toSeqRight_1006_; lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___f_1009_; lean_object* v___f_1010_; lean_object* v___x_1011_; lean_object* v___f_1012_; lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v_toApplicative_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1050_; 
v___x_1001_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__1, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__1);
v_toApplicative_1002_ = lean_ctor_get(v___x_1001_, 0);
v_toFunctor_1003_ = lean_ctor_get(v_toApplicative_1002_, 0);
v_toSeq_1004_ = lean_ctor_get(v_toApplicative_1002_, 2);
v_toSeqLeft_1005_ = lean_ctor_get(v_toApplicative_1002_, 3);
v_toSeqRight_1006_ = lean_ctor_get(v_toApplicative_1002_, 4);
v___f_1007_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__2));
v___f_1008_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__3));
lean_inc_ref_n(v_toFunctor_1003_, 2);
v___f_1009_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1009_, 0, v_toFunctor_1003_);
v___f_1010_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1010_, 0, v_toFunctor_1003_);
v___x_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___f_1009_);
lean_ctor_set(v___x_1011_, 1, v___f_1010_);
lean_inc(v_toSeqRight_1006_);
v___f_1012_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1012_, 0, v_toSeqRight_1006_);
lean_inc(v_toSeqLeft_1005_);
v___f_1013_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1013_, 0, v_toSeqLeft_1005_);
lean_inc(v_toSeq_1004_);
v___f_1014_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1014_, 0, v_toSeq_1004_);
v___x_1015_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1011_);
lean_ctor_set(v___x_1015_, 1, v___f_1007_);
lean_ctor_set(v___x_1015_, 2, v___f_1014_);
lean_ctor_set(v___x_1015_, 3, v___f_1013_);
lean_ctor_set(v___x_1015_, 4, v___f_1012_);
v___x_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v___f_1008_);
v___x_1017_ = l_StateRefT_x27_instMonad___redArg(v___x_1016_);
v_toApplicative_1018_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1050_ == 0)
{
lean_object* v_unused_1051_; 
v_unused_1051_ = lean_ctor_get(v___x_1017_, 1);
lean_dec(v_unused_1051_);
v___x_1020_ = v___x_1017_;
v_isShared_1021_ = v_isSharedCheck_1050_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_toApplicative_1018_);
lean_dec(v___x_1017_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1050_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v_toFunctor_1022_; lean_object* v_toSeq_1023_; lean_object* v_toSeqLeft_1024_; lean_object* v_toSeqRight_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1048_; 
v_toFunctor_1022_ = lean_ctor_get(v_toApplicative_1018_, 0);
v_toSeq_1023_ = lean_ctor_get(v_toApplicative_1018_, 2);
v_toSeqLeft_1024_ = lean_ctor_get(v_toApplicative_1018_, 3);
v_toSeqRight_1025_ = lean_ctor_get(v_toApplicative_1018_, 4);
v_isSharedCheck_1048_ = !lean_is_exclusive(v_toApplicative_1018_);
if (v_isSharedCheck_1048_ == 0)
{
lean_object* v_unused_1049_; 
v_unused_1049_ = lean_ctor_get(v_toApplicative_1018_, 1);
lean_dec(v_unused_1049_);
v___x_1027_ = v_toApplicative_1018_;
v_isShared_1028_ = v_isSharedCheck_1048_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_toSeqRight_1025_);
lean_inc(v_toSeqLeft_1024_);
lean_inc(v_toSeq_1023_);
lean_inc(v_toFunctor_1022_);
lean_dec(v_toApplicative_1018_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1048_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___f_1029_; lean_object* v___f_1030_; lean_object* v___f_1031_; lean_object* v___f_1032_; lean_object* v___x_1033_; lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___x_1038_; 
v___f_1029_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__5));
v___f_1030_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue___closed__6));
lean_inc_ref(v_toFunctor_1022_);
v___f_1031_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1031_, 0, v_toFunctor_1022_);
v___f_1032_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1032_, 0, v_toFunctor_1022_);
v___x_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___f_1031_);
lean_ctor_set(v___x_1033_, 1, v___f_1032_);
v___f_1034_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1034_, 0, v_toSeqRight_1025_);
v___f_1035_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1035_, 0, v_toSeqLeft_1024_);
v___f_1036_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1036_, 0, v_toSeq_1023_);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 4, v___f_1034_);
lean_ctor_set(v___x_1027_, 3, v___f_1035_);
lean_ctor_set(v___x_1027_, 2, v___f_1036_);
lean_ctor_set(v___x_1027_, 1, v___f_1029_);
lean_ctor_set(v___x_1027_, 0, v___x_1033_);
v___x_1038_ = v___x_1027_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_1033_);
lean_ctor_set(v_reuseFailAlloc_1047_, 1, v___f_1029_);
lean_ctor_set(v_reuseFailAlloc_1047_, 2, v___f_1036_);
lean_ctor_set(v_reuseFailAlloc_1047_, 3, v___f_1035_);
lean_ctor_set(v_reuseFailAlloc_1047_, 4, v___f_1034_);
v___x_1038_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
lean_object* v___x_1040_; 
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 1, v___f_1030_);
lean_ctor_set(v___x_1020_, 0, v___x_1038_);
v___x_1040_ = v___x_1020_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1046_, 1, v___f_1030_);
v___x_1040_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_39155__overap_1044_; lean_object* v___x_1045_; 
v___x_1041_ = l_StateRefT_x27_instMonad___redArg(v___x_1040_);
v___x_1042_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0___closed__0);
v___x_1043_ = l_instInhabitedOfMonad___redArg(v___x_1041_, v___x_1042_);
v___x_39155__overap_1044_ = lean_panic_fn_borrowed(v___x_1043_, v_msg_994_);
lean_dec(v___x_1043_);
lean_inc(v___y_999_);
lean_inc_ref(v___y_998_);
lean_inc(v___y_997_);
lean_inc_ref(v___y_996_);
lean_inc(v___y_995_);
v___x_1045_ = lean_apply_6(v___x_39155__overap_1044_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, lean_box(0));
return v___x_1045_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0___boxed(lean_object* v_msg_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(v_msg_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_spec__10(lean_object* v_as_1060_, size_t v_i_1061_, size_t v_stop_1062_, lean_object* v_b_1063_){
_start:
{
lean_object* v___y_1065_; uint8_t v___x_1069_; 
v___x_1069_ = lean_usize_dec_eq(v_i_1061_, v_stop_1062_);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
v___x_1070_ = lean_array_uget_borrowed(v_as_1060_, v_i_1061_);
v___x_1071_ = l_Lean_Compiler_LCNF_CtorFieldInfo_spillDepth(v___x_1070_);
v___x_1072_ = lean_nat_dec_le(v_b_1063_, v___x_1071_);
if (v___x_1072_ == 0)
{
lean_dec(v___x_1071_);
v___y_1065_ = v_b_1063_;
goto v___jp_1064_;
}
else
{
lean_dec(v_b_1063_);
v___y_1065_ = v___x_1071_;
goto v___jp_1064_;
}
}
else
{
return v_b_1063_;
}
v___jp_1064_:
{
size_t v___x_1066_; size_t v___x_1067_; 
v___x_1066_ = ((size_t)1ULL);
v___x_1067_ = lean_usize_add(v_i_1061_, v___x_1066_);
v_i_1061_ = v___x_1067_;
v_b_1063_ = v___y_1065_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_spec__10___boxed(lean_object* v_as_1073_, lean_object* v_i_1074_, lean_object* v_stop_1075_, lean_object* v_b_1076_){
_start:
{
size_t v_i_boxed_1077_; size_t v_stop_boxed_1078_; lean_object* v_res_1079_; 
v_i_boxed_1077_ = lean_unbox_usize(v_i_1074_);
lean_dec(v_i_1074_);
v_stop_boxed_1078_ = lean_unbox_usize(v_stop_1075_);
lean_dec(v_stop_1075_);
v_res_1079_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_spec__10(v_as_1073_, v_i_boxed_1077_, v_stop_boxed_1078_, v_b_1076_);
lean_dec_ref(v_as_1073_);
return v_res_1079_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg(lean_object* v_upperBound_1081_, lean_object* v_params_1082_, lean_object* v_val_1083_, lean_object* v_discr_1084_, lean_object* v_a_1085_, lean_object* v_b_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v_a_1090_; uint8_t v___x_1094_; 
v___x_1094_ = lean_nat_dec_lt(v_a_1085_, v_upperBound_1081_);
if (v___x_1094_ == 0)
{
lean_object* v___x_1095_; 
lean_dec(v_a_1085_);
lean_dec(v_discr_1084_);
v___x_1095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1095_, 0, v_b_1086_);
return v___x_1095_;
}
else
{
lean_object* v_fieldIdx_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v_fieldIdx_1096_ = lean_ctor_get(v_val_1083_, 2);
v___x_1097_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg___closed__0);
v___x_1098_ = lean_box(0);
v___x_1099_ = lean_array_get_borrowed(v___x_1097_, v_params_1082_, v_a_1085_);
v___x_1100_ = lean_nat_dec_eq(v_a_1085_, v_fieldIdx_1096_);
if (v___x_1100_ == 0)
{
lean_object* v_fvarId_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v_subst_1104_; lean_object* v_jpParamMask_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1114_; 
v_fvarId_1101_ = lean_ctor_get(v___x_1099_, 0);
v___x_1102_ = lean_box(0);
v___x_1103_ = lean_st_ref_take(v___y_1087_);
v_subst_1104_ = lean_ctor_get(v___x_1103_, 0);
v_jpParamMask_1105_ = lean_ctor_get(v___x_1103_, 1);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1107_ = v___x_1103_;
v_isShared_1108_ = v_isSharedCheck_1114_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_jpParamMask_1105_);
lean_inc(v_subst_1104_);
lean_dec(v___x_1103_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1114_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1109_; lean_object* v___x_1111_; 
lean_inc(v_fvarId_1101_);
v___x_1109_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_subst_1104_, v_fvarId_1101_, v___x_1102_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v___x_1109_);
v___x_1111_ = v___x_1107_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1109_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_jpParamMask_1105_);
v___x_1111_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_st_ref_put(v___y_1087_, v___x_1111_);
v_a_1090_ = v___x_1098_;
goto v___jp_1089_;
}
}
}
else
{
lean_object* v_fvarId_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v_subst_1118_; lean_object* v_jpParamMask_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1128_; 
v_fvarId_1115_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_discr_1084_);
v___x_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1116_, 0, v_discr_1084_);
v___x_1117_ = lean_st_ref_take(v___y_1087_);
v_subst_1118_ = lean_ctor_get(v___x_1117_, 0);
v_jpParamMask_1119_ = lean_ctor_get(v___x_1117_, 1);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1121_ = v___x_1117_;
v_isShared_1122_ = v_isSharedCheck_1128_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_jpParamMask_1119_);
lean_inc(v_subst_1118_);
lean_dec(v___x_1117_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1128_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1123_; lean_object* v___x_1125_; 
lean_inc(v_fvarId_1115_);
v___x_1123_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_subst_1118_, v_fvarId_1115_, v___x_1116_);
if (v_isShared_1122_ == 0)
{
lean_ctor_set(v___x_1121_, 0, v___x_1123_);
v___x_1125_ = v___x_1121_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1123_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_jpParamMask_1119_);
v___x_1125_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
lean_object* v___x_1126_; 
v___x_1126_ = lean_st_ref_put(v___y_1087_, v___x_1125_);
v_a_1090_ = v___x_1098_;
goto v___jp_1089_;
}
}
}
}
v___jp_1089_:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = lean_unsigned_to_nat(1u);
v___x_1092_ = lean_nat_add(v_a_1085_, v___x_1091_);
lean_dec(v_a_1085_);
v_a_1085_ = v___x_1092_;
v_b_1086_ = v_a_1090_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg___boxed(lean_object* v_upperBound_1129_, lean_object* v_params_1130_, lean_object* v_val_1131_, lean_object* v_discr_1132_, lean_object* v_a_1133_, lean_object* v_b_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg(v_upperBound_1129_, v_params_1130_, v_val_1131_, v_discr_1132_, v_a_1133_, v_b_1134_, v___y_1135_);
lean_dec(v___y_1135_);
lean_dec_ref(v_val_1131_);
lean_dec_ref(v_params_1130_);
lean_dec(v_upperBound_1129_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__3(size_t v_sz_1138_, size_t v_i_1139_, lean_object* v_bs_1140_){
_start:
{
uint8_t v___x_1141_; 
v___x_1141_ = lean_usize_dec_lt(v_i_1139_, v_sz_1138_);
if (v___x_1141_ == 0)
{
return v_bs_1140_;
}
else
{
lean_object* v_v_1142_; lean_object* v_type_1143_; lean_object* v___x_1144_; lean_object* v_bs_x27_1145_; uint8_t v___y_1147_; uint8_t v___x_1153_; 
v_v_1142_ = lean_array_uget_borrowed(v_bs_1140_, v_i_1139_);
v_type_1143_ = lean_ctor_get(v_v_1142_, 2);
lean_inc_ref(v_type_1143_);
v___x_1144_ = lean_unsigned_to_nat(0u);
v_bs_x27_1145_ = lean_array_uset(v_bs_1140_, v_i_1139_, v___x_1144_);
v___x_1153_ = l_Lean_Expr_isVoid(v_type_1143_);
if (v___x_1153_ == 0)
{
uint8_t v___x_1154_; 
v___x_1154_ = l_Lean_Expr_isErased(v_type_1143_);
lean_dec_ref(v_type_1143_);
if (v___x_1154_ == 0)
{
v___y_1147_ = v___x_1141_;
goto v___jp_1146_;
}
else
{
v___y_1147_ = v___x_1153_;
goto v___jp_1146_;
}
}
else
{
uint8_t v___x_1155_; 
lean_dec_ref(v_type_1143_);
v___x_1155_ = 0;
v___y_1147_ = v___x_1155_;
goto v___jp_1146_;
}
v___jp_1146_:
{
size_t v___x_1148_; size_t v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1148_ = ((size_t)1ULL);
v___x_1149_ = lean_usize_add(v_i_1139_, v___x_1148_);
v___x_1150_ = lean_box(v___y_1147_);
v___x_1151_ = lean_array_uset(v_bs_x27_1145_, v_i_1139_, v___x_1150_);
v_i_1139_ = v___x_1149_;
v_bs_1140_ = v___x_1151_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__3___boxed(lean_object* v_sz_1156_, lean_object* v_i_1157_, lean_object* v_bs_1158_){
_start:
{
size_t v_sz_boxed_1159_; size_t v_i_boxed_1160_; lean_object* v_res_1161_; 
v_sz_boxed_1159_ = lean_unbox_usize(v_sz_1156_);
lean_dec(v_sz_1156_);
v_i_boxed_1160_ = lean_unbox_usize(v_i_1157_);
lean_dec(v_i_1157_);
v_res_1161_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__3(v_sz_boxed_1159_, v_i_boxed_1160_, v_bs_1158_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___redArg(size_t v_sz_1162_, size_t v_i_1163_, lean_object* v_bs_1164_, lean_object* v___y_1165_){
_start:
{
uint8_t v___x_1167_; 
v___x_1167_ = lean_usize_dec_lt(v_i_1163_, v_sz_1162_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1168_, 0, v_bs_1164_);
return v___x_1168_;
}
else
{
lean_object* v_v_1169_; lean_object* v___x_1170_; lean_object* v_bs_x27_1171_; lean_object* v___x_1172_; 
v_v_1169_ = lean_array_uget(v_bs_1164_, v_i_1163_);
v___x_1170_ = lean_unsigned_to_nat(0u);
v_bs_x27_1171_ = lean_array_uset(v_bs_1164_, v_i_1163_, v___x_1170_);
v___x_1172_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___redArg(v_v_1169_, v___y_1165_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; size_t v___x_1174_; size_t v___x_1175_; lean_object* v___x_1176_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v___x_1172_, 1);
v___x_1174_ = ((size_t)1ULL);
v___x_1175_ = lean_usize_add(v_i_1163_, v___x_1174_);
v___x_1176_ = lean_array_uset(v_bs_x27_1171_, v_i_1163_, v_a_1173_);
v_i_1163_ = v___x_1175_;
v_bs_1164_ = v___x_1176_;
goto _start;
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_dec_ref(v_bs_x27_1171_);
v_a_1178_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1172_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1172_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___redArg___boxed(lean_object* v_sz_1186_, lean_object* v_i_1187_, lean_object* v_bs_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
size_t v_sz_boxed_1191_; size_t v_i_boxed_1192_; lean_object* v_res_1193_; 
v_sz_boxed_1191_ = lean_unbox_usize(v_sz_1186_);
lean_dec(v_sz_1186_);
v_i_boxed_1192_ = lean_unbox_usize(v_i_1187_);
lean_dec(v_i_1187_);
v_res_1193_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___redArg(v_sz_boxed_1191_, v_i_boxed_1192_, v_bs_1188_, v___y_1189_);
lean_dec(v___y_1189_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14___redArg(lean_object* v_upperBound_1194_, lean_object* v_fieldInfo_1195_, lean_object* v___x_1196_, lean_object* v_a_1197_, lean_object* v_b_1198_){
_start:
{
lean_object* v_a_1201_; uint8_t v___x_1205_; 
v___x_1205_ = lean_nat_dec_lt(v_a_1197_, v_upperBound_1194_);
if (v___x_1205_ == 0)
{
lean_object* v___x_1206_; 
lean_dec(v_a_1197_);
v___x_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1206_, 0, v_b_1198_);
return v___x_1206_;
}
else
{
lean_object* v___x_1207_; 
v___x_1207_ = lean_array_fget_borrowed(v_fieldInfo_1195_, v_a_1197_);
switch(lean_obj_tag(v___x_1207_))
{
case 1:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = lean_box(0);
v___x_1209_ = lean_array_get_borrowed(v___x_1208_, v___x_1196_, v_a_1197_);
lean_inc(v___x_1209_);
v___x_1210_ = lean_array_push(v_b_1198_, v___x_1209_);
v_a_1201_ = v___x_1210_;
goto v___jp_1200_;
}
case 5:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1211_ = lean_box(0);
v___x_1212_ = lean_array_get_borrowed(v___x_1211_, v___x_1196_, v_a_1197_);
lean_inc(v___x_1212_);
v___x_1213_ = lean_array_push(v_b_1198_, v___x_1212_);
v_a_1201_ = v___x_1213_;
goto v___jp_1200_;
}
default: 
{
v_a_1201_ = v_b_1198_;
goto v___jp_1200_;
}
}
}
v___jp_1200_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = lean_unsigned_to_nat(1u);
v___x_1203_ = lean_nat_add(v_a_1197_, v___x_1202_);
lean_dec(v_a_1197_);
v_a_1197_ = v___x_1203_;
v_b_1198_ = v_a_1201_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14___redArg___boxed(lean_object* v_upperBound_1214_, lean_object* v_fieldInfo_1215_, lean_object* v___x_1216_, lean_object* v_a_1217_, lean_object* v_b_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14___redArg(v_upperBound_1214_, v_fieldInfo_1215_, v___x_1216_, v_a_1217_, v_b_1218_);
lean_dec_ref(v___x_1216_);
lean_dec_ref(v_fieldInfo_1215_);
lean_dec(v_upperBound_1214_);
return v_res_1220_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_1221_; 
v___x_1221_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1221_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__0, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__0_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__0);
v___x_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
return v___x_1223_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1224_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__1, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__1_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__1);
v___x_1225_ = lean_unsigned_to_nat(0u);
v___x_1226_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
lean_ctor_set(v___x_1226_, 1, v___x_1225_);
lean_ctor_set(v___x_1226_, 2, v___x_1225_);
lean_ctor_set(v___x_1226_, 3, v___x_1225_);
lean_ctor_set(v___x_1226_, 4, v___x_1224_);
lean_ctor_set(v___x_1226_, 5, v___x_1224_);
lean_ctor_set(v___x_1226_, 6, v___x_1224_);
lean_ctor_set(v___x_1226_, 7, v___x_1224_);
lean_ctor_set(v___x_1226_, 8, v___x_1224_);
lean_ctor_set(v___x_1226_, 9, v___x_1224_);
lean_ctor_set(v___x_1226_, 10, v___x_1224_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(lean_object* v_msg_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v_ref_1233_; lean_object* v___x_1234_; lean_object* v_env_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v_ref_1233_ = lean_ctor_get(v___y_1230_, 2);
v___x_1234_ = lean_st_ref_get(v___y_1231_);
v_env_1235_ = lean_ctor_get(v___x_1234_, 0);
lean_inc_ref(v_env_1235_);
lean_dec(v___x_1234_);
v___x_1236_ = lean_st_ref_get(v___y_1229_);
v___x_1237_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_1228_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1260_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1240_ = v___x_1237_;
v_isShared_1241_ = v_isSharedCheck_1260_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1237_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1260_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v_lctx_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1258_; 
v_lctx_1242_ = lean_ctor_get(v___x_1236_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1258_ == 0)
{
lean_object* v_unused_1259_; 
v_unused_1259_ = lean_ctor_get(v___x_1236_, 1);
lean_dec(v_unused_1259_);
v___x_1244_ = v___x_1236_;
v_isShared_1245_ = v_isSharedCheck_1258_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_lctx_1242_);
lean_dec(v___x_1236_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1258_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
uint8_t v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1252_; 
v___x_1246_ = lean_unbox(v_a_1238_);
lean_dec(v_a_1238_);
v___x_1247_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_1242_, v___x_1246_);
lean_dec_ref(v_lctx_1242_);
v___x_1248_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1230_);
v___x_1249_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__2, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__2_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___closed__2);
v___x_1250_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1250_, 0, v_env_1235_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
lean_ctor_set(v___x_1250_, 2, v___x_1247_);
lean_ctor_set(v___x_1250_, 3, v___x_1248_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set_tag(v___x_1244_, 3);
lean_ctor_set(v___x_1244_, 1, v_msg_1227_);
lean_ctor_set(v___x_1244_, 0, v___x_1250_);
v___x_1252_ = v___x_1244_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v___x_1250_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v_msg_1227_);
v___x_1252_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
lean_object* v___x_1253_; lean_object* v___x_1255_; 
lean_inc(v_ref_1233_);
v___x_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1253_, 0, v_ref_1233_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 1);
lean_ctor_set(v___x_1240_, 0, v___x_1253_);
v___x_1255_ = v___x_1240_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1253_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
lean_dec(v___x_1236_);
lean_dec_ref(v_env_1235_);
lean_dec_ref(v_msg_1227_);
v_a_1261_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1237_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1237_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg___boxed(lean_object* v_msg_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(v_msg_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6___redArg(lean_object* v_as_1276_, size_t v_i_1277_, size_t v_stop_1278_, lean_object* v_b_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v_a_1283_; uint8_t v___x_1287_; 
v___x_1287_ = lean_usize_dec_eq(v_i_1277_, v_stop_1278_);
if (v___x_1287_ == 0)
{
lean_object* v___x_1288_; lean_object* v_snd_1289_; uint8_t v___x_1290_; 
v___x_1288_ = lean_array_uget_borrowed(v_as_1276_, v_i_1277_);
v_snd_1289_ = lean_ctor_get(v___x_1288_, 1);
v___x_1290_ = lean_unbox(v_snd_1289_);
if (v___x_1290_ == 0)
{
v_a_1283_ = v_b_1279_;
goto v___jp_1282_;
}
else
{
lean_object* v_fst_1291_; lean_object* v___x_1292_; 
v_fst_1291_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_fst_1291_);
v___x_1292_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Arg_toImpure___redArg(v_fst_1291_, v___y_1280_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v___x_1294_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
v___x_1294_ = lean_array_push(v_b_1279_, v_a_1293_);
v_a_1283_ = v___x_1294_;
goto v___jp_1282_;
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_dec_ref(v_b_1279_);
v_a_1295_ = lean_ctor_get(v___x_1292_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1292_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1292_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
else
{
lean_object* v___x_1303_; 
v___x_1303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1303_, 0, v_b_1279_);
return v___x_1303_;
}
v___jp_1282_:
{
size_t v___x_1284_; size_t v___x_1285_; 
v___x_1284_ = ((size_t)1ULL);
v___x_1285_ = lean_usize_add(v_i_1277_, v___x_1284_);
v_i_1277_ = v___x_1285_;
v_b_1279_ = v_a_1283_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6___redArg___boxed(lean_object* v_as_1304_, lean_object* v_i_1305_, lean_object* v_stop_1306_, lean_object* v_b_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_){
_start:
{
size_t v_i_boxed_1310_; size_t v_stop_boxed_1311_; lean_object* v_res_1312_; 
v_i_boxed_1310_ = lean_unbox_usize(v_i_1305_);
lean_dec(v_i_1305_);
v_stop_boxed_1311_ = lean_unbox_usize(v_stop_1306_);
lean_dec(v_stop_1306_);
v_res_1312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6___redArg(v_as_1304_, v_i_boxed_1310_, v_stop_boxed_1311_, v_b_1307_, v___y_1308_);
lean_dec(v___y_1308_);
lean_dec_ref(v_as_1304_);
return v_res_1312_;
}
}
static lean_object* _init_l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12_spec__17___closed__0(void){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = l_Array_instInhabited___redArg();
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12_spec__17(lean_object* v_msg_1314_){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_obj_once(&l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12_spec__17___closed__0, &l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12_spec__17___closed__0_once, _init_l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12_spec__17___closed__0);
v___x_1316_ = lean_panic_fn_borrowed(v___x_1315_, v_msg_1314_);
return v___x_1316_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__3(void){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1320_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__2));
v___x_1321_ = lean_unsigned_to_nat(11u);
v___x_1322_ = lean_unsigned_to_nat(163u);
v___x_1323_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__1));
v___x_1324_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__0));
v___x_1325_ = l_mkPanicMessageWithDecl(v___x_1324_, v___x_1323_, v___x_1322_, v___x_1321_, v___x_1320_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12(lean_object* v_a_1326_, lean_object* v_x_1327_){
_start:
{
if (lean_obj_tag(v_x_1327_) == 0)
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___closed__3);
v___x_1329_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12_spec__17(v___x_1328_);
return v___x_1329_;
}
else
{
lean_object* v_key_1330_; lean_object* v_value_1331_; lean_object* v_tail_1332_; uint8_t v___x_1333_; 
v_key_1330_ = lean_ctor_get(v_x_1327_, 0);
v_value_1331_ = lean_ctor_get(v_x_1327_, 1);
v_tail_1332_ = lean_ctor_get(v_x_1327_, 2);
v___x_1333_ = l_Lean_instBEqFVarId_beq(v_key_1330_, v_a_1326_);
if (v___x_1333_ == 0)
{
v_x_1327_ = v_tail_1332_;
goto _start;
}
else
{
lean_inc(v_value_1331_);
return v_value_1331_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12___boxed(lean_object* v_a_1335_, lean_object* v_x_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12(v_a_1335_, v_x_1336_);
lean_dec(v_x_1336_);
lean_dec(v_a_1335_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5(lean_object* v_m_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v_buckets_1340_; lean_object* v___x_1341_; uint64_t v___x_1342_; uint64_t v___x_1343_; uint64_t v___x_1344_; uint64_t v_fold_1345_; uint64_t v___x_1346_; uint64_t v___x_1347_; uint64_t v___x_1348_; size_t v___x_1349_; size_t v___x_1350_; size_t v___x_1351_; size_t v___x_1352_; size_t v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v_buckets_1340_ = lean_ctor_get(v_m_1338_, 1);
v___x_1341_ = lean_array_get_size(v_buckets_1340_);
v___x_1342_ = l_Lean_instHashableFVarId_hash(v_a_1339_);
v___x_1343_ = 32ULL;
v___x_1344_ = lean_uint64_shift_right(v___x_1342_, v___x_1343_);
v_fold_1345_ = lean_uint64_xor(v___x_1342_, v___x_1344_);
v___x_1346_ = 16ULL;
v___x_1347_ = lean_uint64_shift_right(v_fold_1345_, v___x_1346_);
v___x_1348_ = lean_uint64_xor(v_fold_1345_, v___x_1347_);
v___x_1349_ = lean_uint64_to_usize(v___x_1348_);
v___x_1350_ = lean_usize_of_nat(v___x_1341_);
v___x_1351_ = ((size_t)1ULL);
v___x_1352_ = lean_usize_sub(v___x_1350_, v___x_1351_);
v___x_1353_ = lean_usize_land(v___x_1349_, v___x_1352_);
v___x_1354_ = lean_array_uget_borrowed(v_buckets_1340_, v___x_1353_);
v___x_1355_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5_spec__12(v_a_1339_, v___x_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5___boxed(lean_object* v_m_1356_, lean_object* v_a_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5(v_m_1356_, v_a_1357_);
lean_dec(v_a_1357_);
lean_dec_ref(v_m_1356_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___redArg(size_t v_sz_1359_, size_t v_i_1360_, lean_object* v_bs_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_){
_start:
{
uint8_t v___x_1367_; 
v___x_1367_ = lean_usize_dec_lt(v_i_1360_, v_sz_1359_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1368_; 
v___x_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1368_, 0, v_bs_1361_);
return v___x_1368_;
}
else
{
lean_object* v_v_1369_; lean_object* v___x_1370_; lean_object* v_bs_x27_1371_; lean_object* v___x_1372_; 
v_v_1369_ = lean_array_uget(v_bs_1361_, v_i_1360_);
v___x_1370_ = lean_unsigned_to_nat(0u);
v_bs_x27_1371_ = lean_array_uset(v_bs_1361_, v_i_1360_, v___x_1370_);
v___x_1372_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure___redArg(v_v_1369_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; size_t v___x_1374_; size_t v___x_1375_; lean_object* v___x_1376_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_a_1373_);
lean_dec_ref_known(v___x_1372_, 1);
v___x_1374_ = ((size_t)1ULL);
v___x_1375_ = lean_usize_add(v_i_1360_, v___x_1374_);
v___x_1376_ = lean_array_uset(v_bs_x27_1371_, v_i_1360_, v_a_1373_);
v_i_1360_ = v___x_1375_;
v_bs_1361_ = v___x_1376_;
goto _start;
}
else
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1385_; 
lean_dec_ref(v_bs_x27_1371_);
v_a_1378_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1380_ = v___x_1372_;
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1372_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1383_; 
if (v_isShared_1381_ == 0)
{
v___x_1383_ = v___x_1380_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v_a_1378_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___redArg___boxed(lean_object* v_sz_1386_, lean_object* v_i_1387_, lean_object* v_bs_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
size_t v_sz_boxed_1394_; size_t v_i_boxed_1395_; lean_object* v_res_1396_; 
v_sz_boxed_1394_ = lean_unbox_usize(v_sz_1386_);
lean_dec(v_sz_1386_);
v_i_boxed_1395_ = lean_unbox_usize(v_i_1387_);
lean_dec(v_i_1387_);
v_res_1396_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___redArg(v_sz_boxed_1394_, v_i_boxed_1395_, v_bs_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec(v___y_1389_);
return v_res_1396_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__2(void){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1399_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__1));
v___x_1400_ = lean_unsigned_to_nat(12u);
v___x_1401_ = lean_unsigned_to_nat(148u);
v___x_1402_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__0));
v___x_1403_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0));
v___x_1404_ = l_mkPanicMessageWithDecl(v___x_1403_, v___x_1402_, v___x_1401_, v___x_1400_, v___x_1399_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet(lean_object* v_k_1405_, lean_object* v_decl_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_){
_start:
{
lean_object* v___x_1413_; lean_object* v_lctx_1414_; lean_object* v_nextIdx_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1435_; 
v___x_1413_ = lean_st_ref_take(v_a_1409_);
v_lctx_1414_ = lean_ctor_get(v___x_1413_, 0);
v_nextIdx_1415_ = lean_ctor_get(v___x_1413_, 1);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1417_ = v___x_1413_;
v_isShared_1418_ = v_isSharedCheck_1435_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_nextIdx_1415_);
lean_inc(v_lctx_1414_);
lean_dec(v___x_1413_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1435_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
uint8_t v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1422_; 
v___x_1419_ = 1;
lean_inc_ref(v_decl_1406_);
v___x_1420_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1419_, v_lctx_1414_, v_decl_1406_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1420_);
v___x_1422_ = v___x_1417_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v_nextIdx_1415_);
v___x_1422_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = lean_st_ref_put(v_a_1409_, v___x_1422_);
v___x_1424_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_1405_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1433_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1433_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1433_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1429_; lean_object* v___x_1431_; 
v___x_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1429_, 0, v_decl_1406_);
lean_ctor_set(v___x_1429_, 1, v_a_1425_);
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1429_);
v___x_1431_ = v___x_1427_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v___x_1429_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
else
{
lean_dec_ref(v_decl_1406_);
return v___x_1424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueErased(lean_object* v_k_1436_, lean_object* v_fvarId_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v_subst_1446_; lean_object* v_jpParamMask_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1457_; 
v___x_1444_ = lean_box(0);
v___x_1445_ = lean_st_ref_take(v_a_1438_);
v_subst_1446_ = lean_ctor_get(v___x_1445_, 0);
v_jpParamMask_1447_ = lean_ctor_get(v___x_1445_, 1);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1449_ = v___x_1445_;
v_isShared_1450_ = v_isSharedCheck_1457_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_jpParamMask_1447_);
lean_inc(v_subst_1446_);
lean_dec(v___x_1445_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1457_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1451_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_subst_1446_, v_fvarId_1437_, v___x_1444_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1451_);
v___x_1453_ = v___x_1449_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1451_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v_jpParamMask_1447_);
v___x_1453_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = lean_st_ref_put(v_a_1438_, v___x_1453_);
v___x_1455_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_1436_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_);
return v___x_1455_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication(lean_object* v_decl_1459_, lean_object* v_k_1460_, lean_object* v_name_1461_, lean_object* v_numParams_1462_, lean_object* v_args_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_){
_start:
{
lean_object* v_fvarId_1470_; lean_object* v_binderName_1471_; lean_object* v_type_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1534_; 
v_fvarId_1470_ = lean_ctor_get(v_decl_1459_, 0);
v_binderName_1471_ = lean_ctor_get(v_decl_1459_, 1);
v_type_1472_ = lean_ctor_get(v_decl_1459_, 2);
v_isSharedCheck_1534_ = !lean_is_exclusive(v_decl_1459_);
if (v_isSharedCheck_1534_ == 0)
{
lean_object* v_unused_1535_; 
v_unused_1535_ = lean_ctor_get(v_decl_1459_, 3);
lean_dec(v_unused_1535_);
v___x_1474_ = v_decl_1459_;
v_isShared_1475_ = v_isSharedCheck_1534_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_type_1472_);
lean_inc(v_binderName_1471_);
lean_inc(v_fvarId_1470_);
lean_dec(v_decl_1459_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1534_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; 
v___x_1476_ = l_Lean_Compiler_LCNF_toImpureType(v_type_1472_, v_a_1467_, v_a_1468_);
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; uint8_t v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1477_);
lean_dec_ref_known(v___x_1476_, 1);
v___x_1478_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(v_a_1477_);
lean_dec(v_a_1477_);
v___x_1479_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1462_);
v___x_1480_ = l_Array_extract___redArg(v_args_1463_, v___x_1479_, v_numParams_1462_);
v___x_1481_ = lean_array_get_size(v_args_1463_);
v___x_1482_ = l_Array_extract___redArg(v_args_1463_, v_numParams_1462_, v___x_1481_);
v___x_1483_ = 1;
v___x_1484_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication___closed__0));
lean_inc(v_binderName_1471_);
v___x_1485_ = l_Lean_Name_str___override(v_binderName_1471_, v___x_1484_);
v___x_1486_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4);
v___x_1487_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1487_, 0, v_name_1461_);
lean_ctor_set(v___x_1487_, 1, v___x_1480_);
v___x_1488_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_1483_, v___x_1485_, v___x_1486_, v___x_1487_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; lean_object* v_fvarId_1490_; lean_object* v___x_1491_; lean_object* v___x_1493_; 
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_a_1489_);
lean_dec_ref_known(v___x_1488_, 1);
v_fvarId_1490_ = lean_ctor_get(v_a_1489_, 0);
lean_inc(v_fvarId_1490_);
v___x_1491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1491_, 0, v_fvarId_1490_);
lean_ctor_set(v___x_1491_, 1, v___x_1482_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 3, v___x_1491_);
lean_ctor_set(v___x_1474_, 2, v___x_1478_);
v___x_1493_ = v___x_1474_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_fvarId_1470_);
lean_ctor_set(v_reuseFailAlloc_1517_, 1, v_binderName_1471_);
lean_ctor_set(v_reuseFailAlloc_1517_, 2, v___x_1478_);
lean_ctor_set(v_reuseFailAlloc_1517_, 3, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1494_; lean_object* v_lctx_1495_; lean_object* v_nextIdx_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1516_; 
v___x_1494_ = lean_st_ref_take(v_a_1466_);
v_lctx_1495_ = lean_ctor_get(v___x_1494_, 0);
v_nextIdx_1496_ = lean_ctor_get(v___x_1494_, 1);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1498_ = v___x_1494_;
v_isShared_1499_ = v_isSharedCheck_1516_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_nextIdx_1496_);
lean_inc(v_lctx_1495_);
lean_dec(v___x_1494_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1516_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1500_; lean_object* v___x_1502_; 
lean_inc_ref(v___x_1493_);
v___x_1500_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1483_, v_lctx_1495_, v___x_1493_);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 0, v___x_1500_);
v___x_1502_ = v___x_1498_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v_nextIdx_1496_);
v___x_1502_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1503_ = lean_st_ref_put(v_a_1466_, v___x_1502_);
v___x_1504_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_1460_, v_a_1464_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1514_; 
v_a_1505_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1507_ = v___x_1504_;
v_isShared_1508_ = v_isSharedCheck_1514_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1504_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1514_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1512_; 
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1493_);
lean_ctor_set(v___x_1509_, 1, v_a_1505_);
v___x_1510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1510_, 0, v_a_1489_);
lean_ctor_set(v___x_1510_, 1, v___x_1509_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v___x_1510_);
v___x_1512_ = v___x_1507_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
else
{
lean_dec_ref(v___x_1493_);
lean_dec(v_a_1489_);
return v___x_1504_;
}
}
}
}
}
else
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
lean_dec_ref(v___x_1482_);
lean_dec_ref(v___x_1478_);
lean_del_object(v___x_1474_);
lean_dec(v_binderName_1471_);
lean_dec(v_fvarId_1470_);
lean_dec_ref(v_k_1460_);
v_a_1518_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___x_1488_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v___x_1488_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
else
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1533_; 
lean_del_object(v___x_1474_);
lean_dec(v_binderName_1471_);
lean_dec(v_fvarId_1470_);
lean_dec(v_numParams_1462_);
lean_dec(v_name_1461_);
lean_dec_ref(v_k_1460_);
v_a_1526_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1528_ = v___x_1476_;
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1476_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_a_1526_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkFap(lean_object* v_decl_1536_, lean_object* v_k_1537_, lean_object* v_name_1538_, lean_object* v_args_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_){
_start:
{
lean_object* v_fvarId_1546_; lean_object* v_binderName_1547_; lean_object* v_type_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1567_; 
v_fvarId_1546_ = lean_ctor_get(v_decl_1536_, 0);
v_binderName_1547_ = lean_ctor_get(v_decl_1536_, 1);
v_type_1548_ = lean_ctor_get(v_decl_1536_, 2);
v_isSharedCheck_1567_ = !lean_is_exclusive(v_decl_1536_);
if (v_isSharedCheck_1567_ == 0)
{
lean_object* v_unused_1568_; 
v_unused_1568_ = lean_ctor_get(v_decl_1536_, 3);
lean_dec(v_unused_1568_);
v___x_1550_ = v_decl_1536_;
v_isShared_1551_ = v_isSharedCheck_1567_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_type_1548_);
lean_inc(v_binderName_1547_);
lean_inc(v_fvarId_1546_);
lean_dec(v_decl_1536_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1567_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Lean_Compiler_LCNF_toImpureType(v_type_1548_, v_a_1543_, v_a_1544_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; lean_object* v___x_1554_; lean_object* v___x_1556_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1552_, 1);
v___x_1554_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1554_, 0, v_name_1538_);
lean_ctor_set(v___x_1554_, 1, v_args_1539_);
if (v_isShared_1551_ == 0)
{
lean_ctor_set(v___x_1550_, 3, v___x_1554_);
lean_ctor_set(v___x_1550_, 2, v_a_1553_);
v___x_1556_ = v___x_1550_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_fvarId_1546_);
lean_ctor_set(v_reuseFailAlloc_1558_, 1, v_binderName_1547_);
lean_ctor_set(v_reuseFailAlloc_1558_, 2, v_a_1553_);
lean_ctor_set(v_reuseFailAlloc_1558_, 3, v___x_1554_);
v___x_1556_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
lean_object* v___x_1557_; 
v___x_1557_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet(v_k_1537_, v___x_1556_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_);
return v___x_1557_;
}
}
else
{
lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1566_; 
lean_del_object(v___x_1550_);
lean_dec(v_binderName_1547_);
lean_dec(v_fvarId_1546_);
lean_dec_ref(v_args_1539_);
lean_dec(v_name_1538_);
lean_dec_ref(v_k_1537_);
v_a_1559_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1561_ = v___x_1552_;
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v___x_1552_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1564_; 
if (v_isShared_1562_ == 0)
{
v___x_1564_ = v___x_1561_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_a_1559_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkPap(lean_object* v_decl_1569_, lean_object* v_k_1570_, lean_object* v_name_1571_, lean_object* v_args_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_){
_start:
{
lean_object* v_fvarId_1579_; lean_object* v_binderName_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1590_; 
v_fvarId_1579_ = lean_ctor_get(v_decl_1569_, 0);
v_binderName_1580_ = lean_ctor_get(v_decl_1569_, 1);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_decl_1569_);
if (v_isSharedCheck_1590_ == 0)
{
lean_object* v_unused_1591_; lean_object* v_unused_1592_; 
v_unused_1591_ = lean_ctor_get(v_decl_1569_, 3);
lean_dec(v_unused_1591_);
v_unused_1592_ = lean_ctor_get(v_decl_1569_, 2);
lean_dec(v_unused_1592_);
v___x_1582_ = v_decl_1569_;
v_isShared_1583_ = v_isSharedCheck_1590_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_binderName_1580_);
lean_inc(v_fvarId_1579_);
lean_dec(v_decl_1569_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1590_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1587_; 
v___x_1584_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs_spec__0___redArg___closed__4);
v___x_1585_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_1585_, 0, v_name_1571_);
lean_ctor_set(v___x_1585_, 1, v_args_1572_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 3, v___x_1585_);
lean_ctor_set(v___x_1582_, 2, v___x_1584_);
v___x_1587_ = v___x_1582_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_fvarId_1579_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_binderName_1580_);
lean_ctor_set(v_reuseFailAlloc_1589_, 2, v___x_1584_);
lean_ctor_set(v_reuseFailAlloc_1589_, 3, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1588_; 
v___x_1588_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet(v_k_1570_, v___x_1587_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_);
return v___x_1588_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkApplication(lean_object* v_decl_1593_, lean_object* v_k_1594_, lean_object* v_name_1595_, lean_object* v_numParams_1596_, lean_object* v_args_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v_numArgs_1604_; uint8_t v___x_1605_; 
v_numArgs_1604_ = lean_array_get_size(v_args_1597_);
v___x_1605_ = lean_nat_dec_lt(v_numArgs_1604_, v_numParams_1596_);
if (v___x_1605_ == 0)
{
uint8_t v___x_1606_; 
v___x_1606_ = lean_nat_dec_eq(v_numArgs_1604_, v_numParams_1596_);
if (v___x_1606_ == 0)
{
lean_object* v___x_1607_; 
v___x_1607_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication(v_decl_1593_, v_k_1594_, v_name_1595_, v_numParams_1596_, v_args_1597_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
lean_dec_ref(v_args_1597_);
return v___x_1607_;
}
else
{
lean_object* v___x_1608_; 
lean_dec(v_numParams_1596_);
v___x_1608_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkFap(v_decl_1593_, v_k_1594_, v_name_1595_, v_args_1597_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1608_;
}
}
else
{
lean_object* v___x_1609_; 
lean_dec(v_numParams_1596_);
v___x_1609_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkPap(v_decl_1593_, v_k_1594_, v_name_1595_, v_args_1597_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1609_;
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__4(void){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1611_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__3));
v___x_1612_ = lean_unsigned_to_nat(14u);
v___x_1613_ = lean_unsigned_to_nat(219u);
v___x_1614_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__0));
v___x_1615_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0));
v___x_1616_ = l_mkPanicMessageWithDecl(v___x_1615_, v___x_1614_, v___x_1613_, v___x_1612_, v___x_1611_);
return v___x_1616_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__9(void){
_start:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1623_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__5, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__5);
v___x_1624_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet(lean_object* v_decl_1633_, lean_object* v_k_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_){
_start:
{
lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v_fvarId_1649_; lean_object* v_binderName_1650_; lean_object* v_type_1651_; lean_object* v_value_1652_; lean_object* v___x_1653_; uint8_t v___x_1654_; uint8_t v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v_subst_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_2140_; 
v_fvarId_1649_ = lean_ctor_get(v_decl_1633_, 0);
v_binderName_1650_ = lean_ctor_get(v_decl_1633_, 1);
v_type_1651_ = lean_ctor_get(v_decl_1633_, 2);
v_value_1652_ = lean_ctor_get(v_decl_1633_, 3);
v___x_1653_ = lean_box(0);
v___x_1654_ = 0;
v___x_1655_ = 1;
v___x_1656_ = lean_box(0);
v___x_1657_ = lean_st_ref_get(v_a_1635_);
v_subst_1658_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_2140_ == 0)
{
lean_object* v_unused_2141_; 
v_unused_2141_ = lean_ctor_get(v___x_1657_, 1);
lean_dec(v_unused_2141_);
v___x_1660_ = v___x_1657_;
v_isShared_1661_ = v_isSharedCheck_2140_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_subst_1658_);
lean_dec(v___x_1657_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_2140_;
goto v_resetjp_1659_;
}
v___jp_1641_:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1647_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__2, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__2);
v___x_1648_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(v___x_1647_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
return v___x_1648_;
}
v_resetjp_1659_:
{
lean_object* v___x_1662_; 
lean_inc(v_value_1652_);
v___x_1662_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v___x_1654_, v_subst_1658_, v_value_1652_, v___x_1655_);
lean_dec_ref(v_subst_1658_);
switch(lean_obj_tag(v___x_1662_))
{
case 0:
{
lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1679_; 
lean_inc(v_binderName_1650_);
lean_inc(v_fvarId_1649_);
lean_del_object(v___x_1660_);
v_isSharedCheck_1679_ = !lean_is_exclusive(v_decl_1633_);
if (v_isSharedCheck_1679_ == 0)
{
lean_object* v_unused_1680_; lean_object* v_unused_1681_; lean_object* v_unused_1682_; lean_object* v_unused_1683_; 
v_unused_1680_ = lean_ctor_get(v_decl_1633_, 3);
lean_dec(v_unused_1680_);
v_unused_1681_ = lean_ctor_get(v_decl_1633_, 2);
lean_dec(v_unused_1681_);
v_unused_1682_ = lean_ctor_get(v_decl_1633_, 1);
lean_dec(v_unused_1682_);
v_unused_1683_ = lean_ctor_get(v_decl_1633_, 0);
lean_dec(v_unused_1683_);
v___x_1664_ = v_decl_1633_;
v_isShared_1665_ = v_isSharedCheck_1679_;
goto v_resetjp_1663_;
}
else
{
lean_dec(v_decl_1633_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1679_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v_value_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1678_; 
v_value_1666_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1668_ = v___x_1662_;
v_isShared_1669_ = v_isSharedCheck_1678_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_value_1666_);
lean_dec(v___x_1662_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1678_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1670_; lean_object* v___x_1672_; 
v___x_1670_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType(v_value_1666_);
if (v_isShared_1669_ == 0)
{
v___x_1672_ = v___x_1668_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_value_1666_);
v___x_1672_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
lean_object* v___x_1674_; 
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 3, v___x_1672_);
lean_ctor_set(v___x_1664_, 2, v___x_1670_);
v___x_1674_ = v___x_1664_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_fvarId_1649_);
lean_ctor_set(v_reuseFailAlloc_1676_, 1, v_binderName_1650_);
lean_ctor_set(v_reuseFailAlloc_1676_, 2, v___x_1670_);
lean_ctor_set(v_reuseFailAlloc_1676_, 3, v___x_1672_);
v___x_1674_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
lean_object* v___x_1675_; 
v___x_1675_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet(v_k_1634_, v___x_1674_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1675_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1684_; 
lean_inc(v_fvarId_1649_);
lean_del_object(v___x_1660_);
lean_dec_ref(v_decl_1633_);
v___x_1684_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueErased(v_k_1634_, v_fvarId_1649_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1684_;
}
case 2:
{
lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1804_; 
lean_inc(v_binderName_1650_);
lean_inc(v_fvarId_1649_);
lean_del_object(v___x_1660_);
v_isSharedCheck_1804_ = !lean_is_exclusive(v_decl_1633_);
if (v_isSharedCheck_1804_ == 0)
{
lean_object* v_unused_1805_; lean_object* v_unused_1806_; lean_object* v_unused_1807_; lean_object* v_unused_1808_; 
v_unused_1805_ = lean_ctor_get(v_decl_1633_, 3);
lean_dec(v_unused_1805_);
v_unused_1806_ = lean_ctor_get(v_decl_1633_, 2);
lean_dec(v_unused_1806_);
v_unused_1807_ = lean_ctor_get(v_decl_1633_, 1);
lean_dec(v_unused_1807_);
v_unused_1808_ = lean_ctor_get(v_decl_1633_, 0);
lean_dec(v_unused_1808_);
v___x_1686_ = v_decl_1633_;
v_isShared_1687_ = v_isSharedCheck_1804_;
goto v_resetjp_1685_;
}
else
{
lean_dec(v_decl_1633_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1804_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v_typeName_1688_; lean_object* v_idx_1689_; lean_object* v_struct_1690_; lean_object* v___x_1691_; 
v_typeName_1688_ = lean_ctor_get(v___x_1662_, 0);
lean_inc_n(v_typeName_1688_, 2);
v_idx_1689_ = lean_ctor_get(v___x_1662_, 1);
lean_inc(v_idx_1689_);
v_struct_1690_ = lean_ctor_get(v___x_1662_, 2);
lean_inc(v_struct_1690_);
lean_dec_ref_known(v___x_1662_, 3);
v___x_1691_ = l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(v_typeName_1688_, v_a_1638_, v_a_1639_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1691_, 1);
if (lean_obj_tag(v_a_1692_) == 1)
{
lean_object* v_val_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1728_; 
lean_dec(v_typeName_1688_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
v_val_1693_ = lean_ctor_get(v_a_1692_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v_a_1692_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1695_ = v_a_1692_;
v_isShared_1696_ = v_isSharedCheck_1728_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_val_1693_);
lean_dec(v_a_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1728_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v_fieldIdx_1697_; uint8_t v___x_1698_; 
v_fieldIdx_1697_ = lean_ctor_get(v_val_1693_, 2);
lean_inc(v_fieldIdx_1697_);
lean_dec(v_val_1693_);
v___x_1698_ = lean_nat_dec_eq(v_fieldIdx_1697_, v_idx_1689_);
lean_dec(v_idx_1689_);
lean_dec(v_fieldIdx_1697_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; lean_object* v_subst_1700_; lean_object* v_jpParamMask_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1711_; 
lean_del_object(v___x_1695_);
lean_dec(v_struct_1690_);
v___x_1699_ = lean_st_ref_take(v_a_1635_);
v_subst_1700_ = lean_ctor_get(v___x_1699_, 0);
v_jpParamMask_1701_ = lean_ctor_get(v___x_1699_, 1);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1703_ = v___x_1699_;
v_isShared_1704_ = v_isSharedCheck_1711_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_jpParamMask_1701_);
lean_inc(v_subst_1700_);
lean_dec(v___x_1699_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1711_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1705_; lean_object* v___x_1707_; 
v___x_1705_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_subst_1700_, v_fvarId_1649_, v___x_1656_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 0, v___x_1705_);
v___x_1707_ = v___x_1703_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1705_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v_jpParamMask_1701_);
v___x_1707_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = lean_st_ref_put(v_a_1635_, v___x_1707_);
v___x_1709_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1709_;
}
}
}
else
{
lean_object* v___x_1713_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 0, v_struct_1690_);
v___x_1713_ = v___x_1695_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_struct_1690_);
v___x_1713_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
lean_object* v___x_1714_; lean_object* v_subst_1715_; lean_object* v_jpParamMask_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1726_; 
v___x_1714_ = lean_st_ref_take(v_a_1635_);
v_subst_1715_ = lean_ctor_get(v___x_1714_, 0);
v_jpParamMask_1716_ = lean_ctor_get(v___x_1714_, 1);
v_isSharedCheck_1726_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1718_ = v___x_1714_;
v_isShared_1719_ = v_isSharedCheck_1726_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_jpParamMask_1716_);
lean_inc(v_subst_1715_);
lean_dec(v___x_1714_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1726_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1720_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_subst_1715_, v_fvarId_1649_, v___x_1713_);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v___x_1720_);
v___x_1722_ = v___x_1718_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1720_);
lean_ctor_set(v_reuseFailAlloc_1725_, 1, v_jpParamMask_1716_);
v___x_1722_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1723_ = lean_st_ref_put(v_a_1635_, v___x_1722_);
v___x_1724_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1724_;
}
}
}
}
}
}
else
{
lean_object* v___x_1729_; lean_object* v_subst_1730_; lean_object* v___x_1731_; 
lean_dec(v_a_1692_);
v___x_1729_ = lean_st_ref_get(v_a_1635_);
v_subst_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc_ref(v_subst_1730_);
lean_dec(v___x_1729_);
v___x_1731_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_1730_, v_struct_1690_, v___x_1655_);
lean_dec_ref(v_subst_1730_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v_fvarId_1732_; lean_object* v___x_1733_; lean_object* v_env_1734_; uint8_t v___x_1735_; lean_object* v___x_1736_; 
v_fvarId_1732_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_fvarId_1732_);
lean_dec_ref_known(v___x_1731_, 1);
v___x_1733_ = lean_st_ref_get(v_a_1639_);
v_env_1734_ = lean_ctor_get(v___x_1733_, 0);
lean_inc_ref(v_env_1734_);
lean_dec(v___x_1733_);
v___x_1735_ = 0;
v___x_1736_ = l_Lean_Environment_find_x3f(v_env_1734_, v_typeName_1688_, v___x_1735_);
if (lean_obj_tag(v___x_1736_) == 1)
{
lean_object* v_val_1737_; 
v_val_1737_ = lean_ctor_get(v___x_1736_, 0);
lean_inc(v_val_1737_);
lean_dec_ref_known(v___x_1736_, 1);
if (lean_obj_tag(v_val_1737_) == 5)
{
lean_object* v_val_1738_; lean_object* v_ctors_1739_; 
v_val_1738_ = lean_ctor_get(v_val_1737_, 0);
lean_inc_ref(v_val_1738_);
lean_dec_ref_known(v_val_1737_, 1);
v_ctors_1739_ = lean_ctor_get(v_val_1738_, 4);
lean_inc(v_ctors_1739_);
lean_dec_ref(v_val_1738_);
if (lean_obj_tag(v_ctors_1739_) == 1)
{
lean_object* v_tail_1740_; 
v_tail_1740_ = lean_ctor_get(v_ctors_1739_, 1);
if (lean_obj_tag(v_tail_1740_) == 0)
{
lean_object* v_head_1741_; lean_object* v___x_1742_; 
v_head_1741_ = lean_ctor_get(v_ctors_1739_, 0);
lean_inc(v_head_1741_);
lean_dec_ref_known(v_ctors_1739_, 2);
v___x_1742_ = l_Lean_Compiler_LCNF_getCtorLayout(v_head_1741_, v_a_1638_, v_a_1639_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v_ctorInfo_1744_; lean_object* v_fieldInfo_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1742_, 1);
v_ctorInfo_1744_ = lean_ctor_get(v_a_1743_, 0);
lean_inc_ref(v_ctorInfo_1744_);
v_fieldInfo_1745_ = lean_ctor_get(v_a_1743_, 1);
lean_inc_ref(v_fieldInfo_1745_);
lean_dec(v_a_1743_);
v___x_1746_ = lean_array_get(v___x_1653_, v_fieldInfo_1745_, v_idx_1689_);
lean_dec(v_idx_1689_);
lean_dec_ref(v_fieldInfo_1745_);
v___x_1747_ = l_Lean_Compiler_LCNF_CtorFieldInfo_spillDepth(v___x_1746_);
lean_inc(v_fvarId_1732_);
v___x_1748_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs(v_fvarId_1732_, v___x_1747_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
lean_dec(v___x_1747_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; lean_object* v_fst_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj(v_fvarId_1732_, v_a_1749_, v_ctorInfo_1744_, v___x_1746_);
lean_dec_ref(v_ctorInfo_1744_);
v_fst_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_fst_1751_);
if (lean_obj_tag(v_fst_1751_) == 1)
{
lean_object* v___x_1752_; 
lean_dec_ref(v___x_1750_);
lean_dec(v_a_1749_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
v___x_1752_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueErased(v_k_1634_, v_fvarId_1649_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1752_;
}
else
{
lean_object* v_snd_1753_; lean_object* v___x_1755_; 
v_snd_1753_ = lean_ctor_get(v___x_1750_, 1);
lean_inc(v_snd_1753_);
lean_dec_ref(v___x_1750_);
if (v_isShared_1687_ == 0)
{
lean_ctor_set(v___x_1686_, 3, v_fst_1751_);
lean_ctor_set(v___x_1686_, 2, v_snd_1753_);
v___x_1755_ = v___x_1686_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_fvarId_1649_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v_binderName_1650_);
lean_ctor_set(v_reuseFailAlloc_1766_, 2, v_snd_1753_);
lean_ctor_set(v_reuseFailAlloc_1766_, 3, v_fst_1751_);
v___x_1755_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
lean_object* v___x_1756_; 
v___x_1756_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet(v_k_1634_, v___x_1755_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1765_; 
v_a_1757_ = lean_ctor_get(v___x_1756_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1759_ = v___x_1756_;
v_isShared_1760_ = v_isSharedCheck_1765_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1756_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1765_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v___x_1763_; 
v___x_1761_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls(v_a_1749_, v_a_1757_);
lean_dec(v_a_1749_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v___x_1761_);
v___x_1763_ = v___x_1759_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1761_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
else
{
lean_dec(v_a_1749_);
return v___x_1756_;
}
}
}
}
else
{
lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1774_; 
lean_dec(v___x_1746_);
lean_dec_ref(v_ctorInfo_1744_);
lean_dec(v_fvarId_1732_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
lean_dec(v_fvarId_1649_);
lean_dec_ref(v_k_1634_);
v_a_1767_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1769_ = v___x_1748_;
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1748_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1767_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
lean_dec(v_fvarId_1732_);
lean_dec(v_idx_1689_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
lean_dec(v_fvarId_1649_);
lean_dec_ref(v_k_1634_);
v_a_1775_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1777_ = v___x_1742_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1742_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1775_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
else
{
lean_dec_ref_known(v_ctors_1739_, 2);
lean_dec(v_fvarId_1732_);
lean_dec(v_idx_1689_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
lean_dec(v_fvarId_1649_);
lean_dec_ref(v_k_1634_);
v___y_1642_ = v_a_1635_;
v___y_1643_ = v_a_1636_;
v___y_1644_ = v_a_1637_;
v___y_1645_ = v_a_1638_;
v___y_1646_ = v_a_1639_;
goto v___jp_1641_;
}
}
else
{
lean_dec(v_ctors_1739_);
lean_dec(v_fvarId_1732_);
lean_dec(v_idx_1689_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
lean_dec(v_fvarId_1649_);
lean_dec_ref(v_k_1634_);
v___y_1642_ = v_a_1635_;
v___y_1643_ = v_a_1636_;
v___y_1644_ = v_a_1637_;
v___y_1645_ = v_a_1638_;
v___y_1646_ = v_a_1639_;
goto v___jp_1641_;
}
}
else
{
lean_dec(v_val_1737_);
lean_dec(v_fvarId_1732_);
lean_dec(v_idx_1689_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
lean_dec(v_fvarId_1649_);
lean_dec_ref(v_k_1634_);
v___y_1642_ = v_a_1635_;
v___y_1643_ = v_a_1636_;
v___y_1644_ = v_a_1637_;
v___y_1645_ = v_a_1638_;
v___y_1646_ = v_a_1639_;
goto v___jp_1641_;
}
}
else
{
lean_dec(v___x_1736_);
lean_dec(v_fvarId_1732_);
lean_dec(v_idx_1689_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
lean_dec(v_fvarId_1649_);
lean_dec_ref(v_k_1634_);
v___y_1642_ = v_a_1635_;
v___y_1643_ = v_a_1636_;
v___y_1644_ = v_a_1637_;
v___y_1645_ = v_a_1638_;
v___y_1646_ = v_a_1639_;
goto v___jp_1641_;
}
}
else
{
lean_object* v___x_1783_; lean_object* v_subst_1784_; lean_object* v_jpParamMask_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1795_; 
lean_dec(v_idx_1689_);
lean_dec(v_typeName_1688_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
v___x_1783_ = lean_st_ref_take(v_a_1635_);
v_subst_1784_ = lean_ctor_get(v___x_1783_, 0);
v_jpParamMask_1785_ = lean_ctor_get(v___x_1783_, 1);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1787_ = v___x_1783_;
v_isShared_1788_ = v_isSharedCheck_1795_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_jpParamMask_1785_);
lean_inc(v_subst_1784_);
lean_dec(v___x_1783_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1795_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1789_; lean_object* v___x_1791_; 
v___x_1789_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_subst_1784_, v_fvarId_1649_, v___x_1656_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v___x_1789_);
v___x_1791_ = v___x_1787_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1789_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v_jpParamMask_1785_);
v___x_1791_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = lean_st_ref_put(v_a_1635_, v___x_1791_);
v___x_1793_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1793_;
}
}
}
}
}
else
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
lean_dec(v_struct_1690_);
lean_dec(v_idx_1689_);
lean_dec(v_typeName_1688_);
lean_del_object(v___x_1686_);
lean_dec(v_binderName_1650_);
lean_dec(v_fvarId_1649_);
lean_dec_ref(v_k_1634_);
v_a_1796_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1691_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1691_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
}
}
case 3:
{
lean_object* v_declName_1809_; lean_object* v_args_1810_; size_t v_sz_1811_; size_t v___x_1812_; lean_object* v___x_1813_; 
v_declName_1809_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_declName_1809_);
v_args_1810_ = lean_ctor_get(v___x_1662_, 2);
lean_inc_ref_n(v_args_1810_, 2);
lean_dec_ref_known(v___x_1662_, 3);
v_sz_1811_ = lean_array_size(v_args_1810_);
v___x_1812_ = ((size_t)0ULL);
v___x_1813_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___redArg(v_sz_1811_, v___x_1812_, v_args_1810_, v_a_1635_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; lean_object* v___x_1815_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_a_1814_);
lean_dec_ref_known(v___x_1813_, 1);
lean_inc(v_declName_1809_);
v___x_1815_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_declName_1809_, v_a_1639_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_a_1816_; 
v_a_1816_ = lean_ctor_get(v___x_1815_, 0);
lean_inc(v_a_1816_);
lean_dec_ref_known(v___x_1815_, 1);
if (lean_obj_tag(v_a_1816_) == 1)
{
lean_object* v_val_1817_; lean_object* v_params_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
lean_dec_ref(v_args_1810_);
lean_del_object(v___x_1660_);
v_val_1817_ = lean_ctor_get(v_a_1816_, 0);
lean_inc(v_val_1817_);
lean_dec_ref_known(v_a_1816_, 1);
v_params_1818_ = lean_ctor_get(v_val_1817_, 3);
lean_inc_ref(v_params_1818_);
lean_dec(v_val_1817_);
v___x_1819_ = lean_array_get_size(v_params_1818_);
lean_dec_ref(v_params_1818_);
v___x_1820_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkApplication(v_decl_1633_, v_k_1634_, v_declName_1809_, v___x_1819_, v_a_1814_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1820_;
}
else
{
lean_object* v___x_1821_; 
lean_dec(v_a_1816_);
lean_inc(v_declName_1809_);
v___x_1821_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_1809_, v_a_1639_);
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
lean_inc(v_a_1822_);
lean_dec_ref_known(v___x_1821_, 1);
if (lean_obj_tag(v_a_1822_) == 1)
{
lean_object* v_val_1823_; lean_object* v_toSignature_1824_; lean_object* v_params_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
lean_dec_ref(v_args_1810_);
lean_del_object(v___x_1660_);
v_val_1823_ = lean_ctor_get(v_a_1822_, 0);
lean_inc(v_val_1823_);
lean_dec_ref_known(v_a_1822_, 1);
v_toSignature_1824_ = lean_ctor_get(v_val_1823_, 0);
lean_inc_ref(v_toSignature_1824_);
lean_dec(v_val_1823_);
v_params_1825_ = lean_ctor_get(v_toSignature_1824_, 3);
lean_inc_ref(v_params_1825_);
lean_dec_ref(v_toSignature_1824_);
v___x_1826_ = lean_array_get_size(v_params_1825_);
lean_dec_ref(v_params_1825_);
v___x_1827_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkApplication(v_decl_1633_, v_k_1634_, v_declName_1809_, v___x_1826_, v_a_1814_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1827_;
}
else
{
lean_object* v___x_1828_; lean_object* v_env_1829_; uint8_t v___x_1830_; lean_object* v___x_1831_; 
lean_dec(v_a_1822_);
v___x_1828_ = lean_st_ref_get(v_a_1639_);
v_env_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc_ref(v_env_1829_);
lean_dec(v___x_1828_);
v___x_1830_ = 0;
lean_inc(v_declName_1809_);
v___x_1831_ = l_Lean_Environment_find_x3f(v_env_1829_, v_declName_1809_, v___x_1830_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v___x_1832_; lean_object* v___x_1833_; 
lean_dec(v_a_1814_);
lean_dec_ref(v_args_1810_);
lean_dec(v_declName_1809_);
lean_del_object(v___x_1660_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v___x_1832_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__4, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__4);
v___x_1833_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(v___x_1832_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1833_;
}
else
{
lean_object* v_val_1834_; 
v_val_1834_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_val_1834_);
lean_dec_ref_known(v___x_1831_, 1);
switch(lean_obj_tag(v_val_1834_))
{
case 0:
{
lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1850_; 
lean_dec(v_a_1814_);
lean_dec_ref(v_args_1810_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_val_1834_);
if (v_isSharedCheck_1850_ == 0)
{
lean_object* v_unused_1851_; 
v_unused_1851_ = lean_ctor_get(v_val_1834_, 0);
lean_dec(v_unused_1851_);
v___x_1836_ = v_val_1834_;
v_isShared_1837_ = v_isSharedCheck_1850_;
goto v_resetjp_1835_;
}
else
{
lean_dec(v_val_1834_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1850_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1838_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__6));
v___x_1839_ = l_Lean_Name_toString(v_declName_1809_, v___x_1655_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set_tag(v___x_1836_, 3);
lean_ctor_set(v___x_1836_, 0, v___x_1839_);
v___x_1841_ = v___x_1836_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___x_1843_; 
if (v_isShared_1661_ == 0)
{
lean_ctor_set_tag(v___x_1660_, 5);
lean_ctor_set(v___x_1660_, 1, v___x_1841_);
lean_ctor_set(v___x_1660_, 0, v___x_1838_);
v___x_1843_ = v___x_1660_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v___x_1838_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v___x_1841_);
v___x_1843_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1844_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__8));
v___x_1845_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1843_);
lean_ctor_set(v___x_1845_, 1, v___x_1844_);
v___x_1846_ = l_Lean_MessageData_ofFormat(v___x_1845_);
v___x_1847_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(v___x_1846_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1847_;
}
}
}
}
case 2:
{
lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1867_; 
lean_dec(v_a_1814_);
lean_dec_ref(v_args_1810_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_isSharedCheck_1867_ = !lean_is_exclusive(v_val_1834_);
if (v_isSharedCheck_1867_ == 0)
{
lean_object* v_unused_1868_; 
v_unused_1868_ = lean_ctor_get(v_val_1834_, 0);
lean_dec(v_unused_1868_);
v___x_1853_ = v_val_1834_;
v_isShared_1854_ = v_isSharedCheck_1867_;
goto v_resetjp_1852_;
}
else
{
lean_dec(v_val_1834_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1867_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1858_; 
v___x_1855_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__6));
v___x_1856_ = l_Lean_Name_toString(v_declName_1809_, v___x_1655_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set_tag(v___x_1853_, 3);
lean_ctor_set(v___x_1853_, 0, v___x_1856_);
v___x_1858_ = v___x_1853_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1856_);
v___x_1858_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1860_; 
if (v_isShared_1661_ == 0)
{
lean_ctor_set_tag(v___x_1660_, 5);
lean_ctor_set(v___x_1660_, 1, v___x_1858_);
lean_ctor_set(v___x_1660_, 0, v___x_1855_);
v___x_1860_ = v___x_1660_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v___x_1855_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1861_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__8));
v___x_1862_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1860_);
lean_ctor_set(v___x_1862_, 1, v___x_1861_);
v___x_1863_ = l_Lean_MessageData_ofFormat(v___x_1862_);
v___x_1864_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(v___x_1863_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1864_;
}
}
}
}
case 4:
{
lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1884_; 
lean_dec(v_a_1814_);
lean_dec_ref(v_args_1810_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_isSharedCheck_1884_ = !lean_is_exclusive(v_val_1834_);
if (v_isSharedCheck_1884_ == 0)
{
lean_object* v_unused_1885_; 
v_unused_1885_ = lean_ctor_get(v_val_1834_, 0);
lean_dec(v_unused_1885_);
v___x_1870_ = v_val_1834_;
v_isShared_1871_ = v_isSharedCheck_1884_;
goto v_resetjp_1869_;
}
else
{
lean_dec(v_val_1834_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1884_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1875_; 
v___x_1872_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__6));
v___x_1873_ = l_Lean_Name_toString(v_declName_1809_, v___x_1655_);
if (v_isShared_1871_ == 0)
{
lean_ctor_set_tag(v___x_1870_, 3);
lean_ctor_set(v___x_1870_, 0, v___x_1873_);
v___x_1875_ = v___x_1870_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v___x_1873_);
v___x_1875_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
lean_object* v___x_1877_; 
if (v_isShared_1661_ == 0)
{
lean_ctor_set_tag(v___x_1660_, 5);
lean_ctor_set(v___x_1660_, 1, v___x_1875_);
lean_ctor_set(v___x_1660_, 0, v___x_1872_);
v___x_1877_ = v___x_1660_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1872_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v___x_1875_);
v___x_1877_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1878_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__8));
v___x_1879_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1877_);
lean_ctor_set(v___x_1879_, 1, v___x_1878_);
v___x_1880_ = l_Lean_MessageData_ofFormat(v___x_1879_);
v___x_1881_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(v___x_1880_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1881_;
}
}
}
}
case 5:
{
lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1901_; 
lean_dec(v_a_1814_);
lean_dec_ref(v_args_1810_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_isSharedCheck_1901_ = !lean_is_exclusive(v_val_1834_);
if (v_isSharedCheck_1901_ == 0)
{
lean_object* v_unused_1902_; 
v_unused_1902_ = lean_ctor_get(v_val_1834_, 0);
lean_dec(v_unused_1902_);
v___x_1887_ = v_val_1834_;
v_isShared_1888_ = v_isSharedCheck_1901_;
goto v_resetjp_1886_;
}
else
{
lean_dec(v_val_1834_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1901_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1892_; 
v___x_1889_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__6));
v___x_1890_ = l_Lean_Name_toString(v_declName_1809_, v___x_1655_);
if (v_isShared_1888_ == 0)
{
lean_ctor_set_tag(v___x_1887_, 3);
lean_ctor_set(v___x_1887_, 0, v___x_1890_);
v___x_1892_ = v___x_1887_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
lean_object* v___x_1894_; 
if (v_isShared_1661_ == 0)
{
lean_ctor_set_tag(v___x_1660_, 5);
lean_ctor_set(v___x_1660_, 1, v___x_1892_);
lean_ctor_set(v___x_1660_, 0, v___x_1889_);
v___x_1894_ = v___x_1660_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1889_);
lean_ctor_set(v_reuseFailAlloc_1899_, 1, v___x_1892_);
v___x_1894_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1895_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__8));
v___x_1896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1894_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
v___x_1897_ = l_Lean_MessageData_ofFormat(v___x_1896_);
v___x_1898_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(v___x_1897_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1898_;
}
}
}
}
case 6:
{
lean_object* v_val_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_2053_; 
lean_del_object(v___x_1660_);
v_val_1903_ = lean_ctor_get(v_val_1834_, 0);
v_isSharedCheck_2053_ = !lean_is_exclusive(v_val_1834_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_1905_ = v_val_1834_;
v_isShared_1906_ = v_isSharedCheck_2053_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_val_1903_);
lean_dec(v_val_1834_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_2053_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v_induct_1907_; lean_object* v_cidx_1908_; lean_object* v_numParams_1909_; lean_object* v___x_1910_; 
v_induct_1907_ = lean_ctor_get(v_val_1903_, 1);
lean_inc_n(v_induct_1907_, 2);
v_cidx_1908_ = lean_ctor_get(v_val_1903_, 2);
lean_inc(v_cidx_1908_);
v_numParams_1909_ = lean_ctor_get(v_val_1903_, 3);
lean_inc(v_numParams_1909_);
lean_dec_ref(v_val_1903_);
v___x_1910_ = l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(v_induct_1907_, v_a_1638_, v_a_1639_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1910_, 1);
if (lean_obj_tag(v_a_1911_) == 1)
{
lean_object* v_val_1912_; lean_object* v_numParams_1913_; lean_object* v_fieldIdx_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v_subst_1918_; lean_object* v_jpParamMask_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1929_; 
lean_inc(v_fvarId_1649_);
lean_dec(v_numParams_1909_);
lean_dec(v_cidx_1908_);
lean_dec(v_induct_1907_);
lean_del_object(v___x_1905_);
lean_dec(v_a_1814_);
lean_dec(v_declName_1809_);
lean_dec_ref(v_decl_1633_);
v_val_1912_ = lean_ctor_get(v_a_1911_, 0);
lean_inc(v_val_1912_);
lean_dec_ref_known(v_a_1911_, 1);
v_numParams_1913_ = lean_ctor_get(v_val_1912_, 1);
lean_inc(v_numParams_1913_);
v_fieldIdx_1914_ = lean_ctor_get(v_val_1912_, 2);
lean_inc(v_fieldIdx_1914_);
lean_dec(v_val_1912_);
v___x_1915_ = lean_nat_add(v_numParams_1913_, v_fieldIdx_1914_);
lean_dec(v_fieldIdx_1914_);
lean_dec(v_numParams_1913_);
v___x_1916_ = lean_array_get(v___x_1656_, v_args_1810_, v___x_1915_);
lean_dec(v___x_1915_);
lean_dec_ref(v_args_1810_);
v___x_1917_ = lean_st_ref_take(v_a_1635_);
v_subst_1918_ = lean_ctor_get(v___x_1917_, 0);
v_jpParamMask_1919_ = lean_ctor_get(v___x_1917_, 1);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1921_ = v___x_1917_;
v_isShared_1922_ = v_isSharedCheck_1929_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_jpParamMask_1919_);
lean_inc(v_subst_1918_);
lean_dec(v___x_1917_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1929_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1923_; lean_object* v___x_1925_; 
v___x_1923_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_subst_1918_, v_fvarId_1649_, v___x_1916_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v___x_1923_);
v___x_1925_ = v___x_1921_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1923_);
lean_ctor_set(v_reuseFailAlloc_1928_, 1, v_jpParamMask_1919_);
v___x_1925_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1926_ = lean_st_ref_put(v_a_1635_, v___x_1925_);
v___x_1927_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_1927_;
}
}
}
else
{
lean_object* v___x_1930_; 
lean_dec(v_a_1911_);
lean_dec_ref(v_args_1810_);
v___x_1930_ = l_Lean_Compiler_LCNF_nameToImpureType(v_induct_1907_, v_a_1638_, v_a_1639_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; uint8_t v___x_1932_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v___x_1932_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_a_1931_);
if (v___x_1932_ == 0)
{
lean_object* v___x_1933_; 
lean_dec(v_a_1931_);
lean_dec(v_cidx_1908_);
lean_del_object(v___x_1905_);
lean_inc(v_declName_1809_);
v___x_1933_ = l_Lean_Compiler_LCNF_getCtorLayout(v_declName_1809_, v_a_1638_, v_a_1639_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_2012_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_2012_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_1936_ = v___x_1933_;
v_isShared_1937_ = v_isSharedCheck_2012_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1933_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_2012_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v_ctorInfo_1938_; lean_object* v_fieldInfo_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_2011_; 
v_ctorInfo_1938_ = lean_ctor_get(v_a_1934_, 0);
v_fieldInfo_1939_ = lean_ctor_get(v_a_1934_, 1);
v_isSharedCheck_2011_ = !lean_is_exclusive(v_a_1934_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_1941_ = v_a_1934_;
v_isShared_1942_ = v_isSharedCheck_2011_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_fieldInfo_1939_);
lean_inc(v_ctorInfo_1938_);
lean_dec(v_a_1934_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_2011_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; uint8_t v___x_1947_; 
v___x_1943_ = lean_array_get_size(v_a_1814_);
v___x_1944_ = l_Array_extract___redArg(v_a_1814_, v_numParams_1909_, v___x_1943_);
lean_dec(v_a_1814_);
v___x_1945_ = lean_array_get_size(v___x_1944_);
v___x_1946_ = lean_array_get_size(v_fieldInfo_1939_);
v___x_1947_ = lean_nat_dec_eq(v___x_1945_, v___x_1946_);
if (v___x_1947_ == 0)
{
lean_object* v___x_1948_; lean_object* v___x_1950_; 
lean_dec_ref(v___x_1944_);
lean_del_object(v___x_1941_);
lean_dec_ref(v_fieldInfo_1939_);
lean_dec_ref(v_ctorInfo_1938_);
lean_dec(v_declName_1809_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v___x_1948_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__9, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__9_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__9);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 0, v___x_1948_);
v___x_1950_ = v___x_1936_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v___x_1948_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
else
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
lean_del_object(v___x_1936_);
v___x_1952_ = lean_unsigned_to_nat(0u);
v___x_1953_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__4));
v___x_1954_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14___redArg(v___x_1946_, v_fieldInfo_1939_, v___x_1944_, v___x_1952_, v___x_1953_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; lean_object* v___x_1956_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
lean_inc(v_a_1955_);
lean_dec_ref_known(v___x_1954_, 1);
v___x_1956_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_mkSpillObjs(v_declName_1809_, v_a_1955_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v_a_1957_; lean_object* v_fst_1958_; lean_object* v_snd_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1994_; 
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
lean_inc(v_a_1957_);
lean_dec_ref_known(v___x_1956_, 1);
v_fst_1958_ = lean_ctor_get(v_a_1957_, 0);
v_snd_1959_ = lean_ctor_get(v_a_1957_, 1);
v_isSharedCheck_1994_ = !lean_is_exclusive(v_a_1957_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1961_ = v_a_1957_;
v_isShared_1962_ = v_isSharedCheck_1994_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_snd_1959_);
lean_inc(v_fst_1958_);
lean_dec(v_a_1957_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1994_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
uint8_t v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1963_ = 1;
v___x_1964_ = l_Lean_Compiler_LCNF_CtorInfo_type(v_ctorInfo_1938_);
lean_inc_ref(v_ctorInfo_1938_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set_tag(v___x_1961_, 5);
lean_ctor_set(v___x_1961_, 0, v_ctorInfo_1938_);
v___x_1966_ = v___x_1961_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_ctorInfo_1938_);
lean_ctor_set(v_reuseFailAlloc_1993_, 1, v_snd_1959_);
v___x_1966_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v_lctx_1969_; lean_object* v_nextIdx_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1992_; 
lean_inc(v_binderName_1650_);
lean_inc(v_fvarId_1649_);
v___x_1967_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1967_, 0, v_fvarId_1649_);
lean_ctor_set(v___x_1967_, 1, v_binderName_1650_);
lean_ctor_set(v___x_1967_, 2, v___x_1964_);
lean_ctor_set(v___x_1967_, 3, v___x_1966_);
v___x_1968_ = lean_st_ref_take(v_a_1637_);
v_lctx_1969_ = lean_ctor_get(v___x_1968_, 0);
v_nextIdx_1970_ = lean_ctor_get(v___x_1968_, 1);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1972_ = v___x_1968_;
v_isShared_1973_ = v_isSharedCheck_1992_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_nextIdx_1970_);
lean_inc(v_lctx_1969_);
lean_dec(v___x_1968_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1992_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1974_; lean_object* v___x_1976_; 
lean_inc_ref(v___x_1967_);
v___x_1974_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1963_, v_lctx_1969_, v___x_1967_);
if (v_isShared_1973_ == 0)
{
lean_ctor_set(v___x_1972_, 0, v___x_1974_);
v___x_1976_ = v___x_1972_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1974_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_nextIdx_1970_);
v___x_1976_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = lean_st_ref_put(v_a_1637_, v___x_1976_);
v___x_1978_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields(v_decl_1633_, v_k_1634_, v_ctorInfo_1938_, v_fieldInfo_1939_, v___x_1944_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
lean_dec_ref(v___x_1944_);
lean_dec_ref(v_fieldInfo_1939_);
lean_dec_ref(v_ctorInfo_1938_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1990_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_1990_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1990_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 1, v_a_1979_);
lean_ctor_set(v___x_1941_, 0, v___x_1967_);
v___x_1984_ = v___x_1941_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1967_);
lean_ctor_set(v_reuseFailAlloc_1989_, 1, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1985_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls(v_fst_1958_, v___x_1984_);
lean_dec(v_fst_1958_);
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 0, v___x_1985_);
v___x_1987_ = v___x_1981_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v___x_1985_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1967_, 4);
lean_dec(v_fst_1958_);
lean_del_object(v___x_1941_);
return v___x_1978_;
}
}
}
}
}
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
lean_dec_ref(v___x_1944_);
lean_del_object(v___x_1941_);
lean_dec_ref(v_fieldInfo_1939_);
lean_dec_ref(v_ctorInfo_1938_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_a_1995_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1956_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1956_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
else
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2010_; 
lean_dec_ref(v___x_1944_);
lean_del_object(v___x_1941_);
lean_dec_ref(v_fieldInfo_1939_);
lean_dec_ref(v_ctorInfo_1938_);
lean_dec(v_declName_1809_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_a_2003_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2005_ = v___x_1954_;
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_1954_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_2006_ == 0)
{
v___x_2008_ = v___x_2005_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v_a_2003_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
lean_dec(v_numParams_1909_);
lean_dec(v_a_1814_);
lean_dec(v_declName_1809_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_a_2013_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_1933_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_1933_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
else
{
lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2032_; 
lean_inc(v_binderName_1650_);
lean_inc(v_fvarId_1649_);
lean_dec(v_numParams_1909_);
lean_dec(v_a_1814_);
lean_dec(v_declName_1809_);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_decl_1633_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; lean_object* v_unused_2034_; lean_object* v_unused_2035_; lean_object* v_unused_2036_; 
v_unused_2033_ = lean_ctor_get(v_decl_1633_, 3);
lean_dec(v_unused_2033_);
v_unused_2034_ = lean_ctor_get(v_decl_1633_, 2);
lean_dec(v_unused_2034_);
v_unused_2035_ = lean_ctor_get(v_decl_1633_, 1);
lean_dec(v_unused_2035_);
v_unused_2036_ = lean_ctor_get(v_decl_1633_, 0);
lean_dec(v_unused_2036_);
v___x_2022_ = v_decl_1633_;
v_isShared_2023_ = v_isSharedCheck_2032_;
goto v_resetjp_2021_;
}
else
{
lean_dec(v_decl_1633_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2032_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2024_; lean_object* v___x_2026_; 
v___x_2024_ = l_Lean_Compiler_LCNF_LitValue_impureTypeScalarNumLit(v_a_1931_, v_cidx_1908_);
lean_dec(v_cidx_1908_);
if (v_isShared_1906_ == 0)
{
lean_ctor_set_tag(v___x_1905_, 0);
lean_ctor_set(v___x_1905_, 0, v___x_2024_);
v___x_2026_ = v___x_1905_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v___x_2024_);
v___x_2026_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
lean_object* v___x_2028_; 
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 3, v___x_2026_);
lean_ctor_set(v___x_2022_, 2, v_a_1931_);
v___x_2028_ = v___x_2022_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_fvarId_1649_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v_binderName_1650_);
lean_ctor_set(v_reuseFailAlloc_2030_, 2, v_a_1931_);
lean_ctor_set(v_reuseFailAlloc_2030_, 3, v___x_2026_);
v___x_2028_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
lean_object* v___x_2029_; 
v___x_2029_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet(v_k_1634_, v___x_2028_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_2029_;
}
}
}
}
}
else
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2044_; 
lean_dec(v_numParams_1909_);
lean_dec(v_cidx_1908_);
lean_del_object(v___x_1905_);
lean_dec(v_a_1814_);
lean_dec(v_declName_1809_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_a_2037_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2039_ = v___x_1930_;
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_1930_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2042_; 
if (v_isShared_2040_ == 0)
{
v___x_2042_ = v___x_2039_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v_a_2037_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
}
}
else
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
lean_dec(v_numParams_1909_);
lean_dec(v_cidx_1908_);
lean_dec(v_induct_1907_);
lean_del_object(v___x_1905_);
lean_dec(v_a_1814_);
lean_dec_ref(v_args_1810_);
lean_dec(v_declName_1809_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_a_2045_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v___x_1910_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_1910_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
}
}
case 7:
{
lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2069_; 
lean_dec(v_a_1814_);
lean_dec_ref(v_args_1810_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_val_1834_);
if (v_isSharedCheck_2069_ == 0)
{
lean_object* v_unused_2070_; 
v_unused_2070_ = lean_ctor_get(v_val_1834_, 0);
lean_dec(v_unused_2070_);
v___x_2055_ = v_val_1834_;
v_isShared_2056_ = v_isSharedCheck_2069_;
goto v_resetjp_2054_;
}
else
{
lean_dec(v_val_1834_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2069_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2060_; 
v___x_2057_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__11));
v___x_2058_ = l_Lean_Name_toString(v_declName_1809_, v___x_1655_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set_tag(v___x_2055_, 3);
lean_ctor_set(v___x_2055_, 0, v___x_2058_);
v___x_2060_ = v___x_2055_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2058_);
v___x_2060_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_object* v___x_2062_; 
if (v_isShared_1661_ == 0)
{
lean_ctor_set_tag(v___x_1660_, 5);
lean_ctor_set(v___x_1660_, 1, v___x_2060_);
lean_ctor_set(v___x_1660_, 0, v___x_2057_);
v___x_2062_ = v___x_1660_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2057_);
lean_ctor_set(v_reuseFailAlloc_2067_, 1, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2063_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___closed__13));
v___x_2064_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = l_Lean_MessageData_ofFormat(v___x_2064_);
v___x_2066_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(v___x_2065_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_2066_;
}
}
}
}
default: 
{
lean_object* v___x_2071_; 
lean_dec(v_val_1834_);
lean_dec_ref(v_args_1810_);
lean_del_object(v___x_1660_);
v___x_2071_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkFap(v_decl_1633_, v_k_1634_, v_declName_1809_, v_a_1814_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_2071_;
}
}
}
}
}
else
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
lean_dec(v_a_1814_);
lean_dec_ref(v_args_1810_);
lean_dec(v_declName_1809_);
lean_del_object(v___x_1660_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_a_2072_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_1821_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_1821_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
}
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
lean_dec(v_a_1814_);
lean_dec_ref(v_args_1810_);
lean_dec(v_declName_1809_);
lean_del_object(v___x_1660_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_a_2080_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_1815_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_1815_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2095_; 
lean_dec_ref(v_args_1810_);
lean_dec(v_declName_1809_);
lean_del_object(v___x_1660_);
lean_dec_ref(v_k_1634_);
lean_dec_ref(v_decl_1633_);
v_a_2088_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2090_ = v___x_1813_;
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_1813_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_a_2088_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
default: 
{
lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2135_; 
lean_inc_ref(v_type_1651_);
lean_inc(v_binderName_1650_);
lean_inc(v_fvarId_1649_);
lean_del_object(v___x_1660_);
v_isSharedCheck_2135_ = !lean_is_exclusive(v_decl_1633_);
if (v_isSharedCheck_2135_ == 0)
{
lean_object* v_unused_2136_; lean_object* v_unused_2137_; lean_object* v_unused_2138_; lean_object* v_unused_2139_; 
v_unused_2136_ = lean_ctor_get(v_decl_1633_, 3);
lean_dec(v_unused_2136_);
v_unused_2137_ = lean_ctor_get(v_decl_1633_, 2);
lean_dec(v_unused_2137_);
v_unused_2138_ = lean_ctor_get(v_decl_1633_, 1);
lean_dec(v_unused_2138_);
v_unused_2139_ = lean_ctor_get(v_decl_1633_, 0);
lean_dec(v_unused_2139_);
v___x_2097_ = v_decl_1633_;
v_isShared_2098_ = v_isSharedCheck_2135_;
goto v_resetjp_2096_;
}
else
{
lean_dec(v_decl_1633_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2135_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v_fvarId_2099_; lean_object* v_args_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2134_; 
v_fvarId_2099_ = lean_ctor_get(v___x_1662_, 0);
v_args_2100_ = lean_ctor_get(v___x_1662_, 1);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2102_ = v___x_1662_;
v_isShared_2103_ = v_isSharedCheck_2134_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_args_2100_);
lean_inc(v_fvarId_2099_);
lean_dec(v___x_1662_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2134_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
size_t v_sz_2104_; size_t v___x_2105_; lean_object* v___x_2106_; 
v_sz_2104_ = lean_array_size(v_args_2100_);
v___x_2105_ = ((size_t)0ULL);
v___x_2106_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___redArg(v_sz_2104_, v___x_2105_, v_args_2100_, v_a_1635_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_object* v_a_2107_; lean_object* v___x_2108_; 
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_a_2107_);
lean_dec_ref_known(v___x_2106_, 1);
v___x_2108_ = l_Lean_Compiler_LCNF_toImpureType(v_type_1651_, v_a_1638_, v_a_1639_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; lean_object* v___x_2110_; lean_object* v___x_2112_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2108_, 1);
v___x_2110_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_boxed(v_a_2109_);
lean_dec(v_a_2109_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 1, v_a_2107_);
v___x_2112_ = v___x_2102_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_fvarId_2099_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v_a_2107_);
v___x_2112_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
lean_object* v___x_2114_; 
if (v_isShared_2098_ == 0)
{
lean_ctor_set(v___x_2097_, 3, v___x_2112_);
lean_ctor_set(v___x_2097_, 2, v___x_2110_);
v___x_2114_ = v___x_2097_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_fvarId_1649_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v_binderName_1650_);
lean_ctor_set(v_reuseFailAlloc_2116_, 2, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2116_, 3, v___x_2112_);
v___x_2114_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
lean_object* v___x_2115_; 
v___x_2115_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet(v_k_1634_, v___x_2114_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
return v___x_2115_;
}
}
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
lean_dec(v_a_2107_);
lean_del_object(v___x_2102_);
lean_dec(v_fvarId_2099_);
lean_del_object(v___x_2097_);
lean_dec(v_binderName_1650_);
lean_dec(v_fvarId_1649_);
lean_dec_ref(v_k_1634_);
v_a_2118_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2120_ = v___x_2108_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2108_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2118_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
else
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
lean_del_object(v___x_2102_);
lean_dec(v_fvarId_2099_);
lean_del_object(v___x_2097_);
lean_dec_ref(v_type_1651_);
lean_dec(v_binderName_1650_);
lean_dec(v_fvarId_1649_);
lean_dec_ref(v_k_1634_);
v_a_2126_ = lean_ctor_get(v___x_2106_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2106_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2106_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2106_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
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
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__2(void){
_start:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2144_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__1));
v___x_2145_ = lean_unsigned_to_nat(15u);
v___x_2146_ = lean_unsigned_to_nat(306u);
v___x_2147_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__0));
v___x_2148_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0));
v___x_2149_ = l_mkPanicMessageWithDecl(v___x_2148_, v___x_2147_, v___x_2146_, v___x_2145_, v___x_2144_);
return v___x_2149_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__5(void){
_start:
{
lean_object* v___x_2152_; 
v___x_2152_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_2152_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__7(void){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2154_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__6));
v___x_2155_ = lean_unsigned_to_nat(6u);
v___x_2156_ = lean_unsigned_to_nat(285u);
v___x_2157_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__0));
v___x_2158_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0));
v___x_2159_ = l_mkPanicMessageWithDecl(v___x_2158_, v___x_2157_, v___x_2156_, v___x_2155_, v___x_2154_);
return v___x_2159_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__9(void){
_start:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2161_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__8));
v___x_2162_ = lean_unsigned_to_nat(6u);
v___x_2163_ = lean_unsigned_to_nat(287u);
v___x_2164_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__0));
v___x_2165_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0));
v___x_2166_ = l_mkPanicMessageWithDecl(v___x_2165_, v___x_2164_, v___x_2163_, v___x_2162_, v___x_2161_);
return v___x_2166_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__11(void){
_start:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2168_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__10));
v___x_2169_ = lean_unsigned_to_nat(6u);
v___x_2170_ = lean_unsigned_to_nat(288u);
v___x_2171_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__0));
v___x_2172_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0));
v___x_2173_ = l_mkPanicMessageWithDecl(v___x_2172_, v___x_2171_, v___x_2170_, v___x_2169_, v___x_2168_);
return v___x_2173_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__13(void){
_start:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2175_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__12));
v___x_2176_ = lean_unsigned_to_nat(45u);
v___x_2177_ = lean_unsigned_to_nat(286u);
v___x_2178_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__0));
v___x_2179_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0));
v___x_2180_ = l_mkPanicMessageWithDecl(v___x_2179_, v___x_2178_, v___x_2177_, v___x_2176_, v___x_2175_);
return v___x_2180_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__2(void){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2183_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__1));
v___x_2184_ = lean_unsigned_to_nat(18u);
v___x_2185_ = lean_unsigned_to_nat(328u);
v___x_2186_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__0));
v___x_2187_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerResultType_resultTypeForArity___closed__0));
v___x_2188_ = l_mkPanicMessageWithDecl(v___x_2187_, v___x_2186_, v___x_2185_, v___x_2184_, v___x_2183_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop(lean_object* v_discr_2189_, lean_object* v_k_2190_, lean_object* v_ctorInfo_2191_, lean_object* v_spills_2192_, lean_object* v_params_2193_, lean_object* v_fields_2194_, lean_object* v_i_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_){
_start:
{
lean_object* v___y_2203_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2206_; lean_object* v___y_2207_; lean_object* v___x_2210_; uint8_t v___x_2211_; 
v___x_2210_ = lean_array_get_size(v_params_2193_);
v___x_2211_ = lean_nat_dec_lt(v_i_2195_, v___x_2210_);
if (v___x_2211_ == 0)
{
lean_object* v___x_2212_; uint8_t v___x_2213_; 
lean_dec(v_discr_2189_);
v___x_2212_ = lean_array_get_size(v_fields_2194_);
v___x_2213_ = lean_nat_dec_lt(v_i_2195_, v___x_2212_);
lean_dec(v_i_2195_);
if (v___x_2213_ == 0)
{
lean_object* v___x_2214_; 
v___x_2214_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_2190_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_);
return v___x_2214_;
}
else
{
lean_dec_ref(v_k_2190_);
v___y_2203_ = v_a_2196_;
v___y_2204_ = v_a_2197_;
v___y_2205_ = v_a_2198_;
v___y_2206_ = v_a_2199_;
v___y_2207_ = v_a_2200_;
goto v___jp_2202_;
}
}
else
{
lean_object* v___x_2215_; uint8_t v___x_2216_; 
v___x_2215_ = lean_array_get_size(v_fields_2194_);
v___x_2216_ = lean_nat_dec_lt(v_i_2195_, v___x_2215_);
if (v___x_2216_ == 0)
{
lean_dec(v_i_2195_);
lean_dec_ref(v_k_2190_);
lean_dec(v_discr_2189_);
v___y_2203_ = v_a_2196_;
v___y_2204_ = v_a_2197_;
v___y_2205_ = v_a_2198_;
v___y_2206_ = v_a_2199_;
v___y_2207_ = v_a_2200_;
goto v___jp_2202_;
}
else
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v_fst_2219_; lean_object* v_snd_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2272_; 
v___x_2217_ = lean_array_fget_borrowed(v_fields_2194_, v_i_2195_);
lean_inc(v___x_2217_);
lean_inc(v_discr_2189_);
v___x_2218_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerProj(v_discr_2189_, v_spills_2192_, v_ctorInfo_2191_, v___x_2217_);
v_fst_2219_ = lean_ctor_get(v___x_2218_, 0);
v_snd_2220_ = lean_ctor_get(v___x_2218_, 1);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2222_ = v___x_2218_;
v_isShared_2223_ = v_isSharedCheck_2272_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_snd_2220_);
lean_inc(v_fst_2219_);
lean_dec(v___x_2218_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2272_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2224_; 
v___x_2224_ = lean_array_fget_borrowed(v_params_2193_, v_i_2195_);
if (lean_obj_tag(v_fst_2219_) == 1)
{
lean_object* v_fvarId_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v_subst_2228_; lean_object* v_jpParamMask_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2241_; 
lean_del_object(v___x_2222_);
lean_dec(v_snd_2220_);
v_fvarId_2225_ = lean_ctor_get(v___x_2224_, 0);
v___x_2226_ = lean_box(0);
v___x_2227_ = lean_st_ref_take(v_a_2196_);
v_subst_2228_ = lean_ctor_get(v___x_2227_, 0);
v_jpParamMask_2229_ = lean_ctor_get(v___x_2227_, 1);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2231_ = v___x_2227_;
v_isShared_2232_ = v_isSharedCheck_2241_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_jpParamMask_2229_);
lean_inc(v_subst_2228_);
lean_dec(v___x_2227_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2241_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2233_; lean_object* v___x_2235_; 
lean_inc(v_fvarId_2225_);
v___x_2233_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_subst_2228_, v_fvarId_2225_, v___x_2226_);
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 0, v___x_2233_);
v___x_2235_ = v___x_2231_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v___x_2233_);
lean_ctor_set(v_reuseFailAlloc_2240_, 1, v_jpParamMask_2229_);
v___x_2235_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2236_ = lean_st_ref_put(v_a_2196_, v___x_2235_);
v___x_2237_ = lean_unsigned_to_nat(1u);
v___x_2238_ = lean_nat_add(v_i_2195_, v___x_2237_);
lean_dec(v_i_2195_);
v_i_2195_ = v___x_2238_;
goto _start;
}
}
}
else
{
lean_object* v_fvarId_2242_; lean_object* v_binderName_2243_; uint8_t v___x_2244_; lean_object* v_decl_2245_; lean_object* v___x_2246_; lean_object* v_lctx_2247_; lean_object* v_nextIdx_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2271_; 
v_fvarId_2242_ = lean_ctor_get(v___x_2224_, 0);
v_binderName_2243_ = lean_ctor_get(v___x_2224_, 1);
v___x_2244_ = 1;
lean_inc(v_binderName_2243_);
lean_inc(v_fvarId_2242_);
v_decl_2245_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_decl_2245_, 0, v_fvarId_2242_);
lean_ctor_set(v_decl_2245_, 1, v_binderName_2243_);
lean_ctor_set(v_decl_2245_, 2, v_snd_2220_);
lean_ctor_set(v_decl_2245_, 3, v_fst_2219_);
v___x_2246_ = lean_st_ref_take(v_a_2198_);
v_lctx_2247_ = lean_ctor_get(v___x_2246_, 0);
v_nextIdx_2248_ = lean_ctor_get(v___x_2246_, 1);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2250_ = v___x_2246_;
v_isShared_2251_ = v_isSharedCheck_2271_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_nextIdx_2248_);
lean_inc(v_lctx_2247_);
lean_dec(v___x_2246_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2271_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2252_; lean_object* v___x_2254_; 
lean_inc_ref(v_decl_2245_);
v___x_2252_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2244_, v_lctx_2247_, v_decl_2245_);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 0, v___x_2252_);
v___x_2254_ = v___x_2250_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v___x_2252_);
lean_ctor_set(v_reuseFailAlloc_2270_, 1, v_nextIdx_2248_);
v___x_2254_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2255_ = lean_st_ref_put(v_a_2198_, v___x_2254_);
v___x_2256_ = lean_unsigned_to_nat(1u);
v___x_2257_ = lean_nat_add(v_i_2195_, v___x_2256_);
lean_dec(v_i_2195_);
v___x_2258_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop(v_discr_2189_, v_k_2190_, v_ctorInfo_2191_, v_spills_2192_, v_params_2193_, v_fields_2194_, v___x_2257_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2269_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2269_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2269_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 1, v_a_2259_);
lean_ctor_set(v___x_2222_, 0, v_decl_2245_);
v___x_2264_ = v___x_2222_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_decl_2245_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
lean_object* v___x_2266_; 
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2264_);
v___x_2266_ = v___x_2261_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2264_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
}
else
{
lean_dec_ref_known(v_decl_2245_, 4);
lean_del_object(v___x_2222_);
return v___x_2258_;
}
}
}
}
}
}
}
v___jp_2202_:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2208_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__2, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___closed__2);
v___x_2209_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(v___x_2208_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
return v___x_2209_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure(lean_object* v_discr_2273_, lean_object* v_alt_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_){
_start:
{
if (lean_obj_tag(v_alt_2274_) == 0)
{
lean_object* v_ctorName_2281_; lean_object* v_params_2282_; lean_object* v_code_2283_; lean_object* v___x_2284_; 
v_ctorName_2281_ = lean_ctor_get(v_alt_2274_, 0);
lean_inc(v_ctorName_2281_);
v_params_2282_ = lean_ctor_get(v_alt_2274_, 1);
lean_inc_ref(v_params_2282_);
v_code_2283_ = lean_ctor_get(v_alt_2274_, 2);
lean_inc_ref(v_code_2283_);
lean_dec_ref_known(v_alt_2274_, 3);
v___x_2284_ = l_Lean_Compiler_LCNF_getCtorLayout(v_ctorName_2281_, v_a_2278_, v_a_2279_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v_ctorInfo_2286_; lean_object* v_fieldInfo_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2330_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2284_, 1);
v_ctorInfo_2286_ = lean_ctor_get(v_a_2285_, 0);
v_fieldInfo_2287_ = lean_ctor_get(v_a_2285_, 1);
v_isSharedCheck_2330_ = !lean_is_exclusive(v_a_2285_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2289_ = v_a_2285_;
v_isShared_2290_ = v_isSharedCheck_2330_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_fieldInfo_2287_);
lean_inc(v_ctorInfo_2286_);
lean_dec(v_a_2285_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2330_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2291_; lean_object* v___y_2293_; lean_object* v___x_2325_; uint8_t v___x_2326_; 
v___x_2291_ = lean_unsigned_to_nat(0u);
v___x_2325_ = lean_array_get_size(v_fieldInfo_2287_);
v___x_2326_ = lean_nat_dec_lt(v___x_2291_, v___x_2325_);
if (v___x_2326_ == 0)
{
v___y_2293_ = v___x_2291_;
goto v___jp_2292_;
}
else
{
size_t v___x_2327_; size_t v___x_2328_; lean_object* v___x_2329_; 
v___x_2327_ = ((size_t)0ULL);
v___x_2328_ = lean_usize_of_nat(v___x_2325_);
v___x_2329_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_spec__10(v_fieldInfo_2287_, v___x_2327_, v___x_2328_, v___x_2291_);
v___y_2293_ = v___x_2329_;
goto v___jp_2292_;
}
v___jp_2292_:
{
lean_object* v___x_2294_; 
lean_inc(v_discr_2273_);
v___x_2294_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerSpillObjs(v_discr_2273_, v___y_2293_, v_a_2276_, v_a_2277_, v_a_2278_, v_a_2279_);
lean_dec(v___y_2293_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2296_; 
v_a_2295_ = lean_ctor_get(v___x_2294_, 0);
lean_inc(v_a_2295_);
lean_dec_ref_known(v___x_2294_, 1);
v___x_2296_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop(v_discr_2273_, v_code_2283_, v_ctorInfo_2286_, v_a_2295_, v_params_2282_, v_fieldInfo_2287_, v___x_2291_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_, v_a_2279_);
lean_dec_ref(v_fieldInfo_2287_);
lean_dec_ref(v_params_2282_);
if (lean_obj_tag(v___x_2296_) == 0)
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2308_; 
v_a_2297_ = lean_ctor_get(v___x_2296_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2299_ = v___x_2296_;
v_isShared_2300_ = v_isSharedCheck_2308_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2296_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2308_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2301_; lean_object* v___x_2303_; 
v___x_2301_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_attachLetDecls(v_a_2295_, v_a_2297_);
lean_dec(v_a_2295_);
if (v_isShared_2290_ == 0)
{
lean_ctor_set_tag(v___x_2289_, 1);
lean_ctor_set(v___x_2289_, 1, v___x_2301_);
v___x_2303_ = v___x_2289_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_ctorInfo_2286_);
lean_ctor_set(v_reuseFailAlloc_2307_, 1, v___x_2301_);
v___x_2303_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
lean_object* v___x_2305_; 
if (v_isShared_2300_ == 0)
{
lean_ctor_set(v___x_2299_, 0, v___x_2303_);
v___x_2305_ = v___x_2299_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v___x_2303_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
}
else
{
lean_object* v_a_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2316_; 
lean_dec(v_a_2295_);
lean_del_object(v___x_2289_);
lean_dec_ref(v_ctorInfo_2286_);
v_a_2309_ = lean_ctor_get(v___x_2296_, 0);
v_isSharedCheck_2316_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2311_ = v___x_2296_;
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_a_2309_);
lean_dec(v___x_2296_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2314_; 
if (v_isShared_2312_ == 0)
{
v___x_2314_ = v___x_2311_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_a_2309_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
}
else
{
lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2324_; 
lean_del_object(v___x_2289_);
lean_dec_ref(v_fieldInfo_2287_);
lean_dec_ref(v_ctorInfo_2286_);
lean_dec_ref(v_code_2283_);
lean_dec_ref(v_params_2282_);
lean_dec(v_discr_2273_);
v_a_2317_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2319_ = v___x_2294_;
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2294_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2322_; 
if (v_isShared_2320_ == 0)
{
v___x_2322_ = v___x_2319_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_a_2317_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
}
}
}
else
{
lean_object* v_a_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2338_; 
lean_dec_ref(v_code_2283_);
lean_dec_ref(v_params_2282_);
lean_dec(v_discr_2273_);
v_a_2331_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2333_ = v___x_2284_;
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_a_2331_);
lean_dec(v___x_2284_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2336_; 
if (v_isShared_2334_ == 0)
{
v___x_2336_ = v___x_2333_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2331_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
}
else
{
lean_object* v_code_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2363_; 
lean_dec(v_discr_2273_);
v_code_2339_ = lean_ctor_get(v_alt_2274_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v_alt_2274_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2341_ = v_alt_2274_;
v_isShared_2342_ = v_isSharedCheck_2363_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_code_2339_);
lean_dec(v_alt_2274_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2363_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2343_; 
v___x_2343_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_code_2339_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_, v_a_2279_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2354_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2346_ = v___x_2343_;
v_isShared_2347_ = v_isSharedCheck_2354_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2343_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2354_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v_a_2344_);
v___x_2349_ = v___x_2341_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2351_; 
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 0, v___x_2349_);
v___x_2351_ = v___x_2346_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
else
{
lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2362_; 
lean_del_object(v___x_2341_);
v_a_2355_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2357_ = v___x_2343_;
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_dec(v___x_2343_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__8(lean_object* v_fvarId_2364_, size_t v_sz_2365_, size_t v_i_2366_, lean_object* v_bs_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
uint8_t v___x_2374_; 
v___x_2374_ = lean_usize_dec_lt(v_i_2366_, v_sz_2365_);
if (v___x_2374_ == 0)
{
lean_object* v___x_2375_; 
lean_dec(v_fvarId_2364_);
v___x_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2375_, 0, v_bs_2367_);
return v___x_2375_;
}
else
{
lean_object* v_v_2376_; lean_object* v___x_2377_; lean_object* v_bs_x27_2378_; lean_object* v___x_2379_; 
v_v_2376_ = lean_array_uget(v_bs_2367_, v_i_2366_);
v___x_2377_ = lean_unsigned_to_nat(0u);
v_bs_x27_2378_ = lean_array_uset(v_bs_2367_, v_i_2366_, v___x_2377_);
lean_inc(v_fvarId_2364_);
v___x_2379_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure(v_fvarId_2364_, v_v_2376_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; size_t v___x_2381_; size_t v___x_2382_; lean_object* v___x_2383_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2379_, 1);
v___x_2381_ = ((size_t)1ULL);
v___x_2382_ = lean_usize_add(v_i_2366_, v___x_2381_);
v___x_2383_ = lean_array_uset(v_bs_x27_2378_, v_i_2366_, v_a_2380_);
v_i_2366_ = v___x_2382_;
v_bs_2367_ = v___x_2383_;
goto _start;
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_dec_ref(v_bs_x27_2378_);
lean_dec(v_fvarId_2364_);
v_a_2385_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2379_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2379_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(lean_object* v_c_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_){
_start:
{
switch(lean_obj_tag(v_c_2393_))
{
case 0:
{
lean_object* v_decl_2400_; lean_object* v_k_2401_; lean_object* v___x_2402_; 
v_decl_2400_ = lean_ctor_get(v_c_2393_, 0);
lean_inc_ref(v_decl_2400_);
v_k_2401_ = lean_ctor_get(v_c_2393_, 1);
lean_inc_ref(v_k_2401_);
lean_dec_ref_known(v_c_2393_, 2);
v___x_2402_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet(v_decl_2400_, v_k_2401_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
return v___x_2402_;
}
case 1:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
lean_dec_ref_known(v_c_2393_, 2);
v___x_2403_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__2, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__2);
v___x_2404_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(v___x_2403_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
return v___x_2404_;
}
case 2:
{
lean_object* v_decl_2405_; lean_object* v_k_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2495_; 
v_decl_2405_ = lean_ctor_get(v_c_2393_, 0);
v_k_2406_ = lean_ctor_get(v_c_2393_, 1);
v_isSharedCheck_2495_ = !lean_is_exclusive(v_c_2393_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2408_ = v_c_2393_;
v_isShared_2409_ = v_isSharedCheck_2495_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_k_2406_);
lean_inc(v_decl_2405_);
lean_dec(v_c_2393_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2495_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v_fvarId_2410_; lean_object* v_binderName_2411_; lean_object* v_params_2412_; lean_object* v_type_2413_; lean_object* v_value_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2494_; 
v_fvarId_2410_ = lean_ctor_get(v_decl_2405_, 0);
v_binderName_2411_ = lean_ctor_get(v_decl_2405_, 1);
v_params_2412_ = lean_ctor_get(v_decl_2405_, 2);
v_type_2413_ = lean_ctor_get(v_decl_2405_, 3);
v_value_2414_ = lean_ctor_get(v_decl_2405_, 4);
v_isSharedCheck_2494_ = !lean_is_exclusive(v_decl_2405_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2416_ = v_decl_2405_;
v_isShared_2417_ = v_isSharedCheck_2494_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_value_2414_);
lean_inc(v_type_2413_);
lean_inc(v_params_2412_);
lean_inc(v_binderName_2411_);
lean_inc(v_fvarId_2410_);
lean_dec(v_decl_2405_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2494_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
size_t v_sz_2418_; size_t v___x_2419_; lean_object* v___x_2420_; 
v_sz_2418_ = lean_array_size(v_params_2412_);
v___x_2419_ = ((size_t)0ULL);
v___x_2420_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___redArg(v_sz_2418_, v___x_2419_, v_params_2412_, v_a_2394_, v_a_2396_, v_a_2397_, v_a_2398_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; size_t v_sz_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v_subst_2425_; lean_object* v_jpParamMask_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2485_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc_n(v_a_2421_, 2);
lean_dec_ref_known(v___x_2420_, 1);
v_sz_2422_ = lean_array_size(v_a_2421_);
v___x_2423_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__3(v_sz_2422_, v___x_2419_, v_a_2421_);
v___x_2424_ = lean_st_ref_take(v_a_2394_);
v_subst_2425_ = lean_ctor_get(v___x_2424_, 0);
v_jpParamMask_2426_ = lean_ctor_get(v___x_2424_, 1);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2428_ = v___x_2424_;
v_isShared_2429_ = v_isSharedCheck_2485_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_jpParamMask_2426_);
lean_inc(v_subst_2425_);
lean_dec(v___x_2424_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2485_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2430_; lean_object* v___x_2432_; 
lean_inc_ref(v___x_2423_);
lean_inc(v_fvarId_2410_);
v___x_2430_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Param_toImpure_spec__0___redArg(v_jpParamMask_2426_, v_fvarId_2410_, v___x_2423_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 1, v___x_2430_);
v___x_2432_ = v___x_2428_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_subst_2425_);
lean_ctor_set(v_reuseFailAlloc_2484_, 1, v___x_2430_);
v___x_2432_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
lean_object* v___x_2433_; lean_object* v___y_2435_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; 
v___x_2433_ = lean_st_ref_put(v_a_2394_, v___x_2432_);
v___x_2477_ = lean_unsigned_to_nat(0u);
v___x_2478_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__3));
v___x_2479_ = l_Array_zip___redArg(v_a_2421_, v___x_2423_);
lean_dec_ref(v___x_2423_);
v___x_2480_ = lean_array_get_size(v___x_2479_);
v___x_2481_ = lean_nat_dec_lt(v___x_2477_, v___x_2480_);
if (v___x_2481_ == 0)
{
lean_dec_ref(v___x_2479_);
v___y_2435_ = v___x_2478_;
goto v___jp_2434_;
}
else
{
size_t v___x_2482_; lean_object* v___x_2483_; 
v___x_2482_ = lean_usize_of_nat(v___x_2480_);
v___x_2483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__4(v___x_2479_, v___x_2419_, v___x_2482_, v___x_2478_);
lean_dec_ref(v___x_2479_);
v___y_2435_ = v___x_2483_;
goto v___jp_2434_;
}
v___jp_2434_:
{
lean_object* v___x_2436_; 
v___x_2436_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_value_2414_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2438_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2437_);
lean_dec_ref_known(v___x_2436_, 1);
v___x_2438_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_2406_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v_a_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_a_2439_);
lean_dec_ref_known(v___x_2438_, 1);
v___x_2440_ = lean_array_get_size(v_a_2421_);
lean_dec(v_a_2421_);
v___x_2441_ = l_Lean_Compiler_LCNF_lowerResultType(v_type_2413_, v___x_2440_, v_a_2397_, v_a_2398_);
lean_dec_ref(v_type_2413_);
if (lean_obj_tag(v___x_2441_) == 0)
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2468_; 
v_a_2442_ = lean_ctor_get(v___x_2441_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2444_ = v___x_2441_;
v_isShared_2445_ = v_isSharedCheck_2468_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2441_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2468_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
uint8_t v___x_2446_; lean_object* v___x_2448_; 
v___x_2446_ = 1;
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 4, v_a_2437_);
lean_ctor_set(v___x_2416_, 3, v_a_2442_);
lean_ctor_set(v___x_2416_, 2, v___y_2435_);
v___x_2448_ = v___x_2416_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_fvarId_2410_);
lean_ctor_set(v_reuseFailAlloc_2467_, 1, v_binderName_2411_);
lean_ctor_set(v_reuseFailAlloc_2467_, 2, v___y_2435_);
lean_ctor_set(v_reuseFailAlloc_2467_, 3, v_a_2442_);
lean_ctor_set(v_reuseFailAlloc_2467_, 4, v_a_2437_);
v___x_2448_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
lean_object* v___x_2449_; lean_object* v_lctx_2450_; lean_object* v_nextIdx_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2466_; 
v___x_2449_ = lean_st_ref_take(v_a_2396_);
v_lctx_2450_ = lean_ctor_get(v___x_2449_, 0);
v_nextIdx_2451_ = lean_ctor_get(v___x_2449_, 1);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2453_ = v___x_2449_;
v_isShared_2454_ = v_isSharedCheck_2466_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_nextIdx_2451_);
lean_inc(v_lctx_2450_);
lean_dec(v___x_2449_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2466_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2455_; lean_object* v___x_2457_; 
lean_inc_ref(v___x_2448_);
v___x_2455_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v___x_2446_, v_lctx_2450_, v___x_2448_);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v___x_2455_);
v___x_2457_ = v___x_2453_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2455_);
lean_ctor_set(v_reuseFailAlloc_2465_, 1, v_nextIdx_2451_);
v___x_2457_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
lean_object* v___x_2458_; lean_object* v___x_2460_; 
v___x_2458_ = lean_st_ref_put(v_a_2396_, v___x_2457_);
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 1, v_a_2439_);
lean_ctor_set(v___x_2408_, 0, v___x_2448_);
v___x_2460_ = v___x_2408_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v___x_2448_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v_a_2439_);
v___x_2460_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
lean_object* v___x_2462_; 
if (v_isShared_2445_ == 0)
{
lean_ctor_set(v___x_2444_, 0, v___x_2460_);
v___x_2462_ = v___x_2444_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v___x_2460_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
lean_dec(v_a_2439_);
lean_dec(v_a_2437_);
lean_dec_ref(v___y_2435_);
lean_del_object(v___x_2416_);
lean_dec(v_binderName_2411_);
lean_dec(v_fvarId_2410_);
lean_del_object(v___x_2408_);
v_a_2469_ = lean_ctor_get(v___x_2441_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2441_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2441_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
else
{
lean_dec(v_a_2437_);
lean_dec_ref(v___y_2435_);
lean_dec(v_a_2421_);
lean_del_object(v___x_2416_);
lean_dec_ref(v_type_2413_);
lean_dec(v_binderName_2411_);
lean_dec(v_fvarId_2410_);
lean_del_object(v___x_2408_);
return v___x_2438_;
}
}
else
{
lean_dec_ref(v___y_2435_);
lean_dec(v_a_2421_);
lean_del_object(v___x_2416_);
lean_dec_ref(v_type_2413_);
lean_dec(v_binderName_2411_);
lean_dec(v_fvarId_2410_);
lean_del_object(v___x_2408_);
lean_dec_ref(v_k_2406_);
return v___x_2436_;
}
}
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_del_object(v___x_2416_);
lean_dec_ref(v_value_2414_);
lean_dec_ref(v_type_2413_);
lean_dec(v_binderName_2411_);
lean_dec(v_fvarId_2410_);
lean_del_object(v___x_2408_);
lean_dec_ref(v_k_2406_);
v_a_2486_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2420_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2420_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
}
}
case 3:
{
lean_object* v_fvarId_2496_; lean_object* v_args_2497_; lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2527_; 
v_fvarId_2496_ = lean_ctor_get(v_c_2393_, 0);
v_args_2497_ = lean_ctor_get(v_c_2393_, 1);
v_isSharedCheck_2527_ = !lean_is_exclusive(v_c_2393_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2499_ = v_c_2393_;
v_isShared_2500_ = v_isSharedCheck_2527_;
goto v_resetjp_2498_;
}
else
{
lean_inc(v_args_2497_);
lean_inc(v_fvarId_2496_);
lean_dec(v_c_2393_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2527_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
lean_object* v_a_2502_; lean_object* v___x_2507_; lean_object* v_jpParamMask_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; uint8_t v___x_2514_; 
v___x_2507_ = lean_st_ref_get(v_a_2394_);
v_jpParamMask_2508_ = lean_ctor_get(v___x_2507_, 1);
lean_inc_ref(v_jpParamMask_2508_);
lean_dec(v___x_2507_);
v___x_2509_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__5(v_jpParamMask_2508_, v_fvarId_2496_);
lean_dec_ref(v_jpParamMask_2508_);
v___x_2510_ = lean_unsigned_to_nat(0u);
v___x_2511_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__4));
v___x_2512_ = l_Array_zip___redArg(v_args_2497_, v___x_2509_);
lean_dec_ref(v___x_2509_);
lean_dec_ref(v_args_2497_);
v___x_2513_ = lean_array_get_size(v___x_2512_);
v___x_2514_ = lean_nat_dec_lt(v___x_2510_, v___x_2513_);
if (v___x_2514_ == 0)
{
lean_dec_ref(v___x_2512_);
v_a_2502_ = v___x_2511_;
goto v___jp_2501_;
}
else
{
size_t v___x_2515_; size_t v___x_2516_; lean_object* v___x_2517_; 
v___x_2515_ = ((size_t)0ULL);
v___x_2516_ = lean_usize_of_nat(v___x_2513_);
v___x_2517_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6___redArg(v___x_2512_, v___x_2515_, v___x_2516_, v___x_2511_, v_a_2394_);
lean_dec_ref(v___x_2512_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v_a_2518_; 
v_a_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc(v_a_2518_);
lean_dec_ref_known(v___x_2517_, 1);
v_a_2502_ = v_a_2518_;
goto v___jp_2501_;
}
else
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2526_; 
lean_del_object(v___x_2499_);
lean_dec(v_fvarId_2496_);
v_a_2519_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2521_ = v___x_2517_;
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2517_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_a_2519_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
v___jp_2501_:
{
lean_object* v___x_2504_; 
if (v_isShared_2500_ == 0)
{
lean_ctor_set(v___x_2499_, 1, v_a_2502_);
v___x_2504_ = v___x_2499_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_fvarId_2496_);
lean_ctor_set(v_reuseFailAlloc_2506_, 1, v_a_2502_);
v___x_2504_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
lean_object* v___x_2505_; 
v___x_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
return v___x_2505_;
}
}
}
}
case 4:
{
lean_object* v_cases_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2638_; 
v_cases_2528_ = lean_ctor_get(v_c_2393_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v_c_2393_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2530_ = v_c_2393_;
v_isShared_2531_ = v_isSharedCheck_2638_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_cases_2528_);
lean_dec(v_c_2393_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2638_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v_typeName_2532_; lean_object* v_resultType_2533_; lean_object* v_discr_2534_; lean_object* v_alts_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2637_; 
v_typeName_2532_ = lean_ctor_get(v_cases_2528_, 0);
v_resultType_2533_ = lean_ctor_get(v_cases_2528_, 1);
v_discr_2534_ = lean_ctor_get(v_cases_2528_, 2);
v_alts_2535_ = lean_ctor_get(v_cases_2528_, 3);
v_isSharedCheck_2637_ = !lean_is_exclusive(v_cases_2528_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2537_ = v_cases_2528_;
v_isShared_2538_ = v_isSharedCheck_2637_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_alts_2535_);
lean_inc(v_discr_2534_);
lean_inc(v_resultType_2533_);
lean_inc(v_typeName_2532_);
lean_dec(v_cases_2528_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2637_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2539_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__5, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__5);
lean_inc(v_typeName_2532_);
v___x_2540_ = l_Lean_Compiler_LCNF_hasTrivialImpureStructure_x3f(v_typeName_2532_, v_a_2397_, v_a_2398_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
lean_dec_ref_known(v___x_2540_, 1);
if (lean_obj_tag(v_a_2541_) == 1)
{
lean_object* v_val_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; uint8_t v___x_2545_; 
lean_del_object(v___x_2537_);
lean_dec_ref(v_resultType_2533_);
lean_dec(v_typeName_2532_);
lean_del_object(v___x_2530_);
v_val_2542_ = lean_ctor_get(v_a_2541_, 0);
lean_inc(v_val_2542_);
lean_dec_ref_known(v_a_2541_, 1);
v___x_2543_ = lean_array_get_size(v_alts_2535_);
v___x_2544_ = lean_unsigned_to_nat(1u);
v___x_2545_ = lean_nat_dec_eq(v___x_2543_, v___x_2544_);
if (v___x_2545_ == 0)
{
lean_object* v___x_2546_; lean_object* v___x_2547_; 
lean_dec(v_val_2542_);
lean_dec_ref(v_alts_2535_);
lean_dec(v_discr_2534_);
v___x_2546_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__7, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__7_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__7);
v___x_2547_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(v___x_2546_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
return v___x_2547_;
}
else
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = lean_unsigned_to_nat(0u);
v___x_2549_ = lean_array_get(v___x_2539_, v_alts_2535_, v___x_2548_);
lean_dec_ref(v_alts_2535_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_ctorName_2550_; lean_object* v_params_2551_; lean_object* v_code_2552_; lean_object* v_ctorName_2553_; lean_object* v_fieldIdx_2554_; uint8_t v___x_2555_; 
v_ctorName_2550_ = lean_ctor_get(v___x_2549_, 0);
lean_inc(v_ctorName_2550_);
v_params_2551_ = lean_ctor_get(v___x_2549_, 1);
lean_inc_ref(v_params_2551_);
v_code_2552_ = lean_ctor_get(v___x_2549_, 2);
lean_inc_ref(v_code_2552_);
lean_dec_ref_known(v___x_2549_, 3);
v_ctorName_2553_ = lean_ctor_get(v_val_2542_, 0);
v_fieldIdx_2554_ = lean_ctor_get(v_val_2542_, 2);
v___x_2555_ = lean_name_eq(v_ctorName_2550_, v_ctorName_2553_);
lean_dec(v_ctorName_2550_);
if (v___x_2555_ == 0)
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
lean_dec_ref(v_code_2552_);
lean_dec_ref(v_params_2551_);
lean_dec(v_val_2542_);
lean_dec(v_discr_2534_);
v___x_2556_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__9, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__9_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__9);
v___x_2557_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(v___x_2556_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
return v___x_2557_;
}
else
{
lean_object* v___x_2558_; uint8_t v___x_2559_; 
v___x_2558_ = lean_array_get_size(v_params_2551_);
v___x_2559_ = lean_nat_dec_lt(v_fieldIdx_2554_, v___x_2558_);
if (v___x_2559_ == 0)
{
lean_object* v___x_2560_; lean_object* v___x_2561_; 
lean_dec_ref(v_code_2552_);
lean_dec_ref(v_params_2551_);
lean_dec(v_val_2542_);
lean_dec(v_discr_2534_);
v___x_2560_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__11, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__11_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__11);
v___x_2561_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(v___x_2560_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
return v___x_2561_;
}
else
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = lean_box(0);
v___x_2563_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg(v___x_2558_, v_params_2551_, v_val_2542_, v_discr_2534_, v___x_2548_, v___x_2562_, v_a_2394_);
lean_dec(v_val_2542_);
lean_dec_ref(v_params_2551_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_dec_ref_known(v___x_2563_, 1);
v_c_2393_ = v_code_2552_;
goto _start;
}
else
{
lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2572_; 
lean_dec_ref(v_code_2552_);
v_a_2565_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2567_ = v___x_2563_;
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v___x_2563_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2570_; 
if (v_isShared_2568_ == 0)
{
v___x_2570_ = v___x_2567_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2565_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
}
}
}
}
else
{
lean_object* v___x_2573_; lean_object* v___x_2574_; 
lean_dec(v___x_2549_);
lean_dec(v_val_2542_);
lean_dec(v_discr_2534_);
v___x_2573_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__13, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__13_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___closed__13);
v___x_2574_ = l_panic___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop_spec__0(v___x_2573_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
return v___x_2574_;
}
}
}
else
{
uint8_t v___x_2575_; lean_object* v___x_2576_; lean_object* v_subst_2577_; lean_object* v___x_2578_; 
lean_dec(v_a_2541_);
v___x_2575_ = 1;
v___x_2576_ = lean_st_ref_get(v_a_2394_);
v_subst_2577_ = lean_ctor_get(v___x_2576_, 0);
lean_inc_ref(v_subst_2577_);
lean_dec(v___x_2576_);
v___x_2578_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_2577_, v_discr_2534_, v___x_2575_);
lean_dec_ref(v_subst_2577_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_fvarId_2579_; lean_object* v___x_2580_; 
v_fvarId_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_fvarId_2579_);
lean_dec_ref_known(v___x_2578_, 1);
v___x_2580_ = l_Lean_Compiler_LCNF_toImpureType(v_resultType_2533_, v_a_2397_, v_a_2398_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_object* v_a_2581_; size_t v_sz_2582_; size_t v___x_2583_; lean_object* v___x_2584_; 
v_a_2581_ = lean_ctor_get(v___x_2580_, 0);
lean_inc(v_a_2581_);
lean_dec_ref_known(v___x_2580_, 1);
v_sz_2582_ = lean_array_size(v_alts_2535_);
v___x_2583_ = ((size_t)0ULL);
lean_inc(v_fvarId_2579_);
v___x_2584_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__8(v_fvarId_2579_, v_sz_2582_, v___x_2583_, v_alts_2535_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2585_; lean_object* v___x_2586_; 
v_a_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_a_2585_);
lean_dec_ref_known(v___x_2584_, 1);
v___x_2586_ = l_Lean_Compiler_LCNF_nameToImpureType(v_typeName_2532_, v_a_2397_, v_a_2398_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2602_; 
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2589_ = v___x_2586_;
v_isShared_2590_ = v_isSharedCheck_2602_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___x_2586_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2602_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2594_; 
v___x_2591_ = l_Lean_Expr_getAppFn(v_a_2587_);
lean_dec(v_a_2587_);
v___x_2592_ = l_Lean_Expr_constName_x21(v___x_2591_);
lean_dec_ref(v___x_2591_);
if (v_isShared_2538_ == 0)
{
lean_ctor_set(v___x_2537_, 3, v_a_2585_);
lean_ctor_set(v___x_2537_, 2, v_fvarId_2579_);
lean_ctor_set(v___x_2537_, 1, v_a_2581_);
lean_ctor_set(v___x_2537_, 0, v___x_2592_);
v___x_2594_ = v___x_2537_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v___x_2592_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v_a_2581_);
lean_ctor_set(v_reuseFailAlloc_2601_, 2, v_fvarId_2579_);
lean_ctor_set(v_reuseFailAlloc_2601_, 3, v_a_2585_);
v___x_2594_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
lean_object* v___x_2596_; 
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 0, v___x_2594_);
v___x_2596_ = v___x_2530_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
lean_object* v___x_2598_; 
if (v_isShared_2590_ == 0)
{
lean_ctor_set(v___x_2589_, 0, v___x_2596_);
v___x_2598_ = v___x_2589_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2596_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_dec(v_a_2585_);
lean_dec(v_a_2581_);
lean_dec(v_fvarId_2579_);
lean_del_object(v___x_2537_);
lean_del_object(v___x_2530_);
v_a_2603_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2586_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2586_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec(v_a_2581_);
lean_dec(v_fvarId_2579_);
lean_del_object(v___x_2537_);
lean_dec(v_typeName_2532_);
lean_del_object(v___x_2530_);
v_a_2611_ = lean_ctor_get(v___x_2584_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2584_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2584_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2584_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
lean_dec(v_fvarId_2579_);
lean_del_object(v___x_2537_);
lean_dec_ref(v_alts_2535_);
lean_dec(v_typeName_2532_);
lean_del_object(v___x_2530_);
v_a_2619_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2580_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2580_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
else
{
uint8_t v___x_2627_; lean_object* v___x_2628_; 
lean_del_object(v___x_2537_);
lean_dec_ref(v_alts_2535_);
lean_dec_ref(v_resultType_2533_);
lean_dec(v_typeName_2532_);
lean_del_object(v___x_2530_);
v___x_2627_ = 1;
v___x_2628_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_2627_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
return v___x_2628_;
}
}
}
else
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2636_; 
lean_del_object(v___x_2537_);
lean_dec_ref(v_alts_2535_);
lean_dec(v_discr_2534_);
lean_dec_ref(v_resultType_2533_);
lean_dec(v_typeName_2532_);
lean_del_object(v___x_2530_);
v_a_2629_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2636_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2631_ = v___x_2540_;
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v___x_2540_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2636_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_a_2629_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
return v___x_2634_;
}
}
}
}
}
}
case 5:
{
lean_object* v_fvarId_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2660_; 
v_fvarId_2639_ = lean_ctor_get(v_c_2393_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v_c_2393_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2641_ = v_c_2393_;
v_isShared_2642_ = v_isSharedCheck_2660_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_fvarId_2639_);
lean_dec(v_c_2393_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2660_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
uint8_t v___x_2643_; lean_object* v___x_2644_; lean_object* v_subst_2645_; lean_object* v___x_2646_; 
v___x_2643_ = 1;
v___x_2644_ = lean_st_ref_get(v_a_2394_);
v_subst_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc_ref(v_subst_2645_);
lean_dec(v___x_2644_);
v___x_2646_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_subst_2645_, v_fvarId_2639_, v___x_2643_);
lean_dec_ref(v_subst_2645_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_fvarId_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2657_; 
v_fvarId_2647_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2649_ = v___x_2646_;
v_isShared_2650_ = v_isSharedCheck_2657_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_fvarId_2647_);
lean_dec(v___x_2646_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2657_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v___x_2652_; 
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 0, v_fvarId_2647_);
v___x_2652_ = v___x_2641_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_fvarId_2647_);
v___x_2652_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
lean_object* v___x_2654_; 
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 0, v___x_2652_);
v___x_2654_ = v___x_2649_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v___x_2652_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
}
else
{
uint8_t v___x_2658_; lean_object* v___x_2659_; 
lean_del_object(v___x_2641_);
v___x_2658_ = 1;
v___x_2659_ = l_Lean_Compiler_LCNF_mkReturnErased(v___x_2658_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
return v___x_2659_;
}
}
}
default: 
{
lean_object* v_type_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2685_; 
v_type_2661_ = lean_ctor_get(v_c_2393_, 0);
v_isSharedCheck_2685_ = !lean_is_exclusive(v_c_2393_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2663_ = v_c_2393_;
v_isShared_2664_ = v_isSharedCheck_2685_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_type_2661_);
lean_dec(v_c_2393_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2685_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2665_; 
v___x_2665_ = l_Lean_Compiler_LCNF_toImpureType(v_type_2661_, v_a_2397_, v_a_2398_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2676_; 
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2668_ = v___x_2665_;
v_isShared_2669_ = v_isSharedCheck_2676_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_dec(v___x_2665_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2676_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2671_; 
if (v_isShared_2664_ == 0)
{
lean_ctor_set(v___x_2663_, 0, v_a_2666_);
v___x_2671_ = v___x_2663_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2666_);
v___x_2671_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2673_; 
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 0, v___x_2671_);
v___x_2673_ = v___x_2668_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v___x_2671_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
else
{
lean_object* v_a_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2684_; 
lean_del_object(v___x_2663_);
v_a_2677_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2679_ = v___x_2665_;
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_a_2677_);
lean_dec(v___x_2665_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2682_; 
if (v_isShared_2680_ == 0)
{
v___x_2682_ = v___x_2679_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_a_2677_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields_loop(lean_object* v_decl_2686_, lean_object* v_k_2687_, lean_object* v_ctorInfo_2688_, lean_object* v_fields_2689_, lean_object* v_irArgs_2690_, lean_object* v_i_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_){
_start:
{
lean_object* v___x_2698_; uint8_t v___x_2699_; 
v___x_2698_ = lean_array_get_size(v_irArgs_2690_);
v___x_2699_ = lean_nat_dec_lt(v_i_2691_, v___x_2698_);
if (v___x_2699_ == 0)
{
lean_object* v___x_2700_; 
lean_dec(v_i_2691_);
lean_dec_ref(v_decl_2686_);
v___x_2700_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_k_2687_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_, v_a_2696_);
return v___x_2700_;
}
else
{
lean_object* v___x_2701_; 
v___x_2701_ = lean_array_fget_borrowed(v_irArgs_2690_, v_i_2691_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2702_ = lean_unsigned_to_nat(1u);
v___x_2703_ = lean_nat_add(v_i_2691_, v___x_2702_);
lean_dec(v_i_2691_);
v_i_2691_ = v___x_2703_;
goto _start;
}
else
{
lean_object* v_fvarId_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v_fvarId_2705_ = lean_ctor_get(v___x_2701_, 0);
v___x_2706_ = lean_box(0);
v___x_2707_ = lean_array_get_borrowed(v___x_2706_, v_fields_2689_, v_i_2691_);
switch(lean_obj_tag(v___x_2707_))
{
case 2:
{
lean_object* v_i_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v_i_2708_ = lean_ctor_get(v___x_2707_, 0);
v___x_2709_ = lean_unsigned_to_nat(1u);
v___x_2710_ = lean_nat_add(v_i_2691_, v___x_2709_);
lean_dec(v_i_2691_);
lean_inc_ref(v_decl_2686_);
v___x_2711_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields_loop(v_decl_2686_, v_k_2687_, v_ctorInfo_2688_, v_fields_2689_, v_irArgs_2690_, v___x_2710_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_, v_a_2696_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2730_; 
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2714_ = v___x_2711_;
v_isShared_2715_ = v_isSharedCheck_2730_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2711_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2730_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v_fvarId_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2726_; 
v_fvarId_2716_ = lean_ctor_get(v_decl_2686_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v_decl_2686_);
if (v_isSharedCheck_2726_ == 0)
{
lean_object* v_unused_2727_; lean_object* v_unused_2728_; lean_object* v_unused_2729_; 
v_unused_2727_ = lean_ctor_get(v_decl_2686_, 3);
lean_dec(v_unused_2727_);
v_unused_2728_ = lean_ctor_get(v_decl_2686_, 2);
lean_dec(v_unused_2728_);
v_unused_2729_ = lean_ctor_get(v_decl_2686_, 1);
lean_dec(v_unused_2729_);
v___x_2718_ = v_decl_2686_;
v_isShared_2719_ = v_isSharedCheck_2726_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_fvarId_2716_);
lean_dec(v_decl_2686_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2726_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
lean_inc(v_fvarId_2705_);
lean_inc(v_i_2708_);
if (v_isShared_2719_ == 0)
{
lean_ctor_set_tag(v___x_2718_, 8);
lean_ctor_set(v___x_2718_, 3, v_a_2712_);
lean_ctor_set(v___x_2718_, 2, v_fvarId_2705_);
lean_ctor_set(v___x_2718_, 1, v_i_2708_);
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_fvarId_2716_);
lean_ctor_set(v_reuseFailAlloc_2725_, 1, v_i_2708_);
lean_ctor_set(v_reuseFailAlloc_2725_, 2, v_fvarId_2705_);
lean_ctor_set(v_reuseFailAlloc_2725_, 3, v_a_2712_);
v___x_2721_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
lean_object* v___x_2723_; 
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 0, v___x_2721_);
v___x_2723_ = v___x_2714_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v___x_2721_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
}
else
{
lean_dec_ref(v_decl_2686_);
return v___x_2711_;
}
}
case 3:
{
lean_object* v_offset_2731_; lean_object* v_type_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v_offset_2731_ = lean_ctor_get(v___x_2707_, 1);
v_type_2732_ = lean_ctor_get(v___x_2707_, 2);
v___x_2733_ = lean_unsigned_to_nat(1u);
v___x_2734_ = lean_nat_add(v_i_2691_, v___x_2733_);
lean_dec(v_i_2691_);
lean_inc_ref(v_decl_2686_);
v___x_2735_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields_loop(v_decl_2686_, v_k_2687_, v_ctorInfo_2688_, v_fields_2689_, v_irArgs_2690_, v___x_2734_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_, v_a_2696_);
if (lean_obj_tag(v___x_2735_) == 0)
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2748_; 
v_a_2736_ = lean_ctor_get(v___x_2735_, 0);
v_isSharedCheck_2748_ = !lean_is_exclusive(v___x_2735_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2738_ = v___x_2735_;
v_isShared_2739_ = v_isSharedCheck_2748_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2735_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2748_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v_fvarId_2740_; lean_object* v_size_2741_; lean_object* v_usize_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2746_; 
v_fvarId_2740_ = lean_ctor_get(v_decl_2686_, 0);
lean_inc(v_fvarId_2740_);
lean_dec_ref(v_decl_2686_);
v_size_2741_ = lean_ctor_get(v_ctorInfo_2688_, 2);
v_usize_2742_ = lean_ctor_get(v_ctorInfo_2688_, 3);
v___x_2743_ = lean_nat_add(v_size_2741_, v_usize_2742_);
lean_inc_ref(v_type_2732_);
lean_inc(v_fvarId_2705_);
lean_inc(v_offset_2731_);
v___x_2744_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v___x_2744_, 0, v_fvarId_2740_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
lean_ctor_set(v___x_2744_, 2, v_offset_2731_);
lean_ctor_set(v___x_2744_, 3, v_fvarId_2705_);
lean_ctor_set(v___x_2744_, 4, v_type_2732_);
lean_ctor_set(v___x_2744_, 5, v_a_2736_);
if (v_isShared_2739_ == 0)
{
lean_ctor_set(v___x_2738_, 0, v___x_2744_);
v___x_2746_ = v___x_2738_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v___x_2744_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
}
}
}
else
{
lean_dec_ref(v_decl_2686_);
return v___x_2735_;
}
}
default: 
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2749_ = lean_unsigned_to_nat(1u);
v___x_2750_ = lean_nat_add(v_i_2691_, v___x_2749_);
lean_dec(v_i_2691_);
v_i_2691_ = v___x_2750_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields(lean_object* v_decl_2752_, lean_object* v_k_2753_, lean_object* v_ctorInfo_2754_, lean_object* v_fields_2755_, lean_object* v_irArgs_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = lean_unsigned_to_nat(0u);
v___x_2764_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields_loop(v_decl_2752_, v_k_2753_, v_ctorInfo_2754_, v_fields_2755_, v_irArgs_2756_, v___x_2763_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields___boxed(lean_object* v_decl_2765_, lean_object* v_k_2766_, lean_object* v_ctorInfo_2767_, lean_object* v_fields_2768_, lean_object* v_irArgs_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields(v_decl_2765_, v_k_2766_, v_ctorInfo_2767_, v_fields_2768_, v_irArgs_2769_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_);
lean_dec(v_a_2774_);
lean_dec_ref(v_a_2773_);
lean_dec(v_a_2772_);
lean_dec_ref(v_a_2771_);
lean_dec(v_a_2770_);
lean_dec_ref(v_irArgs_2769_);
lean_dec_ref(v_fields_2768_);
lean_dec_ref(v_ctorInfo_2767_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkPap___boxed(lean_object* v_decl_2777_, lean_object* v_k_2778_, lean_object* v_name_2779_, lean_object* v_args_2780_, lean_object* v_a_2781_, lean_object* v_a_2782_, lean_object* v_a_2783_, lean_object* v_a_2784_, lean_object* v_a_2785_, lean_object* v_a_2786_){
_start:
{
lean_object* v_res_2787_; 
v_res_2787_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkPap(v_decl_2777_, v_k_2778_, v_name_2779_, v_args_2780_, v_a_2781_, v_a_2782_, v_a_2783_, v_a_2784_, v_a_2785_);
lean_dec(v_a_2785_);
lean_dec_ref(v_a_2784_);
lean_dec(v_a_2783_);
lean_dec_ref(v_a_2782_);
lean_dec(v_a_2781_);
return v_res_2787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkFap___boxed(lean_object* v_decl_2788_, lean_object* v_k_2789_, lean_object* v_name_2790_, lean_object* v_args_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkFap(v_decl_2788_, v_k_2789_, v_name_2790_, v_args_2791_, v_a_2792_, v_a_2793_, v_a_2794_, v_a_2795_, v_a_2796_);
lean_dec(v_a_2796_);
lean_dec_ref(v_a_2795_);
lean_dec(v_a_2794_);
lean_dec_ref(v_a_2793_);
lean_dec(v_a_2792_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueErased___boxed(lean_object* v_k_2799_, lean_object* v_fvarId_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_){
_start:
{
lean_object* v_res_2807_; 
v_res_2807_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueErased(v_k_2799_, v_fvarId_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_);
lean_dec(v_a_2805_);
lean_dec_ref(v_a_2804_);
lean_dec(v_a_2803_);
lean_dec_ref(v_a_2802_);
lean_dec(v_a_2801_);
return v_res_2807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkApplication___boxed(lean_object* v_decl_2808_, lean_object* v_k_2809_, lean_object* v_name_2810_, lean_object* v_numParams_2811_, lean_object* v_args_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkApplication(v_decl_2808_, v_k_2809_, v_name_2810_, v_numParams_2811_, v_args_2812_, v_a_2813_, v_a_2814_, v_a_2815_, v_a_2816_, v_a_2817_);
lean_dec(v_a_2817_);
lean_dec_ref(v_a_2816_);
lean_dec(v_a_2815_);
lean_dec_ref(v_a_2814_);
lean_dec(v_a_2813_);
return v_res_2819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__8___boxed(lean_object* v_fvarId_2820_, lean_object* v_sz_2821_, lean_object* v_i_2822_, lean_object* v_bs_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_){
_start:
{
size_t v_sz_boxed_2830_; size_t v_i_boxed_2831_; lean_object* v_res_2832_; 
v_sz_boxed_2830_ = lean_unbox_usize(v_sz_2821_);
lean_dec(v_sz_2821_);
v_i_boxed_2831_ = lean_unbox_usize(v_i_2822_);
lean_dec(v_i_2822_);
v_res_2832_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__8(v_fvarId_2820_, v_sz_boxed_2830_, v_i_boxed_2831_, v_bs_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
lean_dec(v___y_2826_);
lean_dec_ref(v___y_2825_);
lean_dec(v___y_2824_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet___boxed(lean_object* v_k_2833_, lean_object* v_decl_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_continueLet(v_k_2833_, v_decl_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_);
lean_dec(v_a_2839_);
lean_dec_ref(v_a_2838_);
lean_dec(v_a_2837_);
lean_dec_ref(v_a_2836_);
lean_dec(v_a_2835_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure___boxed(lean_object* v_discr_2842_, lean_object* v_alt_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_, lean_object* v_a_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure(v_discr_2842_, v_alt_2843_, v_a_2844_, v_a_2845_, v_a_2846_, v_a_2847_, v_a_2848_);
lean_dec(v_a_2848_);
lean_dec_ref(v_a_2847_);
lean_dec(v_a_2846_);
lean_dec_ref(v_a_2845_);
lean_dec(v_a_2844_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields_loop___boxed(lean_object* v_decl_2851_, lean_object* v_k_2852_, lean_object* v_ctorInfo_2853_, lean_object* v_fields_2854_, lean_object* v_irArgs_2855_, lean_object* v_i_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v_res_2863_; 
v_res_2863_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_lowerNonObjectFields_loop(v_decl_2851_, v_k_2852_, v_ctorInfo_2853_, v_fields_2854_, v_irArgs_2855_, v_i_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_);
lean_dec(v_a_2861_);
lean_dec_ref(v_a_2860_);
lean_dec(v_a_2859_);
lean_dec_ref(v_a_2858_);
lean_dec(v_a_2857_);
lean_dec_ref(v_irArgs_2855_);
lean_dec_ref(v_fields_2854_);
lean_dec_ref(v_ctorInfo_2853_);
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication___boxed(lean_object* v_decl_2864_, lean_object* v_k_2865_, lean_object* v_name_2866_, lean_object* v_numParams_2867_, lean_object* v_args_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_){
_start:
{
lean_object* v_res_2875_; 
v_res_2875_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_mkOverApplication(v_decl_2864_, v_k_2865_, v_name_2866_, v_numParams_2867_, v_args_2868_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_, v_a_2873_);
lean_dec(v_a_2873_);
lean_dec_ref(v_a_2872_);
lean_dec(v_a_2871_);
lean_dec_ref(v_a_2870_);
lean_dec(v_a_2869_);
lean_dec_ref(v_args_2868_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop___boxed(lean_object* v_discr_2876_, lean_object* v_k_2877_, lean_object* v_ctorInfo_2878_, lean_object* v_spills_2879_, lean_object* v_params_2880_, lean_object* v_fields_2881_, lean_object* v_i_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_){
_start:
{
lean_object* v_res_2889_; 
v_res_2889_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Alt_toImpure_loop(v_discr_2876_, v_k_2877_, v_ctorInfo_2878_, v_spills_2879_, v_params_2880_, v_fields_2881_, v_i_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_, v_a_2887_);
lean_dec(v_a_2887_);
lean_dec_ref(v_a_2886_);
lean_dec(v_a_2885_);
lean_dec_ref(v_a_2884_);
lean_dec(v_a_2883_);
lean_dec_ref(v_fields_2881_);
lean_dec_ref(v_params_2880_);
lean_dec_ref(v_spills_2879_);
lean_dec_ref(v_ctorInfo_2878_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure___boxed(lean_object* v_c_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_c_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_);
lean_dec(v_a_2895_);
lean_dec_ref(v_a_2894_);
lean_dec(v_a_2893_);
lean_dec_ref(v_a_2892_);
lean_dec(v_a_2891_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet___boxed(lean_object* v_decl_2898_, lean_object* v_k_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_){
_start:
{
lean_object* v_res_2906_; 
v_res_2906_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet(v_decl_2898_, v_k_2899_, v_a_2900_, v_a_2901_, v_a_2902_, v_a_2903_, v_a_2904_);
lean_dec(v_a_2904_);
lean_dec_ref(v_a_2903_);
lean_dec(v_a_2902_);
lean_dec_ref(v_a_2901_);
lean_dec(v_a_2900_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13(lean_object* v_00_u03b1_2907_, lean_object* v_msg_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v___x_2915_; 
v___x_2915_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(v_msg_2908_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___boxed(lean_object* v_00_u03b1_2916_, lean_object* v_msg_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13(v_00_u03b1_2916_, v_msg_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2918_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2(size_t v_sz_2925_, size_t v_i_2926_, lean_object* v_bs_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
lean_object* v___x_2934_; 
v___x_2934_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___redArg(v_sz_2925_, v_i_2926_, v_bs_2927_, v___y_2928_, v___y_2930_, v___y_2931_, v___y_2932_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___boxed(lean_object* v_sz_2935_, lean_object* v_i_2936_, lean_object* v_bs_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_){
_start:
{
size_t v_sz_boxed_2944_; size_t v_i_boxed_2945_; lean_object* v_res_2946_; 
v_sz_boxed_2944_ = lean_unbox_usize(v_sz_2935_);
lean_dec(v_sz_2935_);
v_i_boxed_2945_ = lean_unbox_usize(v_i_2936_);
lean_dec(v_i_2936_);
v_res_2946_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2(v_sz_boxed_2944_, v_i_boxed_2945_, v_bs_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
lean_dec(v___y_2942_);
lean_dec_ref(v___y_2941_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
lean_dec(v___y_2938_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6(lean_object* v_as_2947_, size_t v_i_2948_, size_t v_stop_2949_, lean_object* v_b_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_){
_start:
{
lean_object* v___x_2957_; 
v___x_2957_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6___redArg(v_as_2947_, v_i_2948_, v_stop_2949_, v_b_2950_, v___y_2951_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6___boxed(lean_object* v_as_2958_, lean_object* v_i_2959_, lean_object* v_stop_2960_, lean_object* v_b_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_){
_start:
{
size_t v_i_boxed_2968_; size_t v_stop_boxed_2969_; lean_object* v_res_2970_; 
v_i_boxed_2968_ = lean_unbox_usize(v_i_2959_);
lean_dec(v_i_2959_);
v_stop_boxed_2969_ = lean_unbox_usize(v_stop_2960_);
lean_dec(v_stop_2960_);
v_res_2970_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__6(v_as_2958_, v_i_boxed_2968_, v_stop_boxed_2969_, v_b_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec_ref(v___y_2963_);
lean_dec(v___y_2962_);
lean_dec_ref(v_as_2958_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7(lean_object* v_upperBound_2971_, lean_object* v_params_2972_, lean_object* v_val_2973_, lean_object* v_discr_2974_, lean_object* v_inst_2975_, lean_object* v_R_2976_, lean_object* v_a_2977_, lean_object* v_b_2978_, lean_object* v_c_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v___x_2986_; 
v___x_2986_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___redArg(v_upperBound_2971_, v_params_2972_, v_val_2973_, v_discr_2974_, v_a_2977_, v_b_2978_, v___y_2980_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7___boxed(lean_object* v_upperBound_2987_, lean_object* v_params_2988_, lean_object* v_val_2989_, lean_object* v_discr_2990_, lean_object* v_inst_2991_, lean_object* v_R_2992_, lean_object* v_a_2993_, lean_object* v_b_2994_, lean_object* v_c_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_){
_start:
{
lean_object* v_res_3002_; 
v_res_3002_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__7(v_upperBound_2987_, v_params_2988_, v_val_2989_, v_discr_2990_, v_inst_2991_, v_R_2992_, v_a_2993_, v_b_2994_, v_c_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec(v___y_2998_);
lean_dec_ref(v___y_2997_);
lean_dec(v___y_2996_);
lean_dec_ref(v_val_2989_);
lean_dec_ref(v_params_2988_);
lean_dec(v_upperBound_2987_);
return v_res_3002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12(size_t v_sz_3003_, size_t v_i_3004_, lean_object* v_bs_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v___x_3012_; 
v___x_3012_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___redArg(v_sz_3003_, v_i_3004_, v_bs_3005_, v___y_3006_);
return v___x_3012_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12___boxed(lean_object* v_sz_3013_, lean_object* v_i_3014_, lean_object* v_bs_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_){
_start:
{
size_t v_sz_boxed_3022_; size_t v_i_boxed_3023_; lean_object* v_res_3024_; 
v_sz_boxed_3022_ = lean_unbox_usize(v_sz_3013_);
lean_dec(v_sz_3013_);
v_i_boxed_3023_ = lean_unbox_usize(v_i_3014_);
lean_dec(v_i_3014_);
v_res_3024_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__12(v_sz_boxed_3022_, v_i_boxed_3023_, v_bs_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_);
lean_dec(v___y_3020_);
lean_dec_ref(v___y_3019_);
lean_dec(v___y_3018_);
lean_dec_ref(v___y_3017_);
lean_dec(v___y_3016_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14(lean_object* v_upperBound_3025_, lean_object* v_fieldInfo_3026_, lean_object* v___x_3027_, lean_object* v_inst_3028_, lean_object* v_R_3029_, lean_object* v_a_3030_, lean_object* v_b_3031_, lean_object* v_c_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_){
_start:
{
lean_object* v___x_3039_; 
v___x_3039_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14___redArg(v_upperBound_3025_, v_fieldInfo_3026_, v___x_3027_, v_a_3030_, v_b_3031_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14___boxed(lean_object* v_upperBound_3040_, lean_object* v_fieldInfo_3041_, lean_object* v___x_3042_, lean_object* v_inst_3043_, lean_object* v_R_3044_, lean_object* v_a_3045_, lean_object* v_b_3046_, lean_object* v_c_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_){
_start:
{
lean_object* v_res_3054_; 
v_res_3054_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__14(v_upperBound_3040_, v_fieldInfo_3041_, v___x_3042_, v_inst_3043_, v_R_3044_, v_a_3045_, v_b_3046_, v_c_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
lean_dec(v___y_3052_);
lean_dec_ref(v___y_3051_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v___y_3048_);
lean_dec_ref(v___x_3042_);
lean_dec_ref(v_fieldInfo_3041_);
lean_dec(v_upperBound_3040_);
return v_res_3054_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__1(void){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; 
v___x_3056_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__0));
v___x_3057_ = l_Lean_stringToMessageData(v___x_3056_);
return v___x_3057_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__3(void){
_start:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__2));
v___x_3060_ = l_Lean_stringToMessageData(v___x_3059_);
return v___x_3060_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__5(void){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3062_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__4));
v___x_3063_ = l_Lean_stringToMessageData(v___x_3062_);
return v___x_3063_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__7(void){
_start:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3065_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__6));
v___x_3066_ = l_Lean_stringToMessageData(v___x_3065_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl(lean_object* v_decl_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_){
_start:
{
lean_object* v_toSignature_3074_; lean_object* v_value_3075_; uint8_t v_recursive_3076_; lean_object* v_inlineAttr_x3f_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3209_; 
v_toSignature_3074_ = lean_ctor_get(v_decl_3067_, 0);
v_value_3075_ = lean_ctor_get(v_decl_3067_, 1);
v_recursive_3076_ = lean_ctor_get_uint8(v_decl_3067_, sizeof(void*)*3);
v_inlineAttr_x3f_3077_ = lean_ctor_get(v_decl_3067_, 2);
v_isSharedCheck_3209_ = !lean_is_exclusive(v_decl_3067_);
if (v_isSharedCheck_3209_ == 0)
{
v___x_3079_ = v_decl_3067_;
v_isShared_3080_ = v_isSharedCheck_3209_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_inlineAttr_x3f_3077_);
lean_inc(v_value_3075_);
lean_inc(v_toSignature_3074_);
lean_dec(v_decl_3067_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3209_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v_name_3081_; lean_object* v_levelParams_3082_; lean_object* v_type_3083_; lean_object* v_params_3084_; uint8_t v_safe_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3208_; 
v_name_3081_ = lean_ctor_get(v_toSignature_3074_, 0);
v_levelParams_3082_ = lean_ctor_get(v_toSignature_3074_, 1);
v_type_3083_ = lean_ctor_get(v_toSignature_3074_, 2);
v_params_3084_ = lean_ctor_get(v_toSignature_3074_, 3);
v_safe_3085_ = lean_ctor_get_uint8(v_toSignature_3074_, sizeof(void*)*4);
v_isSharedCheck_3208_ = !lean_is_exclusive(v_toSignature_3074_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3087_ = v_toSignature_3074_;
v_isShared_3088_ = v_isSharedCheck_3208_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_params_3084_);
lean_inc(v_type_3083_);
lean_inc(v_levelParams_3082_);
lean_inc(v_name_3081_);
lean_dec(v_toSignature_3074_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3208_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
size_t v_sz_3089_; size_t v___x_3090_; lean_object* v___x_3091_; 
v_sz_3089_ = lean_array_size(v_params_3084_);
v___x_3090_ = ((size_t)0ULL);
lean_inc_ref(v_params_3084_);
v___x_3091_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure_spec__2___redArg(v_sz_3089_, v___x_3090_, v_params_3084_, v_a_3068_, v_a_3070_, v_a_3071_, v_a_3072_);
if (lean_obj_tag(v___x_3091_) == 0)
{
lean_object* v_a_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
v_a_3092_ = lean_ctor_get(v___x_3091_, 0);
lean_inc(v_a_3092_);
lean_dec_ref_known(v___x_3091_, 1);
v___x_3093_ = lean_array_get_size(v_params_3084_);
lean_dec_ref(v_params_3084_);
v___x_3094_ = l_Lean_Compiler_LCNF_lowerResultType(v_type_3083_, v___x_3093_, v_a_3071_, v_a_3072_);
lean_dec_ref(v_type_3083_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3191_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3191_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3097_ = v___x_3094_;
v_isShared_3098_ = v_isSharedCheck_3191_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3094_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3191_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3099_; lean_object* v_env_3100_; lean_object* v___x_3101_; uint8_t v___x_3102_; 
v___x_3099_ = lean_st_ref_get(v_a_3072_);
v_env_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc_ref(v_env_3100_);
lean_dec(v___x_3099_);
v___x_3101_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr;
lean_inc(v_name_3081_);
v___x_3102_ = l_Lean_TagAttribute_hasTag(v___x_3101_, v_env_3100_, v_name_3081_);
if (lean_obj_tag(v_value_3075_) == 0)
{
lean_object* v_code_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3153_; 
lean_del_object(v___x_3097_);
v_code_3103_ = lean_ctor_get(v_value_3075_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v_value_3075_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3105_ = v_value_3075_;
v_isShared_3106_ = v_isSharedCheck_3153_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_code_3103_);
lean_dec(v_value_3075_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3153_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; 
if (v___x_3102_ == 0)
{
v___y_3108_ = v_a_3068_;
v___y_3109_ = v_a_3069_;
v___y_3110_ = v_a_3070_;
v___y_3111_ = v_a_3071_;
v___y_3112_ = v_a_3072_;
goto v___jp_3107_;
}
else
{
lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_del_object(v___x_3105_);
lean_dec_ref(v_code_3103_);
lean_dec(v_a_3095_);
lean_dec(v_a_3092_);
lean_del_object(v___x_3087_);
lean_dec(v_levelParams_3082_);
lean_del_object(v___x_3079_);
lean_dec(v_inlineAttr_x3f_3077_);
v___x_3139_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__1, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__1);
v___x_3140_ = l_Lean_MessageData_ofName(v_name_3081_);
v___x_3141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3141_, 0, v___x_3139_);
lean_ctor_set(v___x_3141_, 1, v___x_3140_);
v___x_3142_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__3, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__3);
v___x_3143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3141_);
lean_ctor_set(v___x_3143_, 1, v___x_3142_);
v___x_3144_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(v___x_3143_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3144_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3144_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
v___jp_3107_:
{
lean_object* v___x_3113_; 
v___x_3113_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Code_toImpure(v_code_3103_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3130_; 
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
v_isSharedCheck_3130_ = !lean_is_exclusive(v___x_3113_);
if (v_isSharedCheck_3130_ == 0)
{
v___x_3116_ = v___x_3113_;
v_isShared_3117_ = v_isSharedCheck_3130_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3113_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3130_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3119_; 
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 3, v_a_3092_);
lean_ctor_set(v___x_3087_, 2, v_a_3095_);
v___x_3119_ = v___x_3087_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v_name_3081_);
lean_ctor_set(v_reuseFailAlloc_3129_, 1, v_levelParams_3082_);
lean_ctor_set(v_reuseFailAlloc_3129_, 2, v_a_3095_);
lean_ctor_set(v_reuseFailAlloc_3129_, 3, v_a_3092_);
lean_ctor_set_uint8(v_reuseFailAlloc_3129_, sizeof(void*)*4, v_safe_3085_);
v___x_3119_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
lean_object* v___x_3121_; 
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 0, v_a_3114_);
v___x_3121_ = v___x_3105_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v_a_3114_);
v___x_3121_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
lean_object* v___x_3123_; 
if (v_isShared_3080_ == 0)
{
lean_ctor_set(v___x_3079_, 1, v___x_3121_);
lean_ctor_set(v___x_3079_, 0, v___x_3119_);
v___x_3123_ = v___x_3079_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v___x_3119_);
lean_ctor_set(v_reuseFailAlloc_3127_, 1, v___x_3121_);
lean_ctor_set(v_reuseFailAlloc_3127_, 2, v_inlineAttr_x3f_3077_);
lean_ctor_set_uint8(v_reuseFailAlloc_3127_, sizeof(void*)*3, v_recursive_3076_);
v___x_3123_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
lean_object* v___x_3125_; 
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 0, v___x_3123_);
v___x_3125_ = v___x_3116_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3123_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
}
}
}
else
{
lean_object* v_a_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3138_; 
lean_del_object(v___x_3105_);
lean_dec(v_a_3095_);
lean_dec(v_a_3092_);
lean_del_object(v___x_3087_);
lean_dec(v_levelParams_3082_);
lean_dec(v_name_3081_);
lean_del_object(v___x_3079_);
lean_dec(v_inlineAttr_x3f_3077_);
v_a_3131_ = lean_ctor_get(v___x_3113_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v___x_3113_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3133_ = v___x_3113_;
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_a_3131_);
lean_dec(v___x_3113_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v___x_3136_; 
if (v_isShared_3134_ == 0)
{
v___x_3136_ = v___x_3133_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v_a_3131_);
v___x_3136_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
return v___x_3136_;
}
}
}
}
}
}
else
{
lean_object* v_externAttrData_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3190_; 
v_externAttrData_3154_ = lean_ctor_get(v_value_3075_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v_value_3075_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3156_ = v_value_3075_;
v_isShared_3157_ = v_isSharedCheck_3190_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_externAttrData_3154_);
lean_dec(v_value_3075_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3190_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v_resultType_3159_; 
if (v___x_3102_ == 0)
{
v_resultType_3159_ = v_a_3095_;
goto v___jp_3158_;
}
else
{
uint8_t v___x_3172_; 
v___x_3172_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_a_3095_);
if (v___x_3172_ == 0)
{
lean_object* v___x_3173_; 
lean_dec(v_a_3095_);
v___x_3173_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__2, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_litValueImpureType___closed__2);
v_resultType_3159_ = v___x_3173_;
goto v___jp_3158_;
}
else
{
lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v_a_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3189_; 
lean_del_object(v___x_3156_);
lean_dec(v_externAttrData_3154_);
lean_del_object(v___x_3097_);
lean_dec(v_a_3092_);
lean_del_object(v___x_3087_);
lean_dec(v_levelParams_3082_);
lean_del_object(v___x_3079_);
lean_dec(v_inlineAttr_x3f_3077_);
v___x_3174_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__5, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__5);
v___x_3175_ = l_Lean_MessageData_ofName(v_name_3081_);
v___x_3176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3174_);
lean_ctor_set(v___x_3176_, 1, v___x_3175_);
v___x_3177_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__7, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__7_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___closed__7);
v___x_3178_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3176_);
lean_ctor_set(v___x_3178_, 1, v___x_3177_);
v___x_3179_ = l_Lean_MessageData_ofExpr(v_a_3095_);
v___x_3180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3178_);
lean_ctor_set(v___x_3180_, 1, v___x_3179_);
v___x_3181_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_lowerLet_spec__13___redArg(v___x_3180_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3181_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3184_ = v___x_3181_;
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_a_3182_);
lean_dec(v___x_3181_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3187_; 
if (v_isShared_3185_ == 0)
{
v___x_3187_ = v___x_3184_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_a_3182_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
}
v___jp_3158_:
{
lean_object* v___x_3161_; 
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 3, v_a_3092_);
lean_ctor_set(v___x_3087_, 2, v_resultType_3159_);
v___x_3161_ = v___x_3087_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_name_3081_);
lean_ctor_set(v_reuseFailAlloc_3171_, 1, v_levelParams_3082_);
lean_ctor_set(v_reuseFailAlloc_3171_, 2, v_resultType_3159_);
lean_ctor_set(v_reuseFailAlloc_3171_, 3, v_a_3092_);
lean_ctor_set_uint8(v_reuseFailAlloc_3171_, sizeof(void*)*4, v_safe_3085_);
v___x_3161_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
lean_object* v___x_3163_; 
if (v_isShared_3157_ == 0)
{
v___x_3163_ = v___x_3156_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v_externAttrData_3154_);
v___x_3163_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
lean_object* v___x_3165_; 
if (v_isShared_3080_ == 0)
{
lean_ctor_set(v___x_3079_, 1, v___x_3163_);
lean_ctor_set(v___x_3079_, 0, v___x_3161_);
v___x_3165_ = v___x_3079_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3161_);
lean_ctor_set(v_reuseFailAlloc_3169_, 1, v___x_3163_);
lean_ctor_set(v_reuseFailAlloc_3169_, 2, v_inlineAttr_x3f_3077_);
lean_ctor_set_uint8(v_reuseFailAlloc_3169_, sizeof(void*)*3, v_recursive_3076_);
v___x_3165_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
lean_object* v___x_3167_; 
if (v_isShared_3098_ == 0)
{
lean_ctor_set(v___x_3097_, 0, v___x_3165_);
v___x_3167_ = v___x_3097_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v___x_3165_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
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
lean_object* v_a_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3199_; 
lean_dec(v_a_3092_);
lean_del_object(v___x_3087_);
lean_dec(v_levelParams_3082_);
lean_dec(v_name_3081_);
lean_del_object(v___x_3079_);
lean_dec(v_inlineAttr_x3f_3077_);
lean_dec_ref(v_value_3075_);
v_a_3192_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3194_ = v___x_3094_;
v_isShared_3195_ = v_isSharedCheck_3199_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_a_3192_);
lean_dec(v___x_3094_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3199_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___x_3197_; 
if (v_isShared_3195_ == 0)
{
v___x_3197_ = v___x_3194_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v_a_3192_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
lean_del_object(v___x_3087_);
lean_dec_ref(v_params_3084_);
lean_dec_ref(v_type_3083_);
lean_dec(v_levelParams_3082_);
lean_dec(v_name_3081_);
lean_del_object(v___x_3079_);
lean_dec(v_inlineAttr_x3f_3077_);
lean_dec_ref(v_value_3075_);
v_a_3200_ = lean_ctor_get(v___x_3091_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_3091_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3091_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl___boxed(lean_object* v_decl_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl(v_decl_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_, v_a_3215_);
lean_dec(v_a_3215_);
lean_dec_ref(v_a_3214_);
lean_dec(v_a_3213_);
lean_dec_ref(v_a_3212_);
lean_dec(v_a_3211_);
return v_res_3217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_go(lean_object* v_decl_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_){
_start:
{
lean_object* v___x_3225_; 
v___x_3225_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_lowerDecl(v_decl_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; lean_object* v___x_3227_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc_n(v_a_3226_, 2);
lean_dec_ref_known(v___x_3225_, 1);
v___x_3227_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v_a_3226_, v_a_3223_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3234_ == 0)
{
lean_object* v_unused_3235_; 
v_unused_3235_ = lean_ctor_get(v___x_3227_, 0);
lean_dec(v_unused_3235_);
v___x_3229_ = v___x_3227_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_dec(v___x_3227_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
lean_ctor_set(v___x_3229_, 0, v_a_3226_);
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3226_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
lean_dec(v_a_3226_);
v_a_3236_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3227_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3227_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
else
{
return v___x_3225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_go___boxed(lean_object* v_decl_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_){
_start:
{
lean_object* v_res_3251_; 
v_res_3251_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_go(v_decl_3244_, v_a_3245_, v_a_3246_, v_a_3247_, v_a_3248_, v_a_3249_);
lean_dec(v_a_3249_);
lean_dec_ref(v_a_3248_);
lean_dec(v_a_3247_);
lean_dec_ref(v_a_3246_);
lean_dec(v_a_3245_);
return v_res_3251_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__0(void){
_start:
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3252_ = lean_box(0);
v___x_3253_ = lean_unsigned_to_nat(16u);
v___x_3254_ = lean_mk_array(v___x_3253_, v___x_3252_);
return v___x_3254_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__1(void){
_start:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; 
v___x_3255_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__0, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__0);
v___x_3256_ = lean_unsigned_to_nat(0u);
v___x_3257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3256_);
lean_ctor_set(v___x_3257_, 1, v___x_3255_);
return v___x_3257_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__2(void){
_start:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3258_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__1, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__1);
v___x_3259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3258_);
lean_ctor_set(v___x_3259_, 1, v___x_3258_);
return v___x_3259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure(lean_object* v_decl_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_){
_start:
{
lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3266_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__2, &l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___closed__2);
v___x_3267_ = lean_st_mk_ref(v___x_3266_);
v___x_3268_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure_go(v_decl_3260_, v___x_3267_, v_a_3261_, v_a_3262_, v_a_3263_, v_a_3264_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3277_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3271_ = v___x_3268_;
v_isShared_3272_ = v_isSharedCheck_3277_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3268_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3277_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3273_; lean_object* v___x_3275_; 
v___x_3273_ = lean_st_ref_get(v___x_3267_);
lean_dec(v___x_3267_);
lean_dec(v___x_3273_);
if (v_isShared_3272_ == 0)
{
v___x_3275_ = v___x_3271_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3269_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
else
{
lean_dec(v___x_3267_);
return v___x_3268_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure___boxed(lean_object* v_decl_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure(v_decl_3278_, v_a_3279_, v_a_3280_, v_a_3281_, v_a_3282_);
lean_dec(v_a_3282_);
lean_dec_ref(v_a_3281_);
lean_dec(v_a_3280_);
lean_dec_ref(v_a_3279_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toImpure_spec__0(size_t v_sz_3285_, size_t v_i_3286_, lean_object* v_bs_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_){
_start:
{
uint8_t v___x_3293_; 
v___x_3293_ = lean_usize_dec_lt(v_i_3286_, v_sz_3285_);
if (v___x_3293_ == 0)
{
lean_object* v___x_3294_; 
v___x_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3294_, 0, v_bs_3287_);
return v___x_3294_;
}
else
{
lean_object* v_v_3295_; lean_object* v___x_3296_; lean_object* v_bs_x27_3297_; lean_object* v___x_3298_; 
v_v_3295_ = lean_array_uget(v_bs_3287_, v_i_3286_);
v___x_3296_ = lean_unsigned_to_nat(0u);
v_bs_x27_3297_ = lean_array_uset(v_bs_3287_, v_i_3286_, v___x_3296_);
v___x_3298_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_Decl_toImpure(v_v_3295_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; size_t v___x_3300_; size_t v___x_3301_; lean_object* v___x_3302_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
lean_dec_ref_known(v___x_3298_, 1);
v___x_3300_ = ((size_t)1ULL);
v___x_3301_ = lean_usize_add(v_i_3286_, v___x_3300_);
v___x_3302_ = lean_array_uset(v_bs_x27_3297_, v_i_3286_, v_a_3299_);
v_i_3286_ = v___x_3301_;
v_bs_3287_ = v___x_3302_;
goto _start;
}
else
{
lean_object* v_a_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3311_; 
lean_dec_ref(v_bs_x27_3297_);
v_a_3304_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3306_ = v___x_3298_;
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
else
{
lean_inc(v_a_3304_);
lean_dec(v___x_3298_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v___x_3309_; 
if (v_isShared_3307_ == 0)
{
v___x_3309_ = v___x_3306_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v_a_3304_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toImpure_spec__0___boxed(lean_object* v_sz_3312_, lean_object* v_i_3313_, lean_object* v_bs_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
size_t v_sz_boxed_3320_; size_t v_i_boxed_3321_; lean_object* v_res_3322_; 
v_sz_boxed_3320_ = lean_unbox_usize(v_sz_3312_);
lean_dec(v_sz_3312_);
v_i_boxed_3321_ = lean_unbox_usize(v_i_3313_);
lean_dec(v_i_3313_);
v_res_3322_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toImpure_spec__0(v_sz_boxed_3320_, v_i_boxed_3321_, v_bs_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v___y_3318_);
lean_dec_ref(v___y_3317_);
lean_dec(v___y_3316_);
lean_dec_ref(v___y_3315_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpure___lam__0(lean_object* v_x_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_){
_start:
{
size_t v_sz_3329_; size_t v___x_3330_; lean_object* v___x_3331_; 
v_sz_3329_ = lean_array_size(v_x_3323_);
v___x_3330_ = ((size_t)0ULL);
v___x_3331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toImpure_spec__0(v_sz_3329_, v___x_3330_, v_x_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toImpure___lam__0___boxed(lean_object* v_x_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_){
_start:
{
lean_object* v_res_3338_; 
v_res_3338_ = l_Lean_Compiler_LCNF_toImpure___lam__0(v_x_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
lean_dec(v___y_3336_);
lean_dec_ref(v___y_3335_);
lean_dec(v___y_3334_);
lean_dec_ref(v___y_3333_);
return v_res_3338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3389_; uint8_t v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3389_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_));
v___x_3390_ = 1;
v___x_3391_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_));
v___x_3392_ = l_Lean_registerTraceClass(v___x_3389_, v___x_3390_, v___x_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2____boxed(lean_object* v_a_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_();
return v_res_3394_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ToImpure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_1721792695____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr___regBuiltin___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_taggedReturnAttr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue = _init_l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_instMonadFVarSubstToImpureMPureTrue);
res = l___private_Lean_Compiler_LCNF_ToImpure_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToImpure_6355896____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ToImpure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ToImpure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToImpure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ToImpure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ToImpure(builtin);
}
#ifdef __cplusplus
}
#endif
