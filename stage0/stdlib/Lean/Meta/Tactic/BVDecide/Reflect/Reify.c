// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Reflect.Reify
// Imports: public import Lean.Meta.Tactic.BVDecide.Reflect.Basic import Lean.Meta.Tactic.BVDecide.Reflect.ReifiedLemmas import Lean.Meta.Tactic.BVDecide.Reflect.ReifiedBVExpr import Lean.Meta.Tactic.BVDecide.Reflect.ReifiedBVPred import Lean.Meta.Tactic.BVDecide.Reflect.ReifiedBVLogical import Lean.Meta.Sym.LitValues import Lean.Meta.AppBuilder import Std.Tactic.BVDecide.Reflect import Lean.Meta.Sym.InferType import Lean.Meta.Sym.InstantiateMVarsS import Lean.Meta.Sym.Simp.CongrInfo
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
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_Sym_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateMVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getNatValue_x3f(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftRight___override(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftLeft___override(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_arithShiftRight___override(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_bin___override(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_getNatOrBvValue_x3f___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Sym_isNatValue(lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_extract___override(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifyM_isAtom___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifyM_lookup(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_var___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_mkBoolAtomWrapper(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_ofPred___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkGate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkIte___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkNot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkBoolConst___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_addCondLemmas___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_un___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBitVecValue_x3f(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVConst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofBool"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 35, 113, 77, 117, 41, 40, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__1;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__4 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__5 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.Tactic.BVDecide.Reflect.Reify"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__0_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 109, .m_capacity = 109, .m_length = 108, .m_data = "_private.Lean.Meta.Tactic.BVDecide.Reflect.Reify.0.Lean.Meta.Tactic.BVDecide.checkFunAtom.getFunctionPattern"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "assertion violation: args.size == mask.size\n      "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__3;
static const lean_array_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0___redArg(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__0_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__2_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__4_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__5 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__5_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__6;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Registered fun atom: "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__7 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__7_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__8;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ", mask: "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__9 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__9_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__10;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Checking for fun atom "};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifyM_simplifyBinaryProof_x27___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryCongrProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryCongrProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_checkTheoryAtom(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_checkTheoryAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30_spec__31___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__0(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Reflect"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "extract_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "replicate_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifyM_simplifyBinaryProof_x27___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "append_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ofBool_congr"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___boxed(lean_object**);
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_BVExpr_shiftRight___override, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_BVExpr_shiftLeft___override, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_BVExpr_arithShiftRight___override, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cpop"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__19_value),LEAN_SCALAR_PTR_LITERAL(54, 25, 40, 162, 224, 189, 205, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "clz"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__16_value),LEAN_SCALAR_PTR_LITERAL(61, 156, 207, 111, 211, 81, 174, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "reverse"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__13_value),LEAN_SCALAR_PTR_LITERAL(244, 136, 165, 42, 211, 46, 208, 62)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__9_value),LEAN_SCALAR_PTR_LITERAL(101, 105, 192, 171, 214, 131, 43, 105)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "rotateRight"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__7_value),LEAN_SCALAR_PTR_LITERAL(208, 30, 240, 114, 51, 110, 152, 157)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "rotateLeft"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__4_value),LEAN_SCALAR_PTR_LITERAL(125, 181, 93, 155, 164, 43, 234, 184)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "replicate"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__13_value),LEAN_SCALAR_PTR_LITERAL(234, 123, 74, 120, 175, 214, 39, 20)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "sshiftRight"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__15_value),LEAN_SCALAR_PTR_LITERAL(206, 65, 29, 246, 207, 155, 165, 148)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "complement"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Complement"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__17_value),LEAN_SCALAR_PTR_LITERAL(6, 52, 244, 64, 3, 58, 115, 79)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__18_value),LEAN_SCALAR_PTR_LITERAL(168, 254, 142, 44, 189, 175, 152, 168)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__19_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__6_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "extractLsb'"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__20_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__20_value),LEAN_SCALAR_PTR_LITERAL(47, 201, 218, 12, 248, 124, 75, 23)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "sshiftRight'"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__22_value),LEAN_SCALAR_PTR_LITERAL(69, 78, 17, 52, 147, 31, 186, 103)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__23_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "hAppend"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__25_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "HAppend"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__24_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__24_value),LEAN_SCALAR_PTR_LITERAL(137, 35, 233, 160, 196, 216, 250, 31)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__25_value),LEAN_SCALAR_PTR_LITERAL(181, 97, 51, 176, 35, 131, 5, 233)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__26_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "shiftRight"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__27_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BVExpr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BVDecide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 240, 176, 234, 207, 251, 199)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__27_value),LEAN_SCALAR_PTR_LITERAL(71, 199, 243, 56, 253, 18, 242, 226)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "shiftRight_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__29_value),LEAN_SCALAR_PTR_LITERAL(216, 161, 38, 33, 237, 165, 100, 97)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftReflection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "shiftLeft"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__31 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__31_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 240, 176, 234, 207, 251, 199)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__31_value),LEAN_SCALAR_PTR_LITERAL(197, 209, 242, 75, 214, 61, 180, 95)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "shiftLeft_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__33 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__33_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__33_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 67, 4, 228, 88, 122, 113)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hShiftRight"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__36 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__36_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "HShiftRight"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__35 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__35_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__35_value),LEAN_SCALAR_PTR_LITERAL(123, 35, 163, 146, 1, 76, 65, 75)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__37_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__36_value),LEAN_SCALAR_PTR_LITERAL(52, 65, 204, 240, 51, 126, 9, 157)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__37 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__37_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hShiftLeft"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__39 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__39_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "HShiftLeft"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__38 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__38_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__38_value),LEAN_SCALAR_PTR_LITERAL(215, 217, 51, 89, 252, 54, 156, 169)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__40_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__39_value),LEAN_SCALAR_PTR_LITERAL(181, 245, 218, 3, 224, 235, 179, 59)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__40 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__40_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__42 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__42_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__41 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__41_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__41_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__43_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__42_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__43 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__43_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__45 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__45_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__44 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__44_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__44_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__46_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__45_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__46 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__46_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__48 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__48_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__47 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__47_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__47_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__49_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__48_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__49 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__49_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__51 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__51_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__50 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__50_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__50_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__52_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__51_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__52 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__52_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hXor"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__54 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__54_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HXor"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__53 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__53_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__53_value),LEAN_SCALAR_PTR_LITERAL(92, 198, 212, 133, 26, 7, 147, 78)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__55_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__54_value),LEAN_SCALAR_PTR_LITERAL(109, 159, 33, 254, 118, 42, 120, 166)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__55 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__55_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAnd"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__57 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__57_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAnd"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__56 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__56_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__56_value),LEAN_SCALAR_PTR_LITERAL(222, 205, 8, 181, 48, 134, 168, 175)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__58_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__57_value),LEAN_SCALAR_PTR_LITERAL(54, 171, 107, 112, 94, 43, 106, 200)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__58 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__58_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "and_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__59 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__59_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__59_value),LEAN_SCALAR_PTR_LITERAL(20, 152, 116, 121, 198, 45, 139, 17)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bin"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 240, 176, 234, 207, 251, 199)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 182, 211, 92, 78, 225, 70, 26)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "BVBinOp"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3_value),LEAN_SCALAR_PTR_LITERAL(173, 0, 131, 50, 199, 91, 123, 28)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__4_value),LEAN_SCALAR_PTR_LITERAL(67, 200, 193, 54, 191, 172, 208, 119)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3_value),LEAN_SCALAR_PTR_LITERAL(173, 0, 131, 50, 199, 91, 123, 28)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__7_value),LEAN_SCALAR_PTR_LITERAL(137, 33, 141, 132, 156, 154, 79, 232)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "xor"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3_value),LEAN_SCALAR_PTR_LITERAL(173, 0, 131, 50, 199, 91, 123, 28)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__10_value),LEAN_SCALAR_PTR_LITERAL(68, 221, 44, 95, 169, 9, 73, 176)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3_value),LEAN_SCALAR_PTR_LITERAL(173, 0, 131, 50, 199, 91, 123, 28)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__13_value),LEAN_SCALAR_PTR_LITERAL(236, 85, 182, 141, 252, 28, 21, 198)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__15;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mul"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3_value),LEAN_SCALAR_PTR_LITERAL(173, 0, 131, 50, 199, 91, 123, 28)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__16_value),LEAN_SCALAR_PTR_LITERAL(66, 46, 226, 27, 15, 162, 209, 81)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__18;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "udiv"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3_value),LEAN_SCALAR_PTR_LITERAL(173, 0, 131, 50, 199, 91, 123, 28)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__19_value),LEAN_SCALAR_PTR_LITERAL(97, 106, 189, 172, 252, 249, 116, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__21;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "umod"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__3_value),LEAN_SCALAR_PTR_LITERAL(173, 0, 131, 50, 199, 91, 123, 28)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__22_value),LEAN_SCALAR_PTR_LITERAL(185, 164, 216, 8, 44, 82, 23, 11)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__24;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "xor_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__61 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__61_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__61_value),LEAN_SCALAR_PTR_LITERAL(225, 129, 197, 38, 228, 52, 44, 57)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "add_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__63 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__63_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__63_value),LEAN_SCALAR_PTR_LITERAL(177, 5, 60, 46, 78, 68, 243, 177)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mul_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__65 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__65_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__65_value),LEAN_SCALAR_PTR_LITERAL(221, 159, 178, 23, 57, 108, 69, 225)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "udiv_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__67 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__67_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__67_value),LEAN_SCALAR_PTR_LITERAL(118, 153, 195, 105, 228, 227, 83, 28)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "umod_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__69 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__69_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__69_value),LEAN_SCALAR_PTR_LITERAL(102, 27, 81, 101, 187, 174, 242, 104)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "internal error: constant shift should have been eliminated."};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__71 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__71_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__72;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__73 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__73_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 240, 176, 234, 207, 251, 199)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__73_value),LEAN_SCALAR_PTR_LITERAL(148, 222, 207, 10, 98, 174, 247, 204)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__75;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "arithShiftRight"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__76 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__76_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 240, 176, 234, 207, 251, 199)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__76_value),LEAN_SCALAR_PTR_LITERAL(103, 53, 88, 127, 221, 158, 175, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "arithShiftRight_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__78 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__78_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__78_value),LEAN_SCALAR_PTR_LITERAL(52, 31, 162, 102, 135, 66, 0, 161)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "extract"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__80 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__80_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 240, 176, 234, 207, 251, 199)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__80_value),LEAN_SCALAR_PTR_LITERAL(13, 22, 63, 119, 146, 191, 248, 8)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__82;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "var"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 240, 176, 234, 207, 251, 199)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(158, 7, 174, 153, 9, 234, 93, 144)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__2;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___lam__0___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__1_value_aux_0),((lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__2_value_aux_0),((lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getLsbD"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(201, 206, 226, 96, 197, 228, 245, 77)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ult"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 62, 117, 244, 108, 14, 8, 240)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__3_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_binaryReflection(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BVPred"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 253, 4, 25, 159, 236, 140, 252)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(233, 227, 220, 143, 67, 138, 133, 64)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVPredCache___at___00Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(208, 215, 171, 150, 192, 180, 249, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__10_value),LEAN_SCALAR_PTR_LITERAL(159, 35, 146, 118, 24, 65, 174, 144)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__4_value),LEAN_SCALAR_PTR_LITERAL(160, 26, 8, 228, 104, 32, 82, 85)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_gateReflection(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_boolAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_bitVecAtom(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__83 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__83_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__83_value),LEAN_SCALAR_PTR_LITERAL(189, 30, 154, 245, 30, 224, 55, 44)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "un"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 240, 176, 234, 207, 251, 199)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__3_value),LEAN_SCALAR_PTR_LITERAL(42, 186, 200, 92, 180, 128, 216, 181)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BVUnOp"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 14, 123, 74, 130, 241, 190, 47)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 170, 248, 163, 146, 14, 228, 74)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__3;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 14, 123, 74, 130, 241, 190, 47)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__4_value),LEAN_SCALAR_PTR_LITERAL(29, 116, 55, 155, 243, 43, 27, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__6;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 14, 123, 74, 130, 241, 190, 47)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__7_value),LEAN_SCALAR_PTR_LITERAL(112, 197, 123, 204, 93, 250, 252, 249)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "arithShiftRightConst"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 14, 123, 74, 130, 241, 190, 47)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__10_value),LEAN_SCALAR_PTR_LITERAL(88, 95, 189, 240, 90, 71, 117, 208)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__12;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 14, 123, 74, 130, 241, 190, 47)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__13_value),LEAN_SCALAR_PTR_LITERAL(84, 226, 239, 81, 45, 17, 252, 180)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__15;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 14, 123, 74, 130, 241, 190, 47)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__16_value),LEAN_SCALAR_PTR_LITERAL(221, 66, 219, 130, 52, 97, 84, 10)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__18;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 14, 123, 74, 130, 241, 190, 47)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__19_value),LEAN_SCALAR_PTR_LITERAL(214, 119, 73, 246, 51, 241, 221, 59)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__21;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "arithShiftRightNat_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__85 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__85_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__85_value),LEAN_SCALAR_PTR_LITERAL(59, 32, 240, 3, 69, 217, 10, 161)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 240, 176, 234, 207, 251, 199)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__13_value),LEAN_SCALAR_PTR_LITERAL(105, 148, 101, 98, 245, 160, 38, 159)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__88;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "rotateLeft_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__89 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__89_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__89_value),LEAN_SCALAR_PTR_LITERAL(32, 228, 194, 198, 195, 74, 36, 62)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_rotateReflection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "rotateRight_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__91 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__91_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__91_value),LEAN_SCALAR_PTR_LITERAL(61, 145, 127, 186, 176, 174, 37, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goBvLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "reverse_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__93 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__93_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__93_value),LEAN_SCALAR_PTR_LITERAL(182, 175, 240, 129, 220, 112, 73, 89)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "clz_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__95 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__95_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__95_value),LEAN_SCALAR_PTR_LITERAL(108, 254, 78, 195, 105, 118, 43, 132)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "cpop_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__97 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__97_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 160, 70, 158, 0, 14, 153, 5)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__97_value),LEAN_SCALAR_PTR_LITERAL(181, 75, 188, 170, 67, 231, 89, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVExprCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_rotateReflection___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goBvLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_bitVecAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_boolAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_binaryReflection___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_gateReflection___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVPredCache___at___00Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVExprCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftReflection___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_spec__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30_spec__31(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg(lean_object* v_e_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_Sym_inferType(v_e_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_);
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_17_; 
v_a_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc(v_a_16_);
lean_dec_ref_known(v___x_15_, 1);
v___x_17_ = l_Lean_Meta_Sym_instantiateMVarsS(v_a_16_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v_a_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_32_; 
v_a_18_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_32_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_32_ == 0)
{
v___x_20_ = v___x_17_;
v_isShared_21_ = v_isSharedCheck_32_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_a_18_);
lean_dec(v___x_17_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_32_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_22_ = l_Lean_Expr_cleanupAnnotations(v_a_18_);
lean_dec(v_a_18_);
v___x_23_ = l_Lean_Expr_isApp(v___x_22_);
if (v___x_23_ == 0)
{
lean_dec_ref(v___x_22_);
lean_del_object(v___x_20_);
goto v___jp_12_;
}
else
{
lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_24_ = l_Lean_Expr_appFnCleanup___redArg(v___x_22_);
v___x_25_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1));
v___x_26_ = l_Lean_Expr_isConstOf(v___x_24_, v___x_25_);
lean_dec_ref(v___x_24_);
if (v___x_26_ == 0)
{
lean_dec_ref(v___x_22_);
lean_del_object(v___x_20_);
goto v___jp_12_;
}
else
{
lean_object* v_arg_27_; lean_object* v___x_28_; lean_object* v___x_30_; 
v_arg_27_ = lean_ctor_get(v___x_22_, 1);
lean_inc_ref(v_arg_27_);
lean_dec_ref(v___x_22_);
v___x_28_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_27_);
lean_dec_ref(v_arg_27_);
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 0, v___x_28_);
v___x_30_ = v___x_20_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v___x_28_);
v___x_30_ = v_reuseFailAlloc_31_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
return v___x_30_;
}
}
}
}
}
else
{
lean_object* v_a_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_40_; 
v_a_33_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_40_ == 0)
{
v___x_35_ = v___x_17_;
v_isShared_36_ = v_isSharedCheck_40_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_a_33_);
lean_dec(v___x_17_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_40_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_38_; 
if (v_isShared_36_ == 0)
{
v___x_38_ = v___x_35_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_a_33_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
else
{
lean_object* v_a_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_48_; 
v_a_41_ = lean_ctor_get(v___x_15_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_48_ == 0)
{
v___x_43_ = v___x_15_;
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_a_41_);
lean_dec(v___x_15_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_46_; 
if (v_isShared_44_ == 0)
{
v___x_46_ = v___x_43_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_41_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
v___jp_12_:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_box(0);
v___x_14_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___boxed(lean_object* v_e_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg(v_e_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_);
lean_dec(v_a_55_);
lean_dec_ref(v_a_54_);
lean_dec(v_a_53_);
lean_dec_ref(v_a_52_);
lean_dec(v_a_51_);
lean_dec_ref(v_a_50_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom(lean_object* v_e_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg(v_e_58_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___boxed(lean_object* v_e_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom(v_e_72_, v_a_73_, v_a_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
lean_dec(v_a_81_);
lean_dec_ref(v_a_80_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
lean_dec(v_a_77_);
lean_dec_ref(v_a_76_);
lean_dec(v_a_75_);
lean_dec(v_a_74_);
lean_dec_ref(v_a_73_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg(lean_object* v_e_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_Meta_Sym_inferType(v_e_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_108_; 
v_a_98_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_108_ == 0)
{
v___x_100_ = v___x_97_;
v_isShared_101_ = v_isSharedCheck_108_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_108_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_102_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__1));
v___x_103_ = l_Lean_Expr_isConstOf(v_a_98_, v___x_102_);
lean_dec(v_a_98_);
v___x_104_ = lean_box(v___x_103_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_104_);
v___x_106_ = v___x_100_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
else
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
v_a_109_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v___x_97_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_97_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___boxed(lean_object* v_e_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg(v_e_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_);
lean_dec(v_a_123_);
lean_dec_ref(v_a_122_);
lean_dec(v_a_121_);
lean_dec_ref(v_a_120_);
lean_dec(v_a_119_);
lean_dec_ref(v_a_118_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom(lean_object* v_e_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg(v_e_126_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___boxed(lean_object* v_e_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom(v_e_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_, v_a_151_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
lean_dec_ref(v_a_148_);
lean_dec(v_a_147_);
lean_dec_ref(v_a_146_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask___redArg(lean_object* v_fn_154_, lean_object* v_args_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lean_Meta_Sym_getCongrInfo___redArg(v_fn_154_, v_a_156_, v_a_157_, v_a_158_, v_a_159_, v_a_160_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_208_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_208_ == 0)
{
v___x_165_ = v___x_162_;
v_isShared_166_ = v_isSharedCheck_208_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_162_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_208_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
switch(lean_obj_tag(v_a_163_))
{
case 1:
{
lean_object* v_prefixSize_167_; lean_object* v_suffixSize_168_; uint8_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v_prefixSize_167_ = lean_ctor_get(v_a_163_, 0);
lean_inc_n(v_prefixSize_167_, 2);
v_suffixSize_168_ = lean_ctor_get(v_a_163_, 1);
lean_inc_n(v_suffixSize_168_, 2);
lean_dec_ref_known(v_a_163_, 2);
v___x_169_ = 0;
v___x_170_ = lean_box(v___x_169_);
v___x_171_ = lean_mk_array(v_prefixSize_167_, v___x_170_);
v___x_172_ = 1;
v___x_173_ = lean_box(v___x_172_);
v___x_174_ = lean_mk_array(v_suffixSize_168_, v___x_173_);
v___x_175_ = l_Array_append___redArg(v___x_171_, v___x_174_);
lean_dec_ref(v___x_174_);
v___x_176_ = lean_array_get_size(v_args_155_);
v___x_177_ = lean_nat_sub(v___x_176_, v_suffixSize_168_);
lean_dec(v_suffixSize_168_);
v___x_178_ = lean_nat_sub(v___x_177_, v_prefixSize_167_);
lean_dec(v_prefixSize_167_);
lean_dec(v___x_177_);
v___x_179_ = lean_box(v___x_169_);
v___x_180_ = lean_mk_array(v___x_178_, v___x_179_);
v___x_181_ = l_Array_append___redArg(v___x_175_, v___x_180_);
lean_dec_ref(v___x_180_);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_182_);
v___x_184_ = v___x_165_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
case 2:
{
lean_object* v_rewritable_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_203_; 
v_rewritable_186_ = lean_ctor_get(v_a_163_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v_a_163_);
if (v_isSharedCheck_203_ == 0)
{
v___x_188_ = v_a_163_;
v_isShared_189_ = v_isSharedCheck_203_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_rewritable_186_);
lean_dec(v_a_163_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_203_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_198_; 
v___x_190_ = lean_array_get_size(v_args_155_);
v___x_191_ = lean_array_get_size(v_rewritable_186_);
v___x_192_ = lean_nat_sub(v___x_190_, v___x_191_);
v___x_193_ = 0;
v___x_194_ = lean_box(v___x_193_);
v___x_195_ = lean_mk_array(v___x_192_, v___x_194_);
v___x_196_ = l_Array_append___redArg(v_rewritable_186_, v___x_195_);
lean_dec_ref(v___x_195_);
if (v_isShared_189_ == 0)
{
lean_ctor_set_tag(v___x_188_, 1);
lean_ctor_set(v___x_188_, 0, v___x_196_);
v___x_198_ = v___x_188_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_196_);
v___x_198_ = v_reuseFailAlloc_202_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
lean_object* v___x_200_; 
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_198_);
v___x_200_ = v___x_165_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___x_198_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
default: 
{
lean_object* v___x_204_; lean_object* v___x_206_; 
lean_dec(v_a_163_);
v___x_204_ = lean_box(0);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_204_);
v___x_206_ = v___x_165_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_204_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_216_; 
v_a_209_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_216_ == 0)
{
v___x_211_ = v___x_162_;
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_162_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_214_; 
if (v_isShared_212_ == 0)
{
v___x_214_ = v___x_211_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_a_209_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask___redArg___boxed(lean_object* v_fn_217_, lean_object* v_args_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask___redArg(v_fn_217_, v_args_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
lean_dec(v_a_219_);
lean_dec_ref(v_args_218_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask(lean_object* v_fn_226_, lean_object* v_args_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask___redArg(v_fn_226_, v_args_227_, v_a_229_, v_a_230_, v_a_231_, v_a_232_, v_a_233_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask___boxed(lean_object* v_fn_236_, lean_object* v_args_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask(v_fn_236_, v_args_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
lean_dec_ref(v_args_237_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg(lean_object* v_e_250_, lean_object* v_a_251_){
_start:
{
lean_object* v___x_258_; 
lean_inc_ref(v_e_250_);
v___x_258_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_250_, v_a_251_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_274_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_274_ == 0)
{
v___x_261_ = v___x_258_;
v_isShared_262_ = v_isSharedCheck_274_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_258_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_274_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_263_ = l_Lean_Expr_cleanupAnnotations(v_a_259_);
lean_dec(v_a_259_);
v___x_264_ = l_Lean_Expr_isApp(v___x_263_);
if (v___x_264_ == 0)
{
lean_dec_ref(v___x_263_);
lean_del_object(v___x_261_);
goto v___jp_253_;
}
else
{
lean_object* v___x_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_265_ = l_Lean_Expr_appFnCleanup___redArg(v___x_263_);
v___x_266_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___closed__1));
v___x_267_ = l_Lean_Expr_isConstOf(v___x_265_, v___x_266_);
lean_dec_ref(v___x_265_);
if (v___x_267_ == 0)
{
lean_dec_ref(v___x_263_);
lean_del_object(v___x_261_);
goto v___jp_253_;
}
else
{
lean_object* v_arg_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_272_; 
lean_dec_ref(v_e_250_);
v_arg_268_ = lean_ctor_get(v___x_263_, 1);
lean_inc_ref(v_arg_268_);
lean_dec_ref(v___x_263_);
v___x_269_ = lean_box(v___x_267_);
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v_arg_268_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 0, v___x_270_);
v___x_272_ = v___x_261_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v___x_270_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
lean_dec_ref(v_e_250_);
v_a_275_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_258_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_258_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
v___jp_253_:
{
uint8_t v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_254_ = 0;
v___x_255_ = lean_box(v___x_254_);
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v_e_250_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
return v___x_257_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg___boxed(lean_object* v_e_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg(v_e_283_, v_a_284_);
lean_dec(v_a_284_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom(lean_object* v_e_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg(v_e_287_, v_a_291_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___boxed(lean_object* v_e_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom(v_e_296_, v_a_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec(v_a_298_);
lean_dec_ref(v_a_297_);
return v_res_304_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0___closed__0(void){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0(lean_object* v_msg_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_3577__overap_315_; lean_object* v___x_316_; 
v___x_314_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0___closed__0);
v___x_3577__overap_315_ = lean_panic_fn_borrowed(v___x_314_, v_msg_306_);
lean_inc(v___y_312_);
lean_inc_ref(v___y_311_);
lean_inc(v___y_310_);
lean_inc_ref(v___y_309_);
lean_inc(v___y_308_);
lean_inc_ref(v___y_307_);
v___x_316_ = lean_apply_7(v___x_3577__overap_315_, v___y_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, lean_box(0));
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0___boxed(lean_object* v_msg_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0(v_msg_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3___lam__0(lean_object* v_snd_326_, lean_object* v_x_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_335_, 0, v_snd_326_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3___lam__0___boxed(lean_object* v_snd_336_, lean_object* v_x_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3___lam__0(v_snd_336_, v_x_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
lean_dec(v___y_343_);
lean_dec_ref(v___y_342_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec_ref(v_x_337_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3(size_t v_sz_346_, size_t v_i_347_, lean_object* v_bs_348_){
_start:
{
uint8_t v___x_349_; 
v___x_349_ = lean_usize_dec_lt(v_i_347_, v_sz_346_);
if (v___x_349_ == 0)
{
return v_bs_348_;
}
else
{
lean_object* v_v_350_; lean_object* v_fst_351_; lean_object* v_snd_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_366_; 
v_v_350_ = lean_array_uget(v_bs_348_, v_i_347_);
v_fst_351_ = lean_ctor_get(v_v_350_, 0);
v_snd_352_ = lean_ctor_get(v_v_350_, 1);
v_isSharedCheck_366_ = !lean_is_exclusive(v_v_350_);
if (v_isSharedCheck_366_ == 0)
{
v___x_354_ = v_v_350_;
v_isShared_355_ = v_isSharedCheck_366_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_snd_352_);
lean_inc(v_fst_351_);
lean_dec(v_v_350_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_366_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; lean_object* v_bs_x27_357_; lean_object* v___f_358_; lean_object* v___x_360_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v_bs_x27_357_ = lean_array_uset(v_bs_348_, v_i_347_, v___x_356_);
v___f_358_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3___lam__0___boxed), 9, 1);
lean_closure_set(v___f_358_, 0, v_snd_352_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v___f_358_);
v___x_360_ = v___x_354_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_fst_351_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v___f_358_);
v___x_360_ = v_reuseFailAlloc_365_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
size_t v___x_361_; size_t v___x_362_; lean_object* v___x_363_; 
v___x_361_ = ((size_t)1ULL);
v___x_362_ = lean_usize_add(v_i_347_, v___x_361_);
v___x_363_ = lean_array_uset(v_bs_x27_357_, v_i_347_, v___x_360_);
v_i_347_ = v___x_362_;
v_bs_348_ = v___x_363_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3___boxed(lean_object* v_sz_367_, lean_object* v_i_368_, lean_object* v_bs_369_){
_start:
{
size_t v_sz_boxed_370_; size_t v_i_boxed_371_; lean_object* v_res_372_; 
v_sz_boxed_370_ = lean_unbox_usize(v_sz_367_);
lean_dec(v_sz_367_);
v_i_boxed_371_ = lean_unbox_usize(v_i_368_);
lean_dec(v_i_368_);
v_res_372_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3(v_sz_boxed_370_, v_i_boxed_371_, v_bs_369_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg___lam__0(lean_object* v_k_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v_b_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v___x_382_; 
lean_inc(v___y_380_);
lean_inc_ref(v___y_379_);
lean_inc(v___y_378_);
lean_inc_ref(v___y_377_);
lean_inc(v___y_375_);
lean_inc_ref(v___y_374_);
v___x_382_ = lean_apply_8(v_k_373_, v_b_376_, v___y_374_, v___y_375_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, lean_box(0));
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg___lam__0___boxed(lean_object* v_k_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v_b_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg___lam__0(v_k_383_, v___y_384_, v___y_385_, v_b_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg(lean_object* v_name_393_, uint8_t v_bi_394_, lean_object* v_type_395_, lean_object* v_k_396_, uint8_t v_kind_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v___f_405_; lean_object* v___x_406_; 
lean_inc(v___y_399_);
lean_inc_ref(v___y_398_);
v___f_405_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_405_, 0, v_k_396_);
lean_closure_set(v___f_405_, 1, v___y_398_);
lean_closure_set(v___f_405_, 2, v___y_399_);
v___x_406_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_393_, v_bi_394_, v_type_395_, v___f_405_, v_kind_397_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
if (lean_obj_tag(v___x_406_) == 0)
{
return v___x_406_;
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg___boxed(lean_object* v_name_415_, lean_object* v_bi_416_, lean_object* v_type_417_, lean_object* v_k_418_, lean_object* v_kind_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
uint8_t v_bi_boxed_427_; uint8_t v_kind_boxed_428_; lean_object* v_res_429_; 
v_bi_boxed_427_ = lean_unbox(v_bi_416_);
v_kind_boxed_428_ = lean_unbox(v_kind_419_);
v_res_429_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg(v_name_415_, v_bi_boxed_427_, v_type_417_, v_k_418_, v_kind_boxed_428_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__0(lean_object* v___x_430_, lean_object* v___x_431_, lean_object* v_a_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v___x_6715__overap_440_; lean_object* v___x_441_; 
v___x_6715__overap_440_ = l_instInhabitedOfMonad___redArg(v___x_430_, v___x_431_);
lean_inc(v___y_438_);
lean_inc_ref(v___y_437_);
lean_inc(v___y_436_);
lean_inc_ref(v___y_435_);
lean_inc(v___y_434_);
lean_inc_ref(v___y_433_);
v___x_441_ = lean_apply_7(v___x_6715__overap_440_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, lean_box(0));
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__0___boxed(lean_object* v___x_442_, lean_object* v___x_443_, lean_object* v_a_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__0(v___x_442_, v___x_443_, v_a_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec_ref(v_a_444_);
return v_res_452_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__0(void){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_instMonadEIO___redArg();
return v___x_453_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__1(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__0);
v___x_455_ = l_StateRefT_x27_instMonad___redArg(v___x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__1___boxed(lean_object* v_acc_460_, lean_object* v_declInfos_461_, lean_object* v_k_462_, lean_object* v_kind_463_, lean_object* v_x_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
uint8_t v_kind_boxed_472_; lean_object* v_res_473_; 
v_kind_boxed_472_ = lean_unbox(v_kind_463_);
v_res_473_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__1(v_acc_460_, v_declInfos_461_, v_k_462_, v_kind_boxed_472_, v_x_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
lean_dec(v___y_470_);
lean_dec_ref(v___y_469_);
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8(lean_object* v_declInfos_474_, lean_object* v_k_475_, uint8_t v_kind_476_, lean_object* v_acc_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v___x_485_; lean_object* v_toApplicative_486_; lean_object* v_toFunctor_487_; lean_object* v_toSeq_488_; lean_object* v_toSeqLeft_489_; lean_object* v_toSeqRight_490_; lean_object* v___f_491_; lean_object* v___f_492_; lean_object* v___f_493_; lean_object* v___f_494_; lean_object* v___x_495_; lean_object* v___f_496_; lean_object* v___f_497_; lean_object* v___f_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v_toApplicative_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_554_; 
v___x_485_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__1);
v_toApplicative_486_ = lean_ctor_get(v___x_485_, 0);
v_toFunctor_487_ = lean_ctor_get(v_toApplicative_486_, 0);
v_toSeq_488_ = lean_ctor_get(v_toApplicative_486_, 2);
v_toSeqLeft_489_ = lean_ctor_get(v_toApplicative_486_, 3);
v_toSeqRight_490_ = lean_ctor_get(v_toApplicative_486_, 4);
v___f_491_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__2));
v___f_492_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__3));
lean_inc_ref_n(v_toFunctor_487_, 2);
v___f_493_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_493_, 0, v_toFunctor_487_);
v___f_494_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_494_, 0, v_toFunctor_487_);
v___x_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_495_, 0, v___f_493_);
lean_ctor_set(v___x_495_, 1, v___f_494_);
lean_inc(v_toSeqRight_490_);
v___f_496_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_496_, 0, v_toSeqRight_490_);
lean_inc(v_toSeqLeft_489_);
v___f_497_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_497_, 0, v_toSeqLeft_489_);
lean_inc(v_toSeq_488_);
v___f_498_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_498_, 0, v_toSeq_488_);
v___x_499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_499_, 0, v___x_495_);
lean_ctor_set(v___x_499_, 1, v___f_491_);
lean_ctor_set(v___x_499_, 2, v___f_498_);
lean_ctor_set(v___x_499_, 3, v___f_497_);
lean_ctor_set(v___x_499_, 4, v___f_496_);
v___x_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___f_492_);
v___x_501_ = l_StateRefT_x27_instMonad___redArg(v___x_500_);
v_toApplicative_502_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_554_ == 0)
{
lean_object* v_unused_555_; 
v_unused_555_ = lean_ctor_get(v___x_501_, 1);
lean_dec(v_unused_555_);
v___x_504_ = v___x_501_;
v_isShared_505_ = v_isSharedCheck_554_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_toApplicative_502_);
lean_dec(v___x_501_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_554_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v_toFunctor_506_; lean_object* v_toSeq_507_; lean_object* v_toSeqLeft_508_; lean_object* v_toSeqRight_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_552_; 
v_toFunctor_506_ = lean_ctor_get(v_toApplicative_502_, 0);
v_toSeq_507_ = lean_ctor_get(v_toApplicative_502_, 2);
v_toSeqLeft_508_ = lean_ctor_get(v_toApplicative_502_, 3);
v_toSeqRight_509_ = lean_ctor_get(v_toApplicative_502_, 4);
v_isSharedCheck_552_ = !lean_is_exclusive(v_toApplicative_502_);
if (v_isSharedCheck_552_ == 0)
{
lean_object* v_unused_553_; 
v_unused_553_ = lean_ctor_get(v_toApplicative_502_, 1);
lean_dec(v_unused_553_);
v___x_511_ = v_toApplicative_502_;
v_isShared_512_ = v_isSharedCheck_552_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_toSeqRight_509_);
lean_inc(v_toSeqLeft_508_);
lean_inc(v_toSeq_507_);
lean_inc(v_toFunctor_506_);
lean_dec(v_toApplicative_502_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_552_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___f_513_; lean_object* v___f_514_; lean_object* v___f_515_; lean_object* v___f_516_; lean_object* v___x_517_; lean_object* v___f_518_; lean_object* v___f_519_; lean_object* v___f_520_; lean_object* v___x_522_; 
v___f_513_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__4));
v___f_514_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___closed__5));
lean_inc_ref(v_toFunctor_506_);
v___f_515_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_515_, 0, v_toFunctor_506_);
v___f_516_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_516_, 0, v_toFunctor_506_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___f_515_);
lean_ctor_set(v___x_517_, 1, v___f_516_);
v___f_518_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_518_, 0, v_toSeqRight_509_);
v___f_519_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_519_, 0, v_toSeqLeft_508_);
v___f_520_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_520_, 0, v_toSeq_507_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 4, v___f_518_);
lean_ctor_set(v___x_511_, 3, v___f_519_);
lean_ctor_set(v___x_511_, 2, v___f_520_);
lean_ctor_set(v___x_511_, 1, v___f_513_);
lean_ctor_set(v___x_511_, 0, v___x_517_);
v___x_522_ = v___x_511_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_517_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v___f_513_);
lean_ctor_set(v_reuseFailAlloc_551_, 2, v___f_520_);
lean_ctor_set(v_reuseFailAlloc_551_, 3, v___f_519_);
lean_ctor_set(v_reuseFailAlloc_551_, 4, v___f_518_);
v___x_522_ = v_reuseFailAlloc_551_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_524_; 
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 1, v___f_514_);
lean_ctor_set(v___x_504_, 0, v___x_522_);
v___x_524_ = v___x_504_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v___f_514_);
v___x_524_ = v_reuseFailAlloc_550_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_525_ = l_StateRefT_x27_instMonad___redArg(v___x_524_);
v___x_526_ = l_ReaderT_instMonad___redArg(v___x_525_);
v___x_527_ = lean_array_get_size(v_acc_477_);
v___x_528_ = lean_array_get_size(v_declInfos_474_);
v___x_529_ = lean_nat_dec_lt(v___x_527_, v___x_528_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
lean_dec_ref(v___x_526_);
lean_dec_ref(v_declInfos_474_);
lean_inc(v___y_483_);
lean_inc_ref(v___y_482_);
lean_inc(v___y_481_);
lean_inc_ref(v___y_480_);
lean_inc(v___y_479_);
lean_inc_ref(v___y_478_);
v___x_530_ = lean_apply_8(v_k_475_, v_acc_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, lean_box(0));
return v___x_530_;
}
else
{
lean_object* v___x_531_; uint8_t v___x_532_; lean_object* v___x_533_; lean_object* v___f_534_; lean_object* v___f_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v_snd_540_; lean_object* v_fst_541_; lean_object* v_fst_542_; lean_object* v_snd_543_; lean_object* v___x_544_; lean_object* v___f_545_; lean_object* v___x_546_; 
v___x_531_ = lean_box(0);
v___x_532_ = 0;
v___x_533_ = l_Lean_instInhabitedExpr;
v___f_534_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__0___boxed), 10, 2);
lean_closure_set(v___f_534_, 0, v___x_526_);
lean_closure_set(v___f_534_, 1, v___x_533_);
v___f_535_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_535_, 0, v___f_534_);
v___x_536_ = lean_box(v___x_532_);
v___x_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
lean_ctor_set(v___x_537_, 1, v___f_535_);
v___x_538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_531_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = lean_array_get(v___x_538_, v_declInfos_474_, v___x_527_);
lean_dec_ref_known(v___x_538_, 2);
v_snd_540_ = lean_ctor_get(v___x_539_, 1);
lean_inc(v_snd_540_);
v_fst_541_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_fst_541_);
lean_dec(v___x_539_);
v_fst_542_ = lean_ctor_get(v_snd_540_, 0);
lean_inc(v_fst_542_);
v_snd_543_ = lean_ctor_get(v_snd_540_, 1);
lean_inc(v_snd_543_);
lean_dec(v_snd_540_);
v___x_544_ = lean_box(v_kind_476_);
lean_inc_ref(v_acc_477_);
v___f_545_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__1___boxed), 12, 4);
lean_closure_set(v___f_545_, 0, v_acc_477_);
lean_closure_set(v___f_545_, 1, v_declInfos_474_);
lean_closure_set(v___f_545_, 2, v_k_475_);
lean_closure_set(v___f_545_, 3, v___x_544_);
lean_inc(v___y_483_);
lean_inc_ref(v___y_482_);
lean_inc(v___y_481_);
lean_inc_ref(v___y_480_);
lean_inc(v___y_479_);
lean_inc_ref(v___y_478_);
v___x_546_ = lean_apply_8(v_snd_543_, v_acc_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, lean_box(0));
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; uint8_t v___x_548_; lean_object* v___x_549_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_547_);
lean_dec_ref_known(v___x_546_, 1);
v___x_548_ = lean_unbox(v_fst_542_);
lean_dec(v_fst_542_);
v___x_549_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg(v_fst_541_, v___x_548_, v_a_547_, v___f_545_, v_kind_476_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_);
return v___x_549_;
}
else
{
lean_dec_ref(v___f_545_);
lean_dec(v_fst_542_);
lean_dec(v_fst_541_);
return v___x_546_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___lam__1(lean_object* v_acc_556_, lean_object* v_declInfos_557_, lean_object* v_k_558_, uint8_t v_kind_559_, lean_object* v_x_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = lean_array_push(v_acc_556_, v_x_560_);
v___x_569_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8(v_declInfos_557_, v_k_558_, v_kind_559_, v___x_568_, v___y_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8___boxed(lean_object* v_declInfos_570_, lean_object* v_k_571_, lean_object* v_kind_572_, lean_object* v_acc_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
uint8_t v_kind_boxed_581_; lean_object* v_res_582_; 
v_kind_boxed_581_ = lean_unbox(v_kind_572_);
v_res_582_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8(v_declInfos_570_, v_k_571_, v_kind_boxed_581_, v_acc_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6(lean_object* v_declInfos_585_, lean_object* v_k_586_, uint8_t v_kind_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6___closed__0));
v___x_596_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8(v_declInfos_585_, v_k_586_, v_kind_587_, v___x_595_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6___boxed(lean_object* v_declInfos_597_, lean_object* v_k_598_, lean_object* v_kind_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
uint8_t v_kind_boxed_607_; lean_object* v_res_608_; 
v_kind_boxed_607_ = lean_unbox(v_kind_599_);
v_res_608_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6(v_declInfos_597_, v_k_598_, v_kind_boxed_607_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__5(size_t v_sz_609_, size_t v_i_610_, lean_object* v_bs_611_){
_start:
{
uint8_t v___x_612_; 
v___x_612_ = lean_usize_dec_lt(v_i_610_, v_sz_609_);
if (v___x_612_ == 0)
{
return v_bs_611_;
}
else
{
lean_object* v_v_613_; lean_object* v_fst_614_; lean_object* v_snd_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_631_; 
v_v_613_ = lean_array_uget(v_bs_611_, v_i_610_);
v_fst_614_ = lean_ctor_get(v_v_613_, 0);
v_snd_615_ = lean_ctor_get(v_v_613_, 1);
v_isSharedCheck_631_ = !lean_is_exclusive(v_v_613_);
if (v_isSharedCheck_631_ == 0)
{
v___x_617_ = v_v_613_;
v_isShared_618_ = v_isSharedCheck_631_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_snd_615_);
lean_inc(v_fst_614_);
lean_dec(v_v_613_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_631_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_619_; lean_object* v_bs_x27_620_; uint8_t v___x_621_; lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_619_ = lean_unsigned_to_nat(0u);
v_bs_x27_620_ = lean_array_uset(v_bs_611_, v_i_610_, v___x_619_);
v___x_621_ = 0;
v___x_622_ = lean_box(v___x_621_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v___x_622_);
v___x_624_ = v___x_617_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_622_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_snd_615_);
v___x_624_ = v_reuseFailAlloc_630_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_625_; size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; 
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v_fst_614_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v___x_626_ = ((size_t)1ULL);
v___x_627_ = lean_usize_add(v_i_610_, v___x_626_);
v___x_628_ = lean_array_uset(v_bs_x27_620_, v_i_610_, v___x_625_);
v_i_610_ = v___x_627_;
v_bs_611_ = v___x_628_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__5___boxed(lean_object* v_sz_632_, lean_object* v_i_633_, lean_object* v_bs_634_){
_start:
{
size_t v_sz_boxed_635_; size_t v_i_boxed_636_; lean_object* v_res_637_; 
v_sz_boxed_635_ = lean_unbox_usize(v_sz_632_);
lean_dec(v_sz_632_);
v_i_boxed_636_ = lean_unbox_usize(v_i_633_);
lean_dec(v_i_633_);
v_res_637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__5(v_sz_boxed_635_, v_i_boxed_636_, v_bs_634_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4(lean_object* v_declInfos_638_, lean_object* v_k_639_, uint8_t v_kind_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
size_t v_sz_648_; size_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v_sz_648_ = lean_array_size(v_declInfos_638_);
v___x_649_ = ((size_t)0ULL);
v___x_650_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__5(v_sz_648_, v___x_649_, v_declInfos_638_);
v___x_651_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6(v___x_650_, v_k_639_, v_kind_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4___boxed(lean_object* v_declInfos_652_, lean_object* v_k_653_, lean_object* v_kind_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
uint8_t v_kind_boxed_662_; lean_object* v_res_663_; 
v_kind_boxed_662_ = lean_unbox(v_kind_654_);
v_res_663_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4(v_declInfos_652_, v_k_653_, v_kind_boxed_662_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3(lean_object* v_declInfos_664_, lean_object* v_k_665_, uint8_t v_kind_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
size_t v_sz_674_; size_t v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v_sz_674_ = lean_array_size(v_declInfos_664_);
v___x_675_ = ((size_t)0ULL);
v___x_676_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__3(v_sz_674_, v___x_675_, v_declInfos_664_);
v___x_677_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4(v___x_676_, v_k_665_, v_kind_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3___boxed(lean_object* v_declInfos_678_, lean_object* v_k_679_, lean_object* v_kind_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
uint8_t v_kind_boxed_688_; lean_object* v_res_689_; 
v_kind_boxed_688_ = lean_unbox(v_kind_680_);
v_res_689_ = l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3(v_declInfos_678_, v_k_679_, v_kind_boxed_688_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__2(lean_object* v_as_690_, size_t v_sz_691_, size_t v_i_692_, lean_object* v_b_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v_a_702_; uint8_t v___x_706_; 
v___x_706_ = lean_usize_dec_lt(v_i_692_, v_sz_691_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; 
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v_b_693_);
return v___x_707_;
}
else
{
lean_object* v_snd_708_; lean_object* v_fst_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_755_; 
v_snd_708_ = lean_ctor_get(v_b_693_, 1);
v_fst_709_ = lean_ctor_get(v_b_693_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v_b_693_);
if (v_isSharedCheck_755_ == 0)
{
v___x_711_ = v_b_693_;
v_isShared_712_ = v_isSharedCheck_755_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_snd_708_);
lean_inc(v_fst_709_);
lean_dec(v_b_693_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_755_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v_array_713_; lean_object* v_start_714_; lean_object* v_stop_715_; uint8_t v___x_716_; 
v_array_713_ = lean_ctor_get(v_snd_708_, 0);
v_start_714_ = lean_ctor_get(v_snd_708_, 1);
v_stop_715_ = lean_ctor_get(v_snd_708_, 2);
v___x_716_ = lean_nat_dec_lt(v_start_714_, v_stop_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_718_; 
if (v_isShared_712_ == 0)
{
v___x_718_ = v___x_711_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_fst_709_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_snd_708_);
v___x_718_ = v_reuseFailAlloc_720_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_719_; 
v___x_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
return v___x_719_;
}
}
else
{
lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_751_; 
lean_inc(v_stop_715_);
lean_inc(v_start_714_);
lean_inc_ref(v_array_713_);
v_isSharedCheck_751_ = !lean_is_exclusive(v_snd_708_);
if (v_isSharedCheck_751_ == 0)
{
lean_object* v_unused_752_; lean_object* v_unused_753_; lean_object* v_unused_754_; 
v_unused_752_ = lean_ctor_get(v_snd_708_, 2);
lean_dec(v_unused_752_);
v_unused_753_ = lean_ctor_get(v_snd_708_, 1);
lean_dec(v_unused_753_);
v_unused_754_ = lean_ctor_get(v_snd_708_, 0);
lean_dec(v_unused_754_);
v___x_722_ = v_snd_708_;
v_isShared_723_ = v_isSharedCheck_751_;
goto v_resetjp_721_;
}
else
{
lean_dec(v_snd_708_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_751_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_724_ = lean_array_fget(v_array_713_, v_start_714_);
v___x_725_ = lean_unsigned_to_nat(1u);
v___x_726_ = lean_nat_add(v_start_714_, v___x_725_);
lean_dec(v_start_714_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 1, v___x_726_);
v___x_728_ = v___x_722_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_array_713_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_750_, 2, v_stop_715_);
v___x_728_ = v_reuseFailAlloc_750_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
uint8_t v___x_729_; 
v___x_729_ = lean_unbox(v___x_724_);
lean_dec(v___x_724_);
if (v___x_729_ == 0)
{
lean_object* v___x_731_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_728_);
v___x_731_ = v___x_711_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_fst_709_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v___x_728_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
v_a_702_ = v___x_731_;
goto v___jp_701_;
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_734_; 
v_a_733_ = lean_array_uget_borrowed(v_as_690_, v_i_692_);
lean_inc(v_a_733_);
v___x_734_ = l_Lean_Meta_Sym_inferType(v_a_733_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_736_; lean_object* v___x_738_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v___x_734_, 1);
v___x_736_ = lean_box(0);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v_a_735_);
lean_ctor_set(v___x_711_, 0, v___x_736_);
v___x_738_ = v___x_711_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_a_735_);
v___x_738_ = v_reuseFailAlloc_741_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = lean_array_push(v_fst_709_, v___x_738_);
v___x_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
lean_ctor_set(v___x_740_, 1, v___x_728_);
v_a_702_ = v___x_740_;
goto v___jp_701_;
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_dec_ref(v___x_728_);
lean_del_object(v___x_711_);
lean_dec(v_fst_709_);
v_a_742_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_734_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_734_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
}
}
}
}
v___jp_701_:
{
size_t v___x_703_; size_t v___x_704_; 
v___x_703_ = ((size_t)1ULL);
v___x_704_ = lean_usize_add(v_i_692_, v___x_703_);
v_i_692_ = v___x_704_;
v_b_693_ = v_a_702_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__2___boxed(lean_object* v_as_756_, lean_object* v_sz_757_, lean_object* v_i_758_, lean_object* v_b_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
size_t v_sz_boxed_767_; size_t v_i_boxed_768_; lean_object* v_res_769_; 
v_sz_boxed_767_ = lean_unbox_usize(v_sz_757_);
lean_dec(v_sz_757_);
v_i_boxed_768_ = lean_unbox_usize(v_i_758_);
lean_dec(v_i_758_);
v_res_769_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__2(v_as_756_, v_sz_boxed_767_, v_i_boxed_768_, v_b_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec_ref(v_as_756_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1___redArg(lean_object* v_patternVars_770_, lean_object* v_as_771_, size_t v_sz_772_, size_t v_i_773_, lean_object* v_b_774_){
_start:
{
lean_object* v_a_777_; uint8_t v___x_781_; 
v___x_781_ = lean_usize_dec_lt(v_i_773_, v_sz_772_);
if (v___x_781_ == 0)
{
lean_object* v___x_782_; 
v___x_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_782_, 0, v_b_774_);
return v___x_782_;
}
else
{
lean_object* v_snd_783_; lean_object* v_snd_784_; lean_object* v_fst_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_838_; 
v_snd_783_ = lean_ctor_get(v_b_774_, 1);
lean_inc(v_snd_783_);
v_snd_784_ = lean_ctor_get(v_snd_783_, 1);
lean_inc(v_snd_784_);
v_fst_785_ = lean_ctor_get(v_b_774_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v_b_774_);
if (v_isSharedCheck_838_ == 0)
{
lean_object* v_unused_839_; 
v_unused_839_ = lean_ctor_get(v_b_774_, 1);
lean_dec(v_unused_839_);
v___x_787_ = v_b_774_;
v_isShared_788_ = v_isSharedCheck_838_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_fst_785_);
lean_dec(v_b_774_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_838_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v_fst_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_836_; 
v_fst_789_ = lean_ctor_get(v_snd_783_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v_snd_783_);
if (v_isSharedCheck_836_ == 0)
{
lean_object* v_unused_837_; 
v_unused_837_ = lean_ctor_get(v_snd_783_, 1);
lean_dec(v_unused_837_);
v___x_791_ = v_snd_783_;
v_isShared_792_ = v_isSharedCheck_836_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_fst_789_);
lean_dec(v_snd_783_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_836_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v_array_793_; lean_object* v_start_794_; lean_object* v_stop_795_; uint8_t v___x_796_; 
v_array_793_ = lean_ctor_get(v_snd_784_, 0);
v_start_794_ = lean_ctor_get(v_snd_784_, 1);
v_stop_795_ = lean_ctor_get(v_snd_784_, 2);
v___x_796_ = lean_nat_dec_lt(v_start_794_, v_stop_795_);
if (v___x_796_ == 0)
{
lean_object* v___x_798_; 
if (v_isShared_792_ == 0)
{
v___x_798_ = v___x_791_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_fst_789_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v_snd_784_);
v___x_798_ = v_reuseFailAlloc_803_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_800_; 
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 1, v___x_798_);
v___x_800_ = v___x_787_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_fst_785_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v___x_798_);
v___x_800_ = v_reuseFailAlloc_802_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_801_; 
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
return v___x_801_;
}
}
}
else
{
lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_832_; 
lean_inc(v_stop_795_);
lean_inc(v_start_794_);
lean_inc_ref(v_array_793_);
v_isSharedCheck_832_ = !lean_is_exclusive(v_snd_784_);
if (v_isSharedCheck_832_ == 0)
{
lean_object* v_unused_833_; lean_object* v_unused_834_; lean_object* v_unused_835_; 
v_unused_833_ = lean_ctor_get(v_snd_784_, 2);
lean_dec(v_unused_833_);
v_unused_834_ = lean_ctor_get(v_snd_784_, 1);
lean_dec(v_unused_834_);
v_unused_835_ = lean_ctor_get(v_snd_784_, 0);
lean_dec(v_unused_835_);
v___x_805_ = v_snd_784_;
v_isShared_806_ = v_isSharedCheck_832_;
goto v_resetjp_804_;
}
else
{
lean_dec(v_snd_784_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_832_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_811_; 
v___x_807_ = lean_array_fget(v_array_793_, v_start_794_);
v___x_808_ = lean_unsigned_to_nat(1u);
v___x_809_ = lean_nat_add(v_start_794_, v___x_808_);
lean_dec(v_start_794_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 1, v___x_809_);
v___x_811_ = v___x_805_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_array_793_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v___x_809_);
lean_ctor_set(v_reuseFailAlloc_831_, 2, v_stop_795_);
v___x_811_ = v_reuseFailAlloc_831_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
uint8_t v___x_812_; 
v___x_812_ = lean_unbox(v___x_807_);
lean_dec(v___x_807_);
if (v___x_812_ == 0)
{
lean_object* v_a_813_; lean_object* v___x_814_; lean_object* v___x_816_; 
v_a_813_ = lean_array_uget_borrowed(v_as_771_, v_i_773_);
lean_inc(v_a_813_);
v___x_814_ = lean_array_push(v_fst_785_, v_a_813_);
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 1, v___x_811_);
v___x_816_ = v___x_791_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_fst_789_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v___x_811_);
v___x_816_ = v_reuseFailAlloc_820_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
lean_object* v___x_818_; 
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 1, v___x_816_);
lean_ctor_set(v___x_787_, 0, v___x_814_);
v___x_818_ = v___x_787_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
v_a_777_ = v___x_818_;
goto v___jp_776_;
}
}
}
else
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_821_ = l_Lean_instInhabitedExpr;
v___x_822_ = lean_array_get_borrowed(v___x_821_, v_patternVars_770_, v_fst_789_);
v___x_823_ = lean_nat_add(v_fst_789_, v___x_808_);
lean_dec(v_fst_789_);
lean_inc(v___x_822_);
v___x_824_ = lean_array_push(v_fst_785_, v___x_822_);
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 1, v___x_811_);
lean_ctor_set(v___x_791_, 0, v___x_823_);
v___x_826_ = v___x_791_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_823_);
lean_ctor_set(v_reuseFailAlloc_830_, 1, v___x_811_);
v___x_826_ = v_reuseFailAlloc_830_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
lean_object* v___x_828_; 
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 1, v___x_826_);
lean_ctor_set(v___x_787_, 0, v___x_824_);
v___x_828_ = v___x_787_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_824_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v___x_826_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
v_a_777_ = v___x_828_;
goto v___jp_776_;
}
}
}
}
}
}
}
}
}
v___jp_776_:
{
size_t v___x_778_; size_t v___x_779_; 
v___x_778_ = ((size_t)1ULL);
v___x_779_ = lean_usize_add(v_i_773_, v___x_778_);
v_i_773_ = v___x_779_;
v_b_774_ = v_a_777_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1___redArg___boxed(lean_object* v_patternVars_840_, lean_object* v_as_841_, lean_object* v_sz_842_, lean_object* v_i_843_, lean_object* v_b_844_, lean_object* v___y_845_){
_start:
{
size_t v_sz_boxed_846_; size_t v_i_boxed_847_; lean_object* v_res_848_; 
v_sz_boxed_846_ = lean_unbox_usize(v_sz_842_);
lean_dec(v_sz_842_);
v_i_boxed_847_ = lean_unbox_usize(v_i_843_);
lean_dec(v_i_843_);
v_res_848_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1___redArg(v_patternVars_840_, v_as_841_, v_sz_boxed_846_, v_i_boxed_847_, v_b_844_);
lean_dec_ref(v_as_841_);
lean_dec_ref(v_patternVars_840_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___lam__0(lean_object* v___x_849_, lean_object* v___x_850_, lean_object* v_x_851_, lean_object* v_x_852_, uint8_t v___x_853_, lean_object* v_patternVars_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; size_t v_sz_865_; size_t v___x_866_; lean_object* v___x_867_; 
v___x_862_ = lean_mk_empty_array_with_capacity(v___x_849_);
v___x_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_849_);
lean_ctor_set(v___x_863_, 1, v___x_850_);
v___x_864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_862_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v_sz_865_ = lean_array_size(v_x_851_);
v___x_866_ = ((size_t)0ULL);
v___x_867_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1___redArg(v_patternVars_854_, v_x_851_, v_sz_865_, v___x_866_, v___x_864_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v_fst_869_; lean_object* v___x_870_; uint8_t v___x_871_; uint8_t v___x_872_; lean_object* v___x_873_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
v_fst_869_ = lean_ctor_get(v_a_868_, 0);
lean_inc(v_fst_869_);
lean_dec(v_a_868_);
v___x_870_ = l_Lean_mkAppN(v_x_852_, v_fst_869_);
lean_dec(v_fst_869_);
v___x_871_ = 0;
v___x_872_ = 1;
v___x_873_ = l_Lean_Meta_mkLambdaFVars(v_patternVars_854_, v___x_870_, v___x_871_, v___x_853_, v___x_871_, v___x_853_, v___x_872_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_875_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_874_);
lean_dec_ref_known(v___x_873_, 1);
v___x_875_ = l_Lean_Meta_Sym_shareCommonInc(v_a_874_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
return v___x_875_;
}
else
{
return v___x_873_;
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
lean_dec_ref(v_x_852_);
v_a_876_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_867_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_867_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___lam__0___boxed(lean_object* v___x_884_, lean_object* v___x_885_, lean_object* v_x_886_, lean_object* v_x_887_, lean_object* v___x_888_, lean_object* v_patternVars_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
uint8_t v___x_7457__boxed_897_; lean_object* v_res_898_; 
v___x_7457__boxed_897_ = lean_unbox(v___x_888_);
v_res_898_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___lam__0(v___x_884_, v___x_885_, v_x_886_, v_x_887_, v___x_7457__boxed_897_, v_patternVars_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec_ref(v_patternVars_889_);
lean_dec_ref(v_x_886_);
return v_res_898_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__3(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_902_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__2));
v___x_903_ = lean_unsigned_to_nat(6u);
v___x_904_ = lean_unsigned_to_nat(89u);
v___x_905_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__1));
v___x_906_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__0));
v___x_907_ = l_mkPanicMessageWithDecl(v___x_906_, v___x_905_, v___x_904_, v___x_903_, v___x_902_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4(lean_object* v_mask_910_, lean_object* v_x_911_, lean_object* v_x_912_, lean_object* v_x_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
if (lean_obj_tag(v_x_911_) == 5)
{
lean_object* v_fn_921_; lean_object* v_arg_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v_fn_921_ = lean_ctor_get(v_x_911_, 0);
lean_inc_ref(v_fn_921_);
v_arg_922_ = lean_ctor_get(v_x_911_, 1);
lean_inc_ref(v_arg_922_);
lean_dec_ref_known(v_x_911_, 2);
v___x_923_ = lean_array_set(v_x_912_, v_x_913_, v_arg_922_);
v___x_924_ = lean_unsigned_to_nat(1u);
v___x_925_ = lean_nat_sub(v_x_913_, v___x_924_);
lean_dec(v_x_913_);
v_x_911_ = v_fn_921_;
v_x_912_ = v___x_923_;
v_x_913_ = v___x_925_;
goto _start;
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
lean_dec(v_x_913_);
v___x_927_ = lean_array_get_size(v_x_912_);
v___x_928_ = lean_array_get_size(v_mask_910_);
v___x_929_ = lean_nat_dec_eq(v___x_927_, v___x_928_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; lean_object* v___x_931_; 
lean_dec_ref(v_x_912_);
lean_dec_ref(v_x_911_);
lean_dec_ref(v_mask_910_);
v___x_930_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__3, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__3);
v___x_931_ = l_panic___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__0(v___x_930_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
return v___x_931_;
}
else
{
lean_object* v___x_932_; lean_object* v_decls_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___f_936_; lean_object* v___x_937_; size_t v_sz_938_; size_t v___x_939_; lean_object* v___x_940_; 
v___x_932_ = lean_unsigned_to_nat(0u);
v_decls_933_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___closed__4));
v___x_934_ = l_Array_toSubarray___redArg(v_mask_910_, v___x_932_, v___x_928_);
v___x_935_ = lean_box(v___x_929_);
lean_inc_ref(v_x_912_);
lean_inc_ref(v___x_934_);
v___f_936_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___lam__0___boxed), 13, 5);
lean_closure_set(v___f_936_, 0, v___x_932_);
lean_closure_set(v___f_936_, 1, v___x_934_);
lean_closure_set(v___f_936_, 2, v_x_912_);
lean_closure_set(v___f_936_, 3, v_x_911_);
lean_closure_set(v___f_936_, 4, v___x_935_);
v___x_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_937_, 0, v_decls_933_);
lean_ctor_set(v___x_937_, 1, v___x_934_);
v_sz_938_ = lean_array_size(v_x_912_);
v___x_939_ = ((size_t)0ULL);
v___x_940_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__2(v_x_912_, v_sz_938_, v___x_939_, v___x_937_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
lean_dec_ref(v_x_912_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v_fst_942_; uint8_t v___x_943_; lean_object* v___x_944_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
v_fst_942_ = lean_ctor_get(v_a_941_, 0);
lean_inc(v_fst_942_);
lean_dec(v_a_941_);
v___x_943_ = 0;
v___x_944_ = l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3(v_fst_942_, v___f_936_, v___x_943_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
return v___x_944_;
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec_ref(v___f_936_);
v_a_945_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_940_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_940_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4___boxed(lean_object* v_mask_953_, lean_object* v_x_954_, lean_object* v_x_955_, lean_object* v_x_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4(v_mask_953_, v_x_954_, v_x_955_, v_x_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
return v_res_964_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___closed__0(void){
_start:
{
lean_object* v___x_965_; lean_object* v_dummy_966_; 
v___x_965_ = lean_box(0);
v_dummy_966_ = l_Lean_Expr_sort___override(v___x_965_);
return v_dummy_966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern(lean_object* v_funAtom_967_, lean_object* v_mask_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_dummy_976_; lean_object* v_nargs_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v_dummy_976_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___closed__0);
v_nargs_977_ = l_Lean_Expr_getAppNumArgs(v_funAtom_967_);
lean_inc(v_nargs_977_);
v___x_978_ = lean_mk_array(v_nargs_977_, v_dummy_976_);
v___x_979_ = lean_unsigned_to_nat(1u);
v___x_980_ = lean_nat_sub(v_nargs_977_, v___x_979_);
lean_dec(v_nargs_977_);
v___x_981_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__4(v_mask_968_, v_funAtom_967_, v___x_978_, v___x_980_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___boxed(lean_object* v_funAtom_982_, lean_object* v_mask_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern(v_funAtom_982_, v_mask_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_, v_a_989_);
lean_dec(v_a_989_);
lean_dec_ref(v_a_988_);
lean_dec(v_a_987_);
lean_dec_ref(v_a_986_);
lean_dec(v_a_985_);
lean_dec_ref(v_a_984_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1(lean_object* v_patternVars_992_, lean_object* v_as_993_, size_t v_sz_994_, size_t v_i_995_, lean_object* v_b_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1___redArg(v_patternVars_992_, v_as_993_, v_sz_994_, v_i_995_, v_b_996_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1___boxed(lean_object* v_patternVars_1005_, lean_object* v_as_1006_, lean_object* v_sz_1007_, lean_object* v_i_1008_, lean_object* v_b_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
size_t v_sz_boxed_1017_; size_t v_i_boxed_1018_; lean_object* v_res_1019_; 
v_sz_boxed_1017_ = lean_unbox_usize(v_sz_1007_);
lean_dec(v_sz_1007_);
v_i_boxed_1018_ = lean_unbox_usize(v_i_1008_);
lean_dec(v_i_1008_);
v_res_1019_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__1(v_patternVars_1005_, v_as_1006_, v_sz_boxed_1017_, v_i_boxed_1018_, v_b_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec_ref(v_as_1006_);
lean_dec_ref(v_patternVars_1005_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9(lean_object* v_00_u03b1_1020_, lean_object* v_name_1021_, uint8_t v_bi_1022_, lean_object* v_type_1023_, lean_object* v_k_1024_, uint8_t v_kind_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___redArg(v_name_1021_, v_bi_1022_, v_type_1023_, v_k_1024_, v_kind_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9___boxed(lean_object* v_00_u03b1_1034_, lean_object* v_name_1035_, lean_object* v_bi_1036_, lean_object* v_type_1037_, lean_object* v_k_1038_, lean_object* v_kind_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
uint8_t v_bi_boxed_1047_; uint8_t v_kind_boxed_1048_; lean_object* v_res_1049_; 
v_bi_boxed_1047_ = lean_unbox(v_bi_1036_);
v_kind_boxed_1048_ = lean_unbox(v_kind_1039_);
v_res_1049_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6_spec__8_spec__9(v_00_u03b1_1034_, v_name_1035_, v_bi_boxed_1047_, v_type_1037_, v_k_1038_, v_kind_boxed_1048_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3___redArg(lean_object* v_as_1050_, size_t v_sz_1051_, size_t v_i_1052_, lean_object* v_b_1053_){
_start:
{
lean_object* v_a_1056_; uint8_t v___x_1060_; 
v___x_1060_ = lean_usize_dec_lt(v_i_1052_, v_sz_1051_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1061_, 0, v_b_1053_);
return v___x_1061_;
}
else
{
lean_object* v_snd_1062_; lean_object* v_fst_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1097_; 
v_snd_1062_ = lean_ctor_get(v_b_1053_, 1);
v_fst_1063_ = lean_ctor_get(v_b_1053_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_b_1053_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1065_ = v_b_1053_;
v_isShared_1066_ = v_isSharedCheck_1097_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_snd_1062_);
lean_inc(v_fst_1063_);
lean_dec(v_b_1053_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1097_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v_array_1067_; lean_object* v_start_1068_; lean_object* v_stop_1069_; uint8_t v___x_1070_; 
v_array_1067_ = lean_ctor_get(v_snd_1062_, 0);
v_start_1068_ = lean_ctor_get(v_snd_1062_, 1);
v_stop_1069_ = lean_ctor_get(v_snd_1062_, 2);
v___x_1070_ = lean_nat_dec_lt(v_start_1068_, v_stop_1069_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1072_; 
if (v_isShared_1066_ == 0)
{
v___x_1072_ = v___x_1065_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_fst_1063_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v_snd_1062_);
v___x_1072_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1073_; 
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
return v___x_1073_;
}
}
else
{
lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1093_; 
lean_inc(v_stop_1069_);
lean_inc(v_start_1068_);
lean_inc_ref(v_array_1067_);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_snd_1062_);
if (v_isSharedCheck_1093_ == 0)
{
lean_object* v_unused_1094_; lean_object* v_unused_1095_; lean_object* v_unused_1096_; 
v_unused_1094_ = lean_ctor_get(v_snd_1062_, 2);
lean_dec(v_unused_1094_);
v_unused_1095_ = lean_ctor_get(v_snd_1062_, 1);
lean_dec(v_unused_1095_);
v_unused_1096_ = lean_ctor_get(v_snd_1062_, 0);
lean_dec(v_unused_1096_);
v___x_1076_ = v_snd_1062_;
v_isShared_1077_ = v_isSharedCheck_1093_;
goto v_resetjp_1075_;
}
else
{
lean_dec(v_snd_1062_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1093_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1082_; 
v___x_1078_ = lean_array_fget(v_array_1067_, v_start_1068_);
v___x_1079_ = lean_unsigned_to_nat(1u);
v___x_1080_ = lean_nat_add(v_start_1068_, v___x_1079_);
lean_dec(v_start_1068_);
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 1, v___x_1080_);
v___x_1082_ = v___x_1076_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_array_1067_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v___x_1080_);
lean_ctor_set(v_reuseFailAlloc_1092_, 2, v_stop_1069_);
v___x_1082_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
uint8_t v___x_1083_; 
v___x_1083_ = lean_unbox(v___x_1078_);
lean_dec(v___x_1078_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1085_; 
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 1, v___x_1082_);
v___x_1085_ = v___x_1065_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_fst_1063_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v___x_1082_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
v_a_1056_ = v___x_1085_;
goto v___jp_1055_;
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
v_a_1087_ = lean_array_uget_borrowed(v_as_1050_, v_i_1052_);
lean_inc(v_a_1087_);
v___x_1088_ = lean_array_push(v_fst_1063_, v_a_1087_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 1, v___x_1082_);
lean_ctor_set(v___x_1065_, 0, v___x_1088_);
v___x_1090_ = v___x_1065_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1088_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v___x_1082_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
v_a_1056_ = v___x_1090_;
goto v___jp_1055_;
}
}
}
}
}
}
}
v___jp_1055_:
{
size_t v___x_1057_; size_t v___x_1058_; 
v___x_1057_ = ((size_t)1ULL);
v___x_1058_ = lean_usize_add(v_i_1052_, v___x_1057_);
v_i_1052_ = v___x_1058_;
v_b_1053_ = v_a_1056_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3___redArg___boxed(lean_object* v_as_1098_, lean_object* v_sz_1099_, lean_object* v_i_1100_, lean_object* v_b_1101_, lean_object* v___y_1102_){
_start:
{
size_t v_sz_boxed_1103_; size_t v_i_boxed_1104_; lean_object* v_res_1105_; 
v_sz_boxed_1103_ = lean_unbox_usize(v_sz_1099_);
lean_dec(v_sz_1099_);
v_i_boxed_1104_ = lean_unbox_usize(v_i_1100_);
lean_dec(v_i_1100_);
v_res_1105_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3___redArg(v_as_1098_, v_sz_boxed_1103_, v_i_boxed_1104_, v_b_1101_);
lean_dec_ref(v_as_1098_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__2(size_t v_sz_1106_, size_t v_i_1107_, lean_object* v_bs_1108_){
_start:
{
uint8_t v___x_1109_; 
v___x_1109_ = lean_usize_dec_lt(v_i_1107_, v_sz_1106_);
if (v___x_1109_ == 0)
{
return v_bs_1108_;
}
else
{
lean_object* v_v_1110_; lean_object* v_fst_1111_; lean_object* v_snd_1112_; lean_object* v___x_1113_; lean_object* v_bs_x27_1114_; uint8_t v___y_1116_; uint8_t v___x_1122_; 
v_v_1110_ = lean_array_uget_borrowed(v_bs_1108_, v_i_1107_);
v_fst_1111_ = lean_ctor_get(v_v_1110_, 0);
lean_inc(v_fst_1111_);
v_snd_1112_ = lean_ctor_get(v_v_1110_, 1);
lean_inc(v_snd_1112_);
v___x_1113_ = lean_unsigned_to_nat(0u);
v_bs_x27_1114_ = lean_array_uset(v_bs_1108_, v_i_1107_, v___x_1113_);
v___x_1122_ = lean_unbox(v_fst_1111_);
if (v___x_1122_ == 0)
{
uint8_t v___x_1123_; 
lean_dec(v_snd_1112_);
v___x_1123_ = lean_unbox(v_fst_1111_);
lean_dec(v_fst_1111_);
v___y_1116_ = v___x_1123_;
goto v___jp_1115_;
}
else
{
uint8_t v___x_1124_; 
lean_dec(v_fst_1111_);
v___x_1124_ = lean_unbox(v_snd_1112_);
lean_dec(v_snd_1112_);
v___y_1116_ = v___x_1124_;
goto v___jp_1115_;
}
v___jp_1115_:
{
size_t v___x_1117_; size_t v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1117_ = ((size_t)1ULL);
v___x_1118_ = lean_usize_add(v_i_1107_, v___x_1117_);
v___x_1119_ = lean_box(v___y_1116_);
v___x_1120_ = lean_array_uset(v_bs_x27_1114_, v_i_1107_, v___x_1119_);
v_i_1107_ = v___x_1118_;
v_bs_1108_ = v___x_1120_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__2___boxed(lean_object* v_sz_1125_, lean_object* v_i_1126_, lean_object* v_bs_1127_){
_start:
{
size_t v_sz_boxed_1128_; size_t v_i_boxed_1129_; lean_object* v_res_1130_; 
v_sz_boxed_1128_ = lean_unbox_usize(v_sz_1125_);
lean_dec(v_sz_1125_);
v_i_boxed_1129_ = lean_unbox_usize(v_i_1126_);
lean_dec(v_i_1126_);
v_res_1130_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__2(v_sz_boxed_1128_, v_i_boxed_1129_, v_bs_1127_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0___redArg(uint8_t v___x_1131_, size_t v_sz_1132_, size_t v_i_1133_, lean_object* v_bs_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
uint8_t v___x_1142_; 
v___x_1142_ = lean_usize_dec_lt(v_i_1133_, v_sz_1132_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v_bs_1134_);
return v___x_1143_;
}
else
{
lean_object* v_v_1144_; lean_object* v___x_1145_; lean_object* v_bs_x27_1146_; uint8_t v_a_1148_; lean_object* v___x_1154_; 
v_v_1144_ = lean_array_uget(v_bs_1134_, v_i_1133_);
v___x_1145_ = lean_unsigned_to_nat(0u);
v_bs_x27_1146_ = lean_array_uset(v_bs_1134_, v_i_1133_, v___x_1145_);
lean_inc(v_v_1144_);
v___x_1154_ = l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg(v_v_1144_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v_a_1155_; 
v_a_1155_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_a_1155_);
lean_dec_ref_known(v___x_1154_, 1);
if (lean_obj_tag(v_a_1155_) == 0)
{
lean_object* v___x_1156_; 
v___x_1156_ = l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg(v_v_1144_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; uint8_t v___x_1158_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
lean_dec_ref_known(v___x_1156_, 1);
v___x_1158_ = lean_unbox(v_a_1157_);
lean_dec(v_a_1157_);
v_a_1148_ = v___x_1158_;
goto v___jp_1147_;
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
lean_dec_ref(v_bs_x27_1146_);
v_a_1159_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1156_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1156_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_1155_, 1);
lean_dec(v_v_1144_);
v_a_1148_ = v___x_1131_;
goto v___jp_1147_;
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
lean_dec_ref(v_bs_x27_1146_);
lean_dec(v_v_1144_);
v_a_1167_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1154_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1154_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
v___jp_1147_:
{
size_t v___x_1149_; size_t v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1149_ = ((size_t)1ULL);
v___x_1150_ = lean_usize_add(v_i_1133_, v___x_1149_);
v___x_1151_ = lean_box(v_a_1148_);
v___x_1152_ = lean_array_uset(v_bs_x27_1146_, v_i_1133_, v___x_1151_);
v_i_1133_ = v___x_1150_;
v_bs_1134_ = v___x_1152_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0___redArg___boxed(lean_object* v___x_1175_, lean_object* v_sz_1176_, lean_object* v_i_1177_, lean_object* v_bs_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
uint8_t v___x_106556__boxed_1186_; size_t v_sz_boxed_1187_; size_t v_i_boxed_1188_; lean_object* v_res_1189_; 
v___x_106556__boxed_1186_ = lean_unbox(v___x_1175_);
v_sz_boxed_1187_ = lean_unbox_usize(v_sz_1176_);
lean_dec(v_sz_1176_);
v_i_boxed_1188_ = lean_unbox_usize(v_i_1177_);
lean_dec(v_i_1177_);
v_res_1189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0___redArg(v___x_106556__boxed_1186_, v_sz_boxed_1187_, v_i_boxed_1188_, v_bs_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5_spec__5(lean_object* v_msgData_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v___x_1196_; lean_object* v_env_1197_; uint8_t v___x_1198_; lean_object* v_env_1199_; lean_object* v___x_1200_; lean_object* v_toCold_1201_; lean_object* v_mctx_1202_; lean_object* v_lctx_1203_; lean_object* v_options_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1196_ = lean_st_ref_get(v___y_1194_);
v_env_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc_ref(v_env_1197_);
lean_dec(v___x_1196_);
v___x_1198_ = 0;
v_env_1199_ = l_Lean_Environment_setRecordingDeps(v_env_1197_, v___x_1198_);
v___x_1200_ = lean_st_ref_get(v___y_1192_);
v_toCold_1201_ = lean_ctor_get(v___y_1193_, 0);
v_mctx_1202_ = lean_ctor_get(v___x_1200_, 0);
lean_inc_ref(v_mctx_1202_);
lean_dec(v___x_1200_);
v_lctx_1203_ = lean_ctor_get(v___y_1191_, 2);
v_options_1204_ = lean_ctor_get(v_toCold_1201_, 2);
lean_inc_ref(v_options_1204_);
lean_inc_ref(v_lctx_1203_);
v___x_1205_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1205_, 0, v_env_1199_);
lean_ctor_set(v___x_1205_, 1, v_mctx_1202_);
lean_ctor_set(v___x_1205_, 2, v_lctx_1203_);
lean_ctor_set(v___x_1205_, 3, v_options_1204_);
v___x_1206_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
lean_ctor_set(v___x_1206_, 1, v_msgData_1190_);
v___x_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5_spec__5___boxed(lean_object* v_msgData_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5_spec__5(v_msgData_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
return v_res_1214_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1215_; double v___x_1216_; 
v___x_1215_ = lean_unsigned_to_nat(0u);
v___x_1216_ = lean_float_of_nat(v___x_1215_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg(lean_object* v_cls_1220_, lean_object* v_msg_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_ref_1227_; lean_object* v___x_1228_; lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1274_; 
v_ref_1227_ = lean_ctor_get(v___y_1224_, 2);
v___x_1228_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5_spec__5(v_msg_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1274_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1228_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1274_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1233_; lean_object* v_traceState_1234_; lean_object* v_env_1235_; lean_object* v_nextMacroScope_1236_; lean_object* v_ngen_1237_; lean_object* v_auxDeclNGen_1238_; lean_object* v_cache_1239_; lean_object* v_recordedDeps_1240_; lean_object* v_messages_1241_; lean_object* v_infoState_1242_; lean_object* v_snapshotTasks_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1273_; 
v___x_1233_ = lean_st_ref_take(v___y_1225_);
v_traceState_1234_ = lean_ctor_get(v___x_1233_, 4);
v_env_1235_ = lean_ctor_get(v___x_1233_, 0);
v_nextMacroScope_1236_ = lean_ctor_get(v___x_1233_, 1);
v_ngen_1237_ = lean_ctor_get(v___x_1233_, 2);
v_auxDeclNGen_1238_ = lean_ctor_get(v___x_1233_, 3);
v_cache_1239_ = lean_ctor_get(v___x_1233_, 5);
v_recordedDeps_1240_ = lean_ctor_get(v___x_1233_, 6);
v_messages_1241_ = lean_ctor_get(v___x_1233_, 7);
v_infoState_1242_ = lean_ctor_get(v___x_1233_, 8);
v_snapshotTasks_1243_ = lean_ctor_get(v___x_1233_, 9);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1245_ = v___x_1233_;
v_isShared_1246_ = v_isSharedCheck_1273_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_snapshotTasks_1243_);
lean_inc(v_infoState_1242_);
lean_inc(v_messages_1241_);
lean_inc(v_recordedDeps_1240_);
lean_inc(v_cache_1239_);
lean_inc(v_traceState_1234_);
lean_inc(v_auxDeclNGen_1238_);
lean_inc(v_ngen_1237_);
lean_inc(v_nextMacroScope_1236_);
lean_inc(v_env_1235_);
lean_dec(v___x_1233_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1273_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
uint64_t v_tid_1247_; lean_object* v_traces_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1272_; 
v_tid_1247_ = lean_ctor_get_uint64(v_traceState_1234_, sizeof(void*)*1);
v_traces_1248_ = lean_ctor_get(v_traceState_1234_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_traceState_1234_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1250_ = v_traceState_1234_;
v_isShared_1251_ = v_isSharedCheck_1272_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_traces_1248_);
lean_dec(v_traceState_1234_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1272_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; double v___x_1254_; uint8_t v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1263_; 
v___x_1252_ = lean_box(0);
v___x_1253_ = lean_box(0);
v___x_1254_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__0);
v___x_1255_ = 0;
v___x_1256_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__1));
v___x_1257_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1257_, 0, v_cls_1220_);
lean_ctor_set(v___x_1257_, 1, v___x_1253_);
lean_ctor_set(v___x_1257_, 2, v___x_1256_);
lean_ctor_set_float(v___x_1257_, sizeof(void*)*3, v___x_1254_);
lean_ctor_set_float(v___x_1257_, sizeof(void*)*3 + 8, v___x_1254_);
lean_ctor_set_uint8(v___x_1257_, sizeof(void*)*3 + 16, v___x_1255_);
v___x_1258_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___closed__2));
v___x_1259_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1257_);
lean_ctor_set(v___x_1259_, 1, v_a_1229_);
lean_ctor_set(v___x_1259_, 2, v___x_1258_);
lean_inc(v_ref_1227_);
v___x_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1260_, 0, v_ref_1227_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = l_Lean_PersistentArray_push___redArg(v_traces_1248_, v___x_1260_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 0, v___x_1261_);
v___x_1263_ = v___x_1250_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1261_);
lean_ctor_set_uint64(v_reuseFailAlloc_1271_, sizeof(void*)*1, v_tid_1247_);
v___x_1263_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
lean_object* v___x_1265_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 4, v___x_1263_);
v___x_1265_ = v___x_1245_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_env_1235_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v_nextMacroScope_1236_);
lean_ctor_set(v_reuseFailAlloc_1270_, 2, v_ngen_1237_);
lean_ctor_set(v_reuseFailAlloc_1270_, 3, v_auxDeclNGen_1238_);
lean_ctor_set(v_reuseFailAlloc_1270_, 4, v___x_1263_);
lean_ctor_set(v_reuseFailAlloc_1270_, 5, v_cache_1239_);
lean_ctor_set(v_reuseFailAlloc_1270_, 6, v_recordedDeps_1240_);
lean_ctor_set(v_reuseFailAlloc_1270_, 7, v_messages_1241_);
lean_ctor_set(v_reuseFailAlloc_1270_, 8, v_infoState_1242_);
lean_ctor_set(v_reuseFailAlloc_1270_, 9, v_snapshotTasks_1243_);
v___x_1265_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
lean_object* v___x_1266_; lean_object* v___x_1268_; 
v___x_1266_ = lean_st_ref_put(v___y_1225_, v___x_1265_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 0, v___x_1252_);
v___x_1268_ = v___x_1231_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1252_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg___boxed(lean_object* v_cls_1275_, lean_object* v_msg_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg(v_cls_1275_, v_msg_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4(lean_object* v_a_1285_, lean_object* v_a_1286_){
_start:
{
if (lean_obj_tag(v_a_1285_) == 0)
{
lean_object* v___x_1287_; 
v___x_1287_ = l_List_reverse___redArg(v_a_1286_);
return v___x_1287_;
}
else
{
lean_object* v_head_1288_; lean_object* v_tail_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1304_; 
v_head_1288_ = lean_ctor_get(v_a_1285_, 0);
v_tail_1289_ = lean_ctor_get(v_a_1285_, 1);
v_isSharedCheck_1304_ = !lean_is_exclusive(v_a_1285_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1291_ = v_a_1285_;
v_isShared_1292_ = v_isSharedCheck_1304_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_tail_1289_);
lean_inc(v_head_1288_);
lean_dec(v_a_1285_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1304_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___y_1294_; uint8_t v___x_1301_; 
v___x_1301_ = lean_unbox(v_head_1288_);
lean_dec(v_head_1288_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; 
v___x_1302_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__0));
v___y_1294_ = v___x_1302_;
goto v___jp_1293_;
}
else
{
lean_object* v___x_1303_; 
v___x_1303_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4___closed__1));
v___y_1294_ = v___x_1303_;
goto v___jp_1293_;
}
v___jp_1293_:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1298_; 
lean_inc_ref(v___y_1294_);
v___x_1295_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___y_1294_);
v___x_1296_ = l_Lean_MessageData_ofFormat(v___x_1295_);
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 1, v_a_1286_);
lean_ctor_set(v___x_1291_, 0, v___x_1296_);
v___x_1298_ = v___x_1291_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v___x_1296_);
lean_ctor_set(v_reuseFailAlloc_1300_, 1, v_a_1286_);
v___x_1298_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
v_a_1285_ = v_tail_1289_;
v_a_1286_ = v___x_1298_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__1(lean_object* v___x_1305_, uint8_t v___x_1306_, lean_object* v_as_1307_, size_t v_i_1308_, size_t v_stop_1309_){
_start:
{
uint8_t v___y_1311_; uint8_t v___x_1315_; 
v___x_1315_ = lean_usize_dec_eq(v_i_1308_, v_stop_1309_);
if (v___x_1315_ == 0)
{
lean_object* v___x_1316_; uint8_t v___x_1317_; 
v___x_1316_ = lean_array_uget_borrowed(v_as_1307_, v_i_1308_);
v___x_1317_ = lean_unbox(v___x_1316_);
if (v___x_1317_ == 0)
{
lean_object* v___x_1318_; uint8_t v___x_1319_; 
v___x_1318_ = lean_unsigned_to_nat(0u);
v___x_1319_ = lean_nat_dec_eq(v___x_1305_, v___x_1318_);
v___y_1311_ = v___x_1319_;
goto v___jp_1310_;
}
else
{
v___y_1311_ = v___x_1306_;
goto v___jp_1310_;
}
}
else
{
uint8_t v___x_1320_; 
v___x_1320_ = 0;
return v___x_1320_;
}
v___jp_1310_:
{
if (v___y_1311_ == 0)
{
size_t v___x_1312_; size_t v___x_1313_; 
v___x_1312_ = ((size_t)1ULL);
v___x_1313_ = lean_usize_add(v_i_1308_, v___x_1312_);
v_i_1308_ = v___x_1313_;
goto _start;
}
else
{
return v___y_1311_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__1___boxed(lean_object* v___x_1321_, lean_object* v___x_1322_, lean_object* v_as_1323_, lean_object* v_i_1324_, lean_object* v_stop_1325_){
_start:
{
uint8_t v___x_106818__boxed_1326_; size_t v_i_boxed_1327_; size_t v_stop_boxed_1328_; uint8_t v_res_1329_; lean_object* v_r_1330_; 
v___x_106818__boxed_1326_ = lean_unbox(v___x_1322_);
v_i_boxed_1327_ = lean_unbox_usize(v_i_1324_);
lean_dec(v_i_1324_);
v_stop_boxed_1328_ = lean_unbox_usize(v_stop_1325_);
lean_dec(v_stop_1325_);
v_res_1329_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__1(v___x_1321_, v___x_106818__boxed_1326_, v_as_1323_, v_i_boxed_1327_, v_stop_boxed_1328_);
lean_dec_ref(v_as_1323_);
lean_dec(v___x_1321_);
v_r_1330_ = lean_box(v_res_1329_);
return v_r_1330_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__6(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3));
v___x_1342_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__5));
v___x_1343_ = l_Lean_Name_append(v___x_1342_, v___x_1341_);
return v___x_1343_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__8(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__7));
v___x_1346_ = l_Lean_stringToMessageData(v___x_1345_);
return v___x_1346_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__10(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__9));
v___x_1349_ = l_Lean_stringToMessageData(v___x_1348_);
return v___x_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6(uint8_t v___x_1350_, lean_object* v_fst_1351_, uint8_t v_snd_1352_, lean_object* v_x_1353_, lean_object* v_x_1354_, lean_object* v_x_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
if (lean_obj_tag(v_x_1353_) == 5)
{
lean_object* v_fn_1372_; lean_object* v_arg_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v_fn_1372_ = lean_ctor_get(v_x_1353_, 0);
lean_inc_ref(v_fn_1372_);
v_arg_1373_ = lean_ctor_get(v_x_1353_, 1);
lean_inc_ref(v_arg_1373_);
lean_dec_ref_known(v_x_1353_, 2);
v___x_1374_ = lean_array_set(v_x_1354_, v_x_1355_, v_arg_1373_);
v___x_1375_ = lean_unsigned_to_nat(1u);
v___x_1376_ = lean_nat_sub(v_x_1355_, v___x_1375_);
lean_dec(v_x_1355_);
v_x_1353_ = v_fn_1372_;
v_x_1354_ = v___x_1374_;
v_x_1355_ = v___x_1376_;
goto _start;
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
lean_dec(v_x_1355_);
v___x_1378_ = lean_array_get_size(v_x_1354_);
v___x_1379_ = lean_unsigned_to_nat(0u);
v___x_1380_ = lean_nat_dec_eq(v___x_1378_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; size_t v_sz_1382_; size_t v___x_1383_; lean_object* v___x_1384_; 
v___x_1381_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3));
v_sz_1382_ = lean_array_size(v_x_1354_);
v___x_1383_ = ((size_t)0ULL);
lean_inc_ref(v_x_1354_);
v___x_1384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0___redArg(v___x_1350_, v_sz_1382_, v___x_1383_, v_x_1354_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; lean_object* v___x_1386_; uint8_t v___x_1387_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
v___x_1386_ = lean_array_get_size(v_a_1385_);
v___x_1387_ = lean_nat_dec_lt(v___x_1379_, v___x_1386_);
if (v___x_1387_ == 0)
{
lean_dec(v_a_1385_);
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_x_1353_);
lean_dec_ref(v_fst_1351_);
goto v___jp_1369_;
}
else
{
if (v___x_1387_ == 0)
{
lean_dec(v_a_1385_);
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_x_1353_);
lean_dec_ref(v_fst_1351_);
goto v___jp_1369_;
}
else
{
size_t v___x_1388_; uint8_t v___x_1389_; 
v___x_1388_ = lean_usize_of_nat(v___x_1386_);
v___x_1389_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__1(v___x_1378_, v___x_1350_, v_a_1385_, v___x_1383_, v___x_1388_);
if (v___x_1389_ == 0)
{
lean_dec(v_a_1385_);
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_x_1353_);
lean_dec_ref(v_fst_1351_);
goto v___jp_1369_;
}
else
{
lean_object* v___x_1390_; 
v___x_1390_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getCongrMask___redArg(v_x_1353_, v_x_1354_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1512_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1393_ = v___x_1390_;
v_isShared_1394_ = v_isSharedCheck_1512_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1390_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1512_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
if (lean_obj_tag(v_a_1391_) == 1)
{
lean_object* v_val_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1507_; 
lean_del_object(v___x_1393_);
v_val_1395_ = lean_ctor_get(v_a_1391_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v_a_1391_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1397_ = v_a_1391_;
v_isShared_1398_ = v_isSharedCheck_1507_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_val_1395_);
lean_dec(v_a_1391_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1507_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1399_; size_t v_sz_1400_; lean_object* v___x_1401_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___x_1440_; uint8_t v___x_1441_; 
v___x_1399_ = l_Array_zip___redArg(v_a_1385_, v_val_1395_);
lean_dec(v_val_1395_);
lean_dec(v_a_1385_);
v_sz_1400_ = lean_array_size(v___x_1399_);
v___x_1401_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__2(v_sz_1400_, v___x_1383_, v___x_1399_);
v___x_1440_ = lean_array_get_size(v___x_1401_);
v___x_1441_ = lean_nat_dec_lt(v___x_1379_, v___x_1440_);
if (v___x_1441_ == 0)
{
lean_dec_ref(v___x_1401_);
lean_del_object(v___x_1397_);
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_fst_1351_);
goto v___jp_1369_;
}
else
{
if (v___x_1441_ == 0)
{
lean_dec_ref(v___x_1401_);
lean_del_object(v___x_1397_);
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_fst_1351_);
goto v___jp_1369_;
}
else
{
size_t v___x_1442_; uint8_t v___x_1443_; 
v___x_1442_ = lean_usize_of_nat(v___x_1440_);
v___x_1443_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__1(v___x_1378_, v___x_1350_, v___x_1401_, v___x_1383_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_dec_ref(v___x_1401_);
lean_del_object(v___x_1397_);
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_fst_1351_);
goto v___jp_1369_;
}
else
{
lean_object* v___x_1444_; 
lean_inc_ref(v___x_1401_);
lean_inc_ref(v_fst_1351_);
v___x_1444_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern(v_fst_1351_, v___x_1401_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; lean_object* v___x_1446_; lean_object* v_theoryState_1447_; lean_object* v_atoms_1448_; lean_object* v_atomsAssignmentExprCache_1449_; lean_object* v_atomsAssignmentMapCache_1450_; lean_object* v_evalsAtCache_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1498_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1444_, 1);
v___x_1446_ = lean_st_ref_take(v___y_1358_);
v_theoryState_1447_ = lean_ctor_get(v___x_1446_, 4);
v_atoms_1448_ = lean_ctor_get(v___x_1446_, 0);
v_atomsAssignmentExprCache_1449_ = lean_ctor_get(v___x_1446_, 1);
v_atomsAssignmentMapCache_1450_ = lean_ctor_get(v___x_1446_, 2);
v_evalsAtCache_1451_ = lean_ctor_get(v___x_1446_, 3);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1453_ = v___x_1446_;
v_isShared_1454_ = v_isSharedCheck_1498_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_theoryState_1447_);
lean_inc(v_evalsAtCache_1451_);
lean_inc(v_atomsAssignmentMapCache_1450_);
lean_inc(v_atomsAssignmentExprCache_1449_);
lean_inc(v_atoms_1448_);
lean_dec(v___x_1446_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1498_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v_atoms_1455_; lean_object* v_masks_1456_; lean_object* v_patterns_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1497_; 
v_atoms_1455_ = lean_ctor_get(v_theoryState_1447_, 0);
v_masks_1456_ = lean_ctor_get(v_theoryState_1447_, 1);
v_patterns_1457_ = lean_ctor_get(v_theoryState_1447_, 2);
v_isSharedCheck_1497_ = !lean_is_exclusive(v_theoryState_1447_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1459_ = v_theoryState_1447_;
v_isShared_1460_ = v_isSharedCheck_1497_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_patterns_1457_);
lean_inc(v_masks_1456_);
lean_inc(v_atoms_1455_);
lean_dec(v_theoryState_1447_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1497_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1466_; 
lean_inc_ref(v_fst_1351_);
v___x_1461_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1461_, 0, v_fst_1351_);
lean_ctor_set_uint8(v___x_1461_, sizeof(void*)*1, v_snd_1352_);
v___x_1462_ = lean_array_push(v_atoms_1455_, v___x_1461_);
lean_inc_ref(v___x_1401_);
v___x_1463_ = lean_array_push(v_masks_1456_, v___x_1401_);
v___x_1464_ = lean_array_push(v_patterns_1457_, v_a_1445_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 2, v___x_1464_);
lean_ctor_set(v___x_1459_, 1, v___x_1463_);
lean_ctor_set(v___x_1459_, 0, v___x_1462_);
v___x_1466_ = v___x_1459_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v___x_1463_);
lean_ctor_set(v_reuseFailAlloc_1496_, 2, v___x_1464_);
v___x_1466_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_object* v___x_1468_; 
if (v_isShared_1454_ == 0)
{
lean_ctor_set(v___x_1453_, 4, v___x_1466_);
v___x_1468_ = v___x_1453_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_atoms_1448_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_atomsAssignmentExprCache_1449_);
lean_ctor_set(v_reuseFailAlloc_1495_, 2, v_atomsAssignmentMapCache_1450_);
lean_ctor_set(v_reuseFailAlloc_1495_, 3, v_evalsAtCache_1451_);
lean_ctor_set(v_reuseFailAlloc_1495_, 4, v___x_1466_);
v___x_1468_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
lean_object* v___x_1469_; lean_object* v_toCold_1470_; lean_object* v_options_1471_; uint8_t v_hasTrace_1472_; 
v___x_1469_ = lean_st_ref_put(v___y_1358_, v___x_1468_);
v_toCold_1470_ = lean_ctor_get(v___y_1366_, 0);
v_options_1471_ = lean_ctor_get(v_toCold_1470_, 2);
v_hasTrace_1472_ = lean_ctor_get_uint8(v_options_1471_, sizeof(void*)*1);
if (v_hasTrace_1472_ == 0)
{
lean_dec_ref(v_fst_1351_);
v___y_1403_ = v___y_1356_;
v___y_1404_ = v___y_1357_;
v___y_1405_ = v___y_1358_;
v___y_1406_ = v___y_1359_;
v___y_1407_ = v___y_1360_;
v___y_1408_ = v___y_1361_;
v___y_1409_ = v___y_1362_;
v___y_1410_ = v___y_1363_;
v___y_1411_ = v___y_1364_;
v___y_1412_ = v___y_1365_;
v___y_1413_ = v___y_1366_;
v___y_1414_ = v___y_1367_;
goto v___jp_1402_;
}
else
{
lean_object* v_inheritedTraceOptions_1473_; lean_object* v___x_1474_; uint8_t v___x_1475_; 
v_inheritedTraceOptions_1473_ = lean_ctor_get(v_toCold_1470_, 11);
v___x_1474_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__6, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__6_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__6);
v___x_1475_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1473_, v_options_1471_, v___x_1474_);
if (v___x_1475_ == 0)
{
lean_dec_ref(v_fst_1351_);
v___y_1403_ = v___y_1356_;
v___y_1404_ = v___y_1357_;
v___y_1405_ = v___y_1358_;
v___y_1406_ = v___y_1359_;
v___y_1407_ = v___y_1360_;
v___y_1408_ = v___y_1361_;
v___y_1409_ = v___y_1362_;
v___y_1410_ = v___y_1363_;
v___y_1411_ = v___y_1364_;
v___y_1412_ = v___y_1365_;
v___y_1413_ = v___y_1366_;
v___y_1414_ = v___y_1367_;
goto v___jp_1402_;
}
else
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1476_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__8, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__8);
v___x_1477_ = l_Lean_MessageData_ofExpr(v_fst_1351_);
v___x_1478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1476_);
lean_ctor_set(v___x_1478_, 1, v___x_1477_);
v___x_1479_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__10, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__10_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__10);
v___x_1480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1478_);
lean_ctor_set(v___x_1480_, 1, v___x_1479_);
lean_inc_ref(v___x_1401_);
v___x_1481_ = lean_array_to_list(v___x_1401_);
v___x_1482_ = lean_box(0);
v___x_1483_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__4(v___x_1481_, v___x_1482_);
v___x_1484_ = l_Lean_MessageData_ofList(v___x_1483_);
v___x_1485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1480_);
lean_ctor_set(v___x_1485_, 1, v___x_1484_);
v___x_1486_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg(v___x_1381_, v___x_1485_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_dec_ref_known(v___x_1486_, 1);
v___y_1403_ = v___y_1356_;
v___y_1404_ = v___y_1357_;
v___y_1405_ = v___y_1358_;
v___y_1406_ = v___y_1359_;
v___y_1407_ = v___y_1360_;
v___y_1408_ = v___y_1361_;
v___y_1409_ = v___y_1362_;
v___y_1410_ = v___y_1363_;
v___y_1411_ = v___y_1364_;
v___y_1412_ = v___y_1365_;
v___y_1413_ = v___y_1366_;
v___y_1414_ = v___y_1367_;
goto v___jp_1402_;
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec_ref(v___x_1401_);
lean_del_object(v___x_1397_);
lean_dec_ref(v_x_1354_);
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1486_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1486_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
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
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec_ref(v___x_1401_);
lean_del_object(v___x_1397_);
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_fst_1351_);
v_a_1499_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1444_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1444_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
}
}
v___jp_1402_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1415_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6___closed__0));
v___x_1416_ = lean_array_get_size(v___x_1401_);
v___x_1417_ = l_Array_toSubarray___redArg(v___x_1401_, v___x_1379_, v___x_1416_);
v___x_1418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1415_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
v___x_1419_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3___redArg(v_x_1354_, v_sz_1382_, v___x_1383_, v___x_1418_);
lean_dec_ref(v_x_1354_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1431_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1422_ = v___x_1419_;
v_isShared_1423_ = v_isSharedCheck_1431_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v___x_1419_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1431_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v_fst_1424_; lean_object* v___x_1426_; 
v_fst_1424_ = lean_ctor_get(v_a_1420_, 0);
lean_inc(v_fst_1424_);
lean_dec(v_a_1420_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 0, v_fst_1424_);
v___x_1426_ = v___x_1397_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_fst_1424_);
v___x_1426_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
lean_object* v___x_1428_; 
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v___x_1426_);
v___x_1428_ = v___x_1422_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v___x_1426_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
lean_del_object(v___x_1397_);
v_a_1432_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1419_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1419_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1510_; 
lean_dec(v_a_1391_);
lean_dec(v_a_1385_);
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_fst_1351_);
v___x_1508_ = lean_box(0);
if (v_isShared_1394_ == 0)
{
lean_ctor_set(v___x_1393_, 0, v___x_1508_);
v___x_1510_ = v___x_1393_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1508_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec(v_a_1385_);
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_fst_1351_);
v_a_1513_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1390_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1390_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1528_; 
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_x_1353_);
lean_dec_ref(v_fst_1351_);
v_a_1521_ = lean_ctor_get(v___x_1384_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1523_ = v___x_1384_;
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1384_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1526_; 
if (v_isShared_1524_ == 0)
{
v___x_1526_ = v___x_1523_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1521_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
}
}
else
{
lean_dec_ref(v_x_1354_);
lean_dec_ref(v_x_1353_);
lean_dec_ref(v_fst_1351_);
goto v___jp_1369_;
}
}
v___jp_1369_:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = lean_box(0);
v___x_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1370_);
return v___x_1371_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___boxed(lean_object** _args){
lean_object* v___x_1529_ = _args[0];
lean_object* v_fst_1530_ = _args[1];
lean_object* v_snd_1531_ = _args[2];
lean_object* v_x_1532_ = _args[3];
lean_object* v_x_1533_ = _args[4];
lean_object* v_x_1534_ = _args[5];
lean_object* v___y_1535_ = _args[6];
lean_object* v___y_1536_ = _args[7];
lean_object* v___y_1537_ = _args[8];
lean_object* v___y_1538_ = _args[9];
lean_object* v___y_1539_ = _args[10];
lean_object* v___y_1540_ = _args[11];
lean_object* v___y_1541_ = _args[12];
lean_object* v___y_1542_ = _args[13];
lean_object* v___y_1543_ = _args[14];
lean_object* v___y_1544_ = _args[15];
lean_object* v___y_1545_ = _args[16];
lean_object* v___y_1546_ = _args[17];
lean_object* v___y_1547_ = _args[18];
_start:
{
uint8_t v___x_106885__boxed_1548_; uint8_t v_snd_106887__boxed_1549_; lean_object* v_res_1550_; 
v___x_106885__boxed_1548_ = lean_unbox(v___x_1529_);
v_snd_106887__boxed_1549_ = lean_unbox(v_snd_1531_);
v_res_1550_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6(v___x_106885__boxed_1548_, v_fst_1530_, v_snd_106887__boxed_1549_, v_x_1532_, v_x_1533_, v_x_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
return v_res_1550_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__1(void){
_start:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1552_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__0));
v___x_1553_ = l_Lean_stringToMessageData(v___x_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom(lean_object* v_e_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_){
_start:
{
lean_object* v_config_1568_; uint8_t v_uf_1569_; 
v_config_1568_ = lean_ctor_get(v_a_1556_, 1);
v_uf_1569_ = lean_ctor_get_uint8(v_config_1568_, sizeof(void*)*3 + 11);
if (v_uf_1569_ == 0)
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
lean_dec_ref(v_e_1554_);
v___x_1570_ = lean_box(0);
v___x_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
return v___x_1571_;
}
else
{
lean_object* v___x_1572_; 
v___x_1572_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_unwrapBoolAtom___redArg(v_e_1554_, v_a_1564_);
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v_fst_1574_; lean_object* v_snd_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1620_; 
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v___x_1572_, 1);
v_fst_1574_ = lean_ctor_get(v_a_1573_, 0);
v_snd_1575_ = lean_ctor_get(v_a_1573_, 1);
v_isSharedCheck_1620_ = !lean_is_exclusive(v_a_1573_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1577_ = v_a_1573_;
v_isShared_1578_ = v_isSharedCheck_1620_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_snd_1575_);
lean_inc(v_fst_1574_);
lean_dec(v_a_1573_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1620_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1589_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v_toCold_1599_; lean_object* v_options_1600_; uint8_t v_hasTrace_1601_; 
v_toCold_1599_ = lean_ctor_get(v_a_1565_, 0);
v_options_1600_ = lean_ctor_get(v_toCold_1599_, 2);
v_hasTrace_1601_ = lean_ctor_get_uint8(v_options_1600_, sizeof(void*)*1);
if (v_hasTrace_1601_ == 0)
{
lean_del_object(v___x_1577_);
v___y_1580_ = v_a_1555_;
v___y_1581_ = v_a_1556_;
v___y_1582_ = v_a_1557_;
v___y_1583_ = v_a_1558_;
v___y_1584_ = v_a_1559_;
v___y_1585_ = v_a_1560_;
v___y_1586_ = v_a_1561_;
v___y_1587_ = v_a_1562_;
v___y_1588_ = v_a_1563_;
v___y_1589_ = v_a_1564_;
v___y_1590_ = v_a_1565_;
v___y_1591_ = v_a_1566_;
goto v___jp_1579_;
}
else
{
lean_object* v_inheritedTraceOptions_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; uint8_t v___x_1605_; 
v_inheritedTraceOptions_1602_ = lean_ctor_get(v_toCold_1599_, 11);
v___x_1603_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__3));
v___x_1604_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__6, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__6_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__6);
v___x_1605_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1602_, v_options_1600_, v___x_1604_);
if (v___x_1605_ == 0)
{
lean_del_object(v___x_1577_);
v___y_1580_ = v_a_1555_;
v___y_1581_ = v_a_1556_;
v___y_1582_ = v_a_1557_;
v___y_1583_ = v_a_1558_;
v___y_1584_ = v_a_1559_;
v___y_1585_ = v_a_1560_;
v___y_1586_ = v_a_1561_;
v___y_1587_ = v_a_1562_;
v___y_1588_ = v_a_1563_;
v___y_1589_ = v_a_1564_;
v___y_1590_ = v_a_1565_;
v___y_1591_ = v_a_1566_;
goto v___jp_1579_;
}
else
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1609_; 
v___x_1606_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___closed__1);
lean_inc(v_fst_1574_);
v___x_1607_ = l_Lean_MessageData_ofExpr(v_fst_1574_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set_tag(v___x_1577_, 7);
lean_ctor_set(v___x_1577_, 1, v___x_1607_);
lean_ctor_set(v___x_1577_, 0, v___x_1606_);
v___x_1609_ = v___x_1577_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1606_);
lean_ctor_set(v_reuseFailAlloc_1619_, 1, v___x_1607_);
v___x_1609_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
lean_object* v___x_1610_; 
v___x_1610_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg(v___x_1603_, v___x_1609_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_dec_ref_known(v___x_1610_, 1);
v___y_1580_ = v_a_1555_;
v___y_1581_ = v_a_1556_;
v___y_1582_ = v_a_1557_;
v___y_1583_ = v_a_1558_;
v___y_1584_ = v_a_1559_;
v___y_1585_ = v_a_1560_;
v___y_1586_ = v_a_1561_;
v___y_1587_ = v_a_1562_;
v___y_1588_ = v_a_1563_;
v___y_1589_ = v_a_1564_;
v___y_1590_ = v_a_1565_;
v___y_1591_ = v_a_1566_;
goto v___jp_1579_;
}
else
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec(v_snd_1575_);
lean_dec(v_fst_1574_);
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1610_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1610_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
}
}
v___jp_1579_:
{
lean_object* v_dummy_1592_; lean_object* v_nargs_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; uint8_t v___x_1597_; lean_object* v___x_1598_; 
v_dummy_1592_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern___closed__0);
v_nargs_1593_ = l_Lean_Expr_getAppNumArgs(v_fst_1574_);
lean_inc(v_nargs_1593_);
v___x_1594_ = lean_mk_array(v_nargs_1593_, v_dummy_1592_);
v___x_1595_ = lean_unsigned_to_nat(1u);
v___x_1596_ = lean_nat_sub(v_nargs_1593_, v___x_1595_);
lean_dec(v_nargs_1593_);
v___x_1597_ = lean_unbox(v_snd_1575_);
lean_dec(v_snd_1575_);
lean_inc(v_fst_1574_);
v___x_1598_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6(v_uf_1569_, v_fst_1574_, v___x_1597_, v_fst_1574_, v___x_1594_, v___x_1596_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
return v___x_1598_;
}
}
}
else
{
lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1628_; 
v_a_1621_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1623_ = v___x_1572_;
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v___x_1572_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1628_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v___x_1626_; 
if (v_isShared_1624_ == 0)
{
v___x_1626_ = v___x_1623_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_a_1621_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom___boxed(lean_object* v_e_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom(v_e_1629_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_, v_a_1641_);
lean_dec(v_a_1641_);
lean_dec_ref(v_a_1640_);
lean_dec(v_a_1639_);
lean_dec_ref(v_a_1638_);
lean_dec(v_a_1637_);
lean_dec_ref(v_a_1636_);
lean_dec(v_a_1635_);
lean_dec_ref(v_a_1634_);
lean_dec(v_a_1633_);
lean_dec(v_a_1632_);
lean_dec_ref(v_a_1631_);
lean_dec(v_a_1630_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0(uint8_t v___x_1644_, size_t v_sz_1645_, size_t v_i_1646_, lean_object* v_bs_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0___redArg(v___x_1644_, v_sz_1645_, v_i_1646_, v_bs_1647_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0___boxed(lean_object** _args){
lean_object* v___x_1662_ = _args[0];
lean_object* v_sz_1663_ = _args[1];
lean_object* v_i_1664_ = _args[2];
lean_object* v_bs_1665_ = _args[3];
lean_object* v___y_1666_ = _args[4];
lean_object* v___y_1667_ = _args[5];
lean_object* v___y_1668_ = _args[6];
lean_object* v___y_1669_ = _args[7];
lean_object* v___y_1670_ = _args[8];
lean_object* v___y_1671_ = _args[9];
lean_object* v___y_1672_ = _args[10];
lean_object* v___y_1673_ = _args[11];
lean_object* v___y_1674_ = _args[12];
lean_object* v___y_1675_ = _args[13];
lean_object* v___y_1676_ = _args[14];
lean_object* v___y_1677_ = _args[15];
lean_object* v___y_1678_ = _args[16];
_start:
{
uint8_t v___x_107385__boxed_1679_; size_t v_sz_boxed_1680_; size_t v_i_boxed_1681_; lean_object* v_res_1682_; 
v___x_107385__boxed_1679_ = lean_unbox(v___x_1662_);
v_sz_boxed_1680_ = lean_unbox_usize(v_sz_1663_);
lean_dec(v_sz_1663_);
v_i_boxed_1681_ = lean_unbox_usize(v_i_1664_);
lean_dec(v_i_1664_);
v_res_1682_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__0(v___x_107385__boxed_1679_, v_sz_boxed_1680_, v_i_boxed_1681_, v_bs_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
lean_dec(v___y_1666_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3(lean_object* v_as_1683_, size_t v_sz_1684_, size_t v_i_1685_, lean_object* v_b_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_){
_start:
{
lean_object* v___x_1700_; 
v___x_1700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3___redArg(v_as_1683_, v_sz_1684_, v_i_1685_, v_b_1686_);
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3___boxed(lean_object** _args){
lean_object* v_as_1701_ = _args[0];
lean_object* v_sz_1702_ = _args[1];
lean_object* v_i_1703_ = _args[2];
lean_object* v_b_1704_ = _args[3];
lean_object* v___y_1705_ = _args[4];
lean_object* v___y_1706_ = _args[5];
lean_object* v___y_1707_ = _args[6];
lean_object* v___y_1708_ = _args[7];
lean_object* v___y_1709_ = _args[8];
lean_object* v___y_1710_ = _args[9];
lean_object* v___y_1711_ = _args[10];
lean_object* v___y_1712_ = _args[11];
lean_object* v___y_1713_ = _args[12];
lean_object* v___y_1714_ = _args[13];
lean_object* v___y_1715_ = _args[14];
lean_object* v___y_1716_ = _args[15];
lean_object* v___y_1717_ = _args[16];
_start:
{
size_t v_sz_boxed_1718_; size_t v_i_boxed_1719_; lean_object* v_res_1720_; 
v_sz_boxed_1718_ = lean_unbox_usize(v_sz_1702_);
lean_dec(v_sz_1702_);
v_i_boxed_1719_ = lean_unbox_usize(v_i_1703_);
lean_dec(v_i_1703_);
v_res_1720_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__3(v_as_1701_, v_sz_boxed_1718_, v_i_boxed_1719_, v_b_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1712_);
lean_dec_ref(v___y_1711_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
lean_dec(v___y_1708_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec_ref(v_as_1701_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5(lean_object* v_cls_1721_, lean_object* v_msg_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___redArg(v_cls_1721_, v_msg_1722_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5___boxed(lean_object* v_cls_1737_, lean_object* v_msg_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5(v_cls_1737_, v_msg_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
lean_dec(v___y_1746_);
lean_dec_ref(v___y_1745_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec(v___y_1739_);
return v_res_1752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifyM_simplifyBinaryProof_x27___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof_spec__0(lean_object* v___x_1753_, lean_object* v_fst_1754_, lean_object* v_fproof_1755_, lean_object* v_snd_1756_, lean_object* v_sproof_1757_){
_start:
{
if (lean_obj_tag(v_fproof_1755_) == 0)
{
lean_dec_ref(v_snd_1756_);
if (lean_obj_tag(v_sproof_1757_) == 0)
{
lean_object* v___x_1758_; 
lean_dec_ref(v_fst_1754_);
lean_dec(v___x_1753_);
v___x_1758_ = lean_box(0);
return v___x_1758_;
}
else
{
lean_object* v_val_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1768_; 
v_val_1759_ = lean_ctor_get(v_sproof_1757_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v_sproof_1757_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1761_ = v_sproof_1757_;
v_isShared_1762_ = v_isSharedCheck_1768_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_val_1759_);
lean_dec(v_sproof_1757_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1768_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1763_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(v___x_1753_, v_fst_1754_);
v___x_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
lean_ctor_set(v___x_1764_, 1, v_val_1759_);
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 0, v___x_1764_);
v___x_1766_ = v___x_1761_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
else
{
lean_dec_ref(v_fst_1754_);
if (lean_obj_tag(v_sproof_1757_) == 0)
{
lean_object* v_val_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1778_; 
v_val_1769_ = lean_ctor_get(v_fproof_1755_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v_fproof_1755_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1771_ = v_fproof_1755_;
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_val_1769_);
lean_dec(v_fproof_1755_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1776_; 
v___x_1773_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(v___x_1753_, v_snd_1756_);
v___x_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1774_, 0, v_val_1769_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 0, v___x_1774_);
v___x_1776_ = v___x_1771_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
else
{
lean_object* v_val_1779_; lean_object* v_val_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1788_; 
lean_dec_ref(v_snd_1756_);
lean_dec(v___x_1753_);
v_val_1779_ = lean_ctor_get(v_fproof_1755_, 0);
lean_inc(v_val_1779_);
lean_dec_ref_known(v_fproof_1755_, 1);
v_val_1780_ = lean_ctor_get(v_sproof_1757_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v_sproof_1757_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1782_ = v_sproof_1757_;
v_isShared_1783_ = v_isSharedCheck_1788_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_val_1780_);
lean_dec(v_sproof_1757_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1788_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1784_; lean_object* v___x_1786_; 
v___x_1784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1784_, 0, v_val_1779_);
lean_ctor_set(v___x_1784_, 1, v_val_1780_);
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 0, v___x_1784_);
v___x_1786_ = v___x_1782_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v___x_1784_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof(lean_object* v_lhs_1789_, lean_object* v_rhs_1790_, lean_object* v_lhsExpr_1791_, lean_object* v_rhsExpr_1792_, lean_object* v_congrThm_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_){
_start:
{
lean_object* v_width_1806_; lean_object* v_expr_1807_; lean_object* v___x_1808_; 
v_width_1806_ = lean_ctor_get(v_lhs_1789_, 0);
lean_inc_n(v_width_1806_, 2);
v_expr_1807_ = lean_ctor_get(v_lhs_1789_, 4);
lean_inc_ref(v_expr_1807_);
v___x_1808_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_1806_, v_expr_1807_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v_a_1809_; lean_object* v_width_1810_; lean_object* v_expr_1811_; lean_object* v___x_1812_; 
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_a_1809_);
lean_dec_ref_known(v___x_1808_, 1);
v_width_1810_ = lean_ctor_get(v_rhs_1790_, 0);
v_expr_1811_ = lean_ctor_get(v_rhs_1790_, 4);
lean_inc_ref(v_expr_1811_);
lean_inc(v_width_1810_);
v___x_1812_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_1810_, v_expr_1811_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; lean_object* v___x_1814_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
lean_inc(v_a_1813_);
lean_dec_ref_known(v___x_1812_, 1);
v___x_1814_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_lhs_1789_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; lean_object* v___x_1816_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
lean_inc(v_a_1815_);
lean_dec_ref_known(v___x_1814_, 1);
v___x_1816_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_rhs_1790_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1840_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1840_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1840_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1821_; 
lean_inc(v_a_1813_);
lean_inc(v_a_1809_);
v___x_1821_ = l_Lean_Meta_Tactic_BVDecide_ReifyM_simplifyBinaryProof_x27___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof_spec__0(v_width_1806_, v_a_1809_, v_a_1815_, v_a_1813_, v_a_1817_);
if (lean_obj_tag(v___x_1821_) == 1)
{
lean_object* v_val_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1835_; 
v_val_1822_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1824_ = v___x_1821_;
v_isShared_1825_ = v_isSharedCheck_1835_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_val_1822_);
lean_dec(v___x_1821_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1835_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v_fst_1826_; lean_object* v_snd_1827_; lean_object* v___x_1828_; lean_object* v___x_1830_; 
v_fst_1826_ = lean_ctor_get(v_val_1822_, 0);
lean_inc(v_fst_1826_);
v_snd_1827_ = lean_ctor_get(v_val_1822_, 1);
lean_inc(v_snd_1827_);
lean_dec(v_val_1822_);
v___x_1828_ = l_Lean_mkApp6(v_congrThm_1793_, v_lhsExpr_1791_, v_rhsExpr_1792_, v_a_1809_, v_a_1813_, v_fst_1826_, v_snd_1827_);
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 0, v___x_1828_);
v___x_1830_ = v___x_1824_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v___x_1828_);
v___x_1830_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
lean_object* v___x_1832_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1830_);
v___x_1832_ = v___x_1819_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___x_1830_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1838_; 
lean_dec(v___x_1821_);
lean_dec(v_a_1813_);
lean_dec(v_a_1809_);
lean_dec_ref(v_congrThm_1793_);
lean_dec_ref(v_rhsExpr_1792_);
lean_dec_ref(v_lhsExpr_1791_);
v___x_1836_ = lean_box(0);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1836_);
v___x_1838_ = v___x_1819_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
else
{
lean_dec(v_a_1815_);
lean_dec(v_a_1813_);
lean_dec(v_a_1809_);
lean_dec(v_width_1806_);
lean_dec_ref(v_congrThm_1793_);
lean_dec_ref(v_rhsExpr_1792_);
lean_dec_ref(v_lhsExpr_1791_);
return v___x_1816_;
}
}
else
{
lean_dec(v_a_1813_);
lean_dec(v_a_1809_);
lean_dec(v_width_1806_);
lean_dec_ref(v_congrThm_1793_);
lean_dec_ref(v_rhsExpr_1792_);
lean_dec_ref(v_lhsExpr_1791_);
lean_dec_ref(v_rhs_1790_);
return v___x_1814_;
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
lean_dec(v_a_1809_);
lean_dec(v_width_1806_);
lean_dec_ref(v_congrThm_1793_);
lean_dec_ref(v_rhsExpr_1792_);
lean_dec_ref(v_lhsExpr_1791_);
lean_dec_ref(v_rhs_1790_);
lean_dec_ref(v_lhs_1789_);
v_a_1841_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1812_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1812_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
lean_dec(v_width_1806_);
lean_dec_ref(v_congrThm_1793_);
lean_dec_ref(v_rhsExpr_1792_);
lean_dec_ref(v_lhsExpr_1791_);
lean_dec_ref(v_rhs_1790_);
lean_dec_ref(v_lhs_1789_);
v_a_1849_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1808_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1808_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof___boxed(lean_object** _args){
lean_object* v_lhs_1857_ = _args[0];
lean_object* v_rhs_1858_ = _args[1];
lean_object* v_lhsExpr_1859_ = _args[2];
lean_object* v_rhsExpr_1860_ = _args[3];
lean_object* v_congrThm_1861_ = _args[4];
lean_object* v_a_1862_ = _args[5];
lean_object* v_a_1863_ = _args[6];
lean_object* v_a_1864_ = _args[7];
lean_object* v_a_1865_ = _args[8];
lean_object* v_a_1866_ = _args[9];
lean_object* v_a_1867_ = _args[10];
lean_object* v_a_1868_ = _args[11];
lean_object* v_a_1869_ = _args[12];
lean_object* v_a_1870_ = _args[13];
lean_object* v_a_1871_ = _args[14];
lean_object* v_a_1872_ = _args[15];
lean_object* v_a_1873_ = _args[16];
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof(v_lhs_1857_, v_rhs_1858_, v_lhsExpr_1859_, v_rhsExpr_1860_, v_congrThm_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_);
lean_dec(v_a_1872_);
lean_dec_ref(v_a_1871_);
lean_dec(v_a_1870_);
lean_dec_ref(v_a_1869_);
lean_dec(v_a_1868_);
lean_dec_ref(v_a_1867_);
lean_dec(v_a_1866_);
lean_dec_ref(v_a_1865_);
lean_dec(v_a_1864_);
lean_dec(v_a_1863_);
lean_dec_ref(v_a_1862_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryCongrProof(lean_object* v_inner_1875_, lean_object* v_innerExpr_1876_, lean_object* v_congrProof_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_){
_start:
{
lean_object* v_width_1890_; lean_object* v_expr_1891_; lean_object* v___x_1892_; 
v_width_1890_ = lean_ctor_get(v_inner_1875_, 0);
lean_inc_n(v_width_1890_, 2);
v_expr_1891_ = lean_ctor_get(v_inner_1875_, 4);
lean_inc_ref(v_expr_1891_);
v___x_1892_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_1890_, v_expr_1891_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_, v_a_1888_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v_a_1893_; lean_object* v___x_1894_; 
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
lean_inc(v_a_1893_);
lean_dec_ref_known(v___x_1892_, 1);
v___x_1894_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_inner_1875_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_, v_a_1888_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1916_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1897_ = v___x_1894_;
v_isShared_1898_ = v_isSharedCheck_1916_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1894_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1916_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
if (lean_obj_tag(v_a_1895_) == 1)
{
lean_object* v_val_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1911_; 
v_val_1899_ = lean_ctor_get(v_a_1895_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v_a_1895_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1901_ = v_a_1895_;
v_isShared_1902_ = v_isSharedCheck_1911_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_val_1899_);
lean_dec(v_a_1895_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1911_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1906_; 
v___x_1903_ = l_Lean_mkNatLit(v_width_1890_);
v___x_1904_ = l_Lean_mkApp4(v_congrProof_1877_, v___x_1903_, v_innerExpr_1876_, v_a_1893_, v_val_1899_);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 0, v___x_1904_);
v___x_1906_ = v___x_1901_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1904_);
v___x_1906_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
lean_object* v___x_1908_; 
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1906_);
v___x_1908_ = v___x_1897_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1906_);
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
else
{
lean_object* v___x_1912_; lean_object* v___x_1914_; 
lean_dec(v_a_1895_);
lean_dec(v_a_1893_);
lean_dec(v_width_1890_);
lean_dec_ref(v_congrProof_1877_);
lean_dec_ref(v_innerExpr_1876_);
v___x_1912_ = lean_box(0);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1912_);
v___x_1914_ = v___x_1897_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v___x_1912_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
else
{
lean_dec(v_a_1893_);
lean_dec(v_width_1890_);
lean_dec_ref(v_congrProof_1877_);
lean_dec_ref(v_innerExpr_1876_);
return v___x_1894_;
}
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
lean_dec(v_width_1890_);
lean_dec_ref(v_congrProof_1877_);
lean_dec_ref(v_innerExpr_1876_);
lean_dec_ref(v_inner_1875_);
v_a_1917_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1892_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1892_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryCongrProof___boxed(lean_object* v_inner_1925_, lean_object* v_innerExpr_1926_, lean_object* v_congrProof_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryCongrProof(v_inner_1925_, v_innerExpr_1926_, v_congrProof_1927_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
lean_dec(v_a_1938_);
lean_dec_ref(v_a_1937_);
lean_dec(v_a_1936_);
lean_dec_ref(v_a_1935_);
lean_dec(v_a_1934_);
lean_dec_ref(v_a_1933_);
lean_dec(v_a_1932_);
lean_dec_ref(v_a_1931_);
lean_dec(v_a_1930_);
lean_dec(v_a_1929_);
lean_dec_ref(v_a_1928_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_checkTheoryAtom(uint8_t v_synthetic_1941_, lean_object* v_e_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_){
_start:
{
if (v_synthetic_1941_ == 0)
{
lean_object* v___x_1959_; 
v___x_1959_ = l_Lean_Meta_Tactic_BVDecide_ReifyM_isAtom___redArg(v_e_1942_, v_a_1945_);
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; uint8_t v___x_1961_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1960_);
lean_dec_ref_known(v___x_1959_, 1);
v___x_1961_ = lean_unbox(v_a_1960_);
lean_dec(v_a_1960_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1962_; 
v___x_1962_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom(v_e_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1975_; 
v_a_1963_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1965_ = v___x_1962_;
v_isShared_1966_ = v_isSharedCheck_1975_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1962_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1975_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
if (lean_obj_tag(v_a_1963_) == 1)
{
lean_object* v_val_1967_; lean_object* v___x_1969_; 
v_val_1967_ = lean_ctor_get(v_a_1963_, 0);
lean_inc(v_val_1967_);
lean_dec_ref_known(v_a_1963_, 1);
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 0, v_val_1967_);
v___x_1969_ = v___x_1965_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_val_1967_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
else
{
lean_object* v___x_1971_; lean_object* v___x_1973_; 
lean_dec(v_a_1963_);
v___x_1971_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6___closed__0));
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 0, v___x_1971_);
v___x_1973_ = v___x_1965_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v___x_1971_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
}
}
else
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
v_a_1976_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1962_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1962_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
else
{
lean_dec_ref(v_e_1942_);
goto v___jp_1956_;
}
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
lean_dec_ref(v_e_1942_);
v_a_1984_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1959_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1959_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1984_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
else
{
lean_dec_ref(v_e_1942_);
goto v___jp_1956_;
}
v___jp_1956_:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1957_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_getFunctionPattern_spec__3_spec__4_spec__6___closed__0));
v___x_1958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1957_);
return v___x_1958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_checkTheoryAtom___boxed(lean_object* v_synthetic_1992_, lean_object* v_e_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_){
_start:
{
uint8_t v_synthetic_boxed_2007_; lean_object* v_res_2008_; 
v_synthetic_boxed_2007_ = lean_unbox(v_synthetic_1992_);
v_res_2008_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_checkTheoryAtom(v_synthetic_boxed_2007_, v_e_1993_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_);
lean_dec(v_a_2005_);
lean_dec_ref(v_a_2004_);
lean_dec(v_a_2003_);
lean_dec_ref(v_a_2002_);
lean_dec(v_a_2001_);
lean_dec_ref(v_a_2000_);
lean_dec(v_a_1999_);
lean_dec_ref(v_a_1998_);
lean_dec(v_a_1997_);
lean_dec(v_a_1996_);
lean_dec_ref(v_a_1995_);
lean_dec(v_a_1994_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__26___redArg(lean_object* v_a_2009_, lean_object* v_b_2010_, lean_object* v_x_2011_){
_start:
{
if (lean_obj_tag(v_x_2011_) == 0)
{
lean_dec(v_b_2010_);
lean_dec_ref(v_a_2009_);
return v_x_2011_;
}
else
{
lean_object* v_key_2012_; lean_object* v_value_2013_; lean_object* v_tail_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2028_; 
v_key_2012_ = lean_ctor_get(v_x_2011_, 0);
v_value_2013_ = lean_ctor_get(v_x_2011_, 1);
v_tail_2014_ = lean_ctor_get(v_x_2011_, 2);
v_isSharedCheck_2028_ = !lean_is_exclusive(v_x_2011_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2016_ = v_x_2011_;
v_isShared_2017_ = v_isSharedCheck_2028_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_tail_2014_);
lean_inc(v_value_2013_);
lean_inc(v_key_2012_);
lean_dec(v_x_2011_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2028_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
size_t v___x_2018_; size_t v___x_2019_; uint8_t v___x_2020_; 
v___x_2018_ = lean_ptr_addr(v_key_2012_);
v___x_2019_ = lean_ptr_addr(v_a_2009_);
v___x_2020_ = lean_usize_dec_eq(v___x_2018_, v___x_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; lean_object* v___x_2023_; 
v___x_2021_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__26___redArg(v_a_2009_, v_b_2010_, v_tail_2014_);
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 2, v___x_2021_);
v___x_2023_ = v___x_2016_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_key_2012_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v_value_2013_);
lean_ctor_set(v_reuseFailAlloc_2024_, 2, v___x_2021_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
else
{
lean_object* v___x_2026_; 
lean_dec(v_value_2013_);
lean_dec(v_key_2012_);
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 1, v_b_2010_);
lean_ctor_set(v___x_2016_, 0, v_a_2009_);
v___x_2026_ = v___x_2016_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2009_);
lean_ctor_set(v_reuseFailAlloc_2027_, 1, v_b_2010_);
lean_ctor_set(v_reuseFailAlloc_2027_, 2, v_tail_2014_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30_spec__31___redArg(lean_object* v_x_2029_, lean_object* v_x_2030_){
_start:
{
if (lean_obj_tag(v_x_2030_) == 0)
{
return v_x_2029_;
}
else
{
lean_object* v_key_2031_; lean_object* v_value_2032_; lean_object* v_tail_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2059_; 
v_key_2031_ = lean_ctor_get(v_x_2030_, 0);
v_value_2032_ = lean_ctor_get(v_x_2030_, 1);
v_tail_2033_ = lean_ctor_get(v_x_2030_, 2);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_x_2030_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2035_ = v_x_2030_;
v_isShared_2036_ = v_isSharedCheck_2059_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_tail_2033_);
lean_inc(v_value_2032_);
lean_inc(v_key_2031_);
lean_dec(v_x_2030_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2059_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; size_t v___x_2038_; size_t v___x_2039_; size_t v___x_2040_; uint64_t v___x_2041_; uint64_t v___x_2042_; uint64_t v___x_2043_; uint64_t v_fold_2044_; uint64_t v___x_2045_; uint64_t v___x_2046_; uint64_t v___x_2047_; size_t v___x_2048_; size_t v___x_2049_; size_t v___x_2050_; size_t v___x_2051_; size_t v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2055_; 
v___x_2037_ = lean_array_get_size(v_x_2029_);
v___x_2038_ = lean_ptr_addr(v_key_2031_);
v___x_2039_ = ((size_t)3ULL);
v___x_2040_ = lean_usize_shift_right(v___x_2038_, v___x_2039_);
v___x_2041_ = lean_usize_to_uint64(v___x_2040_);
v___x_2042_ = 32ULL;
v___x_2043_ = lean_uint64_shift_right(v___x_2041_, v___x_2042_);
v_fold_2044_ = lean_uint64_xor(v___x_2041_, v___x_2043_);
v___x_2045_ = 16ULL;
v___x_2046_ = lean_uint64_shift_right(v_fold_2044_, v___x_2045_);
v___x_2047_ = lean_uint64_xor(v_fold_2044_, v___x_2046_);
v___x_2048_ = lean_uint64_to_usize(v___x_2047_);
v___x_2049_ = lean_usize_of_nat(v___x_2037_);
v___x_2050_ = ((size_t)1ULL);
v___x_2051_ = lean_usize_sub(v___x_2049_, v___x_2050_);
v___x_2052_ = lean_usize_land(v___x_2048_, v___x_2051_);
v___x_2053_ = lean_array_uget_borrowed(v_x_2029_, v___x_2052_);
lean_inc(v___x_2053_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 2, v___x_2053_);
v___x_2055_ = v___x_2035_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_key_2031_);
lean_ctor_set(v_reuseFailAlloc_2058_, 1, v_value_2032_);
lean_ctor_set(v_reuseFailAlloc_2058_, 2, v___x_2053_);
v___x_2055_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_array_uset(v_x_2029_, v___x_2052_, v___x_2055_);
v_x_2029_ = v___x_2056_;
v_x_2030_ = v_tail_2033_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30___redArg(lean_object* v_i_2060_, lean_object* v_source_2061_, lean_object* v_target_2062_){
_start:
{
lean_object* v___x_2063_; uint8_t v___x_2064_; 
v___x_2063_ = lean_array_get_size(v_source_2061_);
v___x_2064_ = lean_nat_dec_lt(v_i_2060_, v___x_2063_);
if (v___x_2064_ == 0)
{
lean_dec_ref(v_source_2061_);
lean_dec(v_i_2060_);
return v_target_2062_;
}
else
{
lean_object* v_es_2065_; lean_object* v___x_2066_; lean_object* v_source_2067_; lean_object* v_target_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; 
v_es_2065_ = lean_array_fget(v_source_2061_, v_i_2060_);
v___x_2066_ = lean_box(0);
v_source_2067_ = lean_array_fset(v_source_2061_, v_i_2060_, v___x_2066_);
v_target_2068_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30_spec__31___redArg(v_target_2062_, v_es_2065_);
v___x_2069_ = lean_unsigned_to_nat(1u);
v___x_2070_ = lean_nat_add(v_i_2060_, v___x_2069_);
lean_dec(v_i_2060_);
v_i_2060_ = v___x_2070_;
v_source_2061_ = v_source_2067_;
v_target_2062_ = v_target_2068_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25___redArg(lean_object* v_data_2072_){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v_nbuckets_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2073_ = lean_array_get_size(v_data_2072_);
v___x_2074_ = lean_unsigned_to_nat(2u);
v_nbuckets_2075_ = lean_nat_mul(v___x_2073_, v___x_2074_);
v___x_2076_ = lean_unsigned_to_nat(0u);
v___x_2077_ = lean_box(0);
v___x_2078_ = lean_mk_array(v_nbuckets_2075_, v___x_2077_);
v___x_2079_ = lean_array_propagate_mark(v_data_2072_, v___x_2078_);
v___x_2080_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30___redArg(v___x_2076_, v_data_2072_, v___x_2079_);
return v___x_2080_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24___redArg(lean_object* v_a_2081_, lean_object* v_x_2082_){
_start:
{
if (lean_obj_tag(v_x_2082_) == 0)
{
uint8_t v___x_2083_; 
v___x_2083_ = 0;
return v___x_2083_;
}
else
{
lean_object* v_key_2084_; lean_object* v_tail_2085_; size_t v___x_2086_; size_t v___x_2087_; uint8_t v___x_2088_; 
v_key_2084_ = lean_ctor_get(v_x_2082_, 0);
v_tail_2085_ = lean_ctor_get(v_x_2082_, 2);
v___x_2086_ = lean_ptr_addr(v_key_2084_);
v___x_2087_ = lean_ptr_addr(v_a_2081_);
v___x_2088_ = lean_usize_dec_eq(v___x_2086_, v___x_2087_);
if (v___x_2088_ == 0)
{
v_x_2082_ = v_tail_2085_;
goto _start;
}
else
{
return v___x_2088_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24___redArg___boxed(lean_object* v_a_2090_, lean_object* v_x_2091_){
_start:
{
uint8_t v_res_2092_; lean_object* v_r_2093_; 
v_res_2092_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24___redArg(v_a_2090_, v_x_2091_);
lean_dec(v_x_2091_);
lean_dec_ref(v_a_2090_);
v_r_2093_ = lean_box(v_res_2092_);
return v_r_2093_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17___redArg(lean_object* v_m_2094_, lean_object* v_a_2095_, lean_object* v_b_2096_){
_start:
{
lean_object* v_size_2097_; lean_object* v_buckets_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2144_; 
v_size_2097_ = lean_ctor_get(v_m_2094_, 0);
v_buckets_2098_ = lean_ctor_get(v_m_2094_, 1);
v_isSharedCheck_2144_ = !lean_is_exclusive(v_m_2094_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2100_ = v_m_2094_;
v_isShared_2101_ = v_isSharedCheck_2144_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_buckets_2098_);
lean_inc(v_size_2097_);
lean_dec(v_m_2094_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2144_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2102_; size_t v___x_2103_; size_t v___x_2104_; size_t v___x_2105_; uint64_t v___x_2106_; uint64_t v___x_2107_; uint64_t v___x_2108_; uint64_t v_fold_2109_; uint64_t v___x_2110_; uint64_t v___x_2111_; uint64_t v___x_2112_; size_t v___x_2113_; size_t v___x_2114_; size_t v___x_2115_; size_t v___x_2116_; size_t v___x_2117_; lean_object* v_bkt_2118_; uint8_t v___x_2119_; 
v___x_2102_ = lean_array_get_size(v_buckets_2098_);
v___x_2103_ = lean_ptr_addr(v_a_2095_);
v___x_2104_ = ((size_t)3ULL);
v___x_2105_ = lean_usize_shift_right(v___x_2103_, v___x_2104_);
v___x_2106_ = lean_usize_to_uint64(v___x_2105_);
v___x_2107_ = 32ULL;
v___x_2108_ = lean_uint64_shift_right(v___x_2106_, v___x_2107_);
v_fold_2109_ = lean_uint64_xor(v___x_2106_, v___x_2108_);
v___x_2110_ = 16ULL;
v___x_2111_ = lean_uint64_shift_right(v_fold_2109_, v___x_2110_);
v___x_2112_ = lean_uint64_xor(v_fold_2109_, v___x_2111_);
v___x_2113_ = lean_uint64_to_usize(v___x_2112_);
v___x_2114_ = lean_usize_of_nat(v___x_2102_);
v___x_2115_ = ((size_t)1ULL);
v___x_2116_ = lean_usize_sub(v___x_2114_, v___x_2115_);
v___x_2117_ = lean_usize_land(v___x_2113_, v___x_2116_);
v_bkt_2118_ = lean_array_uget_borrowed(v_buckets_2098_, v___x_2117_);
v___x_2119_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24___redArg(v_a_2095_, v_bkt_2118_);
if (v___x_2119_ == 0)
{
lean_object* v___x_2120_; lean_object* v_size_x27_2121_; lean_object* v___x_2122_; lean_object* v_buckets_x27_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; 
v___x_2120_ = lean_unsigned_to_nat(1u);
v_size_x27_2121_ = lean_nat_add(v_size_2097_, v___x_2120_);
lean_dec(v_size_2097_);
lean_inc(v_bkt_2118_);
v___x_2122_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2122_, 0, v_a_2095_);
lean_ctor_set(v___x_2122_, 1, v_b_2096_);
lean_ctor_set(v___x_2122_, 2, v_bkt_2118_);
v_buckets_x27_2123_ = lean_array_uset(v_buckets_2098_, v___x_2117_, v___x_2122_);
v___x_2124_ = lean_unsigned_to_nat(4u);
v___x_2125_ = lean_nat_mul(v_size_x27_2121_, v___x_2124_);
v___x_2126_ = lean_unsigned_to_nat(3u);
v___x_2127_ = lean_nat_div(v___x_2125_, v___x_2126_);
lean_dec(v___x_2125_);
v___x_2128_ = lean_array_get_size(v_buckets_x27_2123_);
v___x_2129_ = lean_nat_dec_le(v___x_2127_, v___x_2128_);
lean_dec(v___x_2127_);
if (v___x_2129_ == 0)
{
lean_object* v_val_2130_; lean_object* v___x_2132_; 
v_val_2130_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25___redArg(v_buckets_x27_2123_);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 1, v_val_2130_);
lean_ctor_set(v___x_2100_, 0, v_size_x27_2121_);
v___x_2132_ = v___x_2100_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_size_x27_2121_);
lean_ctor_set(v_reuseFailAlloc_2133_, 1, v_val_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
else
{
lean_object* v___x_2135_; 
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 1, v_buckets_x27_2123_);
lean_ctor_set(v___x_2100_, 0, v_size_x27_2121_);
v___x_2135_ = v___x_2100_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_size_x27_2121_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v_buckets_x27_2123_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
else
{
lean_object* v___x_2137_; lean_object* v_buckets_x27_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2142_; 
lean_inc(v_bkt_2118_);
v___x_2137_ = lean_box(0);
v_buckets_x27_2138_ = lean_array_uset(v_buckets_2098_, v___x_2117_, v___x_2137_);
v___x_2139_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__26___redArg(v_a_2095_, v_b_2096_, v_bkt_2118_);
v___x_2140_ = lean_array_uset(v_buckets_x27_2138_, v___x_2117_, v___x_2139_);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 1, v___x_2140_);
v___x_2142_ = v___x_2100_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_size_2097_);
lean_ctor_set(v_reuseFailAlloc_2143_, 1, v___x_2140_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__0(lean_object* v_n_2145_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2146_, 0, v_n_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4(lean_object* v_width_2149_, lean_object* v_expr_2150_, lean_object* v_val_2151_, lean_object* v___x_2152_, lean_object* v___x_2153_, lean_object* v___x_2154_, lean_object* v___x_2155_, lean_object* v___x_2156_, lean_object* v_arg_2157_, lean_object* v_arg_2158_, lean_object* v___x_2159_, lean_object* v_arg_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v___x_2173_; 
v___x_2173_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_2149_, v_expr_2150_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v___x_2175_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2173_, 1);
v___x_2175_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_val_2151_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2200_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2200_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2200_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
if (lean_obj_tag(v_a_2176_) == 1)
{
lean_object* v_val_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2195_; 
v_val_2180_ = lean_ctor_get(v_a_2176_, 0);
v_isSharedCheck_2195_ = !lean_is_exclusive(v_a_2176_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2182_ = v_a_2176_;
v_isShared_2183_ = v_isSharedCheck_2195_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_val_2180_);
lean_dec(v_a_2176_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2195_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2190_; 
v___x_2184_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0));
v___x_2185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__1));
v___x_2186_ = l_Lean_Name_mkStr6(v___x_2152_, v___x_2153_, v___x_2154_, v___x_2184_, v___x_2155_, v___x_2185_);
v___x_2187_ = l_Lean_mkConst(v___x_2186_, v___x_2156_);
v___x_2188_ = l_Lean_mkApp6(v___x_2187_, v_arg_2157_, v_arg_2158_, v___x_2159_, v_arg_2160_, v_a_2174_, v_val_2180_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 0, v___x_2188_);
v___x_2190_ = v___x_2182_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v___x_2188_);
v___x_2190_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2192_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 0, v___x_2190_);
v___x_2192_ = v___x_2178_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v___x_2190_);
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
lean_object* v___x_2196_; lean_object* v___x_2198_; 
lean_dec(v_a_2176_);
lean_dec(v_a_2174_);
lean_dec_ref(v_arg_2160_);
lean_dec_ref(v___x_2159_);
lean_dec_ref(v_arg_2158_);
lean_dec_ref(v_arg_2157_);
lean_dec(v___x_2156_);
lean_dec_ref(v___x_2155_);
lean_dec_ref(v___x_2154_);
lean_dec_ref(v___x_2153_);
lean_dec_ref(v___x_2152_);
v___x_2196_ = lean_box(0);
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 0, v___x_2196_);
v___x_2198_ = v___x_2178_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v___x_2196_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
}
else
{
lean_dec(v_a_2174_);
lean_dec_ref(v_arg_2160_);
lean_dec_ref(v___x_2159_);
lean_dec_ref(v_arg_2158_);
lean_dec_ref(v_arg_2157_);
lean_dec(v___x_2156_);
lean_dec_ref(v___x_2155_);
lean_dec_ref(v___x_2154_);
lean_dec_ref(v___x_2153_);
lean_dec_ref(v___x_2152_);
return v___x_2175_;
}
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
lean_dec_ref(v_arg_2160_);
lean_dec_ref(v___x_2159_);
lean_dec_ref(v_arg_2158_);
lean_dec_ref(v_arg_2157_);
lean_dec(v___x_2156_);
lean_dec_ref(v___x_2155_);
lean_dec_ref(v___x_2154_);
lean_dec_ref(v___x_2153_);
lean_dec_ref(v___x_2152_);
lean_dec_ref(v_val_2151_);
v_a_2201_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2173_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2173_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_a_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___boxed(lean_object** _args){
lean_object* v_width_2209_ = _args[0];
lean_object* v_expr_2210_ = _args[1];
lean_object* v_val_2211_ = _args[2];
lean_object* v___x_2212_ = _args[3];
lean_object* v___x_2213_ = _args[4];
lean_object* v___x_2214_ = _args[5];
lean_object* v___x_2215_ = _args[6];
lean_object* v___x_2216_ = _args[7];
lean_object* v_arg_2217_ = _args[8];
lean_object* v_arg_2218_ = _args[9];
lean_object* v___x_2219_ = _args[10];
lean_object* v_arg_2220_ = _args[11];
lean_object* v___y_2221_ = _args[12];
lean_object* v___y_2222_ = _args[13];
lean_object* v___y_2223_ = _args[14];
lean_object* v___y_2224_ = _args[15];
lean_object* v___y_2225_ = _args[16];
lean_object* v___y_2226_ = _args[17];
lean_object* v___y_2227_ = _args[18];
lean_object* v___y_2228_ = _args[19];
lean_object* v___y_2229_ = _args[20];
lean_object* v___y_2230_ = _args[21];
lean_object* v___y_2231_ = _args[22];
lean_object* v___y_2232_ = _args[23];
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4(v_width_2209_, v_expr_2210_, v_val_2211_, v___x_2212_, v___x_2213_, v___x_2214_, v___x_2215_, v___x_2216_, v_arg_2217_, v_arg_2218_, v___x_2219_, v_arg_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
lean_dec(v___y_2229_);
lean_dec_ref(v___y_2228_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v___y_2223_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5(lean_object* v_width_2235_, lean_object* v_expr_2236_, lean_object* v_val_2237_, lean_object* v___x_2238_, lean_object* v___x_2239_, lean_object* v___x_2240_, lean_object* v___x_2241_, lean_object* v___x_2242_, lean_object* v___x_2243_, lean_object* v___x_2244_, lean_object* v_arg_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v___x_2258_; 
v___x_2258_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_2235_, v_expr_2236_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2260_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref_known(v___x_2258_, 1);
v___x_2260_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_val_2237_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
if (lean_obj_tag(v___x_2260_) == 0)
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2285_; 
v_a_2261_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2263_ = v___x_2260_;
v_isShared_2264_ = v_isSharedCheck_2285_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v___x_2260_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2285_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
if (lean_obj_tag(v_a_2261_) == 1)
{
lean_object* v_val_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2280_; 
v_val_2265_ = lean_ctor_get(v_a_2261_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v_a_2261_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2267_ = v_a_2261_;
v_isShared_2268_ = v_isSharedCheck_2280_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_val_2265_);
lean_dec(v_a_2261_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2280_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2275_; 
v___x_2269_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0));
v___x_2270_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5___closed__0));
v___x_2271_ = l_Lean_Name_mkStr6(v___x_2238_, v___x_2239_, v___x_2240_, v___x_2269_, v___x_2241_, v___x_2270_);
v___x_2272_ = l_Lean_mkConst(v___x_2271_, v___x_2242_);
v___x_2273_ = l_Lean_mkApp5(v___x_2272_, v___x_2243_, v___x_2244_, v_arg_2245_, v_a_2259_, v_val_2265_);
if (v_isShared_2268_ == 0)
{
lean_ctor_set(v___x_2267_, 0, v___x_2273_);
v___x_2275_ = v___x_2267_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v___x_2273_);
v___x_2275_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
lean_object* v___x_2277_; 
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 0, v___x_2275_);
v___x_2277_ = v___x_2263_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v___x_2275_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
}
else
{
lean_object* v___x_2281_; lean_object* v___x_2283_; 
lean_dec(v_a_2261_);
lean_dec(v_a_2259_);
lean_dec_ref(v_arg_2245_);
lean_dec_ref(v___x_2244_);
lean_dec_ref(v___x_2243_);
lean_dec(v___x_2242_);
lean_dec_ref(v___x_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2239_);
lean_dec_ref(v___x_2238_);
v___x_2281_ = lean_box(0);
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 0, v___x_2281_);
v___x_2283_ = v___x_2263_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v___x_2281_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
else
{
lean_dec(v_a_2259_);
lean_dec_ref(v_arg_2245_);
lean_dec_ref(v___x_2244_);
lean_dec_ref(v___x_2243_);
lean_dec(v___x_2242_);
lean_dec_ref(v___x_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2239_);
lean_dec_ref(v___x_2238_);
return v___x_2260_;
}
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec_ref(v_arg_2245_);
lean_dec_ref(v___x_2244_);
lean_dec_ref(v___x_2243_);
lean_dec(v___x_2242_);
lean_dec_ref(v___x_2241_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v___x_2239_);
lean_dec_ref(v___x_2238_);
lean_dec_ref(v_val_2237_);
v_a_2286_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2258_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2258_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5___boxed(lean_object** _args){
lean_object* v_width_2294_ = _args[0];
lean_object* v_expr_2295_ = _args[1];
lean_object* v_val_2296_ = _args[2];
lean_object* v___x_2297_ = _args[3];
lean_object* v___x_2298_ = _args[4];
lean_object* v___x_2299_ = _args[5];
lean_object* v___x_2300_ = _args[6];
lean_object* v___x_2301_ = _args[7];
lean_object* v___x_2302_ = _args[8];
lean_object* v___x_2303_ = _args[9];
lean_object* v_arg_2304_ = _args[10];
lean_object* v___y_2305_ = _args[11];
lean_object* v___y_2306_ = _args[12];
lean_object* v___y_2307_ = _args[13];
lean_object* v___y_2308_ = _args[14];
lean_object* v___y_2309_ = _args[15];
lean_object* v___y_2310_ = _args[16];
lean_object* v___y_2311_ = _args[17];
lean_object* v___y_2312_ = _args[18];
lean_object* v___y_2313_ = _args[19];
lean_object* v___y_2314_ = _args[20];
lean_object* v___y_2315_ = _args[21];
lean_object* v___y_2316_ = _args[22];
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5(v_width_2294_, v_expr_2295_, v_val_2296_, v___x_2297_, v___x_2298_, v___x_2299_, v___x_2300_, v___x_2301_, v___x_2302_, v___x_2303_, v_arg_2304_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec(v___y_2309_);
lean_dec_ref(v___y_2308_);
lean_dec(v___y_2307_);
lean_dec(v___y_2306_);
lean_dec_ref(v___y_2305_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___redArg(lean_object* v_msg_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v_ref_2324_; lean_object* v___x_2325_; lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2334_; 
v_ref_2324_ = lean_ctor_get(v___y_2321_, 2);
v___x_2325_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__5_spec__5(v_msg_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_);
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2328_ = v___x_2325_;
v_isShared_2329_ = v_isSharedCheck_2334_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2325_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2334_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2330_; lean_object* v___x_2332_; 
lean_inc(v_ref_2324_);
v___x_2330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2330_, 0, v_ref_2324_);
lean_ctor_set(v___x_2330_, 1, v_a_2326_);
if (v_isShared_2329_ == 0)
{
lean_ctor_set_tag(v___x_2328_, 1);
lean_ctor_set(v___x_2328_, 0, v___x_2330_);
v___x_2332_ = v___x_2328_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v___x_2330_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___redArg___boxed(lean_object* v_msg_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_){
_start:
{
lean_object* v_res_2341_; 
v_res_2341_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___redArg(v_msg_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v___y_2337_);
lean_dec_ref(v___y_2336_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifyM_simplifyBinaryProof_x27___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__14(lean_object* v___x_2342_, lean_object* v___x_2343_, lean_object* v_fst_2344_, lean_object* v_fproof_2345_, lean_object* v_snd_2346_, lean_object* v_sproof_2347_){
_start:
{
if (lean_obj_tag(v_fproof_2345_) == 0)
{
lean_dec_ref(v_snd_2346_);
lean_dec(v___x_2343_);
if (lean_obj_tag(v_sproof_2347_) == 0)
{
lean_object* v___x_2348_; 
lean_dec_ref(v_fst_2344_);
lean_dec(v___x_2342_);
v___x_2348_ = lean_box(0);
return v___x_2348_;
}
else
{
lean_object* v_val_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2358_; 
v_val_2349_ = lean_ctor_get(v_sproof_2347_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_sproof_2347_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2351_ = v_sproof_2347_;
v_isShared_2352_ = v_isSharedCheck_2358_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_val_2349_);
lean_dec(v_sproof_2347_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2358_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2356_; 
v___x_2353_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(v___x_2342_, v_fst_2344_);
v___x_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2353_);
lean_ctor_set(v___x_2354_, 1, v_val_2349_);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v___x_2354_);
v___x_2356_ = v___x_2351_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v___x_2354_);
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
lean_dec_ref(v_fst_2344_);
lean_dec(v___x_2342_);
if (lean_obj_tag(v_sproof_2347_) == 0)
{
lean_object* v_val_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2368_; 
v_val_2359_ = lean_ctor_get(v_fproof_2345_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v_fproof_2345_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2361_ = v_fproof_2345_;
v_isShared_2362_ = v_isSharedCheck_2368_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_val_2359_);
lean_dec(v_fproof_2345_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2368_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2366_; 
v___x_2363_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(v___x_2343_, v_snd_2346_);
v___x_2364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2364_, 0, v_val_2359_);
lean_ctor_set(v___x_2364_, 1, v___x_2363_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 0, v___x_2364_);
v___x_2366_ = v___x_2361_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v___x_2364_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
else
{
lean_object* v_val_2369_; lean_object* v_val_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2378_; 
lean_dec_ref(v_snd_2346_);
lean_dec(v___x_2343_);
v_val_2369_ = lean_ctor_get(v_fproof_2345_, 0);
lean_inc(v_val_2369_);
lean_dec_ref_known(v_fproof_2345_, 1);
v_val_2370_ = lean_ctor_get(v_sproof_2347_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v_sproof_2347_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2372_ = v_sproof_2347_;
v_isShared_2373_ = v_isSharedCheck_2378_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_val_2370_);
lean_dec(v_sproof_2347_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2378_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2374_; lean_object* v___x_2376_; 
v___x_2374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2374_, 0, v_val_2369_);
lean_ctor_set(v___x_2374_, 1, v_val_2370_);
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 0, v___x_2374_);
v___x_2376_ = v___x_2372_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v___x_2374_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3(lean_object* v_width_2380_, lean_object* v_expr_2381_, lean_object* v_width_2382_, lean_object* v_expr_2383_, lean_object* v_val_2384_, lean_object* v_val_2385_, lean_object* v___x_2386_, lean_object* v___x_2387_, lean_object* v___x_2388_, lean_object* v___x_2389_, lean_object* v___x_2390_, lean_object* v___x_2391_, lean_object* v___x_2392_, lean_object* v_arg_2393_, lean_object* v_arg_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
lean_object* v___x_2407_; 
lean_inc(v_width_2380_);
v___x_2407_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_2380_, v_expr_2381_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2409_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
lean_inc(v_width_2382_);
v___x_2409_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_2382_, v_expr_2383_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_);
if (lean_obj_tag(v___x_2409_) == 0)
{
lean_object* v_a_2410_; lean_object* v___x_2411_; 
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
lean_inc(v_a_2410_);
lean_dec_ref_known(v___x_2409_, 1);
v___x_2411_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_val_2384_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2413_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2411_, 1);
v___x_2413_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_val_2385_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2441_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2416_ = v___x_2413_;
v_isShared_2417_ = v_isSharedCheck_2441_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2413_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2441_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2418_; 
lean_inc(v_a_2410_);
lean_inc(v_a_2408_);
v___x_2418_ = l_Lean_Meta_Tactic_BVDecide_ReifyM_simplifyBinaryProof_x27___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__14(v_width_2380_, v_width_2382_, v_a_2408_, v_a_2412_, v_a_2410_, v_a_2414_);
if (lean_obj_tag(v___x_2418_) == 1)
{
lean_object* v_val_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2436_; 
v_val_2419_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2421_ = v___x_2418_;
v_isShared_2422_ = v_isSharedCheck_2436_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_val_2419_);
lean_dec(v___x_2418_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2436_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v_fst_2423_; lean_object* v_snd_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2431_; 
v_fst_2423_ = lean_ctor_get(v_val_2419_, 0);
lean_inc(v_fst_2423_);
v_snd_2424_ = lean_ctor_get(v_val_2419_, 1);
lean_inc(v_snd_2424_);
lean_dec(v_val_2419_);
v___x_2425_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0));
v___x_2426_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3___closed__0));
v___x_2427_ = l_Lean_Name_mkStr6(v___x_2386_, v___x_2387_, v___x_2388_, v___x_2425_, v___x_2389_, v___x_2426_);
v___x_2428_ = l_Lean_mkConst(v___x_2427_, v___x_2390_);
v___x_2429_ = l_Lean_mkApp8(v___x_2428_, v___x_2391_, v___x_2392_, v_arg_2393_, v_a_2408_, v_arg_2394_, v_a_2410_, v_fst_2423_, v_snd_2424_);
if (v_isShared_2422_ == 0)
{
lean_ctor_set(v___x_2421_, 0, v___x_2429_);
v___x_2431_ = v___x_2421_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2429_);
v___x_2431_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
lean_object* v___x_2433_; 
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 0, v___x_2431_);
v___x_2433_ = v___x_2416_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v___x_2431_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
}
}
else
{
lean_object* v___x_2437_; lean_object* v___x_2439_; 
lean_dec(v___x_2418_);
lean_dec(v_a_2410_);
lean_dec(v_a_2408_);
lean_dec_ref(v_arg_2394_);
lean_dec_ref(v_arg_2393_);
lean_dec_ref(v___x_2392_);
lean_dec_ref(v___x_2391_);
lean_dec(v___x_2390_);
lean_dec_ref(v___x_2389_);
lean_dec_ref(v___x_2388_);
lean_dec_ref(v___x_2387_);
lean_dec_ref(v___x_2386_);
v___x_2437_ = lean_box(0);
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 0, v___x_2437_);
v___x_2439_ = v___x_2416_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v___x_2437_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
else
{
lean_dec(v_a_2412_);
lean_dec(v_a_2410_);
lean_dec(v_a_2408_);
lean_dec_ref(v_arg_2394_);
lean_dec_ref(v_arg_2393_);
lean_dec_ref(v___x_2392_);
lean_dec_ref(v___x_2391_);
lean_dec(v___x_2390_);
lean_dec_ref(v___x_2389_);
lean_dec_ref(v___x_2388_);
lean_dec_ref(v___x_2387_);
lean_dec_ref(v___x_2386_);
lean_dec(v_width_2382_);
lean_dec(v_width_2380_);
return v___x_2413_;
}
}
else
{
lean_dec(v_a_2410_);
lean_dec(v_a_2408_);
lean_dec_ref(v_arg_2394_);
lean_dec_ref(v_arg_2393_);
lean_dec_ref(v___x_2392_);
lean_dec_ref(v___x_2391_);
lean_dec(v___x_2390_);
lean_dec_ref(v___x_2389_);
lean_dec_ref(v___x_2388_);
lean_dec_ref(v___x_2387_);
lean_dec_ref(v___x_2386_);
lean_dec_ref(v_val_2385_);
lean_dec(v_width_2382_);
lean_dec(v_width_2380_);
return v___x_2411_;
}
}
else
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
lean_dec(v_a_2408_);
lean_dec_ref(v_arg_2394_);
lean_dec_ref(v_arg_2393_);
lean_dec_ref(v___x_2392_);
lean_dec_ref(v___x_2391_);
lean_dec(v___x_2390_);
lean_dec_ref(v___x_2389_);
lean_dec_ref(v___x_2388_);
lean_dec_ref(v___x_2387_);
lean_dec_ref(v___x_2386_);
lean_dec_ref(v_val_2385_);
lean_dec_ref(v_val_2384_);
lean_dec(v_width_2382_);
lean_dec(v_width_2380_);
v_a_2442_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2444_ = v___x_2409_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2409_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
v___x_2447_ = v___x_2444_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_a_2442_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
}
else
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2457_; 
lean_dec_ref(v_arg_2394_);
lean_dec_ref(v_arg_2393_);
lean_dec_ref(v___x_2392_);
lean_dec_ref(v___x_2391_);
lean_dec(v___x_2390_);
lean_dec_ref(v___x_2389_);
lean_dec_ref(v___x_2388_);
lean_dec_ref(v___x_2387_);
lean_dec_ref(v___x_2386_);
lean_dec_ref(v_val_2385_);
lean_dec_ref(v_val_2384_);
lean_dec_ref(v_expr_2383_);
lean_dec(v_width_2382_);
lean_dec(v_width_2380_);
v_a_2450_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2452_ = v___x_2407_;
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2407_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3___boxed(lean_object** _args){
lean_object* v_width_2458_ = _args[0];
lean_object* v_expr_2459_ = _args[1];
lean_object* v_width_2460_ = _args[2];
lean_object* v_expr_2461_ = _args[3];
lean_object* v_val_2462_ = _args[4];
lean_object* v_val_2463_ = _args[5];
lean_object* v___x_2464_ = _args[6];
lean_object* v___x_2465_ = _args[7];
lean_object* v___x_2466_ = _args[8];
lean_object* v___x_2467_ = _args[9];
lean_object* v___x_2468_ = _args[10];
lean_object* v___x_2469_ = _args[11];
lean_object* v___x_2470_ = _args[12];
lean_object* v_arg_2471_ = _args[13];
lean_object* v_arg_2472_ = _args[14];
lean_object* v___y_2473_ = _args[15];
lean_object* v___y_2474_ = _args[16];
lean_object* v___y_2475_ = _args[17];
lean_object* v___y_2476_ = _args[18];
lean_object* v___y_2477_ = _args[19];
lean_object* v___y_2478_ = _args[20];
lean_object* v___y_2479_ = _args[21];
lean_object* v___y_2480_ = _args[22];
lean_object* v___y_2481_ = _args[23];
lean_object* v___y_2482_ = _args[24];
lean_object* v___y_2483_ = _args[25];
lean_object* v___y_2484_ = _args[26];
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3(v_width_2458_, v_expr_2459_, v_width_2460_, v_expr_2461_, v_val_2462_, v_val_2463_, v___x_2464_, v___x_2465_, v___x_2466_, v___x_2467_, v___x_2468_, v___x_2469_, v___x_2470_, v_arg_2471_, v_arg_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec(v___y_2474_);
lean_dec_ref(v___y_2473_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__1(lean_object* v_n_2486_){
_start:
{
lean_object* v___x_2487_; 
v___x_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2487_, 0, v_n_2486_);
return v___x_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__2(lean_object* v_n_2488_){
_start:
{
lean_object* v___x_2489_; 
v___x_2489_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_n_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22___redArg(lean_object* v_a_2490_, lean_object* v_x_2491_){
_start:
{
if (lean_obj_tag(v_x_2491_) == 0)
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_box(0);
return v___x_2492_;
}
else
{
lean_object* v_key_2493_; lean_object* v_value_2494_; lean_object* v_tail_2495_; size_t v___x_2496_; size_t v___x_2497_; uint8_t v___x_2498_; 
v_key_2493_ = lean_ctor_get(v_x_2491_, 0);
v_value_2494_ = lean_ctor_get(v_x_2491_, 1);
v_tail_2495_ = lean_ctor_get(v_x_2491_, 2);
v___x_2496_ = lean_ptr_addr(v_key_2493_);
v___x_2497_ = lean_ptr_addr(v_a_2490_);
v___x_2498_ = lean_usize_dec_eq(v___x_2496_, v___x_2497_);
if (v___x_2498_ == 0)
{
v_x_2491_ = v_tail_2495_;
goto _start;
}
else
{
lean_object* v___x_2500_; 
lean_inc(v_value_2494_);
v___x_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2500_, 0, v_value_2494_);
return v___x_2500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22___redArg___boxed(lean_object* v_a_2501_, lean_object* v_x_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22___redArg(v_a_2501_, v_x_2502_);
lean_dec(v_x_2502_);
lean_dec_ref(v_a_2501_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___redArg(lean_object* v_m_2504_, lean_object* v_a_2505_){
_start:
{
lean_object* v_buckets_2506_; lean_object* v___x_2507_; size_t v___x_2508_; size_t v___x_2509_; size_t v___x_2510_; uint64_t v___x_2511_; uint64_t v___x_2512_; uint64_t v___x_2513_; uint64_t v_fold_2514_; uint64_t v___x_2515_; uint64_t v___x_2516_; uint64_t v___x_2517_; size_t v___x_2518_; size_t v___x_2519_; size_t v___x_2520_; size_t v___x_2521_; size_t v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v_buckets_2506_ = lean_ctor_get(v_m_2504_, 1);
v___x_2507_ = lean_array_get_size(v_buckets_2506_);
v___x_2508_ = lean_ptr_addr(v_a_2505_);
v___x_2509_ = ((size_t)3ULL);
v___x_2510_ = lean_usize_shift_right(v___x_2508_, v___x_2509_);
v___x_2511_ = lean_usize_to_uint64(v___x_2510_);
v___x_2512_ = 32ULL;
v___x_2513_ = lean_uint64_shift_right(v___x_2511_, v___x_2512_);
v_fold_2514_ = lean_uint64_xor(v___x_2511_, v___x_2513_);
v___x_2515_ = 16ULL;
v___x_2516_ = lean_uint64_shift_right(v_fold_2514_, v___x_2515_);
v___x_2517_ = lean_uint64_xor(v_fold_2514_, v___x_2516_);
v___x_2518_ = lean_uint64_to_usize(v___x_2517_);
v___x_2519_ = lean_usize_of_nat(v___x_2507_);
v___x_2520_ = ((size_t)1ULL);
v___x_2521_ = lean_usize_sub(v___x_2519_, v___x_2520_);
v___x_2522_ = lean_usize_land(v___x_2518_, v___x_2521_);
v___x_2523_ = lean_array_uget_borrowed(v_buckets_2506_, v___x_2522_);
v___x_2524_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22___redArg(v_a_2505_, v___x_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___redArg___boxed(lean_object* v_m_2525_, lean_object* v_a_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___redArg(v_m_2525_, v_a_2526_);
lean_dec_ref(v_a_2526_);
lean_dec_ref(v_m_2525_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___lam__0(lean_object* v___x_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v___x_2541_; 
v___x_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2528_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___lam__0___boxed(lean_object* v___x_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___lam__0(v___x_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0(lean_object* v_width_2557_, lean_object* v_expr_2558_, lean_object* v_a_2559_, lean_object* v___x_2560_, lean_object* v___x_2561_, lean_object* v___x_2562_, lean_object* v___x_2563_, lean_object* v_e_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v___x_2577_; 
lean_inc(v_width_2557_);
v___x_2577_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkEvalExpr(v_width_2557_, v_expr_2558_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; lean_object* v___x_2579_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2578_);
lean_dec_ref_known(v___x_2577_, 1);
v___x_2579_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_evalsAtAtoms(v_a_2559_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2598_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2582_ = v___x_2579_;
v_isShared_2583_ = v_isSharedCheck_2598_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2579_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2598_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___y_2585_; 
if (lean_obj_tag(v_a_2580_) == 0)
{
lean_object* v___x_2596_; 
lean_inc(v_a_2578_);
v___x_2596_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVRefl(v_width_2557_, v_a_2578_);
v___y_2585_ = v___x_2596_;
goto v___jp_2584_;
}
else
{
lean_object* v_val_2597_; 
lean_dec(v_width_2557_);
v_val_2597_ = lean_ctor_get(v_a_2580_, 0);
lean_inc(v_val_2597_);
lean_dec_ref_known(v_a_2580_, 1);
v___y_2585_ = v_val_2597_;
goto v___jp_2584_;
}
v___jp_2584_:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2594_; 
v___x_2586_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___closed__0));
v___x_2587_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0));
v___x_2588_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___closed__0));
v___x_2589_ = l_Lean_Name_mkStr6(v___x_2560_, v___x_2561_, v___x_2562_, v___x_2586_, v___x_2587_, v___x_2588_);
v___x_2590_ = l_Lean_mkConst(v___x_2589_, v___x_2563_);
v___x_2591_ = l_Lean_mkApp3(v___x_2590_, v_e_2564_, v_a_2578_, v___y_2585_);
v___x_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v___x_2592_);
v___x_2594_ = v___x_2582_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v___x_2592_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
}
else
{
lean_dec(v_a_2578_);
lean_dec_ref(v_e_2564_);
lean_dec(v___x_2563_);
lean_dec_ref(v___x_2562_);
lean_dec_ref(v___x_2561_);
lean_dec_ref(v___x_2560_);
lean_dec(v_width_2557_);
return v___x_2579_;
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_dec_ref(v_e_2564_);
lean_dec(v___x_2563_);
lean_dec_ref(v___x_2562_);
lean_dec_ref(v___x_2561_);
lean_dec_ref(v___x_2560_);
lean_dec_ref(v_a_2559_);
lean_dec(v_width_2557_);
v_a_2599_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2577_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2577_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2599_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___boxed(lean_object** _args){
lean_object* v_width_2607_ = _args[0];
lean_object* v_expr_2608_ = _args[1];
lean_object* v_a_2609_ = _args[2];
lean_object* v___x_2610_ = _args[3];
lean_object* v___x_2611_ = _args[4];
lean_object* v___x_2612_ = _args[5];
lean_object* v___x_2613_ = _args[6];
lean_object* v_e_2614_ = _args[7];
lean_object* v___y_2615_ = _args[8];
lean_object* v___y_2616_ = _args[9];
lean_object* v___y_2617_ = _args[10];
lean_object* v___y_2618_ = _args[11];
lean_object* v___y_2619_ = _args[12];
lean_object* v___y_2620_ = _args[13];
lean_object* v___y_2621_ = _args[14];
lean_object* v___y_2622_ = _args[15];
lean_object* v___y_2623_ = _args[16];
lean_object* v___y_2624_ = _args[17];
lean_object* v___y_2625_ = _args[18];
lean_object* v___y_2626_ = _args[19];
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0(v_width_2607_, v_expr_2608_, v_a_2609_, v___x_2610_, v___x_2611_, v___x_2612_, v___x_2613_, v_e_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
lean_dec(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec_ref(v___y_2615_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftReflection(lean_object* v_distanceExpr_2706_, lean_object* v_innerExpr_2707_, lean_object* v_shiftOp_2708_, lean_object* v_shiftOpName_2709_, lean_object* v_congrThm_2710_, lean_object* v_origExpr_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_){
_start:
{
lean_object* v___x_2725_; 
lean_inc_ref(v_innerExpr_2707_);
v___x_2725_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_innerExpr_2707_, v_a_2712_, v_a_2713_, v_a_2714_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_, v_a_2723_);
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2786_; 
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2728_ = v___x_2725_;
v_isShared_2729_ = v_isSharedCheck_2786_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2725_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2786_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
if (lean_obj_tag(v_a_2726_) == 1)
{
lean_object* v_val_2730_; lean_object* v___x_2731_; 
lean_del_object(v___x_2728_);
v_val_2730_ = lean_ctor_get(v_a_2726_, 0);
lean_inc(v_val_2730_);
lean_dec_ref_known(v_a_2726_, 1);
lean_inc_ref(v_distanceExpr_2706_);
v___x_2731_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_distanceExpr_2706_, v_a_2712_, v_a_2713_, v_a_2714_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_, v_a_2723_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2781_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2781_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2781_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
if (lean_obj_tag(v_a_2732_) == 1)
{
lean_object* v_val_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2776_; 
lean_del_object(v___x_2734_);
v_val_2736_ = lean_ctor_get(v_a_2732_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v_a_2732_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2738_ = v_a_2732_;
v_isShared_2739_ = v_isSharedCheck_2776_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_val_2736_);
lean_dec(v_a_2732_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2776_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v_width_2740_; lean_object* v_bvExpr_2741_; lean_object* v_expr_2742_; lean_object* v_width_2743_; lean_object* v_bvExpr_2744_; lean_object* v_expr_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v_width_2740_ = lean_ctor_get(v_val_2730_, 0);
lean_inc_n(v_width_2740_, 3);
v_bvExpr_2741_ = lean_ctor_get(v_val_2730_, 1);
v_expr_2742_ = lean_ctor_get(v_val_2730_, 4);
v_width_2743_ = lean_ctor_get(v_val_2736_, 0);
v_bvExpr_2744_ = lean_ctor_get(v_val_2736_, 1);
v_expr_2745_ = lean_ctor_get(v_val_2736_, 4);
lean_inc_ref(v_bvExpr_2744_);
lean_inc_ref(v_bvExpr_2741_);
lean_inc_n(v_width_2743_, 2);
v___x_2746_ = lean_apply_4(v_shiftOp_2708_, v_width_2740_, v_width_2743_, v_bvExpr_2741_, v_bvExpr_2744_);
v___x_2747_ = lean_box(0);
v___x_2748_ = l_Lean_mkConst(v_shiftOpName_2709_, v___x_2747_);
v___x_2749_ = l_Lean_mkNatLit(v_width_2740_);
v___x_2750_ = l_Lean_mkNatLit(v_width_2743_);
lean_inc_ref(v_expr_2745_);
lean_inc_ref(v_expr_2742_);
lean_inc_ref(v___x_2750_);
lean_inc_ref(v___x_2749_);
v___x_2751_ = l_Lean_mkApp4(v___x_2748_, v___x_2749_, v___x_2750_, v_expr_2742_, v_expr_2745_);
v___x_2752_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2751_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_, v_a_2723_);
if (lean_obj_tag(v___x_2752_) == 0)
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2767_; 
v_a_2753_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2767_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2755_ = v___x_2752_;
v_isShared_2756_ = v_isSharedCheck_2767_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___x_2752_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2767_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2762_; 
v___x_2757_ = l_Lean_mkConst(v_congrThm_2710_, v___x_2747_);
v___x_2758_ = l_Lean_mkAppB(v___x_2757_, v___x_2749_, v___x_2750_);
v___x_2759_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof___boxed), 17, 5);
lean_closure_set(v___x_2759_, 0, v_val_2730_);
lean_closure_set(v___x_2759_, 1, v_val_2736_);
lean_closure_set(v___x_2759_, 2, v_innerExpr_2707_);
lean_closure_set(v___x_2759_, 3, v_distanceExpr_2706_);
lean_closure_set(v___x_2759_, 4, v___x_2758_);
v___x_2760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2760_, 0, v_width_2740_);
lean_ctor_set(v___x_2760_, 1, v___x_2746_);
lean_ctor_set(v___x_2760_, 2, v_origExpr_2711_);
lean_ctor_set(v___x_2760_, 3, v___x_2759_);
lean_ctor_set(v___x_2760_, 4, v_a_2753_);
if (v_isShared_2739_ == 0)
{
lean_ctor_set(v___x_2738_, 0, v___x_2760_);
v___x_2762_ = v___x_2738_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v___x_2760_);
v___x_2762_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
lean_object* v___x_2764_; 
if (v_isShared_2756_ == 0)
{
lean_ctor_set(v___x_2755_, 0, v___x_2762_);
v___x_2764_ = v___x_2755_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v___x_2762_);
v___x_2764_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
return v___x_2764_;
}
}
}
}
else
{
lean_object* v_a_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2775_; 
lean_dec_ref(v___x_2750_);
lean_dec_ref(v___x_2749_);
lean_dec_ref(v___x_2746_);
lean_dec(v_width_2740_);
lean_del_object(v___x_2738_);
lean_dec(v_val_2736_);
lean_dec(v_val_2730_);
lean_dec_ref(v_origExpr_2711_);
lean_dec(v_congrThm_2710_);
lean_dec_ref(v_innerExpr_2707_);
lean_dec_ref(v_distanceExpr_2706_);
v_a_2768_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2775_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2775_ == 0)
{
v___x_2770_ = v___x_2752_;
v_isShared_2771_ = v_isSharedCheck_2775_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_a_2768_);
lean_dec(v___x_2752_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2775_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2773_; 
if (v_isShared_2771_ == 0)
{
v___x_2773_ = v___x_2770_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v_a_2768_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
return v___x_2773_;
}
}
}
}
}
else
{
lean_object* v___x_2777_; lean_object* v___x_2779_; 
lean_dec(v_a_2732_);
lean_dec(v_val_2730_);
lean_dec_ref(v_origExpr_2711_);
lean_dec(v_congrThm_2710_);
lean_dec(v_shiftOpName_2709_);
lean_dec_ref(v_shiftOp_2708_);
lean_dec_ref(v_innerExpr_2707_);
lean_dec_ref(v_distanceExpr_2706_);
v___x_2777_ = lean_box(0);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v___x_2777_);
v___x_2779_ = v___x_2734_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2777_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
else
{
lean_dec(v_val_2730_);
lean_dec_ref(v_origExpr_2711_);
lean_dec(v_congrThm_2710_);
lean_dec(v_shiftOpName_2709_);
lean_dec_ref(v_shiftOp_2708_);
lean_dec_ref(v_innerExpr_2707_);
lean_dec_ref(v_distanceExpr_2706_);
return v___x_2731_;
}
}
else
{
lean_object* v___x_2782_; lean_object* v___x_2784_; 
lean_dec(v_a_2726_);
lean_dec_ref(v_origExpr_2711_);
lean_dec(v_congrThm_2710_);
lean_dec(v_shiftOpName_2709_);
lean_dec_ref(v_shiftOp_2708_);
lean_dec_ref(v_innerExpr_2707_);
lean_dec_ref(v_distanceExpr_2706_);
v___x_2782_ = lean_box(0);
if (v_isShared_2729_ == 0)
{
lean_ctor_set(v___x_2728_, 0, v___x_2782_);
v___x_2784_ = v___x_2728_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v___x_2782_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
}
else
{
lean_dec_ref(v_origExpr_2711_);
lean_dec(v_congrThm_2710_);
lean_dec(v_shiftOpName_2709_);
lean_dec_ref(v_shiftOp_2708_);
lean_dec_ref(v_innerExpr_2707_);
lean_dec_ref(v_distanceExpr_2706_);
return v___x_2725_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__2(void){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2857_ = lean_box(0);
v___x_2858_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__1));
v___x_2859_ = l_Lean_mkConst(v___x_2858_, v___x_2857_);
return v___x_2859_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__6(void){
_start:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2868_ = lean_box(0);
v___x_2869_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__5));
v___x_2870_ = l_Lean_mkConst(v___x_2869_, v___x_2868_);
return v___x_2870_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__9(void){
_start:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2878_ = lean_box(0);
v___x_2879_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__8));
v___x_2880_ = l_Lean_mkConst(v___x_2879_, v___x_2878_);
return v___x_2880_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__12(void){
_start:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
v___x_2888_ = lean_box(0);
v___x_2889_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__11));
v___x_2890_ = l_Lean_mkConst(v___x_2889_, v___x_2888_);
return v___x_2890_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__15(void){
_start:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2898_ = lean_box(0);
v___x_2899_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__14));
v___x_2900_ = l_Lean_mkConst(v___x_2899_, v___x_2898_);
return v___x_2900_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__18(void){
_start:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2908_ = lean_box(0);
v___x_2909_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__17));
v___x_2910_ = l_Lean_mkConst(v___x_2909_, v___x_2908_);
return v___x_2910_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__21(void){
_start:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2918_ = lean_box(0);
v___x_2919_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__20));
v___x_2920_ = l_Lean_mkConst(v___x_2919_, v___x_2918_);
return v___x_2920_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__24(void){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; 
v___x_2928_ = lean_box(0);
v___x_2929_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__23));
v___x_2930_ = l_Lean_mkConst(v___x_2929_, v___x_2928_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection(lean_object* v_lhsExpr_2931_, lean_object* v_rhsExpr_2932_, uint8_t v_op_2933_, lean_object* v_congrThm_2934_, lean_object* v_origExpr_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_, lean_object* v_a_2940_, lean_object* v_a_2941_, lean_object* v_a_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_, lean_object* v_a_2947_){
_start:
{
lean_object* v___x_2949_; 
lean_inc_ref(v_lhsExpr_2931_);
v___x_2949_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_lhsExpr_2931_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_, v_a_2941_, v_a_2942_, v_a_2943_, v_a_2944_, v_a_2945_, v_a_2946_, v_a_2947_);
if (lean_obj_tag(v___x_2949_) == 0)
{
lean_object* v_a_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_3023_; 
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_2952_ = v___x_2949_;
v_isShared_2953_ = v_isSharedCheck_3023_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_a_2950_);
lean_dec(v___x_2949_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_3023_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
if (lean_obj_tag(v_a_2950_) == 1)
{
lean_object* v_val_2954_; lean_object* v___x_2955_; 
lean_del_object(v___x_2952_);
v_val_2954_ = lean_ctor_get(v_a_2950_, 0);
lean_inc(v_val_2954_);
lean_dec_ref_known(v_a_2950_, 1);
lean_inc_ref(v_rhsExpr_2932_);
v___x_2955_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_rhsExpr_2932_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_, v_a_2941_, v_a_2942_, v_a_2943_, v_a_2944_, v_a_2945_, v_a_2946_, v_a_2947_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_3018_; 
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_2958_ = v___x_2955_;
v_isShared_2959_ = v_isSharedCheck_3018_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_dec(v___x_2955_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_3018_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
if (lean_obj_tag(v_a_2956_) == 1)
{
lean_object* v_val_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_3013_; 
v_val_2960_ = lean_ctor_get(v_a_2956_, 0);
v_isSharedCheck_3013_ = !lean_is_exclusive(v_a_2956_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_2962_ = v_a_2956_;
v_isShared_2963_ = v_isSharedCheck_3013_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_val_2960_);
lean_dec(v_a_2956_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_3013_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v_width_2964_; lean_object* v_bvExpr_2965_; lean_object* v_expr_2966_; lean_object* v_width_2967_; lean_object* v_bvExpr_2968_; lean_object* v_expr_2969_; uint8_t v___x_2970_; 
v_width_2964_ = lean_ctor_get(v_val_2960_, 0);
v_bvExpr_2965_ = lean_ctor_get(v_val_2960_, 1);
v_expr_2966_ = lean_ctor_get(v_val_2960_, 4);
v_width_2967_ = lean_ctor_get(v_val_2954_, 0);
lean_inc(v_width_2967_);
v_bvExpr_2968_ = lean_ctor_get(v_val_2954_, 1);
v_expr_2969_ = lean_ctor_get(v_val_2954_, 4);
v___x_2970_ = lean_nat_dec_eq(v_width_2964_, v_width_2967_);
if (v___x_2970_ == 0)
{
lean_object* v___x_2971_; lean_object* v___x_2973_; 
lean_dec(v_width_2967_);
lean_del_object(v___x_2962_);
lean_dec(v_val_2960_);
lean_dec(v_val_2954_);
lean_dec_ref(v_origExpr_2935_);
lean_dec(v_congrThm_2934_);
lean_dec_ref(v_rhsExpr_2932_);
lean_dec_ref(v_lhsExpr_2931_);
v___x_2971_ = lean_box(0);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 0, v___x_2971_);
v___x_2973_ = v___x_2958_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v___x_2971_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
else
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___y_2980_; 
lean_del_object(v___x_2958_);
lean_inc_ref(v_bvExpr_2965_);
lean_inc_ref(v_bvExpr_2968_);
lean_inc_n(v_width_2967_, 2);
v___x_2975_ = l_Std_Tactic_BVDecide_BVExpr_bin___override(v_width_2967_, v_bvExpr_2968_, v_op_2933_, v_bvExpr_2965_);
v___x_2976_ = lean_box(0);
v___x_2977_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__2);
v___x_2978_ = l_Lean_mkNatLit(v_width_2967_);
switch(v_op_2933_)
{
case 0:
{
lean_object* v___x_3006_; 
v___x_3006_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__6);
v___y_2980_ = v___x_3006_;
goto v___jp_2979_;
}
case 1:
{
lean_object* v___x_3007_; 
v___x_3007_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__9, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__9_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__9);
v___y_2980_ = v___x_3007_;
goto v___jp_2979_;
}
case 2:
{
lean_object* v___x_3008_; 
v___x_3008_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__12);
v___y_2980_ = v___x_3008_;
goto v___jp_2979_;
}
case 3:
{
lean_object* v___x_3009_; 
v___x_3009_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__15, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__15_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__15);
v___y_2980_ = v___x_3009_;
goto v___jp_2979_;
}
case 4:
{
lean_object* v___x_3010_; 
v___x_3010_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__18, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__18_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__18);
v___y_2980_ = v___x_3010_;
goto v___jp_2979_;
}
case 5:
{
lean_object* v___x_3011_; 
v___x_3011_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__21, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__21_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__21);
v___y_2980_ = v___x_3011_;
goto v___jp_2979_;
}
default: 
{
lean_object* v___x_3012_; 
v___x_3012_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___closed__24);
v___y_2980_ = v___x_3012_;
goto v___jp_2979_;
}
}
v___jp_2979_:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
lean_inc_ref(v_expr_2966_);
lean_inc_ref(v___y_2980_);
lean_inc_ref(v_expr_2969_);
lean_inc_ref(v___x_2978_);
v___x_2981_ = l_Lean_mkApp4(v___x_2977_, v___x_2978_, v_expr_2969_, v___y_2980_, v_expr_2966_);
v___x_2982_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2981_, v_a_2942_, v_a_2943_, v_a_2944_, v_a_2945_, v_a_2946_, v_a_2947_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2997_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2985_ = v___x_2982_;
v_isShared_2986_ = v_isSharedCheck_2997_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2982_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2997_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2992_; 
v___x_2987_ = l_Lean_mkConst(v_congrThm_2934_, v___x_2976_);
v___x_2988_ = l_Lean_Expr_app___override(v___x_2987_, v___x_2978_);
v___x_2989_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryCongrProof___boxed), 17, 5);
lean_closure_set(v___x_2989_, 0, v_val_2954_);
lean_closure_set(v___x_2989_, 1, v_val_2960_);
lean_closure_set(v___x_2989_, 2, v_lhsExpr_2931_);
lean_closure_set(v___x_2989_, 3, v_rhsExpr_2932_);
lean_closure_set(v___x_2989_, 4, v___x_2988_);
v___x_2990_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2990_, 0, v_width_2967_);
lean_ctor_set(v___x_2990_, 1, v___x_2975_);
lean_ctor_set(v___x_2990_, 2, v_origExpr_2935_);
lean_ctor_set(v___x_2990_, 3, v___x_2989_);
lean_ctor_set(v___x_2990_, 4, v_a_2983_);
if (v_isShared_2963_ == 0)
{
lean_ctor_set(v___x_2962_, 0, v___x_2990_);
v___x_2992_ = v___x_2962_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2990_);
v___x_2992_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
lean_object* v___x_2994_; 
if (v_isShared_2986_ == 0)
{
lean_ctor_set(v___x_2985_, 0, v___x_2992_);
v___x_2994_ = v___x_2985_;
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
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3005_; 
lean_dec_ref(v___x_2978_);
lean_dec_ref(v___x_2975_);
lean_dec(v_width_2967_);
lean_del_object(v___x_2962_);
lean_dec(v_val_2960_);
lean_dec(v_val_2954_);
lean_dec_ref(v_origExpr_2935_);
lean_dec(v_congrThm_2934_);
lean_dec_ref(v_rhsExpr_2932_);
lean_dec_ref(v_lhsExpr_2931_);
v_a_2998_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_3000_ = v___x_2982_;
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v___x_2982_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3003_; 
if (v_isShared_3001_ == 0)
{
v___x_3003_ = v___x_3000_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v_a_2998_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3014_; lean_object* v___x_3016_; 
lean_dec(v_a_2956_);
lean_dec(v_val_2954_);
lean_dec_ref(v_origExpr_2935_);
lean_dec(v_congrThm_2934_);
lean_dec_ref(v_rhsExpr_2932_);
lean_dec_ref(v_lhsExpr_2931_);
v___x_3014_ = lean_box(0);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 0, v___x_3014_);
v___x_3016_ = v___x_2958_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v___x_3014_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
}
else
{
lean_dec(v_val_2954_);
lean_dec_ref(v_origExpr_2935_);
lean_dec(v_congrThm_2934_);
lean_dec_ref(v_rhsExpr_2932_);
lean_dec_ref(v_lhsExpr_2931_);
return v___x_2955_;
}
}
else
{
lean_object* v___x_3019_; lean_object* v___x_3021_; 
lean_dec(v_a_2950_);
lean_dec_ref(v_origExpr_2935_);
lean_dec(v_congrThm_2934_);
lean_dec_ref(v_rhsExpr_2932_);
lean_dec_ref(v_lhsExpr_2931_);
v___x_3019_ = lean_box(0);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v___x_3019_);
v___x_3021_ = v___x_2952_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v___x_3019_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
}
else
{
lean_dec_ref(v_origExpr_2935_);
lean_dec(v_congrThm_2934_);
lean_dec_ref(v_rhsExpr_2932_);
lean_dec_ref(v_lhsExpr_2931_);
return v___x_2949_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__72(void){
_start:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3065_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__71));
v___x_3066_ = l_Lean_stringToMessageData(v___x_3065_);
return v___x_3066_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__75(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3074_ = lean_box(0);
v___x_3075_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__74));
v___x_3076_ = l_Lean_mkConst(v___x_3075_, v___x_3074_);
return v___x_3076_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__82(void){
_start:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3099_ = lean_box(0);
v___x_3100_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__81));
v___x_3101_ = l_Lean_mkConst(v___x_3100_, v___x_3099_);
return v___x_3101_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__2(void){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3109_ = lean_box(0);
v___x_3110_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__1));
v___x_3111_ = l_Lean_mkConst(v___x_3110_, v___x_3109_);
return v___x_3111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_binaryReflection(lean_object* v_lhsExpr_3133_, lean_object* v_rhsExpr_3134_, uint8_t v_pred_3135_, lean_object* v_origExpr_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_){
_start:
{
lean_object* v___x_3150_; 
lean_inc_ref(v_lhsExpr_3133_);
v___x_3150_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of(v_lhsExpr_3133_, v_a_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_, v_a_3144_, v_a_3145_, v_a_3146_, v_a_3147_, v_a_3148_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3180_; 
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3153_ = v___x_3150_;
v_isShared_3154_ = v_isSharedCheck_3180_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_dec(v___x_3150_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3180_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
if (lean_obj_tag(v_a_3151_) == 1)
{
lean_object* v_val_3155_; lean_object* v___x_3156_; 
lean_del_object(v___x_3153_);
v_val_3155_ = lean_ctor_get(v_a_3151_, 0);
lean_inc(v_val_3155_);
lean_dec_ref_known(v_a_3151_, 1);
lean_inc_ref(v_rhsExpr_3134_);
v___x_3156_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of(v_rhsExpr_3134_, v_a_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_, v_a_3144_, v_a_3145_, v_a_3146_, v_a_3147_, v_a_3148_);
if (lean_obj_tag(v___x_3156_) == 0)
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3167_; 
v_a_3157_ = lean_ctor_get(v___x_3156_, 0);
v_isSharedCheck_3167_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3167_ == 0)
{
v___x_3159_ = v___x_3156_;
v_isShared_3160_ = v_isSharedCheck_3167_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3156_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3167_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
if (lean_obj_tag(v_a_3157_) == 1)
{
lean_object* v_val_3161_; lean_object* v___x_3162_; 
lean_del_object(v___x_3159_);
v_val_3161_ = lean_ctor_get(v_a_3157_, 0);
lean_inc(v_val_3161_);
lean_dec_ref_known(v_a_3157_, 1);
v___x_3162_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkBinPred___redArg(v_val_3155_, v_val_3161_, v_lhsExpr_3133_, v_rhsExpr_3134_, v_pred_3135_, v_origExpr_3136_, v_a_3143_, v_a_3144_, v_a_3145_, v_a_3146_, v_a_3147_, v_a_3148_);
return v___x_3162_;
}
else
{
lean_object* v___x_3163_; lean_object* v___x_3165_; 
lean_dec(v_a_3157_);
lean_dec(v_val_3155_);
lean_dec_ref(v_origExpr_3136_);
lean_dec_ref(v_rhsExpr_3134_);
lean_dec_ref(v_lhsExpr_3133_);
v___x_3163_ = lean_box(0);
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 0, v___x_3163_);
v___x_3165_ = v___x_3159_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v___x_3163_);
v___x_3165_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
return v___x_3165_;
}
}
}
}
else
{
lean_object* v_a_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3175_; 
lean_dec(v_val_3155_);
lean_dec_ref(v_origExpr_3136_);
lean_dec_ref(v_rhsExpr_3134_);
lean_dec_ref(v_lhsExpr_3133_);
v_a_3168_ = lean_ctor_get(v___x_3156_, 0);
v_isSharedCheck_3175_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3175_ == 0)
{
v___x_3170_ = v___x_3156_;
v_isShared_3171_ = v_isSharedCheck_3175_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_a_3168_);
lean_dec(v___x_3156_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3175_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3173_; 
if (v_isShared_3171_ == 0)
{
v___x_3173_ = v___x_3170_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v_a_3168_);
v___x_3173_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
return v___x_3173_;
}
}
}
}
else
{
lean_object* v___x_3176_; lean_object* v___x_3178_; 
lean_dec(v_a_3151_);
lean_dec_ref(v_origExpr_3136_);
lean_dec_ref(v_rhsExpr_3134_);
lean_dec_ref(v_lhsExpr_3133_);
v___x_3176_ = lean_box(0);
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 0, v___x_3176_);
v___x_3178_ = v___x_3153_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3176_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3188_; 
lean_dec_ref(v_origExpr_3136_);
lean_dec_ref(v_rhsExpr_3134_);
lean_dec_ref(v_lhsExpr_3133_);
v_a_3181_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3183_ = v___x_3150_;
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v___x_3150_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___x_3186_; 
if (v_isShared_3184_ == 0)
{
v___x_3186_ = v___x_3183_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_a_3181_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
return v___x_3186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go(lean_object* v_origExpr_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_){
_start:
{
lean_object* v___x_3209_; 
lean_inc_ref(v_origExpr_3189_);
v___x_3209_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_origExpr_3189_, v_a_3199_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v_a_3210_; lean_object* v___x_3211_; uint8_t v___x_3212_; 
v_a_3210_ = lean_ctor_get(v___x_3209_, 0);
lean_inc(v_a_3210_);
lean_dec_ref_known(v___x_3209_, 1);
v___x_3211_ = l_Lean_Expr_cleanupAnnotations(v_a_3210_);
lean_dec(v_a_3210_);
v___x_3212_ = l_Lean_Expr_isApp(v___x_3211_);
if (v___x_3212_ == 0)
{
lean_dec_ref(v___x_3211_);
lean_dec_ref(v_origExpr_3189_);
goto v___jp_3203_;
}
else
{
lean_object* v___x_3213_; uint8_t v___x_3214_; 
v___x_3213_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3211_);
v___x_3214_ = l_Lean_Expr_isApp(v___x_3213_);
if (v___x_3214_ == 0)
{
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3211_);
lean_dec_ref(v_origExpr_3189_);
goto v___jp_3203_;
}
else
{
lean_object* v___x_3215_; uint8_t v___x_3216_; 
v___x_3215_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3213_);
v___x_3216_ = l_Lean_Expr_isApp(v___x_3215_);
if (v___x_3216_ == 0)
{
lean_dec_ref(v___x_3215_);
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3211_);
lean_dec_ref(v_origExpr_3189_);
goto v___jp_3203_;
}
else
{
lean_object* v_arg_3217_; lean_object* v_arg_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; uint8_t v___x_3221_; 
v_arg_3217_ = lean_ctor_get(v___x_3211_, 1);
lean_inc_ref(v_arg_3217_);
lean_dec_ref(v___x_3211_);
v_arg_3218_ = lean_ctor_get(v___x_3213_, 1);
lean_inc_ref(v_arg_3218_);
lean_dec_ref(v___x_3213_);
v___x_3219_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3215_);
lean_dec_ref(v___x_3215_);
v___x_3220_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__0));
v___x_3221_ = l_Lean_Expr_isConstOf(v___x_3219_, v___x_3220_);
if (v___x_3221_ == 0)
{
lean_object* v___x_3222_; uint8_t v___x_3223_; 
v___x_3222_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__2));
v___x_3223_ = l_Lean_Expr_isConstOf(v___x_3219_, v___x_3222_);
if (v___x_3223_ == 0)
{
uint8_t v___x_3224_; 
v___x_3224_ = l_Lean_Expr_isApp(v___x_3219_);
if (v___x_3224_ == 0)
{
lean_dec_ref(v___x_3219_);
lean_dec_ref(v_arg_3218_);
lean_dec_ref(v_arg_3217_);
lean_dec_ref(v_origExpr_3189_);
goto v___jp_3203_;
}
else
{
lean_object* v___x_3225_; lean_object* v___x_3226_; uint8_t v___x_3227_; 
v___x_3225_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3219_);
v___x_3226_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__5));
v___x_3227_ = l_Lean_Expr_isConstOf(v___x_3225_, v___x_3226_);
lean_dec_ref(v___x_3225_);
if (v___x_3227_ == 0)
{
lean_dec_ref(v___x_3219_);
lean_dec_ref(v_arg_3218_);
lean_dec_ref(v_arg_3217_);
lean_dec_ref(v_origExpr_3189_);
goto v___jp_3203_;
}
else
{
lean_object* v_arg_3228_; lean_object* v___x_3229_; uint8_t v___x_3230_; 
v_arg_3228_ = lean_ctor_get(v___x_3219_, 1);
lean_inc_ref(v_arg_3228_);
lean_dec_ref(v___x_3219_);
v___x_3229_ = l_Lean_Expr_cleanupAnnotations(v_arg_3228_);
lean_dec_ref(v_arg_3228_);
v___x_3230_ = l_Lean_Expr_isApp(v___x_3229_);
if (v___x_3230_ == 0)
{
lean_dec_ref(v___x_3229_);
lean_dec_ref(v_arg_3218_);
lean_dec_ref(v_arg_3217_);
lean_dec_ref(v_origExpr_3189_);
goto v___jp_3206_;
}
else
{
lean_object* v___x_3231_; lean_object* v___x_3232_; uint8_t v___x_3233_; 
v___x_3231_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3229_);
lean_dec_ref(v___x_3229_);
v___x_3232_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1));
v___x_3233_ = l_Lean_Expr_isConstOf(v___x_3231_, v___x_3232_);
lean_dec_ref(v___x_3231_);
if (v___x_3233_ == 0)
{
lean_dec_ref(v_arg_3218_);
lean_dec_ref(v_arg_3217_);
lean_dec_ref(v_origExpr_3189_);
goto v___jp_3206_;
}
else
{
uint8_t v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = 0;
v___x_3235_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_binaryReflection(v_arg_3218_, v_arg_3217_, v___x_3234_, v_origExpr_3189_, v_a_3190_, v_a_3191_, v_a_3192_, v_a_3193_, v_a_3194_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_);
return v___x_3235_;
}
}
}
}
}
else
{
uint8_t v___x_3236_; lean_object* v___x_3237_; 
lean_dec_ref(v___x_3219_);
v___x_3236_ = 1;
v___x_3237_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_binaryReflection(v_arg_3218_, v_arg_3217_, v___x_3236_, v_origExpr_3189_, v_a_3190_, v_a_3191_, v_a_3192_, v_a_3193_, v_a_3194_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_);
return v___x_3237_;
}
}
else
{
lean_object* v___x_3238_; 
lean_dec_ref(v___x_3219_);
lean_inc_ref(v_arg_3218_);
v___x_3238_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of(v_arg_3218_, v_a_3190_, v_a_3191_, v_a_3192_, v_a_3193_, v_a_3194_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3278_; 
v_a_3239_ = lean_ctor_get(v___x_3238_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3241_ = v___x_3238_;
v_isShared_3242_ = v_isSharedCheck_3278_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3238_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3278_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
if (lean_obj_tag(v_a_3239_) == 1)
{
lean_object* v_val_3243_; lean_object* v___x_3244_; 
v_val_3243_ = lean_ctor_get(v_a_3239_, 0);
lean_inc(v_val_3243_);
lean_dec_ref_known(v_a_3239_, 1);
v___x_3244_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_3217_);
lean_dec_ref(v_arg_3217_);
if (lean_obj_tag(v___x_3244_) == 1)
{
lean_object* v_val_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3269_; 
lean_del_object(v___x_3241_);
v_val_3245_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3247_ = v___x_3244_;
v_isShared_3248_ = v_isSharedCheck_3269_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_val_3245_);
lean_dec(v___x_3244_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3269_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3249_; 
v___x_3249_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_mkGetLsbD___redArg(v_val_3243_, v_arg_3218_, v_val_3245_, v_origExpr_3189_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_);
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v_a_3250_; lean_object* v___x_3252_; uint8_t v_isShared_3253_; uint8_t v_isSharedCheck_3260_; 
v_a_3250_ = lean_ctor_get(v___x_3249_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3252_ = v___x_3249_;
v_isShared_3253_ = v_isSharedCheck_3260_;
goto v_resetjp_3251_;
}
else
{
lean_inc(v_a_3250_);
lean_dec(v___x_3249_);
v___x_3252_ = lean_box(0);
v_isShared_3253_ = v_isSharedCheck_3260_;
goto v_resetjp_3251_;
}
v_resetjp_3251_:
{
lean_object* v___x_3255_; 
if (v_isShared_3248_ == 0)
{
lean_ctor_set(v___x_3247_, 0, v_a_3250_);
v___x_3255_ = v___x_3247_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3250_);
v___x_3255_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
lean_object* v___x_3257_; 
if (v_isShared_3253_ == 0)
{
lean_ctor_set(v___x_3252_, 0, v___x_3255_);
v___x_3257_ = v___x_3252_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v___x_3255_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
lean_del_object(v___x_3247_);
v_a_3261_ = lean_ctor_get(v___x_3249_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3249_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3249_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
else
{
lean_object* v___x_3270_; lean_object* v___x_3272_; 
lean_dec(v___x_3244_);
lean_dec(v_val_3243_);
lean_dec_ref(v_arg_3218_);
lean_dec_ref(v_origExpr_3189_);
v___x_3270_ = lean_box(0);
if (v_isShared_3242_ == 0)
{
lean_ctor_set(v___x_3241_, 0, v___x_3270_);
v___x_3272_ = v___x_3241_;
goto v_reusejp_3271_;
}
else
{
lean_object* v_reuseFailAlloc_3273_; 
v_reuseFailAlloc_3273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3273_, 0, v___x_3270_);
v___x_3272_ = v_reuseFailAlloc_3273_;
goto v_reusejp_3271_;
}
v_reusejp_3271_:
{
return v___x_3272_;
}
}
}
else
{
lean_object* v___x_3274_; lean_object* v___x_3276_; 
lean_dec(v_a_3239_);
lean_dec_ref(v_arg_3218_);
lean_dec_ref(v_arg_3217_);
lean_dec_ref(v_origExpr_3189_);
v___x_3274_ = lean_box(0);
if (v_isShared_3242_ == 0)
{
lean_ctor_set(v___x_3241_, 0, v___x_3274_);
v___x_3276_ = v___x_3241_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v___x_3274_);
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
else
{
lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3286_; 
lean_dec_ref(v_arg_3218_);
lean_dec_ref(v_arg_3217_);
lean_dec_ref(v_origExpr_3189_);
v_a_3279_ = lean_ctor_get(v___x_3238_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3281_ = v___x_3238_;
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3238_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3284_; 
if (v_isShared_3282_ == 0)
{
v___x_3284_ = v___x_3281_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3279_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
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
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3294_; 
lean_dec_ref(v_origExpr_3189_);
v_a_3287_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3289_ = v___x_3209_;
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3209_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3292_; 
if (v_isShared_3290_ == 0)
{
v___x_3292_ = v___x_3289_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3287_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
v___jp_3203_:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3204_ = lean_box(0);
v___x_3205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3204_);
return v___x_3205_;
}
v___jp_3206_:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3207_ = lean_box(0);
v___x_3208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
return v___x_3208_;
}
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3(void){
_start:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
v___x_3302_ = lean_box(0);
v___x_3303_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__2));
v___x_3304_ = l_Lean_mkConst(v___x_3303_, v___x_3302_);
return v___x_3304_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4(void){
_start:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3305_ = lean_unsigned_to_nat(1u);
v___x_3306_ = l_Lean_mkNatLit(v___x_3305_);
return v___x_3306_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5(void){
_start:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3307_ = lean_unsigned_to_nat(0u);
v___x_3308_ = l_Lean_mkNatLit(v___x_3307_);
return v___x_3308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom(lean_object* v_e_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_){
_start:
{
lean_object* v___x_3323_; 
lean_inc_ref(v_e_3309_);
v___x_3323_ = l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg(v_e_3309_, v_a_3316_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_);
if (lean_obj_tag(v___x_3323_) == 0)
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3388_; 
v_a_3324_ = lean_ctor_get(v___x_3323_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3323_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3326_ = v___x_3323_;
v_isShared_3327_ = v_isSharedCheck_3388_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3323_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3388_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
uint8_t v___x_3328_; 
v___x_3328_ = lean_unbox(v_a_3324_);
lean_dec(v_a_3324_);
if (v___x_3328_ == 0)
{
lean_object* v___x_3329_; lean_object* v___x_3331_; 
lean_dec_ref(v_e_3309_);
v___x_3329_ = lean_box(0);
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 0, v___x_3329_);
v___x_3331_ = v___x_3326_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v___x_3329_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
else
{
lean_object* v___x_3333_; 
lean_del_object(v___x_3326_);
lean_inc_ref(v_e_3309_);
v___x_3333_ = l_Lean_Meta_Tactic_BVDecide_mkBoolAtomWrapper(v_e_3309_, v_a_3316_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_);
if (lean_obj_tag(v___x_3333_) == 0)
{
lean_object* v_a_3334_; lean_object* v___x_3335_; uint8_t v___x_3336_; lean_object* v___x_3337_; 
v_a_3334_ = lean_ctor_get(v___x_3333_, 0);
lean_inc(v_a_3334_);
lean_dec_ref_known(v___x_3333_, 1);
v___x_3335_ = lean_unsigned_to_nat(1u);
v___x_3336_ = 0;
v___x_3337_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom(v_a_3334_, v___x_3335_, v___x_3336_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_, v_a_3315_, v_a_3316_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v_width_3339_; lean_object* v_bvExpr_3340_; lean_object* v_expr_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___f_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3338_);
lean_dec_ref_known(v___x_3337_, 1);
v_width_3339_ = lean_ctor_get(v_a_3338_, 0);
lean_inc_n(v_width_3339_, 2);
v_bvExpr_3340_ = lean_ctor_get(v_a_3338_, 1);
v_expr_3341_ = lean_ctor_get(v_a_3338_, 4);
lean_inc_ref_n(v_expr_3341_, 2);
v___x_3342_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_bvExpr_3340_);
v___x_3343_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3343_, 0, v_width_3339_);
lean_ctor_set(v___x_3343_, 1, v_bvExpr_3340_);
lean_ctor_set(v___x_3343_, 2, v___x_3342_);
v___x_3344_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0));
v___x_3345_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1));
v___x_3346_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1));
v___x_3347_ = lean_box(0);
lean_inc_ref(v_e_3309_);
v___f_3348_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___lam__0___boxed), 20, 8);
lean_closure_set(v___f_3348_, 0, v_width_3339_);
lean_closure_set(v___f_3348_, 1, v_expr_3341_);
lean_closure_set(v___f_3348_, 2, v_a_3338_);
lean_closure_set(v___f_3348_, 3, v___x_3344_);
lean_closure_set(v___f_3348_, 4, v___x_3345_);
lean_closure_set(v___f_3348_, 5, v___x_3346_);
lean_closure_set(v___f_3348_, 6, v___x_3347_);
lean_closure_set(v___f_3348_, 7, v_e_3309_);
v___x_3349_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__3);
v___x_3350_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__4);
v___x_3351_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5, &l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___closed__5);
v___x_3352_ = l_Lean_mkApp3(v___x_3349_, v___x_3350_, v_expr_3341_, v___x_3351_);
v___x_3353_ = l_Lean_Meta_Sym_shareCommonInc(v___x_3352_, v_a_3316_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3363_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3356_ = v___x_3353_;
v_isShared_3357_ = v_isSharedCheck_3363_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3353_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3363_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3361_; 
v___x_3358_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3343_);
lean_ctor_set(v___x_3358_, 1, v_e_3309_);
lean_ctor_set(v___x_3358_, 2, v___f_3348_);
lean_ctor_set(v___x_3358_, 3, v_a_3354_);
v___x_3359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
if (v_isShared_3357_ == 0)
{
lean_ctor_set(v___x_3356_, 0, v___x_3359_);
v___x_3361_ = v___x_3356_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v___x_3359_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
}
else
{
lean_object* v_a_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3371_; 
lean_dec_ref(v___f_3348_);
lean_dec_ref_known(v___x_3343_, 3);
lean_dec_ref(v_e_3309_);
v_a_3364_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3366_ = v___x_3353_;
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
else
{
lean_inc(v_a_3364_);
lean_dec(v___x_3353_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3369_; 
if (v_isShared_3367_ == 0)
{
v___x_3369_ = v___x_3366_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3364_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
return v___x_3369_;
}
}
}
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3379_; 
lean_dec_ref(v_e_3309_);
v_a_3372_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3374_ = v___x_3337_;
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3337_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3377_; 
if (v_isShared_3375_ == 0)
{
v___x_3377_ = v___x_3374_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3372_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
}
else
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3387_; 
lean_dec_ref(v_e_3309_);
v_a_3380_ = lean_ctor_get(v___x_3333_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___x_3333_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3382_ = v___x_3333_;
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3333_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3385_; 
if (v_isShared_3383_ == 0)
{
v___x_3385_ = v___x_3382_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3380_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
}
}
}
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec_ref(v_e_3309_);
v_a_3389_ = lean_ctor_get(v___x_3323_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3323_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3323_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3323_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVPredCache___at___00Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_spec__23(lean_object* v_e_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_){
_start:
{
lean_object* v_a_3412_; lean_object* v___x_3428_; lean_object* v_bvPredCache_3429_; lean_object* v___x_3430_; 
v___x_3428_ = lean_st_ref_get(v_a_3398_);
v_bvPredCache_3429_ = lean_ctor_get(v___x_3428_, 2);
lean_inc_ref(v_bvPredCache_3429_);
lean_dec(v___x_3428_);
v___x_3430_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___redArg(v_bvPredCache_3429_, v_e_3397_);
lean_dec_ref(v_bvPredCache_3429_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v___x_3431_; 
lean_inc_ref(v_e_3397_);
v___x_3431_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go(v_e_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_a_3432_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
lean_inc(v_a_3432_);
lean_dec_ref_known(v___x_3431_, 1);
if (lean_obj_tag(v_a_3432_) == 0)
{
lean_object* v___x_3433_; 
lean_inc_ref(v_e_3397_);
v___x_3433_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom(v_e_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_object* v_a_3434_; 
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
lean_inc(v_a_3434_);
lean_dec_ref_known(v___x_3433_, 1);
v_a_3412_ = v_a_3434_;
goto v___jp_3411_;
}
else
{
lean_dec_ref(v_e_3397_);
return v___x_3433_;
}
}
else
{
v_a_3412_ = v_a_3432_;
goto v___jp_3411_;
}
}
else
{
lean_dec_ref(v_e_3397_);
return v___x_3431_;
}
}
else
{
lean_object* v_val_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3442_; 
lean_dec_ref(v_e_3397_);
v_val_3435_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3437_ = v___x_3430_;
v_isShared_3438_ = v_isSharedCheck_3442_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_val_3435_);
lean_dec(v___x_3430_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3442_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
lean_object* v___x_3440_; 
if (v_isShared_3438_ == 0)
{
lean_ctor_set_tag(v___x_3437_, 0);
v___x_3440_ = v___x_3437_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_val_3435_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
return v___x_3440_;
}
}
}
v___jp_3411_:
{
lean_object* v___x_3413_; lean_object* v_lemmas_3414_; lean_object* v_bvExprCache_3415_; lean_object* v_bvPredCache_3416_; lean_object* v_bvLogicalCache_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3427_; 
v___x_3413_ = lean_st_ref_take(v_a_3398_);
v_lemmas_3414_ = lean_ctor_get(v___x_3413_, 0);
v_bvExprCache_3415_ = lean_ctor_get(v___x_3413_, 1);
v_bvPredCache_3416_ = lean_ctor_get(v___x_3413_, 2);
v_bvLogicalCache_3417_ = lean_ctor_get(v___x_3413_, 3);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3413_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3419_ = v___x_3413_;
v_isShared_3420_ = v_isSharedCheck_3427_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_bvLogicalCache_3417_);
lean_inc(v_bvPredCache_3416_);
lean_inc(v_bvExprCache_3415_);
lean_inc(v_lemmas_3414_);
lean_dec(v___x_3413_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3427_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3421_; lean_object* v___x_3423_; 
lean_inc(v_a_3412_);
v___x_3421_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17___redArg(v_bvPredCache_3416_, v_e_3397_, v_a_3412_);
if (v_isShared_3420_ == 0)
{
lean_ctor_set(v___x_3419_, 2, v___x_3421_);
v___x_3423_ = v___x_3419_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_lemmas_3414_);
lean_ctor_set(v_reuseFailAlloc_3426_, 1, v_bvExprCache_3415_);
lean_ctor_set(v_reuseFailAlloc_3426_, 2, v___x_3421_);
lean_ctor_set(v_reuseFailAlloc_3426_, 3, v_bvLogicalCache_3417_);
v___x_3423_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3424_ = lean_st_ref_put(v_a_3398_, v___x_3423_);
v___x_3425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3425_, 0, v_a_3412_);
return v___x_3425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of(lean_object* v_origExpr_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_, lean_object* v_a_3446_, lean_object* v_a_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_, lean_object* v_a_3453_, lean_object* v_a_3454_, lean_object* v_a_3455_){
_start:
{
lean_object* v___x_3457_; 
v___x_3457_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVPredCache___at___00Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_spec__23(v_origExpr_3443_, v_a_3444_, v_a_3445_, v_a_3446_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_, v_a_3454_, v_a_3455_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred(lean_object* v_origExpr_3458_, lean_object* v_a_3459_, lean_object* v_a_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_){
_start:
{
lean_object* v___x_3472_; 
v___x_3472_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of(v_origExpr_3458_, v_a_3459_, v_a_3460_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3506_; 
v_a_3473_ = lean_ctor_get(v___x_3472_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3475_ = v___x_3472_;
v_isShared_3476_ = v_isSharedCheck_3506_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v___x_3472_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3506_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
if (lean_obj_tag(v_a_3473_) == 1)
{
lean_object* v_val_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3501_; 
lean_del_object(v___x_3475_);
v_val_3477_ = lean_ctor_get(v_a_3473_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v_a_3473_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3479_ = v_a_3473_;
v_isShared_3480_ = v_isSharedCheck_3501_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_val_3477_);
lean_dec(v_a_3473_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3501_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3481_; 
v___x_3481_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_ofPred___redArg(v_val_3477_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_);
if (lean_obj_tag(v___x_3481_) == 0)
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3492_; 
v_a_3482_ = lean_ctor_get(v___x_3481_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3481_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3484_ = v___x_3481_;
v_isShared_3485_ = v_isSharedCheck_3492_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3481_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3492_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3480_ == 0)
{
lean_ctor_set(v___x_3479_, 0, v_a_3482_);
v___x_3487_ = v___x_3479_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
lean_object* v___x_3489_; 
if (v_isShared_3485_ == 0)
{
lean_ctor_set(v___x_3484_, 0, v___x_3487_);
v___x_3489_ = v___x_3484_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v___x_3487_);
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
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_del_object(v___x_3479_);
v_a_3493_ = lean_ctor_get(v___x_3481_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3481_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3481_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3481_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
}
else
{
lean_object* v___x_3502_; lean_object* v___x_3504_; 
lean_dec(v_a_3473_);
v___x_3502_ = lean_box(0);
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 0, v___x_3502_);
v___x_3504_ = v___x_3475_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v___x_3502_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
return v___x_3504_;
}
}
}
}
else
{
lean_object* v_a_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3514_; 
v_a_3507_ = lean_ctor_get(v___x_3472_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3509_ = v___x_3472_;
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_a_3507_);
lean_dec(v___x_3472_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3512_; 
if (v_isShared_3510_ == 0)
{
v___x_3512_ = v___x_3509_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_a_3507_);
v___x_3512_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
return v___x_3512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_gateReflection(lean_object* v_lhsExpr_3525_, lean_object* v_rhsExpr_3526_, uint8_t v_gate_3527_, lean_object* v_origExpr_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_){
_start:
{
lean_object* v___x_3542_; 
lean_inc_ref(v_lhsExpr_3525_);
v___x_3542_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(v_lhsExpr_3525_, v_a_3529_, v_a_3530_, v_a_3531_, v_a_3532_, v_a_3533_, v_a_3534_, v_a_3535_, v_a_3536_, v_a_3537_, v_a_3538_, v_a_3539_, v_a_3540_);
if (lean_obj_tag(v___x_3542_) == 0)
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3587_; 
v_a_3543_ = lean_ctor_get(v___x_3542_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3542_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3545_ = v___x_3542_;
v_isShared_3546_ = v_isSharedCheck_3587_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3542_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3587_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
if (lean_obj_tag(v_a_3543_) == 1)
{
lean_object* v_val_3547_; lean_object* v___x_3548_; 
lean_del_object(v___x_3545_);
v_val_3547_ = lean_ctor_get(v_a_3543_, 0);
lean_inc(v_val_3547_);
lean_dec_ref_known(v_a_3543_, 1);
lean_inc_ref(v_rhsExpr_3526_);
v___x_3548_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(v_rhsExpr_3526_, v_a_3529_, v_a_3530_, v_a_3531_, v_a_3532_, v_a_3533_, v_a_3534_, v_a_3535_, v_a_3536_, v_a_3537_, v_a_3538_, v_a_3539_, v_a_3540_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3582_; 
v_a_3549_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3551_ = v___x_3548_;
v_isShared_3552_ = v_isSharedCheck_3582_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v___x_3548_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3582_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
if (lean_obj_tag(v_a_3549_) == 1)
{
lean_object* v_val_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3577_; 
lean_del_object(v___x_3551_);
v_val_3553_ = lean_ctor_get(v_a_3549_, 0);
v_isSharedCheck_3577_ = !lean_is_exclusive(v_a_3549_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3555_ = v_a_3549_;
v_isShared_3556_ = v_isSharedCheck_3577_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_val_3553_);
lean_dec(v_a_3549_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3577_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3557_; 
v___x_3557_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkGate___redArg(v_val_3547_, v_val_3553_, v_lhsExpr_3525_, v_rhsExpr_3526_, v_gate_3527_, v_origExpr_3528_, v_a_3535_, v_a_3536_, v_a_3537_, v_a_3538_, v_a_3539_, v_a_3540_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3568_; 
v_a_3558_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3560_ = v___x_3557_;
v_isShared_3561_ = v_isSharedCheck_3568_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3557_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3568_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3563_; 
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 0, v_a_3558_);
v___x_3563_ = v___x_3555_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_a_3558_);
v___x_3563_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
lean_object* v___x_3565_; 
if (v_isShared_3561_ == 0)
{
lean_ctor_set(v___x_3560_, 0, v___x_3563_);
v___x_3565_ = v___x_3560_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v___x_3563_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
}
else
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3576_; 
lean_del_object(v___x_3555_);
v_a_3569_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3576_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3571_ = v___x_3557_;
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_3557_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3576_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3574_; 
if (v_isShared_3572_ == 0)
{
v___x_3574_ = v___x_3571_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v_a_3569_);
v___x_3574_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
return v___x_3574_;
}
}
}
}
}
else
{
lean_object* v___x_3578_; lean_object* v___x_3580_; 
lean_dec(v_a_3549_);
lean_dec(v_val_3547_);
lean_dec_ref(v_origExpr_3528_);
lean_dec_ref(v_rhsExpr_3526_);
lean_dec_ref(v_lhsExpr_3525_);
v___x_3578_ = lean_box(0);
if (v_isShared_3552_ == 0)
{
lean_ctor_set(v___x_3551_, 0, v___x_3578_);
v___x_3580_ = v___x_3551_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v___x_3578_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
}
else
{
lean_dec(v_val_3547_);
lean_dec_ref(v_origExpr_3528_);
lean_dec_ref(v_rhsExpr_3526_);
lean_dec_ref(v_lhsExpr_3525_);
return v___x_3548_;
}
}
else
{
lean_object* v___x_3583_; lean_object* v___x_3585_; 
lean_dec(v_a_3543_);
lean_dec_ref(v_origExpr_3528_);
lean_dec_ref(v_rhsExpr_3526_);
lean_dec_ref(v_lhsExpr_3525_);
v___x_3583_ = lean_box(0);
if (v_isShared_3546_ == 0)
{
lean_ctor_set(v___x_3545_, 0, v___x_3583_);
v___x_3585_ = v___x_3545_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v___x_3583_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
else
{
lean_dec_ref(v_origExpr_3528_);
lean_dec_ref(v_rhsExpr_3526_);
lean_dec_ref(v_lhsExpr_3525_);
return v___x_3542_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go(lean_object* v_origExpr_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_){
_start:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3605_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__0));
v___x_3606_ = l_Lean_Core_checkSystem(v___x_3605_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v___x_3607_; 
lean_dec_ref_known(v___x_3606_, 1);
lean_inc_ref(v_origExpr_3588_);
v___x_3607_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_origExpr_3588_, v_a_3598_);
if (lean_obj_tag(v___x_3607_) == 0)
{
lean_object* v_a_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; uint8_t v___x_3611_; 
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_a_3608_);
lean_dec_ref_known(v___x_3607_, 1);
v___x_3609_ = l_Lean_Expr_cleanupAnnotations(v_a_3608_);
lean_dec(v_a_3608_);
v___x_3610_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__1));
v___x_3611_ = l_Lean_Expr_isConstOf(v___x_3609_, v___x_3610_);
if (v___x_3611_ == 0)
{
lean_object* v___x_3612_; uint8_t v___x_3613_; 
v___x_3612_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__2));
v___x_3613_ = l_Lean_Expr_isConstOf(v___x_3609_, v___x_3612_);
if (v___x_3613_ == 0)
{
uint8_t v___x_3614_; 
v___x_3614_ = l_Lean_Expr_isApp(v___x_3609_);
if (v___x_3614_ == 0)
{
lean_object* v___x_3615_; 
lean_dec_ref(v___x_3609_);
v___x_3615_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred(v_origExpr_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3615_;
}
else
{
lean_object* v_arg_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; uint8_t v___x_3619_; 
v_arg_3616_ = lean_ctor_get(v___x_3609_, 1);
lean_inc_ref(v_arg_3616_);
v___x_3617_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3609_);
lean_dec_ref(v___x_3609_);
v___x_3618_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__3));
v___x_3619_ = l_Lean_Expr_isConstOf(v___x_3617_, v___x_3618_);
if (v___x_3619_ == 0)
{
uint8_t v___x_3620_; 
v___x_3620_ = l_Lean_Expr_isApp(v___x_3617_);
if (v___x_3620_ == 0)
{
lean_object* v___x_3621_; 
lean_dec_ref(v___x_3617_);
lean_dec_ref(v_arg_3616_);
v___x_3621_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred(v_origExpr_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3621_;
}
else
{
lean_object* v_arg_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; uint8_t v___x_3625_; 
v_arg_3622_ = lean_ctor_get(v___x_3617_, 1);
lean_inc_ref(v_arg_3622_);
v___x_3623_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3617_);
lean_dec_ref(v___x_3617_);
v___x_3624_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__4));
v___x_3625_ = l_Lean_Expr_isConstOf(v___x_3623_, v___x_3624_);
if (v___x_3625_ == 0)
{
lean_object* v___x_3626_; uint8_t v___x_3627_; 
v___x_3626_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__5));
v___x_3627_ = l_Lean_Expr_isConstOf(v___x_3623_, v___x_3626_);
if (v___x_3627_ == 0)
{
uint8_t v___x_3628_; 
v___x_3628_ = l_Lean_Expr_isApp(v___x_3623_);
if (v___x_3628_ == 0)
{
lean_object* v___x_3629_; 
lean_dec_ref(v___x_3623_);
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
v___x_3629_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred(v_origExpr_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3629_;
}
else
{
lean_object* v___x_3630_; uint8_t v___x_3631_; 
v___x_3630_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3623_);
v___x_3631_ = l_Lean_Expr_isApp(v___x_3630_);
if (v___x_3631_ == 0)
{
lean_object* v___x_3632_; 
lean_dec_ref(v___x_3630_);
lean_dec_ref(v___x_3623_);
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
v___x_3632_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred(v_origExpr_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3632_;
}
else
{
lean_object* v___x_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; 
v___x_3633_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3630_);
v___x_3634_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__7));
v___x_3635_ = l_Lean_Expr_isConstOf(v___x_3633_, v___x_3634_);
if (v___x_3635_ == 0)
{
lean_object* v___x_3636_; uint8_t v___x_3637_; 
lean_dec_ref(v___x_3623_);
v___x_3636_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___closed__5));
v___x_3637_ = l_Lean_Expr_isConstOf(v___x_3633_, v___x_3636_);
lean_dec_ref(v___x_3633_);
if (v___x_3637_ == 0)
{
lean_object* v___x_3638_; 
lean_dec_ref(v___x_3630_);
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
v___x_3638_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred(v_origExpr_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3638_;
}
else
{
lean_object* v_arg_3639_; lean_object* v___x_3640_; 
v_arg_3639_ = lean_ctor_get(v___x_3630_, 1);
lean_inc_ref(v_arg_3639_);
lean_dec_ref(v___x_3630_);
v___x_3640_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_3639_, v_a_3598_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v_a_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; uint8_t v___x_3644_; 
v_a_3641_ = lean_ctor_get(v___x_3640_, 0);
lean_inc(v_a_3641_);
lean_dec_ref_known(v___x_3640_, 1);
v___x_3642_ = l_Lean_Expr_cleanupAnnotations(v_a_3641_);
lean_dec(v_a_3641_);
v___x_3643_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg___closed__1));
v___x_3644_ = l_Lean_Expr_isConstOf(v___x_3642_, v___x_3643_);
if (v___x_3644_ == 0)
{
uint8_t v___x_3645_; 
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
v___x_3645_ = l_Lean_Expr_isApp(v___x_3642_);
if (v___x_3645_ == 0)
{
lean_dec_ref(v___x_3642_);
lean_dec_ref(v_origExpr_3588_);
goto v___jp_3602_;
}
else
{
lean_object* v___x_3646_; lean_object* v___x_3647_; uint8_t v___x_3648_; 
v___x_3646_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3642_);
lean_dec_ref(v___x_3642_);
v___x_3647_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1));
v___x_3648_ = l_Lean_Expr_isConstOf(v___x_3646_, v___x_3647_);
lean_dec_ref(v___x_3646_);
if (v___x_3648_ == 0)
{
lean_dec_ref(v_origExpr_3588_);
goto v___jp_3602_;
}
else
{
lean_object* v___x_3649_; 
v___x_3649_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred(v_origExpr_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3649_;
}
}
}
else
{
uint8_t v___x_3650_; lean_object* v___x_3651_; 
lean_dec_ref(v___x_3642_);
v___x_3650_ = 2;
v___x_3651_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_gateReflection(v_arg_3622_, v_arg_3616_, v___x_3650_, v_origExpr_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3651_;
}
}
else
{
lean_object* v_a_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3659_; 
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
lean_dec_ref(v_origExpr_3588_);
v_a_3652_ = lean_ctor_get(v___x_3640_, 0);
v_isSharedCheck_3659_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3659_ == 0)
{
v___x_3654_ = v___x_3640_;
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_a_3652_);
lean_dec(v___x_3640_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3657_; 
if (v_isShared_3655_ == 0)
{
v___x_3657_ = v___x_3654_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v_a_3652_);
v___x_3657_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
return v___x_3657_;
}
}
}
}
}
else
{
lean_object* v_arg_3660_; lean_object* v___x_3661_; 
lean_dec_ref(v___x_3633_);
lean_dec_ref(v___x_3630_);
v_arg_3660_ = lean_ctor_get(v___x_3623_, 1);
lean_inc_ref_n(v_arg_3660_, 2);
lean_dec_ref(v___x_3623_);
v___x_3661_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(v_arg_3660_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3717_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3664_ = v___x_3661_;
v_isShared_3665_ = v_isSharedCheck_3717_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3661_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3717_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
if (lean_obj_tag(v_a_3662_) == 1)
{
lean_object* v_val_3666_; lean_object* v___x_3667_; 
lean_del_object(v___x_3664_);
v_val_3666_ = lean_ctor_get(v_a_3662_, 0);
lean_inc(v_val_3666_);
lean_dec_ref_known(v_a_3662_, 1);
lean_inc_ref(v_arg_3622_);
v___x_3667_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(v_arg_3622_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3667_) == 0)
{
lean_object* v_a_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3712_; 
v_a_3668_ = lean_ctor_get(v___x_3667_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3667_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3670_ = v___x_3667_;
v_isShared_3671_ = v_isSharedCheck_3712_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_a_3668_);
lean_dec(v___x_3667_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3712_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
if (lean_obj_tag(v_a_3668_) == 1)
{
lean_object* v_val_3672_; lean_object* v___x_3673_; 
lean_del_object(v___x_3670_);
v_val_3672_ = lean_ctor_get(v_a_3668_, 0);
lean_inc(v_val_3672_);
lean_dec_ref_known(v_a_3668_, 1);
lean_inc_ref(v_arg_3616_);
v___x_3673_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(v_arg_3616_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3707_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3707_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3676_ = v___x_3673_;
v_isShared_3677_ = v_isSharedCheck_3707_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3673_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3707_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
if (lean_obj_tag(v_a_3674_) == 1)
{
lean_object* v_val_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3702_; 
lean_del_object(v___x_3676_);
v_val_3678_ = lean_ctor_get(v_a_3674_, 0);
v_isSharedCheck_3702_ = !lean_is_exclusive(v_a_3674_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3680_ = v_a_3674_;
v_isShared_3681_ = v_isSharedCheck_3702_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_val_3678_);
lean_dec(v_a_3674_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3702_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
lean_object* v___x_3682_; 
v___x_3682_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkIte___redArg(v_val_3666_, v_val_3672_, v_val_3678_, v_arg_3660_, v_arg_3622_, v_arg_3616_, v_origExpr_3588_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3693_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3685_ = v___x_3682_;
v_isShared_3686_ = v_isSharedCheck_3693_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3682_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3693_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3681_ == 0)
{
lean_ctor_set(v___x_3680_, 0, v_a_3683_);
v___x_3688_ = v___x_3680_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
lean_object* v___x_3690_; 
if (v_isShared_3686_ == 0)
{
lean_ctor_set(v___x_3685_, 0, v___x_3688_);
v___x_3690_ = v___x_3685_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v___x_3688_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
else
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3701_; 
lean_del_object(v___x_3680_);
v_a_3694_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3696_ = v___x_3682_;
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3682_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3699_; 
if (v_isShared_3697_ == 0)
{
v___x_3699_ = v___x_3696_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_a_3694_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
return v___x_3699_;
}
}
}
}
}
else
{
lean_object* v___x_3703_; lean_object* v___x_3705_; 
lean_dec(v_a_3674_);
lean_dec(v_val_3672_);
lean_dec(v_val_3666_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
lean_dec_ref(v_origExpr_3588_);
v___x_3703_ = lean_box(0);
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 0, v___x_3703_);
v___x_3705_ = v___x_3676_;
goto v_reusejp_3704_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v___x_3703_);
v___x_3705_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3704_;
}
v_reusejp_3704_:
{
return v___x_3705_;
}
}
}
}
else
{
lean_dec(v_val_3672_);
lean_dec(v_val_3666_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
lean_dec_ref(v_origExpr_3588_);
return v___x_3673_;
}
}
else
{
lean_object* v___x_3708_; lean_object* v___x_3710_; 
lean_dec(v_a_3668_);
lean_dec(v_val_3666_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
lean_dec_ref(v_origExpr_3588_);
v___x_3708_ = lean_box(0);
if (v_isShared_3671_ == 0)
{
lean_ctor_set(v___x_3670_, 0, v___x_3708_);
v___x_3710_ = v___x_3670_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v___x_3708_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
else
{
lean_dec(v_val_3666_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
lean_dec_ref(v_origExpr_3588_);
return v___x_3667_;
}
}
else
{
lean_object* v___x_3713_; lean_object* v___x_3715_; 
lean_dec(v_a_3662_);
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
lean_dec_ref(v_origExpr_3588_);
v___x_3713_ = lean_box(0);
if (v_isShared_3665_ == 0)
{
lean_ctor_set(v___x_3664_, 0, v___x_3713_);
v___x_3715_ = v___x_3664_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v___x_3713_);
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
else
{
lean_dec_ref(v_arg_3660_);
lean_dec_ref(v_arg_3622_);
lean_dec_ref(v_arg_3616_);
lean_dec_ref(v_origExpr_3588_);
return v___x_3661_;
}
}
}
}
}
else
{
uint8_t v___x_3718_; lean_object* v___x_3719_; 
lean_dec_ref(v___x_3623_);
v___x_3718_ = 0;
v___x_3719_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_gateReflection(v_arg_3622_, v_arg_3616_, v___x_3718_, v_origExpr_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3719_;
}
}
else
{
uint8_t v___x_3720_; lean_object* v___x_3721_; 
lean_dec_ref(v___x_3623_);
v___x_3720_ = 1;
v___x_3721_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_gateReflection(v_arg_3622_, v_arg_3616_, v___x_3720_, v_origExpr_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
return v___x_3721_;
}
}
}
else
{
lean_object* v___x_3722_; 
lean_dec_ref(v___x_3617_);
lean_inc_ref(v_arg_3616_);
v___x_3722_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(v_arg_3616_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3722_) == 0)
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3756_; 
v_a_3723_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3756_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3756_ == 0)
{
v___x_3725_ = v___x_3722_;
v_isShared_3726_ = v_isSharedCheck_3756_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3722_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3756_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
if (lean_obj_tag(v_a_3723_) == 1)
{
lean_object* v_val_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3751_; 
lean_del_object(v___x_3725_);
v_val_3727_ = lean_ctor_get(v_a_3723_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v_a_3723_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3729_ = v_a_3723_;
v_isShared_3730_ = v_isSharedCheck_3751_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_val_3727_);
lean_dec(v_a_3723_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3751_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3731_; 
v___x_3731_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkNot___redArg(v_val_3727_, v_arg_3616_, v_origExpr_3588_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3742_; 
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3734_ = v___x_3731_;
v_isShared_3735_ = v_isSharedCheck_3742_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3731_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3742_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 0, v_a_3732_);
v___x_3737_ = v___x_3729_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3732_);
v___x_3737_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
lean_object* v___x_3739_; 
if (v_isShared_3735_ == 0)
{
lean_ctor_set(v___x_3734_, 0, v___x_3737_);
v___x_3739_ = v___x_3734_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v___x_3737_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
else
{
lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
lean_del_object(v___x_3729_);
v_a_3743_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3731_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3731_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
}
else
{
lean_object* v___x_3752_; lean_object* v___x_3754_; 
lean_dec(v_a_3723_);
lean_dec_ref(v_arg_3616_);
lean_dec_ref(v_origExpr_3588_);
v___x_3752_ = lean_box(0);
if (v_isShared_3726_ == 0)
{
lean_ctor_set(v___x_3725_, 0, v___x_3752_);
v___x_3754_ = v___x_3725_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3755_, 0, v___x_3752_);
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
else
{
lean_dec_ref(v_arg_3616_);
lean_dec_ref(v_origExpr_3588_);
return v___x_3722_;
}
}
}
}
else
{
lean_object* v___x_3757_; 
lean_dec_ref(v___x_3609_);
lean_dec_ref(v_origExpr_3588_);
v___x_3757_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkBoolConst___redArg(v___x_3613_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3757_) == 0)
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3766_; 
v_a_3758_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3760_ = v___x_3757_;
v_isShared_3761_ = v_isSharedCheck_3766_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3757_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3766_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3762_; lean_object* v___x_3764_; 
v___x_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3762_, 0, v_a_3758_);
if (v_isShared_3761_ == 0)
{
lean_ctor_set(v___x_3760_, 0, v___x_3762_);
v___x_3764_ = v___x_3760_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v___x_3762_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
else
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
v_a_3767_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3769_ = v___x_3757_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3757_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_a_3767_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
}
else
{
uint8_t v___x_3775_; lean_object* v___x_3776_; 
lean_dec_ref(v___x_3609_);
lean_dec_ref(v_origExpr_3588_);
v___x_3775_ = 0;
v___x_3776_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_mkBoolConst___redArg(v___x_3775_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3785_; 
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3779_ = v___x_3776_;
v_isShared_3780_ = v_isSharedCheck_3785_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3776_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3785_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3781_; lean_object* v___x_3783_; 
v___x_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3781_, 0, v_a_3777_);
if (v_isShared_3780_ == 0)
{
lean_ctor_set(v___x_3779_, 0, v___x_3781_);
v___x_3783_ = v___x_3779_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v___x_3781_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
else
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3793_; 
v_a_3786_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3788_ = v___x_3776_;
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v___x_3776_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3791_; 
if (v_isShared_3789_ == 0)
{
v___x_3791_ = v___x_3788_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3786_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
}
}
}
else
{
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3801_; 
lean_dec_ref(v_origExpr_3588_);
v_a_3794_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3796_ = v___x_3607_;
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v___x_3607_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v_a_3794_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
}
else
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
lean_dec_ref(v_origExpr_3588_);
v_a_3802_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3804_ = v___x_3606_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3606_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
v___jp_3602_:
{
lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3603_ = lean_box(0);
v___x_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
return v___x_3604_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_boolAtom(lean_object* v_t_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_){
_start:
{
lean_object* v___x_3824_; 
v___x_3824_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom(v_t_3810_, v_a_3811_, v_a_3812_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_, v_a_3822_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3858_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3827_ = v___x_3824_;
v_isShared_3828_ = v_isSharedCheck_3858_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3824_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3858_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
if (lean_obj_tag(v_a_3825_) == 1)
{
lean_object* v_val_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3853_; 
lean_del_object(v___x_3827_);
v_val_3829_ = lean_ctor_get(v_a_3825_, 0);
v_isSharedCheck_3853_ = !lean_is_exclusive(v_a_3825_);
if (v_isSharedCheck_3853_ == 0)
{
v___x_3831_ = v_a_3825_;
v_isShared_3832_ = v_isSharedCheck_3853_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_val_3829_);
lean_dec(v_a_3825_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3853_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3833_; 
v___x_3833_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_ofPred___redArg(v_val_3829_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_, v_a_3822_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3844_; 
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3836_ = v___x_3833_;
v_isShared_3837_ = v_isSharedCheck_3844_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_a_3834_);
lean_dec(v___x_3833_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3844_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3839_; 
if (v_isShared_3832_ == 0)
{
lean_ctor_set(v___x_3831_, 0, v_a_3834_);
v___x_3839_ = v___x_3831_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_a_3834_);
v___x_3839_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v___x_3841_; 
if (v_isShared_3837_ == 0)
{
lean_ctor_set(v___x_3836_, 0, v___x_3839_);
v___x_3841_ = v___x_3836_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v___x_3839_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
}
else
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3852_; 
lean_del_object(v___x_3831_);
v_a_3845_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3847_ = v___x_3833_;
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3833_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3845_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
}
}
}
}
}
else
{
lean_object* v___x_3854_; lean_object* v___x_3856_; 
lean_dec(v_a_3825_);
v___x_3854_ = lean_box(0);
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 0, v___x_3854_);
v___x_3856_ = v___x_3827_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3854_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
return v___x_3856_;
}
}
}
}
else
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3866_; 
v_a_3859_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3861_ = v___x_3824_;
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3824_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v___x_3864_; 
if (v_isShared_3862_ == 0)
{
v___x_3864_ = v___x_3861_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3859_);
v___x_3864_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
return v___x_3864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2(lean_object* v_e_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_, lean_object* v_a_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_){
_start:
{
lean_object* v_a_3882_; lean_object* v___x_3898_; lean_object* v_bvLogicalCache_3899_; lean_object* v___x_3900_; 
v___x_3898_ = lean_st_ref_get(v_a_3868_);
v_bvLogicalCache_3899_ = lean_ctor_get(v___x_3898_, 3);
lean_inc_ref(v_bvLogicalCache_3899_);
lean_dec(v___x_3898_);
v___x_3900_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___redArg(v_bvLogicalCache_3899_, v_e_3867_);
lean_dec_ref(v_bvLogicalCache_3899_);
if (lean_obj_tag(v___x_3900_) == 0)
{
lean_object* v___x_3901_; 
lean_inc_ref(v_e_3867_);
v___x_3901_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go(v_e_3867_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_, v_a_3879_);
if (lean_obj_tag(v___x_3901_) == 0)
{
lean_object* v_a_3902_; 
v_a_3902_ = lean_ctor_get(v___x_3901_, 0);
lean_inc(v_a_3902_);
lean_dec_ref_known(v___x_3901_, 1);
if (lean_obj_tag(v_a_3902_) == 0)
{
lean_object* v___x_3903_; 
lean_inc_ref(v_e_3867_);
v___x_3903_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_boolAtom(v_e_3867_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_, v_a_3879_);
if (lean_obj_tag(v___x_3903_) == 0)
{
lean_object* v_a_3904_; 
v_a_3904_ = lean_ctor_get(v___x_3903_, 0);
lean_inc(v_a_3904_);
lean_dec_ref_known(v___x_3903_, 1);
v_a_3882_ = v_a_3904_;
goto v___jp_3881_;
}
else
{
lean_dec_ref(v_e_3867_);
return v___x_3903_;
}
}
else
{
v_a_3882_ = v_a_3902_;
goto v___jp_3881_;
}
}
else
{
lean_dec_ref(v_e_3867_);
return v___x_3901_;
}
}
else
{
lean_object* v_val_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
lean_dec_ref(v_e_3867_);
v_val_3905_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3900_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_val_3905_);
lean_dec(v___x_3900_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
lean_ctor_set_tag(v___x_3907_, 0);
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_val_3905_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
}
v___jp_3881_:
{
lean_object* v___x_3883_; lean_object* v_lemmas_3884_; lean_object* v_bvExprCache_3885_; lean_object* v_bvPredCache_3886_; lean_object* v_bvLogicalCache_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3897_; 
v___x_3883_ = lean_st_ref_take(v_a_3868_);
v_lemmas_3884_ = lean_ctor_get(v___x_3883_, 0);
v_bvExprCache_3885_ = lean_ctor_get(v___x_3883_, 1);
v_bvPredCache_3886_ = lean_ctor_get(v___x_3883_, 2);
v_bvLogicalCache_3887_ = lean_ctor_get(v___x_3883_, 3);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3883_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3889_ = v___x_3883_;
v_isShared_3890_ = v_isSharedCheck_3897_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_bvLogicalCache_3887_);
lean_inc(v_bvPredCache_3886_);
lean_inc(v_bvExprCache_3885_);
lean_inc(v_lemmas_3884_);
lean_dec(v___x_3883_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3897_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3891_; lean_object* v___x_3893_; 
lean_inc(v_a_3882_);
v___x_3891_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17___redArg(v_bvLogicalCache_3887_, v_e_3867_, v_a_3882_);
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 3, v___x_3891_);
v___x_3893_ = v___x_3889_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_lemmas_3884_);
lean_ctor_set(v_reuseFailAlloc_3896_, 1, v_bvExprCache_3885_);
lean_ctor_set(v_reuseFailAlloc_3896_, 2, v_bvPredCache_3886_);
lean_ctor_set(v_reuseFailAlloc_3896_, 3, v___x_3891_);
v___x_3893_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = lean_st_ref_put(v_a_3868_, v___x_3893_);
v___x_3895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3895_, 0, v_a_3882_);
return v___x_3895_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(lean_object* v_origExpr_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_){
_start:
{
lean_object* v___x_3927_; 
v___x_3927_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2(v_origExpr_3913_, v_a_3914_, v_a_3915_, v_a_3916_, v_a_3917_, v_a_3918_, v_a_3919_, v_a_3920_, v_a_3921_, v_a_3922_, v_a_3923_, v_a_3924_, v_a_3925_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of(lean_object* v_origExpr_3928_, lean_object* v_a_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(v_origExpr_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_spec__6(lean_object* v_as_3943_, size_t v_i_3944_, size_t v_stop_3945_, lean_object* v_b_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_){
_start:
{
lean_object* v_a_3961_; uint8_t v___x_3967_; 
v___x_3967_ = lean_usize_dec_eq(v_i_3944_, v_stop_3945_);
if (v___x_3967_ == 0)
{
lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3968_ = lean_array_uget_borrowed(v_as_3943_, v_i_3944_);
lean_inc(v___x_3968_);
v___x_3969_ = l_Lean_Meta_Tactic_BVDecide_mkBoolAtomWrapper(v___x_3968_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_, v___y_3958_);
if (lean_obj_tag(v___x_3969_) == 0)
{
lean_object* v_a_3970_; lean_object* v___x_3971_; 
v_a_3970_ = lean_ctor_get(v___x_3969_, 0);
lean_inc(v_a_3970_);
lean_dec_ref_known(v___x_3969_, 1);
v___x_3971_ = l_Lean_Meta_Tactic_BVDecide_ReifyM_isAtom___redArg(v___x_3968_, v___y_3949_);
if (lean_obj_tag(v___x_3971_) == 0)
{
lean_object* v_a_3972_; uint8_t v___x_3973_; 
v_a_3972_ = lean_ctor_get(v___x_3971_, 0);
lean_inc(v_a_3972_);
lean_dec_ref_known(v___x_3971_, 1);
v___x_3973_ = lean_unbox(v_a_3972_);
lean_dec(v_a_3972_);
if (v___x_3973_ == 0)
{
lean_object* v___x_3974_; 
v___x_3974_ = l_Lean_Meta_Tactic_BVDecide_ReifyM_isAtom___redArg(v_a_3970_, v___y_3949_);
lean_dec(v_a_3970_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; uint8_t v___x_3976_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
lean_inc(v_a_3975_);
lean_dec_ref_known(v___x_3974_, 1);
v___x_3976_ = lean_unbox(v_a_3975_);
lean_dec(v_a_3975_);
if (v___x_3976_ == 0)
{
lean_object* v___x_3977_; 
lean_inc(v___x_3968_);
v___x_3977_ = l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg(v___x_3968_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_, v___y_3958_);
if (lean_obj_tag(v___x_3977_) == 0)
{
lean_object* v_a_3978_; 
v_a_3978_ = lean_ctor_get(v___x_3977_, 0);
lean_inc(v_a_3978_);
lean_dec_ref_known(v___x_3977_, 1);
if (lean_obj_tag(v_a_3978_) == 1)
{
lean_object* v___x_3979_; lean_object* v___x_3980_; 
lean_dec_ref_known(v_a_3978_, 1);
v___x_3979_ = lean_box(0);
lean_inc(v___x_3968_);
v___x_3980_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of(v___x_3968_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_, v___y_3958_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_dec_ref_known(v___x_3980_, 1);
v_a_3961_ = v___x_3979_;
goto v___jp_3960_;
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3988_; 
v_a_3981_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3983_ = v___x_3980_;
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3980_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3986_; 
if (v_isShared_3984_ == 0)
{
v___x_3986_ = v___x_3983_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3987_; 
v_reuseFailAlloc_3987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3987_, 0, v_a_3981_);
v___x_3986_ = v_reuseFailAlloc_3987_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
return v___x_3986_;
}
}
}
}
else
{
lean_object* v___x_3989_; 
lean_dec(v_a_3978_);
lean_inc(v___x_3968_);
v___x_3989_ = l_Lean_Meta_Tactic_BVDecide_isValidBoolAtom___redArg(v___x_3968_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_, v___y_3958_);
if (lean_obj_tag(v___x_3989_) == 0)
{
lean_object* v_a_3990_; uint8_t v___x_3991_; 
v_a_3990_ = lean_ctor_get(v___x_3989_, 0);
lean_inc(v_a_3990_);
lean_dec_ref_known(v___x_3989_, 1);
v___x_3991_ = lean_unbox(v_a_3990_);
lean_dec(v_a_3990_);
if (v___x_3991_ == 0)
{
goto v___jp_3965_;
}
else
{
lean_object* v___x_3992_; lean_object* v___x_3993_; 
v___x_3992_ = lean_box(0);
lean_inc(v___x_3968_);
v___x_3993_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of(v___x_3968_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_, v___y_3958_);
if (lean_obj_tag(v___x_3993_) == 0)
{
lean_dec_ref_known(v___x_3993_, 1);
v_a_3961_ = v___x_3992_;
goto v___jp_3960_;
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
v_a_3994_ = lean_ctor_get(v___x_3993_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3993_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3993_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3993_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
}
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4009_; 
v_a_4002_ = lean_ctor_get(v___x_3989_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3989_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4004_ = v___x_3989_;
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_a_4002_);
lean_dec(v___x_3989_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4007_; 
if (v_isShared_4005_ == 0)
{
v___x_4007_ = v___x_4004_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_a_4002_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
v_a_4010_ = lean_ctor_get(v___x_3977_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_3977_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_3977_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_3977_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
}
else
{
goto v___jp_3965_;
}
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
v_a_4018_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_3974_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_3974_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
else
{
lean_dec(v_a_3970_);
goto v___jp_3965_;
}
}
else
{
lean_object* v_a_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4033_; 
lean_dec(v_a_3970_);
v_a_4026_ = lean_ctor_get(v___x_3971_, 0);
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_3971_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4028_ = v___x_3971_;
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_a_4026_);
lean_dec(v___x_3971_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4031_; 
if (v_isShared_4029_ == 0)
{
v___x_4031_ = v___x_4028_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_a_4026_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
}
else
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4041_; 
v_a_4034_ = lean_ctor_get(v___x_3969_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_3969_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4036_ = v___x_3969_;
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_3969_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4039_; 
if (v_isShared_4037_ == 0)
{
v___x_4039_ = v___x_4036_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v_a_4034_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
}
else
{
lean_object* v___x_4042_; 
v___x_4042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4042_, 0, v_b_3946_);
return v___x_4042_;
}
v___jp_3960_:
{
size_t v___x_3962_; size_t v___x_3963_; 
v___x_3962_ = ((size_t)1ULL);
v___x_3963_ = lean_usize_add(v_i_3944_, v___x_3962_);
v_i_3944_ = v___x_3963_;
v_b_3946_ = v_a_3961_;
goto _start;
}
v___jp_3965_:
{
lean_object* v___x_3966_; 
v___x_3966_ = lean_box(0);
v_a_3961_ = v___x_3966_;
goto v___jp_3960_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom(lean_object* v_e_4043_, lean_object* v_width_4044_, uint8_t v_synthetic_4045_, lean_object* v_a_4046_, lean_object* v_a_4047_, lean_object* v_a_4048_, lean_object* v_a_4049_, lean_object* v_a_4050_, lean_object* v_a_4051_, lean_object* v_a_4052_, lean_object* v_a_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_){
_start:
{
lean_object* v___x_4059_; 
lean_inc_ref(v_e_4043_);
v___x_4059_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_checkTheoryAtom(v_synthetic_4045_, v_e_4043_, v_a_4046_, v_a_4047_, v_a_4048_, v_a_4049_, v_a_4050_, v_a_4051_, v_a_4052_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_object* v_a_4060_; lean_object* v___x_4061_; 
v_a_4060_ = lean_ctor_get(v___x_4059_, 0);
lean_inc(v_a_4060_);
lean_dec_ref_known(v___x_4059_, 1);
lean_inc(v_width_4044_);
v___x_4061_ = l_Lean_Meta_Tactic_BVDecide_ReifyM_lookup(v_e_4043_, v_width_4044_, v_synthetic_4045_, v_a_4047_, v_a_4048_, v_a_4049_, v_a_4050_, v_a_4051_, v_a_4052_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_);
if (lean_obj_tag(v___x_4061_) == 0)
{
lean_object* v_a_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; 
v_a_4062_ = lean_ctor_get(v___x_4061_, 0);
lean_inc_n(v_a_4062_, 2);
lean_dec_ref_known(v___x_4061_, 1);
v___x_4063_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__2);
lean_inc(v_width_4044_);
v___x_4064_ = l_Lean_mkNatLit(v_width_4044_);
v___x_4065_ = l_Lean_mkNatLit(v_a_4062_);
v___x_4066_ = l_Lean_mkAppB(v___x_4063_, v___x_4064_, v___x_4065_);
v___x_4067_ = l_Lean_Meta_Sym_shareCommonInc(v___x_4066_, v_a_4052_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_);
if (lean_obj_tag(v___x_4067_) == 0)
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4101_; 
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4067_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4070_ = v___x_4067_;
v_isShared_4071_ = v_isSharedCheck_4101_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v___x_4067_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4101_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___f_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; uint8_t v___x_4077_; 
v___f_4072_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___closed__3));
lean_inc(v_width_4044_);
v___x_4073_ = l_Std_Tactic_BVDecide_BVExpr_var___override(v_width_4044_, v_a_4062_);
lean_inc(v_a_4068_);
v___x_4074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4074_, 0, v_width_4044_);
lean_ctor_set(v___x_4074_, 1, v___x_4073_);
lean_ctor_set(v___x_4074_, 2, v_a_4068_);
lean_ctor_set(v___x_4074_, 3, v___f_4072_);
lean_ctor_set(v___x_4074_, 4, v_a_4068_);
v___x_4075_ = lean_unsigned_to_nat(0u);
v___x_4076_ = lean_array_get_size(v_a_4060_);
v___x_4077_ = lean_nat_dec_lt(v___x_4075_, v___x_4076_);
if (v___x_4077_ == 0)
{
lean_object* v___x_4079_; 
lean_dec(v_a_4060_);
if (v_isShared_4071_ == 0)
{
lean_ctor_set(v___x_4070_, 0, v___x_4074_);
v___x_4079_ = v___x_4070_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4080_; 
v_reuseFailAlloc_4080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4080_, 0, v___x_4074_);
v___x_4079_ = v_reuseFailAlloc_4080_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
return v___x_4079_;
}
}
else
{
lean_object* v___x_4081_; size_t v___x_4082_; size_t v___x_4083_; lean_object* v___x_4084_; 
lean_del_object(v___x_4070_);
v___x_4081_ = lean_box(0);
v___x_4082_ = ((size_t)0ULL);
v___x_4083_ = lean_usize_of_nat(v___x_4076_);
v___x_4084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_spec__6(v_a_4060_, v___x_4082_, v___x_4083_, v___x_4081_, v_a_4046_, v_a_4047_, v_a_4048_, v_a_4049_, v_a_4050_, v_a_4051_, v_a_4052_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_);
lean_dec(v_a_4060_);
if (lean_obj_tag(v___x_4084_) == 0)
{
lean_object* v___x_4086_; uint8_t v_isShared_4087_; uint8_t v_isSharedCheck_4091_; 
v_isSharedCheck_4091_ = !lean_is_exclusive(v___x_4084_);
if (v_isSharedCheck_4091_ == 0)
{
lean_object* v_unused_4092_; 
v_unused_4092_ = lean_ctor_get(v___x_4084_, 0);
lean_dec(v_unused_4092_);
v___x_4086_ = v___x_4084_;
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
else
{
lean_dec(v___x_4084_);
v___x_4086_ = lean_box(0);
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
v_resetjp_4085_:
{
lean_object* v___x_4089_; 
if (v_isShared_4087_ == 0)
{
lean_ctor_set(v___x_4086_, 0, v___x_4074_);
v___x_4089_ = v___x_4086_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v___x_4074_);
v___x_4089_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
return v___x_4089_;
}
}
}
else
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4100_; 
lean_dec_ref_known(v___x_4074_, 5);
v_a_4093_ = lean_ctor_get(v___x_4084_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4084_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4095_ = v___x_4084_;
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4084_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4098_; 
if (v_isShared_4096_ == 0)
{
v___x_4098_ = v___x_4095_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_a_4093_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
}
}
}
else
{
lean_object* v_a_4102_; lean_object* v___x_4104_; uint8_t v_isShared_4105_; uint8_t v_isSharedCheck_4109_; 
lean_dec(v_a_4062_);
lean_dec(v_a_4060_);
lean_dec(v_width_4044_);
v_a_4102_ = lean_ctor_get(v___x_4067_, 0);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_4067_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4104_ = v___x_4067_;
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
else
{
lean_inc(v_a_4102_);
lean_dec(v___x_4067_);
v___x_4104_ = lean_box(0);
v_isShared_4105_ = v_isSharedCheck_4109_;
goto v_resetjp_4103_;
}
v_resetjp_4103_:
{
lean_object* v___x_4107_; 
if (v_isShared_4105_ == 0)
{
v___x_4107_ = v___x_4104_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_a_4102_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
}
else
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4117_; 
lean_dec(v_a_4060_);
lean_dec(v_width_4044_);
v_a_4110_ = lean_ctor_get(v___x_4061_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v___x_4061_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4112_ = v___x_4061_;
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v___x_4061_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
lean_object* v___x_4115_; 
if (v_isShared_4113_ == 0)
{
v___x_4115_ = v___x_4112_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v_a_4110_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
}
}
else
{
lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4125_; 
lean_dec(v_width_4044_);
lean_dec_ref(v_e_4043_);
v_a_4118_ = lean_ctor_get(v___x_4059_, 0);
v_isSharedCheck_4125_ = !lean_is_exclusive(v___x_4059_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4120_ = v___x_4059_;
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_dec(v___x_4059_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
lean_object* v___x_4123_; 
if (v_isShared_4121_ == 0)
{
v___x_4123_ = v___x_4120_;
goto v_reusejp_4122_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_a_4118_);
v___x_4123_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4122_;
}
v_reusejp_4122_:
{
return v___x_4123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_bitVecAtom(lean_object* v_e_4126_, uint8_t v_synthetic_4127_, lean_object* v_a_4128_, lean_object* v_a_4129_, lean_object* v_a_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v___x_4141_; 
lean_inc_ref(v_e_4126_);
v___x_4141_ = l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg(v_e_4126_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_);
if (lean_obj_tag(v___x_4141_) == 0)
{
lean_object* v_a_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4175_; 
v_a_4142_ = lean_ctor_get(v___x_4141_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v___x_4141_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4144_ = v___x_4141_;
v_isShared_4145_ = v_isSharedCheck_4175_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_a_4142_);
lean_dec(v___x_4141_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4175_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
if (lean_obj_tag(v_a_4142_) == 1)
{
lean_object* v_val_4146_; lean_object* v___x_4148_; uint8_t v_isShared_4149_; uint8_t v_isSharedCheck_4170_; 
lean_del_object(v___x_4144_);
v_val_4146_ = lean_ctor_get(v_a_4142_, 0);
v_isSharedCheck_4170_ = !lean_is_exclusive(v_a_4142_);
if (v_isSharedCheck_4170_ == 0)
{
v___x_4148_ = v_a_4142_;
v_isShared_4149_ = v_isSharedCheck_4170_;
goto v_resetjp_4147_;
}
else
{
lean_inc(v_val_4146_);
lean_dec(v_a_4142_);
v___x_4148_ = lean_box(0);
v_isShared_4149_ = v_isSharedCheck_4170_;
goto v_resetjp_4147_;
}
v_resetjp_4147_:
{
lean_object* v___x_4150_; 
v___x_4150_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom(v_e_4126_, v_val_4146_, v_synthetic_4127_, v_a_4128_, v_a_4129_, v_a_4130_, v_a_4131_, v_a_4132_, v_a_4133_, v_a_4134_, v_a_4135_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_);
if (lean_obj_tag(v___x_4150_) == 0)
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4161_; 
v_a_4151_ = lean_ctor_get(v___x_4150_, 0);
v_isSharedCheck_4161_ = !lean_is_exclusive(v___x_4150_);
if (v_isSharedCheck_4161_ == 0)
{
v___x_4153_ = v___x_4150_;
v_isShared_4154_ = v_isSharedCheck_4161_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v___x_4150_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4161_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4149_ == 0)
{
lean_ctor_set(v___x_4148_, 0, v_a_4151_);
v___x_4156_ = v___x_4148_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4160_; 
v_reuseFailAlloc_4160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4160_, 0, v_a_4151_);
v___x_4156_ = v_reuseFailAlloc_4160_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
lean_object* v___x_4158_; 
if (v_isShared_4154_ == 0)
{
lean_ctor_set(v___x_4153_, 0, v___x_4156_);
v___x_4158_ = v___x_4153_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v___x_4156_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
return v___x_4158_;
}
}
}
}
else
{
lean_object* v_a_4162_; lean_object* v___x_4164_; uint8_t v_isShared_4165_; uint8_t v_isSharedCheck_4169_; 
lean_del_object(v___x_4148_);
v_a_4162_ = lean_ctor_get(v___x_4150_, 0);
v_isSharedCheck_4169_ = !lean_is_exclusive(v___x_4150_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4164_ = v___x_4150_;
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
else
{
lean_inc(v_a_4162_);
lean_dec(v___x_4150_);
v___x_4164_ = lean_box(0);
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
v_resetjp_4163_:
{
lean_object* v___x_4167_; 
if (v_isShared_4165_ == 0)
{
v___x_4167_ = v___x_4164_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_a_4162_);
v___x_4167_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
return v___x_4167_;
}
}
}
}
}
else
{
lean_object* v___x_4171_; lean_object* v___x_4173_; 
lean_dec(v_a_4142_);
lean_dec_ref(v_e_4126_);
v___x_4171_ = lean_box(0);
if (v_isShared_4145_ == 0)
{
lean_ctor_set(v___x_4144_, 0, v___x_4171_);
v___x_4173_ = v___x_4144_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v___x_4171_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
return v___x_4173_;
}
}
}
}
else
{
lean_object* v_a_4176_; lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4183_; 
lean_dec_ref(v_e_4126_);
v_a_4176_ = lean_ctor_get(v___x_4141_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v___x_4141_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4178_ = v___x_4141_;
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
else
{
lean_inc(v_a_4176_);
lean_dec(v___x_4141_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v___x_4181_; 
if (v_isShared_4179_ == 0)
{
v___x_4181_ = v___x_4178_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_a_4176_);
v___x_4181_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
return v___x_4181_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__5(void){
_start:
{
lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; 
v___x_4199_ = lean_box(0);
v___x_4200_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__4));
v___x_4201_ = l_Lean_mkConst(v___x_4200_, v___x_4199_);
return v___x_4201_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__3(void){
_start:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; 
v___x_4209_ = lean_box(0);
v___x_4210_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__2));
v___x_4211_ = l_Lean_mkConst(v___x_4210_, v___x_4209_);
return v___x_4211_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__6(void){
_start:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4218_ = lean_box(0);
v___x_4219_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5));
v___x_4220_ = l_Lean_mkConst(v___x_4219_, v___x_4218_);
return v___x_4220_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__9(void){
_start:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; 
v___x_4227_ = lean_box(0);
v___x_4228_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8));
v___x_4229_ = l_Lean_mkConst(v___x_4228_, v___x_4227_);
return v___x_4229_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__12(void){
_start:
{
lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; 
v___x_4237_ = lean_box(0);
v___x_4238_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11));
v___x_4239_ = l_Lean_mkConst(v___x_4238_, v___x_4237_);
return v___x_4239_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__15(void){
_start:
{
lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
v___x_4246_ = lean_box(0);
v___x_4247_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__14));
v___x_4248_ = l_Lean_mkConst(v___x_4247_, v___x_4246_);
return v___x_4248_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__18(void){
_start:
{
lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; 
v___x_4255_ = lean_box(0);
v___x_4256_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__17));
v___x_4257_ = l_Lean_mkConst(v___x_4256_, v___x_4255_);
return v___x_4257_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__21(void){
_start:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; 
v___x_4264_ = lean_box(0);
v___x_4265_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__20));
v___x_4266_ = l_Lean_mkConst(v___x_4265_, v___x_4264_);
return v___x_4266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection(lean_object* v_innerExpr_4267_, lean_object* v_op_4268_, lean_object* v_congrThm_4269_, lean_object* v_origExpr_4270_, lean_object* v_a_4271_, lean_object* v_a_4272_, lean_object* v_a_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_){
_start:
{
lean_object* v___x_4284_; 
lean_inc_ref(v_innerExpr_4267_);
v___x_4284_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_innerExpr_4267_, v_a_4271_, v_a_4272_, v_a_4273_, v_a_4274_, v_a_4275_, v_a_4276_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_, v_a_4281_, v_a_4282_);
if (lean_obj_tag(v___x_4284_) == 0)
{
lean_object* v_a_4285_; lean_object* v___x_4287_; uint8_t v_isShared_4288_; uint8_t v_isSharedCheck_4347_; 
v_a_4285_ = lean_ctor_get(v___x_4284_, 0);
v_isSharedCheck_4347_ = !lean_is_exclusive(v___x_4284_);
if (v_isSharedCheck_4347_ == 0)
{
v___x_4287_ = v___x_4284_;
v_isShared_4288_ = v_isSharedCheck_4347_;
goto v_resetjp_4286_;
}
else
{
lean_inc(v_a_4285_);
lean_dec(v___x_4284_);
v___x_4287_ = lean_box(0);
v_isShared_4288_ = v_isSharedCheck_4347_;
goto v_resetjp_4286_;
}
v_resetjp_4286_:
{
if (lean_obj_tag(v_a_4285_) == 1)
{
lean_object* v_val_4289_; lean_object* v___x_4291_; uint8_t v_isShared_4292_; uint8_t v_isSharedCheck_4342_; 
lean_del_object(v___x_4287_);
v_val_4289_ = lean_ctor_get(v_a_4285_, 0);
v_isSharedCheck_4342_ = !lean_is_exclusive(v_a_4285_);
if (v_isSharedCheck_4342_ == 0)
{
v___x_4291_ = v_a_4285_;
v_isShared_4292_ = v_isSharedCheck_4342_;
goto v_resetjp_4290_;
}
else
{
lean_inc(v_val_4289_);
lean_dec(v_a_4285_);
v___x_4291_ = lean_box(0);
v_isShared_4292_ = v_isSharedCheck_4342_;
goto v_resetjp_4290_;
}
v_resetjp_4290_:
{
lean_object* v_width_4293_; lean_object* v_bvExpr_4294_; lean_object* v_expr_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___y_4301_; 
v_width_4293_ = lean_ctor_get(v_val_4289_, 0);
lean_inc_n(v_width_4293_, 3);
v_bvExpr_4294_ = lean_ctor_get(v_val_4289_, 1);
v_expr_4295_ = lean_ctor_get(v_val_4289_, 4);
lean_inc_ref(v_bvExpr_4294_);
lean_inc(v_op_4268_);
v___x_4296_ = l_Std_Tactic_BVDecide_BVExpr_un___override(v_width_4293_, v_op_4268_, v_bvExpr_4294_);
v___x_4297_ = lean_box(0);
v___x_4298_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__5, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__5_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__5);
v___x_4299_ = l_Lean_mkNatLit(v_width_4293_);
switch(lean_obj_tag(v_op_4268_))
{
case 0:
{
lean_object* v___x_4326_; 
v___x_4326_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__3);
v___y_4301_ = v___x_4326_;
goto v___jp_4300_;
}
case 1:
{
lean_object* v_n_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; 
v_n_4327_ = lean_ctor_get(v_op_4268_, 0);
lean_inc(v_n_4327_);
lean_dec_ref_known(v_op_4268_, 1);
v___x_4328_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__6);
v___x_4329_ = l_Lean_mkNatLit(v_n_4327_);
v___x_4330_ = l_Lean_Expr_app___override(v___x_4328_, v___x_4329_);
v___y_4301_ = v___x_4330_;
goto v___jp_4300_;
}
case 2:
{
lean_object* v_n_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; 
v_n_4331_ = lean_ctor_get(v_op_4268_, 0);
lean_inc(v_n_4331_);
lean_dec_ref_known(v_op_4268_, 1);
v___x_4332_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__9, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__9_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__9);
v___x_4333_ = l_Lean_mkNatLit(v_n_4331_);
v___x_4334_ = l_Lean_Expr_app___override(v___x_4332_, v___x_4333_);
v___y_4301_ = v___x_4334_;
goto v___jp_4300_;
}
case 3:
{
lean_object* v_n_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; 
v_n_4335_ = lean_ctor_get(v_op_4268_, 0);
lean_inc(v_n_4335_);
lean_dec_ref_known(v_op_4268_, 1);
v___x_4336_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__12);
v___x_4337_ = l_Lean_mkNatLit(v_n_4335_);
v___x_4338_ = l_Lean_Expr_app___override(v___x_4336_, v___x_4337_);
v___y_4301_ = v___x_4338_;
goto v___jp_4300_;
}
case 4:
{
lean_object* v___x_4339_; 
v___x_4339_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__15, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__15_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__15);
v___y_4301_ = v___x_4339_;
goto v___jp_4300_;
}
case 5:
{
lean_object* v___x_4340_; 
v___x_4340_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__18, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__18_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__18);
v___y_4301_ = v___x_4340_;
goto v___jp_4300_;
}
default: 
{
lean_object* v___x_4341_; 
v___x_4341_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__21, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__21_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__21);
v___y_4301_ = v___x_4341_;
goto v___jp_4300_;
}
}
v___jp_4300_:
{
lean_object* v___x_4302_; lean_object* v___x_4303_; 
lean_inc_ref(v_expr_4295_);
v___x_4302_ = l_Lean_mkApp3(v___x_4298_, v___x_4299_, v___y_4301_, v_expr_4295_);
v___x_4303_ = l_Lean_Meta_Sym_shareCommonInc(v___x_4302_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_, v_a_4281_, v_a_4282_);
if (lean_obj_tag(v___x_4303_) == 0)
{
lean_object* v_a_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4317_; 
v_a_4304_ = lean_ctor_get(v___x_4303_, 0);
v_isSharedCheck_4317_ = !lean_is_exclusive(v___x_4303_);
if (v_isSharedCheck_4317_ == 0)
{
v___x_4306_ = v___x_4303_;
v_isShared_4307_ = v_isSharedCheck_4317_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_a_4304_);
lean_dec(v___x_4303_);
v___x_4306_ = lean_box(0);
v_isShared_4307_ = v_isSharedCheck_4317_;
goto v_resetjp_4305_;
}
v_resetjp_4305_:
{
lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4312_; 
v___x_4308_ = l_Lean_mkConst(v_congrThm_4269_, v___x_4297_);
v___x_4309_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryCongrProof___boxed), 15, 3);
lean_closure_set(v___x_4309_, 0, v_val_4289_);
lean_closure_set(v___x_4309_, 1, v_innerExpr_4267_);
lean_closure_set(v___x_4309_, 2, v___x_4308_);
v___x_4310_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4310_, 0, v_width_4293_);
lean_ctor_set(v___x_4310_, 1, v___x_4296_);
lean_ctor_set(v___x_4310_, 2, v_origExpr_4270_);
lean_ctor_set(v___x_4310_, 3, v___x_4309_);
lean_ctor_set(v___x_4310_, 4, v_a_4304_);
if (v_isShared_4292_ == 0)
{
lean_ctor_set(v___x_4291_, 0, v___x_4310_);
v___x_4312_ = v___x_4291_;
goto v_reusejp_4311_;
}
else
{
lean_object* v_reuseFailAlloc_4316_; 
v_reuseFailAlloc_4316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4316_, 0, v___x_4310_);
v___x_4312_ = v_reuseFailAlloc_4316_;
goto v_reusejp_4311_;
}
v_reusejp_4311_:
{
lean_object* v___x_4314_; 
if (v_isShared_4307_ == 0)
{
lean_ctor_set(v___x_4306_, 0, v___x_4312_);
v___x_4314_ = v___x_4306_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v___x_4312_);
v___x_4314_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
return v___x_4314_;
}
}
}
}
else
{
lean_object* v_a_4318_; lean_object* v___x_4320_; uint8_t v_isShared_4321_; uint8_t v_isSharedCheck_4325_; 
lean_dec_ref(v___x_4296_);
lean_dec(v_width_4293_);
lean_del_object(v___x_4291_);
lean_dec(v_val_4289_);
lean_dec_ref(v_origExpr_4270_);
lean_dec(v_congrThm_4269_);
lean_dec_ref(v_innerExpr_4267_);
v_a_4318_ = lean_ctor_get(v___x_4303_, 0);
v_isSharedCheck_4325_ = !lean_is_exclusive(v___x_4303_);
if (v_isSharedCheck_4325_ == 0)
{
v___x_4320_ = v___x_4303_;
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
else
{
lean_inc(v_a_4318_);
lean_dec(v___x_4303_);
v___x_4320_ = lean_box(0);
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
v_resetjp_4319_:
{
lean_object* v___x_4323_; 
if (v_isShared_4321_ == 0)
{
v___x_4323_ = v___x_4320_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v_a_4318_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
return v___x_4323_;
}
}
}
}
}
}
else
{
lean_object* v___x_4343_; lean_object* v___x_4345_; 
lean_dec(v_a_4285_);
lean_dec_ref(v_origExpr_4270_);
lean_dec(v_congrThm_4269_);
lean_dec(v_op_4268_);
lean_dec_ref(v_innerExpr_4267_);
v___x_4343_ = lean_box(0);
if (v_isShared_4288_ == 0)
{
lean_ctor_set(v___x_4287_, 0, v___x_4343_);
v___x_4345_ = v___x_4287_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4346_; 
v_reuseFailAlloc_4346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4346_, 0, v___x_4343_);
v___x_4345_ = v_reuseFailAlloc_4346_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
return v___x_4345_;
}
}
}
}
else
{
lean_dec_ref(v_origExpr_4270_);
lean_dec(v_congrThm_4269_);
lean_dec(v_op_4268_);
lean_dec_ref(v_innerExpr_4267_);
return v___x_4284_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection(lean_object* v_distance_4356_, lean_object* v_innerExpr_4357_, lean_object* v_shiftOp_4358_, lean_object* v_shiftOpName_4359_, lean_object* v_congrThm_4360_, lean_object* v_origExpr_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_, lean_object* v_a_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_){
_start:
{
lean_object* v___x_4375_; 
lean_inc_ref(v_innerExpr_4357_);
v___x_4375_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_innerExpr_4357_, v_a_4362_, v_a_4363_, v_a_4364_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_);
if (lean_obj_tag(v___x_4375_) == 0)
{
lean_object* v_a_4376_; lean_object* v___x_4378_; uint8_t v_isShared_4379_; uint8_t v_isSharedCheck_4425_; 
v_a_4376_ = lean_ctor_get(v___x_4375_, 0);
v_isSharedCheck_4425_ = !lean_is_exclusive(v___x_4375_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_4378_ = v___x_4375_;
v_isShared_4379_ = v_isSharedCheck_4425_;
goto v_resetjp_4377_;
}
else
{
lean_inc(v_a_4376_);
lean_dec(v___x_4375_);
v___x_4378_ = lean_box(0);
v_isShared_4379_ = v_isSharedCheck_4425_;
goto v_resetjp_4377_;
}
v_resetjp_4377_:
{
if (lean_obj_tag(v_a_4376_) == 1)
{
lean_object* v_val_4380_; lean_object* v___x_4382_; uint8_t v_isShared_4383_; uint8_t v_isSharedCheck_4420_; 
lean_del_object(v___x_4378_);
v_val_4380_ = lean_ctor_get(v_a_4376_, 0);
v_isSharedCheck_4420_ = !lean_is_exclusive(v_a_4376_);
if (v_isSharedCheck_4420_ == 0)
{
v___x_4382_ = v_a_4376_;
v_isShared_4383_ = v_isSharedCheck_4420_;
goto v_resetjp_4381_;
}
else
{
lean_inc(v_val_4380_);
lean_dec(v_a_4376_);
v___x_4382_ = lean_box(0);
v_isShared_4383_ = v_isSharedCheck_4420_;
goto v_resetjp_4381_;
}
v_resetjp_4381_:
{
lean_object* v_width_4384_; lean_object* v_bvExpr_4385_; lean_object* v_expr_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; 
v_width_4384_ = lean_ctor_get(v_val_4380_, 0);
lean_inc_n(v_width_4384_, 3);
v_bvExpr_4385_ = lean_ctor_get(v_val_4380_, 1);
v_expr_4386_ = lean_ctor_get(v_val_4380_, 4);
lean_inc(v_distance_4356_);
v___x_4387_ = lean_apply_1(v_shiftOp_4358_, v_distance_4356_);
lean_inc_ref(v_bvExpr_4385_);
v___x_4388_ = l_Std_Tactic_BVDecide_BVExpr_un___override(v_width_4384_, v___x_4387_, v_bvExpr_4385_);
v___x_4389_ = lean_box(0);
v___x_4390_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__5, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__5_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__5);
v___x_4391_ = l_Lean_mkNatLit(v_width_4384_);
v___x_4392_ = l_Lean_mkConst(v_shiftOpName_4359_, v___x_4389_);
v___x_4393_ = l_Lean_mkNatLit(v_distance_4356_);
lean_inc_ref(v___x_4393_);
v___x_4394_ = l_Lean_Expr_app___override(v___x_4392_, v___x_4393_);
lean_inc_ref(v_expr_4386_);
v___x_4395_ = l_Lean_mkApp3(v___x_4390_, v___x_4391_, v___x_4394_, v_expr_4386_);
v___x_4396_ = l_Lean_Meta_Sym_shareCommonInc(v___x_4395_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_object* v_a_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4411_; 
v_a_4397_ = lean_ctor_get(v___x_4396_, 0);
v_isSharedCheck_4411_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4411_ == 0)
{
v___x_4399_ = v___x_4396_;
v_isShared_4400_ = v_isSharedCheck_4411_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_a_4397_);
lean_dec(v___x_4396_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4411_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4406_; 
v___x_4401_ = l_Lean_mkConst(v_congrThm_4360_, v___x_4389_);
v___x_4402_ = l_Lean_Expr_app___override(v___x_4401_, v___x_4393_);
v___x_4403_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryCongrProof___boxed), 15, 3);
lean_closure_set(v___x_4403_, 0, v_val_4380_);
lean_closure_set(v___x_4403_, 1, v_innerExpr_4357_);
lean_closure_set(v___x_4403_, 2, v___x_4402_);
v___x_4404_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4404_, 0, v_width_4384_);
lean_ctor_set(v___x_4404_, 1, v___x_4388_);
lean_ctor_set(v___x_4404_, 2, v_origExpr_4361_);
lean_ctor_set(v___x_4404_, 3, v___x_4403_);
lean_ctor_set(v___x_4404_, 4, v_a_4397_);
if (v_isShared_4383_ == 0)
{
lean_ctor_set(v___x_4382_, 0, v___x_4404_);
v___x_4406_ = v___x_4382_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v___x_4404_);
v___x_4406_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
lean_object* v___x_4408_; 
if (v_isShared_4400_ == 0)
{
lean_ctor_set(v___x_4399_, 0, v___x_4406_);
v___x_4408_ = v___x_4399_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v___x_4406_);
v___x_4408_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
return v___x_4408_;
}
}
}
}
else
{
lean_object* v_a_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4419_; 
lean_dec_ref(v___x_4393_);
lean_dec_ref(v___x_4388_);
lean_dec(v_width_4384_);
lean_del_object(v___x_4382_);
lean_dec(v_val_4380_);
lean_dec_ref(v_origExpr_4361_);
lean_dec(v_congrThm_4360_);
lean_dec_ref(v_innerExpr_4357_);
v_a_4412_ = lean_ctor_get(v___x_4396_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4414_ = v___x_4396_;
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_a_4412_);
lean_dec(v___x_4396_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4417_; 
if (v_isShared_4415_ == 0)
{
v___x_4417_ = v___x_4414_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_a_4412_);
v___x_4417_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
return v___x_4417_;
}
}
}
}
}
else
{
lean_object* v___x_4421_; lean_object* v___x_4423_; 
lean_dec(v_a_4376_);
lean_dec_ref(v_origExpr_4361_);
lean_dec(v_congrThm_4360_);
lean_dec(v_shiftOpName_4359_);
lean_dec_ref(v_shiftOp_4358_);
lean_dec_ref(v_innerExpr_4357_);
lean_dec(v_distance_4356_);
v___x_4421_ = lean_box(0);
if (v_isShared_4379_ == 0)
{
lean_ctor_set(v___x_4378_, 0, v___x_4421_);
v___x_4423_ = v___x_4378_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v___x_4421_);
v___x_4423_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
return v___x_4423_;
}
}
}
}
else
{
lean_dec_ref(v_origExpr_4361_);
lean_dec(v_congrThm_4360_);
lean_dec(v_shiftOpName_4359_);
lean_dec_ref(v_shiftOp_4358_);
lean_dec_ref(v_innerExpr_4357_);
lean_dec(v_distance_4356_);
return v___x_4375_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__88(void){
_start:
{
lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
v___x_4432_ = lean_box(0);
v___x_4433_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__87));
v___x_4434_ = l_Lean_mkConst(v___x_4433_, v___x_4432_);
return v___x_4434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_rotateReflection(lean_object* v_distanceExpr_4443_, lean_object* v_innerExpr_4444_, lean_object* v_rotateOp_4445_, lean_object* v_rotateOpName_4446_, lean_object* v_congrThm_4447_, lean_object* v_origExpr_4448_, lean_object* v_a_4449_, lean_object* v_a_4450_, lean_object* v_a_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_, lean_object* v_a_4456_, lean_object* v_a_4457_, lean_object* v_a_4458_, lean_object* v_a_4459_, lean_object* v_a_4460_){
_start:
{
lean_object* v___x_4462_; 
v___x_4462_ = l_Lean_Meta_Sym_getNatValue_x3f(v_distanceExpr_4443_);
if (lean_obj_tag(v___x_4462_) == 1)
{
lean_object* v_val_4463_; lean_object* v___x_4464_; 
v_val_4463_ = lean_ctor_get(v___x_4462_, 0);
lean_inc(v_val_4463_);
lean_dec_ref_known(v___x_4462_, 1);
v___x_4464_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection(v_val_4463_, v_innerExpr_4444_, v_rotateOp_4445_, v_rotateOpName_4446_, v_congrThm_4447_, v_origExpr_4448_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_, v_a_4455_, v_a_4456_, v_a_4457_, v_a_4458_, v_a_4459_, v_a_4460_);
return v___x_4464_;
}
else
{
lean_object* v___x_4465_; lean_object* v___x_4466_; 
lean_dec(v___x_4462_);
lean_dec_ref(v_origExpr_4448_);
lean_dec(v_congrThm_4447_);
lean_dec(v_rotateOpName_4446_);
lean_dec_ref(v_rotateOp_4445_);
lean_dec_ref(v_innerExpr_4444_);
v___x_4465_ = lean_box(0);
v___x_4466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4466_, 0, v___x_4465_);
return v___x_4466_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goBvLit(lean_object* v_x_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_, lean_object* v_a_4478_, lean_object* v_a_4479_, lean_object* v_a_4480_, lean_object* v_a_4481_, lean_object* v_a_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_, lean_object* v_a_4486_, lean_object* v_a_4487_){
_start:
{
lean_object* v___x_4489_; 
v___x_4489_ = l_Lean_Meta_Sym_getBitVecValue_x3f(v_x_4475_);
if (lean_obj_tag(v___x_4489_) == 1)
{
lean_object* v_val_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4516_; 
lean_dec_ref(v_x_4475_);
v_val_4490_ = lean_ctor_get(v___x_4489_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___x_4489_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4492_ = v___x_4489_;
v_isShared_4493_ = v_isSharedCheck_4516_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_val_4490_);
lean_dec(v___x_4489_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4516_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v_n_4494_; lean_object* v_val_4495_; lean_object* v___x_4496_; 
v_n_4494_ = lean_ctor_get(v_val_4490_, 0);
lean_inc(v_n_4494_);
v_val_4495_ = lean_ctor_get(v_val_4490_, 1);
lean_inc(v_val_4495_);
lean_dec(v_val_4490_);
v___x_4496_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_mkBVConst___redArg(v_n_4494_, v_val_4495_, v_a_4482_, v_a_4483_, v_a_4484_, v_a_4485_, v_a_4486_, v_a_4487_);
if (lean_obj_tag(v___x_4496_) == 0)
{
lean_object* v_a_4497_; lean_object* v___x_4499_; uint8_t v_isShared_4500_; uint8_t v_isSharedCheck_4507_; 
v_a_4497_ = lean_ctor_get(v___x_4496_, 0);
v_isSharedCheck_4507_ = !lean_is_exclusive(v___x_4496_);
if (v_isSharedCheck_4507_ == 0)
{
v___x_4499_ = v___x_4496_;
v_isShared_4500_ = v_isSharedCheck_4507_;
goto v_resetjp_4498_;
}
else
{
lean_inc(v_a_4497_);
lean_dec(v___x_4496_);
v___x_4499_ = lean_box(0);
v_isShared_4500_ = v_isSharedCheck_4507_;
goto v_resetjp_4498_;
}
v_resetjp_4498_:
{
lean_object* v___x_4502_; 
if (v_isShared_4493_ == 0)
{
lean_ctor_set(v___x_4492_, 0, v_a_4497_);
v___x_4502_ = v___x_4492_;
goto v_reusejp_4501_;
}
else
{
lean_object* v_reuseFailAlloc_4506_; 
v_reuseFailAlloc_4506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4506_, 0, v_a_4497_);
v___x_4502_ = v_reuseFailAlloc_4506_;
goto v_reusejp_4501_;
}
v_reusejp_4501_:
{
lean_object* v___x_4504_; 
if (v_isShared_4500_ == 0)
{
lean_ctor_set(v___x_4499_, 0, v___x_4502_);
v___x_4504_ = v___x_4499_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v___x_4502_);
v___x_4504_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4503_;
}
v_reusejp_4503_:
{
return v___x_4504_;
}
}
}
}
else
{
lean_object* v_a_4508_; lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4515_; 
lean_del_object(v___x_4492_);
v_a_4508_ = lean_ctor_get(v___x_4496_, 0);
v_isSharedCheck_4515_ = !lean_is_exclusive(v___x_4496_);
if (v_isSharedCheck_4515_ == 0)
{
v___x_4510_ = v___x_4496_;
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
else
{
lean_inc(v_a_4508_);
lean_dec(v___x_4496_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v___x_4513_; 
if (v_isShared_4511_ == 0)
{
v___x_4513_ = v___x_4510_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v_a_4508_);
v___x_4513_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
return v___x_4513_;
}
}
}
}
}
else
{
uint8_t v___x_4517_; lean_object* v___x_4518_; 
lean_dec(v___x_4489_);
v___x_4517_ = 0;
v___x_4518_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_bitVecAtom(v_x_4475_, v___x_4517_, v_a_4476_, v_a_4477_, v_a_4478_, v_a_4479_, v_a_4480_, v_a_4481_, v_a_4482_, v_a_4483_, v_a_4484_, v_a_4485_, v_a_4486_, v_a_4487_);
return v___x_4518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go(lean_object* v_origExpr_4543_, lean_object* v_a_4544_, lean_object* v_a_4545_, lean_object* v_a_4546_, lean_object* v_a_4547_, lean_object* v_a_4548_, lean_object* v_a_4549_, lean_object* v_a_4550_, lean_object* v_a_4551_, lean_object* v_a_4552_, lean_object* v_a_4553_, lean_object* v_a_4554_, lean_object* v_a_4555_){
_start:
{
lean_object* v___f_4572_; lean_object* v___f_4573_; lean_object* v___f_4574_; lean_object* v___f_4575_; lean_object* v___f_4576_; lean_object* v___f_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
v___f_4572_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__0));
v___f_4573_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__1));
v___f_4574_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__2));
v___f_4575_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__3));
v___f_4576_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__4));
v___f_4577_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__5));
v___x_4578_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__0));
v___x_4579_ = l_Lean_Core_checkSystem(v___x_4578_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4579_) == 0)
{
lean_object* v___x_4580_; 
lean_dec_ref_known(v___x_4579_, 1);
lean_inc_ref(v_origExpr_4543_);
v___x_4580_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_origExpr_4543_, v_a_4553_);
if (lean_obj_tag(v___x_4580_) == 0)
{
lean_object* v_a_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_5062_; 
v_a_4581_ = lean_ctor_get(v___x_4580_, 0);
v_isSharedCheck_5062_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_5062_ == 0)
{
v___x_4583_ = v___x_4580_;
v_isShared_4584_ = v_isSharedCheck_5062_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_a_4581_);
lean_dec(v___x_4580_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_5062_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
lean_object* v___x_4585_; uint8_t v___x_4586_; 
v___x_4585_ = l_Lean_Expr_cleanupAnnotations(v_a_4581_);
lean_dec(v_a_4581_);
v___x_4586_ = l_Lean_Expr_isApp(v___x_4585_);
if (v___x_4586_ == 0)
{
lean_dec_ref(v___x_4585_);
lean_del_object(v___x_4583_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4563_;
}
else
{
lean_object* v___x_4587_; uint8_t v___x_4588_; 
v___x_4587_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4585_);
v___x_4588_ = l_Lean_Expr_isApp(v___x_4587_);
if (v___x_4588_ == 0)
{
lean_dec_ref(v___x_4587_);
lean_dec_ref(v___x_4585_);
lean_del_object(v___x_4583_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4563_;
}
else
{
lean_object* v_arg_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; uint8_t v___x_4593_; 
v_arg_4589_ = lean_ctor_get(v___x_4585_, 1);
lean_inc_ref(v_arg_4589_);
lean_dec_ref(v___x_4585_);
v___x_4590_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4587_);
v___x_4591_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__0));
v___x_4592_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__6));
v___x_4593_ = l_Lean_Expr_isConstOf(v___x_4590_, v___x_4592_);
if (v___x_4593_ == 0)
{
lean_object* v___x_4594_; uint8_t v___x_4595_; 
v___x_4594_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__7));
v___x_4595_ = l_Lean_Expr_isConstOf(v___x_4590_, v___x_4594_);
if (v___x_4595_ == 0)
{
lean_object* v___x_4596_; uint8_t v___x_4597_; 
v___x_4596_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__8));
v___x_4597_ = l_Lean_Expr_isConstOf(v___x_4590_, v___x_4596_);
if (v___x_4597_ == 0)
{
lean_object* v___x_4598_; uint8_t v___x_4599_; 
v___x_4598_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__10));
v___x_4599_ = l_Lean_Expr_isConstOf(v___x_4590_, v___x_4598_);
if (v___x_4599_ == 0)
{
uint8_t v___x_4600_; 
v___x_4600_ = l_Lean_Expr_isApp(v___x_4590_);
if (v___x_4600_ == 0)
{
lean_dec_ref(v___x_4590_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v___x_4587_);
lean_del_object(v___x_4583_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4563_;
}
else
{
lean_object* v_arg_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; uint8_t v___x_4604_; 
v_arg_4601_ = lean_ctor_get(v___x_4587_, 1);
lean_inc_ref(v_arg_4601_);
lean_dec_ref(v___x_4587_);
v___x_4602_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4590_);
v___x_4603_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__11));
v___x_4604_ = l_Lean_Expr_isConstOf(v___x_4602_, v___x_4603_);
if (v___x_4604_ == 0)
{
lean_object* v___x_4605_; uint8_t v___x_4606_; 
v___x_4605_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__12));
v___x_4606_ = l_Lean_Expr_isConstOf(v___x_4602_, v___x_4605_);
if (v___x_4606_ == 0)
{
lean_object* v___x_4607_; uint8_t v___x_4608_; 
v___x_4607_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__14));
v___x_4608_ = l_Lean_Expr_isConstOf(v___x_4602_, v___x_4607_);
if (v___x_4608_ == 0)
{
lean_object* v___x_4609_; uint8_t v___x_4610_; 
v___x_4609_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__16));
v___x_4610_ = l_Lean_Expr_isConstOf(v___x_4602_, v___x_4609_);
if (v___x_4610_ == 0)
{
lean_object* v___x_4611_; uint8_t v___x_4612_; 
v___x_4611_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__19));
v___x_4612_ = l_Lean_Expr_isConstOf(v___x_4602_, v___x_4611_);
if (v___x_4612_ == 0)
{
uint8_t v___x_4613_; 
v___x_4613_ = l_Lean_Expr_isApp(v___x_4602_);
if (v___x_4613_ == 0)
{
lean_dec_ref(v___x_4602_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v___x_4590_);
lean_dec_ref(v_arg_4589_);
lean_del_object(v___x_4583_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4563_;
}
else
{
lean_object* v_arg_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; uint8_t v___x_4617_; 
v_arg_4614_ = lean_ctor_get(v___x_4590_, 1);
lean_inc_ref(v_arg_4614_);
lean_dec_ref(v___x_4590_);
v___x_4615_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4602_);
lean_dec_ref(v___x_4602_);
v___x_4616_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___closed__7));
v___x_4617_ = l_Lean_Expr_isConstOf(v___x_4615_, v___x_4616_);
if (v___x_4617_ == 0)
{
lean_object* v___x_4618_; uint8_t v___x_4619_; 
v___x_4618_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__21));
v___x_4619_ = l_Lean_Expr_isConstOf(v___x_4615_, v___x_4618_);
if (v___x_4619_ == 0)
{
lean_object* v___x_4620_; uint8_t v___x_4621_; 
lean_dec_ref(v_arg_4614_);
lean_del_object(v___x_4583_);
v___x_4620_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__23));
v___x_4621_ = l_Lean_Expr_isConstOf(v___x_4615_, v___x_4620_);
if (v___x_4621_ == 0)
{
uint8_t v___x_4622_; 
v___x_4622_ = l_Lean_Expr_isApp(v___x_4615_);
if (v___x_4622_ == 0)
{
lean_dec_ref(v___x_4615_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4563_;
}
else
{
lean_object* v___x_4623_; uint8_t v___x_4624_; 
v___x_4623_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4615_);
v___x_4624_ = l_Lean_Expr_isApp(v___x_4623_);
if (v___x_4624_ == 0)
{
lean_dec_ref(v___x_4623_);
lean_dec_ref(v___x_4615_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4563_;
}
else
{
lean_object* v___x_4625_; lean_object* v___x_4626_; uint8_t v___x_4627_; 
v___x_4625_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4623_);
v___x_4626_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__26));
v___x_4627_ = l_Lean_Expr_isConstOf(v___x_4625_, v___x_4626_);
if (v___x_4627_ == 0)
{
lean_object* v_arg_4628_; lean_object* v___y_4630_; lean_object* v___y_4631_; lean_object* v___y_4632_; lean_object* v___y_4633_; lean_object* v___y_4634_; lean_object* v___y_4635_; lean_object* v___y_4636_; lean_object* v___y_4637_; lean_object* v___y_4638_; lean_object* v___y_4639_; lean_object* v___y_4640_; lean_object* v___y_4641_; lean_object* v___y_4651_; lean_object* v___y_4652_; lean_object* v___y_4653_; lean_object* v___y_4654_; lean_object* v___y_4655_; lean_object* v___y_4656_; lean_object* v___y_4657_; lean_object* v___y_4658_; lean_object* v___y_4659_; lean_object* v___y_4660_; lean_object* v___y_4661_; lean_object* v___y_4662_; lean_object* v_arg_4671_; lean_object* v___x_4672_; uint8_t v___x_4673_; 
v_arg_4628_ = lean_ctor_get(v___x_4615_, 1);
lean_inc_ref(v_arg_4628_);
lean_dec_ref(v___x_4615_);
v_arg_4671_ = lean_ctor_get(v___x_4623_, 1);
lean_inc_ref(v_arg_4671_);
lean_dec_ref(v___x_4623_);
v___x_4672_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__37));
v___x_4673_ = l_Lean_Expr_isConstOf(v___x_4625_, v___x_4672_);
if (v___x_4673_ == 0)
{
lean_object* v___x_4674_; uint8_t v___x_4675_; 
v___x_4674_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__40));
v___x_4675_ = l_Lean_Expr_isConstOf(v___x_4625_, v___x_4674_);
if (v___x_4675_ == 0)
{
lean_object* v___x_4676_; uint8_t v___x_4677_; 
lean_dec_ref(v_arg_4671_);
lean_dec_ref(v_arg_4628_);
v___x_4676_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__43));
v___x_4677_ = l_Lean_Expr_isConstOf(v___x_4625_, v___x_4676_);
if (v___x_4677_ == 0)
{
lean_object* v___x_4678_; uint8_t v___x_4679_; 
v___x_4678_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__46));
v___x_4679_ = l_Lean_Expr_isConstOf(v___x_4625_, v___x_4678_);
if (v___x_4679_ == 0)
{
lean_object* v___x_4680_; uint8_t v___x_4681_; 
v___x_4680_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__49));
v___x_4681_ = l_Lean_Expr_isConstOf(v___x_4625_, v___x_4680_);
if (v___x_4681_ == 0)
{
lean_object* v___x_4682_; uint8_t v___x_4683_; 
v___x_4682_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__52));
v___x_4683_ = l_Lean_Expr_isConstOf(v___x_4625_, v___x_4682_);
if (v___x_4683_ == 0)
{
lean_object* v___x_4684_; uint8_t v___x_4685_; 
v___x_4684_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__55));
v___x_4685_ = l_Lean_Expr_isConstOf(v___x_4625_, v___x_4684_);
if (v___x_4685_ == 0)
{
lean_object* v___x_4686_; uint8_t v___x_4687_; 
v___x_4686_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__58));
v___x_4687_ = l_Lean_Expr_isConstOf(v___x_4625_, v___x_4686_);
lean_dec_ref(v___x_4625_);
if (v___x_4687_ == 0)
{
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4563_;
}
else
{
uint8_t v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; 
v___x_4688_ = 0;
v___x_4689_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__60));
v___x_4690_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection(v_arg_4601_, v_arg_4589_, v___x_4688_, v___x_4689_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4690_;
}
}
else
{
uint8_t v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; 
lean_dec_ref(v___x_4625_);
v___x_4691_ = 2;
v___x_4692_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__62));
v___x_4693_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection(v_arg_4601_, v_arg_4589_, v___x_4691_, v___x_4692_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4693_;
}
}
else
{
uint8_t v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; 
lean_dec_ref(v___x_4625_);
v___x_4694_ = 3;
v___x_4695_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__64));
v___x_4696_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection(v_arg_4601_, v_arg_4589_, v___x_4694_, v___x_4695_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4696_;
}
}
else
{
uint8_t v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; 
lean_dec_ref(v___x_4625_);
v___x_4697_ = 4;
v___x_4698_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__66));
v___x_4699_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection(v_arg_4601_, v_arg_4589_, v___x_4697_, v___x_4698_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4699_;
}
}
else
{
uint8_t v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; 
lean_dec_ref(v___x_4625_);
v___x_4700_ = 5;
v___x_4701_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__68));
v___x_4702_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection(v_arg_4601_, v_arg_4589_, v___x_4700_, v___x_4701_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4702_;
}
}
else
{
uint8_t v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
lean_dec_ref(v___x_4625_);
v___x_4703_ = 6;
v___x_4704_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__70));
v___x_4705_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection(v_arg_4601_, v_arg_4589_, v___x_4703_, v___x_4704_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4705_;
}
}
else
{
lean_object* v___x_4706_; 
lean_dec_ref(v___x_4625_);
lean_inc_ref(v_arg_4628_);
v___x_4706_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_getNatOrBvValue_x3f___redArg(v_arg_4628_, v_arg_4589_, v_a_4553_);
if (lean_obj_tag(v___x_4706_) == 0)
{
lean_object* v_a_4707_; lean_object* v___x_4708_; uint8_t v___x_4709_; 
v_a_4707_ = lean_ctor_get(v___x_4706_, 0);
lean_inc(v_a_4707_);
lean_dec_ref_known(v___x_4706_, 1);
v___x_4708_ = l_Lean_Expr_cleanupAnnotations(v_arg_4671_);
lean_dec_ref(v_arg_4671_);
v___x_4709_ = l_Lean_Expr_isApp(v___x_4708_);
if (v___x_4709_ == 0)
{
lean_dec_ref(v___x_4708_);
lean_dec(v_a_4707_);
lean_dec_ref(v_arg_4628_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4560_;
}
else
{
lean_object* v___x_4710_; lean_object* v___x_4711_; uint8_t v___x_4712_; 
v___x_4710_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4708_);
v___x_4711_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1));
v___x_4712_ = l_Lean_Expr_isConstOf(v___x_4710_, v___x_4711_);
lean_dec_ref(v___x_4710_);
if (v___x_4712_ == 0)
{
lean_dec_ref(v___x_4708_);
lean_dec(v_a_4707_);
lean_dec_ref(v_arg_4628_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4560_;
}
else
{
lean_object* v_arg_4713_; uint8_t v___x_4714_; 
v_arg_4713_ = lean_ctor_get(v___x_4708_, 1);
lean_inc_ref(v_arg_4713_);
lean_dec_ref(v___x_4708_);
v___x_4714_ = l_Lean_Meta_Sym_isNatValue(v_arg_4713_);
lean_dec_ref(v_arg_4713_);
if (v___x_4714_ == 0)
{
lean_dec(v_a_4707_);
v___y_4651_ = v_a_4544_;
v___y_4652_ = v_a_4545_;
v___y_4653_ = v_a_4546_;
v___y_4654_ = v_a_4547_;
v___y_4655_ = v_a_4548_;
v___y_4656_ = v_a_4549_;
v___y_4657_ = v_a_4550_;
v___y_4658_ = v_a_4551_;
v___y_4659_ = v_a_4552_;
v___y_4660_ = v_a_4553_;
v___y_4661_ = v_a_4554_;
v___y_4662_ = v_a_4555_;
goto v___jp_4650_;
}
else
{
if (lean_obj_tag(v_a_4707_) == 0)
{
v___y_4651_ = v_a_4544_;
v___y_4652_ = v_a_4545_;
v___y_4653_ = v_a_4546_;
v___y_4654_ = v_a_4547_;
v___y_4655_ = v_a_4548_;
v___y_4656_ = v_a_4549_;
v___y_4657_ = v_a_4550_;
v___y_4658_ = v_a_4551_;
v___y_4659_ = v_a_4552_;
v___y_4660_ = v_a_4553_;
v___y_4661_ = v_a_4554_;
v___y_4662_ = v_a_4555_;
goto v___jp_4650_;
}
else
{
lean_object* v___x_4715_; lean_object* v___x_4716_; 
lean_dec_ref_known(v_a_4707_, 1);
v___x_4715_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__72, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__72_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__72);
v___x_4716_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___redArg(v___x_4715_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4716_) == 0)
{
lean_dec_ref_known(v___x_4716_, 1);
v___y_4651_ = v_a_4544_;
v___y_4652_ = v_a_4545_;
v___y_4653_ = v_a_4546_;
v___y_4654_ = v_a_4547_;
v___y_4655_ = v_a_4548_;
v___y_4656_ = v_a_4549_;
v___y_4657_ = v_a_4550_;
v___y_4658_ = v_a_4551_;
v___y_4659_ = v_a_4552_;
v___y_4660_ = v_a_4553_;
v___y_4661_ = v_a_4554_;
v___y_4662_ = v_a_4555_;
goto v___jp_4650_;
}
else
{
lean_object* v_a_4717_; lean_object* v___x_4719_; uint8_t v_isShared_4720_; uint8_t v_isSharedCheck_4724_; 
lean_dec_ref(v_arg_4628_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v_a_4717_ = lean_ctor_get(v___x_4716_, 0);
v_isSharedCheck_4724_ = !lean_is_exclusive(v___x_4716_);
if (v_isSharedCheck_4724_ == 0)
{
v___x_4719_ = v___x_4716_;
v_isShared_4720_ = v_isSharedCheck_4724_;
goto v_resetjp_4718_;
}
else
{
lean_inc(v_a_4717_);
lean_dec(v___x_4716_);
v___x_4719_ = lean_box(0);
v_isShared_4720_ = v_isSharedCheck_4724_;
goto v_resetjp_4718_;
}
v_resetjp_4718_:
{
lean_object* v___x_4722_; 
if (v_isShared_4720_ == 0)
{
v___x_4722_ = v___x_4719_;
goto v_reusejp_4721_;
}
else
{
lean_object* v_reuseFailAlloc_4723_; 
v_reuseFailAlloc_4723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4723_, 0, v_a_4717_);
v___x_4722_ = v_reuseFailAlloc_4723_;
goto v_reusejp_4721_;
}
v_reusejp_4721_:
{
return v___x_4722_;
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
lean_object* v_a_4725_; lean_object* v___x_4727_; uint8_t v_isShared_4728_; uint8_t v_isSharedCheck_4732_; 
lean_dec_ref(v_arg_4671_);
lean_dec_ref(v_arg_4628_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v_a_4725_ = lean_ctor_get(v___x_4706_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v___x_4706_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4727_ = v___x_4706_;
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
else
{
lean_inc(v_a_4725_);
lean_dec(v___x_4706_);
v___x_4727_ = lean_box(0);
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
v_resetjp_4726_:
{
lean_object* v___x_4730_; 
if (v_isShared_4728_ == 0)
{
v___x_4730_ = v___x_4727_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v_a_4725_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
return v___x_4730_;
}
}
}
}
}
else
{
lean_object* v___x_4733_; 
lean_dec_ref(v___x_4625_);
lean_inc_ref(v_arg_4628_);
v___x_4733_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_getNatOrBvValue_x3f___redArg(v_arg_4628_, v_arg_4589_, v_a_4553_);
if (lean_obj_tag(v___x_4733_) == 0)
{
lean_object* v_a_4734_; lean_object* v___x_4735_; uint8_t v___x_4736_; 
v_a_4734_ = lean_ctor_get(v___x_4733_, 0);
lean_inc(v_a_4734_);
lean_dec_ref_known(v___x_4733_, 1);
v___x_4735_ = l_Lean_Expr_cleanupAnnotations(v_arg_4671_);
lean_dec_ref(v_arg_4671_);
v___x_4736_ = l_Lean_Expr_isApp(v___x_4735_);
if (v___x_4736_ == 0)
{
lean_dec_ref(v___x_4735_);
lean_dec(v_a_4734_);
lean_dec_ref(v_arg_4628_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4566_;
}
else
{
lean_object* v___x_4737_; lean_object* v___x_4738_; uint8_t v___x_4739_; 
v___x_4737_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4735_);
v___x_4738_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1));
v___x_4739_ = l_Lean_Expr_isConstOf(v___x_4737_, v___x_4738_);
lean_dec_ref(v___x_4737_);
if (v___x_4739_ == 0)
{
lean_dec_ref(v___x_4735_);
lean_dec(v_a_4734_);
lean_dec_ref(v_arg_4628_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4566_;
}
else
{
lean_object* v_arg_4740_; uint8_t v___x_4741_; 
v_arg_4740_ = lean_ctor_get(v___x_4735_, 1);
lean_inc_ref(v_arg_4740_);
lean_dec_ref(v___x_4735_);
v___x_4741_ = l_Lean_Meta_Sym_isNatValue(v_arg_4740_);
lean_dec_ref(v_arg_4740_);
if (v___x_4741_ == 0)
{
lean_dec(v_a_4734_);
v___y_4630_ = v_a_4544_;
v___y_4631_ = v_a_4545_;
v___y_4632_ = v_a_4546_;
v___y_4633_ = v_a_4547_;
v___y_4634_ = v_a_4548_;
v___y_4635_ = v_a_4549_;
v___y_4636_ = v_a_4550_;
v___y_4637_ = v_a_4551_;
v___y_4638_ = v_a_4552_;
v___y_4639_ = v_a_4553_;
v___y_4640_ = v_a_4554_;
v___y_4641_ = v_a_4555_;
goto v___jp_4629_;
}
else
{
if (lean_obj_tag(v_a_4734_) == 0)
{
v___y_4630_ = v_a_4544_;
v___y_4631_ = v_a_4545_;
v___y_4632_ = v_a_4546_;
v___y_4633_ = v_a_4547_;
v___y_4634_ = v_a_4548_;
v___y_4635_ = v_a_4549_;
v___y_4636_ = v_a_4550_;
v___y_4637_ = v_a_4551_;
v___y_4638_ = v_a_4552_;
v___y_4639_ = v_a_4553_;
v___y_4640_ = v_a_4554_;
v___y_4641_ = v_a_4555_;
goto v___jp_4629_;
}
else
{
lean_object* v___x_4742_; lean_object* v___x_4743_; 
lean_dec_ref_known(v_a_4734_, 1);
v___x_4742_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__72, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__72_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__72);
v___x_4743_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___redArg(v___x_4742_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4743_) == 0)
{
lean_dec_ref_known(v___x_4743_, 1);
v___y_4630_ = v_a_4544_;
v___y_4631_ = v_a_4545_;
v___y_4632_ = v_a_4546_;
v___y_4633_ = v_a_4547_;
v___y_4634_ = v_a_4548_;
v___y_4635_ = v_a_4549_;
v___y_4636_ = v_a_4550_;
v___y_4637_ = v_a_4551_;
v___y_4638_ = v_a_4552_;
v___y_4639_ = v_a_4553_;
v___y_4640_ = v_a_4554_;
v___y_4641_ = v_a_4555_;
goto v___jp_4629_;
}
else
{
lean_object* v_a_4744_; lean_object* v___x_4746_; uint8_t v_isShared_4747_; uint8_t v_isSharedCheck_4751_; 
lean_dec_ref(v_arg_4628_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v_a_4744_ = lean_ctor_get(v___x_4743_, 0);
v_isSharedCheck_4751_ = !lean_is_exclusive(v___x_4743_);
if (v_isSharedCheck_4751_ == 0)
{
v___x_4746_ = v___x_4743_;
v_isShared_4747_ = v_isSharedCheck_4751_;
goto v_resetjp_4745_;
}
else
{
lean_inc(v_a_4744_);
lean_dec(v___x_4743_);
v___x_4746_ = lean_box(0);
v_isShared_4747_ = v_isSharedCheck_4751_;
goto v_resetjp_4745_;
}
v_resetjp_4745_:
{
lean_object* v___x_4749_; 
if (v_isShared_4747_ == 0)
{
v___x_4749_ = v___x_4746_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v_a_4744_);
v___x_4749_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
return v___x_4749_;
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
lean_object* v_a_4752_; lean_object* v___x_4754_; uint8_t v_isShared_4755_; uint8_t v_isSharedCheck_4759_; 
lean_dec_ref(v_arg_4671_);
lean_dec_ref(v_arg_4628_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v_a_4752_ = lean_ctor_get(v___x_4733_, 0);
v_isSharedCheck_4759_ = !lean_is_exclusive(v___x_4733_);
if (v_isSharedCheck_4759_ == 0)
{
v___x_4754_ = v___x_4733_;
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
else
{
lean_inc(v_a_4752_);
lean_dec(v___x_4733_);
v___x_4754_ = lean_box(0);
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
v_resetjp_4753_:
{
lean_object* v___x_4757_; 
if (v_isShared_4755_ == 0)
{
v___x_4757_ = v___x_4754_;
goto v_reusejp_4756_;
}
else
{
lean_object* v_reuseFailAlloc_4758_; 
v_reuseFailAlloc_4758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4758_, 0, v_a_4752_);
v___x_4757_ = v_reuseFailAlloc_4758_;
goto v_reusejp_4756_;
}
v_reusejp_4756_:
{
return v___x_4757_;
}
}
}
}
v___jp_4629_:
{
lean_object* v___x_4642_; uint8_t v___x_4643_; 
v___x_4642_ = l_Lean_Expr_cleanupAnnotations(v_arg_4628_);
lean_dec_ref(v_arg_4628_);
v___x_4643_ = l_Lean_Expr_isApp(v___x_4642_);
if (v___x_4643_ == 0)
{
lean_dec_ref(v___x_4642_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4569_;
}
else
{
lean_object* v___x_4644_; lean_object* v___x_4645_; uint8_t v___x_4646_; 
v___x_4644_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4642_);
lean_dec_ref(v___x_4642_);
v___x_4645_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1));
v___x_4646_ = l_Lean_Expr_isConstOf(v___x_4644_, v___x_4645_);
lean_dec_ref(v___x_4644_);
if (v___x_4646_ == 0)
{
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4569_;
}
else
{
lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; 
v___x_4647_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__28));
v___x_4648_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__30));
v___x_4649_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftReflection(v_arg_4589_, v_arg_4601_, v___f_4573_, v___x_4647_, v___x_4648_, v_origExpr_4543_, v___y_4630_, v___y_4631_, v___y_4632_, v___y_4633_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_, v___y_4638_, v___y_4639_, v___y_4640_, v___y_4641_);
return v___x_4649_;
}
}
}
v___jp_4650_:
{
lean_object* v___x_4663_; uint8_t v___x_4664_; 
v___x_4663_ = l_Lean_Expr_cleanupAnnotations(v_arg_4628_);
lean_dec_ref(v_arg_4628_);
v___x_4664_ = l_Lean_Expr_isApp(v___x_4663_);
if (v___x_4664_ == 0)
{
lean_dec_ref(v___x_4663_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4557_;
}
else
{
lean_object* v___x_4665_; lean_object* v___x_4666_; uint8_t v___x_4667_; 
v___x_4665_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4663_);
lean_dec_ref(v___x_4663_);
v___x_4666_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_isValidBitVecAtom___redArg___closed__1));
v___x_4667_ = l_Lean_Expr_isConstOf(v___x_4665_, v___x_4666_);
lean_dec_ref(v___x_4665_);
if (v___x_4667_ == 0)
{
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
goto v___jp_4557_;
}
else
{
lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; 
v___x_4668_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__32));
v___x_4669_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__34));
v___x_4670_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftReflection(v_arg_4589_, v_arg_4601_, v___f_4574_, v___x_4668_, v___x_4669_, v_origExpr_4543_, v___y_4651_, v___y_4652_, v___y_4653_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_);
return v___x_4670_;
}
}
}
}
else
{
lean_object* v___x_4760_; 
lean_dec_ref(v___x_4625_);
lean_dec_ref(v___x_4623_);
lean_dec_ref(v___x_4615_);
lean_inc_ref(v_arg_4601_);
v___x_4760_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_arg_4601_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4760_) == 0)
{
lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4834_; 
v_a_4761_ = lean_ctor_get(v___x_4760_, 0);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4760_);
if (v_isSharedCheck_4834_ == 0)
{
v___x_4763_ = v___x_4760_;
v_isShared_4764_ = v_isSharedCheck_4834_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4760_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4834_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
if (lean_obj_tag(v_a_4761_) == 1)
{
lean_object* v_val_4765_; lean_object* v___x_4766_; 
lean_del_object(v___x_4763_);
v_val_4765_ = lean_ctor_get(v_a_4761_, 0);
lean_inc(v_val_4765_);
lean_dec_ref_known(v_a_4761_, 1);
lean_inc_ref(v_arg_4589_);
v___x_4766_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_arg_4589_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4766_) == 0)
{
lean_object* v_a_4767_; lean_object* v___x_4769_; uint8_t v_isShared_4770_; uint8_t v_isSharedCheck_4829_; 
v_a_4767_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4829_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4829_ == 0)
{
v___x_4769_ = v___x_4766_;
v_isShared_4770_ = v_isSharedCheck_4829_;
goto v_resetjp_4768_;
}
else
{
lean_inc(v_a_4767_);
lean_dec(v___x_4766_);
v___x_4769_ = lean_box(0);
v_isShared_4770_ = v_isSharedCheck_4829_;
goto v_resetjp_4768_;
}
v_resetjp_4768_:
{
if (lean_obj_tag(v_a_4767_) == 1)
{
lean_object* v_val_4771_; lean_object* v___x_4773_; uint8_t v_isShared_4774_; uint8_t v_isSharedCheck_4824_; 
lean_del_object(v___x_4769_);
v_val_4771_ = lean_ctor_get(v_a_4767_, 0);
v_isSharedCheck_4824_ = !lean_is_exclusive(v_a_4767_);
if (v_isSharedCheck_4824_ == 0)
{
v___x_4773_ = v_a_4767_;
v_isShared_4774_ = v_isSharedCheck_4824_;
goto v_resetjp_4772_;
}
else
{
lean_inc(v_val_4771_);
lean_dec(v_a_4767_);
v___x_4773_ = lean_box(0);
v_isShared_4774_ = v_isSharedCheck_4824_;
goto v_resetjp_4772_;
}
v_resetjp_4772_:
{
lean_object* v_width_4775_; lean_object* v_bvExpr_4776_; lean_object* v_expr_4777_; lean_object* v_width_4778_; lean_object* v_bvExpr_4779_; lean_object* v_expr_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; 
v_width_4775_ = lean_ctor_get(v_val_4765_, 0);
lean_inc_n(v_width_4775_, 2);
v_bvExpr_4776_ = lean_ctor_get(v_val_4765_, 1);
v_expr_4777_ = lean_ctor_get(v_val_4765_, 4);
lean_inc_ref(v_expr_4777_);
v_width_4778_ = lean_ctor_get(v_val_4771_, 0);
lean_inc_n(v_width_4778_, 2);
v_bvExpr_4779_ = lean_ctor_get(v_val_4771_, 1);
v_expr_4780_ = lean_ctor_get(v_val_4771_, 4);
lean_inc_ref(v_expr_4780_);
v___x_4781_ = lean_nat_add(v_width_4775_, v_width_4778_);
lean_inc_ref(v_bvExpr_4779_);
lean_inc_ref(v_bvExpr_4776_);
lean_inc_n(v___x_4781_, 2);
v___x_4782_ = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(v_width_4775_, v_width_4778_, v___x_4781_, v_bvExpr_4776_, v_bvExpr_4779_);
v___x_4783_ = l_Lean_mkNatLit(v___x_4781_);
lean_inc_ref(v___x_4783_);
v___x_4784_ = l_Lean_Meta_mkEqRefl(v___x_4783_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v_a_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___f_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; 
v_a_4785_ = lean_ctor_get(v___x_4784_, 0);
lean_inc(v_a_4785_);
lean_dec_ref_known(v___x_4784_, 1);
v___x_4786_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0));
v___x_4787_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1));
v___x_4788_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1));
v___x_4789_ = lean_box(0);
v___x_4790_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__75, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__75_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__75);
lean_inc(v_width_4775_);
v___x_4791_ = l_Lean_mkNatLit(v_width_4775_);
lean_inc(v_width_4778_);
v___x_4792_ = l_Lean_mkNatLit(v_width_4778_);
lean_inc_ref(v___x_4792_);
lean_inc_ref(v___x_4791_);
lean_inc_ref(v_expr_4780_);
lean_inc_ref(v_expr_4777_);
v___f_4793_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__3___boxed), 27, 15);
lean_closure_set(v___f_4793_, 0, v_width_4775_);
lean_closure_set(v___f_4793_, 1, v_expr_4777_);
lean_closure_set(v___f_4793_, 2, v_width_4778_);
lean_closure_set(v___f_4793_, 3, v_expr_4780_);
lean_closure_set(v___f_4793_, 4, v_val_4765_);
lean_closure_set(v___f_4793_, 5, v_val_4771_);
lean_closure_set(v___f_4793_, 6, v___x_4786_);
lean_closure_set(v___f_4793_, 7, v___x_4787_);
lean_closure_set(v___f_4793_, 8, v___x_4788_);
lean_closure_set(v___f_4793_, 9, v___x_4591_);
lean_closure_set(v___f_4793_, 10, v___x_4789_);
lean_closure_set(v___f_4793_, 11, v___x_4791_);
lean_closure_set(v___f_4793_, 12, v___x_4792_);
lean_closure_set(v___f_4793_, 13, v_arg_4601_);
lean_closure_set(v___f_4793_, 14, v_arg_4589_);
v___x_4794_ = l_Lean_mkApp6(v___x_4790_, v___x_4791_, v___x_4792_, v___x_4783_, v_expr_4777_, v_expr_4780_, v_a_4785_);
v___x_4795_ = l_Lean_Meta_Sym_shareCommonInc(v___x_4794_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4795_) == 0)
{
lean_object* v_a_4796_; lean_object* v___x_4798_; uint8_t v_isShared_4799_; uint8_t v_isSharedCheck_4807_; 
v_a_4796_ = lean_ctor_get(v___x_4795_, 0);
v_isSharedCheck_4807_ = !lean_is_exclusive(v___x_4795_);
if (v_isSharedCheck_4807_ == 0)
{
v___x_4798_ = v___x_4795_;
v_isShared_4799_ = v_isSharedCheck_4807_;
goto v_resetjp_4797_;
}
else
{
lean_inc(v_a_4796_);
lean_dec(v___x_4795_);
v___x_4798_ = lean_box(0);
v_isShared_4799_ = v_isSharedCheck_4807_;
goto v_resetjp_4797_;
}
v_resetjp_4797_:
{
lean_object* v___x_4800_; lean_object* v___x_4802_; 
v___x_4800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4800_, 0, v___x_4781_);
lean_ctor_set(v___x_4800_, 1, v___x_4782_);
lean_ctor_set(v___x_4800_, 2, v_origExpr_4543_);
lean_ctor_set(v___x_4800_, 3, v___f_4793_);
lean_ctor_set(v___x_4800_, 4, v_a_4796_);
if (v_isShared_4774_ == 0)
{
lean_ctor_set(v___x_4773_, 0, v___x_4800_);
v___x_4802_ = v___x_4773_;
goto v_reusejp_4801_;
}
else
{
lean_object* v_reuseFailAlloc_4806_; 
v_reuseFailAlloc_4806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4806_, 0, v___x_4800_);
v___x_4802_ = v_reuseFailAlloc_4806_;
goto v_reusejp_4801_;
}
v_reusejp_4801_:
{
lean_object* v___x_4804_; 
if (v_isShared_4799_ == 0)
{
lean_ctor_set(v___x_4798_, 0, v___x_4802_);
v___x_4804_ = v___x_4798_;
goto v_reusejp_4803_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v___x_4802_);
v___x_4804_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4803_;
}
v_reusejp_4803_:
{
return v___x_4804_;
}
}
}
}
else
{
lean_object* v_a_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4815_; 
lean_dec_ref(v___f_4793_);
lean_dec_ref(v___x_4782_);
lean_dec(v___x_4781_);
lean_del_object(v___x_4773_);
lean_dec_ref(v_origExpr_4543_);
v_a_4808_ = lean_ctor_get(v___x_4795_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v___x_4795_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4810_ = v___x_4795_;
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_a_4808_);
lean_dec(v___x_4795_);
v___x_4810_ = lean_box(0);
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
v_resetjp_4809_:
{
lean_object* v___x_4813_; 
if (v_isShared_4811_ == 0)
{
v___x_4813_ = v___x_4810_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v_a_4808_);
v___x_4813_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
return v___x_4813_;
}
}
}
}
else
{
lean_object* v_a_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4823_; 
lean_dec_ref(v___x_4783_);
lean_dec_ref(v___x_4782_);
lean_dec(v___x_4781_);
lean_dec_ref(v_expr_4780_);
lean_dec(v_width_4778_);
lean_dec_ref(v_expr_4777_);
lean_dec(v_width_4775_);
lean_del_object(v___x_4773_);
lean_dec(v_val_4771_);
lean_dec(v_val_4765_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v_a_4816_ = lean_ctor_get(v___x_4784_, 0);
v_isSharedCheck_4823_ = !lean_is_exclusive(v___x_4784_);
if (v_isSharedCheck_4823_ == 0)
{
v___x_4818_ = v___x_4784_;
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_a_4816_);
lean_dec(v___x_4784_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
v_resetjp_4817_:
{
lean_object* v___x_4821_; 
if (v_isShared_4819_ == 0)
{
v___x_4821_ = v___x_4818_;
goto v_reusejp_4820_;
}
else
{
lean_object* v_reuseFailAlloc_4822_; 
v_reuseFailAlloc_4822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4822_, 0, v_a_4816_);
v___x_4821_ = v_reuseFailAlloc_4822_;
goto v_reusejp_4820_;
}
v_reusejp_4820_:
{
return v___x_4821_;
}
}
}
}
}
else
{
lean_object* v___x_4825_; lean_object* v___x_4827_; 
lean_dec(v_a_4767_);
lean_dec(v_val_4765_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_4825_ = lean_box(0);
if (v_isShared_4770_ == 0)
{
lean_ctor_set(v___x_4769_, 0, v___x_4825_);
v___x_4827_ = v___x_4769_;
goto v_reusejp_4826_;
}
else
{
lean_object* v_reuseFailAlloc_4828_; 
v_reuseFailAlloc_4828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4828_, 0, v___x_4825_);
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
lean_dec(v_val_4765_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
return v___x_4766_;
}
}
else
{
lean_object* v___x_4830_; lean_object* v___x_4832_; 
lean_dec(v_a_4761_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_4830_ = lean_box(0);
if (v_isShared_4764_ == 0)
{
lean_ctor_set(v___x_4763_, 0, v___x_4830_);
v___x_4832_ = v___x_4763_;
goto v_reusejp_4831_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v___x_4830_);
v___x_4832_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4831_;
}
v_reusejp_4831_:
{
return v___x_4832_;
}
}
}
}
else
{
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
return v___x_4760_;
}
}
}
}
}
else
{
lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; 
lean_dec_ref(v___x_4615_);
v___x_4835_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__77));
v___x_4836_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__79));
v___x_4837_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftReflection(v_arg_4589_, v_arg_4601_, v___f_4575_, v___x_4835_, v___x_4836_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4837_;
}
}
else
{
lean_object* v___x_4838_; 
lean_dec_ref(v___x_4615_);
v___x_4838_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_4614_);
if (lean_obj_tag(v___x_4838_) == 1)
{
lean_object* v_val_4839_; lean_object* v___x_4840_; 
v_val_4839_ = lean_ctor_get(v___x_4838_, 0);
lean_inc(v_val_4839_);
lean_dec_ref_known(v___x_4838_, 1);
v___x_4840_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_4601_);
if (lean_obj_tag(v___x_4840_) == 1)
{
lean_object* v_val_4841_; lean_object* v___x_4842_; 
lean_del_object(v___x_4583_);
v_val_4841_ = lean_ctor_get(v___x_4840_, 0);
lean_inc(v_val_4841_);
lean_dec_ref_known(v___x_4840_, 1);
lean_inc_ref(v_arg_4589_);
v___x_4842_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_arg_4589_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4842_) == 0)
{
lean_object* v_a_4843_; lean_object* v___x_4845_; uint8_t v_isShared_4846_; uint8_t v_isSharedCheck_4889_; 
v_a_4843_ = lean_ctor_get(v___x_4842_, 0);
v_isSharedCheck_4889_ = !lean_is_exclusive(v___x_4842_);
if (v_isSharedCheck_4889_ == 0)
{
v___x_4845_ = v___x_4842_;
v_isShared_4846_ = v_isSharedCheck_4889_;
goto v_resetjp_4844_;
}
else
{
lean_inc(v_a_4843_);
lean_dec(v___x_4842_);
v___x_4845_ = lean_box(0);
v_isShared_4846_ = v_isSharedCheck_4889_;
goto v_resetjp_4844_;
}
v_resetjp_4844_:
{
if (lean_obj_tag(v_a_4843_) == 1)
{
lean_object* v_val_4847_; lean_object* v___x_4849_; uint8_t v_isShared_4850_; uint8_t v_isSharedCheck_4884_; 
lean_del_object(v___x_4845_);
v_val_4847_ = lean_ctor_get(v_a_4843_, 0);
v_isSharedCheck_4884_ = !lean_is_exclusive(v_a_4843_);
if (v_isSharedCheck_4884_ == 0)
{
v___x_4849_ = v_a_4843_;
v_isShared_4850_ = v_isSharedCheck_4884_;
goto v_resetjp_4848_;
}
else
{
lean_inc(v_val_4847_);
lean_dec(v_a_4843_);
v___x_4849_ = lean_box(0);
v_isShared_4850_ = v_isSharedCheck_4884_;
goto v_resetjp_4848_;
}
v_resetjp_4848_:
{
lean_object* v_width_4851_; lean_object* v_bvExpr_4852_; lean_object* v_expr_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___f_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; 
v_width_4851_ = lean_ctor_get(v_val_4847_, 0);
lean_inc_n(v_width_4851_, 3);
v_bvExpr_4852_ = lean_ctor_get(v_val_4847_, 1);
v_expr_4853_ = lean_ctor_get(v_val_4847_, 4);
lean_inc_ref_n(v_expr_4853_, 2);
lean_inc_ref(v_bvExpr_4852_);
lean_inc(v_val_4841_);
v___x_4854_ = l_Std_Tactic_BVDecide_BVExpr_extract___override(v_width_4851_, v_val_4839_, v_val_4841_, v_bvExpr_4852_);
v___x_4855_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0));
v___x_4856_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1));
v___x_4857_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1));
v___x_4858_ = lean_box(0);
v___x_4859_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__82, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__82_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__82);
v___x_4860_ = l_Lean_mkNatLit(v_width_4851_);
lean_inc_ref(v___x_4860_);
lean_inc_ref(v_arg_4601_);
lean_inc_ref(v_arg_4614_);
v___f_4861_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__4___boxed), 24, 12);
lean_closure_set(v___f_4861_, 0, v_width_4851_);
lean_closure_set(v___f_4861_, 1, v_expr_4853_);
lean_closure_set(v___f_4861_, 2, v_val_4847_);
lean_closure_set(v___f_4861_, 3, v___x_4855_);
lean_closure_set(v___f_4861_, 4, v___x_4856_);
lean_closure_set(v___f_4861_, 5, v___x_4857_);
lean_closure_set(v___f_4861_, 6, v___x_4591_);
lean_closure_set(v___f_4861_, 7, v___x_4858_);
lean_closure_set(v___f_4861_, 8, v_arg_4614_);
lean_closure_set(v___f_4861_, 9, v_arg_4601_);
lean_closure_set(v___f_4861_, 10, v___x_4860_);
lean_closure_set(v___f_4861_, 11, v_arg_4589_);
v___x_4862_ = l_Lean_mkApp4(v___x_4859_, v___x_4860_, v_arg_4614_, v_arg_4601_, v_expr_4853_);
v___x_4863_ = l_Lean_Meta_Sym_shareCommonInc(v___x_4862_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4863_) == 0)
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4875_; 
v_a_4864_ = lean_ctor_get(v___x_4863_, 0);
v_isSharedCheck_4875_ = !lean_is_exclusive(v___x_4863_);
if (v_isSharedCheck_4875_ == 0)
{
v___x_4866_ = v___x_4863_;
v_isShared_4867_ = v_isSharedCheck_4875_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4863_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4875_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4868_; lean_object* v___x_4870_; 
v___x_4868_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4868_, 0, v_val_4841_);
lean_ctor_set(v___x_4868_, 1, v___x_4854_);
lean_ctor_set(v___x_4868_, 2, v_origExpr_4543_);
lean_ctor_set(v___x_4868_, 3, v___f_4861_);
lean_ctor_set(v___x_4868_, 4, v_a_4864_);
if (v_isShared_4850_ == 0)
{
lean_ctor_set(v___x_4849_, 0, v___x_4868_);
v___x_4870_ = v___x_4849_;
goto v_reusejp_4869_;
}
else
{
lean_object* v_reuseFailAlloc_4874_; 
v_reuseFailAlloc_4874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4874_, 0, v___x_4868_);
v___x_4870_ = v_reuseFailAlloc_4874_;
goto v_reusejp_4869_;
}
v_reusejp_4869_:
{
lean_object* v___x_4872_; 
if (v_isShared_4867_ == 0)
{
lean_ctor_set(v___x_4866_, 0, v___x_4870_);
v___x_4872_ = v___x_4866_;
goto v_reusejp_4871_;
}
else
{
lean_object* v_reuseFailAlloc_4873_; 
v_reuseFailAlloc_4873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4873_, 0, v___x_4870_);
v___x_4872_ = v_reuseFailAlloc_4873_;
goto v_reusejp_4871_;
}
v_reusejp_4871_:
{
return v___x_4872_;
}
}
}
}
else
{
lean_object* v_a_4876_; lean_object* v___x_4878_; uint8_t v_isShared_4879_; uint8_t v_isSharedCheck_4883_; 
lean_dec_ref(v___f_4861_);
lean_dec_ref(v___x_4854_);
lean_del_object(v___x_4849_);
lean_dec(v_val_4841_);
lean_dec_ref(v_origExpr_4543_);
v_a_4876_ = lean_ctor_get(v___x_4863_, 0);
v_isSharedCheck_4883_ = !lean_is_exclusive(v___x_4863_);
if (v_isSharedCheck_4883_ == 0)
{
v___x_4878_ = v___x_4863_;
v_isShared_4879_ = v_isSharedCheck_4883_;
goto v_resetjp_4877_;
}
else
{
lean_inc(v_a_4876_);
lean_dec(v___x_4863_);
v___x_4878_ = lean_box(0);
v_isShared_4879_ = v_isSharedCheck_4883_;
goto v_resetjp_4877_;
}
v_resetjp_4877_:
{
lean_object* v___x_4881_; 
if (v_isShared_4879_ == 0)
{
v___x_4881_ = v___x_4878_;
goto v_reusejp_4880_;
}
else
{
lean_object* v_reuseFailAlloc_4882_; 
v_reuseFailAlloc_4882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4882_, 0, v_a_4876_);
v___x_4881_ = v_reuseFailAlloc_4882_;
goto v_reusejp_4880_;
}
v_reusejp_4880_:
{
return v___x_4881_;
}
}
}
}
}
else
{
lean_object* v___x_4885_; lean_object* v___x_4887_; 
lean_dec(v_a_4843_);
lean_dec(v_val_4841_);
lean_dec(v_val_4839_);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_4885_ = lean_box(0);
if (v_isShared_4846_ == 0)
{
lean_ctor_set(v___x_4845_, 0, v___x_4885_);
v___x_4887_ = v___x_4845_;
goto v_reusejp_4886_;
}
else
{
lean_object* v_reuseFailAlloc_4888_; 
v_reuseFailAlloc_4888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4888_, 0, v___x_4885_);
v___x_4887_ = v_reuseFailAlloc_4888_;
goto v_reusejp_4886_;
}
v_reusejp_4886_:
{
return v___x_4887_;
}
}
}
}
else
{
lean_dec(v_val_4841_);
lean_dec(v_val_4839_);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
return v___x_4842_;
}
}
else
{
lean_object* v___x_4890_; lean_object* v___x_4892_; 
lean_dec(v___x_4840_);
lean_dec(v_val_4839_);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_4890_ = lean_box(0);
if (v_isShared_4584_ == 0)
{
lean_ctor_set(v___x_4583_, 0, v___x_4890_);
v___x_4892_ = v___x_4583_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4893_; 
v_reuseFailAlloc_4893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4893_, 0, v___x_4890_);
v___x_4892_ = v_reuseFailAlloc_4893_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
return v___x_4892_;
}
}
}
else
{
lean_object* v___x_4894_; lean_object* v___x_4896_; 
lean_dec(v___x_4838_);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_4894_ = lean_box(0);
if (v_isShared_4584_ == 0)
{
lean_ctor_set(v___x_4583_, 0, v___x_4894_);
v___x_4896_ = v___x_4583_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4897_; 
v_reuseFailAlloc_4897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4897_, 0, v___x_4894_);
v___x_4896_ = v_reuseFailAlloc_4897_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
return v___x_4896_;
}
}
}
}
else
{
lean_object* v___x_4898_; 
lean_dec_ref(v___x_4615_);
lean_del_object(v___x_4583_);
lean_inc_ref(v_origExpr_4543_);
v___x_4898_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_bitVecAtom(v_origExpr_4543_, v___x_4617_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4898_) == 0)
{
lean_object* v_a_4899_; lean_object* v___x_4901_; uint8_t v_isShared_4902_; uint8_t v_isSharedCheck_4966_; 
v_a_4899_ = lean_ctor_get(v___x_4898_, 0);
v_isSharedCheck_4966_ = !lean_is_exclusive(v___x_4898_);
if (v_isSharedCheck_4966_ == 0)
{
v___x_4901_ = v___x_4898_;
v_isShared_4902_ = v_isSharedCheck_4966_;
goto v_resetjp_4900_;
}
else
{
lean_inc(v_a_4899_);
lean_dec(v___x_4898_);
v___x_4901_ = lean_box(0);
v_isShared_4902_ = v_isSharedCheck_4966_;
goto v_resetjp_4900_;
}
v_resetjp_4900_:
{
if (lean_obj_tag(v_a_4899_) == 1)
{
lean_object* v_val_4903_; lean_object* v___x_4904_; 
lean_del_object(v___x_4901_);
v_val_4903_ = lean_ctor_get(v_a_4899_, 0);
lean_inc_ref(v_arg_4614_);
v___x_4904_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of(v_arg_4614_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4904_) == 0)
{
lean_object* v_a_4905_; lean_object* v___x_4907_; uint8_t v_isShared_4908_; uint8_t v_isSharedCheck_4953_; 
v_a_4905_ = lean_ctor_get(v___x_4904_, 0);
v_isSharedCheck_4953_ = !lean_is_exclusive(v___x_4904_);
if (v_isSharedCheck_4953_ == 0)
{
v___x_4907_ = v___x_4904_;
v_isShared_4908_ = v_isSharedCheck_4953_;
goto v_resetjp_4906_;
}
else
{
lean_inc(v_a_4905_);
lean_dec(v___x_4904_);
v___x_4907_ = lean_box(0);
v_isShared_4908_ = v_isSharedCheck_4953_;
goto v_resetjp_4906_;
}
v_resetjp_4906_:
{
if (lean_obj_tag(v_a_4905_) == 1)
{
lean_object* v_val_4909_; lean_object* v___x_4910_; 
lean_del_object(v___x_4907_);
v_val_4909_ = lean_ctor_get(v_a_4905_, 0);
lean_inc(v_val_4909_);
lean_dec_ref_known(v_a_4905_, 1);
lean_inc_ref(v_arg_4601_);
v___x_4910_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_arg_4601_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4910_) == 0)
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4948_; 
v_a_4911_ = lean_ctor_get(v___x_4910_, 0);
v_isSharedCheck_4948_ = !lean_is_exclusive(v___x_4910_);
if (v_isSharedCheck_4948_ == 0)
{
v___x_4913_ = v___x_4910_;
v_isShared_4914_ = v_isSharedCheck_4948_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4910_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4948_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
if (lean_obj_tag(v_a_4911_) == 1)
{
lean_object* v_val_4915_; lean_object* v___x_4916_; 
lean_del_object(v___x_4913_);
v_val_4915_ = lean_ctor_get(v_a_4911_, 0);
lean_inc(v_val_4915_);
lean_dec_ref_known(v_a_4911_, 1);
lean_inc_ref(v_arg_4589_);
v___x_4916_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_arg_4589_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4916_) == 0)
{
lean_object* v_a_4917_; lean_object* v___x_4919_; uint8_t v_isShared_4920_; uint8_t v_isSharedCheck_4943_; 
v_a_4917_ = lean_ctor_get(v___x_4916_, 0);
v_isSharedCheck_4943_ = !lean_is_exclusive(v___x_4916_);
if (v_isSharedCheck_4943_ == 0)
{
v___x_4919_ = v___x_4916_;
v_isShared_4920_ = v_isSharedCheck_4943_;
goto v_resetjp_4918_;
}
else
{
lean_inc(v_a_4917_);
lean_dec(v___x_4916_);
v___x_4919_ = lean_box(0);
v_isShared_4920_ = v_isSharedCheck_4943_;
goto v_resetjp_4918_;
}
v_resetjp_4918_:
{
if (lean_obj_tag(v_a_4917_) == 1)
{
lean_object* v_val_4921_; lean_object* v___x_4922_; 
lean_del_object(v___x_4919_);
v_val_4921_ = lean_ctor_get(v_a_4917_, 0);
lean_inc(v_val_4921_);
lean_dec_ref_known(v_a_4917_, 1);
lean_inc(v_val_4903_);
v___x_4922_ = l_Lean_Meta_Tactic_BVDecide_addCondLemmas___redArg(v_val_4909_, v_val_4903_, v_val_4915_, v_val_4921_, v_arg_4614_, v_origExpr_4543_, v_arg_4601_, v_arg_4589_, v_a_4544_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4922_) == 0)
{
lean_object* v___x_4924_; uint8_t v_isShared_4925_; uint8_t v_isSharedCheck_4929_; 
v_isSharedCheck_4929_ = !lean_is_exclusive(v___x_4922_);
if (v_isSharedCheck_4929_ == 0)
{
lean_object* v_unused_4930_; 
v_unused_4930_ = lean_ctor_get(v___x_4922_, 0);
lean_dec(v_unused_4930_);
v___x_4924_ = v___x_4922_;
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
else
{
lean_dec(v___x_4922_);
v___x_4924_ = lean_box(0);
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
v_resetjp_4923_:
{
lean_object* v___x_4927_; 
if (v_isShared_4925_ == 0)
{
lean_ctor_set(v___x_4924_, 0, v_a_4899_);
v___x_4927_ = v___x_4924_;
goto v_reusejp_4926_;
}
else
{
lean_object* v_reuseFailAlloc_4928_; 
v_reuseFailAlloc_4928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4928_, 0, v_a_4899_);
v___x_4927_ = v_reuseFailAlloc_4928_;
goto v_reusejp_4926_;
}
v_reusejp_4926_:
{
return v___x_4927_;
}
}
}
else
{
lean_object* v_a_4931_; lean_object* v___x_4933_; uint8_t v_isShared_4934_; uint8_t v_isSharedCheck_4938_; 
lean_dec_ref_known(v_a_4899_, 1);
v_a_4931_ = lean_ctor_get(v___x_4922_, 0);
v_isSharedCheck_4938_ = !lean_is_exclusive(v___x_4922_);
if (v_isSharedCheck_4938_ == 0)
{
v___x_4933_ = v___x_4922_;
v_isShared_4934_ = v_isSharedCheck_4938_;
goto v_resetjp_4932_;
}
else
{
lean_inc(v_a_4931_);
lean_dec(v___x_4922_);
v___x_4933_ = lean_box(0);
v_isShared_4934_ = v_isSharedCheck_4938_;
goto v_resetjp_4932_;
}
v_resetjp_4932_:
{
lean_object* v___x_4936_; 
if (v_isShared_4934_ == 0)
{
v___x_4936_ = v___x_4933_;
goto v_reusejp_4935_;
}
else
{
lean_object* v_reuseFailAlloc_4937_; 
v_reuseFailAlloc_4937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4937_, 0, v_a_4931_);
v___x_4936_ = v_reuseFailAlloc_4937_;
goto v_reusejp_4935_;
}
v_reusejp_4935_:
{
return v___x_4936_;
}
}
}
}
else
{
lean_object* v___x_4939_; lean_object* v___x_4941_; 
lean_dec(v_a_4917_);
lean_dec(v_val_4915_);
lean_dec(v_val_4909_);
lean_dec_ref_known(v_a_4899_, 1);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_4939_ = lean_box(0);
if (v_isShared_4920_ == 0)
{
lean_ctor_set(v___x_4919_, 0, v___x_4939_);
v___x_4941_ = v___x_4919_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4942_; 
v_reuseFailAlloc_4942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4942_, 0, v___x_4939_);
v___x_4941_ = v_reuseFailAlloc_4942_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
return v___x_4941_;
}
}
}
}
else
{
lean_dec(v_val_4915_);
lean_dec(v_val_4909_);
lean_dec_ref_known(v_a_4899_, 1);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
return v___x_4916_;
}
}
else
{
lean_object* v___x_4944_; lean_object* v___x_4946_; 
lean_dec(v_a_4911_);
lean_dec(v_val_4909_);
lean_dec_ref_known(v_a_4899_, 1);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_4944_ = lean_box(0);
if (v_isShared_4914_ == 0)
{
lean_ctor_set(v___x_4913_, 0, v___x_4944_);
v___x_4946_ = v___x_4913_;
goto v_reusejp_4945_;
}
else
{
lean_object* v_reuseFailAlloc_4947_; 
v_reuseFailAlloc_4947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4947_, 0, v___x_4944_);
v___x_4946_ = v_reuseFailAlloc_4947_;
goto v_reusejp_4945_;
}
v_reusejp_4945_:
{
return v___x_4946_;
}
}
}
}
else
{
lean_dec(v_val_4909_);
lean_dec_ref_known(v_a_4899_, 1);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
return v___x_4910_;
}
}
else
{
lean_object* v___x_4949_; lean_object* v___x_4951_; 
lean_dec(v_a_4905_);
lean_dec_ref_known(v_a_4899_, 1);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_4949_ = lean_box(0);
if (v_isShared_4908_ == 0)
{
lean_ctor_set(v___x_4907_, 0, v___x_4949_);
v___x_4951_ = v___x_4907_;
goto v_reusejp_4950_;
}
else
{
lean_object* v_reuseFailAlloc_4952_; 
v_reuseFailAlloc_4952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4952_, 0, v___x_4949_);
v___x_4951_ = v_reuseFailAlloc_4952_;
goto v_reusejp_4950_;
}
v_reusejp_4950_:
{
return v___x_4951_;
}
}
}
}
else
{
lean_object* v_a_4954_; lean_object* v___x_4956_; uint8_t v_isShared_4957_; uint8_t v_isSharedCheck_4961_; 
lean_dec_ref_known(v_a_4899_, 1);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v_a_4954_ = lean_ctor_get(v___x_4904_, 0);
v_isSharedCheck_4961_ = !lean_is_exclusive(v___x_4904_);
if (v_isSharedCheck_4961_ == 0)
{
v___x_4956_ = v___x_4904_;
v_isShared_4957_ = v_isSharedCheck_4961_;
goto v_resetjp_4955_;
}
else
{
lean_inc(v_a_4954_);
lean_dec(v___x_4904_);
v___x_4956_ = lean_box(0);
v_isShared_4957_ = v_isSharedCheck_4961_;
goto v_resetjp_4955_;
}
v_resetjp_4955_:
{
lean_object* v___x_4959_; 
if (v_isShared_4957_ == 0)
{
v___x_4959_ = v___x_4956_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4960_; 
v_reuseFailAlloc_4960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4960_, 0, v_a_4954_);
v___x_4959_ = v_reuseFailAlloc_4960_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
return v___x_4959_;
}
}
}
}
else
{
lean_object* v___x_4962_; lean_object* v___x_4964_; 
lean_dec(v_a_4899_);
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_4962_ = lean_box(0);
if (v_isShared_4902_ == 0)
{
lean_ctor_set(v___x_4901_, 0, v___x_4962_);
v___x_4964_ = v___x_4901_;
goto v_reusejp_4963_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v___x_4962_);
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
else
{
lean_dec_ref(v_arg_4614_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
return v___x_4898_;
}
}
}
}
else
{
lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; 
lean_dec_ref(v___x_4602_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v___x_4590_);
lean_del_object(v___x_4583_);
v___x_4967_ = lean_box(0);
v___x_4968_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__84));
v___x_4969_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection(v_arg_4589_, v___x_4967_, v___x_4968_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4969_;
}
}
else
{
lean_object* v___x_4970_; 
lean_dec_ref(v___x_4602_);
lean_dec_ref(v___x_4590_);
v___x_4970_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_4589_);
lean_dec_ref(v_arg_4589_);
if (lean_obj_tag(v___x_4970_) == 1)
{
lean_object* v_val_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; 
lean_del_object(v___x_4583_);
v_val_4971_ = lean_ctor_get(v___x_4970_, 0);
lean_inc(v_val_4971_);
lean_dec_ref_known(v___x_4970_, 1);
v___x_4972_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__11));
v___x_4973_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__86));
v___x_4974_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection(v_val_4971_, v_arg_4601_, v___f_4572_, v___x_4972_, v___x_4973_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_4974_;
}
else
{
lean_object* v___x_4975_; lean_object* v___x_4977_; 
lean_dec(v___x_4970_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_origExpr_4543_);
v___x_4975_ = lean_box(0);
if (v_isShared_4584_ == 0)
{
lean_ctor_set(v___x_4583_, 0, v___x_4975_);
v___x_4977_ = v___x_4583_;
goto v_reusejp_4976_;
}
else
{
lean_object* v_reuseFailAlloc_4978_; 
v_reuseFailAlloc_4978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4978_, 0, v___x_4975_);
v___x_4977_ = v_reuseFailAlloc_4978_;
goto v_reusejp_4976_;
}
v_reusejp_4976_:
{
return v___x_4977_;
}
}
}
}
else
{
lean_object* v___x_4979_; 
lean_dec_ref(v___x_4602_);
lean_dec_ref(v___x_4590_);
lean_del_object(v___x_4583_);
lean_inc_ref(v_arg_4589_);
v___x_4979_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_arg_4589_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4979_) == 0)
{
lean_object* v_a_4980_; lean_object* v___x_4982_; uint8_t v_isShared_4983_; uint8_t v_isSharedCheck_5045_; 
v_a_4980_ = lean_ctor_get(v___x_4979_, 0);
v_isSharedCheck_5045_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_5045_ == 0)
{
v___x_4982_ = v___x_4979_;
v_isShared_4983_ = v_isSharedCheck_5045_;
goto v_resetjp_4981_;
}
else
{
lean_inc(v_a_4980_);
lean_dec(v___x_4979_);
v___x_4982_ = lean_box(0);
v_isShared_4983_ = v_isSharedCheck_5045_;
goto v_resetjp_4981_;
}
v_resetjp_4981_:
{
if (lean_obj_tag(v_a_4980_) == 1)
{
lean_object* v_val_4984_; lean_object* v___x_4985_; 
v_val_4984_ = lean_ctor_get(v_a_4980_, 0);
lean_inc(v_val_4984_);
lean_dec_ref_known(v_a_4980_, 1);
v___x_4985_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_4601_);
lean_dec_ref(v_arg_4601_);
if (lean_obj_tag(v___x_4985_) == 1)
{
lean_object* v_val_4986_; lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_5036_; 
lean_del_object(v___x_4982_);
v_val_4986_ = lean_ctor_get(v___x_4985_, 0);
v_isSharedCheck_5036_ = !lean_is_exclusive(v___x_4985_);
if (v_isSharedCheck_5036_ == 0)
{
v___x_4988_ = v___x_4985_;
v_isShared_4989_ = v_isSharedCheck_5036_;
goto v_resetjp_4987_;
}
else
{
lean_inc(v_val_4986_);
lean_dec(v___x_4985_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_5036_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
lean_object* v_width_4990_; lean_object* v_bvExpr_4991_; lean_object* v_expr_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; 
v_width_4990_ = lean_ctor_get(v_val_4984_, 0);
lean_inc_n(v_width_4990_, 2);
v_bvExpr_4991_ = lean_ctor_get(v_val_4984_, 1);
v_expr_4992_ = lean_ctor_get(v_val_4984_, 4);
lean_inc_ref(v_expr_4992_);
v___x_4993_ = lean_nat_mul(v_width_4990_, v_val_4986_);
lean_inc_ref(v_bvExpr_4991_);
lean_inc(v_val_4986_);
lean_inc_n(v___x_4993_, 2);
v___x_4994_ = l_Std_Tactic_BVDecide_BVExpr_replicate___override___redArg(v_width_4990_, v___x_4993_, v_val_4986_, v_bvExpr_4991_);
v___x_4995_ = l_Lean_mkNatLit(v___x_4993_);
lean_inc_ref(v___x_4995_);
v___x_4996_ = l_Lean_Meta_mkEqRefl(v___x_4995_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_4996_) == 0)
{
lean_object* v_a_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; lean_object* v___f_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; 
v_a_4997_ = lean_ctor_get(v___x_4996_, 0);
lean_inc(v_a_4997_);
lean_dec_ref_known(v___x_4996_, 1);
v___x_4998_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__0));
v___x_4999_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_checkFunAtom_spec__6___closed__1));
v___x_5000_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___closed__1));
v___x_5001_ = lean_box(0);
v___x_5002_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__88, &l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__88_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__88);
lean_inc(v_width_4990_);
v___x_5003_ = l_Lean_mkNatLit(v_width_4990_);
v___x_5004_ = l_Lean_mkNatLit(v_val_4986_);
lean_inc_ref(v___x_5003_);
lean_inc_ref(v___x_5004_);
lean_inc_ref(v_expr_4992_);
v___f_5005_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___lam__5___boxed), 23, 11);
lean_closure_set(v___f_5005_, 0, v_width_4990_);
lean_closure_set(v___f_5005_, 1, v_expr_4992_);
lean_closure_set(v___f_5005_, 2, v_val_4984_);
lean_closure_set(v___f_5005_, 3, v___x_4998_);
lean_closure_set(v___f_5005_, 4, v___x_4999_);
lean_closure_set(v___f_5005_, 5, v___x_5000_);
lean_closure_set(v___f_5005_, 6, v___x_4591_);
lean_closure_set(v___f_5005_, 7, v___x_5001_);
lean_closure_set(v___f_5005_, 8, v___x_5004_);
lean_closure_set(v___f_5005_, 9, v___x_5003_);
lean_closure_set(v___f_5005_, 10, v_arg_4589_);
v___x_5006_ = l_Lean_mkApp5(v___x_5002_, v___x_5003_, v___x_4995_, v___x_5004_, v_expr_4992_, v_a_4997_);
v___x_5007_ = l_Lean_Meta_Sym_shareCommonInc(v___x_5006_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
if (lean_obj_tag(v___x_5007_) == 0)
{
lean_object* v_a_5008_; lean_object* v___x_5010_; uint8_t v_isShared_5011_; uint8_t v_isSharedCheck_5019_; 
v_a_5008_ = lean_ctor_get(v___x_5007_, 0);
v_isSharedCheck_5019_ = !lean_is_exclusive(v___x_5007_);
if (v_isSharedCheck_5019_ == 0)
{
v___x_5010_ = v___x_5007_;
v_isShared_5011_ = v_isSharedCheck_5019_;
goto v_resetjp_5009_;
}
else
{
lean_inc(v_a_5008_);
lean_dec(v___x_5007_);
v___x_5010_ = lean_box(0);
v_isShared_5011_ = v_isSharedCheck_5019_;
goto v_resetjp_5009_;
}
v_resetjp_5009_:
{
lean_object* v___x_5012_; lean_object* v___x_5014_; 
v___x_5012_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5012_, 0, v___x_4993_);
lean_ctor_set(v___x_5012_, 1, v___x_4994_);
lean_ctor_set(v___x_5012_, 2, v_origExpr_4543_);
lean_ctor_set(v___x_5012_, 3, v___f_5005_);
lean_ctor_set(v___x_5012_, 4, v_a_5008_);
if (v_isShared_4989_ == 0)
{
lean_ctor_set(v___x_4988_, 0, v___x_5012_);
v___x_5014_ = v___x_4988_;
goto v_reusejp_5013_;
}
else
{
lean_object* v_reuseFailAlloc_5018_; 
v_reuseFailAlloc_5018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5018_, 0, v___x_5012_);
v___x_5014_ = v_reuseFailAlloc_5018_;
goto v_reusejp_5013_;
}
v_reusejp_5013_:
{
lean_object* v___x_5016_; 
if (v_isShared_5011_ == 0)
{
lean_ctor_set(v___x_5010_, 0, v___x_5014_);
v___x_5016_ = v___x_5010_;
goto v_reusejp_5015_;
}
else
{
lean_object* v_reuseFailAlloc_5017_; 
v_reuseFailAlloc_5017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5017_, 0, v___x_5014_);
v___x_5016_ = v_reuseFailAlloc_5017_;
goto v_reusejp_5015_;
}
v_reusejp_5015_:
{
return v___x_5016_;
}
}
}
}
else
{
lean_object* v_a_5020_; lean_object* v___x_5022_; uint8_t v_isShared_5023_; uint8_t v_isSharedCheck_5027_; 
lean_dec_ref(v___f_5005_);
lean_dec_ref(v___x_4994_);
lean_dec(v___x_4993_);
lean_del_object(v___x_4988_);
lean_dec_ref(v_origExpr_4543_);
v_a_5020_ = lean_ctor_get(v___x_5007_, 0);
v_isSharedCheck_5027_ = !lean_is_exclusive(v___x_5007_);
if (v_isSharedCheck_5027_ == 0)
{
v___x_5022_ = v___x_5007_;
v_isShared_5023_ = v_isSharedCheck_5027_;
goto v_resetjp_5021_;
}
else
{
lean_inc(v_a_5020_);
lean_dec(v___x_5007_);
v___x_5022_ = lean_box(0);
v_isShared_5023_ = v_isSharedCheck_5027_;
goto v_resetjp_5021_;
}
v_resetjp_5021_:
{
lean_object* v___x_5025_; 
if (v_isShared_5023_ == 0)
{
v___x_5025_ = v___x_5022_;
goto v_reusejp_5024_;
}
else
{
lean_object* v_reuseFailAlloc_5026_; 
v_reuseFailAlloc_5026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5026_, 0, v_a_5020_);
v___x_5025_ = v_reuseFailAlloc_5026_;
goto v_reusejp_5024_;
}
v_reusejp_5024_:
{
return v___x_5025_;
}
}
}
}
else
{
lean_object* v_a_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5035_; 
lean_dec_ref(v___x_4995_);
lean_dec_ref(v___x_4994_);
lean_dec(v___x_4993_);
lean_dec_ref(v_expr_4992_);
lean_dec(v_width_4990_);
lean_del_object(v___x_4988_);
lean_dec(v_val_4986_);
lean_dec(v_val_4984_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v_a_5028_ = lean_ctor_get(v___x_4996_, 0);
v_isSharedCheck_5035_ = !lean_is_exclusive(v___x_4996_);
if (v_isSharedCheck_5035_ == 0)
{
v___x_5030_ = v___x_4996_;
v_isShared_5031_ = v_isSharedCheck_5035_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_a_5028_);
lean_dec(v___x_4996_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5035_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
lean_object* v___x_5033_; 
if (v_isShared_5031_ == 0)
{
v___x_5033_ = v___x_5030_;
goto v_reusejp_5032_;
}
else
{
lean_object* v_reuseFailAlloc_5034_; 
v_reuseFailAlloc_5034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5034_, 0, v_a_5028_);
v___x_5033_ = v_reuseFailAlloc_5034_;
goto v_reusejp_5032_;
}
v_reusejp_5032_:
{
return v___x_5033_;
}
}
}
}
}
else
{
lean_object* v___x_5037_; lean_object* v___x_5039_; 
lean_dec(v___x_4985_);
lean_dec(v_val_4984_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_5037_ = lean_box(0);
if (v_isShared_4983_ == 0)
{
lean_ctor_set(v___x_4982_, 0, v___x_5037_);
v___x_5039_ = v___x_4982_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v___x_5037_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
}
else
{
lean_object* v___x_5041_; lean_object* v___x_5043_; 
lean_dec(v_a_4980_);
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
v___x_5041_ = lean_box(0);
if (v_isShared_4983_ == 0)
{
lean_ctor_set(v___x_4982_, 0, v___x_5041_);
v___x_5043_ = v___x_4982_;
goto v_reusejp_5042_;
}
else
{
lean_object* v_reuseFailAlloc_5044_; 
v_reuseFailAlloc_5044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5044_, 0, v___x_5041_);
v___x_5043_ = v_reuseFailAlloc_5044_;
goto v_reusejp_5042_;
}
v_reusejp_5042_:
{
return v___x_5043_;
}
}
}
}
else
{
lean_dec_ref(v_arg_4601_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v_origExpr_4543_);
return v___x_4979_;
}
}
}
else
{
lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; 
lean_dec_ref(v___x_4602_);
lean_dec_ref(v___x_4590_);
lean_del_object(v___x_4583_);
v___x_5046_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__5));
v___x_5047_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__90));
v___x_5048_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_rotateReflection(v_arg_4589_, v_arg_4601_, v___f_4576_, v___x_5046_, v___x_5047_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
lean_dec_ref(v_arg_4589_);
return v___x_5048_;
}
}
else
{
lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; 
lean_dec_ref(v___x_4602_);
lean_dec_ref(v___x_4590_);
lean_del_object(v___x_4583_);
v___x_5049_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___closed__8));
v___x_5050_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__92));
v___x_5051_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_rotateReflection(v_arg_4589_, v_arg_4601_, v___f_4577_, v___x_5049_, v___x_5050_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
lean_dec_ref(v_arg_4589_);
return v___x_5051_;
}
}
}
else
{
lean_object* v___x_5052_; 
lean_dec_ref(v___x_4590_);
lean_dec_ref(v_arg_4589_);
lean_dec_ref(v___x_4587_);
lean_del_object(v___x_4583_);
v___x_5052_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goBvLit(v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_5052_;
}
}
else
{
lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; 
lean_dec_ref(v___x_4590_);
lean_dec_ref(v___x_4587_);
lean_del_object(v___x_4583_);
v___x_5053_ = lean_box(4);
v___x_5054_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__94));
v___x_5055_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection(v_arg_4589_, v___x_5053_, v___x_5054_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_5055_;
}
}
else
{
lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; 
lean_dec_ref(v___x_4590_);
lean_dec_ref(v___x_4587_);
lean_del_object(v___x_4583_);
v___x_5056_ = lean_box(5);
v___x_5057_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__96));
v___x_5058_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection(v_arg_4589_, v___x_5056_, v___x_5057_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_5058_;
}
}
else
{
lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; 
lean_dec_ref(v___x_4590_);
lean_dec_ref(v___x_4587_);
lean_del_object(v___x_4583_);
v___x_5059_ = lean_box(6);
v___x_5060_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___closed__98));
v___x_5061_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection(v_arg_4589_, v___x_5059_, v___x_5060_, v_origExpr_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, v_a_4553_, v_a_4554_, v_a_4555_);
return v___x_5061_;
}
}
}
}
}
else
{
lean_object* v_a_5063_; lean_object* v___x_5065_; uint8_t v_isShared_5066_; uint8_t v_isSharedCheck_5070_; 
lean_dec_ref(v_origExpr_4543_);
v_a_5063_ = lean_ctor_get(v___x_4580_, 0);
v_isSharedCheck_5070_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_5070_ == 0)
{
v___x_5065_ = v___x_4580_;
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
else
{
lean_inc(v_a_5063_);
lean_dec(v___x_4580_);
v___x_5065_ = lean_box(0);
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
v_resetjp_5064_:
{
lean_object* v___x_5068_; 
if (v_isShared_5066_ == 0)
{
v___x_5068_ = v___x_5065_;
goto v_reusejp_5067_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v_a_5063_);
v___x_5068_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5067_;
}
v_reusejp_5067_:
{
return v___x_5068_;
}
}
}
}
else
{
lean_object* v_a_5071_; lean_object* v___x_5073_; uint8_t v_isShared_5074_; uint8_t v_isSharedCheck_5078_; 
lean_dec_ref(v_origExpr_4543_);
v_a_5071_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_5078_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_5078_ == 0)
{
v___x_5073_ = v___x_4579_;
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
else
{
lean_inc(v_a_5071_);
lean_dec(v___x_4579_);
v___x_5073_ = lean_box(0);
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
v_resetjp_5072_:
{
lean_object* v___x_5076_; 
if (v_isShared_5074_ == 0)
{
v___x_5076_ = v___x_5073_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5077_; 
v_reuseFailAlloc_5077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5077_, 0, v_a_5071_);
v___x_5076_ = v_reuseFailAlloc_5077_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
return v___x_5076_;
}
}
}
v___jp_4557_:
{
lean_object* v___x_4558_; lean_object* v___x_4559_; 
v___x_4558_ = lean_box(0);
v___x_4559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4558_);
return v___x_4559_;
}
v___jp_4560_:
{
lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4561_ = lean_box(0);
v___x_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4561_);
return v___x_4562_;
}
v___jp_4563_:
{
lean_object* v___x_4564_; lean_object* v___x_4565_; 
v___x_4564_ = lean_box(0);
v___x_4565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4564_);
return v___x_4565_;
}
v___jp_4566_:
{
lean_object* v___x_4567_; lean_object* v___x_4568_; 
v___x_4567_ = lean_box(0);
v___x_4568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4568_, 0, v___x_4567_);
return v___x_4568_;
}
v___jp_4569_:
{
lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4570_ = lean_box(0);
v___x_4571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4571_, 0, v___x_4570_);
return v___x_4571_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVExprCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom_spec__10(lean_object* v_e_5079_, lean_object* v_a_5080_, lean_object* v_a_5081_, lean_object* v_a_5082_, lean_object* v_a_5083_, lean_object* v_a_5084_, lean_object* v_a_5085_, lean_object* v_a_5086_, lean_object* v_a_5087_, lean_object* v_a_5088_, lean_object* v_a_5089_, lean_object* v_a_5090_, lean_object* v_a_5091_){
_start:
{
lean_object* v_a_5094_; lean_object* v___x_5110_; lean_object* v_bvExprCache_5111_; lean_object* v___x_5112_; 
v___x_5110_ = lean_st_ref_get(v_a_5080_);
v_bvExprCache_5111_ = lean_ctor_get(v___x_5110_, 1);
lean_inc_ref(v_bvExprCache_5111_);
lean_dec(v___x_5110_);
v___x_5112_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___redArg(v_bvExprCache_5111_, v_e_5079_);
lean_dec_ref(v_bvExprCache_5111_);
if (lean_obj_tag(v___x_5112_) == 0)
{
lean_object* v___x_5113_; 
lean_inc_ref(v_e_5079_);
v___x_5113_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go(v_e_5079_, v_a_5080_, v_a_5081_, v_a_5082_, v_a_5083_, v_a_5084_, v_a_5085_, v_a_5086_, v_a_5087_, v_a_5088_, v_a_5089_, v_a_5090_, v_a_5091_);
if (lean_obj_tag(v___x_5113_) == 0)
{
lean_object* v_a_5114_; 
v_a_5114_ = lean_ctor_get(v___x_5113_, 0);
lean_inc(v_a_5114_);
lean_dec_ref_known(v___x_5113_, 1);
if (lean_obj_tag(v_a_5114_) == 0)
{
uint8_t v___x_5115_; lean_object* v___x_5116_; 
v___x_5115_ = 0;
lean_inc_ref(v_e_5079_);
v___x_5116_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_bitVecAtom(v_e_5079_, v___x_5115_, v_a_5080_, v_a_5081_, v_a_5082_, v_a_5083_, v_a_5084_, v_a_5085_, v_a_5086_, v_a_5087_, v_a_5088_, v_a_5089_, v_a_5090_, v_a_5091_);
if (lean_obj_tag(v___x_5116_) == 0)
{
lean_object* v_a_5117_; 
v_a_5117_ = lean_ctor_get(v___x_5116_, 0);
lean_inc(v_a_5117_);
lean_dec_ref_known(v___x_5116_, 1);
v_a_5094_ = v_a_5117_;
goto v___jp_5093_;
}
else
{
lean_dec_ref(v_e_5079_);
return v___x_5116_;
}
}
else
{
v_a_5094_ = v_a_5114_;
goto v___jp_5093_;
}
}
else
{
lean_dec_ref(v_e_5079_);
return v___x_5113_;
}
}
else
{
lean_object* v_val_5118_; lean_object* v___x_5120_; uint8_t v_isShared_5121_; uint8_t v_isSharedCheck_5125_; 
lean_dec_ref(v_e_5079_);
v_val_5118_ = lean_ctor_get(v___x_5112_, 0);
v_isSharedCheck_5125_ = !lean_is_exclusive(v___x_5112_);
if (v_isSharedCheck_5125_ == 0)
{
v___x_5120_ = v___x_5112_;
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
else
{
lean_inc(v_val_5118_);
lean_dec(v___x_5112_);
v___x_5120_ = lean_box(0);
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
v_resetjp_5119_:
{
lean_object* v___x_5123_; 
if (v_isShared_5121_ == 0)
{
lean_ctor_set_tag(v___x_5120_, 0);
v___x_5123_ = v___x_5120_;
goto v_reusejp_5122_;
}
else
{
lean_object* v_reuseFailAlloc_5124_; 
v_reuseFailAlloc_5124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5124_, 0, v_val_5118_);
v___x_5123_ = v_reuseFailAlloc_5124_;
goto v_reusejp_5122_;
}
v_reusejp_5122_:
{
return v___x_5123_;
}
}
}
v___jp_5093_:
{
lean_object* v___x_5095_; lean_object* v_lemmas_5096_; lean_object* v_bvExprCache_5097_; lean_object* v_bvPredCache_5098_; lean_object* v_bvLogicalCache_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5109_; 
v___x_5095_ = lean_st_ref_take(v_a_5080_);
v_lemmas_5096_ = lean_ctor_get(v___x_5095_, 0);
v_bvExprCache_5097_ = lean_ctor_get(v___x_5095_, 1);
v_bvPredCache_5098_ = lean_ctor_get(v___x_5095_, 2);
v_bvLogicalCache_5099_ = lean_ctor_get(v___x_5095_, 3);
v_isSharedCheck_5109_ = !lean_is_exclusive(v___x_5095_);
if (v_isSharedCheck_5109_ == 0)
{
v___x_5101_ = v___x_5095_;
v_isShared_5102_ = v_isSharedCheck_5109_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_bvLogicalCache_5099_);
lean_inc(v_bvPredCache_5098_);
lean_inc(v_bvExprCache_5097_);
lean_inc(v_lemmas_5096_);
lean_dec(v___x_5095_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5109_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v___x_5103_; lean_object* v___x_5105_; 
lean_inc(v_a_5094_);
v___x_5103_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17___redArg(v_bvExprCache_5097_, v_e_5079_, v_a_5094_);
if (v_isShared_5102_ == 0)
{
lean_ctor_set(v___x_5101_, 1, v___x_5103_);
v___x_5105_ = v___x_5101_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5108_; 
v_reuseFailAlloc_5108_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5108_, 0, v_lemmas_5096_);
lean_ctor_set(v_reuseFailAlloc_5108_, 1, v___x_5103_);
lean_ctor_set(v_reuseFailAlloc_5108_, 2, v_bvPredCache_5098_);
lean_ctor_set(v_reuseFailAlloc_5108_, 3, v_bvLogicalCache_5099_);
v___x_5105_ = v_reuseFailAlloc_5108_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
lean_object* v___x_5106_; lean_object* v___x_5107_; 
v___x_5106_ = lean_st_ref_put(v_a_5080_, v___x_5105_);
v___x_5107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5107_, 0, v_a_5094_);
return v___x_5107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(lean_object* v_origExpr_5126_, lean_object* v_a_5127_, lean_object* v_a_5128_, lean_object* v_a_5129_, lean_object* v_a_5130_, lean_object* v_a_5131_, lean_object* v_a_5132_, lean_object* v_a_5133_, lean_object* v_a_5134_, lean_object* v_a_5135_, lean_object* v_a_5136_, lean_object* v_a_5137_, lean_object* v_a_5138_){
_start:
{
lean_object* v___x_5140_; 
v___x_5140_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVExprCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom_spec__10(v_origExpr_5126_, v_a_5127_, v_a_5128_, v_a_5129_, v_a_5130_, v_a_5131_, v_a_5132_, v_a_5133_, v_a_5134_, v_a_5135_, v_a_5136_, v_a_5137_, v_a_5138_);
return v___x_5140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of(lean_object* v_origExpr_5141_, lean_object* v_a_5142_, lean_object* v_a_5143_, lean_object* v_a_5144_, lean_object* v_a_5145_, lean_object* v_a_5146_, lean_object* v_a_5147_, lean_object* v_a_5148_, lean_object* v_a_5149_, lean_object* v_a_5150_, lean_object* v_a_5151_, lean_object* v_a_5152_, lean_object* v_a_5153_){
_start:
{
lean_object* v___x_5155_; 
v___x_5155_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_origExpr_5141_, v_a_5142_, v_a_5143_, v_a_5144_, v_a_5145_, v_a_5146_, v_a_5147_, v_a_5148_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_, v_a_5153_);
return v___x_5155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of___boxed(lean_object* v_origExpr_5156_, lean_object* v_a_5157_, lean_object* v_a_5158_, lean_object* v_a_5159_, lean_object* v_a_5160_, lean_object* v_a_5161_, lean_object* v_a_5162_, lean_object* v_a_5163_, lean_object* v_a_5164_, lean_object* v_a_5165_, lean_object* v_a_5166_, lean_object* v_a_5167_, lean_object* v_a_5168_, lean_object* v_a_5169_){
_start:
{
lean_object* v_res_5170_; 
v_res_5170_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of(v_origExpr_5156_, v_a_5157_, v_a_5158_, v_a_5159_, v_a_5160_, v_a_5161_, v_a_5162_, v_a_5163_, v_a_5164_, v_a_5165_, v_a_5166_, v_a_5167_, v_a_5168_);
lean_dec(v_a_5168_);
lean_dec_ref(v_a_5167_);
lean_dec(v_a_5166_);
lean_dec_ref(v_a_5165_);
lean_dec(v_a_5164_);
lean_dec_ref(v_a_5163_);
lean_dec(v_a_5162_);
lean_dec_ref(v_a_5161_);
lean_dec(v_a_5160_);
lean_dec(v_a_5159_);
lean_dec_ref(v_a_5158_);
lean_dec(v_a_5157_);
return v_res_5170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of___boxed(lean_object* v_origExpr_5171_, lean_object* v_a_5172_, lean_object* v_a_5173_, lean_object* v_a_5174_, lean_object* v_a_5175_, lean_object* v_a_5176_, lean_object* v_a_5177_, lean_object* v_a_5178_, lean_object* v_a_5179_, lean_object* v_a_5180_, lean_object* v_a_5181_, lean_object* v_a_5182_, lean_object* v_a_5183_, lean_object* v_a_5184_){
_start:
{
lean_object* v_res_5185_; 
v_res_5185_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of(v_origExpr_5171_, v_a_5172_, v_a_5173_, v_a_5174_, v_a_5175_, v_a_5176_, v_a_5177_, v_a_5178_, v_a_5179_, v_a_5180_, v_a_5181_, v_a_5182_, v_a_5183_);
lean_dec(v_a_5183_);
lean_dec_ref(v_a_5182_);
lean_dec(v_a_5181_);
lean_dec_ref(v_a_5180_);
lean_dec(v_a_5179_);
lean_dec_ref(v_a_5178_);
lean_dec(v_a_5177_);
lean_dec_ref(v_a_5176_);
lean_dec(v_a_5175_);
lean_dec(v_a_5174_);
lean_dec_ref(v_a_5173_);
lean_dec(v_a_5172_);
return v_res_5185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of___boxed(lean_object* v_origExpr_5186_, lean_object* v_a_5187_, lean_object* v_a_5188_, lean_object* v_a_5189_, lean_object* v_a_5190_, lean_object* v_a_5191_, lean_object* v_a_5192_, lean_object* v_a_5193_, lean_object* v_a_5194_, lean_object* v_a_5195_, lean_object* v_a_5196_, lean_object* v_a_5197_, lean_object* v_a_5198_, lean_object* v_a_5199_){
_start:
{
lean_object* v_res_5200_; 
v_res_5200_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of(v_origExpr_5186_, v_a_5187_, v_a_5188_, v_a_5189_, v_a_5190_, v_a_5191_, v_a_5192_, v_a_5193_, v_a_5194_, v_a_5195_, v_a_5196_, v_a_5197_, v_a_5198_);
lean_dec(v_a_5198_);
lean_dec_ref(v_a_5197_);
lean_dec(v_a_5196_);
lean_dec_ref(v_a_5195_);
lean_dec(v_a_5194_);
lean_dec_ref(v_a_5193_);
lean_dec(v_a_5192_);
lean_dec_ref(v_a_5191_);
lean_dec(v_a_5190_);
lean_dec(v_a_5189_);
lean_dec_ref(v_a_5188_);
lean_dec(v_a_5187_);
return v_res_5200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom___boxed(lean_object* v_origExpr_5201_, lean_object* v_a_5202_, lean_object* v_a_5203_, lean_object* v_a_5204_, lean_object* v_a_5205_, lean_object* v_a_5206_, lean_object* v_a_5207_, lean_object* v_a_5208_, lean_object* v_a_5209_, lean_object* v_a_5210_, lean_object* v_a_5211_, lean_object* v_a_5212_, lean_object* v_a_5213_, lean_object* v_a_5214_){
_start:
{
lean_object* v_res_5215_; 
v_res_5215_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom(v_origExpr_5201_, v_a_5202_, v_a_5203_, v_a_5204_, v_a_5205_, v_a_5206_, v_a_5207_, v_a_5208_, v_a_5209_, v_a_5210_, v_a_5211_, v_a_5212_, v_a_5213_);
lean_dec(v_a_5213_);
lean_dec_ref(v_a_5212_);
lean_dec(v_a_5211_);
lean_dec_ref(v_a_5210_);
lean_dec(v_a_5209_);
lean_dec_ref(v_a_5208_);
lean_dec(v_a_5207_);
lean_dec_ref(v_a_5206_);
lean_dec(v_a_5205_);
lean_dec(v_a_5204_);
lean_dec_ref(v_a_5203_);
lean_dec(v_a_5202_);
return v_res_5215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom___boxed(lean_object* v_origExpr_5216_, lean_object* v_a_5217_, lean_object* v_a_5218_, lean_object* v_a_5219_, lean_object* v_a_5220_, lean_object* v_a_5221_, lean_object* v_a_5222_, lean_object* v_a_5223_, lean_object* v_a_5224_, lean_object* v_a_5225_, lean_object* v_a_5226_, lean_object* v_a_5227_, lean_object* v_a_5228_, lean_object* v_a_5229_){
_start:
{
lean_object* v_res_5230_; 
v_res_5230_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom(v_origExpr_5216_, v_a_5217_, v_a_5218_, v_a_5219_, v_a_5220_, v_a_5221_, v_a_5222_, v_a_5223_, v_a_5224_, v_a_5225_, v_a_5226_, v_a_5227_, v_a_5228_);
lean_dec(v_a_5228_);
lean_dec_ref(v_a_5227_);
lean_dec(v_a_5226_);
lean_dec_ref(v_a_5225_);
lean_dec(v_a_5224_);
lean_dec_ref(v_a_5223_);
lean_dec(v_a_5222_);
lean_dec_ref(v_a_5221_);
lean_dec(v_a_5220_);
lean_dec(v_a_5219_);
lean_dec_ref(v_a_5218_);
lean_dec(v_a_5217_);
return v_res_5230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_rotateReflection___boxed(lean_object** _args){
lean_object* v_distanceExpr_5231_ = _args[0];
lean_object* v_innerExpr_5232_ = _args[1];
lean_object* v_rotateOp_5233_ = _args[2];
lean_object* v_rotateOpName_5234_ = _args[3];
lean_object* v_congrThm_5235_ = _args[4];
lean_object* v_origExpr_5236_ = _args[5];
lean_object* v_a_5237_ = _args[6];
lean_object* v_a_5238_ = _args[7];
lean_object* v_a_5239_ = _args[8];
lean_object* v_a_5240_ = _args[9];
lean_object* v_a_5241_ = _args[10];
lean_object* v_a_5242_ = _args[11];
lean_object* v_a_5243_ = _args[12];
lean_object* v_a_5244_ = _args[13];
lean_object* v_a_5245_ = _args[14];
lean_object* v_a_5246_ = _args[15];
lean_object* v_a_5247_ = _args[16];
lean_object* v_a_5248_ = _args[17];
lean_object* v_a_5249_ = _args[18];
_start:
{
lean_object* v_res_5250_; 
v_res_5250_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_rotateReflection(v_distanceExpr_5231_, v_innerExpr_5232_, v_rotateOp_5233_, v_rotateOpName_5234_, v_congrThm_5235_, v_origExpr_5236_, v_a_5237_, v_a_5238_, v_a_5239_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_, v_a_5244_, v_a_5245_, v_a_5246_, v_a_5247_, v_a_5248_);
lean_dec(v_a_5248_);
lean_dec_ref(v_a_5247_);
lean_dec(v_a_5246_);
lean_dec_ref(v_a_5245_);
lean_dec(v_a_5244_);
lean_dec_ref(v_a_5243_);
lean_dec(v_a_5242_);
lean_dec_ref(v_a_5241_);
lean_dec(v_a_5240_);
lean_dec(v_a_5239_);
lean_dec_ref(v_a_5238_);
lean_dec(v_a_5237_);
lean_dec_ref(v_distanceExpr_5231_);
return v_res_5250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goBvLit___boxed(lean_object* v_x_5251_, lean_object* v_a_5252_, lean_object* v_a_5253_, lean_object* v_a_5254_, lean_object* v_a_5255_, lean_object* v_a_5256_, lean_object* v_a_5257_, lean_object* v_a_5258_, lean_object* v_a_5259_, lean_object* v_a_5260_, lean_object* v_a_5261_, lean_object* v_a_5262_, lean_object* v_a_5263_, lean_object* v_a_5264_){
_start:
{
lean_object* v_res_5265_; 
v_res_5265_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goBvLit(v_x_5251_, v_a_5252_, v_a_5253_, v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5258_, v_a_5259_, v_a_5260_, v_a_5261_, v_a_5262_, v_a_5263_);
lean_dec(v_a_5263_);
lean_dec_ref(v_a_5262_);
lean_dec(v_a_5261_);
lean_dec_ref(v_a_5260_);
lean_dec(v_a_5259_);
lean_dec_ref(v_a_5258_);
lean_dec(v_a_5257_);
lean_dec_ref(v_a_5256_);
lean_dec(v_a_5255_);
lean_dec(v_a_5254_);
lean_dec_ref(v_a_5253_);
lean_dec(v_a_5252_);
return v_res_5265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_bitVecAtom___boxed(lean_object* v_e_5266_, lean_object* v_synthetic_5267_, lean_object* v_a_5268_, lean_object* v_a_5269_, lean_object* v_a_5270_, lean_object* v_a_5271_, lean_object* v_a_5272_, lean_object* v_a_5273_, lean_object* v_a_5274_, lean_object* v_a_5275_, lean_object* v_a_5276_, lean_object* v_a_5277_, lean_object* v_a_5278_, lean_object* v_a_5279_, lean_object* v_a_5280_){
_start:
{
uint8_t v_synthetic_boxed_5281_; lean_object* v_res_5282_; 
v_synthetic_boxed_5281_ = lean_unbox(v_synthetic_5267_);
v_res_5282_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_bitVecAtom(v_e_5266_, v_synthetic_boxed_5281_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_, v_a_5272_, v_a_5273_, v_a_5274_, v_a_5275_, v_a_5276_, v_a_5277_, v_a_5278_, v_a_5279_);
lean_dec(v_a_5279_);
lean_dec_ref(v_a_5278_);
lean_dec(v_a_5277_);
lean_dec_ref(v_a_5276_);
lean_dec(v_a_5275_);
lean_dec_ref(v_a_5274_);
lean_dec(v_a_5273_);
lean_dec_ref(v_a_5272_);
lean_dec(v_a_5271_);
lean_dec(v_a_5270_);
lean_dec_ref(v_a_5269_);
lean_dec(v_a_5268_);
return v_res_5282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_boolAtom___boxed(lean_object* v_t_5283_, lean_object* v_a_5284_, lean_object* v_a_5285_, lean_object* v_a_5286_, lean_object* v_a_5287_, lean_object* v_a_5288_, lean_object* v_a_5289_, lean_object* v_a_5290_, lean_object* v_a_5291_, lean_object* v_a_5292_, lean_object* v_a_5293_, lean_object* v_a_5294_, lean_object* v_a_5295_, lean_object* v_a_5296_){
_start:
{
lean_object* v_res_5297_; 
v_res_5297_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_boolAtom(v_t_5283_, v_a_5284_, v_a_5285_, v_a_5286_, v_a_5287_, v_a_5288_, v_a_5289_, v_a_5290_, v_a_5291_, v_a_5292_, v_a_5293_, v_a_5294_, v_a_5295_);
lean_dec(v_a_5295_);
lean_dec_ref(v_a_5294_);
lean_dec(v_a_5293_);
lean_dec_ref(v_a_5292_);
lean_dec(v_a_5291_);
lean_dec_ref(v_a_5290_);
lean_dec(v_a_5289_);
lean_dec_ref(v_a_5288_);
lean_dec(v_a_5287_);
lean_dec(v_a_5286_);
lean_dec_ref(v_a_5285_);
lean_dec(v_a_5284_);
return v_res_5297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred___boxed(lean_object* v_origExpr_5298_, lean_object* v_a_5299_, lean_object* v_a_5300_, lean_object* v_a_5301_, lean_object* v_a_5302_, lean_object* v_a_5303_, lean_object* v_a_5304_, lean_object* v_a_5305_, lean_object* v_a_5306_, lean_object* v_a_5307_, lean_object* v_a_5308_, lean_object* v_a_5309_, lean_object* v_a_5310_, lean_object* v_a_5311_){
_start:
{
lean_object* v_res_5312_; 
v_res_5312_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goPred(v_origExpr_5298_, v_a_5299_, v_a_5300_, v_a_5301_, v_a_5302_, v_a_5303_, v_a_5304_, v_a_5305_, v_a_5306_, v_a_5307_, v_a_5308_, v_a_5309_, v_a_5310_);
lean_dec(v_a_5310_);
lean_dec_ref(v_a_5309_);
lean_dec(v_a_5308_);
lean_dec_ref(v_a_5307_);
lean_dec(v_a_5306_);
lean_dec_ref(v_a_5305_);
lean_dec(v_a_5304_);
lean_dec_ref(v_a_5303_);
lean_dec(v_a_5302_);
lean_dec(v_a_5301_);
lean_dec_ref(v_a_5300_);
lean_dec(v_a_5299_);
return v_res_5312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_binaryReflection___boxed(lean_object** _args){
lean_object* v_lhsExpr_5313_ = _args[0];
lean_object* v_rhsExpr_5314_ = _args[1];
lean_object* v_pred_5315_ = _args[2];
lean_object* v_origExpr_5316_ = _args[3];
lean_object* v_a_5317_ = _args[4];
lean_object* v_a_5318_ = _args[5];
lean_object* v_a_5319_ = _args[6];
lean_object* v_a_5320_ = _args[7];
lean_object* v_a_5321_ = _args[8];
lean_object* v_a_5322_ = _args[9];
lean_object* v_a_5323_ = _args[10];
lean_object* v_a_5324_ = _args[11];
lean_object* v_a_5325_ = _args[12];
lean_object* v_a_5326_ = _args[13];
lean_object* v_a_5327_ = _args[14];
lean_object* v_a_5328_ = _args[15];
lean_object* v_a_5329_ = _args[16];
_start:
{
uint8_t v_pred_boxed_5330_; lean_object* v_res_5331_; 
v_pred_boxed_5330_ = lean_unbox(v_pred_5315_);
v_res_5331_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_binaryReflection(v_lhsExpr_5313_, v_rhsExpr_5314_, v_pred_boxed_5330_, v_origExpr_5316_, v_a_5317_, v_a_5318_, v_a_5319_, v_a_5320_, v_a_5321_, v_a_5322_, v_a_5323_, v_a_5324_, v_a_5325_, v_a_5326_, v_a_5327_, v_a_5328_);
lean_dec(v_a_5328_);
lean_dec_ref(v_a_5327_);
lean_dec(v_a_5326_);
lean_dec_ref(v_a_5325_);
lean_dec(v_a_5324_);
lean_dec_ref(v_a_5323_);
lean_dec(v_a_5322_);
lean_dec_ref(v_a_5321_);
lean_dec(v_a_5320_);
lean_dec(v_a_5319_);
lean_dec_ref(v_a_5318_);
lean_dec(v_a_5317_);
return v_res_5331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_gateReflection___boxed(lean_object** _args){
lean_object* v_lhsExpr_5332_ = _args[0];
lean_object* v_rhsExpr_5333_ = _args[1];
lean_object* v_gate_5334_ = _args[2];
lean_object* v_origExpr_5335_ = _args[3];
lean_object* v_a_5336_ = _args[4];
lean_object* v_a_5337_ = _args[5];
lean_object* v_a_5338_ = _args[6];
lean_object* v_a_5339_ = _args[7];
lean_object* v_a_5340_ = _args[8];
lean_object* v_a_5341_ = _args[9];
lean_object* v_a_5342_ = _args[10];
lean_object* v_a_5343_ = _args[11];
lean_object* v_a_5344_ = _args[12];
lean_object* v_a_5345_ = _args[13];
lean_object* v_a_5346_ = _args[14];
lean_object* v_a_5347_ = _args[15];
lean_object* v_a_5348_ = _args[16];
_start:
{
uint8_t v_gate_boxed_5349_; lean_object* v_res_5350_; 
v_gate_boxed_5349_ = lean_unbox(v_gate_5334_);
v_res_5350_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_gateReflection(v_lhsExpr_5332_, v_rhsExpr_5333_, v_gate_boxed_5349_, v_origExpr_5335_, v_a_5336_, v_a_5337_, v_a_5338_, v_a_5339_, v_a_5340_, v_a_5341_, v_a_5342_, v_a_5343_, v_a_5344_, v_a_5345_, v_a_5346_, v_a_5347_);
lean_dec(v_a_5347_);
lean_dec_ref(v_a_5346_);
lean_dec(v_a_5345_);
lean_dec_ref(v_a_5344_);
lean_dec(v_a_5343_);
lean_dec_ref(v_a_5342_);
lean_dec(v_a_5341_);
lean_dec_ref(v_a_5340_);
lean_dec(v_a_5339_);
lean_dec(v_a_5338_);
lean_dec_ref(v_a_5337_);
lean_dec(v_a_5336_);
return v_res_5350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2___boxed(lean_object* v_e_5351_, lean_object* v_a_5352_, lean_object* v_a_5353_, lean_object* v_a_5354_, lean_object* v_a_5355_, lean_object* v_a_5356_, lean_object* v_a_5357_, lean_object* v_a_5358_, lean_object* v_a_5359_, lean_object* v_a_5360_, lean_object* v_a_5361_, lean_object* v_a_5362_, lean_object* v_a_5363_, lean_object* v_a_5364_){
_start:
{
lean_object* v_res_5365_; 
v_res_5365_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2(v_e_5351_, v_a_5352_, v_a_5353_, v_a_5354_, v_a_5355_, v_a_5356_, v_a_5357_, v_a_5358_, v_a_5359_, v_a_5360_, v_a_5361_, v_a_5362_, v_a_5363_);
lean_dec(v_a_5363_);
lean_dec_ref(v_a_5362_);
lean_dec(v_a_5361_);
lean_dec_ref(v_a_5360_);
lean_dec(v_a_5359_);
lean_dec_ref(v_a_5358_);
lean_dec(v_a_5357_);
lean_dec_ref(v_a_5356_);
lean_dec(v_a_5355_);
lean_dec(v_a_5354_);
lean_dec_ref(v_a_5353_);
lean_dec(v_a_5352_);
return v_res_5365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVPredCache___at___00Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_spec__23___boxed(lean_object* v_e_5366_, lean_object* v_a_5367_, lean_object* v_a_5368_, lean_object* v_a_5369_, lean_object* v_a_5370_, lean_object* v_a_5371_, lean_object* v_a_5372_, lean_object* v_a_5373_, lean_object* v_a_5374_, lean_object* v_a_5375_, lean_object* v_a_5376_, lean_object* v_a_5377_, lean_object* v_a_5378_, lean_object* v_a_5379_){
_start:
{
lean_object* v_res_5380_; 
v_res_5380_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVPredCache___at___00Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_spec__23(v_e_5366_, v_a_5367_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_, v_a_5372_, v_a_5373_, v_a_5374_, v_a_5375_, v_a_5376_, v_a_5377_, v_a_5378_);
lean_dec(v_a_5378_);
lean_dec_ref(v_a_5377_);
lean_dec(v_a_5376_);
lean_dec_ref(v_a_5375_);
lean_dec(v_a_5374_);
lean_dec_ref(v_a_5373_);
lean_dec(v_a_5372_);
lean_dec_ref(v_a_5371_);
lean_dec(v_a_5370_);
lean_dec(v_a_5369_);
lean_dec_ref(v_a_5368_);
lean_dec(v_a_5367_);
return v_res_5380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVExprCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom_spec__10___boxed(lean_object* v_e_5381_, lean_object* v_a_5382_, lean_object* v_a_5383_, lean_object* v_a_5384_, lean_object* v_a_5385_, lean_object* v_a_5386_, lean_object* v_a_5387_, lean_object* v_a_5388_, lean_object* v_a_5389_, lean_object* v_a_5390_, lean_object* v_a_5391_, lean_object* v_a_5392_, lean_object* v_a_5393_, lean_object* v_a_5394_){
_start:
{
lean_object* v_res_5395_; 
v_res_5395_ = l_Lean_Meta_Tactic_BVDecide_LemmaM_withBVExprCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_goOrAtom_spec__10(v_e_5381_, v_a_5382_, v_a_5383_, v_a_5384_, v_a_5385_, v_a_5386_, v_a_5387_, v_a_5388_, v_a_5389_, v_a_5390_, v_a_5391_, v_a_5392_, v_a_5393_);
lean_dec(v_a_5393_);
lean_dec_ref(v_a_5392_);
lean_dec(v_a_5391_);
lean_dec_ref(v_a_5390_);
lean_dec(v_a_5389_);
lean_dec_ref(v_a_5388_);
lean_dec(v_a_5387_);
lean_dec_ref(v_a_5386_);
lean_dec(v_a_5385_);
lean_dec(v_a_5384_);
lean_dec_ref(v_a_5383_);
lean_dec(v_a_5382_);
return v_res_5395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection___boxed(lean_object** _args){
lean_object* v_distance_5396_ = _args[0];
lean_object* v_innerExpr_5397_ = _args[1];
lean_object* v_shiftOp_5398_ = _args[2];
lean_object* v_shiftOpName_5399_ = _args[3];
lean_object* v_congrThm_5400_ = _args[4];
lean_object* v_origExpr_5401_ = _args[5];
lean_object* v_a_5402_ = _args[6];
lean_object* v_a_5403_ = _args[7];
lean_object* v_a_5404_ = _args[8];
lean_object* v_a_5405_ = _args[9];
lean_object* v_a_5406_ = _args[10];
lean_object* v_a_5407_ = _args[11];
lean_object* v_a_5408_ = _args[12];
lean_object* v_a_5409_ = _args[13];
lean_object* v_a_5410_ = _args[14];
lean_object* v_a_5411_ = _args[15];
lean_object* v_a_5412_ = _args[16];
lean_object* v_a_5413_ = _args[17];
lean_object* v_a_5414_ = _args[18];
_start:
{
lean_object* v_res_5415_; 
v_res_5415_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftConstLikeReflection(v_distance_5396_, v_innerExpr_5397_, v_shiftOp_5398_, v_shiftOpName_5399_, v_congrThm_5400_, v_origExpr_5401_, v_a_5402_, v_a_5403_, v_a_5404_, v_a_5405_, v_a_5406_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_, v_a_5413_);
lean_dec(v_a_5413_);
lean_dec_ref(v_a_5412_);
lean_dec(v_a_5411_);
lean_dec_ref(v_a_5410_);
lean_dec(v_a_5409_);
lean_dec_ref(v_a_5408_);
lean_dec(v_a_5407_);
lean_dec_ref(v_a_5406_);
lean_dec(v_a_5405_);
lean_dec(v_a_5404_);
lean_dec_ref(v_a_5403_);
lean_dec(v_a_5402_);
return v_res_5415_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftReflection___boxed(lean_object** _args){
lean_object* v_distanceExpr_5416_ = _args[0];
lean_object* v_innerExpr_5417_ = _args[1];
lean_object* v_shiftOp_5418_ = _args[2];
lean_object* v_shiftOpName_5419_ = _args[3];
lean_object* v_congrThm_5420_ = _args[4];
lean_object* v_origExpr_5421_ = _args[5];
lean_object* v_a_5422_ = _args[6];
lean_object* v_a_5423_ = _args[7];
lean_object* v_a_5424_ = _args[8];
lean_object* v_a_5425_ = _args[9];
lean_object* v_a_5426_ = _args[10];
lean_object* v_a_5427_ = _args[11];
lean_object* v_a_5428_ = _args[12];
lean_object* v_a_5429_ = _args[13];
lean_object* v_a_5430_ = _args[14];
lean_object* v_a_5431_ = _args[15];
lean_object* v_a_5432_ = _args[16];
lean_object* v_a_5433_ = _args[17];
lean_object* v_a_5434_ = _args[18];
_start:
{
lean_object* v_res_5435_; 
v_res_5435_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_shiftReflection(v_distanceExpr_5416_, v_innerExpr_5417_, v_shiftOp_5418_, v_shiftOpName_5419_, v_congrThm_5420_, v_origExpr_5421_, v_a_5422_, v_a_5423_, v_a_5424_, v_a_5425_, v_a_5426_, v_a_5427_, v_a_5428_, v_a_5429_, v_a_5430_, v_a_5431_, v_a_5432_, v_a_5433_);
lean_dec(v_a_5433_);
lean_dec_ref(v_a_5432_);
lean_dec(v_a_5431_);
lean_dec_ref(v_a_5430_);
lean_dec(v_a_5429_);
lean_dec_ref(v_a_5428_);
lean_dec(v_a_5427_);
lean_dec_ref(v_a_5426_);
lean_dec(v_a_5425_);
lean_dec(v_a_5424_);
lean_dec_ref(v_a_5423_);
lean_dec(v_a_5422_);
return v_res_5435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom___boxed(lean_object* v_e_5436_, lean_object* v_a_5437_, lean_object* v_a_5438_, lean_object* v_a_5439_, lean_object* v_a_5440_, lean_object* v_a_5441_, lean_object* v_a_5442_, lean_object* v_a_5443_, lean_object* v_a_5444_, lean_object* v_a_5445_, lean_object* v_a_5446_, lean_object* v_a_5447_, lean_object* v_a_5448_, lean_object* v_a_5449_){
_start:
{
lean_object* v_res_5450_; 
v_res_5450_ = l_Lean_Meta_Tactic_BVDecide_ReifiedBVPred_boolAtom(v_e_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_, v_a_5441_, v_a_5442_, v_a_5443_, v_a_5444_, v_a_5445_, v_a_5446_, v_a_5447_, v_a_5448_);
lean_dec(v_a_5448_);
lean_dec_ref(v_a_5447_);
lean_dec(v_a_5446_);
lean_dec_ref(v_a_5445_);
lean_dec(v_a_5444_);
lean_dec_ref(v_a_5443_);
lean_dec(v_a_5442_);
lean_dec_ref(v_a_5441_);
lean_dec(v_a_5440_);
lean_dec(v_a_5439_);
lean_dec_ref(v_a_5438_);
lean_dec(v_a_5437_);
return v_res_5450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom___boxed(lean_object* v_e_5451_, lean_object* v_width_5452_, lean_object* v_synthetic_5453_, lean_object* v_a_5454_, lean_object* v_a_5455_, lean_object* v_a_5456_, lean_object* v_a_5457_, lean_object* v_a_5458_, lean_object* v_a_5459_, lean_object* v_a_5460_, lean_object* v_a_5461_, lean_object* v_a_5462_, lean_object* v_a_5463_, lean_object* v_a_5464_, lean_object* v_a_5465_, lean_object* v_a_5466_){
_start:
{
uint8_t v_synthetic_boxed_5467_; lean_object* v_res_5468_; 
v_synthetic_boxed_5467_ = lean_unbox(v_synthetic_5453_);
v_res_5468_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom(v_e_5451_, v_width_5452_, v_synthetic_boxed_5467_, v_a_5454_, v_a_5455_, v_a_5456_, v_a_5457_, v_a_5458_, v_a_5459_, v_a_5460_, v_a_5461_, v_a_5462_, v_a_5463_, v_a_5464_, v_a_5465_);
lean_dec(v_a_5465_);
lean_dec_ref(v_a_5464_);
lean_dec(v_a_5463_);
lean_dec_ref(v_a_5462_);
lean_dec(v_a_5461_);
lean_dec_ref(v_a_5460_);
lean_dec(v_a_5459_);
lean_dec_ref(v_a_5458_);
lean_dec(v_a_5457_);
lean_dec(v_a_5456_);
lean_dec_ref(v_a_5455_);
lean_dec(v_a_5454_);
return v_res_5468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_spec__6___boxed(lean_object** _args){
lean_object* v_as_5469_ = _args[0];
lean_object* v_i_5470_ = _args[1];
lean_object* v_stop_5471_ = _args[2];
lean_object* v_b_5472_ = _args[3];
lean_object* v___y_5473_ = _args[4];
lean_object* v___y_5474_ = _args[5];
lean_object* v___y_5475_ = _args[6];
lean_object* v___y_5476_ = _args[7];
lean_object* v___y_5477_ = _args[8];
lean_object* v___y_5478_ = _args[9];
lean_object* v___y_5479_ = _args[10];
lean_object* v___y_5480_ = _args[11];
lean_object* v___y_5481_ = _args[12];
lean_object* v___y_5482_ = _args[13];
lean_object* v___y_5483_ = _args[14];
lean_object* v___y_5484_ = _args[15];
lean_object* v___y_5485_ = _args[16];
_start:
{
size_t v_i_boxed_5486_; size_t v_stop_boxed_5487_; lean_object* v_res_5488_; 
v_i_boxed_5486_ = lean_unbox_usize(v_i_5470_);
lean_dec(v_i_5470_);
v_stop_boxed_5487_ = lean_unbox_usize(v_stop_5471_);
lean_dec(v_stop_5471_);
v_res_5488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_registerAtom_spec__6(v_as_5469_, v_i_boxed_5486_, v_stop_boxed_5487_, v_b_5472_, v___y_5473_, v___y_5474_, v___y_5475_, v___y_5476_, v___y_5477_, v___y_5478_, v___y_5479_, v___y_5480_, v___y_5481_, v___y_5482_, v___y_5483_, v___y_5484_);
lean_dec(v___y_5484_);
lean_dec_ref(v___y_5483_);
lean_dec(v___y_5482_);
lean_dec_ref(v___y_5481_);
lean_dec(v___y_5480_);
lean_dec_ref(v___y_5479_);
lean_dec(v___y_5478_);
lean_dec_ref(v___y_5477_);
lean_dec(v___y_5476_);
lean_dec(v___y_5475_);
lean_dec_ref(v___y_5474_);
lean_dec(v___y_5473_);
lean_dec_ref(v_as_5469_);
return v_res_5488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection___boxed(lean_object** _args){
lean_object* v_innerExpr_5489_ = _args[0];
lean_object* v_op_5490_ = _args[1];
lean_object* v_congrThm_5491_ = _args[2];
lean_object* v_origExpr_5492_ = _args[3];
lean_object* v_a_5493_ = _args[4];
lean_object* v_a_5494_ = _args[5];
lean_object* v_a_5495_ = _args[6];
lean_object* v_a_5496_ = _args[7];
lean_object* v_a_5497_ = _args[8];
lean_object* v_a_5498_ = _args[9];
lean_object* v_a_5499_ = _args[10];
lean_object* v_a_5500_ = _args[11];
lean_object* v_a_5501_ = _args[12];
lean_object* v_a_5502_ = _args[13];
lean_object* v_a_5503_ = _args[14];
lean_object* v_a_5504_ = _args[15];
lean_object* v_a_5505_ = _args[16];
_start:
{
lean_object* v_res_5506_; 
v_res_5506_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_unaryReflection(v_innerExpr_5489_, v_op_5490_, v_congrThm_5491_, v_origExpr_5492_, v_a_5493_, v_a_5494_, v_a_5495_, v_a_5496_, v_a_5497_, v_a_5498_, v_a_5499_, v_a_5500_, v_a_5501_, v_a_5502_, v_a_5503_, v_a_5504_);
lean_dec(v_a_5504_);
lean_dec_ref(v_a_5503_);
lean_dec(v_a_5502_);
lean_dec_ref(v_a_5501_);
lean_dec(v_a_5500_);
lean_dec_ref(v_a_5499_);
lean_dec(v_a_5498_);
lean_dec_ref(v_a_5497_);
lean_dec(v_a_5496_);
lean_dec(v_a_5495_);
lean_dec_ref(v_a_5494_);
lean_dec(v_a_5493_);
return v_res_5506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection___boxed(lean_object** _args){
lean_object* v_lhsExpr_5507_ = _args[0];
lean_object* v_rhsExpr_5508_ = _args[1];
lean_object* v_op_5509_ = _args[2];
lean_object* v_congrThm_5510_ = _args[3];
lean_object* v_origExpr_5511_ = _args[4];
lean_object* v_a_5512_ = _args[5];
lean_object* v_a_5513_ = _args[6];
lean_object* v_a_5514_ = _args[7];
lean_object* v_a_5515_ = _args[8];
lean_object* v_a_5516_ = _args[9];
lean_object* v_a_5517_ = _args[10];
lean_object* v_a_5518_ = _args[11];
lean_object* v_a_5519_ = _args[12];
lean_object* v_a_5520_ = _args[13];
lean_object* v_a_5521_ = _args[14];
lean_object* v_a_5522_ = _args[15];
lean_object* v_a_5523_ = _args[16];
lean_object* v_a_5524_ = _args[17];
_start:
{
uint8_t v_op_boxed_5525_; lean_object* v_res_5526_; 
v_op_boxed_5525_ = lean_unbox(v_op_5509_);
v_res_5526_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_binaryReflection(v_lhsExpr_5507_, v_rhsExpr_5508_, v_op_boxed_5525_, v_congrThm_5510_, v_origExpr_5511_, v_a_5512_, v_a_5513_, v_a_5514_, v_a_5515_, v_a_5516_, v_a_5517_, v_a_5518_, v_a_5519_, v_a_5520_, v_a_5521_, v_a_5522_, v_a_5523_);
lean_dec(v_a_5523_);
lean_dec_ref(v_a_5522_);
lean_dec(v_a_5521_);
lean_dec_ref(v_a_5520_);
lean_dec(v_a_5519_);
lean_dec_ref(v_a_5518_);
lean_dec(v_a_5517_);
lean_dec_ref(v_a_5516_);
lean_dec(v_a_5515_);
lean_dec(v_a_5514_);
lean_dec_ref(v_a_5513_);
lean_dec(v_a_5512_);
return v_res_5526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go___boxed(lean_object* v_origExpr_5527_, lean_object* v_a_5528_, lean_object* v_a_5529_, lean_object* v_a_5530_, lean_object* v_a_5531_, lean_object* v_a_5532_, lean_object* v_a_5533_, lean_object* v_a_5534_, lean_object* v_a_5535_, lean_object* v_a_5536_, lean_object* v_a_5537_, lean_object* v_a_5538_, lean_object* v_a_5539_, lean_object* v_a_5540_){
_start:
{
lean_object* v_res_5541_; 
v_res_5541_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVPred_of_go(v_origExpr_5527_, v_a_5528_, v_a_5529_, v_a_5530_, v_a_5531_, v_a_5532_, v_a_5533_, v_a_5534_, v_a_5535_, v_a_5536_, v_a_5537_, v_a_5538_, v_a_5539_);
lean_dec(v_a_5539_);
lean_dec_ref(v_a_5538_);
lean_dec(v_a_5537_);
lean_dec_ref(v_a_5536_);
lean_dec(v_a_5535_);
lean_dec_ref(v_a_5534_);
lean_dec(v_a_5533_);
lean_dec_ref(v_a_5532_);
lean_dec(v_a_5531_);
lean_dec(v_a_5530_);
lean_dec_ref(v_a_5529_);
lean_dec(v_a_5528_);
return v_res_5541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go___boxed(lean_object* v_origExpr_5542_, lean_object* v_a_5543_, lean_object* v_a_5544_, lean_object* v_a_5545_, lean_object* v_a_5546_, lean_object* v_a_5547_, lean_object* v_a_5548_, lean_object* v_a_5549_, lean_object* v_a_5550_, lean_object* v_a_5551_, lean_object* v_a_5552_, lean_object* v_a_5553_, lean_object* v_a_5554_, lean_object* v_a_5555_){
_start:
{
lean_object* v_res_5556_; 
v_res_5556_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_go(v_origExpr_5542_, v_a_5543_, v_a_5544_, v_a_5545_, v_a_5546_, v_a_5547_, v_a_5548_, v_a_5549_, v_a_5550_, v_a_5551_, v_a_5552_, v_a_5553_, v_a_5554_);
lean_dec(v_a_5554_);
lean_dec_ref(v_a_5553_);
lean_dec(v_a_5552_);
lean_dec_ref(v_a_5551_);
lean_dec(v_a_5550_);
lean_dec_ref(v_a_5549_);
lean_dec(v_a_5548_);
lean_dec_ref(v_a_5547_);
lean_dec(v_a_5546_);
lean_dec(v_a_5545_);
lean_dec_ref(v_a_5544_);
lean_dec(v_a_5543_);
return v_res_5556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go___boxed(lean_object* v_origExpr_5557_, lean_object* v_a_5558_, lean_object* v_a_5559_, lean_object* v_a_5560_, lean_object* v_a_5561_, lean_object* v_a_5562_, lean_object* v_a_5563_, lean_object* v_a_5564_, lean_object* v_a_5565_, lean_object* v_a_5566_, lean_object* v_a_5567_, lean_object* v_a_5568_, lean_object* v_a_5569_, lean_object* v_a_5570_){
_start:
{
lean_object* v_res_5571_; 
v_res_5571_ = l___private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go(v_origExpr_5557_, v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_, v_a_5568_, v_a_5569_);
lean_dec(v_a_5569_);
lean_dec_ref(v_a_5568_);
lean_dec(v_a_5567_);
lean_dec_ref(v_a_5566_);
lean_dec(v_a_5565_);
lean_dec_ref(v_a_5564_);
lean_dec(v_a_5563_);
lean_dec_ref(v_a_5562_);
lean_dec(v_a_5561_);
lean_dec(v_a_5560_);
lean_dec_ref(v_a_5559_);
lean_dec(v_a_5558_);
return v_res_5571_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13(lean_object* v_00_u03b1_5572_, lean_object* v_msg_5573_, lean_object* v___y_5574_, lean_object* v___y_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_, lean_object* v___y_5580_, lean_object* v___y_5581_, lean_object* v___y_5582_, lean_object* v___y_5583_, lean_object* v___y_5584_, lean_object* v___y_5585_){
_start:
{
lean_object* v___x_5587_; 
v___x_5587_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___redArg(v_msg_5573_, v___y_5582_, v___y_5583_, v___y_5584_, v___y_5585_);
return v___x_5587_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13___boxed(lean_object* v_00_u03b1_5588_, lean_object* v_msg_5589_, lean_object* v___y_5590_, lean_object* v___y_5591_, lean_object* v___y_5592_, lean_object* v___y_5593_, lean_object* v___y_5594_, lean_object* v___y_5595_, lean_object* v___y_5596_, lean_object* v___y_5597_, lean_object* v___y_5598_, lean_object* v___y_5599_, lean_object* v___y_5600_, lean_object* v___y_5601_, lean_object* v___y_5602_){
_start:
{
lean_object* v_res_5603_; 
v_res_5603_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVExpr_of_go_spec__13(v_00_u03b1_5588_, v_msg_5589_, v___y_5590_, v___y_5591_, v___y_5592_, v___y_5593_, v___y_5594_, v___y_5595_, v___y_5596_, v___y_5597_, v___y_5598_, v___y_5599_, v___y_5600_, v___y_5601_);
lean_dec(v___y_5601_);
lean_dec_ref(v___y_5600_);
lean_dec(v___y_5599_);
lean_dec_ref(v___y_5598_);
lean_dec(v___y_5597_);
lean_dec_ref(v___y_5596_);
lean_dec(v___y_5595_);
lean_dec_ref(v___y_5594_);
lean_dec(v___y_5593_);
lean_dec(v___y_5592_);
lean_dec_ref(v___y_5591_);
lean_dec(v___y_5590_);
return v_res_5603_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16(lean_object* v_00_u03b2_5604_, lean_object* v_m_5605_, lean_object* v_a_5606_){
_start:
{
lean_object* v___x_5607_; 
v___x_5607_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___redArg(v_m_5605_, v_a_5606_);
return v___x_5607_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16___boxed(lean_object* v_00_u03b2_5608_, lean_object* v_m_5609_, lean_object* v_a_5610_){
_start:
{
lean_object* v_res_5611_; 
v_res_5611_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16(v_00_u03b2_5608_, v_m_5609_, v_a_5610_);
lean_dec_ref(v_a_5610_);
lean_dec_ref(v_m_5609_);
return v_res_5611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17(lean_object* v_00_u03b2_5612_, lean_object* v_m_5613_, lean_object* v_a_5614_, lean_object* v_b_5615_){
_start:
{
lean_object* v___x_5616_; 
v___x_5616_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17___redArg(v_m_5613_, v_a_5614_, v_b_5615_);
return v___x_5616_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22(lean_object* v_00_u03b2_5617_, lean_object* v_a_5618_, lean_object* v_x_5619_){
_start:
{
lean_object* v___x_5620_; 
v___x_5620_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22___redArg(v_a_5618_, v_x_5619_);
return v___x_5620_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22___boxed(lean_object* v_00_u03b2_5621_, lean_object* v_a_5622_, lean_object* v_x_5623_){
_start:
{
lean_object* v_res_5624_; 
v_res_5624_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__16_spec__22(v_00_u03b2_5621_, v_a_5622_, v_x_5623_);
lean_dec(v_x_5623_);
lean_dec_ref(v_a_5622_);
return v_res_5624_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24(lean_object* v_00_u03b2_5625_, lean_object* v_a_5626_, lean_object* v_x_5627_){
_start:
{
uint8_t v___x_5628_; 
v___x_5628_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24___redArg(v_a_5626_, v_x_5627_);
return v___x_5628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24___boxed(lean_object* v_00_u03b2_5629_, lean_object* v_a_5630_, lean_object* v_x_5631_){
_start:
{
uint8_t v_res_5632_; lean_object* v_r_5633_; 
v_res_5632_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__24(v_00_u03b2_5629_, v_a_5630_, v_x_5631_);
lean_dec(v_x_5631_);
lean_dec_ref(v_a_5630_);
v_r_5633_ = lean_box(v_res_5632_);
return v_r_5633_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25(lean_object* v_00_u03b2_5634_, lean_object* v_data_5635_){
_start:
{
lean_object* v___x_5636_; 
v___x_5636_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25___redArg(v_data_5635_);
return v___x_5636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__26(lean_object* v_00_u03b2_5637_, lean_object* v_a_5638_, lean_object* v_b_5639_, lean_object* v_x_5640_){
_start:
{
lean_object* v___x_5641_; 
v___x_5641_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__26___redArg(v_a_5638_, v_b_5639_, v_x_5640_);
return v___x_5641_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30(lean_object* v_00_u03b2_5642_, lean_object* v_i_5643_, lean_object* v_source_5644_, lean_object* v_target_5645_){
_start:
{
lean_object* v___x_5646_; 
v___x_5646_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30___redArg(v_i_5643_, v_source_5644_, v_target_5645_);
return v___x_5646_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30_spec__31(lean_object* v_00_u03b2_5647_, lean_object* v_x_5648_, lean_object* v_x_5649_){
_start:
{
lean_object* v___x_5650_; 
v___x_5650_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_LemmaM_withBVLogicalCache___at___00__private_Lean_Meta_Tactic_BVDecide_Reflect_Reify_0__Lean_Meta_Tactic_BVDecide_ReifiedBVLogical_of_goOrAtom_spec__2_spec__17_spec__25_spec__30_spec__31___redArg(v_x_5648_, v_x_5649_);
return v___x_5650_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Reflect(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Reflect(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVPred(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Reflect_ReifiedBVLogical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Reflect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Reflect_Reify(builtin);
}
#ifdef __cplusplus
}
#endif
